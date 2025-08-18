// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_APPSTREAMCENTER20210901_HPP_
#define ALIBABACLOUD_APPSTREAMCENTER20210901_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AppstreamCenter20210901Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AppstreamCenter20210901.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Sets the execution time of an over-the-air (OTA) update task.
       *
       * @param request ApproveOtaTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApproveOtaTaskResponse
       */
      Models::ApproveOtaTaskResponse approveOtaTaskWithOptions(const Models::ApproveOtaTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the execution time of an over-the-air (OTA) update task.
       *
       * @param request ApproveOtaTaskRequest
       * @return ApproveOtaTaskResponse
       */
      Models::ApproveOtaTaskResponse approveOtaTask(const Models::ApproveOtaTaskRequest &request);

      /**
       * @summary 授权用户
       *
       * @param tmpReq AuthorizeInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeInstanceGroupResponse
       */
      Models::AuthorizeInstanceGroupResponse authorizeInstanceGroupWithOptions(const Models::AuthorizeInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 授权用户
       *
       * @param request AuthorizeInstanceGroupRequest
       * @return AuthorizeInstanceGroupResponse
       */
      Models::AuthorizeInstanceGroupResponse authorizeInstanceGroup(const Models::AuthorizeInstanceGroupRequest &request);

      /**
       * @summary 创建云应用交付组
       *
       * @param tmpReq CreateAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppInstanceGroupResponse
       */
      Models::CreateAppInstanceGroupResponse createAppInstanceGroupWithOptions(const Models::CreateAppInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建云应用交付组
       *
       * @param request CreateAppInstanceGroupRequest
       * @return CreateAppInstanceGroupResponse
       */
      Models::CreateAppInstanceGroupResponse createAppInstanceGroup(const Models::CreateAppInstanceGroupRequest &request);

      /**
       * @summary Creates a new image by debugging the delivery group.
       *
       * @param request CreateImageFromAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageFromAppInstanceGroupResponse
       */
      Models::CreateImageFromAppInstanceGroupResponse createImageFromAppInstanceGroupWithOptions(const Models::CreateImageFromAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new image by debugging the delivery group.
       *
       * @param request CreateImageFromAppInstanceGroupRequest
       * @return CreateImageFromAppInstanceGroupResponse
       */
      Models::CreateImageFromAppInstanceGroupResponse createImageFromAppInstanceGroup(const Models::CreateImageFromAppInstanceGroupRequest &request);

      /**
       * @summary 创建一台或多台研发主机
       *
       * @param request CreateWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWuyingServerResponse
       */
      Models::CreateWuyingServerResponse createWuyingServerWithOptions(const Models::CreateWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一台或多台研发主机
       *
       * @param request CreateWuyingServerRequest
       * @return CreateWuyingServerResponse
       */
      Models::CreateWuyingServerResponse createWuyingServer(const Models::CreateWuyingServerRequest &request);

      /**
       * @summary Deletes a delivery group that uses the By Resource - Pay-as-you-go billing method.
       *
       * @description >  You cannot call this operation to delete a subscription delivery group.
       *
       * @param request DeleteAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppInstanceGroupResponse
       */
      Models::DeleteAppInstanceGroupResponse deleteAppInstanceGroupWithOptions(const Models::DeleteAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a delivery group that uses the By Resource - Pay-as-you-go billing method.
       *
       * @description >  You cannot call this operation to delete a subscription delivery group.
       *
       * @param request DeleteAppInstanceGroupRequest
       * @return DeleteAppInstanceGroupResponse
       */
      Models::DeleteAppInstanceGroupResponse deleteAppInstanceGroup(const Models::DeleteAppInstanceGroupRequest &request);

      /**
       * @summary Deletes an application instance.
       *
       * @description Only application instances that are in the Initializing or Idle state can be deleted. The operation can be called only by specific customers.
       *
       * @param request DeleteAppInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppInstancesResponse
       */
      Models::DeleteAppInstancesResponse deleteAppInstancesWithOptions(const Models::DeleteAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application instance.
       *
       * @description Only application instances that are in the Initializing or Idle state can be deleted. The operation can be called only by specific customers.
       *
       * @param request DeleteAppInstancesRequest
       * @return DeleteAppInstancesResponse
       */
      Models::DeleteAppInstancesResponse deleteAppInstances(const Models::DeleteAppInstancesRequest &request);

      /**
       * @summary 获取交付组详情
       *
       * @param request GetAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppInstanceGroupResponse
       */
      Models::GetAppInstanceGroupResponse getAppInstanceGroupWithOptions(const Models::GetAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取交付组详情
       *
       * @param request GetAppInstanceGroupRequest
       * @return GetAppInstanceGroupResponse
       */
      Models::GetAppInstanceGroupResponse getAppInstanceGroup(const Models::GetAppInstanceGroupRequest &request);

      /**
       * @summary Queries the credential that is used to connect to App Streaming.
       *
       * @description You must call this operation at least twice to obtain a connection credential.
       * The first time you call this operation, the system assigns an application instance to the specified convenience account and then starts the application. In this case, the ID of the started task, which is indicated by `TaskID`, is returned.
       * In subsequent calls, you must configure `TaskID` to query whether the task is completed. If the value of `TaskStatus` in the response is `Finished`, the connection credential, which is indicated by `Ticket`, is returned.
       *
       * @param request GetConnectionTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConnectionTicketResponse
       */
      Models::GetConnectionTicketResponse getConnectionTicketWithOptions(const Models::GetConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the credential that is used to connect to App Streaming.
       *
       * @description You must call this operation at least twice to obtain a connection credential.
       * The first time you call this operation, the system assigns an application instance to the specified convenience account and then starts the application. In this case, the ID of the started task, which is indicated by `TaskID`, is returned.
       * In subsequent calls, you must configure `TaskID` to query whether the task is completed. If the value of `TaskStatus` in the response is `Finished`, the connection credential, which is indicated by `Ticket`, is returned.
       *
       * @param request GetConnectionTicketRequest
       * @return GetConnectionTicketResponse
       */
      Models::GetConnectionTicketResponse getConnectionTicket(const Models::GetConnectionTicketRequest &request);

      /**
       * @summary Queries information that is used to debug an application instance.
       *
       * @param request GetDebugAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDebugAppInstanceResponse
       */
      Models::GetDebugAppInstanceResponse getDebugAppInstanceWithOptions(const Models::GetDebugAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information that is used to debug an application instance.
       *
       * @param request GetDebugAppInstanceRequest
       * @return GetDebugAppInstanceResponse
       */
      Models::GetDebugAppInstanceResponse getDebugAppInstance(const Models::GetDebugAppInstanceRequest &request);

      /**
       * @summary Queries the details of an over-the-air (OTA) update task, including the available versions and version description.
       *
       * @param request GetOtaTaskByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOtaTaskByTaskIdResponse
       */
      Models::GetOtaTaskByTaskIdResponse getOtaTaskByTaskIdWithOptions(const Models::GetOtaTaskByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an over-the-air (OTA) update task, including the available versions and version description.
       *
       * @param request GetOtaTaskByTaskIdRequest
       * @return GetOtaTaskByTaskIdResponse
       */
      Models::GetOtaTaskByTaskIdResponse getOtaTaskByTaskId(const Models::GetOtaTaskByTaskIdRequest &request);

      /**
       * @summary Queries resource prices.
       *
       * @param request GetResourcePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourcePriceResponse
       */
      Models::GetResourcePriceResponse getResourcePriceWithOptions(const Models::GetResourcePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resource prices.
       *
       * @param request GetResourcePriceRequest
       * @return GetResourcePriceResponse
       */
      Models::GetResourcePriceResponse getResourcePrice(const Models::GetResourcePriceRequest &request);

      /**
       * @summary Queries the renewal prices of App Streaming resources.
       *
       * @param request GetResourceRenewPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceRenewPriceResponse
       */
      Models::GetResourceRenewPriceResponse getResourceRenewPriceWithOptions(const Models::GetResourceRenewPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the renewal prices of App Streaming resources.
       *
       * @param request GetResourceRenewPriceRequest
       * @return GetResourceRenewPriceResponse
       */
      Models::GetResourceRenewPriceResponse getResourceRenewPrice(const Models::GetResourceRenewPriceRequest &request);

      /**
       * @summary Queries the details of multiple delivery groups that meet the query conditions.
       *
       * @param request ListAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppInstanceGroupResponse
       */
      Models::ListAppInstanceGroupResponse listAppInstanceGroupWithOptions(const Models::ListAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of multiple delivery groups that meet the query conditions.
       *
       * @param request ListAppInstanceGroupRequest
       * @return ListAppInstanceGroupResponse
       */
      Models::ListAppInstanceGroupResponse listAppInstanceGroup(const Models::ListAppInstanceGroupRequest &request);

      /**
       * @summary Queries the details of application instances in a delivery group, including the IDs, status, creation time, update time, session status, and public IP addresses associated with the primary NICs of the instances.
       *
       * @param request ListAppInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppInstancesResponse
       */
      Models::ListAppInstancesResponse listAppInstancesWithOptions(const Models::ListAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of application instances in a delivery group, including the IDs, status, creation time, update time, session status, and public IP addresses associated with the primary NICs of the instances.
       *
       * @param request ListAppInstancesRequest
       * @return ListAppInstancesResponse
       */
      Models::ListAppInstancesResponse listAppInstances(const Models::ListAppInstancesRequest &request);

      /**
       * @summary 通过交付组查询展示授权的用户组列表
       *
       * @param request ListAuthorizedUserGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedUserGroupsResponse
       */
      Models::ListAuthorizedUserGroupsResponse listAuthorizedUserGroupsWithOptions(const Models::ListAuthorizedUserGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过交付组查询展示授权的用户组列表
       *
       * @param request ListAuthorizedUserGroupsRequest
       * @return ListAuthorizedUserGroupsResponse
       */
      Models::ListAuthorizedUserGroupsResponse listAuthorizedUserGroups(const Models::ListAuthorizedUserGroupsRequest &request);

      /**
       * @summary 查询绑定信息，支持分页
       *
       * @param request ListBindInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBindInfoResponse
       */
      Models::ListBindInfoResponse listBindInfoWithOptions(const Models::ListBindInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询绑定信息，支持分页
       *
       * @param request ListBindInfoRequest
       * @return ListBindInfoResponse
       */
      Models::ListBindInfoResponse listBindInfo(const Models::ListBindInfoRequest &request);

      /**
       * @summary Queries the resource types that are available for purchase when you create a delivery group.
       *
       * @param request ListNodeInstanceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodeInstanceTypeResponse
       */
      Models::ListNodeInstanceTypeResponse listNodeInstanceTypeWithOptions(const Models::ListNodeInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource types that are available for purchase when you create a delivery group.
       *
       * @param request ListNodeInstanceTypeRequest
       * @return ListNodeInstanceTypeResponse
       */
      Models::ListNodeInstanceTypeResponse listNodeInstanceType(const Models::ListNodeInstanceTypeRequest &request);

      /**
       * @summary Queries resource nodes.
       *
       * @param request ListNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodesWithOptions(const Models::ListNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resource nodes.
       *
       * @param request ListNodesRequest
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodes(const Models::ListNodesRequest &request);

      /**
       * @summary Queries the information about over-the-air (OTA) update tasks.
       *
       * @param request ListOtaTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOtaTaskResponse
       */
      Models::ListOtaTaskResponse listOtaTaskWithOptions(const Models::ListOtaTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about over-the-air (OTA) update tasks.
       *
       * @param request ListOtaTaskRequest
       * @return ListOtaTaskResponse
       */
      Models::ListOtaTaskResponse listOtaTask(const Models::ListOtaTaskRequest &request);

      /**
       * @summary 查询交付组内持久会话列表
       *
       * @param request ListPersistentAppInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPersistentAppInstancesResponse
       */
      Models::ListPersistentAppInstancesResponse listPersistentAppInstancesWithOptions(const Models::ListPersistentAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询交付组内持久会话列表
       *
       * @param request ListPersistentAppInstancesRequest
       * @return ListPersistentAppInstancesResponse
       */
      Models::ListPersistentAppInstancesResponse listPersistentAppInstances(const Models::ListPersistentAppInstancesRequest &request);

      /**
       * @summary Queries the regions that are supported by App Streaming.
       *
       * @description >  All supported regions instead of available regions are returned by this operation. For more information, see [Supported regions](https://help.aliyun.com/document_detail/426036.html).
       *
       * @param request ListRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const Models::ListRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions that are supported by App Streaming.
       *
       * @description >  All supported regions instead of available regions are returned by this operation. For more information, see [Supported regions](https://help.aliyun.com/document_detail/426036.html).
       *
       * @param request ListRegionsRequest
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions(const Models::ListRegionsRequest &request);

      /**
       * @summary Queries the tags added to one or more cloud resources.
       *
       * @param request ListTagCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagCloudResourcesResponse
       */
      Models::ListTagCloudResourcesResponse listTagCloudResourcesWithOptions(const Models::ListTagCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags added to one or more cloud resources.
       *
       * @param request ListTagCloudResourcesRequest
       * @return ListTagCloudResourcesResponse
       */
      Models::ListTagCloudResourcesResponse listTagCloudResources(const Models::ListTagCloudResourcesRequest &request);

      /**
       * @summary Queries the configurations of the administrator account, such as whether the resource expiration reminder feature is enabled.
       *
       * @param request ListTenantConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTenantConfigResponse
       */
      Models::ListTenantConfigResponse listTenantConfigWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of the administrator account, such as whether the resource expiration reminder feature is enabled.
       *
       * @return ListTenantConfigResponse
       */
      Models::ListTenantConfigResponse listTenantConfig();

      /**
       * @summary 查询研发主机列表
       *
       * @param request ListWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWuyingServerResponse
       */
      Models::ListWuyingServerResponse listWuyingServerWithOptions(const Models::ListWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询研发主机列表
       *
       * @param request ListWuyingServerRequest
       * @return ListWuyingServerResponse
       */
      Models::ListWuyingServerResponse listWuyingServer(const Models::ListWuyingServerRequest &request);

      /**
       * @summary Closes all sessions in a pay-as-you-go delivery group for which a scheduled scaling policy is used.
       *
       * @description >  This operation can be called only if you use a pay-as-you-go delivery group for which a scheduled scaling policy is used and if you call the operation at a time other than the scheduled time.
       *
       * @param request LogOffAllSessionsInAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LogOffAllSessionsInAppInstanceGroupResponse
       */
      Models::LogOffAllSessionsInAppInstanceGroupResponse logOffAllSessionsInAppInstanceGroupWithOptions(const Models::LogOffAllSessionsInAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Closes all sessions in a pay-as-you-go delivery group for which a scheduled scaling policy is used.
       *
       * @description >  This operation can be called only if you use a pay-as-you-go delivery group for which a scheduled scaling policy is used and if you call the operation at a time other than the scheduled time.
       *
       * @param request LogOffAllSessionsInAppInstanceGroupRequest
       * @return LogOffAllSessionsInAppInstanceGroupResponse
       */
      Models::LogOffAllSessionsInAppInstanceGroupResponse logOffAllSessionsInAppInstanceGroup(const Models::LogOffAllSessionsInAppInstanceGroupRequest &request);

      /**
       * @summary Modifies the general policies of a delivery group, including the number of concurrent sessions and the retention period of disconnected sessions.
       *
       * @param tmpReq ModifyAppInstanceGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppInstanceGroupAttributeResponse
       */
      Models::ModifyAppInstanceGroupAttributeResponse modifyAppInstanceGroupAttributeWithOptions(const Models::ModifyAppInstanceGroupAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the general policies of a delivery group, including the number of concurrent sessions and the retention period of disconnected sessions.
       *
       * @param request ModifyAppInstanceGroupAttributeRequest
       * @return ModifyAppInstanceGroupAttributeResponse
       */
      Models::ModifyAppInstanceGroupAttributeResponse modifyAppInstanceGroupAttribute(const Models::ModifyAppInstanceGroupAttributeRequest &request);

      /**
       * @summary 修改策略信息
       *
       * @param tmpReq ModifyAppPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppPolicyResponse
       */
      Models::ModifyAppPolicyResponse modifyAppPolicyWithOptions(const Models::ModifyAppPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改策略信息
       *
       * @param request ModifyAppPolicyRequest
       * @return ModifyAppPolicyResponse
       */
      Models::ModifyAppPolicyResponse modifyAppPolicy(const Models::ModifyAppPolicyRequest &request);

      /**
       * @summary Changes the number of nodes in a subscription delivery group.
       *
       * @param tmpReq ModifyNodePoolAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNodePoolAmountResponse
       */
      Models::ModifyNodePoolAmountResponse modifyNodePoolAmountWithOptions(const Models::ModifyNodePoolAmountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the number of nodes in a subscription delivery group.
       *
       * @param request ModifyNodePoolAmountRequest
       * @return ModifyNodePoolAmountResponse
       */
      Models::ModifyNodePoolAmountResponse modifyNodePoolAmount(const Models::ModifyNodePoolAmountRequest &request);

      /**
       * @param tmpReq ModifyNodePoolAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNodePoolAttributeResponse
       */
      Models::ModifyNodePoolAttributeResponse modifyNodePoolAttributeWithOptions(const Models::ModifyNodePoolAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyNodePoolAttributeRequest
       * @return ModifyNodePoolAttributeResponse
       */
      Models::ModifyNodePoolAttributeResponse modifyNodePoolAttribute(const Models::ModifyNodePoolAttributeRequest &request);

      /**
       * @summary Modifies the configurations of the administrator account, such as whether to enable the resource expiration reminder feature.
       *
       * @param request ModifyTenantConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTenantConfigResponse
       */
      Models::ModifyTenantConfigResponse modifyTenantConfigWithOptions(const Models::ModifyTenantConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of the administrator account, such as whether to enable the resource expiration reminder feature.
       *
       * @param request ModifyTenantConfigRequest
       * @return ModifyTenantConfigResponse
       */
      Models::ModifyTenantConfigResponse modifyTenantConfig(const Models::ModifyTenantConfigRequest &request);

      /**
       * @summary 修改研发主机属性
       *
       * @param request ModifyWuyingServerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWuyingServerAttributeResponse
       */
      Models::ModifyWuyingServerAttributeResponse modifyWuyingServerAttributeWithOptions(const Models::ModifyWuyingServerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改研发主机属性
       *
       * @param request ModifyWuyingServerAttributeRequest
       * @return ModifyWuyingServerAttributeResponse
       */
      Models::ModifyWuyingServerAttributeResponse modifyWuyingServerAttribute(const Models::ModifyWuyingServerAttributeRequest &request);

      /**
       * @summary Queries the assigned users that are added to a delivery group by page.
       *
       * @param request PageListAppInstanceGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PageListAppInstanceGroupUserResponse
       */
      Models::PageListAppInstanceGroupUserResponse pageListAppInstanceGroupUserWithOptions(const Models::PageListAppInstanceGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the assigned users that are added to a delivery group by page.
       *
       * @param request PageListAppInstanceGroupUserRequest
       * @return PageListAppInstanceGroupUserResponse
       */
      Models::PageListAppInstanceGroupUserResponse pageListAppInstanceGroupUser(const Models::PageListAppInstanceGroupUserRequest &request);

      /**
       * @summary Renews a delivery group.
       *
       * @description Before you call this operation, make sure that you fully understand the [billing methods and prices](https://help.aliyun.com/document_detail/426039.html) of App Streaming.
       *
       * @param tmpReq RenewAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewAppInstanceGroupResponse
       */
      Models::RenewAppInstanceGroupResponse renewAppInstanceGroupWithOptions(const Models::RenewAppInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a delivery group.
       *
       * @description Before you call this operation, make sure that you fully understand the [billing methods and prices](https://help.aliyun.com/document_detail/426039.html) of App Streaming.
       *
       * @param request RenewAppInstanceGroupRequest
       * @return RenewAppInstanceGroupResponse
       */
      Models::RenewAppInstanceGroupResponse renewAppInstanceGroup(const Models::RenewAppInstanceGroupRequest &request);

      /**
       * @summary 续费研发主机
       *
       * @param request RenewWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewWuyingServerResponse
       */
      Models::RenewWuyingServerResponse renewWuyingServerWithOptions(const Models::RenewWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 续费研发主机
       *
       * @param request RenewWuyingServerRequest
       * @return RenewWuyingServerResponse
       */
      Models::RenewWuyingServerResponse renewWuyingServer(const Models::RenewWuyingServerRequest &request);

      /**
       * @summary 重启研发主机
       *
       * @param request RestartWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartWuyingServerResponse
       */
      Models::RestartWuyingServerResponse restartWuyingServerWithOptions(const Models::RestartWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重启研发主机
       *
       * @param request RestartWuyingServerRequest
       * @return RestartWuyingServerResponse
       */
      Models::RestartWuyingServerResponse restartWuyingServer(const Models::RestartWuyingServerRequest &request);

      /**
       * @summary 启动研发主机
       *
       * @param request StartWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartWuyingServerResponse
       */
      Models::StartWuyingServerResponse startWuyingServerWithOptions(const Models::StartWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动研发主机
       *
       * @param request StartWuyingServerRequest
       * @return StartWuyingServerResponse
       */
      Models::StartWuyingServerResponse startWuyingServer(const Models::StartWuyingServerRequest &request);

      /**
       * @summary 停止研发主机
       *
       * @param request StopWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopWuyingServerResponse
       */
      Models::StopWuyingServerResponse stopWuyingServerWithOptions(const Models::StopWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止研发主机
       *
       * @param request StopWuyingServerRequest
       * @return StopWuyingServerResponse
       */
      Models::StopWuyingServerResponse stopWuyingServer(const Models::StopWuyingServerRequest &request);

      /**
       * @summary 为云资源创建并绑定标签
       *
       * @param request TagCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagCloudResourcesResponse
       */
      Models::TagCloudResourcesResponse tagCloudResourcesWithOptions(const Models::TagCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为云资源创建并绑定标签
       *
       * @param request TagCloudResourcesRequest
       * @return TagCloudResourcesResponse
       */
      Models::TagCloudResourcesResponse tagCloudResources(const Models::TagCloudResourcesRequest &request);

      /**
       * @summary Unbinds a user and a session.
       *
       * @param request UnbindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindResponse
       */
      Models::UnbindResponse unbindWithOptions(const Models::UnbindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a user and a session.
       *
       * @param request UnbindRequest
       * @return UnbindResponse
       */
      Models::UnbindResponse unbind(const Models::UnbindRequest &request);

      /**
       * @summary Removes tags from cloud resources.
       *
       * @param request UntagCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagCloudResourcesResponse
       */
      Models::UntagCloudResourcesResponse untagCloudResourcesWithOptions(const Models::UntagCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from cloud resources.
       *
       * @param request UntagCloudResourcesRequest
       * @return UntagCloudResourcesResponse
       */
      Models::UntagCloudResourcesResponse untagCloudResources(const Models::UntagCloudResourcesRequest &request);

      /**
       * @summary Updates the image of a delivery group.
       *
       * @description **
       * **Warning** After the image is updated, the end user session accessing the cloud application will be disconnected. Exercise caution to avoid end user data loss.
       * >  After the image of the delivery group is updated, the change takes effect on the terminal in approximately 2 minutes.
       *
       * @param request UpdateAppInstanceGroupImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppInstanceGroupImageResponse
       */
      Models::UpdateAppInstanceGroupImageResponse updateAppInstanceGroupImageWithOptions(const Models::UpdateAppInstanceGroupImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the image of a delivery group.
       *
       * @description **
       * **Warning** After the image is updated, the end user session accessing the cloud application will be disconnected. Exercise caution to avoid end user data loss.
       * >  After the image of the delivery group is updated, the change takes effect on the terminal in approximately 2 minutes.
       *
       * @param request UpdateAppInstanceGroupImageRequest
       * @return UpdateAppInstanceGroupImageResponse
       */
      Models::UpdateAppInstanceGroupImageResponse updateAppInstanceGroupImage(const Models::UpdateAppInstanceGroupImageRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
