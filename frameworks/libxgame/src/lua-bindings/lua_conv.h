//
// AUTO BUILD, DON'T MODIFY!
//
#ifndef __AUTO_GEN_LUA_CONV_H__
#define __AUTO_GEN_LUA_CONV_H__

#include "cclua/cclua.h"
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "network/WebSocket.h"
#if CC_USE_NAVMESH
#include "navmesh/CCNavMesh.h"
#endif

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_conv(lua_State *L);
OLUA_END_DECLS

// cocos2d::Vec2
OLUA_LIB int olua_push_cocos2d_Vec2(lua_State *L, const cocos2d::Vec2 *value);
OLUA_LIB void olua_check_cocos2d_Vec2(lua_State *L, int idx, cocos2d::Vec2 *value);
OLUA_LIB bool olua_is_cocos2d_Vec2(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_Vec2(lua_State *L, int idx, cocos2d::Vec2 *value);
OLUA_LIB int olua_unpack_cocos2d_Vec2(lua_State *L, const cocos2d::Vec2 *value);
OLUA_LIB bool olua_canpack_cocos2d_Vec2(lua_State *L, int idx);

// cocos2d::Vec3
OLUA_LIB int olua_push_cocos2d_Vec3(lua_State *L, const cocos2d::Vec3 *value);
OLUA_LIB void olua_check_cocos2d_Vec3(lua_State *L, int idx, cocos2d::Vec3 *value);
OLUA_LIB bool olua_is_cocos2d_Vec3(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_Vec3(lua_State *L, int idx, cocos2d::Vec3 *value);
OLUA_LIB int olua_unpack_cocos2d_Vec3(lua_State *L, const cocos2d::Vec3 *value);
OLUA_LIB bool olua_canpack_cocos2d_Vec3(lua_State *L, int idx);

// cocos2d::Vec4
OLUA_LIB int olua_push_cocos2d_Vec4(lua_State *L, const cocos2d::Vec4 *value);
OLUA_LIB void olua_check_cocos2d_Vec4(lua_State *L, int idx, cocos2d::Vec4 *value);
OLUA_LIB bool olua_is_cocos2d_Vec4(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_Vec4(lua_State *L, int idx, cocos2d::Vec4 *value);
OLUA_LIB int olua_unpack_cocos2d_Vec4(lua_State *L, const cocos2d::Vec4 *value);
OLUA_LIB bool olua_canpack_cocos2d_Vec4(lua_State *L, int idx);

// cocos2d::Size
OLUA_LIB int olua_push_cocos2d_Size(lua_State *L, const cocos2d::Size *value);
OLUA_LIB void olua_check_cocos2d_Size(lua_State *L, int idx, cocos2d::Size *value);
OLUA_LIB bool olua_is_cocos2d_Size(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_Size(lua_State *L, int idx, cocos2d::Size *value);
OLUA_LIB int olua_unpack_cocos2d_Size(lua_State *L, const cocos2d::Size *value);
OLUA_LIB bool olua_canpack_cocos2d_Size(lua_State *L, int idx);

// cocos2d::Viewport
OLUA_LIB int olua_push_cocos2d_Viewport(lua_State *L, const cocos2d::Viewport *value);
OLUA_LIB void olua_check_cocos2d_Viewport(lua_State *L, int idx, cocos2d::Viewport *value);
OLUA_LIB bool olua_is_cocos2d_Viewport(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_Viewport(lua_State *L, int idx, cocos2d::Viewport *value);
OLUA_LIB int olua_unpack_cocos2d_Viewport(lua_State *L, const cocos2d::Viewport *value);
OLUA_LIB bool olua_canpack_cocos2d_Viewport(lua_State *L, int idx);

// cocos2d::ScissorRect
OLUA_LIB int olua_push_cocos2d_ScissorRect(lua_State *L, const cocos2d::ScissorRect *value);
OLUA_LIB void olua_check_cocos2d_ScissorRect(lua_State *L, int idx, cocos2d::ScissorRect *value);
OLUA_LIB bool olua_is_cocos2d_ScissorRect(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_ScissorRect(lua_State *L, int idx, cocos2d::ScissorRect *value);
OLUA_LIB int olua_unpack_cocos2d_ScissorRect(lua_State *L, const cocos2d::ScissorRect *value);
OLUA_LIB bool olua_canpack_cocos2d_ScissorRect(lua_State *L, int idx);

// cocos2d::Quaternion
OLUA_LIB int olua_push_cocos2d_Quaternion(lua_State *L, const cocos2d::Quaternion *value);
OLUA_LIB void olua_check_cocos2d_Quaternion(lua_State *L, int idx, cocos2d::Quaternion *value);
OLUA_LIB bool olua_is_cocos2d_Quaternion(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_Quaternion(lua_State *L, int idx, cocos2d::Quaternion *value);
OLUA_LIB int olua_unpack_cocos2d_Quaternion(lua_State *L, const cocos2d::Quaternion *value);
OLUA_LIB bool olua_canpack_cocos2d_Quaternion(lua_State *L, int idx);

// cocos2d::AffineTransform
OLUA_LIB int olua_push_cocos2d_AffineTransform(lua_State *L, const cocos2d::AffineTransform *value);
OLUA_LIB void olua_check_cocos2d_AffineTransform(lua_State *L, int idx, cocos2d::AffineTransform *value);
OLUA_LIB bool olua_is_cocos2d_AffineTransform(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_AffineTransform(lua_State *L, int idx, cocos2d::AffineTransform *value);
OLUA_LIB int olua_unpack_cocos2d_AffineTransform(lua_State *L, const cocos2d::AffineTransform *value);
OLUA_LIB bool olua_canpack_cocos2d_AffineTransform(lua_State *L, int idx);

// GLContextAttrs
OLUA_LIB int olua_push_GLContextAttrs(lua_State *L, const GLContextAttrs *value);
OLUA_LIB void olua_check_GLContextAttrs(lua_State *L, int idx, GLContextAttrs *value);
OLUA_LIB bool olua_is_GLContextAttrs(lua_State *L, int idx);
OLUA_LIB void olua_pack_GLContextAttrs(lua_State *L, int idx, GLContextAttrs *value);
OLUA_LIB int olua_unpack_GLContextAttrs(lua_State *L, const GLContextAttrs *value);
OLUA_LIB bool olua_canpack_GLContextAttrs(lua_State *L, int idx);

// cocos2d::Tex2F
OLUA_LIB int olua_push_cocos2d_Tex2F(lua_State *L, const cocos2d::Tex2F *value);
OLUA_LIB void olua_check_cocos2d_Tex2F(lua_State *L, int idx, cocos2d::Tex2F *value);
OLUA_LIB bool olua_is_cocos2d_Tex2F(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_Tex2F(lua_State *L, int idx, cocos2d::Tex2F *value);
OLUA_LIB int olua_unpack_cocos2d_Tex2F(lua_State *L, const cocos2d::Tex2F *value);
OLUA_LIB bool olua_canpack_cocos2d_Tex2F(lua_State *L, int idx);

// cocos2d::T2F_Quad
OLUA_LIB int olua_push_cocos2d_T2F_Quad(lua_State *L, const cocos2d::T2F_Quad *value);
OLUA_LIB void olua_check_cocos2d_T2F_Quad(lua_State *L, int idx, cocos2d::T2F_Quad *value);
OLUA_LIB bool olua_is_cocos2d_T2F_Quad(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_T2F_Quad(lua_State *L, int idx, cocos2d::T2F_Quad *value);
OLUA_LIB int olua_unpack_cocos2d_T2F_Quad(lua_State *L, const cocos2d::T2F_Quad *value);
OLUA_LIB bool olua_canpack_cocos2d_T2F_Quad(lua_State *L, int idx);

// cocos2d::ccBezierConfig
OLUA_LIB int olua_push_cocos2d_ccBezierConfig(lua_State *L, const cocos2d::ccBezierConfig *value);
OLUA_LIB void olua_check_cocos2d_ccBezierConfig(lua_State *L, int idx, cocos2d::ccBezierConfig *value);
OLUA_LIB bool olua_is_cocos2d_ccBezierConfig(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_ccBezierConfig(lua_State *L, int idx, cocos2d::ccBezierConfig *value);
OLUA_LIB int olua_unpack_cocos2d_ccBezierConfig(lua_State *L, const cocos2d::ccBezierConfig *value);
OLUA_LIB bool olua_canpack_cocos2d_ccBezierConfig(lua_State *L, int idx);

// cocos2d::TTFConfig
OLUA_LIB int olua_push_cocos2d_TTFConfig(lua_State *L, const cocos2d::TTFConfig *value);
OLUA_LIB void olua_check_cocos2d_TTFConfig(lua_State *L, int idx, cocos2d::TTFConfig *value);
OLUA_LIB bool olua_is_cocos2d_TTFConfig(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_TTFConfig(lua_State *L, int idx, cocos2d::TTFConfig *value);
OLUA_LIB int olua_unpack_cocos2d_TTFConfig(lua_State *L, const cocos2d::TTFConfig *value);
OLUA_LIB bool olua_canpack_cocos2d_TTFConfig(lua_State *L, int idx);

// cocos2d::BlendFunc
OLUA_LIB int olua_push_cocos2d_BlendFunc(lua_State *L, const cocos2d::BlendFunc *value);
OLUA_LIB void olua_check_cocos2d_BlendFunc(lua_State *L, int idx, cocos2d::BlendFunc *value);
OLUA_LIB bool olua_is_cocos2d_BlendFunc(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_BlendFunc(lua_State *L, int idx, cocos2d::BlendFunc *value);
OLUA_LIB int olua_unpack_cocos2d_BlendFunc(lua_State *L, const cocos2d::BlendFunc *value);
OLUA_LIB bool olua_canpack_cocos2d_BlendFunc(lua_State *L, int idx);

// cocos2d::ui::Margin
OLUA_LIB int olua_push_cocos2d_ui_Margin(lua_State *L, const cocos2d::ui::Margin *value);
OLUA_LIB void olua_check_cocos2d_ui_Margin(lua_State *L, int idx, cocos2d::ui::Margin *value);
OLUA_LIB bool olua_is_cocos2d_ui_Margin(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_ui_Margin(lua_State *L, int idx, cocos2d::ui::Margin *value);
OLUA_LIB int olua_unpack_cocos2d_ui_Margin(lua_State *L, const cocos2d::ui::Margin *value);
OLUA_LIB bool olua_canpack_cocos2d_ui_Margin(lua_State *L, int idx);

// cocos2d::ResourceData
OLUA_LIB int olua_push_cocos2d_ResourceData(lua_State *L, const cocos2d::ResourceData *value);
OLUA_LIB void olua_check_cocos2d_ResourceData(lua_State *L, int idx, cocos2d::ResourceData *value);
OLUA_LIB bool olua_is_cocos2d_ResourceData(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_ResourceData(lua_State *L, int idx, cocos2d::ResourceData *value);
OLUA_LIB int olua_unpack_cocos2d_ResourceData(lua_State *L, const cocos2d::ResourceData *value);
OLUA_LIB bool olua_canpack_cocos2d_ResourceData(lua_State *L, int idx);

// cocos2d::Quad3
OLUA_LIB int olua_push_cocos2d_Quad3(lua_State *L, const cocos2d::Quad3 *value);
OLUA_LIB void olua_check_cocos2d_Quad3(lua_State *L, int idx, cocos2d::Quad3 *value);
OLUA_LIB bool olua_is_cocos2d_Quad3(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_Quad3(lua_State *L, int idx, cocos2d::Quad3 *value);
OLUA_LIB int olua_unpack_cocos2d_Quad3(lua_State *L, const cocos2d::Quad3 *value);
OLUA_LIB bool olua_canpack_cocos2d_Quad3(lua_State *L, int idx);

// cocos2d::Texture2D::PixelFormatInfo
OLUA_LIB int olua_push_cocos2d_Texture2D_PixelFormatInfo(lua_State *L, const cocos2d::Texture2D::PixelFormatInfo *value);
OLUA_LIB void olua_check_cocos2d_Texture2D_PixelFormatInfo(lua_State *L, int idx, cocos2d::Texture2D::PixelFormatInfo *value);
OLUA_LIB bool olua_is_cocos2d_Texture2D_PixelFormatInfo(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_Texture2D_PixelFormatInfo(lua_State *L, int idx, cocos2d::Texture2D::PixelFormatInfo *value);
OLUA_LIB int olua_unpack_cocos2d_Texture2D_PixelFormatInfo(lua_State *L, const cocos2d::Texture2D::PixelFormatInfo *value);
OLUA_LIB bool olua_canpack_cocos2d_Texture2D_PixelFormatInfo(lua_State *L, int idx);

// cocos2d::Controller::KeyStatus
OLUA_LIB int olua_push_cocos2d_Controller_KeyStatus(lua_State *L, const cocos2d::Controller::KeyStatus *value);
OLUA_LIB void olua_check_cocos2d_Controller_KeyStatus(lua_State *L, int idx, cocos2d::Controller::KeyStatus *value);
OLUA_LIB bool olua_is_cocos2d_Controller_KeyStatus(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_Controller_KeyStatus(lua_State *L, int idx, cocos2d::Controller::KeyStatus *value);
OLUA_LIB int olua_unpack_cocos2d_Controller_KeyStatus(lua_State *L, const cocos2d::Controller::KeyStatus *value);
OLUA_LIB bool olua_canpack_cocos2d_Controller_KeyStatus(lua_State *L, int idx);

#if CC_USE_NAVMESH
// cocos2d::NavMeshAgentParam
OLUA_LIB int olua_push_cocos2d_NavMeshAgentParam(lua_State *L, const cocos2d::NavMeshAgentParam *value);
OLUA_LIB void olua_check_cocos2d_NavMeshAgentParam(lua_State *L, int idx, cocos2d::NavMeshAgentParam *value);
OLUA_LIB bool olua_is_cocos2d_NavMeshAgentParam(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_NavMeshAgentParam(lua_State *L, int idx, cocos2d::NavMeshAgentParam *value);
OLUA_LIB int olua_unpack_cocos2d_NavMeshAgentParam(lua_State *L, const cocos2d::NavMeshAgentParam *value);
OLUA_LIB bool olua_canpack_cocos2d_NavMeshAgentParam(lua_State *L, int idx);
#endif

#if CC_USE_NAVMESH
// cocos2d::OffMeshLinkData
OLUA_LIB int olua_push_cocos2d_OffMeshLinkData(lua_State *L, const cocos2d::OffMeshLinkData *value);
OLUA_LIB void olua_check_cocos2d_OffMeshLinkData(lua_State *L, int idx, cocos2d::OffMeshLinkData *value);
OLUA_LIB bool olua_is_cocos2d_OffMeshLinkData(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_OffMeshLinkData(lua_State *L, int idx, cocos2d::OffMeshLinkData *value);
OLUA_LIB int olua_unpack_cocos2d_OffMeshLinkData(lua_State *L, const cocos2d::OffMeshLinkData *value);
OLUA_LIB bool olua_canpack_cocos2d_OffMeshLinkData(lua_State *L, int idx);
#endif

// cocos2d::backend::BlendDescriptor
OLUA_LIB int olua_push_cocos2d_backend_BlendDescriptor(lua_State *L, const cocos2d::backend::BlendDescriptor *value);
OLUA_LIB void olua_check_cocos2d_backend_BlendDescriptor(lua_State *L, int idx, cocos2d::backend::BlendDescriptor *value);
OLUA_LIB bool olua_is_cocos2d_backend_BlendDescriptor(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_backend_BlendDescriptor(lua_State *L, int idx, cocos2d::backend::BlendDescriptor *value);
OLUA_LIB int olua_unpack_cocos2d_backend_BlendDescriptor(lua_State *L, const cocos2d::backend::BlendDescriptor *value);
OLUA_LIB bool olua_canpack_cocos2d_backend_BlendDescriptor(lua_State *L, int idx);

// cocos2d::backend::SamplerDescriptor
OLUA_LIB int olua_push_cocos2d_backend_SamplerDescriptor(lua_State *L, const cocos2d::backend::SamplerDescriptor *value);
OLUA_LIB void olua_check_cocos2d_backend_SamplerDescriptor(lua_State *L, int idx, cocos2d::backend::SamplerDescriptor *value);
OLUA_LIB bool olua_is_cocos2d_backend_SamplerDescriptor(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_backend_SamplerDescriptor(lua_State *L, int idx, cocos2d::backend::SamplerDescriptor *value);
OLUA_LIB int olua_unpack_cocos2d_backend_SamplerDescriptor(lua_State *L, const cocos2d::backend::SamplerDescriptor *value);
OLUA_LIB bool olua_canpack_cocos2d_backend_SamplerDescriptor(lua_State *L, int idx);

// cocos2d::backend::TextureInfo
OLUA_LIB int olua_push_cocos2d_backend_TextureInfo(lua_State *L, const cocos2d::backend::TextureInfo *value);
OLUA_LIB void olua_check_cocos2d_backend_TextureInfo(lua_State *L, int idx, cocos2d::backend::TextureInfo *value);
OLUA_LIB bool olua_is_cocos2d_backend_TextureInfo(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_backend_TextureInfo(lua_State *L, int idx, cocos2d::backend::TextureInfo *value);
OLUA_LIB int olua_unpack_cocos2d_backend_TextureInfo(lua_State *L, const cocos2d::backend::TextureInfo *value);
OLUA_LIB bool olua_canpack_cocos2d_backend_TextureInfo(lua_State *L, int idx);

// cocos2d::backend::AttributeBindInfo
OLUA_LIB int olua_push_cocos2d_backend_AttributeBindInfo(lua_State *L, const cocos2d::backend::AttributeBindInfo *value);
OLUA_LIB void olua_check_cocos2d_backend_AttributeBindInfo(lua_State *L, int idx, cocos2d::backend::AttributeBindInfo *value);
OLUA_LIB bool olua_is_cocos2d_backend_AttributeBindInfo(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_backend_AttributeBindInfo(lua_State *L, int idx, cocos2d::backend::AttributeBindInfo *value);
OLUA_LIB int olua_unpack_cocos2d_backend_AttributeBindInfo(lua_State *L, const cocos2d::backend::AttributeBindInfo *value);
OLUA_LIB bool olua_canpack_cocos2d_backend_AttributeBindInfo(lua_State *L, int idx);

// cocos2d::backend::UniformInfo
OLUA_LIB int olua_push_cocos2d_backend_UniformInfo(lua_State *L, const cocos2d::backend::UniformInfo *value);
OLUA_LIB void olua_check_cocos2d_backend_UniformInfo(lua_State *L, int idx, cocos2d::backend::UniformInfo *value);
OLUA_LIB bool olua_is_cocos2d_backend_UniformInfo(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_backend_UniformInfo(lua_State *L, int idx, cocos2d::backend::UniformInfo *value);
OLUA_LIB int olua_unpack_cocos2d_backend_UniformInfo(lua_State *L, const cocos2d::backend::UniformInfo *value);
OLUA_LIB bool olua_canpack_cocos2d_backend_UniformInfo(lua_State *L, int idx);

// cocos2d::backend::TextureDescriptor
OLUA_LIB int olua_push_cocos2d_backend_TextureDescriptor(lua_State *L, const cocos2d::backend::TextureDescriptor *value);
OLUA_LIB void olua_check_cocos2d_backend_TextureDescriptor(lua_State *L, int idx, cocos2d::backend::TextureDescriptor *value);
OLUA_LIB bool olua_is_cocos2d_backend_TextureDescriptor(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_backend_TextureDescriptor(lua_State *L, int idx, cocos2d::backend::TextureDescriptor *value);
OLUA_LIB int olua_unpack_cocos2d_backend_TextureDescriptor(lua_State *L, const cocos2d::backend::TextureDescriptor *value);
OLUA_LIB bool olua_canpack_cocos2d_backend_TextureDescriptor(lua_State *L, int idx);

// cocos2d::backend::StencilDescriptor
OLUA_LIB int olua_push_cocos2d_backend_StencilDescriptor(lua_State *L, const cocos2d::backend::StencilDescriptor *value);
OLUA_LIB void olua_check_cocos2d_backend_StencilDescriptor(lua_State *L, int idx, cocos2d::backend::StencilDescriptor *value);
OLUA_LIB bool olua_is_cocos2d_backend_StencilDescriptor(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_backend_StencilDescriptor(lua_State *L, int idx, cocos2d::backend::StencilDescriptor *value);
OLUA_LIB int olua_unpack_cocos2d_backend_StencilDescriptor(lua_State *L, const cocos2d::backend::StencilDescriptor *value);
OLUA_LIB bool olua_canpack_cocos2d_backend_StencilDescriptor(lua_State *L, int idx);

// cocos2d::backend::DepthStencilDescriptor
OLUA_LIB int olua_push_cocos2d_backend_DepthStencilDescriptor(lua_State *L, const cocos2d::backend::DepthStencilDescriptor *value);
OLUA_LIB void olua_check_cocos2d_backend_DepthStencilDescriptor(lua_State *L, int idx, cocos2d::backend::DepthStencilDescriptor *value);
OLUA_LIB bool olua_is_cocos2d_backend_DepthStencilDescriptor(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_backend_DepthStencilDescriptor(lua_State *L, int idx, cocos2d::backend::DepthStencilDescriptor *value);
OLUA_LIB int olua_unpack_cocos2d_backend_DepthStencilDescriptor(lua_State *L, const cocos2d::backend::DepthStencilDescriptor *value);
OLUA_LIB bool olua_canpack_cocos2d_backend_DepthStencilDescriptor(lua_State *L, int idx);

// cocos2d::backend::VertexLayout::Attribute
OLUA_LIB int olua_push_cocos2d_backend_VertexLayout_Attribute(lua_State *L, const cocos2d::backend::VertexLayout::Attribute *value);
OLUA_LIB void olua_check_cocos2d_backend_VertexLayout_Attribute(lua_State *L, int idx, cocos2d::backend::VertexLayout::Attribute *value);
OLUA_LIB bool olua_is_cocos2d_backend_VertexLayout_Attribute(lua_State *L, int idx);
OLUA_LIB void olua_pack_cocos2d_backend_VertexLayout_Attribute(lua_State *L, int idx, cocos2d::backend::VertexLayout::Attribute *value);
OLUA_LIB int olua_unpack_cocos2d_backend_VertexLayout_Attribute(lua_State *L, const cocos2d::backend::VertexLayout::Attribute *value);
OLUA_LIB bool olua_canpack_cocos2d_backend_VertexLayout_Attribute(lua_State *L, int idx);

#endif