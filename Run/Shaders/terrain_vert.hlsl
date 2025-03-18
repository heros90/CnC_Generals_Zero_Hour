// DX9 Pixel Shader - HLSL version - Fixed
sampler2D Tex0 : register(s0);         // First texture
sampler2D Tex1 : register(s1);         // Second texture

// Constants that can be set from the application
float4 AmbientColor : register(c0);    // Global ambient light color
float4 Intensity    : register(c1);    // Global intensity multiplier (using x component)

struct PS_INPUT
{
    float2 TexCoord : TEXCOORD0;       // Texture coordinates
    float4 Diffuse  : COLOR0;          // Diffuse lighting, alpha used as blend factor
};

float4 main(PS_INPUT input) : COLOR
{
    // Sample both textures with bilinear filtering
    float4 color0 = tex2D(Tex0, input.TexCoord);
    float4 color1 = tex2D(Tex1, input.TexCoord);
    
    // Skip processing fully transparent pixels for performance
    if ((color0.a * color1.a) < 0.01f)
        clip(-1);
    
    // Linearly interpolate between the two textures using the alpha value
    float4 blended = lerp(color0, color1, saturate(input.Diffuse.a));
    
    // Apply ambient lighting
    blended.rgb += AmbientColor.rgb * AmbientColor.a;
    
    // Multiply by the diffuse lighting (RGB components only)
    blended.rgb *= input.Diffuse.rgb;
    
    // Apply global intensity adjustment
    blended.rgb *= Intensity.x;
    
    // Ensure final color values are in valid range
    blended.rgb = saturate(blended.rgb);
    
    return blended;
}