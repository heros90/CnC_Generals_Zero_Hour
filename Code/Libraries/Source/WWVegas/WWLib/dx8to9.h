#ifndef DX8TO9_H
#define DX8TO9_H

// jmarshall: added D3D9on12 support. 

#include <d3d9on12.h>

// Direct3D interfaces
#define IDirect3D8                 IDirect3D9Ex
#define IDirect3DDevice8           IDirect3DDevice9Ex
#define IDirect3DResource8         IDirect3DResource9
#define IDirect3DBaseTexture8      IDirect3DBaseTexture9
#define IDirect3DCubeTexture8      IDirect3DCubeTexture9
#define IDirect3DVolumeTexture8    IDirect3DVolumeTexture9
#define IDirect3DVertexBuffer8     IDirect3DVertexBuffer9
#define IDirect3DIndexBuffer8      IDirect3DIndexBuffer9
#define IDirect3DSurface8          IDirect3DSurface9
#define IDirect3DVolume8           IDirect3DVolume9
#define IDirect3DSwapChain8        IDirect3DSwapChain9

// Pointer renames
#define LPDIRECT3DDEVICE8           LPDIRECT3DDEVICE9
#define LPDIRECT3DSURFACE8          LPDIRECT3DSURFACE9
#define LPDIRECT3DTEXTURE8          LPDIRECT3DTEXTURE9
#define LPDIRECT3DVERTEXBUFFER8     LPDIRECT3DVERTEXBUFFER9
#define LPDIRECT3DINDEXBUFFER8      LPDIRECT3DINDEXBUFFER9

// Core structures
#define D3DCAPS8                    D3DCAPS9
#define D3DPRESENT_PARAMETERS8      D3DPRESENT_PARAMETERS9
#define D3DLIGHT8                   D3DLIGHT9
#define D3DMATERIAL8                D3DMATERIAL9
#define D3DVIEWPORT8                D3DVIEWPORT9
#define D3DCLIPSTATUS8              D3DCLIPSTATUS9

// Vertex structures
#define D3DVERTEXBUFFER_DESC8       D3DVERTEXBUFFER_DESC9
#define D3DINDEXBUFFER_DESC8        D3DINDEXBUFFER_DESC9
#define D3DVERTEXELEMENT8           D3DVERTEXELEMENT9

// Resource structures
#define D3DRESOURCESTATS8           D3DRESOURCESTATS9
#define D3DDEVINFO_RESOURCEMANAGER8 D3DDEVINFO_RESOURCEMANAGER9

// Surface and texture structures
#define D3DSURFACE_DESC8            D3DSURFACE_DESC9
#define D3DVOLUME_DESC8             D3DVOLUME_DESC9
#define D3DLOCKED_RECT8             D3DLOCKED_RECT9
#define D3DLOCKED_BOX8              D3DLOCKED_BOX9
#define D3DBOX8                     D3DBOX9

// Shader structures
#define D3DSHADER_CONSTANTTABLE8    D3DSHADER_CONSTANTTABLE9
#define D3DSHADER_CONSTANTINFO8     D3DSHADER_CONSTANTINFO9

// Display mode and adapter structures
#define D3DDISPLAYMODE8             D3DDISPLAYMODE9
#define D3DADAPTER_IDENTIFIER8      D3DADAPTER_IDENTIFIER9

// Device creation structures
#define D3DDEVICE_CREATION_PARAMETERS8 D3DDEVICE_CREATION_PARAMETERS9

// Debug structures
#define D3DDEBUGMONITORTOKEN8       D3DDEBUGMONITORTOKEN9

// Device creation parameters
#define D3DPRESENT_PARAMETERS8     D3DPRESENT_PARAMETERS9

// Flags
#define D3DENUM_NO_WHQL_LEVEL                0

#define D3DPTFILTERCAPS_MAGFAFLATCUBIC 0xFFFFFFFF
#define D3DPTFILTERCAPS_MAGFGAUSSIANCUBIC 0xFFFFFFFF
#define D3DRS_ZBIAS (D3DRENDERSTATETYPE)(D3DRS_FORCE_DWORD - 1)
#define D3DTEXF_FLATCUBIC (D3DTEXTUREFILTERTYPE)(D3DTEXF_FORCE_DWORD - 1)
#define D3DTEXF_GAUSSIANCUBIC (D3DTEXTUREFILTERTYPE)(D3DTEXF_FORCE_DWORD - 2)
#define D3DTSS_ADDRESSU (D3DTEXTURESTAGESTATETYPE)(D3DTSS_FORCE_DWORD - 1)
#define D3DTSS_ADDRESSV (D3DTEXTURESTAGESTATETYPE)(D3DTSS_FORCE_DWORD - 2)
#define D3DTSS_ADDRESSW (D3DTEXTURESTAGESTATETYPE)(D3DTSS_FORCE_DWORD - 3)
#define D3DTSS_MAGFILTER (D3DTEXTURESTAGESTATETYPE)(D3DTSS_FORCE_DWORD - 4)
#define D3DTSS_MINFILTER (D3DTEXTURESTAGESTATETYPE)(D3DTSS_FORCE_DWORD - 5)
#define D3DTSS_MIPFILTER (D3DTEXTURESTAGESTATETYPE)(D3DTSS_FORCE_DWORD - 6)
#define D3DTSS_MAXANISOTROPY (D3DTEXTURESTAGESTATETYPE)(D3DTSS_FORCE_DWORD - 7)

#endif // DX8TO9_H