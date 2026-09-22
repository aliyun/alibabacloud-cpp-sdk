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
       * @summary Sets the execution time for an OTA upgrade.
       *
       * @param request ApproveOtaTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApproveOtaTaskResponse
       */
      Models::ApproveOtaTaskResponse approveOtaTaskWithOptions(const Models::ApproveOtaTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the execution time for an OTA upgrade.
       *
       * @param request ApproveOtaTaskRequest
       * @return ApproveOtaTaskResponse
       */
      Models::ApproveOtaTaskResponse approveOtaTask(const Models::ApproveOtaTaskRequest &request);

      /**
       * @summary Assigns secondary private IP addresses to a development host.
       *
       * @param request AssignWuyingServerPrivateAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignWuyingServerPrivateAddressesResponse
       */
      Models::AssignWuyingServerPrivateAddressesResponse assignWuyingServerPrivateAddressesWithOptions(const Models::AssignWuyingServerPrivateAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns secondary private IP addresses to a development host.
       *
       * @param request AssignWuyingServerPrivateAddressesRequest
       * @return AssignWuyingServerPrivateAddressesResponse
       */
      Models::AssignWuyingServerPrivateAddressesResponse assignWuyingServerPrivateAddresses(const Models::AssignWuyingServerPrivateAddressesRequest &request);

      /**
       * @summary Adds or removes assigned users for a delivery group. Only users added as assigned users can access cloud applications.
       *
       * @description > After you change assigned users, the selected users receive notification emails. Changes typically take about 2 minutes to take effect on the client.
       *
       * @param tmpReq AuthorizeInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeInstanceGroupResponse
       */
      Models::AuthorizeInstanceGroupResponse authorizeInstanceGroupWithOptions(const Models::AuthorizeInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or removes assigned users for a delivery group. Only users added as assigned users can access cloud applications.
       *
       * @description > After you change assigned users, the selected users receive notification emails. Changes typically take about 2 minutes to take effect on the client.
       *
       * @param request AuthorizeInstanceGroupRequest
       * @return AuthorizeInstanceGroupResponse
       */
      Models::AuthorizeInstanceGroupResponse authorizeInstanceGroup(const Models::AuthorizeInstanceGroupRequest &request);

      /**
       * @summary Adds or removes authorized users for a specified application deployed in a delivery group. Only authorized users can access the application.
       *
       * @description ## Operation description
       * This operation manages user authorization for a delivery group at the application level. The authorization result applies only to the application specified by AppId and does not affect the authorization of other applications in the delivery group. To authorize users for an entire delivery group, call the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation.
       * ## Before you begin
       * - The delivery group is created, and **the application specified by AppId is deployed in the image used by the delivery group**. Otherwise, the error code `InvalidAppId.NotFound` is returned.
       * - The delivery group **has not been added to a delivery group set that is in effect**. A delivery group that has been added to a set cannot be authorized individually. You must authorize it through the set. Otherwise, the error code `InvalidAppInstanceGroup.AuthorizeBlockedBySet` is returned.
       * - If the workspace to which the delivery group belongs is an Active Directory (AD) workspace, **you must specify UserMeta**, with `UserMeta.Type` set to `ad` and `UserMeta.AdDomain` matching the AD domain bound to the workspace.
       * - If the delivery group has been authorized through user groups and mixed authorization of users and user groups is not supported, you cannot authorize by user. Otherwise, the error code `AuthAppInstanceGroup.MixNotSupported` is returned.
       * ## Parameter description
       * - **At least one of AuthorizeUserIds and UnAuthorizeUserIds must be specified.** You can also specify both. If both are empty, this invocation does not change any authorization.
       * - When adding authorizations, the sum of the currently authorized users for the application and the users to be added cannot exceed the authorized user quota for the application. If the quota is exceeded, the error code `ExceedAppAuthUserQuota` is returned. Removing authorizations is not subject to quota limits.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](https://help.aliyun.com/document_detail/428506.html) or [GetAppInstanceGroup](https://help.aliyun.com/document_detail/600836.html) operation to obtain the delivery group ID (AppInstanceGroupId) and the application IDs of deployed applications in the delivery group (AppId in the Apps list).
       * 2. Call the [DescribeUsers](https://help.aliyun.com/document_detail/436936.html) operation to obtain the usernames of the users to be authorized or unauthorized.
       * 3. Call this operation to complete the authorization change.
       * > After the authorization is changed, the selected users receive a notification email. It typically takes about 2 minutes for the change to take effect on the client.
       *
       * @param tmpReq AuthorizeUsersForAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeUsersForAppResponse
       */
      Models::AuthorizeUsersForAppResponse authorizeUsersForAppWithOptions(const Models::AuthorizeUsersForAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or removes authorized users for a specified application deployed in a delivery group. Only authorized users can access the application.
       *
       * @description ## Operation description
       * This operation manages user authorization for a delivery group at the application level. The authorization result applies only to the application specified by AppId and does not affect the authorization of other applications in the delivery group. To authorize users for an entire delivery group, call the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation.
       * ## Before you begin
       * - The delivery group is created, and **the application specified by AppId is deployed in the image used by the delivery group**. Otherwise, the error code `InvalidAppId.NotFound` is returned.
       * - The delivery group **has not been added to a delivery group set that is in effect**. A delivery group that has been added to a set cannot be authorized individually. You must authorize it through the set. Otherwise, the error code `InvalidAppInstanceGroup.AuthorizeBlockedBySet` is returned.
       * - If the workspace to which the delivery group belongs is an Active Directory (AD) workspace, **you must specify UserMeta**, with `UserMeta.Type` set to `ad` and `UserMeta.AdDomain` matching the AD domain bound to the workspace.
       * - If the delivery group has been authorized through user groups and mixed authorization of users and user groups is not supported, you cannot authorize by user. Otherwise, the error code `AuthAppInstanceGroup.MixNotSupported` is returned.
       * ## Parameter description
       * - **At least one of AuthorizeUserIds and UnAuthorizeUserIds must be specified.** You can also specify both. If both are empty, this invocation does not change any authorization.
       * - When adding authorizations, the sum of the currently authorized users for the application and the users to be added cannot exceed the authorized user quota for the application. If the quota is exceeded, the error code `ExceedAppAuthUserQuota` is returned. Removing authorizations is not subject to quota limits.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](https://help.aliyun.com/document_detail/428506.html) or [GetAppInstanceGroup](https://help.aliyun.com/document_detail/600836.html) operation to obtain the delivery group ID (AppInstanceGroupId) and the application IDs of deployed applications in the delivery group (AppId in the Apps list).
       * 2. Call the [DescribeUsers](https://help.aliyun.com/document_detail/436936.html) operation to obtain the usernames of the users to be authorized or unauthorized.
       * 3. Call this operation to complete the authorization change.
       * > After the authorization is changed, the selected users receive a notification email. It typically takes about 2 minutes for the change to take effect on the client.
       *
       * @param request AuthorizeUsersForAppRequest
       * @return AuthorizeUsersForAppResponse
       */
      Models::AuthorizeUsersForAppResponse authorizeUsersForApp(const Models::AuthorizeUsersForAppRequest &request);

      /**
       * @summary Creates LLM templates in batches.
       *
       * @description You can batch create model templates under a model provider template in the Wuying Agent Management Center. Multiple models can be added at a time, and one of them can be specified as the default model. Existing models are automatically skipped and not created again.
       * Before using this operation, make sure you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request BatchCreateLlmTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateLlmTemplatesResponse
       */
      Models::BatchCreateLlmTemplatesResponse batchCreateLlmTemplatesWithOptions(const Models::BatchCreateLlmTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates LLM templates in batches.
       *
       * @description You can batch create model templates under a model provider template in the Wuying Agent Management Center. Multiple models can be added at a time, and one of them can be specified as the default model. Existing models are automatically skipped and not created again.
       * Before using this operation, make sure you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request BatchCreateLlmTemplatesRequest
       * @return BatchCreateLlmTemplatesResponse
       */
      Models::BatchCreateLlmTemplatesResponse batchCreateLlmTemplates(const Models::BatchCreateLlmTemplatesRequest &request);

      /**
       * @summary Configures the model group for a resource group.
       *
       * @description You can assign a model group to the resources that belong to agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. The model group serves as the inference engine for agents within the resource group to execute tasks.
       * When an agent runtime has its own model group configured and the resource group it belongs to also has a model group configured, the model group bound to the resource group takes effect. The resource group setting has a higher priority than the agent runtime setting.
       * Make sure that you are familiar with the operations and usage of the WUYING Agent Management Center before calling this operation.
       *
       * @param request ConfigResourceGroupModelTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigResourceGroupModelTemplateResponse
       */
      Models::ConfigResourceGroupModelTemplateResponse configResourceGroupModelTemplateWithOptions(const Models::ConfigResourceGroupModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the model group for a resource group.
       *
       * @description You can assign a model group to the resources that belong to agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. The model group serves as the inference engine for agents within the resource group to execute tasks.
       * When an agent runtime has its own model group configured and the resource group it belongs to also has a model group configured, the model group bound to the resource group takes effect. The resource group setting has a higher priority than the agent runtime setting.
       * Make sure that you are familiar with the operations and usage of the WUYING Agent Management Center before calling this operation.
       *
       * @param request ConfigResourceGroupModelTemplateRequest
       * @return ConfigResourceGroupModelTemplateResponse
       */
      Models::ConfigResourceGroupModelTemplateResponse configResourceGroupModelTemplate(const Models::ConfigResourceGroupModelTemplateRequest &request);

      /**
       * @summary Configures a third-party channel for Agent runtime.
       *
       * @description You can configure third-party channels for Agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. These channels serve as extended Agent communication methods beyond the AgentIM channel.
       * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request ConfigRuntimeChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigRuntimeChannelResponse
       */
      Models::ConfigRuntimeChannelResponse configRuntimeChannelWithOptions(const Models::ConfigRuntimeChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a third-party channel for Agent runtime.
       *
       * @description You can configure third-party channels for Agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. These channels serve as extended Agent communication methods beyond the AgentIM channel.
       * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request ConfigRuntimeChannelRequest
       * @return ConfigRuntimeChannelResponse
       */
      Models::ConfigRuntimeChannelResponse configRuntimeChannel(const Models::ConfigRuntimeChannelRequest &request);

      /**
       * @summary Configures model groups for Agent runtime resources.
       *
       * @description You can authorize model groups for Agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. The model groups serve as inference engines for Agent task execution.
       * Make sure that you are familiar with the operations and usage of the Wuying Agent Management Center before calling this operation.
       *
       * @param request ConfigRuntimeModelTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigRuntimeModelTemplateResponse
       */
      Models::ConfigRuntimeModelTemplateResponse configRuntimeModelTemplateWithOptions(const Models::ConfigRuntimeModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures model groups for Agent runtime resources.
       *
       * @description You can authorize model groups for Agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. The model groups serve as inference engines for Agent task execution.
       * Make sure that you are familiar with the operations and usage of the Wuying Agent Management Center before calling this operation.
       *
       * @param request ConfigRuntimeModelTemplateRequest
       * @return ConfigRuntimeModelTemplateResponse
       */
      Models::ConfigRuntimeModelTemplateResponse configRuntimeModelTemplate(const Models::ConfigRuntimeModelTemplateRequest &request);

      /**
       * @summary Creates a delivery group.
       *
       * @description Before you call this operation, make sure that you fully understand the [billing and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING CloudApp.
       * A delivery group is a logical grouping for delivering cloud applications to end users. It includes the underlying cloud application resources, images that contain cloud applications, resource management policies, and user allocation settings. For details, see [Publish a delivery group](https://help.aliyun.com/document_detail/426046.html).
       *
       * @param tmpReq CreateAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppInstanceGroupResponse
       */
      Models::CreateAppInstanceGroupResponse createAppInstanceGroupWithOptions(const Models::CreateAppInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a delivery group.
       *
       * @description Before you call this operation, make sure that you fully understand the [billing and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING CloudApp.
       * A delivery group is a logical grouping for delivering cloud applications to end users. It includes the underlying cloud application resources, images that contain cloud applications, resource management policies, and user allocation settings. For details, see [Publish a delivery group](https://help.aliyun.com/document_detail/426046.html).
       *
       * @param request CreateAppInstanceGroupRequest
       * @return CreateAppInstanceGroupResponse
       */
      Models::CreateAppInstanceGroupResponse createAppInstanceGroup(const Models::CreateAppInstanceGroupRequest &request);

      /**
       * @summary Creates a cloud browser group that is billed by monthly active users (MAU).
       *
       * @description ## Before you begin
       * - Prepare an available office network, image, and instance type in the target business region. Make sure that the account has the required browser configurations and resource quotas.
       * - Specify `CloudBrowserName` and `BizRegionId`. Set `OsType` to `Windows`.
       * - Authorized users must be created in advance and must match the account type. Authorized user groups must belong to the current account and match the account type of the office network.
       * - **`Users` and `UserGroupIds` cannot both be non-empty.**
       * ## MAU billing parameters
       * - Set `ChargeType` to `PostPaid`.
       * - **Set `SubPayType` to `mau` explicitly. Omitting this field does not enable MAU billing.**
       * - Set `ChargeResourceMode` to `AppInstance`.
       * - Do not specify `Period`, `PeriodUnit`, `AppPackageType`, `AutoPay`, `AutoRenew`, or `NodePool`.
       * ## Post-call processing
       * **A successful response does not indicate that the browser resources are ready.** After creation, query the browser group status and confirm that the group is connectable before use.
       * This operation creates a new cloud browser group. You do not need to create a delivery group in advance.
       * ## Example description
       * The example values of fields are provided to demonstrate how to specify the fields. Replace resource identifiers with actual values under your account. Capacity examples do not represent default values or upper limits.
       * An example value of `-` indicates that the field does not need to be specified. Omit the corresponding parameter when you call the operation. Do not pass the character `-`.
       *
       * @param tmpReq CreateBrowserInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBrowserInstanceGroupResponse
       */
      Models::CreateBrowserInstanceGroupResponse createBrowserInstanceGroupWithOptions(const Models::CreateBrowserInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cloud browser group that is billed by monthly active users (MAU).
       *
       * @description ## Before you begin
       * - Prepare an available office network, image, and instance type in the target business region. Make sure that the account has the required browser configurations and resource quotas.
       * - Specify `CloudBrowserName` and `BizRegionId`. Set `OsType` to `Windows`.
       * - Authorized users must be created in advance and must match the account type. Authorized user groups must belong to the current account and match the account type of the office network.
       * - **`Users` and `UserGroupIds` cannot both be non-empty.**
       * ## MAU billing parameters
       * - Set `ChargeType` to `PostPaid`.
       * - **Set `SubPayType` to `mau` explicitly. Omitting this field does not enable MAU billing.**
       * - Set `ChargeResourceMode` to `AppInstance`.
       * - Do not specify `Period`, `PeriodUnit`, `AppPackageType`, `AutoPay`, `AutoRenew`, or `NodePool`.
       * ## Post-call processing
       * **A successful response does not indicate that the browser resources are ready.** After creation, query the browser group status and confirm that the group is connectable before use.
       * This operation creates a new cloud browser group. You do not need to create a delivery group in advance.
       * ## Example description
       * The example values of fields are provided to demonstrate how to specify the fields. Replace resource identifiers with actual values under your account. Capacity examples do not represent default values or upper limits.
       * An example value of `-` indicates that the field does not need to be specified. Omit the corresponding parameter when you call the operation. Do not pass the character `-`.
       *
       * @param request CreateBrowserInstanceGroupRequest
       * @return CreateBrowserInstanceGroupResponse
       */
      Models::CreateBrowserInstanceGroupResponse createBrowserInstanceGroup(const Models::CreateBrowserInstanceGroupRequest &request);

      /**
       * @summary Creates a custom image from a deployed WUYING instance. You can use the custom image to quickly create more WUYING instances with the same configurations, without having to repeatedly configure the instance environment each time.
       *
       * @param request CreateImageByInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageByInstanceResponse
       */
      Models::CreateImageByInstanceResponse createImageByInstanceWithOptions(const Models::CreateImageByInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom image from a deployed WUYING instance. You can use the custom image to quickly create more WUYING instances with the same configurations, without having to repeatedly configure the instance environment each time.
       *
       * @param request CreateImageByInstanceRequest
       * @return CreateImageByInstanceResponse
       */
      Models::CreateImageByInstanceResponse createImageByInstance(const Models::CreateImageByInstanceRequest &request);

      /**
       * @summary Creates a new image from a debug delivery group.
       *
       * @param request CreateImageFromAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageFromAppInstanceGroupResponse
       */
      Models::CreateImageFromAppInstanceGroupResponse createImageFromAppInstanceGroupWithOptions(const Models::CreateImageFromAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new image from a debug delivery group.
       *
       * @param request CreateImageFromAppInstanceGroupRequest
       * @return CreateImageFromAppInstanceGroupResponse
       */
      Models::CreateImageFromAppInstanceGroupResponse createImageFromAppInstanceGroup(const Models::CreateImageFromAppInstanceGroupRequest &request);

      /**
       * @summary Creates a model provider template for model creation.
       *
       * @description You can create a model provider template under Model Templates in the WUYING Agent Management Center. This template is used to configure connection information and keys for model services (such as Alibaba Cloud Bailian, Token Plan, and Moonshot) that an Agent can invoke. After model creation, the model provider template is automatically associated with the specified model template.
       * Make sure that you are familiar with the operations and usage of the WUYING Agent Management Center before you invoke this operation.
       *
       * @param request CreateModelProviderTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelProviderTemplateResponse
       */
      Models::CreateModelProviderTemplateResponse createModelProviderTemplateWithOptions(const Models::CreateModelProviderTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model provider template for model creation.
       *
       * @description You can create a model provider template under Model Templates in the WUYING Agent Management Center. This template is used to configure connection information and keys for model services (such as Alibaba Cloud Bailian, Token Plan, and Moonshot) that an Agent can invoke. After model creation, the model provider template is automatically associated with the specified model template.
       * Make sure that you are familiar with the operations and usage of the WUYING Agent Management Center before you invoke this operation.
       *
       * @param request CreateModelProviderTemplateRequest
       * @return CreateModelProviderTemplateResponse
       */
      Models::CreateModelProviderTemplateResponse createModelProviderTemplate(const Models::CreateModelProviderTemplateRequest &request);

      /**
       * @summary Creates a model template.
       *
       * @description You can create a model group in the Wuying Agent Management Center to manage the model providers and model scope that an Agent can invoke. After model creation, you can attach the model group to a cloud computer as the inference engine configuration for Agent task execution.
       * Make sure that you are familiar with the operations and usage of the Wuying Agent Management Center before invoking this operation.
       *
       * @param request CreateModelTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelTemplateResponse
       */
      Models::CreateModelTemplateResponse createModelTemplateWithOptions(const Models::CreateModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model template.
       *
       * @description You can create a model group in the Wuying Agent Management Center to manage the model providers and model scope that an Agent can invoke. After model creation, you can attach the model group to a cloud computer as the inference engine configuration for Agent task execution.
       * Make sure that you are familiar with the operations and usage of the Wuying Agent Management Center before invoking this operation.
       *
       * @param request CreateModelTemplateRequest
       * @return CreateModelTemplateResponse
       */
      Models::CreateModelTemplateResponse createModelTemplate(const Models::CreateModelTemplateRequest &request);

      /**
       * @summary Creates one or more workstations.
       *
       * @description 1. A project corresponds to the resource configuration module in the CloudFlow console.
       * 2. When the ContentId input parameter has multiple versions, this API <notice>uses the default version</notice> and bindss it at the same time.
       * 3. This operation succeeds only when the default version of the Content is in an available state.
       *
       * @param request CreateWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWuyingServerResponse
       */
      Models::CreateWuyingServerResponse createWuyingServerWithOptions(const Models::CreateWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates one or more workstations.
       *
       * @description 1. A project corresponds to the resource configuration module in the CloudFlow console.
       * 2. When the ContentId input parameter has multiple versions, this API <notice>uses the default version</notice> and bindss it at the same time.
       * 3. This operation succeeds only when the default version of the Content is in an available state.
       *
       * @param request CreateWuyingServerRequest
       * @return CreateWuyingServerResponse
       */
      Models::CreateWuyingServerResponse createWuyingServer(const Models::CreateWuyingServerRequest &request);

      /**
       * @summary Deletes a pay-as-you-go delivery group of the resource-based type.
       *
       * @description > This operation does not support deleting delivery groups that use subscription resources.
       *
       * @param request DeleteAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppInstanceGroupResponse
       */
      Models::DeleteAppInstanceGroupResponse deleteAppInstanceGroupWithOptions(const Models::DeleteAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a pay-as-you-go delivery group of the resource-based type.
       *
       * @description > This operation does not support deleting delivery groups that use subscription resources.
       *
       * @param request DeleteAppInstanceGroupRequest
       * @return DeleteAppInstanceGroupResponse
       */
      Models::DeleteAppInstanceGroupResponse deleteAppInstanceGroup(const Models::DeleteAppInstanceGroupRequest &request);

      /**
       * @summary Deletes a specified application instance.
       *
       * @description Only instances in the initializing or idle state can be deleted. This operation is available only to specific customers.
       *
       * @param request DeleteAppInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppInstancesResponse
       */
      Models::DeleteAppInstancesResponse deleteAppInstancesWithOptions(const Models::DeleteAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified application instance.
       *
       * @description Only instances in the initializing or idle state can be deleted. This operation is available only to specific customers.
       *
       * @param request DeleteAppInstancesRequest
       * @return DeleteAppInstancesResponse
       */
      Models::DeleteAppInstancesResponse deleteAppInstances(const Models::DeleteAppInstancesRequest &request);

      /**
       * @summary Deletes a custom WUYING image.
       *
       * @description - You can delete only custom images that belong to your account.
       * - For images associated with WUYING Cloud Computer Pool, WUYING Cloud Application, or WUYING Workspace product lines, ensure that no WUYING instances are using the image before you delete it.
       * - If a WUYING Cloud Desktop template references an image, the template is also deleted when the image is deleted.
       * - For images that span multiple regions, deleting the image removes the image from all regions.
       *
       * @param request DeleteImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImageWithOptions(const Models::DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom WUYING image.
       *
       * @description - You can delete only custom images that belong to your account.
       * - For images associated with WUYING Cloud Computer Pool, WUYING Cloud Application, or WUYING Workspace product lines, ensure that no WUYING instances are using the image before you delete it.
       * - If a WUYING Cloud Desktop template references an image, the template is also deleted when the image is deleted.
       * - For images that span multiple regions, deleting the image removes the image from all regions.
       *
       * @param request DeleteImageRequest
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImage(const Models::DeleteImageRequest &request);

      /**
       * @summary Deletes an LLM template.
       *
       * @description You can delete a model template that has been created under a model service provider template in the WUYING Agent Management Center. Before deletion, ensure that the model is not the default model of an associated model group. Otherwise, the deletion fails. After deletion, the model configurations of associated cloud computers are automatically refreshed.
       * Before using this operation, make sure you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request DeleteLlmTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLlmTemplateResponse
       */
      Models::DeleteLlmTemplateResponse deleteLlmTemplateWithOptions(const Models::DeleteLlmTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an LLM template.
       *
       * @description You can delete a model template that has been created under a model service provider template in the WUYING Agent Management Center. Before deletion, ensure that the model is not the default model of an associated model group. Otherwise, the deletion fails. After deletion, the model configurations of associated cloud computers are automatically refreshed.
       * Before using this operation, make sure you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request DeleteLlmTemplateRequest
       * @return DeleteLlmTemplateResponse
       */
      Models::DeleteLlmTemplateResponse deleteLlmTemplate(const Models::DeleteLlmTemplateRequest &request);

      /**
       * @summary Deletes a model provider template.
       *
       * @description You can delete a model provider template that has been created under model templates in the WUYING Agent Management Center. Before deletion, ensure that the model provider is not the provider of the default model and is not a system preset type provider (such as WUYING credit package). After deletion, the associated models and key configurations are also removed.
       * Before using this operation, make sure you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request DeleteModelProviderTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelProviderTemplateResponse
       */
      Models::DeleteModelProviderTemplateResponse deleteModelProviderTemplateWithOptions(const Models::DeleteModelProviderTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model provider template.
       *
       * @description You can delete a model provider template that has been created under model templates in the WUYING Agent Management Center. Before deletion, ensure that the model provider is not the provider of the default model and is not a system preset type provider (such as WUYING credit package). After deletion, the associated models and key configurations are also removed.
       * Before using this operation, make sure you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request DeleteModelProviderTemplateRequest
       * @return DeleteModelProviderTemplateResponse
       */
      Models::DeleteModelProviderTemplateResponse deleteModelProviderTemplate(const Models::DeleteModelProviderTemplateRequest &request);

      /**
       * @summary Deletes a model template.
       *
       * @description You can delete a model group that has been created in the WUYING Agent Management Center. Before deletion, ensure that the template has not been authorized to any resource. Otherwise, the deletion fails. After deletion, the model providers and models under the model group are also removed.
       * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request DeleteModelTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelTemplateResponse
       */
      Models::DeleteModelTemplateResponse deleteModelTemplateWithOptions(const Models::DeleteModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model template.
       *
       * @description You can delete a model group that has been created in the WUYING Agent Management Center. Before deletion, ensure that the template has not been authorized to any resource. Otherwise, the deletion fails. After deletion, the model providers and models under the model group are also removed.
       * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request DeleteModelTemplateRequest
       * @return DeleteModelTemplateResponse
       */
      Models::DeleteModelTemplateResponse deleteModelTemplate(const Models::DeleteModelTemplateRequest &request);

      /**
       * @summary Deletes a cloud graphics workstation.
       *
       * @description Deletes a cloud graphics workstation.
       *
       * @param request DeleteWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWuyingServerResponse
       */
      Models::DeleteWuyingServerResponse deleteWuyingServerWithOptions(const Models::DeleteWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cloud graphics workstation.
       *
       * @description Deletes a cloud graphics workstation.
       *
       * @param request DeleteWuyingServerRequest
       * @return DeleteWuyingServerResponse
       */
      Models::DeleteWuyingServerResponse deleteWuyingServer(const Models::DeleteWuyingServerRequest &request);

      /**
       * @summary Configures SLS log delivery.
       *
       * @param request DeliverToUserSlsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeliverToUserSlsResponse
       */
      Models::DeliverToUserSlsResponse deliverToUserSlsWithOptions(const Models::DeliverToUserSlsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures SLS log delivery.
       *
       * @param request DeliverToUserSlsRequest
       * @return DeliverToUserSlsResponse
       */
      Models::DeliverToUserSlsResponse deliverToUserSls(const Models::DeliverToUserSlsRequest &request);

      /**
       * @summary Queries the details of a development host.
       *
       * @param request DescribeWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWuyingServerResponse
       */
      Models::DescribeWuyingServerResponse describeWuyingServerWithOptions(const Models::DescribeWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a development host.
       *
       * @param request DescribeWuyingServerRequest
       * @return DescribeWuyingServerResponse
       */
      Models::DescribeWuyingServerResponse describeWuyingServer(const Models::DescribeWuyingServerRequest &request);

      /**
       * @summary Queries the Elastic IP Address (EIP) information of a Wuying workspace.
       *
       * @param request DescribeWuyingServerEipInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWuyingServerEipInfoResponse
       */
      Models::DescribeWuyingServerEipInfoResponse describeWuyingServerEipInfoWithOptions(const Models::DescribeWuyingServerEipInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Elastic IP Address (EIP) information of a Wuying workspace.
       *
       * @param request DescribeWuyingServerEipInfoRequest
       * @return DescribeWuyingServerEipInfoResponse
       */
      Models::DescribeWuyingServerEipInfoResponse describeWuyingServerEipInfo(const Models::DescribeWuyingServerEipInfoRequest &request);

      /**
       * @summary Queries the details of a specified delivery group.
       *
       * @param request GetAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppInstanceGroupResponse
       */
      Models::GetAppInstanceGroupResponse getAppInstanceGroupWithOptions(const Models::GetAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified delivery group.
       *
       * @param request GetAppInstanceGroupRequest
       * @return GetAppInstanceGroupResponse
       */
      Models::GetAppInstanceGroupResponse getAppInstanceGroup(const Models::GetAppInstanceGroupRequest &request);

      /**
       * @summary Queries the configuration, status, and authorization statistics of a specified cloud browser group.
       *
       * @description This topic describes the query usage for the monthly active user (MAU) billing scenario.
       * ## Before you begin
       * Obtain the cloud browser group ID under the current account. Call `ListBrowserInstanceGroup` to retrieve the ID.
       * ## Response
       * The response includes the current configuration, status, and authorization statistics of the browser group. The details return up to 20 bookmarks and 20 website access entries. To retrieve the complete lists, call `ListBrowserBookmarks` and `ListBrowserRestrictedURLs`.
       * ## What to do next
       * This operation only queries configurations and does not modify resources. After you read the returned status, perform the connection or management operation that corresponds to the status.
       * ## Example description
       * The `-` value in the examples indicates that the field is not applicable or not returned in the current scenario. It is not an actual string returned by the operation. Sample resource IDs are masked. Use the actual query results when you call this operation.
       *
       * @param request GetBrowserInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBrowserInstanceGroupResponse
       */
      Models::GetBrowserInstanceGroupResponse getBrowserInstanceGroupWithOptions(const Models::GetBrowserInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration, status, and authorization statistics of a specified cloud browser group.
       *
       * @description This topic describes the query usage for the monthly active user (MAU) billing scenario.
       * ## Before you begin
       * Obtain the cloud browser group ID under the current account. Call `ListBrowserInstanceGroup` to retrieve the ID.
       * ## Response
       * The response includes the current configuration, status, and authorization statistics of the browser group. The details return up to 20 bookmarks and 20 website access entries. To retrieve the complete lists, call `ListBrowserBookmarks` and `ListBrowserRestrictedURLs`.
       * ## What to do next
       * This operation only queries configurations and does not modify resources. After you read the returned status, perform the connection or management operation that corresponds to the status.
       * ## Example description
       * The `-` value in the examples indicates that the field is not applicable or not returned in the current scenario. It is not an actual string returned by the operation. Sample resource IDs are masked. Use the actual query results when you call this operation.
       *
       * @param request GetBrowserInstanceGroupRequest
       * @return GetBrowserInstanceGroupResponse
       */
      Models::GetBrowserInstanceGroupResponse getBrowserInstanceGroup(const Models::GetBrowserInstanceGroupRequest &request);

      /**
       * @summary Retrieves the connection credential for a cloud application.
       *
       * @description Call protocol description: operation_type: polling, required_steps: 1.
       * This operation may require multiple calls (at least one) to obtain the connection credential.
       * On the first call, an application instance is allocated to the specified convenience account and the application is started. If a Ticket is returned, the result is obtained synchronously. If a startup task ID (`TaskId`) is returned, subsequent calls are required.
       * On subsequent calls, include the `TaskId` request parameter to invoke the operation and query whether the node is complete. When the returned node status (`TaskStatus`) is completed (`Finished`), the connection credential (`Ticket`) is also returned.
       * > Prerequisites
       * > - Before calling this operation, make sure that you have created a delivery group and authorized users for the delivery group:
       * > - 1. The API for creating a delivery group is CreateAppInstanceGroup. For more information about the parameters, see the corresponding API documentation.
       * > - 2. You can call the ListAppInstanceGroup operation to query the list of delivery groups. If the corresponding delivery group is not found, verify that the delivery group has been created and that the authentication credentials belong to the correct tenant.
       * > - 3. The API for authorizing users for a delivery group is AuthorizeInstanceGroup. For more information about the parameters, see the corresponding API documentation.
       *
       * @param request GetConnectionTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConnectionTicketResponse
       */
      Models::GetConnectionTicketResponse getConnectionTicketWithOptions(const Models::GetConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the connection credential for a cloud application.
       *
       * @description Call protocol description: operation_type: polling, required_steps: 1.
       * This operation may require multiple calls (at least one) to obtain the connection credential.
       * On the first call, an application instance is allocated to the specified convenience account and the application is started. If a Ticket is returned, the result is obtained synchronously. If a startup task ID (`TaskId`) is returned, subsequent calls are required.
       * On subsequent calls, include the `TaskId` request parameter to invoke the operation and query whether the node is complete. When the returned node status (`TaskStatus`) is completed (`Finished`), the connection credential (`Ticket`) is also returned.
       * > Prerequisites
       * > - Before calling this operation, make sure that you have created a delivery group and authorized users for the delivery group:
       * > - 1. The API for creating a delivery group is CreateAppInstanceGroup. For more information about the parameters, see the corresponding API documentation.
       * > - 2. You can call the ListAppInstanceGroup operation to query the list of delivery groups. If the corresponding delivery group is not found, verify that the delivery group has been created and that the authentication credentials belong to the correct tenant.
       * > - 3. The API for authorizing users for a delivery group is AuthorizeInstanceGroup. For more information about the parameters, see the corresponding API documentation.
       *
       * @param request GetConnectionTicketRequest
       * @return GetConnectionTicketResponse
       */
      Models::GetConnectionTicketResponse getConnectionTicket(const Models::GetConnectionTicketRequest &request);

      /**
       * @summary Retrieves the information about a debug application instance.
       *
       * @param request GetDebugAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDebugAppInstanceResponse
       */
      Models::GetDebugAppInstanceResponse getDebugAppInstanceWithOptions(const Models::GetDebugAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information about a debug application instance.
       *
       * @param request GetDebugAppInstanceRequest
       * @return GetDebugAppInstanceResponse
       */
      Models::GetDebugAppInstanceResponse getDebugAppInstance(const Models::GetDebugAppInstanceRequest &request);

      /**
       * @summary Retrieves file upload information.
       *
       * @description Visitor information is filled in on the lead capture page when visitors execute a cloud flow. Therefore, the usage mode of cloud applications does not generate visitor information.
       *
       * @param request GetFileUploadInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileUploadInfoResponse
       */
      Models::GetFileUploadInfoResponse getFileUploadInfoWithOptions(const Models::GetFileUploadInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves file upload information.
       *
       * @description Visitor information is filled in on the lead capture page when visitors execute a cloud flow. Therefore, the usage mode of cloud applications does not generate visitor information.
       *
       * @param request GetFileUploadInfoRequest
       * @return GetFileUploadInfoResponse
       */
      Models::GetFileUploadInfoResponse getFileUploadInfo(const Models::GetFileUploadInfoRequest &request);

      /**
       * @summary Queries the details of a model provider template.
       *
       * @description You can query the details of a specified model provider template in the WUYING Agent Management Center, including the provider name, description, and connection configuration list.
       * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request GetModelProviderTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelProviderTemplateResponse
       */
      Models::GetModelProviderTemplateResponse getModelProviderTemplateWithOptions(const Models::GetModelProviderTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a model provider template.
       *
       * @description You can query the details of a specified model provider template in the WUYING Agent Management Center, including the provider name, description, and connection configuration list.
       * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request GetModelProviderTemplateRequest
       * @return GetModelProviderTemplateResponse
       */
      Models::GetModelProviderTemplateResponse getModelProviderTemplate(const Models::GetModelProviderTemplateRequest &request);

      /**
       * @summary Queries the details of an over-the-air update task, including the available version and release notes.
       *
       * @param request GetOtaTaskByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOtaTaskByTaskIdResponse
       */
      Models::GetOtaTaskByTaskIdResponse getOtaTaskByTaskIdWithOptions(const Models::GetOtaTaskByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an over-the-air update task, including the available version and release notes.
       *
       * @param request GetOtaTaskByTaskIdRequest
       * @return GetOtaTaskByTaskIdResponse
       */
      Models::GetOtaTaskByTaskIdResponse getOtaTaskByTaskId(const Models::GetOtaTaskByTaskIdRequest &request);

      /**
       * @summary Queries the price information of a resource.
       *
       * @param request GetResourcePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourcePriceResponse
       */
      Models::GetResourcePriceResponse getResourcePriceWithOptions(const Models::GetResourcePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price information of a resource.
       *
       * @param request GetResourcePriceRequest
       * @return GetResourcePriceResponse
       */
      Models::GetResourcePriceResponse getResourcePrice(const Models::GetResourcePriceRequest &request);

      /**
       * @summary Queries the renewal price of WUYING Cloud Application resources.
       *
       * @param request GetResourceRenewPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceRenewPriceResponse
       */
      Models::GetResourceRenewPriceResponse getResourceRenewPriceWithOptions(const Models::GetResourceRenewPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the renewal price of WUYING Cloud Application resources.
       *
       * @param request GetResourceRenewPriceRequest
       * @return GetResourceRenewPriceResponse
       */
      Models::GetResourceRenewPriceResponse getResourceRenewPrice(const Models::GetResourceRenewPriceRequest &request);

      /**
       * @summary Queries the third-party channel configurations of an Agent runtime.
       *
       * @description You can query the third-party channel configuration status of Agents such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center.
       * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request GetRuntimeChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuntimeChannelResponse
       */
      Models::GetRuntimeChannelResponse getRuntimeChannelWithOptions(const Models::GetRuntimeChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the third-party channel configurations of an Agent runtime.
       *
       * @description You can query the third-party channel configuration status of Agents such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center.
       * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request GetRuntimeChannelRequest
       * @return GetRuntimeChannelResponse
       */
      Models::GetRuntimeChannelResponse getRuntimeChannel(const Models::GetRuntimeChannelRequest &request);

      /**
       * @summary Queries the model configuration details of a cloud computer.
       *
       * @description You can query the model configuration details currently bound to a specified cloud computer in the Wuying Agent Management Center, including model groups, model provider lists, and associated model information. After you enable the risk information mode, you can also identify differences between the end user\\"s actual configuration and the configuration delivered by the administrator.
       *
       * @param request GetRuntimeModelConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuntimeModelConfigResponse
       */
      Models::GetRuntimeModelConfigResponse getRuntimeModelConfigWithOptions(const Models::GetRuntimeModelConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the model configuration details of a cloud computer.
       *
       * @description You can query the model configuration details currently bound to a specified cloud computer in the Wuying Agent Management Center, including model groups, model provider lists, and associated model information. After you enable the risk information mode, you can also identify differences between the end user\\"s actual configuration and the configuration delivered by the administrator.
       *
       * @param request GetRuntimeModelConfigRequest
       * @return GetRuntimeModelConfigResponse
       */
      Models::GetRuntimeModelConfigResponse getRuntimeModelConfig(const Models::GetRuntimeModelConfigRequest &request);

      /**
       * @summary Queries the details of multiple delivery groups. This operation queries all delivery groups that meet the specified conditions instead of a specific delivery group.
       *
       * @param request ListAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppInstanceGroupResponse
       */
      Models::ListAppInstanceGroupResponse listAppInstanceGroupWithOptions(const Models::ListAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of multiple delivery groups. This operation queries all delivery groups that meet the specified conditions instead of a specific delivery group.
       *
       * @param request ListAppInstanceGroupRequest
       * @return ListAppInstanceGroupResponse
       */
      Models::ListAppInstanceGroupResponse listAppInstanceGroup(const Models::ListAppInstanceGroupRequest &request);

      /**
       * @summary Queries the details of session instances in a delivery group, including instance IDs, instance statuses, creation time, update time, session statuses, and public IP addresses of primary network interface controllers (NICs).
       *
       * @param request ListAppInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppInstancesResponse
       */
      Models::ListAppInstancesResponse listAppInstancesWithOptions(const Models::ListAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of session instances in a delivery group, including instance IDs, instance statuses, creation time, update time, session statuses, and public IP addresses of primary network interface controllers (NICs).
       *
       * @param request ListAppInstancesRequest
       * @return ListAppInstancesResponse
       */
      Models::ListAppInstancesResponse listAppInstances(const Models::ListAppInstancesRequest &request);

      /**
       * @summary Queries the deployed applications in the image used by a specified delivery group with paging and returns the number of users with per-application authorization for each application.
       *
       * @description ## Operation description
       * This operation returns the list of deployed applications in the application image used by a specified delivery group, including the application ID, name, version, icon, and the number of users currently **authorized by application** for each application (AuthorizedUserCount).
       * The returned AppId is the input for per-application authorization: when you call the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation to add or remove authorized users for a specified application in a delivery group, pass in the AppId returned by this operation.
       * ## Before you begin
       * - The delivery group is created, and **ProductType matches the product type of the delivery group**. If the delivery group does not exist or the product type does not match, the error code `InvalidAppInstanceGroup.NotFound` is returned.
       * ## Parameter description
       * - **AppInstanceGroupId is required**. This parameter is marked as optional in the parameter table, but the error code `InvalidParameter.AppInstanceGroupId` is returned if it is not specified.
       * - PageNumber starts from 1. Valid values of PageSize: 1 to 100. If the values are invalid, the error codes `InvalidParameter.PageNumber` and `InvalidParameter.PageSize` are returned respectively.
       * - If no applications are deployed in the delivery group image, the operation returns normally: Apps is an empty list and TotalCount is 0.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the delivery group ID (AppInstanceGroupId).
       * 2. Call this operation to obtain the list of deployed applications in the delivery group and the AppId of each application.
       * 3. To authorize by application, call the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation with the returned AppId.
       *
       * @param request ListAppsByAppInstanceGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppsByAppInstanceGroupIdResponse
       */
      Models::ListAppsByAppInstanceGroupIdResponse listAppsByAppInstanceGroupIdWithOptions(const Models::ListAppsByAppInstanceGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deployed applications in the image used by a specified delivery group with paging and returns the number of users with per-application authorization for each application.
       *
       * @description ## Operation description
       * This operation returns the list of deployed applications in the application image used by a specified delivery group, including the application ID, name, version, icon, and the number of users currently **authorized by application** for each application (AuthorizedUserCount).
       * The returned AppId is the input for per-application authorization: when you call the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation to add or remove authorized users for a specified application in a delivery group, pass in the AppId returned by this operation.
       * ## Before you begin
       * - The delivery group is created, and **ProductType matches the product type of the delivery group**. If the delivery group does not exist or the product type does not match, the error code `InvalidAppInstanceGroup.NotFound` is returned.
       * ## Parameter description
       * - **AppInstanceGroupId is required**. This parameter is marked as optional in the parameter table, but the error code `InvalidParameter.AppInstanceGroupId` is returned if it is not specified.
       * - PageNumber starts from 1. Valid values of PageSize: 1 to 100. If the values are invalid, the error codes `InvalidParameter.PageNumber` and `InvalidParameter.PageSize` are returned respectively.
       * - If no applications are deployed in the delivery group image, the operation returns normally: Apps is an empty list and TotalCount is 0.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the delivery group ID (AppInstanceGroupId).
       * 2. Call this operation to obtain the list of deployed applications in the delivery group and the AppId of each application.
       * 3. To authorize by application, call the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation with the returned AppId.
       *
       * @param request ListAppsByAppInstanceGroupIdRequest
       * @return ListAppsByAppInstanceGroupIdResponse
       */
      Models::ListAppsByAppInstanceGroupIdResponse listAppsByAppInstanceGroupId(const Models::ListAppsByAppInstanceGroupIdRequest &request);

      /**
       * @summary Queries the delivery groups for which a specified user has obtained access permissions through delivery group-level authorization by paging, with support for fuzzy filtering by delivery group ID, delivery group name, application ID, or application name.
       *
       * @description ## Operation description
       * This operation queries the list of delivery groups for which a specified user (EndUserId) has been granted **delivery group-level authorization**. The response includes basic information about each delivery group (ID, name, status, region, creation time, expiration time, and more) and the list of applications deployed in the delivery group.
       * Scope of returned results:
       * - Only delivery groups that are authorized to the user as a whole through the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation are returned. Records authorized on a per-application basis through the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation are not included.
       * - Only delivery groups whose product type matches the ProductType parameter and that have not been deleted are returned. A delivery group is not returned if its image contains no deployed applications.
       * - Results are sorted in reverse chronological order by the update time of the authorization record. The most recently authorized or modified delivery groups appear first.
       * ## Before you begin
       * - Call the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation to authorize the delivery group to the user.
       * ## Parameter description
       * - **ProductType and EndUserId are required**. If ProductType is not specified, the error code `InvalidParameter.ProductType` is returned. If EndUserId is not specified, the error code `InvalidParameter.UserId` is returned.
       * - EndUserId performs an **exact match** on the username. AppInstanceGroupId, AppInstanceGroupName, AppId, and AppName all perform **fuzzy matching** (a hit occurs if the value is contained). When multiple filter conditions are specified, all conditions must be met simultaneously.
       * - PageNumber starts from 1. Valid values of PageSize: 1 to 100.
       * - If the user has no authorized delivery groups that match the conditions, the operation returns normally: AppInstanceGroupModels is an empty list and TotalCount is 0.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the delivery group ID, and then call the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation to authorize the delivery group to the user.
       * 2. Call this operation to query the delivery groups authorized to the user and the applications deployed in each delivery group.
       * 3. To obtain an application connection ticket for the user, call the [GetConnectionTicket](~~GetConnectionTicket~~) operation with the AppInstanceGroupId and the AppId from the Apps list in the response.
       *
       * @param request ListAuthorizedAppInstanceGroupByUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedAppInstanceGroupByUserResponse
       */
      Models::ListAuthorizedAppInstanceGroupByUserResponse listAuthorizedAppInstanceGroupByUserWithOptions(const Models::ListAuthorizedAppInstanceGroupByUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the delivery groups for which a specified user has obtained access permissions through delivery group-level authorization by paging, with support for fuzzy filtering by delivery group ID, delivery group name, application ID, or application name.
       *
       * @description ## Operation description
       * This operation queries the list of delivery groups for which a specified user (EndUserId) has been granted **delivery group-level authorization**. The response includes basic information about each delivery group (ID, name, status, region, creation time, expiration time, and more) and the list of applications deployed in the delivery group.
       * Scope of returned results:
       * - Only delivery groups that are authorized to the user as a whole through the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation are returned. Records authorized on a per-application basis through the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation are not included.
       * - Only delivery groups whose product type matches the ProductType parameter and that have not been deleted are returned. A delivery group is not returned if its image contains no deployed applications.
       * - Results are sorted in reverse chronological order by the update time of the authorization record. The most recently authorized or modified delivery groups appear first.
       * ## Before you begin
       * - Call the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation to authorize the delivery group to the user.
       * ## Parameter description
       * - **ProductType and EndUserId are required**. If ProductType is not specified, the error code `InvalidParameter.ProductType` is returned. If EndUserId is not specified, the error code `InvalidParameter.UserId` is returned.
       * - EndUserId performs an **exact match** on the username. AppInstanceGroupId, AppInstanceGroupName, AppId, and AppName all perform **fuzzy matching** (a hit occurs if the value is contained). When multiple filter conditions are specified, all conditions must be met simultaneously.
       * - PageNumber starts from 1. Valid values of PageSize: 1 to 100.
       * - If the user has no authorized delivery groups that match the conditions, the operation returns normally: AppInstanceGroupModels is an empty list and TotalCount is 0.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the delivery group ID, and then call the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation to authorize the delivery group to the user.
       * 2. Call this operation to query the delivery groups authorized to the user and the applications deployed in each delivery group.
       * 3. To obtain an application connection ticket for the user, call the [GetConnectionTicket](~~GetConnectionTicket~~) operation with the AppInstanceGroupId and the AppId from the Apps list in the response.
       *
       * @param request ListAuthorizedAppInstanceGroupByUserRequest
       * @return ListAuthorizedAppInstanceGroupByUserResponse
       */
      Models::ListAuthorizedAppInstanceGroupByUserResponse listAuthorizedAppInstanceGroupByUser(const Models::ListAuthorizedAppInstanceGroupByUserRequest &request);

      /**
       * @summary Queries the applications for which a specified user has obtained access permissions through per-application authorization by paging. You can filter results by delivery group ID, delivery group name, application ID, or application name using fuzzy match.
       *
       * @description ## Operation description
       * This operation queries the applications that a specified user is authorized to access at the application granularity. **Only records authorized at the application level are returned** (for example, authorizations completed through the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation). Authorizations granted to an entire delivery group through the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation are not included in the response.
       * The results are deduplicated by the combination of delivery group and application. Each record corresponds to one application within one delivery group.
       * ## Before you begin
       * - The user must already exist under the current account. If the user does not exist, the error code `User.NotFound` is returned. Call the [DescribeUsers](https://help.aliyun.com/document_detail/436936.html) operation to obtain the username.
       * - The delivery group that contains the application must already be created, and the application must have been authorized to the user at the application level. If no per-application authorization has been performed, an empty application list is returned.
       * ## Parameter description
       * - **`EndUserId` and `ProductType` are required.** Set `ProductType` to `CloudApp`, which indicates WUYING Cloud Application.
       * - `AppInstanceGroupId`, `AppId`, `AppInstanceGroupName`, and `AppName` are optional filter conditions. All of them use fuzzy match and can be combined in any way. If all are omitted, all per-application authorization records for the user are returned.
       * - Use `PageNumber` and `PageSize` for paging. `PageNumber` starts from 1, and `PageSize` ranges from 1 to 100. Use the returned `TotalCount` to determine whether to continue querying.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](https://help.aliyun.com/document_detail/428506.html) or [GetAppInstanceGroup](https://help.aliyun.com/document_detail/600836.html) operation to obtain the delivery group ID (AppInstanceGroupId) and the application IDs of deployed applications within the delivery group (AppId in the Apps list).
       * 2. Call the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation to authorize the application to the target user.
       * 3. Call this operation to query the applications that the user is authorized to access.
       *
       * @param request ListAuthorizedAppsByUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedAppsByUserResponse
       */
      Models::ListAuthorizedAppsByUserResponse listAuthorizedAppsByUserWithOptions(const Models::ListAuthorizedAppsByUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the applications for which a specified user has obtained access permissions through per-application authorization by paging. You can filter results by delivery group ID, delivery group name, application ID, or application name using fuzzy match.
       *
       * @description ## Operation description
       * This operation queries the applications that a specified user is authorized to access at the application granularity. **Only records authorized at the application level are returned** (for example, authorizations completed through the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation). Authorizations granted to an entire delivery group through the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation are not included in the response.
       * The results are deduplicated by the combination of delivery group and application. Each record corresponds to one application within one delivery group.
       * ## Before you begin
       * - The user must already exist under the current account. If the user does not exist, the error code `User.NotFound` is returned. Call the [DescribeUsers](https://help.aliyun.com/document_detail/436936.html) operation to obtain the username.
       * - The delivery group that contains the application must already be created, and the application must have been authorized to the user at the application level. If no per-application authorization has been performed, an empty application list is returned.
       * ## Parameter description
       * - **`EndUserId` and `ProductType` are required.** Set `ProductType` to `CloudApp`, which indicates WUYING Cloud Application.
       * - `AppInstanceGroupId`, `AppId`, `AppInstanceGroupName`, and `AppName` are optional filter conditions. All of them use fuzzy match and can be combined in any way. If all are omitted, all per-application authorization records for the user are returned.
       * - Use `PageNumber` and `PageSize` for paging. `PageNumber` starts from 1, and `PageSize` ranges from 1 to 100. Use the returned `TotalCount` to determine whether to continue querying.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](https://help.aliyun.com/document_detail/428506.html) or [GetAppInstanceGroup](https://help.aliyun.com/document_detail/600836.html) operation to obtain the delivery group ID (AppInstanceGroupId) and the application IDs of deployed applications within the delivery group (AppId in the Apps list).
       * 2. Call the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation to authorize the application to the target user.
       * 3. Call this operation to query the applications that the user is authorized to access.
       *
       * @param request ListAuthorizedAppsByUserRequest
       * @return ListAuthorizedAppsByUserResponse
       */
      Models::ListAuthorizedAppsByUserResponse listAuthorizedAppsByUser(const Models::ListAuthorizedAppsByUserRequest &request);

      /**
       * @summary Queries the list of user groups authorized by a specified delivery group.
       *
       * @param request ListAuthorizedUserGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedUserGroupsResponse
       */
      Models::ListAuthorizedUserGroupsResponse listAuthorizedUserGroupsWithOptions(const Models::ListAuthorizedUserGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of user groups authorized by a specified delivery group.
       *
       * @param request ListAuthorizedUserGroupsRequest
       * @return ListAuthorizedUserGroupsResponse
       */
      Models::ListAuthorizedUserGroupsResponse listAuthorizedUserGroups(const Models::ListAuthorizedUserGroupsRequest &request);

      /**
       * @summary Queries the list of authorized users for a specified delivery group or delivery group set by using paging. Supports exact or fuzzy filtering by username.
       *
       * @description ## Operation description
       * This operation queries the currently authorized users of a specified delivery group (AppInstanceGroupId) or delivery group set (AppInstanceGroupSetId). It returns each user\\"s username, account type, email address, phone number, and the authorization mode of the associated delivery group.
       * - This operation returns **authorization relationships** and does not indicate whether users are currently online or have established connections.
       * - In the Cloud Browser product, a delivery group corresponds to a cloud browser group, and a delivery group ID corresponds to a browser group ID.
       * The scope of results depends on the authorization mode of the delivery group (response parameter AuthMode):
       * - When the authorization mode is `App` (application-level authorization) or `AppInstanceGroup` (delivery group-level authorization): Returns users authorized through the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation at the delivery group level, as well as users authorized through the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation at the application level. If AppId is specified, only users **authorized for that specific application** are returned.
       * - When the authorization mode is `Session` (session-level authorization): Returns users who have been granted persistent sessions. The AppInstancePersistentIds field lists all persistent session IDs granted to each user. If AppInstancePersistentId is specified, only users granted that session are returned.
       * - When querying by delivery group set: Returns users authorized for the set. The response parameter AppInstanceGroupId is the primary delivery group ID of the set, and AppInstanceGroupSetId is the queried set ID.
       * When querying by delivery group, results are sorted in descending order by authorization time, with the most recently authorized users listed first.
       * ## Before you begin
       * - The target delivery group or delivery group set must be created, belong to the current account, and match the specified ProductType. Otherwise, a resource-not-found error code is returned.
       * - Users must have been authorized through the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) or [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation. If no users have been authorized, the operation returns normally with an empty Users list and TotalCount of 0.
       * ## Parameter description
       * - **ProductType, PageNumber, and PageSize are required**. If ProductType has an invalid value, the error code `ProductTypeInvalid` is returned.
       * - **Exactly one of AppInstanceGroupId and AppInstanceGroupSetId must be specified**. If both or neither are specified, the error code `InvalidParameter.AppInstanceGroupId/AppInstanceGroupSetId` is returned.
       * - **AppId and AppInstancePersistentId are not supported when querying by delivery group set**. If specified, the error codes `InvalidParameter.AppId` and `InvalidParameter.AppInstancePersistentId` are returned respectively.
       * - EndUserId performs **exact matching** by username. UserIdFuzzy performs **fuzzy matching** by username (a hit occurs if the username contains the keyword). Both can be specified simultaneously, in which case both conditions must be met.
       * - PageNumber starts from 1. Valid values of PageSize: 1 to 100.
       * - When the authorization mode is `App` or `AppInstanceGroup`, TotalCount is the number of **authorization records** that match the conditions. If the same user has multiple authorization records (for example, authorized for multiple applications), the records are merged into a single user entry in Users. Therefore, the number of users returned on the current page may be less than PageSize. Use TotalCount to determine whether to continue paging. When the authorization mode is `Session`, TotalCount is the deduplicated user count.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the delivery group ID. For cloud browser groups, call the [ListBrowserInstanceGroup](~~ListBrowserInstanceGroup~~) operation.
       * 2. Call the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation to authorize at the delivery group level, or call the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation to authorize at the application level.
       * 3. Call this operation to query authorized users. To remove authorization, pass the returned EndUserId values to the UnAuthorizeUserIds parameter of the authorization operations mentioned above.
       * ## Error codes
       * - `ProductTypeInvalid`: The value of ProductType is invalid.
       * - `InvalidParameter.AppInstanceGroupId/AppInstanceGroupSetId`: Both AppInstanceGroupId and AppInstanceGroupSetId are specified, or neither is specified.
       * - `InvalidParameter.AppId`: AppId is specified when querying by delivery group set.
       * - `InvalidParameter.AppInstancePersistentId`: AppInstancePersistentId is specified when querying by delivery group set.
       * - `InvalidAppInstanceGroupSpecItem.NotFound`: The delivery group does not exist, does not belong to the current account, or the product type does not match.
       * - `InvalidBrowserInstanceGroup.NotFound`: When ProductType is `CloudBrowser`, the cloud browser group does not exist, does not belong to the current account, or the product type does not match.
       * - `InvalidAppInstanceGroupSet.NotFound`: The delivery group set does not exist, does not belong to the current account, the product type does not match, or the set does not have an available primary delivery group.
       * - `InvalidAppInstanceGroupSet.ActivationFailed`: The delivery group set is not in an available state.
       *
       * @param request ListAuthorizedUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedUsersResponse
       */
      Models::ListAuthorizedUsersResponse listAuthorizedUsersWithOptions(const Models::ListAuthorizedUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of authorized users for a specified delivery group or delivery group set by using paging. Supports exact or fuzzy filtering by username.
       *
       * @description ## Operation description
       * This operation queries the currently authorized users of a specified delivery group (AppInstanceGroupId) or delivery group set (AppInstanceGroupSetId). It returns each user\\"s username, account type, email address, phone number, and the authorization mode of the associated delivery group.
       * - This operation returns **authorization relationships** and does not indicate whether users are currently online or have established connections.
       * - In the Cloud Browser product, a delivery group corresponds to a cloud browser group, and a delivery group ID corresponds to a browser group ID.
       * The scope of results depends on the authorization mode of the delivery group (response parameter AuthMode):
       * - When the authorization mode is `App` (application-level authorization) or `AppInstanceGroup` (delivery group-level authorization): Returns users authorized through the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation at the delivery group level, as well as users authorized through the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation at the application level. If AppId is specified, only users **authorized for that specific application** are returned.
       * - When the authorization mode is `Session` (session-level authorization): Returns users who have been granted persistent sessions. The AppInstancePersistentIds field lists all persistent session IDs granted to each user. If AppInstancePersistentId is specified, only users granted that session are returned.
       * - When querying by delivery group set: Returns users authorized for the set. The response parameter AppInstanceGroupId is the primary delivery group ID of the set, and AppInstanceGroupSetId is the queried set ID.
       * When querying by delivery group, results are sorted in descending order by authorization time, with the most recently authorized users listed first.
       * ## Before you begin
       * - The target delivery group or delivery group set must be created, belong to the current account, and match the specified ProductType. Otherwise, a resource-not-found error code is returned.
       * - Users must have been authorized through the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) or [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation. If no users have been authorized, the operation returns normally with an empty Users list and TotalCount of 0.
       * ## Parameter description
       * - **ProductType, PageNumber, and PageSize are required**. If ProductType has an invalid value, the error code `ProductTypeInvalid` is returned.
       * - **Exactly one of AppInstanceGroupId and AppInstanceGroupSetId must be specified**. If both or neither are specified, the error code `InvalidParameter.AppInstanceGroupId/AppInstanceGroupSetId` is returned.
       * - **AppId and AppInstancePersistentId are not supported when querying by delivery group set**. If specified, the error codes `InvalidParameter.AppId` and `InvalidParameter.AppInstancePersistentId` are returned respectively.
       * - EndUserId performs **exact matching** by username. UserIdFuzzy performs **fuzzy matching** by username (a hit occurs if the username contains the keyword). Both can be specified simultaneously, in which case both conditions must be met.
       * - PageNumber starts from 1. Valid values of PageSize: 1 to 100.
       * - When the authorization mode is `App` or `AppInstanceGroup`, TotalCount is the number of **authorization records** that match the conditions. If the same user has multiple authorization records (for example, authorized for multiple applications), the records are merged into a single user entry in Users. Therefore, the number of users returned on the current page may be less than PageSize. Use TotalCount to determine whether to continue paging. When the authorization mode is `Session`, TotalCount is the deduplicated user count.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the delivery group ID. For cloud browser groups, call the [ListBrowserInstanceGroup](~~ListBrowserInstanceGroup~~) operation.
       * 2. Call the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation to authorize at the delivery group level, or call the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation to authorize at the application level.
       * 3. Call this operation to query authorized users. To remove authorization, pass the returned EndUserId values to the UnAuthorizeUserIds parameter of the authorization operations mentioned above.
       * ## Error codes
       * - `ProductTypeInvalid`: The value of ProductType is invalid.
       * - `InvalidParameter.AppInstanceGroupId/AppInstanceGroupSetId`: Both AppInstanceGroupId and AppInstanceGroupSetId are specified, or neither is specified.
       * - `InvalidParameter.AppId`: AppId is specified when querying by delivery group set.
       * - `InvalidParameter.AppInstancePersistentId`: AppInstancePersistentId is specified when querying by delivery group set.
       * - `InvalidAppInstanceGroupSpecItem.NotFound`: The delivery group does not exist, does not belong to the current account, or the product type does not match.
       * - `InvalidBrowserInstanceGroup.NotFound`: When ProductType is `CloudBrowser`, the cloud browser group does not exist, does not belong to the current account, or the product type does not match.
       * - `InvalidAppInstanceGroupSet.NotFound`: The delivery group set does not exist, does not belong to the current account, the product type does not match, or the set does not have an available primary delivery group.
       * - `InvalidAppInstanceGroupSet.ActivationFailed`: The delivery group set is not in an available state.
       *
       * @param request ListAuthorizedUsersRequest
       * @return ListAuthorizedUsersResponse
       */
      Models::ListAuthorizedUsersResponse listAuthorizedUsers(const Models::ListAuthorizedUsersRequest &request);

      /**
       * @summary Queries the bindng information between users and resources.
       *
       * @param request ListBindInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBindInfoResponse
       */
      Models::ListBindInfoResponse listBindInfoWithOptions(const Models::ListBindInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bindng information between users and resources.
       *
       * @param request ListBindInfoRequest
       * @return ListBindInfoResponse
       */
      Models::ListBindInfoResponse listBindInfo(const Models::ListBindInfoRequest &request);

      /**
       * @summary Queries cloud browser groups and their current status by paging.
       *
       * @description This topic describes how to use this operation in the monthly active user (MAU) billing scenario.
       * ## Query conditions
       * You can filter by browser group identity, name, business region, office network, set, authorized user group, and status. Only one status value can be specified at a time.
       * ## Paging
       * Use `PageNumber` and `PageSize` for paging. Use the returned `TotalCount` to determine whether to continue querying the next page.
       * ## What to do next
       * To view the detailed configuration of a single browser group, invoke `GetBrowserInstanceGroup` with the returned identity.
       * ## Example notes
       * The `-` in the examples indicates that the field is not applicable or not returned in the current scenario. It is not an actual character string returned by the operation. Resource identities in the examples are masked. Use the actual query results in your environment.
       *
       * @param request ListBrowserInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBrowserInstanceGroupResponse
       */
      Models::ListBrowserInstanceGroupResponse listBrowserInstanceGroupWithOptions(const Models::ListBrowserInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cloud browser groups and their current status by paging.
       *
       * @description This topic describes how to use this operation in the monthly active user (MAU) billing scenario.
       * ## Query conditions
       * You can filter by browser group identity, name, business region, office network, set, authorized user group, and status. Only one status value can be specified at a time.
       * ## Paging
       * Use `PageNumber` and `PageSize` for paging. Use the returned `TotalCount` to determine whether to continue querying the next page.
       * ## What to do next
       * To view the detailed configuration of a single browser group, invoke `GetBrowserInstanceGroup` with the returned identity.
       * ## Example notes
       * The `-` in the examples indicates that the field is not applicable or not returned in the current scenario. It is not an actual character string returned by the operation. Resource identities in the examples are masked. Use the actual query results in your environment.
       *
       * @param request ListBrowserInstanceGroupRequest
       * @return ListBrowserInstanceGroupResponse
       */
      Models::ListBrowserInstanceGroupResponse listBrowserInstanceGroup(const Models::ListBrowserInstanceGroupRequest &request);

      /**
       * @summary Queries the list of desktop agent runtimes.
       *
       * @param request ListDesktopAgentRuntimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDesktopAgentRuntimeResponse
       */
      Models::ListDesktopAgentRuntimeResponse listDesktopAgentRuntimeWithOptions(const Models::ListDesktopAgentRuntimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of desktop agent runtimes.
       *
       * @param request ListDesktopAgentRuntimeRequest
       * @return ListDesktopAgentRuntimeResponse
       */
      Models::ListDesktopAgentRuntimeResponse listDesktopAgentRuntime(const Models::ListDesktopAgentRuntimeRequest &request);

      /**
       * @summary Queries image information.
       *
       * @param request ListImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageResponse
       */
      Models::ListImageResponse listImageWithOptions(const Models::ListImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries image information.
       *
       * @param request ListImageRequest
       * @return ListImageResponse
       */
      Models::ListImageResponse listImage(const Models::ListImageRequest &request);

      /**
       * @summary Queries the list of LLM templates.
       *
       * @description You can query the list of model templates under a model provider template in the WUYING Agent Management Center with paging. Filtering by model group ID, model provider template ID, model template ID, and model encoding is supported. When querying by model group dimension, the default model is automatically pinned to the top.
       * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param tmpReq ListLlmTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLlmTemplatesResponse
       */
      Models::ListLlmTemplatesResponse listLlmTemplatesWithOptions(const Models::ListLlmTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of LLM templates.
       *
       * @description You can query the list of model templates under a model provider template in the WUYING Agent Management Center with paging. Filtering by model group ID, model provider template ID, model template ID, and model encoding is supported. When querying by model group dimension, the default model is automatically pinned to the top.
       * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request ListLlmTemplatesRequest
       * @return ListLlmTemplatesResponse
       */
      Models::ListLlmTemplatesResponse listLlmTemplates(const Models::ListLlmTemplatesRequest &request);

      /**
       * @summary Queries the list of model provider endpoints.
       *
       * @param request ListModelProviderEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelProviderEndpointsResponse
       */
      Models::ListModelProviderEndpointsResponse listModelProviderEndpointsWithOptions(const Models::ListModelProviderEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of model provider endpoints.
       *
       * @param request ListModelProviderEndpointsRequest
       * @return ListModelProviderEndpointsResponse
       */
      Models::ListModelProviderEndpointsResponse listModelProviderEndpoints(const Models::ListModelProviderEndpointsRequest &request);

      /**
       * @summary Queries the list of model provider templates.
       *
       * @description You can perform a paged query to retrieve the list of model provider templates under a specified model group in the WUYING Agent Management Center. You can filter results by provider name, model group ID, and provider template ID. Paging is supported.
       * Before you call this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param tmpReq ListModelProviderTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelProviderTemplatesResponse
       */
      Models::ListModelProviderTemplatesResponse listModelProviderTemplatesWithOptions(const Models::ListModelProviderTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of model provider templates.
       *
       * @description You can perform a paged query to retrieve the list of model provider templates under a specified model group in the WUYING Agent Management Center. You can filter results by provider name, model group ID, and provider template ID. Paging is supported.
       * Before you call this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request ListModelProviderTemplatesRequest
       * @return ListModelProviderTemplatesResponse
       */
      Models::ListModelProviderTemplatesResponse listModelProviderTemplates(const Models::ListModelProviderTemplatesRequest &request);

      /**
       * @summary Queries the list of resource groups associated with a model group.
       *
       * @description You can call this operation to query the list of resource groups authorized by a model group in the WUYING Agent Management Center.
       * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request ListModelTemplateResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelTemplateResourceGroupResponse
       */
      Models::ListModelTemplateResourceGroupResponse listModelTemplateResourceGroupWithOptions(const Models::ListModelTemplateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of resource groups associated with a model group.
       *
       * @description You can call this operation to query the list of resource groups authorized by a model group in the WUYING Agent Management Center.
       * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request ListModelTemplateResourceGroupRequest
       * @return ListModelTemplateResourceGroupResponse
       */
      Models::ListModelTemplateResourceGroupResponse listModelTemplateResourceGroup(const Models::ListModelTemplateResourceGroupRequest &request);

      /**
       * @summary Queries a list of model templates.
       *
       * @description You can use paged query to retrieve the list of model groups created in the Wuying Agent Management Center. You can filter results by Agent provider, Agent platform, template group ID, and whether models have been configured. Paging is supported.
       * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param tmpReq ListModelTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelTemplatesResponse
       */
      Models::ListModelTemplatesResponse listModelTemplatesWithOptions(const Models::ListModelTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of model templates.
       *
       * @description You can use paged query to retrieve the list of model groups created in the Wuying Agent Management Center. You can filter results by Agent provider, Agent platform, template group ID, and whether models have been configured. Paging is supported.
       * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request ListModelTemplatesRequest
       * @return ListModelTemplatesResponse
       */
      Models::ListModelTemplatesResponse listModelTemplates(const Models::ListModelTemplatesRequest &request);

      /**
       * @summary Queries the resource specifications available for selection when creating a delivery group.
       *
       * @param request ListNodeInstanceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodeInstanceTypeResponse
       */
      Models::ListNodeInstanceTypeResponse listNodeInstanceTypeWithOptions(const Models::ListNodeInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource specifications available for selection when creating a delivery group.
       *
       * @param request ListNodeInstanceTypeRequest
       * @return ListNodeInstanceTypeResponse
       */
      Models::ListNodeInstanceTypeResponse listNodeInstanceType(const Models::ListNodeInstanceTypeRequest &request);

      /**
       * @summary Queries the list of resource nodes.
       *
       * @param request ListNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodesWithOptions(const Models::ListNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of resource nodes.
       *
       * @param request ListNodesRequest
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodes(const Models::ListNodesRequest &request);

      /**
       * @summary Queries the history of over-the-air updates.
       *
       * @param request ListOtaTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOtaTaskResponse
       */
      Models::ListOtaTaskResponse listOtaTaskWithOptions(const Models::ListOtaTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the history of over-the-air updates.
       *
       * @param request ListOtaTaskRequest
       * @return ListOtaTaskResponse
       */
      Models::ListOtaTaskResponse listOtaTask(const Models::ListOtaTaskRequest &request);

      /**
       * @summary Queries the list of persistent session application instances in a delivery group.
       *
       * @param request ListPersistentAppInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPersistentAppInstancesResponse
       */
      Models::ListPersistentAppInstancesResponse listPersistentAppInstancesWithOptions(const Models::ListPersistentAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of persistent session application instances in a delivery group.
       *
       * @param request ListPersistentAppInstancesRequest
       * @return ListPersistentAppInstancesResponse
       */
      Models::ListPersistentAppInstancesResponse listPersistentAppInstances(const Models::ListPersistentAppInstancesRequest &request);

      /**
       * @summary Queries published delivery groups and their application information for a specified product type under the current Alibaba Cloud account by using paging. Supports filtering by delivery group, application, and user authorization status.
       *
       * @description ## Before you begin
       * When calling this operation with a RAM user or STS credential, the `appstreaming:ListPublishedAppInstanceGroup` permission is required.
       * A delivery group must be in the published state and have deployed applications in its image to appear in the query results. This operation only queries information. It does not create delivery groups, assign users, or grant application access permissions.
       * ## Query and pagination
       * - **You must explicitly pass in `ProductType`, `PageNumber`, and `PageSize`.** Page numbers start from `1`, and the page size ranges from `1` to `100`.
       * - `AppInstanceGroupId`, `AppInstanceGroupName`, `AppId`, and `AppName` all support substring matching. You can pass them individually or in combination. When multiple conditions are specified, all conditions must be met simultaneously. When both `AppId` and `AppName` are specified, the same application must satisfy both conditions.
       * - If an optional filter parameter is not specified or is set to an empty string, that condition is not applied. Query results are sorted by delivery group creation time from newest to oldest. A delivery group is not returned multiple times even if it contains multiple matching applications.
       * - `ExcludeUserId` excludes delivery groups in which all applications have been directly authorized to the specified user. It cannot be used to determine whether the user has no access permissions at all.
       * - `AppId` and `AppName` only filter delivery groups. **They do not restrict the returned `Apps` list to only the matched applications.**
       * ## Invoke sequence
       * 1. Invoke a query with `PageNumber=1` and the desired `PageSize`. For WUYING Cloud Application common scenarios, use `ProductType=CloudApp`.
       * 2. Read `AppInstanceGroupModels`. To retrieve the next page, keep the product type and filter conditions unchanged and increment `PageNumber`. If no delivery groups match, the total count is `0` and the list is empty. If the page number exceeds the result range, the list may also be empty, but the total count still represents the total number of matching delivery groups.
       * 3. To retrieve details of a single delivery group, pass the full `AppInstanceGroupId` from the response and the same `ProductType` to [GetAppInstanceGroup](~~GetAppInstanceGroup~~).
       * The masked identifiers in the examples are for format demonstration purposes. Replace them with your actual identifiers when invoking the operation.
       *
       * @param request ListPublishedAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublishedAppInstanceGroupResponse
       */
      Models::ListPublishedAppInstanceGroupResponse listPublishedAppInstanceGroupWithOptions(const Models::ListPublishedAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries published delivery groups and their application information for a specified product type under the current Alibaba Cloud account by using paging. Supports filtering by delivery group, application, and user authorization status.
       *
       * @description ## Before you begin
       * When calling this operation with a RAM user or STS credential, the `appstreaming:ListPublishedAppInstanceGroup` permission is required.
       * A delivery group must be in the published state and have deployed applications in its image to appear in the query results. This operation only queries information. It does not create delivery groups, assign users, or grant application access permissions.
       * ## Query and pagination
       * - **You must explicitly pass in `ProductType`, `PageNumber`, and `PageSize`.** Page numbers start from `1`, and the page size ranges from `1` to `100`.
       * - `AppInstanceGroupId`, `AppInstanceGroupName`, `AppId`, and `AppName` all support substring matching. You can pass them individually or in combination. When multiple conditions are specified, all conditions must be met simultaneously. When both `AppId` and `AppName` are specified, the same application must satisfy both conditions.
       * - If an optional filter parameter is not specified or is set to an empty string, that condition is not applied. Query results are sorted by delivery group creation time from newest to oldest. A delivery group is not returned multiple times even if it contains multiple matching applications.
       * - `ExcludeUserId` excludes delivery groups in which all applications have been directly authorized to the specified user. It cannot be used to determine whether the user has no access permissions at all.
       * - `AppId` and `AppName` only filter delivery groups. **They do not restrict the returned `Apps` list to only the matched applications.**
       * ## Invoke sequence
       * 1. Invoke a query with `PageNumber=1` and the desired `PageSize`. For WUYING Cloud Application common scenarios, use `ProductType=CloudApp`.
       * 2. Read `AppInstanceGroupModels`. To retrieve the next page, keep the product type and filter conditions unchanged and increment `PageNumber`. If no delivery groups match, the total count is `0` and the list is empty. If the page number exceeds the result range, the list may also be empty, but the total count still represents the total number of matching delivery groups.
       * 3. To retrieve details of a single delivery group, pass the full `AppInstanceGroupId` from the response and the same `ProductType` to [GetAppInstanceGroup](~~GetAppInstanceGroup~~).
       * The masked identifiers in the examples are for format demonstration purposes. Replace them with your actual identifiers when invoking the operation.
       *
       * @param request ListPublishedAppInstanceGroupRequest
       * @return ListPublishedAppInstanceGroupResponse
       */
      Models::ListPublishedAppInstanceGroupResponse listPublishedAppInstanceGroup(const Models::ListPublishedAppInstanceGroupRequest &request);

      /**
       * @summary Queries deployed applications in published delivery groups under the current Alibaba Cloud account for a specified product type by paging, and returns each application along with its delivery group and the number of authorized users by application. Supports filtering by delivery group, application, and user authorization status.
       *
       * @description ## Before you begin
       * When you call this operation by using a RAM user or Security Token Service (STS) credential, you must have the `appstreaming:ListPublishedApps` permission.
       * Only delivery groups in the published state whose images contain deployed applications are included in the query results. This operation only queries information. It does not create delivery groups or grant or revoke application access permissions.
       * ## Response granularity
       * Results are returned on a per-delivery-group-plus-application basis. If the same application is deployed in multiple published delivery groups, a separate record is returned for each combination. `TotalCount` also reflects the number of such combinations. The list is sorted by the creation time of the delivery group in descending order.
       * ## Query and pagination
       * - **You must explicitly specify `ProductType`, `PageNumber`, and `PageSize`.** Page numbers start from `1`, and the page size ranges from `1` to `100`. Invalid values return error codes `InvalidParameter.PageNumber` and `InvalidParameter.PageSize`, respectively.
       * - `AppInstanceGroupId`, `AppInstanceGroupName`, `AppId`, and `AppName` all support substring matching. You can specify them individually or in combination. When multiple conditions are specified, all conditions must be met.
       * - If an optional filter parameter is not specified or is set to an empty string, filtering is not applied for that condition.
       * - `ExcludeUserId` excludes applications that have been authorized to the specified user by application, which helps you find applications that can still be authorized to that user. **Access permissions granted through delivery-group-level authorization or user groups are not evaluated by this condition.**
       * ## Invocation sequence
       * 1. Initiate a query with `PageNumber=1` and the desired `PageSize`. For WUYING Cloud Application common scenarios, use `ProductType=CloudApp`.
       * 2. Read `Apps`. To retrieve the next page, increment `PageNumber` while keeping the product type and filter conditions unchanged. If no results match, `TotalCount` is `0` and `Apps` is an empty list. If the page number exceeds the result range, `Apps` may also be empty, but `TotalCount` still indicates the total number of matching records.
       * 3. To authorize users for a specific application by application, pass the returned `AppInstanceGroupId`, `AppId`, and the same `ProductType` to [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~). To view delivery group details, pass `AppInstanceGroupId` and `ProductType` to [GetAppInstanceGroup](~~GetAppInstanceGroup~~).
       * The masked identities in the examples are for format demonstration purposes. Replace them with your actual identities when you invoke the operation.
       *
       * @param request ListPublishedAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublishedAppsResponse
       */
      Models::ListPublishedAppsResponse listPublishedAppsWithOptions(const Models::ListPublishedAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries deployed applications in published delivery groups under the current Alibaba Cloud account for a specified product type by paging, and returns each application along with its delivery group and the number of authorized users by application. Supports filtering by delivery group, application, and user authorization status.
       *
       * @description ## Before you begin
       * When you call this operation by using a RAM user or Security Token Service (STS) credential, you must have the `appstreaming:ListPublishedApps` permission.
       * Only delivery groups in the published state whose images contain deployed applications are included in the query results. This operation only queries information. It does not create delivery groups or grant or revoke application access permissions.
       * ## Response granularity
       * Results are returned on a per-delivery-group-plus-application basis. If the same application is deployed in multiple published delivery groups, a separate record is returned for each combination. `TotalCount` also reflects the number of such combinations. The list is sorted by the creation time of the delivery group in descending order.
       * ## Query and pagination
       * - **You must explicitly specify `ProductType`, `PageNumber`, and `PageSize`.** Page numbers start from `1`, and the page size ranges from `1` to `100`. Invalid values return error codes `InvalidParameter.PageNumber` and `InvalidParameter.PageSize`, respectively.
       * - `AppInstanceGroupId`, `AppInstanceGroupName`, `AppId`, and `AppName` all support substring matching. You can specify them individually or in combination. When multiple conditions are specified, all conditions must be met.
       * - If an optional filter parameter is not specified or is set to an empty string, filtering is not applied for that condition.
       * - `ExcludeUserId` excludes applications that have been authorized to the specified user by application, which helps you find applications that can still be authorized to that user. **Access permissions granted through delivery-group-level authorization or user groups are not evaluated by this condition.**
       * ## Invocation sequence
       * 1. Initiate a query with `PageNumber=1` and the desired `PageSize`. For WUYING Cloud Application common scenarios, use `ProductType=CloudApp`.
       * 2. Read `Apps`. To retrieve the next page, increment `PageNumber` while keeping the product type and filter conditions unchanged. If no results match, `TotalCount` is `0` and `Apps` is an empty list. If the page number exceeds the result range, `Apps` may also be empty, but `TotalCount` still indicates the total number of matching records.
       * 3. To authorize users for a specific application by application, pass the returned `AppInstanceGroupId`, `AppId`, and the same `ProductType` to [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~). To view delivery group details, pass `AppInstanceGroupId` and `ProductType` to [GetAppInstanceGroup](~~GetAppInstanceGroup~~).
       * The masked identities in the examples are for format demonstration purposes. Replace them with your actual identities when you invoke the operation.
       *
       * @param request ListPublishedAppsRequest
       * @return ListPublishedAppsResponse
       */
      Models::ListPublishedAppsResponse listPublishedApps(const Models::ListPublishedAppsRequest &request);

      /**
       * @summary Queries the regions supported by WUYING Cloud Application.
       *
       * @description > The regions returned by this operation are not all available regions. For information about available regions, see [Supported regions](https://help.aliyun.com/document_detail/426036.html).
       *
       * @param request ListRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const Models::ListRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions supported by WUYING Cloud Application.
       *
       * @description > The regions returned by this operation are not all available regions. For information about available regions, see [Supported regions](https://help.aliyun.com/document_detail/426036.html).
       *
       * @param request ListRegionsRequest
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions(const Models::ListRegionsRequest &request);

      /**
       * @summary Queries the tags of one or more specified cloud resources.
       *
       * @param request ListTagCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagCloudResourcesResponse
       */
      Models::ListTagCloudResourcesResponse listTagCloudResourcesWithOptions(const Models::ListTagCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of one or more specified cloud resources.
       *
       * @param request ListTagCloudResourcesRequest
       * @return ListTagCloudResourcesResponse
       */
      Models::ListTagCloudResourcesResponse listTagCloudResources(const Models::ListTagCloudResourcesRequest &request);

      /**
       * @summary Queries tags bound to one or more delivery groups, or filters delivery groups that have specific tags bound by tag key-value pairs.
       *
       * @description This operation complies with the Alibaba Cloud tagging standard and is used to query tags bound to Elastic Cloud Application (China) delivery groups. You can query tags bound to resources by resource ID, or filter resources that have specific tags bound by tag key-value pairs.
       * ## Before you begin
       * - A delivery group is created. You can call the ListAppInstanceGroup operation to obtain the delivery group ID.
       * - Tags are bound to the delivery group. You can bind tags by calling the TagResources operation, or by using the console or the Tag service.
       * ## Parameter description
       * - **ResourceType is required**. Only `APPINSTANCEGROUP` (delivery group) is supported. If you specify other values, the error code `InvalidResourceType.Invalid` is returned.
       * - **Specify at least one of ResourceId.N and Tag.N**. If neither is specified, the error code `MissingParameter.ResourceIdsOrTags` is returned.
       *   - If only ResourceId.N is specified: all tags attached to the specified resources are returned.
       *   - If only Tag.N is specified: all resources that have the specified tags attached and their matching tags are returned.
       *   - If both are specified: only records of the specified resources that have the specified tags attached are returned.
       * - Tag.N.Key is required. If it is empty, the error code `InvalidTagPolicy.KeyInvalid` is returned. Tag.N.Value is optional. If it is not specified, the value of the tag key is not restricted, which means any tag value under the key is matched.
       * - Multiple Tag.N conditions have an AND relationship. A resource is returned only if it has all specified tags attached.
       * ## Response description
       * - Each record in the response corresponds to a resource-tag key-value pair. If a resource has multiple tags bound, multiple records are returned.
       * - TotalCount indicates the number of records returned.
       * - This operation returns all matching results at a time. An empty NextToken value indicates that no more data is available.
       * ## Invocation sequence
       * 1. Invoke the ListAppInstanceGroup operation to obtain the delivery group ID.
       * 2. Invoke the TagResources operation to attach tags to the delivery group.
       * 3. Invoke this operation to query tag bindings by resource ID or tag conditions.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tags bound to one or more delivery groups, or filters delivery groups that have specific tags bound by tag key-value pairs.
       *
       * @description This operation complies with the Alibaba Cloud tagging standard and is used to query tags bound to Elastic Cloud Application (China) delivery groups. You can query tags bound to resources by resource ID, or filter resources that have specific tags bound by tag key-value pairs.
       * ## Before you begin
       * - A delivery group is created. You can call the ListAppInstanceGroup operation to obtain the delivery group ID.
       * - Tags are bound to the delivery group. You can bind tags by calling the TagResources operation, or by using the console or the Tag service.
       * ## Parameter description
       * - **ResourceType is required**. Only `APPINSTANCEGROUP` (delivery group) is supported. If you specify other values, the error code `InvalidResourceType.Invalid` is returned.
       * - **Specify at least one of ResourceId.N and Tag.N**. If neither is specified, the error code `MissingParameter.ResourceIdsOrTags` is returned.
       *   - If only ResourceId.N is specified: all tags attached to the specified resources are returned.
       *   - If only Tag.N is specified: all resources that have the specified tags attached and their matching tags are returned.
       *   - If both are specified: only records of the specified resources that have the specified tags attached are returned.
       * - Tag.N.Key is required. If it is empty, the error code `InvalidTagPolicy.KeyInvalid` is returned. Tag.N.Value is optional. If it is not specified, the value of the tag key is not restricted, which means any tag value under the key is matched.
       * - Multiple Tag.N conditions have an AND relationship. A resource is returned only if it has all specified tags attached.
       * ## Response description
       * - Each record in the response corresponds to a resource-tag key-value pair. If a resource has multiple tags bound, multiple records are returned.
       * - TotalCount indicates the number of records returned.
       * - This operation returns all matching results at a time. An empty NextToken value indicates that no more data is available.
       * ## Invocation sequence
       * 1. Invoke the ListAppInstanceGroup operation to obtain the delivery group ID.
       * 2. Invoke the TagResources operation to attach tags to the delivery group.
       * 3. Invoke this operation to query tag bindings by resource ID or tag conditions.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the configuration information of an administrator account, such as whether resource expiration reminders are enabled.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTenantConfigResponse
       */
      Models::ListTenantConfigResponse listTenantConfigWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information of an administrator account, such as whether resource expiration reminders are enabled.
       *
       * @return ListTenantConfigResponse
       */
      Models::ListTenantConfigResponse listTenantConfig();

      /**
       * @summary Queries a list of workstations.
       *
       * @description Retrieves a list of WUYING workstations.
       *
       * @param request ListWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWuyingServerResponse
       */
      Models::ListWuyingServerResponse listWuyingServerWithOptions(const Models::ListWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of workstations.
       *
       * @description Retrieves a list of WUYING workstations.
       *
       * @param request ListWuyingServerRequest
       * @return ListWuyingServerResponse
       */
      Models::ListWuyingServerResponse listWuyingServer(const Models::ListWuyingServerRequest &request);

      /**
       * @summary Queries the list of available zone IDs for a specified region, product type, and operating system type.
       *
       * @description ## Operation description
       * This operation returns the list of available zone IDs for the current Alibaba Cloud account based on the specified region, product type, and operating system type. A typical use case is to check which zones are available before creating a resource that requires a vSwitch, and then select a vSwitch in one of those zones.
       * This operation only queries information. It does not create resources or incur fees.
       * ## Before you begin
       * - When calling this operation with a RAM user or STS credential, the `appstreaming:ListAppInstanceType` permission is required. If the permission is insufficient, the error code `Forbidden.NoPermission` is returned.
       * - **`ProductType`, `BizRegionId`, and `OsType` are all required.** If any of these parameters is missing, empty, or set to an unrecognized value, the error code `InvalidParameter.ValueInvalid` is returned.
       * - `BizRegionId` must be a region ID supported by WUYING Cloud Application. Call [ListRegions](~~ListRegions~~) first to obtain the supported region IDs.
       * ## Call sequence
       * 1. Call [ListRegions](~~ListRegions~~) to obtain the supported region IDs.
       * 2. Call this operation with the region ID, target product type, and operating system type, and read the returned `ListZonesModel.Zones`.
       * 3. When creating a resource that requires a vSwitch, select a vSwitch in one of the returned zones. For example, pass the corresponding vSwitch ID when calling [CreateAppInstanceGroup](~~CreateAppInstanceGroup~~) or [CreateWuyingServer](~~CreateWuyingServer~~).
       * The returned zone list is determined by the available resources in the current region and may change over time. Query the list in real time before creating resources instead of caching it for extended periods.
       *
       * @param request ListZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListZonesResponse
       */
      Models::ListZonesResponse listZonesWithOptions(const Models::ListZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of available zone IDs for a specified region, product type, and operating system type.
       *
       * @description ## Operation description
       * This operation returns the list of available zone IDs for the current Alibaba Cloud account based on the specified region, product type, and operating system type. A typical use case is to check which zones are available before creating a resource that requires a vSwitch, and then select a vSwitch in one of those zones.
       * This operation only queries information. It does not create resources or incur fees.
       * ## Before you begin
       * - When calling this operation with a RAM user or STS credential, the `appstreaming:ListAppInstanceType` permission is required. If the permission is insufficient, the error code `Forbidden.NoPermission` is returned.
       * - **`ProductType`, `BizRegionId`, and `OsType` are all required.** If any of these parameters is missing, empty, or set to an unrecognized value, the error code `InvalidParameter.ValueInvalid` is returned.
       * - `BizRegionId` must be a region ID supported by WUYING Cloud Application. Call [ListRegions](~~ListRegions~~) first to obtain the supported region IDs.
       * ## Call sequence
       * 1. Call [ListRegions](~~ListRegions~~) to obtain the supported region IDs.
       * 2. Call this operation with the region ID, target product type, and operating system type, and read the returned `ListZonesModel.Zones`.
       * 3. When creating a resource that requires a vSwitch, select a vSwitch in one of the returned zones. For example, pass the corresponding vSwitch ID when calling [CreateAppInstanceGroup](~~CreateAppInstanceGroup~~) or [CreateWuyingServer](~~CreateWuyingServer~~).
       * The returned zone list is determined by the available resources in the current region and may change over time. Query the list in real time before creating resources instead of caching it for extended periods.
       *
       * @param request ListZonesRequest
       * @return ListZonesResponse
       */
      Models::ListZonesResponse listZones(const Models::ListZonesRequest &request);

      /**
       * @summary Logs off all sessions in a pay-as-you-go delivery group that has scheduled auto scaling enabled.
       *
       * @description > This operation applies only to pay-as-you-go resource delivery groups that have scheduled auto scaling enabled. The operation can be called only outside the scaling time periods specified in the scheduled auto scaling policy.
       *
       * @param request LogOffAllSessionsInAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LogOffAllSessionsInAppInstanceGroupResponse
       */
      Models::LogOffAllSessionsInAppInstanceGroupResponse logOffAllSessionsInAppInstanceGroupWithOptions(const Models::LogOffAllSessionsInAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Logs off all sessions in a pay-as-you-go delivery group that has scheduled auto scaling enabled.
       *
       * @description > This operation applies only to pay-as-you-go resource delivery groups that have scheduled auto scaling enabled. The operation can be called only outside the scaling time periods specified in the scheduled auto scaling policy.
       *
       * @param request LogOffAllSessionsInAppInstanceGroupRequest
       * @return LogOffAllSessionsInAppInstanceGroupResponse
       */
      Models::LogOffAllSessionsInAppInstanceGroupResponse logOffAllSessionsInAppInstanceGroup(const Models::LogOffAllSessionsInAppInstanceGroupRequest &request);

      /**
       * @summary Modifies the General Policy of a delivery group, including the number of concurrent sessions and the session retention duration after disconnection.
       *
       * @param tmpReq ModifyAppInstanceGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppInstanceGroupAttributeResponse
       */
      Models::ModifyAppInstanceGroupAttributeResponse modifyAppInstanceGroupAttributeWithOptions(const Models::ModifyAppInstanceGroupAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the General Policy of a delivery group, including the number of concurrent sessions and the session retention duration after disconnection.
       *
       * @param request ModifyAppInstanceGroupAttributeRequest
       * @return ModifyAppInstanceGroupAttributeResponse
       */
      Models::ModifyAppInstanceGroupAttributeResponse modifyAppInstanceGroupAttribute(const Models::ModifyAppInstanceGroupAttributeRequest &request);

      /**
       * @summary Modifies the display policy of a delivery group, including settings such as frame rate, resolution, and protocol type.
       *
       * @param tmpReq ModifyAppPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppPolicyResponse
       */
      Models::ModifyAppPolicyResponse modifyAppPolicyWithOptions(const Models::ModifyAppPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the display policy of a delivery group, including settings such as frame rate, resolution, and protocol type.
       *
       * @param request ModifyAppPolicyRequest
       * @return ModifyAppPolicyResponse
       */
      Models::ModifyAppPolicyResponse modifyAppPolicy(const Models::ModifyAppPolicyRequest &request);

      /**
       * @summary Modifies the attributes of a Wuying Cloud Browser.
       *
       * @description Modifies the attributes of a Wuying Cloud Browser.
       *
       * @param tmpReq ModifyBrowserInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBrowserInstanceGroupResponse
       */
      Models::ModifyBrowserInstanceGroupResponse modifyBrowserInstanceGroupWithOptions(const Models::ModifyBrowserInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a Wuying Cloud Browser.
       *
       * @description Modifies the attributes of a Wuying Cloud Browser.
       *
       * @param request ModifyBrowserInstanceGroupRequest
       * @return ModifyBrowserInstanceGroupResponse
       */
      Models::ModifyBrowserInstanceGroupResponse modifyBrowserInstanceGroup(const Models::ModifyBrowserInstanceGroupRequest &request);

      /**
       * @summary Upgrades the number of nodes in a subscription delivery group.
       *
       * @param tmpReq ModifyNodePoolAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNodePoolAmountResponse
       */
      Models::ModifyNodePoolAmountResponse modifyNodePoolAmountWithOptions(const Models::ModifyNodePoolAmountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the number of nodes in a subscription delivery group.
       *
       * @param request ModifyNodePoolAmountRequest
       * @return ModifyNodePoolAmountResponse
       */
      Models::ModifyNodePoolAmountResponse modifyNodePoolAmount(const Models::ModifyNodePoolAmountRequest &request);

      /**
       * @summary Modifies the elastic mode of a delivery group, including fixed quantity (no elastic scaling), scheduled scaling, and automatic scaling.
       *
       * @description You can configure the elastic pattern for WUYING Cloud Application resources in Settings:
       * - Fixed quantity: Elastic scaling is not used.
       * - Automatic scaling: Automatically scales resources based on the number of connected sessions and the duration without session connections.
       * - Scheduled scaling: Executes resource scaling during specified time periods on specified dates.
       * Before using this operation, make sure that you fully understand the [billing method and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Cloud Application.
       *
       * @param tmpReq ModifyNodePoolAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNodePoolAttributeResponse
       */
      Models::ModifyNodePoolAttributeResponse modifyNodePoolAttributeWithOptions(const Models::ModifyNodePoolAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the elastic mode of a delivery group, including fixed quantity (no elastic scaling), scheduled scaling, and automatic scaling.
       *
       * @description You can configure the elastic pattern for WUYING Cloud Application resources in Settings:
       * - Fixed quantity: Elastic scaling is not used.
       * - Automatic scaling: Automatically scales resources based on the number of connected sessions and the duration without session connections.
       * - Scheduled scaling: Executes resource scaling during specified time periods on specified dates.
       * Before using this operation, make sure that you fully understand the [billing method and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Cloud Application.
       *
       * @param request ModifyNodePoolAttributeRequest
       * @return ModifyNodePoolAttributeResponse
       */
      Models::ModifyNodePoolAttributeResponse modifyNodePoolAttribute(const Models::ModifyNodePoolAttributeRequest &request);

      /**
       * @summary Modifies the administrator account configuration, such as whether to enable resource expiration reminders.
       *
       * @param request ModifyTenantConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTenantConfigResponse
       */
      Models::ModifyTenantConfigResponse modifyTenantConfigWithOptions(const Models::ModifyTenantConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the administrator account configuration, such as whether to enable resource expiration reminders.
       *
       * @param request ModifyTenantConfigRequest
       * @return ModifyTenantConfigResponse
       */
      Models::ModifyTenantConfigResponse modifyTenantConfig(const Models::ModifyTenantConfigRequest &request);

      /**
       * @summary Modifies the properties of a workstation.
       *
       * @param request ModifyWuyingServerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWuyingServerAttributeResponse
       */
      Models::ModifyWuyingServerAttributeResponse modifyWuyingServerAttributeWithOptions(const Models::ModifyWuyingServerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the properties of a workstation.
       *
       * @param request ModifyWuyingServerAttributeRequest
       * @return ModifyWuyingServerAttributeResponse
       */
      Models::ModifyWuyingServerAttributeResponse modifyWuyingServerAttribute(const Models::ModifyWuyingServerAttributeRequest &request);

      /**
       * @summary Queries the allocated users added to a delivery group by paging.
       *
       * @param request PageListAppInstanceGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PageListAppInstanceGroupUserResponse
       */
      Models::PageListAppInstanceGroupUserResponse pageListAppInstanceGroupUserWithOptions(const Models::PageListAppInstanceGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the allocated users added to a delivery group by paging.
       *
       * @param request PageListAppInstanceGroupUserRequest
       * @return PageListAppInstanceGroupUserResponse
       */
      Models::PageListAppInstanceGroupUserResponse pageListAppInstanceGroupUser(const Models::PageListAppInstanceGroupUserRequest &request);

      /**
       * @summary Removes model groups from a resource group.
       *
       * @description You can authorize model groups for resources that belong to Agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. These model groups serve as inference engines for Agents to execute tasks within the resource group.
       * When an Agent runtime has its own model group configured and the resource group it belongs to also has a model group configured, the model group bound to the resource group takes effect. The resource group setting has a higher priority than the Agent runtime setting.
       * When you remove the model group from the resource group to which an Agent runtime belongs, the model group configured on the Agent runtime itself automatically takes effect.
       * Before calling this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request RemoveResourceGroupModelTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveResourceGroupModelTemplateResponse
       */
      Models::RemoveResourceGroupModelTemplateResponse removeResourceGroupModelTemplateWithOptions(const Models::RemoveResourceGroupModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes model groups from a resource group.
       *
       * @description You can authorize model groups for resources that belong to Agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. These model groups serve as inference engines for Agents to execute tasks within the resource group.
       * When an Agent runtime has its own model group configured and the resource group it belongs to also has a model group configured, the model group bound to the resource group takes effect. The resource group setting has a higher priority than the Agent runtime setting.
       * When you remove the model group from the resource group to which an Agent runtime belongs, the model group configured on the Agent runtime itself automatically takes effect.
       * Before calling this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request RemoveResourceGroupModelTemplateRequest
       * @return RemoveResourceGroupModelTemplateResponse
       */
      Models::RemoveResourceGroupModelTemplateResponse removeResourceGroupModelTemplate(const Models::RemoveResourceGroupModelTemplateRequest &request);

      /**
       * @summary Removes a third-party channel configuration from the Agent runtime.
       *
       * @description You can call this operation to remove a specific third-party channel configuration from Agents such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. After the removal, the Agent cannot use the third-party channel for conversations.
       * Before calling this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request RemoveRuntimeChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveRuntimeChannelResponse
       */
      Models::RemoveRuntimeChannelResponse removeRuntimeChannelWithOptions(const Models::RemoveRuntimeChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a third-party channel configuration from the Agent runtime.
       *
       * @description You can call this operation to remove a specific third-party channel configuration from Agents such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. After the removal, the Agent cannot use the third-party channel for conversations.
       * Before calling this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request RemoveRuntimeChannelRequest
       * @return RemoveRuntimeChannelResponse
       */
      Models::RemoveRuntimeChannelResponse removeRuntimeChannel(const Models::RemoveRuntimeChannelRequest &request);

      /**
       * @summary Removes a model group from an Agent runtime resource.
       *
       * @description You can remove model groups from Agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. When an Agent runtime resource needs to switch to a different model group, call this operation first to remove the authorization relationship between the Agent runtime resource and the existing model group.
       * Make sure that you are familiar with the operations and usage of the WUYING Agent Management Center before calling this operation.
       *
       * @param request RemoveRuntimeModelTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveRuntimeModelTemplateResponse
       */
      Models::RemoveRuntimeModelTemplateResponse removeRuntimeModelTemplateWithOptions(const Models::RemoveRuntimeModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a model group from an Agent runtime resource.
       *
       * @description You can remove model groups from Agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. When an Agent runtime resource needs to switch to a different model group, call this operation first to remove the authorization relationship between the Agent runtime resource and the existing model group.
       * Make sure that you are familiar with the operations and usage of the WUYING Agent Management Center before calling this operation.
       *
       * @param request RemoveRuntimeModelTemplateRequest
       * @return RemoveRuntimeModelTemplateResponse
       */
      Models::RemoveRuntimeModelTemplateResponse removeRuntimeModelTemplate(const Models::RemoveRuntimeModelTemplateRequest &request);

      /**
       * @summary Renews a delivery group.
       *
       * @description Before you call this operation, make sure that you fully understand the [billing and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Workspace.
       * > Prerequisites:
       * > - The delivery group must be in the PUBLISHED state, and ChargeType must be set to PrePaid.
       *
       * @param tmpReq RenewAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewAppInstanceGroupResponse
       */
      Models::RenewAppInstanceGroupResponse renewAppInstanceGroupWithOptions(const Models::RenewAppInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a delivery group.
       *
       * @description Before you call this operation, make sure that you fully understand the [billing and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Workspace.
       * > Prerequisites:
       * > - The delivery group must be in the PUBLISHED state, and ChargeType must be set to PrePaid.
       *
       * @param request RenewAppInstanceGroupRequest
       * @return RenewAppInstanceGroupResponse
       */
      Models::RenewAppInstanceGroupResponse renewAppInstanceGroup(const Models::RenewAppInstanceGroupRequest &request);

      /**
       * @summary Renews a workstation.
       *
       * @param request RenewWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewWuyingServerResponse
       */
      Models::RenewWuyingServerResponse renewWuyingServerWithOptions(const Models::RenewWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a workstation.
       *
       * @param request RenewWuyingServerRequest
       * @return RenewWuyingServerResponse
       */
      Models::RenewWuyingServerResponse renewWuyingServer(const Models::RenewWuyingServerRequest &request);

      /**
       * @summary Restarts a workstation.
       *
       * @param request RestartWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartWuyingServerResponse
       */
      Models::RestartWuyingServerResponse restartWuyingServerWithOptions(const Models::RestartWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a workstation.
       *
       * @param request RestartWuyingServerRequest
       * @return RestartWuyingServerResponse
       */
      Models::RestartWuyingServerResponse restartWuyingServer(const Models::RestartWuyingServerRequest &request);

      /**
       * @summary Initiates a task to copy an image to other regions.
       *
       * @param request StartTaskForDistributeImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTaskForDistributeImageResponse
       */
      Models::StartTaskForDistributeImageResponse startTaskForDistributeImageWithOptions(const Models::StartTaskForDistributeImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a task to copy an image to other regions.
       *
       * @param request StartTaskForDistributeImageRequest
       * @return StartTaskForDistributeImageResponse
       */
      Models::StartTaskForDistributeImageResponse startTaskForDistributeImage(const Models::StartTaskForDistributeImageRequest &request);

      /**
       * @summary Starts a workstation.
       *
       * @param request StartWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartWuyingServerResponse
       */
      Models::StartWuyingServerResponse startWuyingServerWithOptions(const Models::StartWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a workstation.
       *
       * @param request StartWuyingServerRequest
       * @return StartWuyingServerResponse
       */
      Models::StartWuyingServerResponse startWuyingServer(const Models::StartWuyingServerRequest &request);

      /**
       * @summary Stops a workstation.
       *
       * @param request StopWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopWuyingServerResponse
       */
      Models::StopWuyingServerResponse stopWuyingServerWithOptions(const Models::StopWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a workstation.
       *
       * @param request StopWuyingServerRequest
       * @return StopWuyingServerResponse
       */
      Models::StopWuyingServerResponse stopWuyingServer(const Models::StopWuyingServerRequest &request);

      /**
       * @summary Creates and attaches tags to cloud resources. For resources that already have the specified tags, updates the tag values.
       *
       * @param request TagCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagCloudResourcesResponse
       */
      Models::TagCloudResourcesResponse tagCloudResourcesWithOptions(const Models::TagCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and attaches tags to cloud resources. For resources that already have the specified tags, updates the tag values.
       *
       * @param request TagCloudResourcesRequest
       * @return TagCloudResourcesResponse
       */
      Models::TagCloudResourcesResponse tagCloudResources(const Models::TagCloudResourcesRequest &request);

      /**
       * @summary Creates and binds tags to specified China Office (Chinese: Wuying) delivery groups in compliance with Alibaba Cloud tag specifications. If a tag key already exists on a resource, the tag value is updated to the value specified in the current request. Currently, only delivery group (`APPINSTANCEGROUP`) resource types are supported.
       *
       * @description ## Before you begin
       * When you use a RAM user or Security Token Service (STS) credential to call this operation, you must have the `appstreaming:TagResources` permission.
       * The resources to which you want to bind tags must belong to the current Alibaba Cloud account. **This operation currently supports only delivery group resources.** You can set `ResourceType` only to `APPINSTANCEGROUP`. You can call [ListAppInstanceGroup](~~ListAppInstanceGroup~~) to obtain delivery group IDs.
       * ## Tag rules
       * - In a single request, you can bind up to **20 tags** to up to **50 resources**. Duplicate resource IDs are automatically deduplicated.
       * - A tag key must be 1 to 128 characters in length. A tag value must be 0 to 256 characters in length. Both are case-sensitive.
       * - A tag key cannot start with `aliyun` or `acs:` (case-insensitive). Neither tag keys nor tag values can contain `http://` or `https://`.
       * - Tag keys in the same request must be unique. Otherwise, the error code `InvalidTag.Duplicated` is returned.
       * - Each tag key on a resource can correspond to only one tag value. If the tag key already exists on the resource, the tag value is updated to the new value.
       * - A maximum of 20 custom tags can be bound to a single resource. If this limit is exceeded, the error code `ResourceTag.CustomTagCountExceed` is returned.
       * ## Results
       * - **If any specified delivery group does not exist or does not belong to the current account, the entire request fails.** The error code `InvalidAppInstanceGroup.NotFound` is returned, and no tags are bound to any resource.
       * - If the binding succeeds, the response contains only `RequestId` and does not return tag details.
       * - If multiple resources are specified and only some of them fail to be bound, the operation still returns a success response without failure details. Call `ListTagResources` to verify the binding results. If only one resource is specified and the binding fails, the operation returns the corresponding error code.
       * ## Call sequence
       * 1. Call [ListAppInstanceGroup](~~ListAppInstanceGroup~~) to obtain the IDs of the delivery groups to which you want to add tags.
       * 2. Call this operation with `ResourceType=APPINSTANCEGROUP`, `ResourceId.N`, and `Tag.N.Key`/`Tag.N.Value`.
       * 3. To view the tags bound to resources, call `ListTagResources`. To unbind tags, call `UntagResources`.
       * The masked identifiers in the examples are used to demonstrate the format. Replace them with your actual identifiers when you call the operation.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and binds tags to specified China Office (Chinese: Wuying) delivery groups in compliance with Alibaba Cloud tag specifications. If a tag key already exists on a resource, the tag value is updated to the value specified in the current request. Currently, only delivery group (`APPINSTANCEGROUP`) resource types are supported.
       *
       * @description ## Before you begin
       * When you use a RAM user or Security Token Service (STS) credential to call this operation, you must have the `appstreaming:TagResources` permission.
       * The resources to which you want to bind tags must belong to the current Alibaba Cloud account. **This operation currently supports only delivery group resources.** You can set `ResourceType` only to `APPINSTANCEGROUP`. You can call [ListAppInstanceGroup](~~ListAppInstanceGroup~~) to obtain delivery group IDs.
       * ## Tag rules
       * - In a single request, you can bind up to **20 tags** to up to **50 resources**. Duplicate resource IDs are automatically deduplicated.
       * - A tag key must be 1 to 128 characters in length. A tag value must be 0 to 256 characters in length. Both are case-sensitive.
       * - A tag key cannot start with `aliyun` or `acs:` (case-insensitive). Neither tag keys nor tag values can contain `http://` or `https://`.
       * - Tag keys in the same request must be unique. Otherwise, the error code `InvalidTag.Duplicated` is returned.
       * - Each tag key on a resource can correspond to only one tag value. If the tag key already exists on the resource, the tag value is updated to the new value.
       * - A maximum of 20 custom tags can be bound to a single resource. If this limit is exceeded, the error code `ResourceTag.CustomTagCountExceed` is returned.
       * ## Results
       * - **If any specified delivery group does not exist or does not belong to the current account, the entire request fails.** The error code `InvalidAppInstanceGroup.NotFound` is returned, and no tags are bound to any resource.
       * - If the binding succeeds, the response contains only `RequestId` and does not return tag details.
       * - If multiple resources are specified and only some of them fail to be bound, the operation still returns a success response without failure details. Call `ListTagResources` to verify the binding results. If only one resource is specified and the binding fails, the operation returns the corresponding error code.
       * ## Call sequence
       * 1. Call [ListAppInstanceGroup](~~ListAppInstanceGroup~~) to obtain the IDs of the delivery groups to which you want to add tags.
       * 2. Call this operation with `ResourceType=APPINSTANCEGROUP`, `ResourceId.N`, and `Tag.N.Key`/`Tag.N.Value`.
       * 3. To view the tags bound to resources, call `ListTagResources`. To unbind tags, call `UntagResources`.
       * The masked identifiers in the examples are used to demonstrate the format. Replace them with your actual identifiers when you call the operation.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Unbinds secondary private IP addresses from a development host.
       *
       * @param request UnassignWuyingServerPrivateAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassignWuyingServerPrivateAddressesResponse
       */
      Models::UnassignWuyingServerPrivateAddressesResponse unassignWuyingServerPrivateAddressesWithOptions(const Models::UnassignWuyingServerPrivateAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds secondary private IP addresses from a development host.
       *
       * @param request UnassignWuyingServerPrivateAddressesRequest
       * @return UnassignWuyingServerPrivateAddressesResponse
       */
      Models::UnassignWuyingServerPrivateAddressesResponse unassignWuyingServerPrivateAddresses(const Models::UnassignWuyingServerPrivateAddressesRequest &request);

      /**
       * @summary Unbinds a user from a session.
       *
       * @param request UnbindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindResponse
       */
      Models::UnbindResponse unbindWithOptions(const Models::UnbindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a user from a session.
       *
       * @param request UnbindRequest
       * @return UnbindResponse
       */
      Models::UnbindResponse unbind(const Models::UnbindRequest &request);

      /**
       * @summary Unbinds tags from cloud resources in a unified manner.
       *
       * @param request UntagCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagCloudResourcesResponse
       */
      Models::UntagCloudResourcesResponse untagCloudResourcesWithOptions(const Models::UntagCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds tags from cloud resources in a unified manner.
       *
       * @param request UntagCloudResourcesRequest
       * @return UntagCloudResourcesResponse
       */
      Models::UntagCloudResourcesResponse untagCloudResources(const Models::UntagCloudResourcesRequest &request);

      /**
       * @summary Unbinds tags from specified Wuying delivery groups in compliance with Alibaba Cloud tagging standards. You can unbind specific tags by tag key or unbind all custom tags from a resource at once by setting `All=true` without specifying tag keys. Currently, only the delivery group (`APPINSTANCEGROUP`) resource type is supported.
       *
       * @description ## Before you begin
       * When calling this operation with a RAM user or STS credential, the `appstreaming:UntagResources` permission is required.
       * The resources from which you want to unbind tags must belong to the current Alibaba Cloud account. **This operation currently supports only delivery group resources.** You can set `ResourceType` only to `APPINSTANCEGROUP`. You can obtain delivery group IDs by calling [ListAppInstanceGroup](~~ListAppInstanceGroup~~), and query tags that are bound to a resource by calling [ListTagResources](~~ListTagResources~~).
       * ## Parameter description
       * - You can unbind tags from up to **50 resources** in a single request. Duplicate resource IDs are automatically deduplicated.
       * - **Specify at least one of `TagKey.N` and `All`.** If neither is specified, or if `TagKey.N` is not specified and `All` is set to `false`, the error code `InvalidParameter.TagKeyListOrAll` is returned.
       *   - If `TagKey.N` is specified: only the tags that correspond to the specified tag keys are unbound. You can specify up to 20 tag keys at a time. The `All` parameter is ignored.
       *   - If `TagKey.N` is not specified and `All=true`: all custom tags on the resource are unbound, including Wuying system tags that start with `System/` and were attached by calling [TagResources](~~TagResources~~).
       * - If a specified tag key does not exist on the resource, the tag key is skipped and no error is returned.
       * - Tag keys that start with `System/` are Wuying system tags. Only `System/Scheduler/GRAYSCALE` and `System/Scheduler/STOP_NEW_USER_CONNECTION` are supported. If you specify other tag keys that start with `System/`, the error code `InvalidTagPolicy.KeyInvalid` or `InvalidTag.SystemKeyNotAllow` is returned.
       * ## Execution results
       * - **If any specified delivery group does not exist or does not belong to the current account, the entire request fails** with the error code `InvalidAppInstanceGroup.NotFound`, and no tags are unbound from any resource.
       * - On success, the response contains only `RequestId` and does not return tag details.
       * - When multiple resources are specified and only some fail to have tags unbound, the operation still returns success and the response does not contain failure details. Call [ListTagResources](~~ListTagResources~~) to verify the unbinding results. When only one resource is specified and the unbinding fails, the operation returns the corresponding error code directly.
       * ## Call sequence
       * 1. Call [ListAppInstanceGroup](~~ListAppInstanceGroup~~) to obtain delivery group IDs. To check which tag keys are bound to a resource, call [ListTagResources](~~ListTagResources~~).
       * 2. Call this operation with `ResourceType=APPINSTANCEGROUP` and `ResourceId.N`, and specify `TagKey.N` or `All=true` to indicate the tags to unbind.
       * 3. To rebind tags, call [TagResources](~~TagResources~~).
       * The masked identifiers in the examples are for format demonstration purposes only. Replace them with your actual identifiers when making calls.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds tags from specified Wuying delivery groups in compliance with Alibaba Cloud tagging standards. You can unbind specific tags by tag key or unbind all custom tags from a resource at once by setting `All=true` without specifying tag keys. Currently, only the delivery group (`APPINSTANCEGROUP`) resource type is supported.
       *
       * @description ## Before you begin
       * When calling this operation with a RAM user or STS credential, the `appstreaming:UntagResources` permission is required.
       * The resources from which you want to unbind tags must belong to the current Alibaba Cloud account. **This operation currently supports only delivery group resources.** You can set `ResourceType` only to `APPINSTANCEGROUP`. You can obtain delivery group IDs by calling [ListAppInstanceGroup](~~ListAppInstanceGroup~~), and query tags that are bound to a resource by calling [ListTagResources](~~ListTagResources~~).
       * ## Parameter description
       * - You can unbind tags from up to **50 resources** in a single request. Duplicate resource IDs are automatically deduplicated.
       * - **Specify at least one of `TagKey.N` and `All`.** If neither is specified, or if `TagKey.N` is not specified and `All` is set to `false`, the error code `InvalidParameter.TagKeyListOrAll` is returned.
       *   - If `TagKey.N` is specified: only the tags that correspond to the specified tag keys are unbound. You can specify up to 20 tag keys at a time. The `All` parameter is ignored.
       *   - If `TagKey.N` is not specified and `All=true`: all custom tags on the resource are unbound, including Wuying system tags that start with `System/` and were attached by calling [TagResources](~~TagResources~~).
       * - If a specified tag key does not exist on the resource, the tag key is skipped and no error is returned.
       * - Tag keys that start with `System/` are Wuying system tags. Only `System/Scheduler/GRAYSCALE` and `System/Scheduler/STOP_NEW_USER_CONNECTION` are supported. If you specify other tag keys that start with `System/`, the error code `InvalidTagPolicy.KeyInvalid` or `InvalidTag.SystemKeyNotAllow` is returned.
       * ## Execution results
       * - **If any specified delivery group does not exist or does not belong to the current account, the entire request fails** with the error code `InvalidAppInstanceGroup.NotFound`, and no tags are unbound from any resource.
       * - On success, the response contains only `RequestId` and does not return tag details.
       * - When multiple resources are specified and only some fail to have tags unbound, the operation still returns success and the response does not contain failure details. Call [ListTagResources](~~ListTagResources~~) to verify the unbinding results. When only one resource is specified and the unbinding fails, the operation returns the corresponding error code directly.
       * ## Call sequence
       * 1. Call [ListAppInstanceGroup](~~ListAppInstanceGroup~~) to obtain delivery group IDs. To check which tag keys are bound to a resource, call [ListTagResources](~~ListTagResources~~).
       * 2. Call this operation with `ResourceType=APPINSTANCEGROUP` and `ResourceId.N`, and specify `TagKey.N` or `All=true` to indicate the tags to unbind.
       * 3. To rebind tags, call [TagResources](~~TagResources~~).
       * The masked identifiers in the examples are for format demonstration purposes only. Replace them with your actual identifiers when making calls.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the image of a delivery group.
       *
       * @description >Warning: After the image update starts, sessions of end users who are accessing cloud applications will be disconnected. Proceed with caution to avoid data loss for end users.
       * > Before calling this API, the delivery group must be in the PUBLISHED, DEPLOYED, or MAINTAIN_FAILED state. You can call GetAppInstanceGroup to query the current state of the delivery group.
       * > After the update is published, you typically need to wait about 2 minutes for the changes to take effect on the client.
       *
       * @param request UpdateAppInstanceGroupImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppInstanceGroupImageResponse
       */
      Models::UpdateAppInstanceGroupImageResponse updateAppInstanceGroupImageWithOptions(const Models::UpdateAppInstanceGroupImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the image of a delivery group.
       *
       * @description >Warning: After the image update starts, sessions of end users who are accessing cloud applications will be disconnected. Proceed with caution to avoid data loss for end users.
       * > Before calling this API, the delivery group must be in the PUBLISHED, DEPLOYED, or MAINTAIN_FAILED state. You can call GetAppInstanceGroup to query the current state of the delivery group.
       * > After the update is published, you typically need to wait about 2 minutes for the changes to take effect on the client.
       *
       * @param request UpdateAppInstanceGroupImageRequest
       * @return UpdateAppInstanceGroupImageResponse
       */
      Models::UpdateAppInstanceGroupImageResponse updateAppInstanceGroupImage(const Models::UpdateAppInstanceGroupImageRequest &request);

      /**
       * @summary Updates a model provider template.
       *
       * @description You can update a model provider template that has been created in the WUYING Agent Management Center, including the template name, description, model service connection configuration, and WUYING security proxy switch. Partial field updates are supported. You only need to pass in the fields that you want to modify.
       * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param tmpReq UpdateModelProviderTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelProviderTemplateResponse
       */
      Models::UpdateModelProviderTemplateResponse updateModelProviderTemplateWithOptions(const Models::UpdateModelProviderTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a model provider template.
       *
       * @description You can update a model provider template that has been created in the WUYING Agent Management Center, including the template name, description, model service connection configuration, and WUYING security proxy switch. Partial field updates are supported. You only need to pass in the fields that you want to modify.
       * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request UpdateModelProviderTemplateRequest
       * @return UpdateModelProviderTemplateResponse
       */
      Models::UpdateModelProviderTemplateResponse updateModelProviderTemplate(const Models::UpdateModelProviderTemplateRequest &request);

      /**
       * @summary Updates a model template.
       *
       * @description You can update a model group that has been created in the Wuying Agent Management Center, including the group name, description, and model configuration information. You can modify the default model of a model group by updating the Config field. The updated configuration automatically takes effect on associated cloud desktops.
       * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request UpdateModelTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelTemplateResponse
       */
      Models::UpdateModelTemplateResponse updateModelTemplateWithOptions(const Models::UpdateModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a model template.
       *
       * @description You can update a model group that has been created in the Wuying Agent Management Center, including the group name, description, and model configuration information. You can modify the default model of a model group by updating the Config field. The updated configuration automatically takes effect on associated cloud desktops.
       * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request UpdateModelTemplateRequest
       * @return UpdateModelTemplateResponse
       */
      Models::UpdateModelTemplateResponse updateModelTemplate(const Models::UpdateModelTemplateRequest &request);

      /**
       * @summary Updates a workstation image.
       *
       * @param request UpdateWuyingServerImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWuyingServerImageResponse
       */
      Models::UpdateWuyingServerImageResponse updateWuyingServerImageWithOptions(const Models::UpdateWuyingServerImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a workstation image.
       *
       * @param request UpdateWuyingServerImageRequest
       * @return UpdateWuyingServerImageResponse
       */
      Models::UpdateWuyingServerImageResponse updateWuyingServerImage(const Models::UpdateWuyingServerImageRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
