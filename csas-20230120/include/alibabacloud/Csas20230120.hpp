// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CSAS20230120_HPP_
#define ALIBABACLOUD_CSAS20230120_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Csas20230120Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Csas20230120.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 挂载connector的应用
       *
       * @param tmpReq AttachApplication2ConnectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachApplication2ConnectorResponse
       */
      Models::AttachApplication2ConnectorResponse attachApplication2ConnectorWithOptions(const Models::AttachApplication2ConnectorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 挂载connector的应用
       *
       * @param request AttachApplication2ConnectorRequest
       * @return AttachApplication2ConnectorResponse
       */
      Models::AttachApplication2ConnectorResponse attachApplication2Connector(const Models::AttachApplication2ConnectorRequest &request);

      /**
       * @summary 挂载业务策略至指定审批流程
       *
       * @param request AttachPolicy2ApprovalProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachPolicy2ApprovalProcessResponse
       */
      Models::AttachPolicy2ApprovalProcessResponse attachPolicy2ApprovalProcessWithOptions(const Models::AttachPolicy2ApprovalProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 挂载业务策略至指定审批流程
       *
       * @param request AttachPolicy2ApprovalProcessRequest
       * @return AttachPolicy2ApprovalProcessResponse
       */
      Models::AttachPolicy2ApprovalProcessResponse attachPolicy2ApprovalProcess(const Models::AttachPolicy2ApprovalProcessRequest &request);

      /**
       * @summary 创建审批流程
       *
       * @param tmpReq CreateApprovalProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApprovalProcessResponse
       */
      Models::CreateApprovalProcessResponse createApprovalProcessWithOptions(const Models::CreateApprovalProcessRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建审批流程
       *
       * @param request CreateApprovalProcessRequest
       * @return CreateApprovalProcessResponse
       */
      Models::CreateApprovalProcessResponse createApprovalProcess(const Models::CreateApprovalProcessRequest &request);

      /**
       * @summary 创建自定义身份源用户
       *
       * @param request CreateClientUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClientUserResponse
       */
      Models::CreateClientUserResponse createClientUserWithOptions(const Models::CreateClientUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建自定义身份源用户
       *
       * @param request CreateClientUserRequest
       * @return CreateClientUserResponse
       */
      Models::CreateClientUserResponse createClientUser(const Models::CreateClientUserRequest &request);

      /**
       * @summary 创建动态路由
       *
       * @param request CreateDynamicRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDynamicRouteResponse
       */
      Models::CreateDynamicRouteResponse createDynamicRouteWithOptions(const Models::CreateDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建动态路由
       *
       * @param request CreateDynamicRouteRequest
       * @return CreateDynamicRouteResponse
       */
      Models::CreateDynamicRouteResponse createDynamicRoute(const Models::CreateDynamicRouteRequest &request);

      /**
       * @summary 创建加速策略
       *
       * @param request CreateEnterpriseAcceleratePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnterpriseAcceleratePolicyResponse
       */
      Models::CreateEnterpriseAcceleratePolicyResponse createEnterpriseAcceleratePolicyWithOptions(const Models::CreateEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建加速策略
       *
       * @param request CreateEnterpriseAcceleratePolicyRequest
       * @return CreateEnterpriseAcceleratePolicyResponse
       */
      Models::CreateEnterpriseAcceleratePolicyResponse createEnterpriseAcceleratePolicy(const Models::CreateEnterpriseAcceleratePolicyRequest &request);

      /**
       * @summary 创建加速对象
       *
       * @param request CreateEnterpriseAccelerateTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnterpriseAccelerateTargetResponse
       */
      Models::CreateEnterpriseAccelerateTargetResponse createEnterpriseAccelerateTargetWithOptions(const Models::CreateEnterpriseAccelerateTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建加速对象
       *
       * @param request CreateEnterpriseAccelerateTargetRequest
       * @return CreateEnterpriseAccelerateTargetResponse
       */
      Models::CreateEnterpriseAccelerateTargetResponse createEnterpriseAccelerateTarget(const Models::CreateEnterpriseAccelerateTargetRequest &request);

      /**
       * @summary 创建自定义身份源部门
       *
       * @param request CreateIdpDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIdpDepartmentResponse
       */
      Models::CreateIdpDepartmentResponse createIdpDepartmentWithOptions(const Models::CreateIdpDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建自定义身份源部门
       *
       * @param request CreateIdpDepartmentRequest
       * @return CreateIdpDepartmentResponse
       */
      Models::CreateIdpDepartmentResponse createIdpDepartment(const Models::CreateIdpDepartmentRequest &request);

      /**
       * @summary Creates an office application within the current Alibaba Cloud account.
       *
       * @description By default, you can create a maximum of 500 office applications.
       *
       * @param tmpReq CreatePrivateAccessApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrivateAccessApplicationResponse
       */
      Models::CreatePrivateAccessApplicationResponse createPrivateAccessApplicationWithOptions(const Models::CreatePrivateAccessApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an office application within the current Alibaba Cloud account.
       *
       * @description By default, you can create a maximum of 500 office applications.
       *
       * @param request CreatePrivateAccessApplicationRequest
       * @return CreatePrivateAccessApplicationResponse
       */
      Models::CreatePrivateAccessApplicationResponse createPrivateAccessApplication(const Models::CreatePrivateAccessApplicationRequest &request);

      /**
       * @summary Create Private Access Policy
       *
       * @description By default, up to 500 private access policies can be created.
       *
       * @param request CreatePrivateAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrivateAccessPolicyResponse
       */
      Models::CreatePrivateAccessPolicyResponse createPrivateAccessPolicyWithOptions(const Models::CreatePrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Private Access Policy
       *
       * @description By default, up to 500 private access policies can be created.
       *
       * @param request CreatePrivateAccessPolicyRequest
       * @return CreatePrivateAccessPolicyResponse
       */
      Models::CreatePrivateAccessPolicyResponse createPrivateAccessPolicy(const Models::CreatePrivateAccessPolicyRequest &request);

      /**
       * @summary 创建内网访问标签
       *
       * @param request CreatePrivateAccessTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrivateAccessTagResponse
       */
      Models::CreatePrivateAccessTagResponse createPrivateAccessTagWithOptions(const Models::CreatePrivateAccessTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建内网访问标签
       *
       * @param request CreatePrivateAccessTagRequest
       * @return CreatePrivateAccessTagResponse
       */
      Models::CreatePrivateAccessTagResponse createPrivateAccessTag(const Models::CreatePrivateAccessTagRequest &request);

      /**
       * @summary 创建设备注册策略
       *
       * @param tmpReq CreateRegistrationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRegistrationPolicyResponse
       */
      Models::CreateRegistrationPolicyResponse createRegistrationPolicyWithOptions(const Models::CreateRegistrationPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建设备注册策略
       *
       * @param request CreateRegistrationPolicyRequest
       * @return CreateRegistrationPolicyResponse
       */
      Models::CreateRegistrationPolicyResponse createRegistrationPolicy(const Models::CreateRegistrationPolicyRequest &request);

      /**
       * @summary 创建用户组
       *
       * @param request CreateUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserGroupResponse
       */
      Models::CreateUserGroupResponse createUserGroupWithOptions(const Models::CreateUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建用户组
       *
       * @param request CreateUserGroupRequest
       * @return CreateUserGroupResponse
       */
      Models::CreateUserGroupResponse createUserGroup(const Models::CreateUserGroupRequest &request);

      /**
       * @summary 创建数字水印暗水印透明底图
       *
       * @param tmpReq CreateWmBaseImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWmBaseImageResponse
       */
      Models::CreateWmBaseImageResponse createWmBaseImageWithOptions(const Models::CreateWmBaseImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数字水印暗水印透明底图
       *
       * @param request CreateWmBaseImageRequest
       * @return CreateWmBaseImageResponse
       */
      Models::CreateWmBaseImageResponse createWmBaseImage(const Models::CreateWmBaseImageRequest &request);

      /**
       * @summary 创建嵌入水印任务
       *
       * @param tmpReq CreateWmEmbedTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWmEmbedTaskResponse
       */
      Models::CreateWmEmbedTaskResponse createWmEmbedTaskWithOptions(const Models::CreateWmEmbedTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建嵌入水印任务
       *
       * @param request CreateWmEmbedTaskRequest
       * @return CreateWmEmbedTaskResponse
       */
      Models::CreateWmEmbedTaskResponse createWmEmbedTask(const Models::CreateWmEmbedTaskRequest &request);

      /**
       * @summary Creates a digital watermark extraction task.
       *
       * @param tmpReq CreateWmExtractTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWmExtractTaskResponse
       */
      Models::CreateWmExtractTaskResponse createWmExtractTaskWithOptions(const Models::CreateWmExtractTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a digital watermark extraction task.
       *
       * @param request CreateWmExtractTaskRequest
       * @return CreateWmExtractTaskResponse
       */
      Models::CreateWmExtractTaskResponse createWmExtractTask(const Models::CreateWmExtractTaskRequest &request);

      /**
       * @summary 创建一条字符串水印信息到数字水印信息的映射记录
       *
       * @param request CreateWmInfoMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWmInfoMappingResponse
       */
      Models::CreateWmInfoMappingResponse createWmInfoMappingWithOptions(const Models::CreateWmInfoMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一条字符串水印信息到数字水印信息的映射记录
       *
       * @param request CreateWmInfoMappingRequest
       * @return CreateWmInfoMappingResponse
       */
      Models::CreateWmInfoMappingResponse createWmInfoMapping(const Models::CreateWmInfoMappingRequest &request);

      /**
       * @summary 批量删除审批流程
       *
       * @param request DeleteApprovalProcessesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApprovalProcessesResponse
       */
      Models::DeleteApprovalProcessesResponse deleteApprovalProcessesWithOptions(const Models::DeleteApprovalProcessesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除审批流程
       *
       * @param request DeleteApprovalProcessesRequest
       * @return DeleteApprovalProcessesResponse
       */
      Models::DeleteApprovalProcessesResponse deleteApprovalProcesses(const Models::DeleteApprovalProcessesRequest &request);

      /**
       * @summary 删除自定义身份源指定用户
       *
       * @param request DeleteClientUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientUserResponse
       */
      Models::DeleteClientUserResponse deleteClientUserWithOptions(const Models::DeleteClientUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义身份源指定用户
       *
       * @param request DeleteClientUserRequest
       * @return DeleteClientUserResponse
       */
      Models::DeleteClientUserResponse deleteClientUser(const Models::DeleteClientUserRequest &request);

      /**
       * @summary 删除动态路由
       *
       * @param request DeleteDynamicRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDynamicRouteResponse
       */
      Models::DeleteDynamicRouteResponse deleteDynamicRouteWithOptions(const Models::DeleteDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除动态路由
       *
       * @param request DeleteDynamicRouteRequest
       * @return DeleteDynamicRouteResponse
       */
      Models::DeleteDynamicRouteResponse deleteDynamicRoute(const Models::DeleteDynamicRouteRequest &request);

      /**
       * @summary 删除加速策略
       *
       * @param request DeleteEnterpriseAcceleratePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnterpriseAcceleratePolicyResponse
       */
      Models::DeleteEnterpriseAcceleratePolicyResponse deleteEnterpriseAcceleratePolicyWithOptions(const Models::DeleteEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除加速策略
       *
       * @param request DeleteEnterpriseAcceleratePolicyRequest
       * @return DeleteEnterpriseAcceleratePolicyResponse
       */
      Models::DeleteEnterpriseAcceleratePolicyResponse deleteEnterpriseAcceleratePolicy(const Models::DeleteEnterpriseAcceleratePolicyRequest &request);

      /**
       * @summary 删除加速对象
       *
       * @param request DeleteEnterpriseAccelerateTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnterpriseAccelerateTargetResponse
       */
      Models::DeleteEnterpriseAccelerateTargetResponse deleteEnterpriseAccelerateTargetWithOptions(const Models::DeleteEnterpriseAccelerateTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除加速对象
       *
       * @param request DeleteEnterpriseAccelerateTargetRequest
       * @return DeleteEnterpriseAccelerateTargetResponse
       */
      Models::DeleteEnterpriseAccelerateTargetResponse deleteEnterpriseAccelerateTarget(const Models::DeleteEnterpriseAccelerateTargetRequest &request);

      /**
       * @summary 删除指定自定义身份源部门
       *
       * @param request DeleteIdpDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIdpDepartmentResponse
       */
      Models::DeleteIdpDepartmentResponse deleteIdpDepartmentWithOptions(const Models::DeleteIdpDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定自定义身份源部门
       *
       * @param request DeleteIdpDepartmentRequest
       * @return DeleteIdpDepartmentResponse
       */
      Models::DeleteIdpDepartmentResponse deleteIdpDepartment(const Models::DeleteIdpDepartmentRequest &request);

      /**
       * @summary DeleteOtpConfig
       *
       * @param request DeleteOtpConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOtpConfigResponse
       */
      Models::DeleteOtpConfigResponse deleteOtpConfigWithOptions(const Models::DeleteOtpConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteOtpConfig
       *
       * @param request DeleteOtpConfigRequest
       * @return DeleteOtpConfigResponse
       */
      Models::DeleteOtpConfigResponse deleteOtpConfig(const Models::DeleteOtpConfigRequest &request);

      /**
       * @summary 删除内网访问应用
       *
       * @param request DeletePrivateAccessApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivateAccessApplicationResponse
       */
      Models::DeletePrivateAccessApplicationResponse deletePrivateAccessApplicationWithOptions(const Models::DeletePrivateAccessApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除内网访问应用
       *
       * @param request DeletePrivateAccessApplicationRequest
       * @return DeletePrivateAccessApplicationResponse
       */
      Models::DeletePrivateAccessApplicationResponse deletePrivateAccessApplication(const Models::DeletePrivateAccessApplicationRequest &request);

      /**
       * @summary 删除内网访问策略
       *
       * @param request DeletePrivateAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivateAccessPolicyResponse
       */
      Models::DeletePrivateAccessPolicyResponse deletePrivateAccessPolicyWithOptions(const Models::DeletePrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除内网访问策略
       *
       * @param request DeletePrivateAccessPolicyRequest
       * @return DeletePrivateAccessPolicyResponse
       */
      Models::DeletePrivateAccessPolicyResponse deletePrivateAccessPolicy(const Models::DeletePrivateAccessPolicyRequest &request);

      /**
       * @summary 删除内网访问标签
       *
       * @param request DeletePrivateAccessTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivateAccessTagResponse
       */
      Models::DeletePrivateAccessTagResponse deletePrivateAccessTagWithOptions(const Models::DeletePrivateAccessTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除内网访问标签
       *
       * @param request DeletePrivateAccessTagRequest
       * @return DeletePrivateAccessTagResponse
       */
      Models::DeletePrivateAccessTagResponse deletePrivateAccessTag(const Models::DeletePrivateAccessTagRequest &request);

      /**
       * @summary 删除设备注册策略
       *
       * @param request DeleteRegistrationPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRegistrationPoliciesResponse
       */
      Models::DeleteRegistrationPoliciesResponse deleteRegistrationPoliciesWithOptions(const Models::DeleteRegistrationPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除设备注册策略
       *
       * @param request DeleteRegistrationPoliciesRequest
       * @return DeleteRegistrationPoliciesResponse
       */
      Models::DeleteRegistrationPoliciesResponse deleteRegistrationPolicies(const Models::DeleteRegistrationPoliciesRequest &request);

      /**
       * @summary 批量删除用户非在线设备
       *
       * @param request DeleteUserDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserDevicesResponse
       */
      Models::DeleteUserDevicesResponse deleteUserDevicesWithOptions(const Models::DeleteUserDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除用户非在线设备
       *
       * @param request DeleteUserDevicesRequest
       * @return DeleteUserDevicesResponse
       */
      Models::DeleteUserDevicesResponse deleteUserDevices(const Models::DeleteUserDevicesRequest &request);

      /**
       * @summary 删除用户组
       *
       * @param request DeleteUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserGroupResponse
       */
      Models::DeleteUserGroupResponse deleteUserGroupWithOptions(const Models::DeleteUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户组
       *
       * @param request DeleteUserGroupRequest
       * @return DeleteUserGroupResponse
       */
      Models::DeleteUserGroupResponse deleteUserGroup(const Models::DeleteUserGroupRequest &request);

      /**
       * @deprecated OpenAPI DetachApplication2Connector is deprecated, please use csas::2023-01-20::ModifyForwardStrategy instead.
       *
       * @summary 卸载connector的应用
       *
       * @param tmpReq DetachApplication2ConnectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachApplication2ConnectorResponse
       */
      Models::DetachApplication2ConnectorResponse detachApplication2ConnectorWithOptions(const Models::DetachApplication2ConnectorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DetachApplication2Connector is deprecated, please use csas::2023-01-20::ModifyForwardStrategy instead.
       *
       * @summary 卸载connector的应用
       *
       * @param request DetachApplication2ConnectorRequest
       * @return DetachApplication2ConnectorResponse
       */
      Models::DetachApplication2ConnectorResponse detachApplication2Connector(const Models::DetachApplication2ConnectorRequest &request);

      /**
       * @summary 解绑业务策略与审批流程
       *
       * @param request DetachPolicy2ApprovalProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachPolicy2ApprovalProcessResponse
       */
      Models::DetachPolicy2ApprovalProcessResponse detachPolicy2ApprovalProcessWithOptions(const Models::DetachPolicy2ApprovalProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑业务策略与审批流程
       *
       * @param request DetachPolicy2ApprovalProcessRequest
       * @return DetachPolicy2ApprovalProcessResponse
       */
      Models::DetachPolicy2ApprovalProcessResponse detachPolicy2ApprovalProcess(const Models::DetachPolicy2ApprovalProcessRequest &request);

      /**
       * @summary 禁用加速策略
       *
       * @param request DisableEnterpriseAcceleratePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableEnterpriseAcceleratePolicyResponse
       */
      Models::DisableEnterpriseAcceleratePolicyResponse disableEnterpriseAcceleratePolicyWithOptions(const Models::DisableEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用加速策略
       *
       * @param request DisableEnterpriseAcceleratePolicyRequest
       * @return DisableEnterpriseAcceleratePolicyResponse
       */
      Models::DisableEnterpriseAcceleratePolicyResponse disableEnterpriseAcceleratePolicy(const Models::DisableEnterpriseAcceleratePolicyRequest &request);

      /**
       * @summary 启用加速策略
       *
       * @param request EnableEnterpriseAcceleratePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableEnterpriseAcceleratePolicyResponse
       */
      Models::EnableEnterpriseAcceleratePolicyResponse enableEnterpriseAcceleratePolicyWithOptions(const Models::EnableEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用加速策略
       *
       * @param request EnableEnterpriseAcceleratePolicyRequest
       * @return EnableEnterpriseAcceleratePolicyResponse
       */
      Models::EnableEnterpriseAcceleratePolicyResponse enableEnterpriseAcceleratePolicy(const Models::EnableEnterpriseAcceleratePolicyRequest &request);

      /**
       * @summary 批量查询用户设备列表
       *
       * @param request ExportUserDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportUserDevicesResponse
       */
      Models::ExportUserDevicesResponse exportUserDevicesWithOptions(const Models::ExportUserDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询用户设备列表
       *
       * @param request ExportUserDevicesRequest
       * @return ExportUserDevicesResponse
       */
      Models::ExportUserDevicesResponse exportUserDevices(const Models::ExportUserDevicesRequest &request);

      /**
       * @summary 查询已启用的身份源配置
       *
       * @param request GetActiveIdpConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetActiveIdpConfigResponse
       */
      Models::GetActiveIdpConfigResponse getActiveIdpConfigWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询已启用的身份源配置
       *
       * @return GetActiveIdpConfigResponse
       */
      Models::GetActiveIdpConfigResponse getActiveIdpConfig();

      /**
       * @summary 查询审批
       *
       * @param request GetApprovalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApprovalResponse
       */
      Models::GetApprovalResponse getApprovalWithOptions(const Models::GetApprovalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询审批
       *
       * @param request GetApprovalRequest
       * @return GetApprovalResponse
       */
      Models::GetApprovalResponse getApproval(const Models::GetApprovalRequest &request);

      /**
       * @summary 查询审批流程
       *
       * @param request GetApprovalProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApprovalProcessResponse
       */
      Models::GetApprovalProcessResponse getApprovalProcessWithOptions(const Models::GetApprovalProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询审批流程
       *
       * @param request GetApprovalProcessRequest
       * @return GetApprovalProcessResponse
       */
      Models::GetApprovalProcessResponse getApprovalProcess(const Models::GetApprovalProcessRequest &request);

      /**
       * @summary 查询审批动态模板
       *
       * @param request GetApprovalSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApprovalSchemaResponse
       */
      Models::GetApprovalSchemaResponse getApprovalSchemaWithOptions(const Models::GetApprovalSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询审批动态模板
       *
       * @param request GetApprovalSchemaRequest
       * @return GetApprovalSchemaResponse
       */
      Models::GetApprovalSchemaResponse getApprovalSchema(const Models::GetApprovalSchemaRequest &request);

      /**
       * @summary 查询自启动与防卸载策略配置
       *
       * @param request GetBootAndAntiUninstallPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBootAndAntiUninstallPolicyResponse
       */
      Models::GetBootAndAntiUninstallPolicyResponse getBootAndAntiUninstallPolicyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询自启动与防卸载策略配置
       *
       * @return GetBootAndAntiUninstallPolicyResponse
       */
      Models::GetBootAndAntiUninstallPolicyResponse getBootAndAntiUninstallPolicy();

      /**
       * @summary 查询自定义身份源指定用户
       *
       * @param request GetClientUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientUserResponse
       */
      Models::GetClientUserResponse getClientUserWithOptions(const Models::GetClientUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询自定义身份源指定用户
       *
       * @param request GetClientUserRequest
       * @return GetClientUserResponse
       */
      Models::GetClientUserResponse getClientUser(const Models::GetClientUserRequest &request);

      /**
       * @summary 查询动态路由详情
       *
       * @param request GetDynamicRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDynamicRouteResponse
       */
      Models::GetDynamicRouteResponse getDynamicRouteWithOptions(const Models::GetDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询动态路由详情
       *
       * @param request GetDynamicRouteRequest
       * @return GetDynamicRouteResponse
       */
      Models::GetDynamicRouteResponse getDynamicRoute(const Models::GetDynamicRouteRequest &request);

      /**
       * @summary 查询身份源配置详情
       *
       * @param request GetIdpConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdpConfigResponse
       */
      Models::GetIdpConfigResponse getIdpConfigWithOptions(const Models::GetIdpConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询身份源配置详情
       *
       * @param request GetIdpConfigRequest
       * @return GetIdpConfigResponse
       */
      Models::GetIdpConfigResponse getIdpConfig(const Models::GetIdpConfigRequest &request);

      /**
       * @summary Queries the details of the office applications that belong to the current Alibaba Cloud account.
       *
       * @param request GetPrivateAccessApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrivateAccessApplicationResponse
       */
      Models::GetPrivateAccessApplicationResponse getPrivateAccessApplicationWithOptions(const Models::GetPrivateAccessApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the office applications that belong to the current Alibaba Cloud account.
       *
       * @param request GetPrivateAccessApplicationRequest
       * @return GetPrivateAccessApplicationResponse
       */
      Models::GetPrivateAccessApplicationResponse getPrivateAccessApplication(const Models::GetPrivateAccessApplicationRequest &request);

      /**
       * @summary Query Intranet Access Policy Details
       *
       * @param request GetPrivateAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrivateAccessPolicyResponse
       */
      Models::GetPrivateAccessPolicyResponse getPrivateAccessPolicyWithOptions(const Models::GetPrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Intranet Access Policy Details
       *
       * @param request GetPrivateAccessPolicyRequest
       * @return GetPrivateAccessPolicyResponse
       */
      Models::GetPrivateAccessPolicyResponse getPrivateAccessPolicy(const Models::GetPrivateAccessPolicyRequest &request);

      /**
       * @summary 查询设备注册策略详情
       *
       * @param request GetRegistrationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegistrationPolicyResponse
       */
      Models::GetRegistrationPolicyResponse getRegistrationPolicyWithOptions(const Models::GetRegistrationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询设备注册策略详情
       *
       * @param request GetRegistrationPolicyRequest
       * @return GetRegistrationPolicyResponse
       */
      Models::GetRegistrationPolicyResponse getRegistrationPolicy(const Models::GetRegistrationPolicyRequest &request);

      /**
       * @summary 查询用户设备详情
       *
       * @param request GetUserDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserDeviceResponse
       */
      Models::GetUserDeviceResponse getUserDeviceWithOptions(const Models::GetUserDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户设备详情
       *
       * @param request GetUserDeviceRequest
       * @return GetUserDeviceResponse
       */
      Models::GetUserDeviceResponse getUserDevice(const Models::GetUserDeviceRequest &request);

      /**
       * @summary 查询用户组详情
       *
       * @param request GetUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserGroupResponse
       */
      Models::GetUserGroupResponse getUserGroupWithOptions(const Models::GetUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户组详情
       *
       * @param request GetUserGroupRequest
       * @return GetUserGroupResponse
       */
      Models::GetUserGroupResponse getUserGroup(const Models::GetUserGroupRequest &request);

      /**
       * @summary 查询嵌入水印任务
       *
       * @param request GetWmEmbedTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWmEmbedTaskResponse
       */
      Models::GetWmEmbedTaskResponse getWmEmbedTaskWithOptions(const Models::GetWmEmbedTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询嵌入水印任务
       *
       * @param request GetWmEmbedTaskRequest
       * @return GetWmEmbedTaskResponse
       */
      Models::GetWmEmbedTaskResponse getWmEmbedTask(const Models::GetWmEmbedTaskRequest &request);

      /**
       * @summary 查询文件水印提取任务详情
       *
       * @param request GetWmExtractTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWmExtractTaskResponse
       */
      Models::GetWmExtractTaskResponse getWmExtractTaskWithOptions(const Models::GetWmExtractTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询文件水印提取任务详情
       *
       * @param request GetWmExtractTaskRequest
       * @return GetWmExtractTaskResponse
       */
      Models::GetWmExtractTaskResponse getWmExtractTask(const Models::GetWmExtractTaskRequest &request);

      /**
       * @summary 批量导入加速对象异步任务
       *
       * @param request ImportEnterpriseAccelerateTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportEnterpriseAccelerateTargetsResponse
       */
      Models::ImportEnterpriseAccelerateTargetsResponse importEnterpriseAccelerateTargetsWithOptions(const Models::ImportEnterpriseAccelerateTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量导入加速对象异步任务
       *
       * @param request ImportEnterpriseAccelerateTargetsRequest
       * @return ImportEnterpriseAccelerateTargetsResponse
       */
      Models::ImportEnterpriseAccelerateTargetsResponse importEnterpriseAccelerateTargets(const Models::ImportEnterpriseAccelerateTargetsRequest &request);

      /**
       * @summary 批量查询内网访问策略的应用
       *
       * @param request ListApplicationsForPrivateAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForPrivateAccessPolicyResponse
       */
      Models::ListApplicationsForPrivateAccessPolicyResponse listApplicationsForPrivateAccessPolicyWithOptions(const Models::ListApplicationsForPrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询内网访问策略的应用
       *
       * @param request ListApplicationsForPrivateAccessPolicyRequest
       * @return ListApplicationsForPrivateAccessPolicyResponse
       */
      Models::ListApplicationsForPrivateAccessPolicyResponse listApplicationsForPrivateAccessPolicy(const Models::ListApplicationsForPrivateAccessPolicyRequest &request);

      /**
       * @summary 批量查询内网访问标签的应用
       *
       * @param request ListApplicationsForPrivateAccessTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForPrivateAccessTagResponse
       */
      Models::ListApplicationsForPrivateAccessTagResponse listApplicationsForPrivateAccessTagWithOptions(const Models::ListApplicationsForPrivateAccessTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询内网访问标签的应用
       *
       * @param request ListApplicationsForPrivateAccessTagRequest
       * @return ListApplicationsForPrivateAccessTagResponse
       */
      Models::ListApplicationsForPrivateAccessTagResponse listApplicationsForPrivateAccessTag(const Models::ListApplicationsForPrivateAccessTagRequest &request);

      /**
       * @summary 列表查询审批流程
       *
       * @param request ListApprovalProcessesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApprovalProcessesResponse
       */
      Models::ListApprovalProcessesResponse listApprovalProcessesWithOptions(const Models::ListApprovalProcessesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列表查询审批流程
       *
       * @param request ListApprovalProcessesRequest
       * @return ListApprovalProcessesResponse
       */
      Models::ListApprovalProcessesResponse listApprovalProcesses(const Models::ListApprovalProcessesRequest &request);

      /**
       * @summary 查询审批渲染模板关联的流程
       *
       * @param request ListApprovalProcessesForApprovalSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApprovalProcessesForApprovalSchemasResponse
       */
      Models::ListApprovalProcessesForApprovalSchemasResponse listApprovalProcessesForApprovalSchemasWithOptions(const Models::ListApprovalProcessesForApprovalSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询审批渲染模板关联的流程
       *
       * @param request ListApprovalProcessesForApprovalSchemasRequest
       * @return ListApprovalProcessesForApprovalSchemasResponse
       */
      Models::ListApprovalProcessesForApprovalSchemasResponse listApprovalProcessesForApprovalSchemas(const Models::ListApprovalProcessesForApprovalSchemasRequest &request);

      /**
       * @summary 列表查询审批动态模板
       *
       * @param request ListApprovalSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApprovalSchemasResponse
       */
      Models::ListApprovalSchemasResponse listApprovalSchemasWithOptions(const Models::ListApprovalSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列表查询审批动态模板
       *
       * @param request ListApprovalSchemasRequest
       * @return ListApprovalSchemasResponse
       */
      Models::ListApprovalSchemasResponse listApprovalSchemas(const Models::ListApprovalSchemasRequest &request);

      /**
       * @summary 查询审批流程关联的渲染模板
       *
       * @param request ListApprovalSchemasForApprovalProcessesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApprovalSchemasForApprovalProcessesResponse
       */
      Models::ListApprovalSchemasForApprovalProcessesResponse listApprovalSchemasForApprovalProcessesWithOptions(const Models::ListApprovalSchemasForApprovalProcessesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询审批流程关联的渲染模板
       *
       * @param request ListApprovalSchemasForApprovalProcessesRequest
       * @return ListApprovalSchemasForApprovalProcessesResponse
       */
      Models::ListApprovalSchemasForApprovalProcessesResponse listApprovalSchemasForApprovalProcesses(const Models::ListApprovalSchemasForApprovalProcessesRequest &request);

      /**
       * @summary 批量查询审批
       *
       * @param request ListApprovalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApprovalsResponse
       */
      Models::ListApprovalsResponse listApprovalsWithOptions(const Models::ListApprovalsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询审批
       *
       * @param request ListApprovalsRequest
       * @return ListApprovalsResponse
       */
      Models::ListApprovalsResponse listApprovals(const Models::ListApprovalsRequest &request);

      /**
       * @summary 查询自定义身份源用户
       *
       * @param request ListClientUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientUsersResponse
       */
      Models::ListClientUsersResponse listClientUsersWithOptions(const Models::ListClientUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询自定义身份源用户
       *
       * @param request ListClientUsersRequest
       * @return ListClientUsersResponse
       */
      Models::ListClientUsersResponse listClientUsers(const Models::ListClientUsersRequest &request);

      /**
       * @summary Batch query connectors
       *
       * @param request ListConnectorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnectorsResponse
       */
      Models::ListConnectorsResponse listConnectorsWithOptions(const Models::ListConnectorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch query connectors
       *
       * @param request ListConnectorsRequest
       * @return ListConnectorsResponse
       */
      Models::ListConnectorsResponse listConnectors(const Models::ListConnectorsRequest &request);

      /**
       * @summary Batch Query Dynamic Policy Disposal Processes
       *
       * @param request ListDynamicDisposalProcessesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDynamicDisposalProcessesResponse
       */
      Models::ListDynamicDisposalProcessesResponse listDynamicDisposalProcessesWithOptions(const Models::ListDynamicDisposalProcessesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch Query Dynamic Policy Disposal Processes
       *
       * @param request ListDynamicDisposalProcessesRequest
       * @return ListDynamicDisposalProcessesResponse
       */
      Models::ListDynamicDisposalProcessesResponse listDynamicDisposalProcesses(const Models::ListDynamicDisposalProcessesRequest &request);

      /**
       * @summary 批量查询动态路由的地域
       *
       * @param request ListDynamicRouteRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDynamicRouteRegionsResponse
       */
      Models::ListDynamicRouteRegionsResponse listDynamicRouteRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询动态路由的地域
       *
       * @return ListDynamicRouteRegionsResponse
       */
      Models::ListDynamicRouteRegionsResponse listDynamicRouteRegions();

      /**
       * @summary 批量查询动态路由
       *
       * @param request ListDynamicRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDynamicRoutesResponse
       */
      Models::ListDynamicRoutesResponse listDynamicRoutesWithOptions(const Models::ListDynamicRoutesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询动态路由
       *
       * @param request ListDynamicRoutesRequest
       * @return ListDynamicRoutesResponse
       */
      Models::ListDynamicRoutesResponse listDynamicRoutes(const Models::ListDynamicRoutesRequest &request);

      /**
       * @summary 查询加速策略日志列表
       *
       * @param request ListEnterpriseAccelerateLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnterpriseAccelerateLogsResponse
       */
      Models::ListEnterpriseAccelerateLogsResponse listEnterpriseAccelerateLogsWithOptions(const Models::ListEnterpriseAccelerateLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询加速策略日志列表
       *
       * @param request ListEnterpriseAccelerateLogsRequest
       * @return ListEnterpriseAccelerateLogsResponse
       */
      Models::ListEnterpriseAccelerateLogsResponse listEnterpriseAccelerateLogs(const Models::ListEnterpriseAccelerateLogsRequest &request);

      /**
       * @summary 查询加速策略列表
       *
       * @param request ListEnterpriseAcceleratePoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnterpriseAcceleratePoliciesResponse
       */
      Models::ListEnterpriseAcceleratePoliciesResponse listEnterpriseAcceleratePoliciesWithOptions(const Models::ListEnterpriseAcceleratePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询加速策略列表
       *
       * @param request ListEnterpriseAcceleratePoliciesRequest
       * @return ListEnterpriseAcceleratePoliciesResponse
       */
      Models::ListEnterpriseAcceleratePoliciesResponse listEnterpriseAcceleratePolicies(const Models::ListEnterpriseAcceleratePoliciesRequest &request);

      /**
       * @summary 查询加速对象列表
       *
       * @param request ListEnterpriseAccelerateTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnterpriseAccelerateTargetsResponse
       */
      Models::ListEnterpriseAccelerateTargetsResponse listEnterpriseAccelerateTargetsWithOptions(const Models::ListEnterpriseAccelerateTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询加速对象列表
       *
       * @param request ListEnterpriseAccelerateTargetsRequest
       * @return ListEnterpriseAccelerateTargetsResponse
       */
      Models::ListEnterpriseAccelerateTargetsResponse listEnterpriseAccelerateTargets(const Models::ListEnterpriseAccelerateTargetsRequest &request);

      /**
       * @summary 批量查询超额注册申请列表
       *
       * @param request ListExcessiveDeviceRegistrationApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExcessiveDeviceRegistrationApplicationsResponse
       */
      Models::ListExcessiveDeviceRegistrationApplicationsResponse listExcessiveDeviceRegistrationApplicationsWithOptions(const Models::ListExcessiveDeviceRegistrationApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询超额注册申请列表
       *
       * @param request ListExcessiveDeviceRegistrationApplicationsRequest
       * @return ListExcessiveDeviceRegistrationApplicationsResponse
       */
      Models::ListExcessiveDeviceRegistrationApplicationsResponse listExcessiveDeviceRegistrationApplications(const Models::ListExcessiveDeviceRegistrationApplicationsRequest &request);

      /**
       * @summary 查询IDP配置
       *
       * @param request ListIdpConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdpConfigsResponse
       */
      Models::ListIdpConfigsResponse listIdpConfigsWithOptions(const Models::ListIdpConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询IDP配置
       *
       * @param request ListIdpConfigsRequest
       * @return ListIdpConfigsResponse
       */
      Models::ListIdpConfigsResponse listIdpConfigs(const Models::ListIdpConfigsRequest &request);

      /**
       * @summary 查询自定义身份源部门
       *
       * @param request ListIdpDepartmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdpDepartmentsResponse
       */
      Models::ListIdpDepartmentsResponse listIdpDepartmentsWithOptions(const Models::ListIdpDepartmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询自定义身份源部门
       *
       * @param request ListIdpDepartmentsRequest
       * @return ListIdpDepartmentsResponse
       */
      Models::ListIdpDepartmentsResponse listIdpDepartments(const Models::ListIdpDepartmentsRequest &request);

      /**
       * @summary 入网用户列表
       *
       * @param request ListNacUserCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNacUserCertResponse
       */
      Models::ListNacUserCertResponse listNacUserCertWithOptions(const Models::ListNacUserCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 入网用户列表
       *
       * @param request ListNacUserCertRequest
       * @return ListNacUserCertResponse
       */
      Models::ListNacUserCertResponse listNacUserCert(const Models::ListNacUserCertRequest &request);

      /**
       * @summary 批量查询内网访问应用的策略
       *
       * @param request ListPolicesForPrivateAccessApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicesForPrivateAccessApplicationResponse
       */
      Models::ListPolicesForPrivateAccessApplicationResponse listPolicesForPrivateAccessApplicationWithOptions(const Models::ListPolicesForPrivateAccessApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询内网访问应用的策略
       *
       * @param request ListPolicesForPrivateAccessApplicationRequest
       * @return ListPolicesForPrivateAccessApplicationResponse
       */
      Models::ListPolicesForPrivateAccessApplicationResponse listPolicesForPrivateAccessApplication(const Models::ListPolicesForPrivateAccessApplicationRequest &request);

      /**
       * @summary 批量查询内网访问标签的策略
       *
       * @param request ListPolicesForPrivateAccessTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicesForPrivateAccessTagResponse
       */
      Models::ListPolicesForPrivateAccessTagResponse listPolicesForPrivateAccessTagWithOptions(const Models::ListPolicesForPrivateAccessTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询内网访问标签的策略
       *
       * @param request ListPolicesForPrivateAccessTagRequest
       * @return ListPolicesForPrivateAccessTagResponse
       */
      Models::ListPolicesForPrivateAccessTagResponse listPolicesForPrivateAccessTag(const Models::ListPolicesForPrivateAccessTagRequest &request);

      /**
       * @summary 批量查询用户组的策略
       *
       * @param request ListPolicesForUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicesForUserGroupResponse
       */
      Models::ListPolicesForUserGroupResponse listPolicesForUserGroupWithOptions(const Models::ListPolicesForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询用户组的策略
       *
       * @param request ListPolicesForUserGroupRequest
       * @return ListPolicesForUserGroupResponse
       */
      Models::ListPolicesForUserGroupResponse listPolicesForUserGroup(const Models::ListPolicesForUserGroupRequest &request);

      /**
       * @summary pop节点流量统计
       *
       * @param request ListPopTrafficStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPopTrafficStatisticsResponse
       */
      Models::ListPopTrafficStatisticsResponse listPopTrafficStatisticsWithOptions(const Models::ListPopTrafficStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary pop节点流量统计
       *
       * @param request ListPopTrafficStatisticsRequest
       * @return ListPopTrafficStatisticsResponse
       */
      Models::ListPopTrafficStatisticsResponse listPopTrafficStatistics(const Models::ListPopTrafficStatisticsRequest &request);

      /**
       * @summary 批量查询内网访问应用
       *
       * @param request ListPrivateAccessApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivateAccessApplicationsResponse
       */
      Models::ListPrivateAccessApplicationsResponse listPrivateAccessApplicationsWithOptions(const Models::ListPrivateAccessApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询内网访问应用
       *
       * @param request ListPrivateAccessApplicationsRequest
       * @return ListPrivateAccessApplicationsResponse
       */
      Models::ListPrivateAccessApplicationsResponse listPrivateAccessApplications(const Models::ListPrivateAccessApplicationsRequest &request);

      /**
       * @summary 批量查询动态路由的内网访问应用
       *
       * @param request ListPrivateAccessApplicationsForDynamicRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivateAccessApplicationsForDynamicRouteResponse
       */
      Models::ListPrivateAccessApplicationsForDynamicRouteResponse listPrivateAccessApplicationsForDynamicRouteWithOptions(const Models::ListPrivateAccessApplicationsForDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询动态路由的内网访问应用
       *
       * @param request ListPrivateAccessApplicationsForDynamicRouteRequest
       * @return ListPrivateAccessApplicationsForDynamicRouteResponse
       */
      Models::ListPrivateAccessApplicationsForDynamicRouteResponse listPrivateAccessApplicationsForDynamicRoute(const Models::ListPrivateAccessApplicationsForDynamicRouteRequest &request);

      /**
       * @summary Queries the private access policies within the current Alibaba Cloud account.
       *
       * @param request ListPrivateAccessPolicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivateAccessPolicesResponse
       */
      Models::ListPrivateAccessPolicesResponse listPrivateAccessPolicesWithOptions(const Models::ListPrivateAccessPolicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the private access policies within the current Alibaba Cloud account.
       *
       * @param request ListPrivateAccessPolicesRequest
       * @return ListPrivateAccessPolicesResponse
       */
      Models::ListPrivateAccessPolicesResponse listPrivateAccessPolices(const Models::ListPrivateAccessPolicesRequest &request);

      /**
       * @summary Queries the information about all internal access tags within the current Alibaba Cloud account.
       *
       * @param request ListPrivateAccessTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivateAccessTagsResponse
       */
      Models::ListPrivateAccessTagsResponse listPrivateAccessTagsWithOptions(const Models::ListPrivateAccessTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all internal access tags within the current Alibaba Cloud account.
       *
       * @param request ListPrivateAccessTagsRequest
       * @return ListPrivateAccessTagsResponse
       */
      Models::ListPrivateAccessTagsResponse listPrivateAccessTags(const Models::ListPrivateAccessTagsRequest &request);

      /**
       * @summary 批量查询动态路由的内网访问标签
       *
       * @param request ListPrivateAccessTagsForDynamicRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivateAccessTagsForDynamicRouteResponse
       */
      Models::ListPrivateAccessTagsForDynamicRouteResponse listPrivateAccessTagsForDynamicRouteWithOptions(const Models::ListPrivateAccessTagsForDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询动态路由的内网访问标签
       *
       * @param request ListPrivateAccessTagsForDynamicRouteRequest
       * @return ListPrivateAccessTagsForDynamicRouteResponse
       */
      Models::ListPrivateAccessTagsForDynamicRouteResponse listPrivateAccessTagsForDynamicRoute(const Models::ListPrivateAccessTagsForDynamicRouteRequest &request);

      /**
       * @summary 查询用户设备注册策略列表
       *
       * @param request ListRegistrationPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegistrationPoliciesResponse
       */
      Models::ListRegistrationPoliciesResponse listRegistrationPoliciesWithOptions(const Models::ListRegistrationPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户设备注册策略列表
       *
       * @param request ListRegistrationPoliciesRequest
       * @return ListRegistrationPoliciesResponse
       */
      Models::ListRegistrationPoliciesResponse listRegistrationPolicies(const Models::ListRegistrationPoliciesRequest &request);

      /**
       * @summary 查询用户组相关的设备注册策略
       *
       * @param request ListRegistrationPoliciesForUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegistrationPoliciesForUserGroupResponse
       */
      Models::ListRegistrationPoliciesForUserGroupResponse listRegistrationPoliciesForUserGroupWithOptions(const Models::ListRegistrationPoliciesForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户组相关的设备注册策略
       *
       * @param request ListRegistrationPoliciesForUserGroupRequest
       * @return ListRegistrationPoliciesForUserGroupResponse
       */
      Models::ListRegistrationPoliciesForUserGroupResponse listRegistrationPoliciesForUserGroup(const Models::ListRegistrationPoliciesForUserGroupRequest &request);

      /**
       * @summary 批量查询终端安装软件列表
       *
       * @param request ListSoftwareForUserDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSoftwareForUserDeviceResponse
       */
      Models::ListSoftwareForUserDeviceResponse listSoftwareForUserDeviceWithOptions(const Models::ListSoftwareForUserDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询终端安装软件列表
       *
       * @param request ListSoftwareForUserDeviceRequest
       * @return ListSoftwareForUserDeviceResponse
       */
      Models::ListSoftwareForUserDeviceResponse listSoftwareForUserDevice(const Models::ListSoftwareForUserDeviceRequest &request);

      /**
       * @summary 批量查询内网访问应用的标签
       *
       * @param request ListTagsForPrivateAccessApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagsForPrivateAccessApplicationResponse
       */
      Models::ListTagsForPrivateAccessApplicationResponse listTagsForPrivateAccessApplicationWithOptions(const Models::ListTagsForPrivateAccessApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询内网访问应用的标签
       *
       * @param request ListTagsForPrivateAccessApplicationRequest
       * @return ListTagsForPrivateAccessApplicationResponse
       */
      Models::ListTagsForPrivateAccessApplicationResponse listTagsForPrivateAccessApplication(const Models::ListTagsForPrivateAccessApplicationRequest &request);

      /**
       * @summary 批量查询内网访问策略的标签
       *
       * @param request ListTagsForPrivateAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagsForPrivateAccessPolicyResponse
       */
      Models::ListTagsForPrivateAccessPolicyResponse listTagsForPrivateAccessPolicyWithOptions(const Models::ListTagsForPrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询内网访问策略的标签
       *
       * @param request ListTagsForPrivateAccessPolicyRequest
       * @return ListTagsForPrivateAccessPolicyResponse
       */
      Models::ListTagsForPrivateAccessPolicyResponse listTagsForPrivateAccessPolicy(const Models::ListTagsForPrivateAccessPolicyRequest &request);

      /**
       * @summary 列表查询卸载申请列表
       *
       * @param request ListUninstallApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUninstallApplicationsResponse
       */
      Models::ListUninstallApplicationsResponse listUninstallApplicationsWithOptions(const Models::ListUninstallApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列表查询卸载申请列表
       *
       * @param request ListUninstallApplicationsRequest
       * @return ListUninstallApplicationsResponse
       */
      Models::ListUninstallApplicationsResponse listUninstallApplications(const Models::ListUninstallApplicationsRequest &request);

      /**
       * @summary 列表查询用户应用权限
       *
       * @param request ListUserApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserApplicationsResponse
       */
      Models::ListUserApplicationsResponse listUserApplicationsWithOptions(const Models::ListUserApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列表查询用户应用权限
       *
       * @param request ListUserApplicationsRequest
       * @return ListUserApplicationsResponse
       */
      Models::ListUserApplicationsResponse listUserApplications(const Models::ListUserApplicationsRequest &request);

      /**
       * @summary 批量查询用户设备列表
       *
       * @param request ListUserDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserDevicesResponse
       */
      Models::ListUserDevicesResponse listUserDevicesWithOptions(const Models::ListUserDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询用户设备列表
       *
       * @param request ListUserDevicesRequest
       * @return ListUserDevicesResponse
       */
      Models::ListUserDevicesResponse listUserDevices(const Models::ListUserDevicesRequest &request);

      /**
       * @summary 批量查询用户组
       *
       * @param request ListUserGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserGroupsResponse
       */
      Models::ListUserGroupsResponse listUserGroupsWithOptions(const Models::ListUserGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询用户组
       *
       * @param request ListUserGroupsRequest
       * @return ListUserGroupsResponse
       */
      Models::ListUserGroupsResponse listUserGroups(const Models::ListUserGroupsRequest &request);

      /**
       * @summary 批量查询内网访问策略的用户组
       *
       * @param request ListUserGroupsForPrivateAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserGroupsForPrivateAccessPolicyResponse
       */
      Models::ListUserGroupsForPrivateAccessPolicyResponse listUserGroupsForPrivateAccessPolicyWithOptions(const Models::ListUserGroupsForPrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询内网访问策略的用户组
       *
       * @param request ListUserGroupsForPrivateAccessPolicyRequest
       * @return ListUserGroupsForPrivateAccessPolicyResponse
       */
      Models::ListUserGroupsForPrivateAccessPolicyResponse listUserGroupsForPrivateAccessPolicy(const Models::ListUserGroupsForPrivateAccessPolicyRequest &request);

      /**
       * @summary 查询设备注册策略相关用户组
       *
       * @param request ListUserGroupsForRegistrationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserGroupsForRegistrationPolicyResponse
       */
      Models::ListUserGroupsForRegistrationPolicyResponse listUserGroupsForRegistrationPolicyWithOptions(const Models::ListUserGroupsForRegistrationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询设备注册策略相关用户组
       *
       * @param request ListUserGroupsForRegistrationPolicyRequest
       * @return ListUserGroupsForRegistrationPolicyResponse
       */
      Models::ListUserGroupsForRegistrationPolicyResponse listUserGroupsForRegistrationPolicy(const Models::ListUserGroupsForRegistrationPolicyRequest &request);

      /**
       * @summary List query of user zero trust policies
       *
       * @param request ListUserPrivateAccessPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserPrivateAccessPoliciesResponse
       */
      Models::ListUserPrivateAccessPoliciesResponse listUserPrivateAccessPoliciesWithOptions(const Models::ListUserPrivateAccessPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List query of user zero trust policies
       *
       * @param request ListUserPrivateAccessPoliciesRequest
       * @return ListUserPrivateAccessPoliciesResponse
       */
      Models::ListUserPrivateAccessPoliciesResponse listUserPrivateAccessPolicies(const Models::ListUserPrivateAccessPoliciesRequest &request);

      /**
       * @summary 列表查询登陆用户
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列表查询登陆用户
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary 根据数字水印信息查询字符串水印信息
       *
       * @param request LookupWmInfoMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LookupWmInfoMappingResponse
       */
      Models::LookupWmInfoMappingResponse lookupWmInfoMappingWithOptions(const Models::LookupWmInfoMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据数字水印信息查询字符串水印信息
       *
       * @param request LookupWmInfoMappingRequest
       * @return LookupWmInfoMappingResponse
       */
      Models::LookupWmInfoMappingResponse lookupWmInfoMapping(const Models::LookupWmInfoMappingRequest &request);

      /**
       * @summary 修改加速策略
       *
       * @param request ModifyEnterpriseAcceleratePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEnterpriseAcceleratePolicyResponse
       */
      Models::ModifyEnterpriseAcceleratePolicyResponse modifyEnterpriseAcceleratePolicyWithOptions(const Models::ModifyEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改加速策略
       *
       * @param request ModifyEnterpriseAcceleratePolicyRequest
       * @return ModifyEnterpriseAcceleratePolicyResponse
       */
      Models::ModifyEnterpriseAcceleratePolicyResponse modifyEnterpriseAcceleratePolicy(const Models::ModifyEnterpriseAcceleratePolicyRequest &request);

      /**
       * @deprecated OpenAPI RevokeUserSession is deprecated
       *
       * @summary 吊销用户登录会话
       *
       * @param request RevokeUserSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeUserSessionResponse
       */
      Models::RevokeUserSessionResponse revokeUserSessionWithOptions(const Models::RevokeUserSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RevokeUserSession is deprecated
       *
       * @summary 吊销用户登录会话
       *
       * @param request RevokeUserSessionRequest
       * @return RevokeUserSessionResponse
       */
      Models::RevokeUserSessionResponse revokeUserSession(const Models::RevokeUserSessionRequest &request);

      /**
       * @summary 更新审批流程
       *
       * @param tmpReq UpdateApprovalProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApprovalProcessResponse
       */
      Models::UpdateApprovalProcessResponse updateApprovalProcessWithOptions(const Models::UpdateApprovalProcessRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新审批流程
       *
       * @param request UpdateApprovalProcessRequest
       * @return UpdateApprovalProcessResponse
       */
      Models::UpdateApprovalProcessResponse updateApprovalProcess(const Models::UpdateApprovalProcessRequest &request);

      /**
       * @summary 修改审批状态
       *
       * @param request UpdateApprovalStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApprovalStatusResponse
       */
      Models::UpdateApprovalStatusResponse updateApprovalStatusWithOptions(const Models::UpdateApprovalStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改审批状态
       *
       * @param request UpdateApprovalStatusRequest
       * @return UpdateApprovalStatusResponse
       */
      Models::UpdateApprovalStatusResponse updateApprovalStatus(const Models::UpdateApprovalStatusRequest &request);

      /**
       * @summary 更新自启动与防卸载策略配置
       *
       * @param tmpReq UpdateBootAndAntiUninstallPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBootAndAntiUninstallPolicyResponse
       */
      Models::UpdateBootAndAntiUninstallPolicyResponse updateBootAndAntiUninstallPolicyWithOptions(const Models::UpdateBootAndAntiUninstallPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新自启动与防卸载策略配置
       *
       * @param request UpdateBootAndAntiUninstallPolicyRequest
       * @return UpdateBootAndAntiUninstallPolicyResponse
       */
      Models::UpdateBootAndAntiUninstallPolicyResponse updateBootAndAntiUninstallPolicy(const Models::UpdateBootAndAntiUninstallPolicyRequest &request);

      /**
       * @summary 修改自定义身份源指定用户
       *
       * @param request UpdateClientUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClientUserResponse
       */
      Models::UpdateClientUserResponse updateClientUserWithOptions(const Models::UpdateClientUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改自定义身份源指定用户
       *
       * @param request UpdateClientUserRequest
       * @return UpdateClientUserResponse
       */
      Models::UpdateClientUserResponse updateClientUser(const Models::UpdateClientUserRequest &request);

      /**
       * @summary 修改自定义身份源指定用户密码
       *
       * @param request UpdateClientUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClientUserPasswordResponse
       */
      Models::UpdateClientUserPasswordResponse updateClientUserPasswordWithOptions(const Models::UpdateClientUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改自定义身份源指定用户密码
       *
       * @param request UpdateClientUserPasswordRequest
       * @return UpdateClientUserPasswordResponse
       */
      Models::UpdateClientUserPasswordResponse updateClientUserPassword(const Models::UpdateClientUserPasswordRequest &request);

      /**
       * @summary 修改自定义身份源指定用户启用状态
       *
       * @param request UpdateClientUserStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClientUserStatusResponse
       */
      Models::UpdateClientUserStatusResponse updateClientUserStatusWithOptions(const Models::UpdateClientUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改自定义身份源指定用户启用状态
       *
       * @param request UpdateClientUserStatusRequest
       * @return UpdateClientUserStatusResponse
       */
      Models::UpdateClientUserStatusResponse updateClientUserStatus(const Models::UpdateClientUserStatusRequest &request);

      /**
       * @summary 修改动态路由
       *
       * @param request UpdateDynamicRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDynamicRouteResponse
       */
      Models::UpdateDynamicRouteResponse updateDynamicRouteWithOptions(const Models::UpdateDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改动态路由
       *
       * @param request UpdateDynamicRouteRequest
       * @return UpdateDynamicRouteResponse
       */
      Models::UpdateDynamicRouteResponse updateDynamicRoute(const Models::UpdateDynamicRouteRequest &request);

      /**
       * @summary 批量更新超额注册申请状态
       *
       * @param request UpdateExcessiveDeviceRegistrationApplicationsStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExcessiveDeviceRegistrationApplicationsStatusResponse
       */
      Models::UpdateExcessiveDeviceRegistrationApplicationsStatusResponse updateExcessiveDeviceRegistrationApplicationsStatusWithOptions(const Models::UpdateExcessiveDeviceRegistrationApplicationsStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量更新超额注册申请状态
       *
       * @param request UpdateExcessiveDeviceRegistrationApplicationsStatusRequest
       * @return UpdateExcessiveDeviceRegistrationApplicationsStatusResponse
       */
      Models::UpdateExcessiveDeviceRegistrationApplicationsStatusResponse updateExcessiveDeviceRegistrationApplicationsStatus(const Models::UpdateExcessiveDeviceRegistrationApplicationsStatusRequest &request);

      /**
       * @summary 修改指定自定义身份源部门
       *
       * @param request UpdateIdpDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIdpDepartmentResponse
       */
      Models::UpdateIdpDepartmentResponse updateIdpDepartmentWithOptions(const Models::UpdateIdpDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改指定自定义身份源部门
       *
       * @param request UpdateIdpDepartmentRequest
       * @return UpdateIdpDepartmentResponse
       */
      Models::UpdateIdpDepartmentResponse updateIdpDepartment(const Models::UpdateIdpDepartmentRequest &request);

      /**
       * @summary 更新NAC User 状态
       *
       * @param request UpdateNacUserCertStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNacUserCertStatusResponse
       */
      Models::UpdateNacUserCertStatusResponse updateNacUserCertStatusWithOptions(const Models::UpdateNacUserCertStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新NAC User 状态
       *
       * @param request UpdateNacUserCertStatusRequest
       * @return UpdateNacUserCertStatusResponse
       */
      Models::UpdateNacUserCertStatusResponse updateNacUserCertStatus(const Models::UpdateNacUserCertStatusRequest &request);

      /**
       * @summary Modifies the office applications of the current Alibaba Cloud account.
       *
       * @param tmpReq UpdatePrivateAccessApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrivateAccessApplicationResponse
       */
      Models::UpdatePrivateAccessApplicationResponse updatePrivateAccessApplicationWithOptions(const Models::UpdatePrivateAccessApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the office applications of the current Alibaba Cloud account.
       *
       * @param request UpdatePrivateAccessApplicationRequest
       * @return UpdatePrivateAccessApplicationResponse
       */
      Models::UpdatePrivateAccessApplicationResponse updatePrivateAccessApplication(const Models::UpdatePrivateAccessApplicationRequest &request);

      /**
       * @summary Modify Private Access Policy
       *
       * @param request UpdatePrivateAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrivateAccessPolicyResponse
       */
      Models::UpdatePrivateAccessPolicyResponse updatePrivateAccessPolicyWithOptions(const Models::UpdatePrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Private Access Policy
       *
       * @param request UpdatePrivateAccessPolicyRequest
       * @return UpdatePrivateAccessPolicyResponse
       */
      Models::UpdatePrivateAccessPolicyResponse updatePrivateAccessPolicy(const Models::UpdatePrivateAccessPolicyRequest &request);

      /**
       * @summary 修改设备注册策略
       *
       * @param tmpReq UpdateRegistrationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRegistrationPolicyResponse
       */
      Models::UpdateRegistrationPolicyResponse updateRegistrationPolicyWithOptions(const Models::UpdateRegistrationPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改设备注册策略
       *
       * @param request UpdateRegistrationPolicyRequest
       * @return UpdateRegistrationPolicyResponse
       */
      Models::UpdateRegistrationPolicyResponse updateRegistrationPolicy(const Models::UpdateRegistrationPolicyRequest &request);

      /**
       * @summary 批量修改卸载申请状态
       *
       * @param request UpdateUninstallApplicationsStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUninstallApplicationsStatusResponse
       */
      Models::UpdateUninstallApplicationsStatusResponse updateUninstallApplicationsStatusWithOptions(const Models::UpdateUninstallApplicationsStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量修改卸载申请状态
       *
       * @param request UpdateUninstallApplicationsStatusRequest
       * @return UpdateUninstallApplicationsStatusResponse
       */
      Models::UpdateUninstallApplicationsStatusResponse updateUninstallApplicationsStatus(const Models::UpdateUninstallApplicationsStatusRequest &request);

      /**
       * @summary 批量更新用户设备共享状态
       *
       * @param request UpdateUserDevicesSharingStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserDevicesSharingStatusResponse
       */
      Models::UpdateUserDevicesSharingStatusResponse updateUserDevicesSharingStatusWithOptions(const Models::UpdateUserDevicesSharingStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量更新用户设备共享状态
       *
       * @param request UpdateUserDevicesSharingStatusRequest
       * @return UpdateUserDevicesSharingStatusResponse
       */
      Models::UpdateUserDevicesSharingStatusResponse updateUserDevicesSharingStatus(const Models::UpdateUserDevicesSharingStatusRequest &request);

      /**
       * @summary 批量更新用户设备状态
       *
       * @param request UpdateUserDevicesStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserDevicesStatusResponse
       */
      Models::UpdateUserDevicesStatusResponse updateUserDevicesStatusWithOptions(const Models::UpdateUserDevicesStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量更新用户设备状态
       *
       * @param request UpdateUserDevicesStatusRequest
       * @return UpdateUserDevicesStatusResponse
       */
      Models::UpdateUserDevicesStatusResponse updateUserDevicesStatus(const Models::UpdateUserDevicesStatusRequest &request);

      /**
       * @summary 修改用户组
       *
       * @param request UpdateUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserGroupResponse
       */
      Models::UpdateUserGroupResponse updateUserGroupWithOptions(const Models::UpdateUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改用户组
       *
       * @param request UpdateUserGroupRequest
       * @return UpdateUserGroupResponse
       */
      Models::UpdateUserGroupResponse updateUserGroup(const Models::UpdateUserGroupRequest &request);

      /**
       * @summary 批量修改登陆用户状态
       *
       * @param request UpdateUsersStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUsersStatusResponse
       */
      Models::UpdateUsersStatusResponse updateUsersStatusWithOptions(const Models::UpdateUsersStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量修改登陆用户状态
       *
       * @param request UpdateUsersStatusRequest
       * @return UpdateUsersStatusResponse
       */
      Models::UpdateUsersStatusResponse updateUsersStatus(const Models::UpdateUsersStatusRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
