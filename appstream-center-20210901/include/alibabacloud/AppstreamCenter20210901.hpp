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
       * @summary Adds or removes authorized users for a specified application deployed in an app instance group. Only authorized users can access the application.
       *
       * @description ## Operation description
       * This operation manages user authorization for an app instance group at the application level. The authorization result applies only to the application specified by AppId and does not affect the authorization relationships of other applications in the app instance group. To authorize users for the entire app instance group, call the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation.
       * ## Before you begin
       * - The app instance group is created, and **the application specified by AppId is deployed in the image used by the app instance group**. Otherwise, the error code `InvalidAppId.NotFound` is returned.
       * - The app instance group **is not added to an active app instance group set**. App instance groups added to a set cannot be authorized individually and must be authorized through the set. Otherwise, the error code `InvalidAppInstanceGroup.AuthorizeBlockedBySet` is returned.
       * - If the workspace to which the app instance group belongs is an AD workspace, **UserMeta must be specified**, the value of UserMeta.Type must be ad, and the value of UserMeta.AdDomain must be the same as the AD domain bound to the workspace.
       * - If the app instance group is already authorized through a user group and mixed authorization of users and user groups is not supported, you cannot authorize individual users. Otherwise, the error code `AuthAppInstanceGroup.MixNotSupported` is returned.
       * ## Parameter description
       * - **You must specify at least one of AuthorizeUserIds and UnAuthorizeUserIds**, or specify both. If both are empty, the system does not change any authorization relationships when you invoke this operation.
       * - When adding authorization, the sum of the current number of authorized users for the application and the number of newly added users cannot exceed the authorized user quota for the application. If the quota is exceeded, the error code `ExceedAppAuthUserQuota` is returned. Removing authorization is not subject to the quota limit.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](https://help.aliyun.com/document_detail/428506.html) or [GetAppInstanceGroup](https://help.aliyun.com/document_detail/600836.html) operation to obtain the app instance group ID (AppInstanceGroupId) and the application IDs of the applications deployed in the app instance group (AppId in the Apps list).
       * 2. Call the [DescribeUsers](https://help.aliyun.com/document_detail/436936.html) operation to obtain the usernames of the users to be authorized or unauthorized.
       * 3. Call this operation to complete the authorization change.
       * > After the authorization is changed, the selected users will receive a notification email. It generally takes about 2 minutes for the changes to take effect on the terminal.
       *
       * @param tmpReq AuthorizeUsersForAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeUsersForAppResponse
       */
      Models::AuthorizeUsersForAppResponse authorizeUsersForAppWithOptions(const Models::AuthorizeUsersForAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or removes authorized users for a specified application deployed in an app instance group. Only authorized users can access the application.
       *
       * @description ## Operation description
       * This operation manages user authorization for an app instance group at the application level. The authorization result applies only to the application specified by AppId and does not affect the authorization relationships of other applications in the app instance group. To authorize users for the entire app instance group, call the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation.
       * ## Before you begin
       * - The app instance group is created, and **the application specified by AppId is deployed in the image used by the app instance group**. Otherwise, the error code `InvalidAppId.NotFound` is returned.
       * - The app instance group **is not added to an active app instance group set**. App instance groups added to a set cannot be authorized individually and must be authorized through the set. Otherwise, the error code `InvalidAppInstanceGroup.AuthorizeBlockedBySet` is returned.
       * - If the workspace to which the app instance group belongs is an AD workspace, **UserMeta must be specified**, the value of UserMeta.Type must be ad, and the value of UserMeta.AdDomain must be the same as the AD domain bound to the workspace.
       * - If the app instance group is already authorized through a user group and mixed authorization of users and user groups is not supported, you cannot authorize individual users. Otherwise, the error code `AuthAppInstanceGroup.MixNotSupported` is returned.
       * ## Parameter description
       * - **You must specify at least one of AuthorizeUserIds and UnAuthorizeUserIds**, or specify both. If both are empty, the system does not change any authorization relationships when you invoke this operation.
       * - When adding authorization, the sum of the current number of authorized users for the application and the number of newly added users cannot exceed the authorized user quota for the application. If the quota is exceeded, the error code `ExceedAppAuthUserQuota` is returned. Removing authorization is not subject to the quota limit.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](https://help.aliyun.com/document_detail/428506.html) or [GetAppInstanceGroup](https://help.aliyun.com/document_detail/600836.html) operation to obtain the app instance group ID (AppInstanceGroupId) and the application IDs of the applications deployed in the app instance group (AppId in the Apps list).
       * 2. Call the [DescribeUsers](https://help.aliyun.com/document_detail/436936.html) operation to obtain the usernames of the users to be authorized or unauthorized.
       * 3. Call this operation to complete the authorization change.
       * > After the authorization is changed, the selected users will receive a notification email. It generally takes about 2 minutes for the changes to take effect on the terminal.
       *
       * @param request AuthorizeUsersForAppRequest
       * @return AuthorizeUsersForAppResponse
       */
      Models::AuthorizeUsersForAppResponse authorizeUsersForApp(const Models::AuthorizeUsersForAppRequest &request);

      /**
       * @summary Creates multiple LLM templates.
       *
       * @description You can create multiple model templates under a model provider template in the Wuying Agent Management Center. You can add multiple models at a time and specify one of them as the default model. Existing models are automatically skipped to prevent duplicate model creation.
       * Make sure that you are fully familiar with the operations and usage of the Wuying Agent Management Center before you call this operation.
       *
       * @param request BatchCreateLlmTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateLlmTemplatesResponse
       */
      Models::BatchCreateLlmTemplatesResponse batchCreateLlmTemplatesWithOptions(const Models::BatchCreateLlmTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates multiple LLM templates.
       *
       * @description You can create multiple model templates under a model provider template in the Wuying Agent Management Center. You can add multiple models at a time and specify one of them as the default model. Existing models are automatically skipped to prevent duplicate model creation.
       * Make sure that you are fully familiar with the operations and usage of the Wuying Agent Management Center before you call this operation.
       *
       * @param request BatchCreateLlmTemplatesRequest
       * @return BatchCreateLlmTemplatesResponse
       */
      Models::BatchCreateLlmTemplatesResponse batchCreateLlmTemplates(const Models::BatchCreateLlmTemplatesRequest &request);

      /**
       * @summary Creates a custom image based on an existing image and starts an image creation task.
       *
       * @description Before you call this operation, make sure that the parent image is available and an available image distribution record exists in the region where the image is created.
       * 1. Call ListImage to obtain the parent image ID.
       * 2. Specify the creation mode, disk capacity, and resource type, and then call this operation.
       * 3. Save the returned ImageId, VersionId, and TaskId.
       * 4. Call GetTask to query the creation progress. **A successful request does not indicate that the image creation is complete.**
       *
       * @param tmpReq BuilderImageByParentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BuilderImageByParentResponse
       */
      Models::BuilderImageByParentResponse builderImageByParentWithOptions(const Models::BuilderImageByParentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom image based on an existing image and starts an image creation task.
       *
       * @description Before you call this operation, make sure that the parent image is available and an available image distribution record exists in the region where the image is created.
       * 1. Call ListImage to obtain the parent image ID.
       * 2. Specify the creation mode, disk capacity, and resource type, and then call this operation.
       * 3. Save the returned ImageId, VersionId, and TaskId.
       * 4. Call GetTask to query the creation progress. **A successful request does not indicate that the image creation is complete.**
       *
       * @param request BuilderImageByParentRequest
       * @return BuilderImageByParentResponse
       */
      Models::BuilderImageByParentResponse builderImageByParent(const Models::BuilderImageByParentRequest &request);

      /**
       * @summary Configures the model group for a resource group.
       *
       * @description You can assign a model group to the resource group that contains agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. The assigned model group serves as the inference engine for agents within the resource group to execute tasks.
       * If an agent runtime has a model group configured and its resource group also has a model group configured, the model group assigned to the resource group takes effect. The resource group settings take precedence over the agent runtime settings.
       * **Before you begin**
       * - The ResourceGroupId parameter in this operation specifically refers to the WUYING Enterprise Edition resource group ID, which starts with rg-. This resource group is managed by the WUYING Enterprise Edition management and control service. It must be created before you deploy agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent. You do not need to and cannot create it by using the API of this service. Although the account-level resource group ID in Alibaba Cloud Resource Manager also starts with rg-, it does not belong to WUYING resource groups and cannot be passed as this parameter.
       * - Before you call this operation, obtain an existing WUYING resource group ID by using one of the following methods:
       *   - Call the DescribeResourceGroups operation of WUYING Workspace eds-user (API version 2021-03-08). The ResourceGroup[].ResourceGroupId field in the response is the resource group ID required for this parameter. You can set the ResourceClassification request parameter to DesktopAgent and filter agent resource groups by AgentType (JVSClaw or HermesAgent). The AliyunResourceGroupId field in the response is the resource group ID of Alibaba Cloud Resource Manager and cannot be used in this operation.
       *   - Call the GetRuntimeModelConfig operation of this service. The Data.ResourceGroupId field in the response is the WUYING resource group ID to which the specified agent runtime currently belongs. If the runtime does not belong to any resource group, this field is null.
       *   - When you call the ListDesktopAgentRuntime operation of this service, you can use the ResourceGroupId request parameter to filter agent runtimes by resource group to confirm which runtimes are included in a specific resource group.
       * - The ListModelTemplateResourceGroup operation returns only the resource groups that have been authorized for a specified model group. It cannot be used to discover resource groups that have not been authorized for any model group.
       * Make sure that you are fully familiar with the operations and usage of the WUYING Agent Management Center before you use this operation.
       *
       * @param request ConfigResourceGroupModelTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigResourceGroupModelTemplateResponse
       */
      Models::ConfigResourceGroupModelTemplateResponse configResourceGroupModelTemplateWithOptions(const Models::ConfigResourceGroupModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the model group for a resource group.
       *
       * @description You can assign a model group to the resource group that contains agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. The assigned model group serves as the inference engine for agents within the resource group to execute tasks.
       * If an agent runtime has a model group configured and its resource group also has a model group configured, the model group assigned to the resource group takes effect. The resource group settings take precedence over the agent runtime settings.
       * **Before you begin**
       * - The ResourceGroupId parameter in this operation specifically refers to the WUYING Enterprise Edition resource group ID, which starts with rg-. This resource group is managed by the WUYING Enterprise Edition management and control service. It must be created before you deploy agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent. You do not need to and cannot create it by using the API of this service. Although the account-level resource group ID in Alibaba Cloud Resource Manager also starts with rg-, it does not belong to WUYING resource groups and cannot be passed as this parameter.
       * - Before you call this operation, obtain an existing WUYING resource group ID by using one of the following methods:
       *   - Call the DescribeResourceGroups operation of WUYING Workspace eds-user (API version 2021-03-08). The ResourceGroup[].ResourceGroupId field in the response is the resource group ID required for this parameter. You can set the ResourceClassification request parameter to DesktopAgent and filter agent resource groups by AgentType (JVSClaw or HermesAgent). The AliyunResourceGroupId field in the response is the resource group ID of Alibaba Cloud Resource Manager and cannot be used in this operation.
       *   - Call the GetRuntimeModelConfig operation of this service. The Data.ResourceGroupId field in the response is the WUYING resource group ID to which the specified agent runtime currently belongs. If the runtime does not belong to any resource group, this field is null.
       *   - When you call the ListDesktopAgentRuntime operation of this service, you can use the ResourceGroupId request parameter to filter agent runtimes by resource group to confirm which runtimes are included in a specific resource group.
       * - The ListModelTemplateResourceGroup operation returns only the resource groups that have been authorized for a specified model group. It cannot be used to discover resource groups that have not been authorized for any model group.
       * Make sure that you are fully familiar with the operations and usage of the WUYING Agent Management Center before you use this operation.
       *
       * @param request ConfigResourceGroupModelTemplateRequest
       * @return ConfigResourceGroupModelTemplateResponse
       */
      Models::ConfigResourceGroupModelTemplateResponse configResourceGroupModelTemplate(const Models::ConfigResourceGroupModelTemplateRequest &request);

      /**
       * @summary Configures third-party channels for agent runtimes.
       *
       * @description You can configure third-party channels for agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. These channels serve as extended agent communication methods in addition to the AgentIM channel.
       * Make sure that you are fully familiar with the operations and usage of the Wuying Agent Management Center before you call this operation.
       *
       * @param request ConfigRuntimeChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigRuntimeChannelResponse
       */
      Models::ConfigRuntimeChannelResponse configRuntimeChannelWithOptions(const Models::ConfigRuntimeChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures third-party channels for agent runtimes.
       *
       * @description You can configure third-party channels for agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. These channels serve as extended agent communication methods in addition to the AgentIM channel.
       * Make sure that you are fully familiar with the operations and usage of the Wuying Agent Management Center before you call this operation.
       *
       * @param request ConfigRuntimeChannelRequest
       * @return ConfigRuntimeChannelResponse
       */
      Models::ConfigRuntimeChannelResponse configRuntimeChannel(const Models::ConfigRuntimeChannelRequest &request);

      /**
       * @summary Configures the model group for agent runtime resources.
       *
       * @description You can authorize model groups for agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center to serve as inference engines for agent task execution.
       * Before you call this operation, make sure that you are fully familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request ConfigRuntimeModelTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigRuntimeModelTemplateResponse
       */
      Models::ConfigRuntimeModelTemplateResponse configRuntimeModelTemplateWithOptions(const Models::ConfigRuntimeModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the model group for agent runtime resources.
       *
       * @description You can authorize model groups for agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center to serve as inference engines for agent task execution.
       * Before you call this operation, make sure that you are fully familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request ConfigRuntimeModelTemplateRequest
       * @return ConfigRuntimeModelTemplateResponse
       */
      Models::ConfigRuntimeModelTemplateResponse configRuntimeModelTemplate(const Models::ConfigRuntimeModelTemplateRequest &request);

      /**
       * @summary Creates an application and binds it to a specified image version.
       *
       * @description Only custom images and community images that can be managed by the current account are supported. If VersionId is omitted, the current active version of the image is used. If specified, the version must belong to the image specified by ImageId.
       * Call ListImage to select an image first. After the application is created, save the returned AppId, AppVersionId, ImageId, and VersionId. To dissociate the application, call UnbindApp.
       *
       * @param request CreateAndBindAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAndBindAppResponse
       */
      Models::CreateAndBindAppResponse createAndBindAppWithOptions(const Models::CreateAndBindAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application and binds it to a specified image version.
       *
       * @description Only custom images and community images that can be managed by the current account are supported. If VersionId is omitted, the current active version of the image is used. If specified, the version must belong to the image specified by ImageId.
       * Call ListImage to select an image first. After the application is created, save the returned AppId, AppVersionId, ImageId, and VersionId. To dissociate the application, call UnbindApp.
       *
       * @param request CreateAndBindAppRequest
       * @return CreateAndBindAppResponse
       */
      Models::CreateAndBindAppResponse createAndBindApp(const Models::CreateAndBindAppRequest &request);

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
       * @summary Creates a cloud browser group billed by monthly active users (MAUs).
       *
       * @description ## Before you begin
       * - Prepare available office networks, images, and specifications in the target business region, and ensure that your account has the corresponding browser configurations and resource quotas.
       * - Specify CloudBrowserName and BizRegionId. You must set OsType to Windows.
       * - The authorized users must be created in advance and match the account type. The authorized user groups must belong to the current account and match the account type of the office network.
       * - **Users and UserGroupIds cannot be specified at the same time.**
       * ## MAU billing parameters
       * - Set ChargeType to PostPaid.
       * - **You must explicitly set SubPayType to mau. Omitting this parameter does not enable MAU billing.**
       * - Set ChargeResourceMode to AppInstance.
       * - You do not need to specify Period, PeriodUnit, AppPackageType, AutoPay, AutoRenew, or NodePool.
       * ## Post-processing
       * **A successful API response does not indicate that the browser resources are ready.** After creation, query the status of the browser group and use it only after confirming that it is connectable.
       * This operation creates a new cloud browser group. You do not need to create a delivery group in advance.
       * ## Example descriptions
       * Field examples demonstrate how to specify parameters. Replace resource identifiers with actual values under your current account. Capacity examples do not represent default values or upper limits.
       * An example value of - indicates that the parameter is not required. When calling the API, omit the corresponding parameter instead of passing the - character.
       *
       * @param tmpReq CreateBrowserInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBrowserInstanceGroupResponse
       */
      Models::CreateBrowserInstanceGroupResponse createBrowserInstanceGroupWithOptions(const Models::CreateBrowserInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cloud browser group billed by monthly active users (MAUs).
       *
       * @description ## Before you begin
       * - Prepare available office networks, images, and specifications in the target business region, and ensure that your account has the corresponding browser configurations and resource quotas.
       * - Specify CloudBrowserName and BizRegionId. You must set OsType to Windows.
       * - The authorized users must be created in advance and match the account type. The authorized user groups must belong to the current account and match the account type of the office network.
       * - **Users and UserGroupIds cannot be specified at the same time.**
       * ## MAU billing parameters
       * - Set ChargeType to PostPaid.
       * - **You must explicitly set SubPayType to mau. Omitting this parameter does not enable MAU billing.**
       * - Set ChargeResourceMode to AppInstance.
       * - You do not need to specify Period, PeriodUnit, AppPackageType, AutoPay, AutoRenew, or NodePool.
       * ## Post-processing
       * **A successful API response does not indicate that the browser resources are ready.** After creation, query the status of the browser group and use it only after confirming that it is connectable.
       * This operation creates a new cloud browser group. You do not need to create a delivery group in advance.
       * ## Example descriptions
       * Field examples demonstrate how to specify parameters. Replace resource identifiers with actual values under your current account. Capacity examples do not represent default values or upper limits.
       * An example value of - indicates that the parameter is not required. When calling the API, omit the corresponding parameter instead of passing the - character.
       *
       * @param request CreateBrowserInstanceGroupRequest
       * @return CreateBrowserInstanceGroupResponse
       */
      Models::CreateBrowserInstanceGroupResponse createBrowserInstanceGroup(const Models::CreateBrowserInstanceGroupRequest &request);

      /**
       * @summary Creates an asynchronous export task to export the WUYING server list, user usage report, cloud browser bookmarks, or URL whitelist.
       *
       * @description Creates an export task and returns the task ID and initial status. The exported file is not returned synchronously.
       * After the task is created, save the TaskId and call DescribeExportTasks to query the task status and progress. We recommend a polling interval of 5 to 10 seconds. If the status is FINISHED, use the DownloadUrl in the latest query result to download the XLSX file. If the status is FAILED, check the ErrorMsg and stop polling.
       * The task is valid for 24 hours after creation. The download URL has an independent signature validity period of up to 1 hour, which does not exceed the remaining validity period of the task. Query the latest URL before downloading. You cannot obtain a valid download URL after the task expires.
       * The WUYING server list export only accepts the filter fields listed in QueryParamJson. Pagination is controlled by the server, and a single task can export up to 100,000 records. The cloud browser bookmarks and URL whitelist exports retrieve the complete list of the target delivery group, which is not affected by the list search terms or the current page. The ownership and product type of the delivery group are verified before execution. Data is read in pages during execution, and no consistent snapshot is provided. A successful creation does not guarantee that subsequent verification, query, or file generation will succeed.
       *
       * @param request CreateExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExportTaskResponse
       */
      Models::CreateExportTaskResponse createExportTaskWithOptions(const Models::CreateExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an asynchronous export task to export the WUYING server list, user usage report, cloud browser bookmarks, or URL whitelist.
       *
       * @description Creates an export task and returns the task ID and initial status. The exported file is not returned synchronously.
       * After the task is created, save the TaskId and call DescribeExportTasks to query the task status and progress. We recommend a polling interval of 5 to 10 seconds. If the status is FINISHED, use the DownloadUrl in the latest query result to download the XLSX file. If the status is FAILED, check the ErrorMsg and stop polling.
       * The task is valid for 24 hours after creation. The download URL has an independent signature validity period of up to 1 hour, which does not exceed the remaining validity period of the task. Query the latest URL before downloading. You cannot obtain a valid download URL after the task expires.
       * The WUYING server list export only accepts the filter fields listed in QueryParamJson. Pagination is controlled by the server, and a single task can export up to 100,000 records. The cloud browser bookmarks and URL whitelist exports retrieve the complete list of the target delivery group, which is not affected by the list search terms or the current page. The ownership and product type of the delivery group are verified before execution. Data is read in pages during execution, and no consistent snapshot is provided. A successful creation does not guarantee that subsequent verification, query, or file generation will succeed.
       *
       * @param request CreateExportTaskRequest
       * @return CreateExportTaskResponse
       */
      Models::CreateExportTaskResponse createExportTask(const Models::CreateExportTaskRequest &request);

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
       * @summary Creates a new image by debugging a delivery group.
       *
       * @param request CreateImageFromAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageFromAppInstanceGroupResponse
       */
      Models::CreateImageFromAppInstanceGroupResponse createImageFromAppInstanceGroupWithOptions(const Models::CreateImageFromAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new image by debugging a delivery group.
       *
       * @param request CreateImageFromAppInstanceGroupRequest
       * @return CreateImageFromAppInstanceGroupResponse
       */
      Models::CreateImageFromAppInstanceGroupResponse createImageFromAppInstanceGroup(const Models::CreateImageFromAppInstanceGroupRequest &request);

      /**
       * @summary Creates a model provider template for model creation.
       *
       * @description You can create a model provider template for model creation under the model templates in the Wuying Agent Management Center to configure the connection information and keys for model services (such as Alibaba Cloud Bailian, Token Plan, and Moonshot AI) that can be invoked by agents. The created model provider template is automatically associated with the specified model template.
       * Make sure that you fully understand the operations and usage of the Wuying Agent Management Center before you call this operation.
       *
       * @param request CreateModelProviderTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelProviderTemplateResponse
       */
      Models::CreateModelProviderTemplateResponse createModelProviderTemplateWithOptions(const Models::CreateModelProviderTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model provider template for model creation.
       *
       * @description You can create a model provider template for model creation under the model templates in the Wuying Agent Management Center to configure the connection information and keys for model services (such as Alibaba Cloud Bailian, Token Plan, and Moonshot AI) that can be invoked by agents. The created model provider template is automatically associated with the specified model template.
       * Make sure that you fully understand the operations and usage of the Wuying Agent Management Center before you call this operation.
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
       * @summary Deletes a specified application adaptation, or dissociates the adaptation from a specified image version.
       *
       * @description **Confirm the deletion scope first.**
       * - If both ImageId and VersionId are specified: only the association between the adaptation and the specified image version is dissociated.
       * - If ImageId and VersionId are not both specified: the adaptation deletion process starts. The adaptation cannot be deleted if it is still referenced by multiple images. If the application still has other adaptations, the application cannot be deleted along with it.
       * **AdaptorId, AppVersionId, and AppId must be provided together and correspond to the same application adaptation.** Verify these identifiers by querying the application and image first.
       *
       * @param request DeleteAdaptorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAdaptorResponse
       */
      Models::DeleteAdaptorResponse deleteAdaptorWithOptions(const Models::DeleteAdaptorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified application adaptation, or dissociates the adaptation from a specified image version.
       *
       * @description **Confirm the deletion scope first.**
       * - If both ImageId and VersionId are specified: only the association between the adaptation and the specified image version is dissociated.
       * - If ImageId and VersionId are not both specified: the adaptation deletion process starts. The adaptation cannot be deleted if it is still referenced by multiple images. If the application still has other adaptations, the application cannot be deleted along with it.
       * **AdaptorId, AppVersionId, and AppId must be provided together and correspond to the same application adaptation.** Verify these identifiers by querying the application and image first.
       *
       * @param request DeleteAdaptorRequest
       * @return DeleteAdaptorResponse
       */
      Models::DeleteAdaptorResponse deleteAdaptor(const Models::DeleteAdaptorRequest &request);

      /**
       * @summary Deletes a specified application version, or deletes the entire application and its adapters if the version ID is omitted.
       *
       * @description **You must dissociate all image associations from the target application or version before deletion.**
       * 1. Call ListApp to obtain the AppId and confirm whether the application can be deleted.
       * 2. Use UnbindApp or DeleteAdaptor to dissociate the related image associations.
       * 3. Specify AppVersionId to delete a single application version, or omit this parameter to delete the entire application.
       * After an application version is deleted, if the application has no other valid adapters, the application record is also deleted.
       *
       * @param request DeleteAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppResponse
       */
      Models::DeleteAppResponse deleteAppWithOptions(const Models::DeleteAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified application version, or deletes the entire application and its adapters if the version ID is omitted.
       *
       * @description **You must dissociate all image associations from the target application or version before deletion.**
       * 1. Call ListApp to obtain the AppId and confirm whether the application can be deleted.
       * 2. Use UnbindApp or DeleteAdaptor to dissociate the related image associations.
       * 3. Specify AppVersionId to delete a single application version, or omit this parameter to delete the entire application.
       * After an application version is deleted, if the application has no other valid adapters, the application record is also deleted.
       *
       * @param request DeleteAppRequest
       * @return DeleteAppResponse
       */
      Models::DeleteAppResponse deleteApp(const Models::DeleteAppRequest &request);

      /**
       * @summary Deletes a resource-based pay-as-you-go delivery group.
       *
       * @description > This operation does not support deleting delivery groups that use subscription resources.
       *
       * @param request DeleteAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppInstanceGroupResponse
       */
      Models::DeleteAppInstanceGroupResponse deleteAppInstanceGroupWithOptions(const Models::DeleteAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource-based pay-as-you-go delivery group.
       *
       * @description > This operation does not support deleting delivery groups that use subscription resources.
       *
       * @param request DeleteAppInstanceGroupRequest
       * @return DeleteAppInstanceGroupResponse
       */
      Models::DeleteAppInstanceGroupResponse deleteAppInstanceGroup(const Models::DeleteAppInstanceGroupRequest &request);

      /**
       * @summary Deletes specified application instances.
       *
       * @description Only instances in the initializing or idle state can be deleted. This operation is available only to specific customers.
       *
       * @param request DeleteAppInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppInstancesResponse
       */
      Models::DeleteAppInstancesResponse deleteAppInstancesWithOptions(const Models::DeleteAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes specified application instances.
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
       * @description - Only custom images that belong to your account can be deleted.
       * - For images associated with WUYING Workspace pools, WUYING Cloud Apps, or WUYING Workstations, ensure that no WUYING instances are using the image before you delete it.
       * - If a WUYING Cloud Desktop template references the image, the template is also deleted when you delete the image.
       * - If the image is available in multiple regions, deleting the image removes it from all regions.
       *
       * @param request DeleteImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImageWithOptions(const Models::DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom WUYING image.
       *
       * @description - Only custom images that belong to your account can be deleted.
       * - For images associated with WUYING Workspace pools, WUYING Cloud Apps, or WUYING Workstations, ensure that no WUYING instances are using the image before you delete it.
       * - If a WUYING Cloud Desktop template references the image, the template is also deleted when you delete the image.
       * - If the image is available in multiple regions, deleting the image removes it from all regions.
       *
       * @param request DeleteImageRequest
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImage(const Models::DeleteImageRequest &request);

      /**
       * @summary Deletes an LLM template.
       *
       * @description You can delete a model template created under a model service provider template in the Wuying Agent Management Center. Before you delete the template, make sure that the model is not the default model of an associated model group. Otherwise, the deletion fails. After the deletion, the model configurations of associated cloud computers are automatically refreshed. Make sure that you fully understand the operations and usage of the Wuying Agent Management Center before you call this operation.
       *
       * @param request DeleteLlmTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLlmTemplateResponse
       */
      Models::DeleteLlmTemplateResponse deleteLlmTemplateWithOptions(const Models::DeleteLlmTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an LLM template.
       *
       * @description You can delete a model template created under a model service provider template in the Wuying Agent Management Center. Before you delete the template, make sure that the model is not the default model of an associated model group. Otherwise, the deletion fails. After the deletion, the model configurations of associated cloud computers are automatically refreshed. Make sure that you fully understand the operations and usage of the Wuying Agent Management Center before you call this operation.
       *
       * @param request DeleteLlmTemplateRequest
       * @return DeleteLlmTemplateResponse
       */
      Models::DeleteLlmTemplateResponse deleteLlmTemplate(const Models::DeleteLlmTemplateRequest &request);

      /**
       * @summary Deletes a model provider template.
       *
       * @description You can delete a model provider template created under model templates in the Wuying Agent Management Center. Before deletion, ensure that the model provider is not the provider of the default model and is not a system-preset provider, such as the Wuying credit package. After deletion, the associated models and key configurations are also cleared.
       * Make sure that you fully understand the operations and usage of the Wuying Agent Management Center before you call this operation.
       *
       * @param request DeleteModelProviderTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelProviderTemplateResponse
       */
      Models::DeleteModelProviderTemplateResponse deleteModelProviderTemplateWithOptions(const Models::DeleteModelProviderTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model provider template.
       *
       * @description You can delete a model provider template created under model templates in the Wuying Agent Management Center. Before deletion, ensure that the model provider is not the provider of the default model and is not a system-preset provider, such as the Wuying credit package. After deletion, the associated models and key configurations are also cleared.
       * Make sure that you fully understand the operations and usage of the Wuying Agent Management Center before you call this operation.
       *
       * @param request DeleteModelProviderTemplateRequest
       * @return DeleteModelProviderTemplateResponse
       */
      Models::DeleteModelProviderTemplateResponse deleteModelProviderTemplate(const Models::DeleteModelProviderTemplateRequest &request);

      /**
       * @summary Deletes a model template.
       *
       * @description You can delete a model group created in the Wuying Agent Management Center. Before you delete the model group, make sure that the template is not authorized for any resources. Otherwise, the deletion fails. After the model group is deleted, the model providers and models in the model group are also removed.
       * Before you call this operation, make sure that you fully understand the operations and usage of the Wuying Agent Management Center.
       *
       * @param request DeleteModelTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelTemplateResponse
       */
      Models::DeleteModelTemplateResponse deleteModelTemplateWithOptions(const Models::DeleteModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model template.
       *
       * @description You can delete a model group created in the Wuying Agent Management Center. Before you delete the model group, make sure that the template is not authorized for any resources. Otherwise, the deletion fails. After the model group is deleted, the model providers and models in the model group are also removed.
       * Before you call this operation, make sure that you fully understand the operations and usage of the Wuying Agent Management Center.
       *
       * @param request DeleteModelTemplateRequest
       * @return DeleteModelTemplateResponse
       */
      Models::DeleteModelTemplateResponse deleteModelTemplate(const Models::DeleteModelTemplateRequest &request);

      /**
       * @summary Deletes a workstation.
       *
       * @description Deletes a workstation.
       *
       * @param request DeleteWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWuyingServerResponse
       */
      Models::DeleteWuyingServerResponse deleteWuyingServerWithOptions(const Models::DeleteWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workstation.
       *
       * @description Deletes a workstation.
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
       * @summary Performs a paged query for the resource and session events of the current account within the last 30 days. Paging is supported.
       *
       * @description Queries the resource and session events of the current account. Both StartTime and EndTime must be specified, and the time range is inclusive. The service only retrieves logs from 30 days before the call time to the current time, so events outside this window are not returned. If multiple filter parameters are specified, the intersection of the conditions is applied. The results are returned in descending order of the event log time. For pagination, specify PageSize and PageNumber. The current version does not use MaxResults and NextToken.
       *
       * @param request DescribeEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEventsWithOptions(const Models::DescribeEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query for the resource and session events of the current account within the last 30 days. Paging is supported.
       *
       * @description Queries the resource and session events of the current account. Both StartTime and EndTime must be specified, and the time range is inclusive. The service only retrieves logs from 30 days before the call time to the current time, so events outside this window are not returned. If multiple filter parameters are specified, the intersection of the conditions is applied. The results are returned in descending order of the event log time. For pagination, specify PageSize and PageNumber. The current version does not use MaxResults and NextToken.
       *
       * @param request DescribeEventsRequest
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEvents(const Models::DescribeEventsRequest &request);

      /**
       * @summary Queries the execution status, progress, and download URLs of export tasks by paging.
       *
       * @description You can call this operation to query export tasks under the current Alibaba Cloud account by paging, and obtain the task status, execution progress, export file name, and download URL. Export tasks are created by calling CreateExportTask. This operation only reads task information and does not create, modify, or retry tasks.
       * The query results are returned in descending order of task creation time, with the most recently created tasks listed first. Only tasks in the INIT, RUNNING, FINISHED, and FAILED states are returned. Tasks marked as EXPIRED are not included in the results.
       * When polling a single task by TaskId, set PageNumber to 1 and PageSize to 1, set the polling interval to 5 to 10 seconds, and stop polling after the task enters the FINISHED or FAILED state.
       * A task is valid for 24 hours after creation and is marked as expired by a background task after 25 hours. Therefore, within the 24- to 25-hour window, you may still query a FINISHED task, but the DownloadUrl is empty. After a task is marked as expired, the query result is an empty array.
       * If the query result is an empty array, it may be because there are no visible tasks under the current account, the task type does not match, the page number is out of bounds, or the tasks have expired. This operation always returns an array structure and does not return an error when the query result is empty.
       * The DownloadUrl is an OSS pre-signed URL. The default maximum validity period is 1 hour and does not exceed the remaining validity period of the task. The server automatically refreshes the URL when it is about to expire. Use the URL returned by the most recent query for downloading and do not cache the initially returned URL for a long time.
       *
       * @param request DescribeExportTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExportTasksResponse
       */
      Models::DescribeExportTasksResponse describeExportTasksWithOptions(const Models::DescribeExportTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution status, progress, and download URLs of export tasks by paging.
       *
       * @description You can call this operation to query export tasks under the current Alibaba Cloud account by paging, and obtain the task status, execution progress, export file name, and download URL. Export tasks are created by calling CreateExportTask. This operation only reads task information and does not create, modify, or retry tasks.
       * The query results are returned in descending order of task creation time, with the most recently created tasks listed first. Only tasks in the INIT, RUNNING, FINISHED, and FAILED states are returned. Tasks marked as EXPIRED are not included in the results.
       * When polling a single task by TaskId, set PageNumber to 1 and PageSize to 1, set the polling interval to 5 to 10 seconds, and stop polling after the task enters the FINISHED or FAILED state.
       * A task is valid for 24 hours after creation and is marked as expired by a background task after 25 hours. Therefore, within the 24- to 25-hour window, you may still query a FINISHED task, but the DownloadUrl is empty. After a task is marked as expired, the query result is an empty array.
       * If the query result is an empty array, it may be because there are no visible tasks under the current account, the task type does not match, the page number is out of bounds, or the tasks have expired. This operation always returns an array structure and does not return an error when the query result is empty.
       * The DownloadUrl is an OSS pre-signed URL. The default maximum validity period is 1 hour and does not exceed the remaining validity period of the task. The server automatically refreshes the URL when it is about to expire. Use the URL returned by the most recent query for downloading and do not cache the initially returned URL for a long time.
       *
       * @param request DescribeExportTasksRequest
       * @return DescribeExportTasksResponse
       */
      Models::DescribeExportTasksResponse describeExportTasks(const Models::DescribeExportTasksRequest &request);

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
       * @summary Queries the statistics of runtimes of a specified type under the current Alibaba Cloud account, grouped by agent platform and agent provider, including the total count, the count of runtimes without model configurations, the count of runtimes without channel configurations, the count of risky runtimes, and the count of expired runtimes.
       *
       * @param request GetAgentRuntimeStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentRuntimeStatisticResponse
       */
      Models::GetAgentRuntimeStatisticResponse getAgentRuntimeStatisticWithOptions(const Models::GetAgentRuntimeStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of runtimes of a specified type under the current Alibaba Cloud account, grouped by agent platform and agent provider, including the total count, the count of runtimes without model configurations, the count of runtimes without channel configurations, the count of risky runtimes, and the count of expired runtimes.
       *
       * @param request GetAgentRuntimeStatisticRequest
       * @return GetAgentRuntimeStatisticResponse
       */
      Models::GetAgentRuntimeStatisticResponse getAgentRuntimeStatistic(const Models::GetAgentRuntimeStatisticRequest &request);

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
       * @summary Retrieves the connection authorization code and required resource information for an existing image or application creation task.
       *
       * @description Before calling this operation, you must create a task, and the creation or validation resources corresponding to the task must be available.
       * 1. Obtain the TaskId and actual TaskType from the response of the task creation operation or GetTask.
       * 2. Specify ResourceType to obtain the connection information for the creation or validation environment.
       * 3. Use the returned authorization code along with the user, resource group, and application identifiers in the same response for connection.
       * The authorization code is a sensitive connection credential. Do not record it in public documents or logs. When specifying AppId, you must also specify the matching AppVersionId.
       *
       * @param request GetAuthCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthCodeResponse
       */
      Models::GetAuthCodeResponse getAuthCodeWithOptions(const Models::GetAuthCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the connection authorization code and required resource information for an existing image or application creation task.
       *
       * @description Before calling this operation, you must create a task, and the creation or validation resources corresponding to the task must be available.
       * 1. Obtain the TaskId and actual TaskType from the response of the task creation operation or GetTask.
       * 2. Specify ResourceType to obtain the connection information for the creation or validation environment.
       * 3. Use the returned authorization code along with the user, resource group, and application identifiers in the same response for connection.
       * The authorization code is a sensitive connection credential. Do not record it in public documents or logs. When specifying AppId, you must also specify the matching AppVersionId.
       *
       * @param request GetAuthCodeRequest
       * @return GetAuthCodeResponse
       */
      Models::GetAuthCodeResponse getAuthCode(const Models::GetAuthCodeRequest &request);

      /**
       * @summary Queries the configuration, status, and authorization statistics of a specified cloud browser group.
       *
       * @description This topic describes how to use the query operation in the monthly active user (MAU) billing scenario.
       * ## Before you begin
       * Obtain the ID of a cloud browser group within the current account. You can call `ListBrowserInstanceGroup` to obtain the ID.
       * ## Response content
       * Returns the current configuration, status, and authorization statistics of the browser group. The bookmark and website access lists in the details return up to the first 20 entries each. To query the complete lists, call `ListBrowserBookmarks` and `ListBrowserRestrictedURLs` respectively.
       * ## What to do next
       * This operation only queries the configuration and does not modify resources. After reading the returned status, perform connection or management operations that match the status.
       * ## Example description
       * In the examples, `-` indicates that the current scenario does not apply or the field is not returned. It is not a string actually returned by the operation. Examples of common resource IDs are masked. Use the actual query results.
       *
       * @param request GetBrowserInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBrowserInstanceGroupResponse
       */
      Models::GetBrowserInstanceGroupResponse getBrowserInstanceGroupWithOptions(const Models::GetBrowserInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration, status, and authorization statistics of a specified cloud browser group.
       *
       * @description This topic describes how to use the query operation in the monthly active user (MAU) billing scenario.
       * ## Before you begin
       * Obtain the ID of a cloud browser group within the current account. You can call `ListBrowserInstanceGroup` to obtain the ID.
       * ## Response content
       * Returns the current configuration, status, and authorization statistics of the browser group. The bookmark and website access lists in the details return up to the first 20 entries each. To query the complete lists, call `ListBrowserBookmarks` and `ListBrowserRestrictedURLs` respectively.
       * ## What to do next
       * This operation only queries the configuration and does not modify resources. After reading the returned status, perform connection or management operations that match the status.
       * ## Example description
       * In the examples, `-` indicates that the current scenario does not apply or the field is not returned. It is not a string actually returned by the operation. Examples of common resource IDs are masked. Use the actual query results.
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
       * @summary Retrieves the authentication credentials, access endpoints, and topic list required for a client to establish an MQTT connection.
       *
       * @description Call this operation to retrieve the credentials and connection information required for a client to establish an MQTT connection.
       * 1. Use `MqttUsername` and `MqttPassword` as the username and password for the MQTT client connection.
       * 2. Use `MqttEndpoint` as the connection endpoint. If the VPC network access requirements are met, you can use `MqttVPCEndpoint`. `MqttInstanceId` is used for token authentication, and `MqttGroupId` is used to concatenate the MQTT ClientId.
       * 3. Distinguish between publish and subscribe topics based on the `topic`, `type`, and `permission` of each item in `TopicList`. `W` indicates the publish permission, and `R` indicates the subscribe permission.
       * 4. `ExpireTimeStamp` is the UNIX timestamp in milliseconds when the password expires. Credentials may be reused. Retrieve new credentials based on the expiration time returned by the operation.
       * The device identity and request IDs in the documentation are demo data. The domain name uses the `example.com` sample domain. Credentials and instance identity are exemplified or desensitized. These examples cannot be used directly for actual connections.
       *
       * @param tmpReq GetMqttTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMqttTicketResponse
       */
      Models::GetMqttTicketResponse getMqttTicketWithOptions(const Models::GetMqttTicketRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the authentication credentials, access endpoints, and topic list required for a client to establish an MQTT connection.
       *
       * @description Call this operation to retrieve the credentials and connection information required for a client to establish an MQTT connection.
       * 1. Use `MqttUsername` and `MqttPassword` as the username and password for the MQTT client connection.
       * 2. Use `MqttEndpoint` as the connection endpoint. If the VPC network access requirements are met, you can use `MqttVPCEndpoint`. `MqttInstanceId` is used for token authentication, and `MqttGroupId` is used to concatenate the MQTT ClientId.
       * 3. Distinguish between publish and subscribe topics based on the `topic`, `type`, and `permission` of each item in `TopicList`. `W` indicates the publish permission, and `R` indicates the subscribe permission.
       * 4. `ExpireTimeStamp` is the UNIX timestamp in milliseconds when the password expires. Credentials may be reused. Retrieve new credentials based on the expiration time returned by the operation.
       * The device identity and request IDs in the documentation are demo data. The domain name uses the `example.com` sample domain. Credentials and instance identity are exemplified or desensitized. These examples cannot be used directly for actual connections.
       *
       * @param request GetMqttTicketRequest
       * @return GetMqttTicketResponse
       */
      Models::GetMqttTicketResponse getMqttTicket(const Models::GetMqttTicketRequest &request);

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
       * @summary Queries the model settings of resource groups.
       *
       * @param request GetResourceGroupAgentModelSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupAgentModelSettingsResponse
       */
      Models::GetResourceGroupAgentModelSettingsResponse getResourceGroupAgentModelSettingsWithOptions(const Models::GetResourceGroupAgentModelSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the model settings of resource groups.
       *
       * @param request GetResourceGroupAgentModelSettingsRequest
       * @return GetResourceGroupAgentModelSettingsResponse
       */
      Models::GetResourceGroupAgentModelSettingsResponse getResourceGroupAgentModelSettings(const Models::GetResourceGroupAgentModelSettingsRequest &request);

      /**
       * @summary Queries the pricing and discount information required to scale out a subscription delivery group to a specified total number of nodes.
       *
       * @description This operation queries the resource scale-out price of an existing delivery group. A successful call returns only a quote and does not create an order or add nodes.
       * **Verify the following conditions before you call this operation:**
       * - The delivery group belongs to the current account and is located in a supported region in the Chinese mainland.
       * - The product type is WUYING Cloud App or Cloud Browser, and the billing method is subscription and billed by node. Pay-as-you-go or browser groups billed by monthly active user (MAU) are not supported.
       * - The order status of the delivery group is normal, a resource node pool is associated, and no paid but ineffective renewal or scale-in orders exist.
       * - The target total number of nodes is greater than the current number of purchased nodes and does not exceed the node quota for the account in the corresponding region, product, and billing method.
       * **Parameter relationships:**
       * - ProductType, AppInstanceGroupId, and Amount are all required and must be specified together.
       * - ProductType must match the product corresponding to AppInstanceGroupId.
       * - **Amount is the total number of nodes after the scale-out, not the number of nodes added in this operation.** The region, node specifications, and billing method are determined by the existing delivery group and do not need to be specified.
       * **Procedure:**
       * 1. Confirm the target delivery group and the current number of purchased nodes. For common scenarios of cloud apps, you can first invoke [ListAppInstanceGroup](https://api.aliyun.com/document/appstream-center/2021-09-01/ListAppInstanceGroup) to obtain the identity, and then invoke [GetAppInstanceGroup](https://api.aliyun.com/document/appstream-center/2021-09-01/GetAppInstanceGroup) to query the configuration and `NodePool.NodeAmount`.
       * 2. Invoke this operation with the same product type, delivery group identity, and target total number of nodes to read the price, coupons, and pricing rules.
       * 3. After confirming the quote, if you want to execute the scale-out, you can invoke [ModifyNodePoolAmount](https://api.aliyun.com/document/appstream-center/2021-09-01/ModifyNodePoolAmount) and specify the target total number in `NodePool.NodeAmount` as required by the operation. **A successful price inquiry does not mean that an order is created or the scale-out is completed.**
       * **Example scenario:**
       * If a cloud app delivery group currently has 1 purchased subscription node and you want to scale out to 2 nodes, specify ProductType=CloudApp, the AppInstanceGroupId of the delivery group, and Amount=2. Replace the masked resource IDs with the actual values under the current account. The example quantities do not represent default values or quota limits. The price examples only illustrate the relationship among the original price, discount amount, and final price, and do not represent the fixed selling price of the specifications.
       *
       * @param request GetResourceModifyPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceModifyPriceResponse
       */
      Models::GetResourceModifyPriceResponse getResourceModifyPriceWithOptions(const Models::GetResourceModifyPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pricing and discount information required to scale out a subscription delivery group to a specified total number of nodes.
       *
       * @description This operation queries the resource scale-out price of an existing delivery group. A successful call returns only a quote and does not create an order or add nodes.
       * **Verify the following conditions before you call this operation:**
       * - The delivery group belongs to the current account and is located in a supported region in the Chinese mainland.
       * - The product type is WUYING Cloud App or Cloud Browser, and the billing method is subscription and billed by node. Pay-as-you-go or browser groups billed by monthly active user (MAU) are not supported.
       * - The order status of the delivery group is normal, a resource node pool is associated, and no paid but ineffective renewal or scale-in orders exist.
       * - The target total number of nodes is greater than the current number of purchased nodes and does not exceed the node quota for the account in the corresponding region, product, and billing method.
       * **Parameter relationships:**
       * - ProductType, AppInstanceGroupId, and Amount are all required and must be specified together.
       * - ProductType must match the product corresponding to AppInstanceGroupId.
       * - **Amount is the total number of nodes after the scale-out, not the number of nodes added in this operation.** The region, node specifications, and billing method are determined by the existing delivery group and do not need to be specified.
       * **Procedure:**
       * 1. Confirm the target delivery group and the current number of purchased nodes. For common scenarios of cloud apps, you can first invoke [ListAppInstanceGroup](https://api.aliyun.com/document/appstream-center/2021-09-01/ListAppInstanceGroup) to obtain the identity, and then invoke [GetAppInstanceGroup](https://api.aliyun.com/document/appstream-center/2021-09-01/GetAppInstanceGroup) to query the configuration and `NodePool.NodeAmount`.
       * 2. Invoke this operation with the same product type, delivery group identity, and target total number of nodes to read the price, coupons, and pricing rules.
       * 3. After confirming the quote, if you want to execute the scale-out, you can invoke [ModifyNodePoolAmount](https://api.aliyun.com/document/appstream-center/2021-09-01/ModifyNodePoolAmount) and specify the target total number in `NodePool.NodeAmount` as required by the operation. **A successful price inquiry does not mean that an order is created or the scale-out is completed.**
       * **Example scenario:**
       * If a cloud app delivery group currently has 1 purchased subscription node and you want to scale out to 2 nodes, specify ProductType=CloudApp, the AppInstanceGroupId of the delivery group, and Amount=2. Replace the masked resource IDs with the actual values under the current account. The example quantities do not represent default values or quota limits. The price examples only illustrate the relationship among the original price, discount amount, and final price, and do not represent the fixed selling price of the specifications.
       *
       * @param request GetResourceModifyPriceRequest
       * @return GetResourceModifyPriceResponse
       */
      Models::GetResourceModifyPriceResponse getResourceModifyPrice(const Models::GetResourceModifyPriceRequest &request);

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
       * @summary Queries the maximum quantity quota applicable to the current account for a specified product, resource type, business region, and billing method.
       *
       * @description This operation queries the maximum quantity quota. It does not query the used quota, remaining quota, or real-time resource inventory.
       * **Parameter relationships:**
       * - ResourceType and ProductType are required.
       * - BizRegionId and ChargeType are optional query conditions and can be specified at the same time. They must be consistent with subsequent purchase or authorization operations.
       * - If the region or billing method is omitted, the general quota for the corresponding dimension is queried. The quotas of different regions or billing methods are not added together.
       * - If multiple quotas apply at the same time, the larger limit is returned.
       * **Call sequence:**
       * 1. Select the resource type, product, business region, and billing method for the payer based on subsequent business needs.
       * 2. Invoke this operation to read `Data`. Query `AppInstanceGroup` before creating a delivery group, query `AppAuthUser` before authorizing an authorized user, and query `PoolNodeAmount` before purchasing or scaling out nodes.
       * 3. Query the current usage in combination with the resources, and then verify the current operation through subsequent creation, authorization, or scale-out operations. **This query does not reserve quotas or guarantee the success of subsequent purchases.**
       * Data=2147483647 indicates that no smaller quota limit is obtained in this query. It does not mean that the physical inventory is unlimited.
       *
       * @param request GetResourceQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceQuotaResponse
       */
      Models::GetResourceQuotaResponse getResourceQuotaWithOptions(const Models::GetResourceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum quantity quota applicable to the current account for a specified product, resource type, business region, and billing method.
       *
       * @description This operation queries the maximum quantity quota. It does not query the used quota, remaining quota, or real-time resource inventory.
       * **Parameter relationships:**
       * - ResourceType and ProductType are required.
       * - BizRegionId and ChargeType are optional query conditions and can be specified at the same time. They must be consistent with subsequent purchase or authorization operations.
       * - If the region or billing method is omitted, the general quota for the corresponding dimension is queried. The quotas of different regions or billing methods are not added together.
       * - If multiple quotas apply at the same time, the larger limit is returned.
       * **Call sequence:**
       * 1. Select the resource type, product, business region, and billing method for the payer based on subsequent business needs.
       * 2. Invoke this operation to read `Data`. Query `AppInstanceGroup` before creating a delivery group, query `AppAuthUser` before authorizing an authorized user, and query `PoolNodeAmount` before purchasing or scaling out nodes.
       * 3. Query the current usage in combination with the resources, and then verify the current operation through subsequent creation, authorization, or scale-out operations. **This query does not reserve quotas or guarantee the success of subsequent purchases.**
       * Data=2147483647 indicates that no smaller quota limit is obtained in this query. It does not mean that the physical inventory is unlimited.
       *
       * @param request GetResourceQuotaRequest
       * @return GetResourceQuotaResponse
       */
      Models::GetResourceQuotaResponse getResourceQuota(const Models::GetResourceQuotaRequest &request);

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
       * @summary Queries the details of the model configuration for a cloud desktop.
       *
       * @description You can query the details of the model configuration currently bound to a specified cloud desktop in the Wuying Agent Management Center, including the model group, the list of model providers, and their associated model information. When the risk information mode is enabled, you can also identify discrepancies between the actual configuration of the end user and the configuration delivered by the administrator.
       *
       * @param request GetRuntimeModelConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuntimeModelConfigResponse
       */
      Models::GetRuntimeModelConfigResponse getRuntimeModelConfigWithOptions(const Models::GetRuntimeModelConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the model configuration for a cloud desktop.
       *
       * @description You can query the details of the model configuration currently bound to a specified cloud desktop in the Wuying Agent Management Center, including the model group, the list of model providers, and their associated model information. When the risk information mode is enabled, you can also identify discrepancies between the actual configuration of the end user and the configuration delivered by the administrator.
       *
       * @param request GetRuntimeModelConfigRequest
       * @return GetRuntimeModelConfigResponse
       */
      Models::GetRuntimeModelConfigResponse getRuntimeModelConfig(const Models::GetRuntimeModelConfigRequest &request);

      /**
       * @summary Queries the details of a task by task ID, or by resource information and task category.
       *
       * @description Supports two query methods:
       * - **By task ID**: Pass the TaskId parameter. This method takes precedence over querying by resource information.
       * - **By resource**: Omit the TaskId parameter, and pass the EntityId, EntityType, and TaskCategory parameters at the same time. You can use the EntityVersionId parameter to specify the resource version.
       * The API returns the current task status and recorded step information. Determine the overall task result based on the Status parameter. The success of a single step does not mean the entire task is successful. You can call the ListTaskStep operation to query the names and categories of image creation and application adaptation steps.
       *
       * @param request GetTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTaskWithOptions(const Models::GetTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a task by task ID, or by resource information and task category.
       *
       * @description Supports two query methods:
       * - **By task ID**: Pass the TaskId parameter. This method takes precedence over querying by resource information.
       * - **By resource**: Omit the TaskId parameter, and pass the EntityId, EntityType, and TaskCategory parameters at the same time. You can use the EntityVersionId parameter to specify the resource version.
       * The API returns the current task status and recorded step information. Determine the overall task result based on the Status parameter. The success of a single step does not mean the entire task is successful. You can call the ListTaskStep operation to query the names and categories of image creation and application adaptation steps.
       *
       * @param request GetTaskRequest
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTask(const Models::GetTaskRequest &request);

      /**
       * @summary Queries a deduplicated list of version numbers for undeleted agent instances under a specified tenant, aggregated by agent provider and optionally filtered by agent platform. The results are returned in ascending order by version number.
       *
       * @param request ListAgentInstanceVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentInstanceVersionsResponse
       */
      Models::ListAgentInstanceVersionsResponse listAgentInstanceVersionsWithOptions(const Models::ListAgentInstanceVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a deduplicated list of version numbers for undeleted agent instances under a specified tenant, aggregated by agent provider and optionally filtered by agent platform. The results are returned in ascending order by version number.
       *
       * @param request ListAgentInstanceVersionsRequest
       * @return ListAgentInstanceVersionsResponse
       */
      Models::ListAgentInstanceVersionsResponse listAgentInstanceVersions(const Models::ListAgentInstanceVersionsRequest &request);

      /**
       * @summary Queries the valid applications of the current account by paging based on conditions such as the application ID, name, type, and associated product.
       *
       * @description When multiple filter conditions are specified at the same time, they take effect together. AppName supports contains matching. When a single-value filter and the corresponding list filter are specified at the same time, the intersection is used. To avoid empty results, specify only one of the forms.
       * If PageSize is omitted, the value is 10. Start from 1 for PageNumber and query page by page until the number of retrieved records reaches Count. Before deleting an application, check Deletable.
       *
       * @param tmpReq ListAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppResponse
       */
      Models::ListAppResponse listAppWithOptions(const Models::ListAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the valid applications of the current account by paging based on conditions such as the application ID, name, type, and associated product.
       *
       * @description When multiple filter conditions are specified at the same time, they take effect together. AppName supports contains matching. When a single-value filter and the corresponding list filter are specified at the same time, the intersection is used. To avoid empty results, specify only one of the forms.
       * If PageSize is omitted, the value is 10. Start from 1 for PageNumber and query page by page until the number of retrieved records reaches Count. Before deleting an application, check Deletable.
       *
       * @param request ListAppRequest
       * @return ListAppResponse
       */
      Models::ListAppResponse listApp(const Models::ListAppRequest &request);

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
       * @summary Queries the available session instance types for the current account by paging based on the product, region, operating system, and instance type conditions.
       *
       * @description This operation is used to select session instance types and does not create resources. The returned results are affected by the available instance types for the account and the business region. An empty result does not indicate a request failure.
       * **Filtering and pagination:**
       * - `ProductType` is required. Explicitly specify `BizRegionId`, `PageNumber`, and `PageSize`.
       * - If `BizRegionId` is not provided, the region of the current request is used. You can call the [ListRegions](https://api.aliyun.com/document/appstream-center/2021-09-01/ListRegions) operation to obtain the business region.
       * - You can specify both `AppInstanceType` and `AppInstanceTypeList`. In this case, only the instance types that meet both conditions are returned. Neither parameter overrides the other. The list can contain up to 100 items.
       * - The instance type family, CPU, memory, GPU memory, operating system, and category conditions are filtered by intersection. The union is not automatically applied.
       * - Pass `PageNumber` starting from 1. Use `TotalCount`, `PageSize`, and `PageNumber` to continue pagination until all matching results are read.
       * **Inventory and subsequent calls:**
       * - Inventory is queried only when `QueryInventory` is set to `true`. If inventory information is not obtained, do not assume that the inventory is 0.
       * - The inventory reflects the current query result and does not indicate a successful reservation.
       * - After obtaining the `AppInstanceType`, you can query the price based on the session instance type parameter requirements of [GetResourcePrice](https://api.aliyun.com/document/appstream-center/2021-09-01/GetResourcePrice).
       * - The current query does not use `AppCenterImageId` to filter instance types. Do not use this parameter to determine the compatibility between images and instance types.
       * Field examples are used to demonstrate how to fill in the fields and do not guarantee that the example instance types exist in the selected region or account. The GPU count field currently does not provide a value. Use the GPU memory field to understand the instance type.
       *
       * @param request ListAppInstanceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppInstanceTypeResponse
       */
      Models::ListAppInstanceTypeResponse listAppInstanceTypeWithOptions(const Models::ListAppInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available session instance types for the current account by paging based on the product, region, operating system, and instance type conditions.
       *
       * @description This operation is used to select session instance types and does not create resources. The returned results are affected by the available instance types for the account and the business region. An empty result does not indicate a request failure.
       * **Filtering and pagination:**
       * - `ProductType` is required. Explicitly specify `BizRegionId`, `PageNumber`, and `PageSize`.
       * - If `BizRegionId` is not provided, the region of the current request is used. You can call the [ListRegions](https://api.aliyun.com/document/appstream-center/2021-09-01/ListRegions) operation to obtain the business region.
       * - You can specify both `AppInstanceType` and `AppInstanceTypeList`. In this case, only the instance types that meet both conditions are returned. Neither parameter overrides the other. The list can contain up to 100 items.
       * - The instance type family, CPU, memory, GPU memory, operating system, and category conditions are filtered by intersection. The union is not automatically applied.
       * - Pass `PageNumber` starting from 1. Use `TotalCount`, `PageSize`, and `PageNumber` to continue pagination until all matching results are read.
       * **Inventory and subsequent calls:**
       * - Inventory is queried only when `QueryInventory` is set to `true`. If inventory information is not obtained, do not assume that the inventory is 0.
       * - The inventory reflects the current query result and does not indicate a successful reservation.
       * - After obtaining the `AppInstanceType`, you can query the price based on the session instance type parameter requirements of [GetResourcePrice](https://api.aliyun.com/document/appstream-center/2021-09-01/GetResourcePrice).
       * - The current query does not use `AppCenterImageId` to filter instance types. Do not use this parameter to determine the compatibility between images and instance types.
       * Field examples are used to demonstrate how to fill in the fields and do not guarantee that the example instance types exist in the selected region or account. The GPU count field currently does not provide a value. Use the GPU memory field to understand the instance type.
       *
       * @param request ListAppInstanceTypeRequest
       * @return ListAppInstanceTypeResponse
       */
      Models::ListAppInstanceTypeResponse listAppInstanceType(const Models::ListAppInstanceTypeRequest &request);

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
       * @summary Performs a paging query on the delivery groups for which a specified user has obtained access permissions through delivery group-level authorization, with support for fuzzy filtering by delivery group ID, delivery group name, application ID, and application name.
       *
       * @description ## Operation description
       * This operation queries the list of delivery groups for which a specified user (EndUserId) has been granted **delivery group-level authorization**. It returns the basic information of each delivery group (such as ID, name, status, region, creation time, and expiration time) and the list of applications deployed in the delivery group.
       * Return scope:
       * - Only delivery groups that are authorized to the user as a whole through the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation are returned. Records of individual application authorizations granted through the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation are not included.
       * - Only delivery groups that match the specified ProductType and are not deleted are returned. If no applications are deployed in the delivery group image, the delivery group is not returned.
       * - Results are sorted in descending order based on the update time of the authorization records. The most recently authorized or modified delivery groups are listed first.
       * ## Before you begin
       * - The [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation has been called to authorize the delivery group to the user.
       * ## Metric description
       * - **ProductType and EndUserId are required**. If ProductType is not specified, the `InvalidParameter.ProductType` error code is returned. If EndUserId is not specified, the `InvalidParameter.UserId` error code is returned.
       * - EndUserId uses **exact match** based on the username. AppInstanceGroupId, AppInstanceGroupName, AppId, and AppName use **fuzzy match** (a match is hit if the string is contained). If multiple filter conditions are specified, all conditions must be met.
       * - PageNumber starts from 1. Valid values for PageSize: 1 to 100.
       * - If the user does not have any authorization delivery groups that meet the conditional requirements, the operation returns a normal response: AppInstanceGroupModels is an empty list and TotalCount is 0.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the delivery group ID, and then call the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation to authorize the delivery group to the user.
       * 2. Call this operation to query the delivery groups authorized for the user and the applications deployed in the delivery groups.
       * 3. To obtain the application connection ticket for the user, call the [GetConnectionTicket](~~GetConnectionTicket~~) operation by using the returned AppInstanceGroupId and the AppId in Apps.
       *
       * @param request ListAuthorizedAppInstanceGroupByUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedAppInstanceGroupByUserResponse
       */
      Models::ListAuthorizedAppInstanceGroupByUserResponse listAuthorizedAppInstanceGroupByUserWithOptions(const Models::ListAuthorizedAppInstanceGroupByUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query on the delivery groups for which a specified user has obtained access permissions through delivery group-level authorization, with support for fuzzy filtering by delivery group ID, delivery group name, application ID, and application name.
       *
       * @description ## Operation description
       * This operation queries the list of delivery groups for which a specified user (EndUserId) has been granted **delivery group-level authorization**. It returns the basic information of each delivery group (such as ID, name, status, region, creation time, and expiration time) and the list of applications deployed in the delivery group.
       * Return scope:
       * - Only delivery groups that are authorized to the user as a whole through the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation are returned. Records of individual application authorizations granted through the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation are not included.
       * - Only delivery groups that match the specified ProductType and are not deleted are returned. If no applications are deployed in the delivery group image, the delivery group is not returned.
       * - Results are sorted in descending order based on the update time of the authorization records. The most recently authorized or modified delivery groups are listed first.
       * ## Before you begin
       * - The [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation has been called to authorize the delivery group to the user.
       * ## Metric description
       * - **ProductType and EndUserId are required**. If ProductType is not specified, the `InvalidParameter.ProductType` error code is returned. If EndUserId is not specified, the `InvalidParameter.UserId` error code is returned.
       * - EndUserId uses **exact match** based on the username. AppInstanceGroupId, AppInstanceGroupName, AppId, and AppName use **fuzzy match** (a match is hit if the string is contained). If multiple filter conditions are specified, all conditions must be met.
       * - PageNumber starts from 1. Valid values for PageSize: 1 to 100.
       * - If the user does not have any authorization delivery groups that meet the conditional requirements, the operation returns a normal response: AppInstanceGroupModels is an empty list and TotalCount is 0.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the delivery group ID, and then call the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) operation to authorize the delivery group to the user.
       * 2. Call this operation to query the delivery groups authorized for the user and the applications deployed in the delivery groups.
       * 3. To obtain the application connection ticket for the user, call the [GetConnectionTicket](~~GetConnectionTicket~~) operation by using the returned AppInstanceGroupId and the AppId in Apps.
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
       * @summary Performs a paging query to retrieve the list of bookmarks in a specified cloud browser group or delivery group set.
       *
       * @param request ListBrowserBookmarksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBrowserBookmarksResponse
       */
      Models::ListBrowserBookmarksResponse listBrowserBookmarksWithOptions(const Models::ListBrowserBookmarksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query to retrieve the list of bookmarks in a specified cloud browser group or delivery group set.
       *
       * @param request ListBrowserBookmarksRequest
       * @return ListBrowserBookmarksResponse
       */
      Models::ListBrowserBookmarksResponse listBrowserBookmarks(const Models::ListBrowserBookmarksRequest &request);

      /**
       * @summary Performs a paging query of cloud browser groups and their current statuses.
       *
       * @description This topic describes how paged query cloud browser groups in the monthly active user (MAU) billing scenario.
       * ## Query conditions
       * You can filter cloud browser groups by browser group ID, name, business region, office network, set, authorized user group, and status. You can specify only one status value at a time for status filtering.
       * ## Pagination
       * Use PageNumber and PageSize paged query data by page. You can determine whether paged query the next page based on the returned TotalCount.
       * ## What to do next
       * To view the detailed configurations of a single browser group, call GetBrowserInstanceGroup by using the returned ID.
       * ## Example notes
       * The hyphen (`-`) in the examples indicates that the field is not applicable or not returned in the current scenario, and is not an actual string returned by the API operation. The common resource IDs in the examples are desensitized. Use the actual query results when you use the API operation.
       *
       * @param request ListBrowserInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBrowserInstanceGroupResponse
       */
      Models::ListBrowserInstanceGroupResponse listBrowserInstanceGroupWithOptions(const Models::ListBrowserInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query of cloud browser groups and their current statuses.
       *
       * @description This topic describes how paged query cloud browser groups in the monthly active user (MAU) billing scenario.
       * ## Query conditions
       * You can filter cloud browser groups by browser group ID, name, business region, office network, set, authorized user group, and status. You can specify only one status value at a time for status filtering.
       * ## Pagination
       * Use PageNumber and PageSize paged query data by page. You can determine whether paged query the next page based on the returned TotalCount.
       * ## What to do next
       * To view the detailed configurations of a single browser group, call GetBrowserInstanceGroup by using the returned ID.
       * ## Example notes
       * The hyphen (`-`) in the examples indicates that the field is not applicable or not returned in the current scenario, and is not an actual string returned by the API operation. The common resource IDs in the examples are desensitized. Use the actual query results when you use the API operation.
       *
       * @param request ListBrowserInstanceGroupRequest
       * @return ListBrowserInstanceGroupResponse
       */
      Models::ListBrowserInstanceGroupResponse listBrowserInstanceGroup(const Models::ListBrowserInstanceGroupRequest &request);

      /**
       * @summary Queries the list of access restriction URLs configured for a specified browser delivery group or delivery group set by using paging.
       *
       * @description You can call this operation to query the list of access restriction URLs configured for a cloud browser delivery group or delivery group set by using paging to view the details of the URLs configured in the current access control policy.
       * You must specify either BrowserInstanceGroupId or BrowserInstanceGroupSetId, but not both. If you specify BrowserInstanceGroupId, the restricted URLs for the delivery group are queried. If you specify BrowserInstanceGroupSetId, the restricted URLs for the delivery group set are queried. Specifying both or neither returns a parameter error.
       * You can use Keyword to filter restricted URLs by using a contains match. The match is case-insensitive for English characters. If you do not specify this parameter, all restricted URLs are returned. Pagination is controlled by PageNumber and PageSize. Valid values for PageSize: 1 to 200. Default value: 200. Default value for PageNumber: 0. If the value is less than 1, the first page is returned. In the response, TotalCount indicates the total number of records that meet the filter conditions, and Data contains the records on the current page. If no data is found, an empty array is returned.
       *
       * @param request ListBrowserRestrictedURLsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBrowserRestrictedURLsResponse
       */
      Models::ListBrowserRestrictedURLsResponse listBrowserRestrictedURLsWithOptions(const Models::ListBrowserRestrictedURLsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of access restriction URLs configured for a specified browser delivery group or delivery group set by using paging.
       *
       * @description You can call this operation to query the list of access restriction URLs configured for a cloud browser delivery group or delivery group set by using paging to view the details of the URLs configured in the current access control policy.
       * You must specify either BrowserInstanceGroupId or BrowserInstanceGroupSetId, but not both. If you specify BrowserInstanceGroupId, the restricted URLs for the delivery group are queried. If you specify BrowserInstanceGroupSetId, the restricted URLs for the delivery group set are queried. Specifying both or neither returns a parameter error.
       * You can use Keyword to filter restricted URLs by using a contains match. The match is case-insensitive for English characters. If you do not specify this parameter, all restricted URLs are returned. Pagination is controlled by PageNumber and PageSize. Valid values for PageSize: 1 to 200. Default value: 200. Default value for PageNumber: 0. If the value is less than 1, the first page is returned. In the response, TotalCount indicates the total number of records that meet the filter conditions, and Data contains the records on the current page. If no data is found, an empty array is returned.
       *
       * @param request ListBrowserRestrictedURLsRequest
       * @return ListBrowserRestrictedURLsResponse
       */
      Models::ListBrowserRestrictedURLsResponse listBrowserRestrictedURLs(const Models::ListBrowserRestrictedURLsRequest &request);

      /**
       * @summary Queries a list of desktop Agent runtimes.
       *
       * @param request ListDesktopAgentRuntimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDesktopAgentRuntimeResponse
       */
      Models::ListDesktopAgentRuntimeResponse listDesktopAgentRuntimeWithOptions(const Models::ListDesktopAgentRuntimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of desktop Agent runtimes.
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
       * @summary Queries a list of LLM templates.
       *
       * @description You can use paging to perform a paged query of the model template list under a model provider template in the Wuying Agent Management Center. You can filter the results by model group ID, model provider template ID, model template ID, and model encoding. When you query by the model group dimension, the default model is automatically pinned to the top.
       * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param tmpReq ListLlmTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLlmTemplatesResponse
       */
      Models::ListLlmTemplatesResponse listLlmTemplatesWithOptions(const Models::ListLlmTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of LLM templates.
       *
       * @description You can use paging to perform a paged query of the model template list under a model provider template in the Wuying Agent Management Center. You can filter the results by model group ID, model provider template ID, model template ID, and model encoding. When you query by the model group dimension, the default model is automatically pinned to the top.
       * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
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
       * @summary Queries the list of available LLM model codes for a specified model provider. It supports filtering by LLM code, model brand, recommendation level, and recommendation status, and returns model information such as the model name, description, release time, features, inference modality, pricing, credit multiplier, and risk type.
       *
       * @param request ListModelProviderLlmCodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelProviderLlmCodesResponse
       */
      Models::ListModelProviderLlmCodesResponse listModelProviderLlmCodesWithOptions(const Models::ListModelProviderLlmCodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of available LLM model codes for a specified model provider. It supports filtering by LLM code, model brand, recommendation level, and recommendation status, and returns model information such as the model name, description, release time, features, inference modality, pricing, credit multiplier, and risk type.
       *
       * @param request ListModelProviderLlmCodesRequest
       * @return ListModelProviderLlmCodesResponse
       */
      Models::ListModelProviderLlmCodesResponse listModelProviderLlmCodes(const Models::ListModelProviderLlmCodesRequest &request);

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
       * @summary Queries the published delivery groups and their application information for a specified product type under the current Alibaba Cloud account by using paging, and supports filtering by delivery group, application, and user authorization status.
       *
       * @description ## Prerequisites
       * When you call this operation as a RAM user or by using STS credentials, you must have the `appstreaming:ListPublishedAppInstanceGroup` permission.
       * Only delivery groups that are in the published state and have deployed applications in their images are included in the query results. This operation only queries information. It does not create delivery groups, assign users, or grant application access permissions.
       * ## Query and pagination
       * - **You must explicitly specify `ProductType`, `PageNumber`, and `PageSize`.** The page number starts from `1`, and the number of entries per page ranges from `1` to `100`.
       * - `AppInstanceGroupId`, `AppInstanceGroupName`, `AppId`, and `AppName` all support partial matching. You can specify them individually or in combination. If multiple conditions are specified, all conditions must be met. If both `AppId` and `AppName` are specified, they must be met by the same application.
       * - If an optional filter parameter is not specified or is set to an empty string, the results are not filtered by this condition. The query results are sorted in descending order of the delivery group creation time. A delivery group is not returned multiple times even if it contains multiple matched applications.
       * - `ExcludeUserId` is used to exclude delivery groups for which all applications have been directly authorized to a specified user. It cannot be used to determine whether the user has no access permissions at all.
       * - `AppId` and `AppName` only filter delivery groups and **do not restrict the returned `Apps` list to the matched applications**.
       * ## Invocation sequence
       * 1. Initiate a query with `PageNumber=1` and the desired `PageSize`. For common scenarios of Wuying Cloud App, set `ProductType` to `CloudApp`.
       * 2. Read `AppInstanceGroupModels`. To retrieve the next page, keep the product type and filter conditions unchanged, and increment `PageNumber`. If no delivery groups match the conditions, the total count is `0` and the list is empty. If the page number exceeds the range of the current results, the list may also be empty, but the total count still represents the total number of all matched delivery groups.
       * 3. To obtain the details of a single delivery group, pass the complete `AppInstanceGroupId` returned and the same `ProductType` to [GetAppInstanceGroup](~~GetAppInstanceGroup~~).
       * The masked identity in the examples is used to demonstrate the format. Replace it with your actual identity when you invoke the operation.
       *
       * @param request ListPublishedAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublishedAppInstanceGroupResponse
       */
      Models::ListPublishedAppInstanceGroupResponse listPublishedAppInstanceGroupWithOptions(const Models::ListPublishedAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the published delivery groups and their application information for a specified product type under the current Alibaba Cloud account by using paging, and supports filtering by delivery group, application, and user authorization status.
       *
       * @description ## Prerequisites
       * When you call this operation as a RAM user or by using STS credentials, you must have the `appstreaming:ListPublishedAppInstanceGroup` permission.
       * Only delivery groups that are in the published state and have deployed applications in their images are included in the query results. This operation only queries information. It does not create delivery groups, assign users, or grant application access permissions.
       * ## Query and pagination
       * - **You must explicitly specify `ProductType`, `PageNumber`, and `PageSize`.** The page number starts from `1`, and the number of entries per page ranges from `1` to `100`.
       * - `AppInstanceGroupId`, `AppInstanceGroupName`, `AppId`, and `AppName` all support partial matching. You can specify them individually or in combination. If multiple conditions are specified, all conditions must be met. If both `AppId` and `AppName` are specified, they must be met by the same application.
       * - If an optional filter parameter is not specified or is set to an empty string, the results are not filtered by this condition. The query results are sorted in descending order of the delivery group creation time. A delivery group is not returned multiple times even if it contains multiple matched applications.
       * - `ExcludeUserId` is used to exclude delivery groups for which all applications have been directly authorized to a specified user. It cannot be used to determine whether the user has no access permissions at all.
       * - `AppId` and `AppName` only filter delivery groups and **do not restrict the returned `Apps` list to the matched applications**.
       * ## Invocation sequence
       * 1. Initiate a query with `PageNumber=1` and the desired `PageSize`. For common scenarios of Wuying Cloud App, set `ProductType` to `CloudApp`.
       * 2. Read `AppInstanceGroupModels`. To retrieve the next page, keep the product type and filter conditions unchanged, and increment `PageNumber`. If no delivery groups match the conditions, the total count is `0` and the list is empty. If the page number exceeds the range of the current results, the list may also be empty, but the total count still represents the total number of all matched delivery groups.
       * 3. To obtain the details of a single delivery group, pass the complete `AppInstanceGroupId` returned and the same `ProductType` to [GetAppInstanceGroup](~~GetAppInstanceGroup~~).
       * The masked identity in the examples is used to demonstrate the format. Replace it with your actual identity when you invoke the operation.
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
       * @summary Queries the list of region IDs available for image services under a specified product for the current account.
       *
       * @description The returned results are affected by the available region configurations of the account and the product type. If ProductType is omitted, the query is performed based on CloudApp.
       * This operation returns the regions available for image services. You cannot use this information to determine whether a specific image has been distributed to these regions. Before you create or distribute an image based on a parent image, you must also check the region information of the destination image.
       *
       * @param request ListRegionIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionIdResponse
       */
      Models::ListRegionIdResponse listRegionIdWithOptions(const Models::ListRegionIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of region IDs available for image services under a specified product for the current account.
       *
       * @description The returned results are affected by the available region configurations of the account and the product type. If ProductType is omitted, the query is performed based on CloudApp.
       * This operation returns the regions available for image services. You cannot use this information to determine whether a specific image has been distributed to these regions. Before you create or distribute an image based on a parent image, you must also check the region information of the destination image.
       *
       * @param request ListRegionIdRequest
       * @return ListRegionIdResponse
       */
      Models::ListRegionIdResponse listRegionId(const Models::ListRegionIdRequest &request);

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
       * @summary Queries the step identifiers, step categories, and interaction methods for application adaptation or image creation tasks.
       *
       * @description Returns application adaptation steps when Type is set to ADAPTOR, and image creation steps when Type is set to IMAGE.
       * This operation returns step definitions, not the actual progress of a specific task. Read the step definitions first, and then combine them with the current step and step status returned by GetTask to display the task progress. The step sets vary across different task types. Do not use the step index as the completion percentage.
       *
       * @param request ListTaskStepRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskStepResponse
       */
      Models::ListTaskStepResponse listTaskStepWithOptions(const Models::ListTaskStepRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the step identifiers, step categories, and interaction methods for application adaptation or image creation tasks.
       *
       * @description Returns application adaptation steps when Type is set to ADAPTOR, and image creation steps when Type is set to IMAGE.
       * This operation returns step definitions, not the actual progress of a specific task. Read the step definitions first, and then combine them with the current step and step status returned by GetTask to display the task progress. The step sets vary across different task types. Do not use the step index as the completion percentage.
       *
       * @param request ListTaskStepRequest
       * @return ListTaskStepResponse
       */
      Models::ListTaskStepResponse listTaskStep(const Models::ListTaskStepRequest &request);

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
       * @summary Queries the Wuying Workstation workload templates available for a specified virtual node pool.
       *
       * @description Queries the workload templates available for a specified virtual node pool. Before calling this operation, call [ListWuyingServer](~~ListWuyingServer~~) to obtain the `VirtualNodePoolId` of the current account. The operation verifies the ownership of the node pool and returns up to 100 records sorted by template configuration order. The template content is Base64-encoded after being encoded in UTF-8. You must decode the Base64 string before use. The current version does not use `MaxResults` and `NextToken` for pagination.
       *
       * @param request ListWuyingServerWorkloadTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWuyingServerWorkloadTemplateResponse
       */
      Models::ListWuyingServerWorkloadTemplateResponse listWuyingServerWorkloadTemplateWithOptions(const Models::ListWuyingServerWorkloadTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Wuying Workstation workload templates available for a specified virtual node pool.
       *
       * @description Queries the workload templates available for a specified virtual node pool. Before calling this operation, call [ListWuyingServer](~~ListWuyingServer~~) to obtain the `VirtualNodePoolId` of the current account. The operation verifies the ownership of the node pool and returns up to 100 records sorted by template configuration order. The template content is Base64-encoded after being encoded in UTF-8. You must decode the Base64 string before use. The current version does not use `MaxResults` and `NextToken` for pagination.
       *
       * @param request ListWuyingServerWorkloadTemplateRequest
       * @return ListWuyingServerWorkloadTemplateResponse
       */
      Models::ListWuyingServerWorkloadTemplateResponse listWuyingServerWorkloadTemplate(const Models::ListWuyingServerWorkloadTemplateRequest &request);

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
       * @summary Changes the billing method of a specified delivery group to a target billing method and returns the ID of the billing conversion task to be created.
       *
       * @description This operation performs billing method conversion, which may create orders and trigger subsequent billing changes. **A successful response or a returned task ID does not indicate that the new billing method has taken effect.**
       * **Prerequisites:**
       * - The resources belong to the current account, and the product and business region match the request. Only one delivery group can be specified per request.
       * - The target billing method must be different from the current billing method, and the target resource specifications must support the corresponding sales and Billable methods.
       * - Delivery groups that have been added to a valid collection cannot have their Billable methods converted individually.
       * - Multiple delivery groups created in the same batch of orders cannot have their Billable methods converted separately.
       * **Parameter relationships and call sequence:**
       * 1. Query the resource details first to confirm the product, business region, and current ChargeType. You can use [GetAppInstanceGroup](https://api.aliyun.com/document/appstream-center/2021-09-01/GetAppInstanceGroup) to query cloud application delivery groups.
       * 2. Explicitly specify the target ChargeType. If you need to purchase a subscription, specify the purchase duration by combining Period and PeriodUnit. The period combination must comply with the sales rules currently supported by the resource.
       * 3. Set AutoPay based on whether automatic payment is allowed. If auto-renewal is involved, explicitly set AutoRenew.
       * 4. After the call, save the returned AppInstanceGroupModel.TaskId. If there are unpaid orders, complete the payment first, and then query the resource details again to confirm that the billing method has been changed.
       * This operation does not accept an expiration time parameter. Do not pass the expiration time from other operations into this request. The task examples only illustrate the purpose of the ID and do not define a fixed prefix or length for real task IDs.
       *
       * @param tmpReq ModifyAppInstanceGroupChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppInstanceGroupChargeTypeResponse
       */
      Models::ModifyAppInstanceGroupChargeTypeResponse modifyAppInstanceGroupChargeTypeWithOptions(const Models::ModifyAppInstanceGroupChargeTypeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of a specified delivery group to a target billing method and returns the ID of the billing conversion task to be created.
       *
       * @description This operation performs billing method conversion, which may create orders and trigger subsequent billing changes. **A successful response or a returned task ID does not indicate that the new billing method has taken effect.**
       * **Prerequisites:**
       * - The resources belong to the current account, and the product and business region match the request. Only one delivery group can be specified per request.
       * - The target billing method must be different from the current billing method, and the target resource specifications must support the corresponding sales and Billable methods.
       * - Delivery groups that have been added to a valid collection cannot have their Billable methods converted individually.
       * - Multiple delivery groups created in the same batch of orders cannot have their Billable methods converted separately.
       * **Parameter relationships and call sequence:**
       * 1. Query the resource details first to confirm the product, business region, and current ChargeType. You can use [GetAppInstanceGroup](https://api.aliyun.com/document/appstream-center/2021-09-01/GetAppInstanceGroup) to query cloud application delivery groups.
       * 2. Explicitly specify the target ChargeType. If you need to purchase a subscription, specify the purchase duration by combining Period and PeriodUnit. The period combination must comply with the sales rules currently supported by the resource.
       * 3. Set AutoPay based on whether automatic payment is allowed. If auto-renewal is involved, explicitly set AutoRenew.
       * 4. After the call, save the returned AppInstanceGroupModel.TaskId. If there are unpaid orders, complete the payment first, and then query the resource details again to confirm that the billing method has been changed.
       * This operation does not accept an expiration time parameter. Do not pass the expiration time from other operations into this request. The task examples only illustrate the purpose of the ID and do not define a fixed prefix or length for real task IDs.
       *
       * @param request ModifyAppInstanceGroupChargeTypeRequest
       * @return ModifyAppInstanceGroupChargeTypeResponse
       */
      Models::ModifyAppInstanceGroupChargeTypeResponse modifyAppInstanceGroupChargeType(const Models::ModifyAppInstanceGroupChargeTypeRequest &request);

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
       * @summary Modifies the attributes of a Wuying cloud browser.
       *
       * @description Modifies the attributes of a Wuying cloud browser.
       *
       * @param tmpReq ModifyBrowserInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBrowserInstanceGroupResponse
       */
      Models::ModifyBrowserInstanceGroupResponse modifyBrowserInstanceGroupWithOptions(const Models::ModifyBrowserInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a Wuying cloud browser.
       *
       * @description Modifies the attributes of a Wuying cloud browser.
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
       * @summary Shares an image with other WUYING users or unshares a shared image.
       *
       * @param request ModifyShareImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyShareImageResponse
       */
      Models::ModifyShareImageResponse modifyShareImageWithOptions(const Models::ModifyShareImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shares an image with other WUYING users or unshares a shared image.
       *
       * @param request ModifyShareImageRequest
       * @return ModifyShareImageResponse
       */
      Models::ModifyShareImageResponse modifyShareImage(const Models::ModifyShareImageRequest &request);

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
       * @summary Queries app instance group reports by region, app instance group, status, user authorization relationship, or statistical date.
       *
       * @description Queries the IDs, names, and statuses of app instance groups in app instance group reports. You can call [ListRegions](~~ListRegions~~) to obtain the business regions and then call [ListAppInstanceGroup](~~ListAppInstanceGroup~~) to obtain the app instance groups. `AppInstanceGroupId` matches the exact ID, and `AppInstanceGroupName` filters by inclusion. If multiple filter conditions are specified at the same time, the intersection is used. When filtering by date, `StatDate` specifies a single day, and `StartDate` and `EndDate` must be specified in pairs to represent a closed interval. If both a single day and an interval are specified, the results must meet both conditions. Before using `EndUserId`, make sure that the user has a valid authorization relationship.
       *
       * @param request QueryAppInstanceGroupReportListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAppInstanceGroupReportListResponse
       */
      Models::QueryAppInstanceGroupReportListResponse queryAppInstanceGroupReportListWithOptions(const Models::QueryAppInstanceGroupReportListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries app instance group reports by region, app instance group, status, user authorization relationship, or statistical date.
       *
       * @description Queries the IDs, names, and statuses of app instance groups in app instance group reports. You can call [ListRegions](~~ListRegions~~) to obtain the business regions and then call [ListAppInstanceGroup](~~ListAppInstanceGroup~~) to obtain the app instance groups. `AppInstanceGroupId` matches the exact ID, and `AppInstanceGroupName` filters by inclusion. If multiple filter conditions are specified at the same time, the intersection is used. When filtering by date, `StatDate` specifies a single day, and `StartDate` and `EndDate` must be specified in pairs to represent a closed interval. If both a single day and an interval are specified, the results must meet both conditions. Before using `EndUserId`, make sure that the user has a valid authorization relationship.
       *
       * @param request QueryAppInstanceGroupReportListRequest
       * @return QueryAppInstanceGroupReportListResponse
       */
      Models::QueryAppInstanceGroupReportListResponse queryAppInstanceGroupReportList(const Models::QueryAppInstanceGroupReportListRequest &request);

      /**
       * @summary Queries the number of successful connections, the number of failed connections, the success rate, and the average connection duration within a specified time range.
       *
       * @description Queries connection statistical reports. Before you invoke this operation, you can invoke [ListRegions](~~ListRegions~~) and [ListAppInstanceGroup](~~ListAppInstanceGroup~~) to obtain the `BizRegionId` and `AppInstanceGroupId` parameters. The `ProductType`, `StartDate`, and `EndDate` parameters are required for server-side validation. The statistical interval is `[StartDate, EndDate)`, which includes the start time but excludes the end time. Results are returned by page, with a maximum of 1,500 entries per page.
       *
       * @param request QueryConnectionReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConnectionReportResponse
       */
      Models::QueryConnectionReportResponse queryConnectionReportWithOptions(const Models::QueryConnectionReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of successful connections, the number of failed connections, the success rate, and the average connection duration within a specified time range.
       *
       * @description Queries connection statistical reports. Before you invoke this operation, you can invoke [ListRegions](~~ListRegions~~) and [ListAppInstanceGroup](~~ListAppInstanceGroup~~) to obtain the `BizRegionId` and `AppInstanceGroupId` parameters. The `ProductType`, `StartDate`, and `EndDate` parameters are required for server-side validation. The statistical interval is `[StartDate, EndDate)`, which includes the start time but excludes the end time. Results are returned by page, with a maximum of 1,500 entries per page.
       *
       * @param request QueryConnectionReportRequest
       * @return QueryConnectionReportResponse
       */
      Models::QueryConnectionReportResponse queryConnectionReport(const Models::QueryConnectionReportRequest &request);

      /**
       * @summary Queries the number of daily active users and streaming daily active users by date.
       *
       * @description Queries the daily active user (DAU) report. StartDate and EndDate are required. The date range is inclusive and cannot exceed 180 days. If ProductType is not specified or is unrecognized, the query defaults to CloudApp. You can use BizRegionId and AppInstanceGroupId to narrow down the scope. If neither is specified, the query returns aggregated data for all business regions. Results are returned in pages, with a maximum of 1,500 records per page.
       *
       * @param request QueryDauReportDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDauReportDataResponse
       */
      Models::QueryDauReportDataResponse queryDauReportDataWithOptions(const Models::QueryDauReportDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of daily active users and streaming daily active users by date.
       *
       * @description Queries the daily active user (DAU) report. StartDate and EndDate are required. The date range is inclusive and cannot exceed 180 days. If ProductType is not specified or is unrecognized, the query defaults to CloudApp. You can use BizRegionId and AppInstanceGroupId to narrow down the scope. If neither is specified, the query returns aggregated data for all business regions. Results are returned in pages, with a maximum of 1,500 records per page.
       *
       * @param request QueryDauReportDataRequest
       * @return QueryDauReportDataResponse
       */
      Models::QueryDauReportDataResponse queryDauReportData(const Models::QueryDauReportDataRequest &request);

      /**
       * @summary Queries the number of monthly active users for each month within a specified time range.
       *
       * @description Queries the monthly active user (MAU) report. `ProductType`, `StartDate`, and `EndDate` are required for server-side validation, and the time span cannot exceed 60 months. The API returns statistical values by month. To adapt to offline data generated on the next day, the last month in the query range uses the day before `EndDate` as the statistical cutoff date. Results are returned in pages, with a maximum of 1,500 entries per page.
       *
       * @param request QueryMauReportDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMauReportDataResponse
       */
      Models::QueryMauReportDataResponse queryMauReportDataWithOptions(const Models::QueryMauReportDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of monthly active users for each month within a specified time range.
       *
       * @description Queries the monthly active user (MAU) report. `ProductType`, `StartDate`, and `EndDate` are required for server-side validation, and the time span cannot exceed 60 months. The API returns statistical values by month. To adapt to offline data generated on the next day, the last month in the query range uses the day before `EndDate` as the statistical cutoff date. Results are returned in pages, with a maximum of 1,500 entries per page.
       *
       * @param request QueryMauReportDataRequest
       * @return QueryMauReportDataResponse
       */
      Models::QueryMauReportDataResponse queryMauReportData(const Models::QueryMauReportDataRequest &request);

      /**
       * @summary Queries the network RTT and low-RTT user statistics within a specified time range.
       *
       * @description Queries network round-trip time (RTT) reports. `ProductType`, `StartDate`, and `EndDate` are required for server-side validation. The statistical interval is `[StartDate, EndDate)`. The minimum, maximum, and average RTT values are measured in milliseconds. The low-RTT threshold is determined by the report statistical caliber, and the current API operation does not return this threshold. Results are returned in pages, with a maximum of 1,500 entries per page.
       *
       * @param request QueryNetworkRttReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryNetworkRttReportResponse
       */
      Models::QueryNetworkRttReportResponse queryNetworkRttReportWithOptions(const Models::QueryNetworkRttReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network RTT and low-RTT user statistics within a specified time range.
       *
       * @description Queries network round-trip time (RTT) reports. `ProductType`, `StartDate`, and `EndDate` are required for server-side validation. The statistical interval is `[StartDate, EndDate)`. The minimum, maximum, and average RTT values are measured in milliseconds. The low-RTT threshold is determined by the report statistical caliber, and the current API operation does not return this threshold. Results are returned in pages, with a maximum of 1,500 entries per page.
       *
       * @param request QueryNetworkRttReportRequest
       * @return QueryNetworkRttReportResponse
       */
      Models::QueryNetworkRttReportResponse queryNetworkRttReport(const Models::QueryNetworkRttReportRequest &request);

      /**
       * @summary Queries the total number of nodes, the number of subscription nodes, and the number of pay-as-you-go nodes by statistical granularity.
       *
       * @description Queries node quantity reports. StartDate, EndDate, and StatDateType are required. The query span limit is determined by the statistical granularity: up to 1 day for 1m and 30m, up to 15 days for 6h, and up to 180 days for 1d. Both the start and end boundaries are included in the query range. Results are returned in pages, with a maximum of 1,500 entries per page.
       *
       * @param request QueryNodeReportDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryNodeReportDataResponse
       */
      Models::QueryNodeReportDataResponse queryNodeReportDataWithOptions(const Models::QueryNodeReportDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number of nodes, the number of subscription nodes, and the number of pay-as-you-go nodes by statistical granularity.
       *
       * @description Queries node quantity reports. StartDate, EndDate, and StatDateType are required. The query span limit is determined by the statistical granularity: up to 1 day for 1m and 30m, up to 15 days for 6h, and up to 180 days for 1d. Both the start and end boundaries are included in the query range. Results are returned in pages, with a maximum of 1,500 entries per page.
       *
       * @param request QueryNodeReportDataRequest
       * @return QueryNodeReportDataResponse
       */
      Models::QueryNodeReportDataResponse queryNodeReportData(const Models::QueryNodeReportDataRequest &request);

      /**
       * @summary Queries the trend of session counts at various time points on a specified date, returned in 10-minute intervals.
       *
       * @description Call this operation to query the session count trend data for the current Alibaba Cloud account on a specified date. The data is an offline statistical result, organized by day, and returns the session counts at various time points on that date.
       * The returned results are aggregated in 10-minute intervals. Each data point is identified by an hour (Hh, values 00 to 23) and a minute (Mi, values 00, 10, 20, 30, 40, 50) representing a specific time point. SessionCntMi is the total number of sessions within the 10-minute interval of that time point. The results are sorted in ascending order by hour and minute.
       * You can specify a business region by using BizRegionId and filter by delivery group by using AppInstanceGroupId. If neither is provided, the summary of session data for all regions and all delivery groups under the current account is returned. The actual region used to filter session data is subject to BizRegionId.
       * StatDate is the statistical date in the yyyyMMdd format. If not provided, the data for yesterday is queried by default. Only dates within the last 90 days are supported. If there is no session data on the specified date, an empty list is returned, and the return code is NO_DATA.
       *
       * @param request QuerySessionDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySessionDataResponse
       */
      Models::QuerySessionDataResponse querySessionDataWithOptions(const Models::QuerySessionDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trend of session counts at various time points on a specified date, returned in 10-minute intervals.
       *
       * @description Call this operation to query the session count trend data for the current Alibaba Cloud account on a specified date. The data is an offline statistical result, organized by day, and returns the session counts at various time points on that date.
       * The returned results are aggregated in 10-minute intervals. Each data point is identified by an hour (Hh, values 00 to 23) and a minute (Mi, values 00, 10, 20, 30, 40, 50) representing a specific time point. SessionCntMi is the total number of sessions within the 10-minute interval of that time point. The results are sorted in ascending order by hour and minute.
       * You can specify a business region by using BizRegionId and filter by delivery group by using AppInstanceGroupId. If neither is provided, the summary of session data for all regions and all delivery groups under the current account is returned. The actual region used to filter session data is subject to BizRegionId.
       * StatDate is the statistical date in the yyyyMMdd format. If not provided, the data for yesterday is queried by default. Only dates within the last 90 days are supported. If there is no session data on the specified date, an empty list is returned, and the return code is NO_DATA.
       *
       * @param request QuerySessionDataRequest
       * @return QuerySessionDataResponse
       */
      Models::QuerySessionDataResponse querySessionData(const Models::QuerySessionDataRequest &request);

      /**
       * @summary Queries the total number of sessions, connected sessions, and streaming sessions by statistical granularity.
       *
       * @description Queries session quantity reports. `StartDate`, `EndDate`, and `StatDateType` are required. The query span limit is determined by the statistical granularity: up to 1 day for `1m` and `30m`, up to 15 days for `6h`, and up to 180 days for `1d`. Both the start and end boundaries are included in the query range. Results are returned in pages, with a maximum of 1,500 records per page.
       *
       * @param request QuerySessionReportDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySessionReportDataResponse
       */
      Models::QuerySessionReportDataResponse querySessionReportDataWithOptions(const Models::QuerySessionReportDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number of sessions, connected sessions, and streaming sessions by statistical granularity.
       *
       * @description Queries session quantity reports. `StartDate`, `EndDate`, and `StatDateType` are required. The query span limit is determined by the statistical granularity: up to 1 day for `1m` and `30m`, up to 15 days for `6h`, and up to 180 days for `1d`. Both the start and end boundaries are included in the query range. Results are returned in pages, with a maximum of 1,500 records per page.
       *
       * @param request QuerySessionReportDataRequest
       * @return QuerySessionReportDataResponse
       */
      Models::QuerySessionReportDataResponse querySessionReportData(const Models::QuerySessionReportDataRequest &request);

      /**
       * @summary Queries the cumulative duration of application usage by a specified user on an hourly basis and returns the top five applications for each hour.
       *
       * @description Queries the application usage of a specified user on an hourly basis. StartDate and EndDate use the yyyyMMdd format. If either parameter is not provided, it defaults to yesterday. Both dates must be within the last 90 days, and the start date cannot be later than the end date. The query range includes the start and end dates. UserId must be set to the ID of the user to query. A maximum of the top five applications by usage duration are returned for each hour.
       *
       * @param request QueryUserAppUsageAggregateByHourRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserAppUsageAggregateByHourResponse
       */
      Models::QueryUserAppUsageAggregateByHourResponse queryUserAppUsageAggregateByHourWithOptions(const Models::QueryUserAppUsageAggregateByHourRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cumulative duration of application usage by a specified user on an hourly basis and returns the top five applications for each hour.
       *
       * @description Queries the application usage of a specified user on an hourly basis. StartDate and EndDate use the yyyyMMdd format. If either parameter is not provided, it defaults to yesterday. Both dates must be within the last 90 days, and the start date cannot be later than the end date. The query range includes the start and end dates. UserId must be set to the ID of the user to query. A maximum of the top five applications by usage duration are returned for each hour.
       *
       * @param request QueryUserAppUsageAggregateByHourRequest
       * @return QueryUserAppUsageAggregateByHourResponse
       */
      Models::QueryUserAppUsageAggregateByHourResponse queryUserAppUsageAggregateByHour(const Models::QueryUserAppUsageAggregateByHourRequest &request);

      /**
       * @summary Queries the ranking of cumulative application usage duration for a specified user within a date range.
       *
       * @description Queries the ranking of application usage duration for a specified user within a statistical range. `StartDate` and `EndDate` use the `yyyyMMdd` format. If either parameter is not provided, it defaults to yesterday. Both dates must be within the last 90 days, and the start date cannot be later than the end date. The query range includes the start and end dates. `UserId` must be set to the ID of the user to be queried. The results are sorted in descending order of cumulative application usage duration.
       *
       * @param request QueryUserAppUsageTimeRankRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserAppUsageTimeRankResponse
       */
      Models::QueryUserAppUsageTimeRankResponse queryUserAppUsageTimeRankWithOptions(const Models::QueryUserAppUsageTimeRankRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ranking of cumulative application usage duration for a specified user within a date range.
       *
       * @description Queries the ranking of application usage duration for a specified user within a statistical range. `StartDate` and `EndDate` use the `yyyyMMdd` format. If either parameter is not provided, it defaults to yesterday. Both dates must be within the last 90 days, and the start date cannot be later than the end date. The query range includes the start and end dates. `UserId` must be set to the ID of the user to be queried. The results are sorted in descending order of cumulative application usage duration.
       *
       * @param request QueryUserAppUsageTimeRankRequest
       * @return QueryUserAppUsageTimeRankResponse
       */
      Models::QueryUserAppUsageTimeRankResponse queryUserAppUsageTimeRank(const Models::QueryUserAppUsageTimeRankRequest &request);

      /**
       * @summary Queries the connection status, last connection time, cumulative usage duration, and session persistence duration of users.
       *
       * @description Queries user usage reports. ProductType, StartDate, and EndDate are required for server-side validation, and the time span cannot exceed 60 months. During the query, the start and end times are converted to `yyyyMMdd` and aggregated by natural days in a closed interval. The results are paginated in descending order of cumulative usage duration, with a maximum of 1,500 records per page. You can combine ConnectionStatus, UserId, BizRegionId, and AppInstanceGroupId for filtering.
       *
       * @param request QueryUserUsageReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserUsageReportResponse
       */
      Models::QueryUserUsageReportResponse queryUserUsageReportWithOptions(const Models::QueryUserUsageReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the connection status, last connection time, cumulative usage duration, and session persistence duration of users.
       *
       * @description Queries user usage reports. ProductType, StartDate, and EndDate are required for server-side validation, and the time span cannot exceed 60 months. During the query, the start and end times are converted to `yyyyMMdd` and aggregated by natural days in a closed interval. The results are paginated in descending order of cumulative usage duration, with a maximum of 1,500 records per page. You can combine ConnectionStatus, UserId, BizRegionId, and AppInstanceGroupId for filtering.
       *
       * @param request QueryUserUsageReportRequest
       * @return QueryUserUsageReportResponse
       */
      Models::QueryUserUsageReportResponse queryUserUsageReport(const Models::QueryUserUsageReportRequest &request);

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
       * @description Make sure you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Workspace before calling this operation.
       * > Prerequisites:
       * > - The delivery group must be in the PUBLISHED state and ChargeType must be PrePaid.
       *
       * @param tmpReq RenewAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewAppInstanceGroupResponse
       */
      Models::RenewAppInstanceGroupResponse renewAppInstanceGroupWithOptions(const Models::RenewAppInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a delivery group.
       *
       * @description Make sure you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Workspace before calling this operation.
       * > Prerequisites:
       * > - The delivery group must be in the PUBLISHED state and ChargeType must be PrePaid.
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
       * @summary Creates and binds tags to cloud resources, and updates the values of existing tags.
       *
       * @param request TagCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagCloudResourcesResponse
       */
      Models::TagCloudResourcesResponse tagCloudResourcesWithOptions(const Models::TagCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and binds tags to cloud resources, and updates the values of existing tags.
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
       * @summary Dissociates applications from a specified image version in batches.
       *
       * @description Only custom images and community images manageable by the current account are supported. If VersionId is omitted, the current active version is used. If specified, the version must belong to the image specified by ImageId. Verify the association between the applications and the version through the image query results before submitting AppIdList. **Dissociating applications does not directly delete application records.** To delete applications, call DeleteApp separately.
       *
       * @param request UnbindAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindAppResponse
       */
      Models::UnbindAppResponse unbindAppWithOptions(const Models::UnbindAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates applications from a specified image version in batches.
       *
       * @description Only custom images and community images manageable by the current account are supported. If VersionId is omitted, the current active version is used. If specified, the version must belong to the image specified by ImageId. Verify the association between the applications and the version through the image query results before submitting AppIdList. **Dissociating applications does not directly delete application records.** To delete applications, call DeleteApp separately.
       *
       * @param request UnbindAppRequest
       * @return UnbindAppResponse
       */
      Models::UnbindAppResponse unbindApp(const Models::UnbindAppRequest &request);

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
       * @summary Untags the specified Wuying app instance groups according to Alibaba Cloud tagging specifications. You can remove specific tags by specifying tag keys, or remove all custom tags from the resources at once by setting `All=true` without specifying tag keys. Currently, only the app instance group (`APPINSTANCEGROUP`) resource type is supported.
       *
       * @description ## Prerequisites
       * To call this operation as a RAM user or by using STS credentials, you must have the `appstreaming:UntagResources` permission.
       * The resources to be untagged must belong to the current Alibaba Cloud account. **This operation currently supports only app instance group resources**. You must set `ResourceType` to `APPINSTANCEGROUP`. You can call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the app instance group ID, and call the [ListTagResources](~~ListTagResources~~) operation to query the tags bound to the resources.
       * ## Metric description
       * - A single request can detach labels from up to **50 resources**. Duplicate resource IDs are automatically deduplicated.
       * - **You must specify at least one of `TagKey.N` and `All`**: If neither is specified, or if `TagKey.N` is not specified and `All` is set to `false`, the operation returns the error code `InvalidParameter.TagKeyListOrAll`.
       *   - If `TagKey.N` is specified: Only the labels corresponding to these label keys are detached. A maximum of 20 label keys can be specified in a single request. In this case, the `All` parameter is ignored.
       *   - If `TagKey.N` is not specified and `All` is set to `true`: All custom labels on the resources are detached, including Wuying system labels that start with `System/` and were attached by calling the [TagResources](~~TagResources~~) operation.
       * - If a specified label key does not exist on a resource, the label key is skipped and no fault is returned.
       * - Label keys that start with `System/` are Wuying system labels. Only `System/Scheduler/GRAYSCALE` and `System/Scheduler/STOP_NEW_USER_CONNECTION` are supported. If you specify other label keys that start with `System/`, the operation returns the error code `InvalidTagPolicy.KeyInvalid` or `InvalidTag.SystemKeyNotAllow`.
       * ## Execution results
       * - **If any specified app instance group does not exist or does not belong to the current account, the entire request fails**, and the operation returns the error code `InvalidAppInstanceGroup.NotFound`. No resources are untagged.
       * - If the untagging is successful, the response contains only `RequestId` and does not return tag details.
       * - If multiple resources are specified and the untagging fails for only some of the resources, the operation still returns a success response, and the response does not contain failure details. Call the [ListTagResources](~~ListTagResources~~) operation to verify the untagging results. If only one resource is specified and the untagging fails, the operation directly returns the corresponding error code.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the app instance group ID. To confirm the tag keys bound to the resources, call the [ListTagResources](~~ListTagResources~~) operation.
       * 2. Call this operation, specify `ResourceType=APPINSTANCEGROUP` and `ResourceId.N`, and specify `TagKey.N` or set `All=true` to indicate the tags to be removed.
       * 3. To rebind tags, call the [TagResources](~~TagResources~~) operation.
       * The masked identifiers in the examples are used to demonstrate the format. Replace them with your actual identifiers when you call the operation.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Untags the specified Wuying app instance groups according to Alibaba Cloud tagging specifications. You can remove specific tags by specifying tag keys, or remove all custom tags from the resources at once by setting `All=true` without specifying tag keys. Currently, only the app instance group (`APPINSTANCEGROUP`) resource type is supported.
       *
       * @description ## Prerequisites
       * To call this operation as a RAM user or by using STS credentials, you must have the `appstreaming:UntagResources` permission.
       * The resources to be untagged must belong to the current Alibaba Cloud account. **This operation currently supports only app instance group resources**. You must set `ResourceType` to `APPINSTANCEGROUP`. You can call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the app instance group ID, and call the [ListTagResources](~~ListTagResources~~) operation to query the tags bound to the resources.
       * ## Metric description
       * - A single request can detach labels from up to **50 resources**. Duplicate resource IDs are automatically deduplicated.
       * - **You must specify at least one of `TagKey.N` and `All`**: If neither is specified, or if `TagKey.N` is not specified and `All` is set to `false`, the operation returns the error code `InvalidParameter.TagKeyListOrAll`.
       *   - If `TagKey.N` is specified: Only the labels corresponding to these label keys are detached. A maximum of 20 label keys can be specified in a single request. In this case, the `All` parameter is ignored.
       *   - If `TagKey.N` is not specified and `All` is set to `true`: All custom labels on the resources are detached, including Wuying system labels that start with `System/` and were attached by calling the [TagResources](~~TagResources~~) operation.
       * - If a specified label key does not exist on a resource, the label key is skipped and no fault is returned.
       * - Label keys that start with `System/` are Wuying system labels. Only `System/Scheduler/GRAYSCALE` and `System/Scheduler/STOP_NEW_USER_CONNECTION` are supported. If you specify other label keys that start with `System/`, the operation returns the error code `InvalidTagPolicy.KeyInvalid` or `InvalidTag.SystemKeyNotAllow`.
       * ## Execution results
       * - **If any specified app instance group does not exist or does not belong to the current account, the entire request fails**, and the operation returns the error code `InvalidAppInstanceGroup.NotFound`. No resources are untagged.
       * - If the untagging is successful, the response contains only `RequestId` and does not return tag details.
       * - If multiple resources are specified and the untagging fails for only some of the resources, the operation still returns a success response, and the response does not contain failure details. Call the [ListTagResources](~~ListTagResources~~) operation to verify the untagging results. If only one resource is specified and the untagging fails, the operation directly returns the corresponding error code.
       * ## Call sequence
       * 1. Call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the app instance group ID. To confirm the tag keys bound to the resources, call the [ListTagResources](~~ListTagResources~~) operation.
       * 2. Call this operation, specify `ResourceType=APPINSTANCEGROUP` and `ResourceId.N`, and specify `TagKey.N` or set `All=true` to indicate the tags to be removed.
       * 3. To rebind tags, call the [TagResources](~~TagResources~~) operation.
       * The masked identifiers in the examples are used to demonstrate the format. Replace them with your actual identifiers when you call the operation.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Modifies the runtime parameters, optimization configurations, and user configurations of a specified application adapter.
       *
       * @description The AdaptorId must correspond to a valid application adapter manageable by the current account. Pass only the configurations that need to be modified in this request.
       * SilenceParam is used for application startup parameters. UserConfig is used for application runtime configurations. **This operation does not support modifying application scripts or executable file paths through AppScript or ExecuteFileAddress. Do not pass these two parameters.**
       *
       * @param tmpReq UpdateAdaptorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAdaptorResponse
       */
      Models::UpdateAdaptorResponse updateAdaptorWithOptions(const Models::UpdateAdaptorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the runtime parameters, optimization configurations, and user configurations of a specified application adapter.
       *
       * @description The AdaptorId must correspond to a valid application adapter manageable by the current account. Pass only the configurations that need to be modified in this request.
       * SilenceParam is used for application startup parameters. UserConfig is used for application runtime configurations. **This operation does not support modifying application scripts or executable file paths through AppScript or ExecuteFileAddress. Do not pass these two parameters.**
       *
       * @param request UpdateAdaptorRequest
       * @return UpdateAdaptorResponse
       */
      Models::UpdateAdaptorResponse updateAdaptor(const Models::UpdateAdaptorRequest &request);

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
       * @summary Modifies the name, description, version information, and associated application adapters of an image.
       *
       * @description You can only modify images that are owned by the current account and allow modifications. Images shared with the current account cannot be modified.
       * You must provide at least one of ImageId and VersionId. If both are provided, they must point to the same image. If VersionId is omitted, the current effective version of the image is used. Passing a non-empty AdaptorIdList updates the application adapter associations for the selected version based on the complete list. Make sure to include the adapters that you still want to retain.
       *
       * @param request UpdateImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateImageResponse
       */
      Models::UpdateImageResponse updateImageWithOptions(const Models::UpdateImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, version information, and associated application adapters of an image.
       *
       * @description You can only modify images that are owned by the current account and allow modifications. Images shared with the current account cannot be modified.
       * You must provide at least one of ImageId and VersionId. If both are provided, they must point to the same image. If VersionId is omitted, the current effective version of the image is used. Passing a non-empty AdaptorIdList updates the application adapter associations for the selected version based on the complete list. Make sure to include the adapters that you still want to retain.
       *
       * @param request UpdateImageRequest
       * @return UpdateImageResponse
       */
      Models::UpdateImageResponse updateImage(const Models::UpdateImageRequest &request);

      /**
       * @summary Sends a status update request for an existing image creation task to the corresponding creation resource.
       *
       * @description The task must exist before you call this operation, and the corresponding creation resource and resource node must be available. The TaskType must match the actual type of the task.
       * **This operation does not support modifying the task step, image version, or destination region by using TaskStep, VersionId, or BizRegionId. Do not pass these three parameters.** A successful request only indicates that the status update call is completed. To query the final status of the task, call GetTask.
       *
       * @param request UpdateImageTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateImageTaskResponse
       */
      Models::UpdateImageTaskResponse updateImageTaskWithOptions(const Models::UpdateImageTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a status update request for an existing image creation task to the corresponding creation resource.
       *
       * @description The task must exist before you call this operation, and the corresponding creation resource and resource node must be available. The TaskType must match the actual type of the task.
       * **This operation does not support modifying the task step, image version, or destination region by using TaskStep, VersionId, or BizRegionId. Do not pass these three parameters.** A successful request only indicates that the status update call is completed. To query the final status of the task, call GetTask.
       *
       * @param request UpdateImageTaskRequest
       * @return UpdateImageTaskResponse
       */
      Models::UpdateImageTaskResponse updateImageTask(const Models::UpdateImageTaskRequest &request);

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

      /**
       * @summary Validates the LLM template configuration.
       *
       * @param request ValidateLlmTemplateConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateLlmTemplateConfigResponse
       */
      Models::ValidateLlmTemplateConfigResponse validateLlmTemplateConfigWithOptions(const Models::ValidateLlmTemplateConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates the LLM template configuration.
       *
       * @param request ValidateLlmTemplateConfigRequest
       * @return ValidateLlmTemplateConfigResponse
       */
      Models::ValidateLlmTemplateConfigResponse validateLlmTemplateConfig(const Models::ValidateLlmTemplateConfigRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
