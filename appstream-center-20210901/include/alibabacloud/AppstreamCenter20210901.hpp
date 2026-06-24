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
       * @summary Sets the execution time for an over-the-air update.
       *
       * @param request ApproveOtaTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApproveOtaTaskResponse
       */
      Models::ApproveOtaTaskResponse approveOtaTaskWithOptions(const Models::ApproveOtaTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the execution time for an over-the-air update.
       *
       * @param request ApproveOtaTaskRequest
       * @return ApproveOtaTaskResponse
       */
      Models::ApproveOtaTaskResponse approveOtaTask(const Models::ApproveOtaTaskRequest &request);

      /**
       * @summary 为研发主机分配辅助私有IP
       *
       * @param request AssignWuyingServerPrivateAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignWuyingServerPrivateAddressesResponse
       */
      Models::AssignWuyingServerPrivateAddressesResponse assignWuyingServerPrivateAddressesWithOptions(const Models::AssignWuyingServerPrivateAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为研发主机分配辅助私有IP
       *
       * @param request AssignWuyingServerPrivateAddressesRequest
       * @return AssignWuyingServerPrivateAddressesResponse
       */
      Models::AssignWuyingServerPrivateAddressesResponse assignWuyingServerPrivateAddresses(const Models::AssignWuyingServerPrivateAddressesRequest &request);

      /**
       * @summary Add or remove assigned users for a delivery group. Only users added as assigned users can access cloud applications.
       *
       * @description > After changing the assigned users, the selected users will receive corresponding notification emails. Generally, it takes about 2 minutes for the changes to take effect on the client.
       *
       * @param tmpReq AuthorizeInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeInstanceGroupResponse
       */
      Models::AuthorizeInstanceGroupResponse authorizeInstanceGroupWithOptions(const Models::AuthorizeInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add or remove assigned users for a delivery group. Only users added as assigned users can access cloud applications.
       *
       * @description > After changing the assigned users, the selected users will receive corresponding notification emails. Generally, it takes about 2 minutes for the changes to take effect on the client.
       *
       * @param request AuthorizeInstanceGroupRequest
       * @return AuthorizeInstanceGroupResponse
       */
      Models::AuthorizeInstanceGroupResponse authorizeInstanceGroup(const Models::AuthorizeInstanceGroupRequest &request);

      /**
       * @summary Creates LLM templates in batches.
       *
       * @description You can create model templates in batches under a model provider template in the Wuying Agent Management Center. You can add multiple models at a time and specify one of them as the default model. Existing models are automatically skipped and are not created again.
       * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request BatchCreateLlmTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateLlmTemplatesResponse
       */
      Models::BatchCreateLlmTemplatesResponse batchCreateLlmTemplatesWithOptions(const Models::BatchCreateLlmTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates LLM templates in batches.
       *
       * @description You can create model templates in batches under a model provider template in the Wuying Agent Management Center. You can add multiple models at a time and specify one of them as the default model. Existing models are automatically skipped and are not created again.
       * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request BatchCreateLlmTemplatesRequest
       * @return BatchCreateLlmTemplatesResponse
       */
      Models::BatchCreateLlmTemplatesResponse batchCreateLlmTemplates(const Models::BatchCreateLlmTemplatesRequest &request);

      /**
       * @summary Configures the model group for a resource group.
       *
       * @description You can assign a model group to resources associated with agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. The model group serves as the inference engine for tasks executed by agents within the resource group.
       * When both an agent runtime and its resource group have model groups configured, the model group bound to the resource group takes effect. The resource group setting takes priority over the agent runtime setting.
       * Before calling this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request ConfigResourceGroupModelTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigResourceGroupModelTemplateResponse
       */
      Models::ConfigResourceGroupModelTemplateResponse configResourceGroupModelTemplateWithOptions(const Models::ConfigResourceGroupModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the model group for a resource group.
       *
       * @description You can assign a model group to resources associated with agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. The model group serves as the inference engine for tasks executed by agents within the resource group.
       * When both an agent runtime and its resource group have model groups configured, the model group bound to the resource group takes effect. The resource group setting takes priority over the agent runtime setting.
       * Before calling this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request ConfigResourceGroupModelTemplateRequest
       * @return ConfigResourceGroupModelTemplateResponse
       */
      Models::ConfigResourceGroupModelTemplateResponse configResourceGroupModelTemplate(const Models::ConfigResourceGroupModelTemplateRequest &request);

      /**
       * @summary Configures a third-party channel for Agent runtime.
       *
       * @description You can configure third-party channels for Agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. These channels serve as extended Agent communication methods beyond the AgentIM channel.
       * Before using this operation, make sure you are familiar with the operations and usage of the Wuying Agent Management Center.
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
       * Before using this operation, make sure you are familiar with the operations and usage of the Wuying Agent Management Center.
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
       * @description Make sure that you are familiar with the [billing and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Cloud Application before you call this operation.
       * A delivery group is a logical grouping for delivering cloud applications to end users. It includes the underlying cloud application resources, images that contain cloud applications, resource management policies, and user assignment settings. For details, see [Publish a delivery group](https://help.aliyun.com/document_detail/426046.html).
       *
       * @param tmpReq CreateAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppInstanceGroupResponse
       */
      Models::CreateAppInstanceGroupResponse createAppInstanceGroupWithOptions(const Models::CreateAppInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a delivery group.
       *
       * @description Make sure that you are familiar with the [billing and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Cloud Application before you call this operation.
       * A delivery group is a logical grouping for delivering cloud applications to end users. It includes the underlying cloud application resources, images that contain cloud applications, resource management policies, and user assignment settings. For details, see [Publish a delivery group](https://help.aliyun.com/document_detail/426046.html).
       *
       * @param request CreateAppInstanceGroupRequest
       * @return CreateAppInstanceGroupResponse
       */
      Models::CreateAppInstanceGroupResponse createAppInstanceGroup(const Models::CreateAppInstanceGroupRequest &request);

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
       * @summary Create Model Provider Template
       *
       * @description You can create a model provider template under a model template in the Wuying Agent Management Center. This template is used to configure the connection information and keys for model services (such as Alibaba Cloud Bailian, Token Plan, and Moonshot) that Agents can call. After creation, the model provider template is automatically associated with the specified model template.
       * Make sure you are fully familiar with the operations and usage of the Wuying Agent Management Center before calling this API.
       *
       * @param request CreateModelProviderTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelProviderTemplateResponse
       */
      Models::CreateModelProviderTemplateResponse createModelProviderTemplateWithOptions(const Models::CreateModelProviderTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Model Provider Template
       *
       * @description You can create a model provider template under a model template in the Wuying Agent Management Center. This template is used to configure the connection information and keys for model services (such as Alibaba Cloud Bailian, Token Plan, and Moonshot) that Agents can call. After creation, the model provider template is automatically associated with the specified model template.
       * Make sure you are fully familiar with the operations and usage of the Wuying Agent Management Center before calling this API.
       *
       * @param request CreateModelProviderTemplateRequest
       * @return CreateModelProviderTemplateResponse
       */
      Models::CreateModelProviderTemplateResponse createModelProviderTemplate(const Models::CreateModelProviderTemplateRequest &request);

      /**
       * @summary Creates a model creation template.
       *
       * @description You can create a model group in the WUYING Agent Management Center to manage the model providers and model scope that an Agent can invoke. After creation, you can attach the model group to a cloud computer as the inference engine configuration for Agent task execution.
       * Make sure that you are familiar with the operations and usage of the WUYING Agent Management Center before calling this operation.
       *
       * @param request CreateModelTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelTemplateResponse
       */
      Models::CreateModelTemplateResponse createModelTemplateWithOptions(const Models::CreateModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model creation template.
       *
       * @description You can create a model group in the WUYING Agent Management Center to manage the model providers and model scope that an Agent can invoke. After creation, you can attach the model group to a cloud computer as the inference engine configuration for Agent task execution.
       * Make sure that you are familiar with the operations and usage of the WUYING Agent Management Center before calling this operation.
       *
       * @param request CreateModelTemplateRequest
       * @return CreateModelTemplateResponse
       */
      Models::CreateModelTemplateResponse createModelTemplate(const Models::CreateModelTemplateRequest &request);

      /**
       * @summary Creates one or more workstations.
       *
       * @description 1. A project corresponds to the resource configuration module in the CloudFlow console.
       * 2. If the ContentId specified in the request parameters has multiple versions, this API operation <notice>uses the default version</notice> for binding.
       * 3. This operation succeeds only when the default version of the content is in an available state.
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
       * 2. If the ContentId specified in the request parameters has multiple versions, this API operation <notice>uses the default version</notice> for binding.
       * 3. This operation succeeds only when the default version of the content is in an available state.
       *
       * @param request CreateWuyingServerRequest
       * @return CreateWuyingServerResponse
       */
      Models::CreateWuyingServerResponse createWuyingServer(const Models::CreateWuyingServerRequest &request);

      /**
       * @summary Deletes a pay-as-you-go resource-based delivery group.
       *
       * @description > This operation does not support deleting delivery groups that use subscription resources.
       *
       * @param request DeleteAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppInstanceGroupResponse
       */
      Models::DeleteAppInstanceGroupResponse deleteAppInstanceGroupWithOptions(const Models::DeleteAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a pay-as-you-go resource-based delivery group.
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
       * @description Only instances in the init or idle state can be deleted. This operation is available only to specific customers.
       *
       * @param request DeleteAppInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppInstancesResponse
       */
      Models::DeleteAppInstancesResponse deleteAppInstancesWithOptions(const Models::DeleteAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified application instance.
       *
       * @description Only instances in the init or idle state can be deleted. This operation is available only to specific customers.
       *
       * @param request DeleteAppInstancesRequest
       * @return DeleteAppInstancesResponse
       */
      Models::DeleteAppInstancesResponse deleteAppInstances(const Models::DeleteAppInstancesRequest &request);

      /**
       * @summary Deletes a custom AppStream image.
       *
       * @description - You can delete only custom images that belong to you.
       * - For images associated with the AppStream Cloud Computer Pool, AppStream Cloud Application, or AppStream Workstation product lines, you must ensure that no AppStream instances are using the image before you can delete it.
       * - If an AppStream Cloud Desktop template references an image, the template is also deleted when the image is deleted.
       * - If an image is available in multiple regions, deleting the image removes it from all regions.
       *
       * @param request DeleteImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImageWithOptions(const Models::DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom AppStream image.
       *
       * @description - You can delete only custom images that belong to you.
       * - For images associated with the AppStream Cloud Computer Pool, AppStream Cloud Application, or AppStream Workstation product lines, you must ensure that no AppStream instances are using the image before you can delete it.
       * - If an AppStream Cloud Desktop template references an image, the template is also deleted when the image is deleted.
       * - If an image is available in multiple regions, deleting the image removes it from all regions.
       *
       * @param request DeleteImageRequest
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImage(const Models::DeleteImageRequest &request);

      /**
       * @summary Deletes an LLM template.
       *
       * @description You can delete a model template that has been created under a model provider template in the Wuying Agent Management Center. Before deletion, ensure that the model is not the default model of an associated model group. Otherwise, the deletion fails. After deletion, the model configurations of associated cloud computers are automatically refreshed.
       * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request DeleteLlmTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLlmTemplateResponse
       */
      Models::DeleteLlmTemplateResponse deleteLlmTemplateWithOptions(const Models::DeleteLlmTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an LLM template.
       *
       * @description You can delete a model template that has been created under a model provider template in the Wuying Agent Management Center. Before deletion, ensure that the model is not the default model of an associated model group. Otherwise, the deletion fails. After deletion, the model configurations of associated cloud computers are automatically refreshed.
       * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request DeleteLlmTemplateRequest
       * @return DeleteLlmTemplateResponse
       */
      Models::DeleteLlmTemplateResponse deleteLlmTemplate(const Models::DeleteLlmTemplateRequest &request);

      /**
       * @summary Deletes a model provider template.
       *
       * @description You can delete a model provider template that has been created under model templates in the WUYING Agent Management Center. Before deletion, make sure that the model provider is not the provider of the default model and is not a system preset type provider (such as WUYING credits package). After deletion, the associated models and key configurations are also removed.
       * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request DeleteModelProviderTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelProviderTemplateResponse
       */
      Models::DeleteModelProviderTemplateResponse deleteModelProviderTemplateWithOptions(const Models::DeleteModelProviderTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model provider template.
       *
       * @description You can delete a model provider template that has been created under model templates in the WUYING Agent Management Center. Before deletion, make sure that the model provider is not the provider of the default model and is not a system preset type provider (such as WUYING credits package). After deletion, the associated models and key configurations are also removed.
       * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
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
       * @summary Configure LogShipper for Simple Log Service
       *
       * @param request DeliverToUserSlsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeliverToUserSlsResponse
       */
      Models::DeliverToUserSlsResponse deliverToUserSlsWithOptions(const Models::DeliverToUserSlsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configure LogShipper for Simple Log Service
       *
       * @param request DeliverToUserSlsRequest
       * @return DeliverToUserSlsResponse
       */
      Models::DeliverToUserSlsResponse deliverToUserSls(const Models::DeliverToUserSlsRequest &request);

      /**
       * @summary 查询研发主机详情
       *
       * @param request DescribeWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWuyingServerResponse
       */
      Models::DescribeWuyingServerResponse describeWuyingServerWithOptions(const Models::DescribeWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询研发主机详情
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
       * @summary Retrieves connection credentials for a cloud application.
       *
       * @description This operation requires multiple invokes (at least two) to obtain the connection credentials.
       * On the first invoke, an application instance is allocated to the specified convenience account and the application is started. A startup task ID (`TaskID`) is returned.
       * On subsequent invokes, pass the `TaskID` request parameter to query whether the task is complete. When the returned task status (`TaskStatus`) is completed (`Finished`), the connection credentials (`Ticket`) are also returned.
       *
       * @param request GetConnectionTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConnectionTicketResponse
       */
      Models::GetConnectionTicketResponse getConnectionTicketWithOptions(const Models::GetConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves connection credentials for a cloud application.
       *
       * @description This operation requires multiple invokes (at least two) to obtain the connection credentials.
       * On the first invoke, an application instance is allocated to the specified convenience account and the application is started. A startup task ID (`TaskID`) is returned.
       * On subsequent invokes, pass the `TaskID` request parameter to query whether the task is complete. When the returned task status (`TaskStatus`) is completed (`Finished`), the connection credentials (`Ticket`) are also returned.
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
       * @summary Queries the details of a model provider template.
       *
       * @description You can query the details of a specified model provider template in the WUYING Agent Management Center, including the provider name, description, and connection configuration list.
       * Before you call this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
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
       * Before you call this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request GetModelProviderTemplateRequest
       * @return GetModelProviderTemplateResponse
       */
      Models::GetModelProviderTemplateResponse getModelProviderTemplate(const Models::GetModelProviderTemplateRequest &request);

      /**
       * @summary Queries the details of an over-the-air update task, including the available version and version description.
       *
       * @param request GetOtaTaskByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOtaTaskByTaskIdResponse
       */
      Models::GetOtaTaskByTaskIdResponse getOtaTaskByTaskIdWithOptions(const Models::GetOtaTaskByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an over-the-air update task, including the available version and version description.
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
       * @description You can query the third-party channel configuration status of Agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center.
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
       * @description You can query the third-party channel configuration status of Agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center.
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
       * @summary Queries the details of multiple delivery groups. This operation does not specify a particular delivery group but queries the details of all delivery groups that meet the specified conditions.
       *
       * @param request ListAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppInstanceGroupResponse
       */
      Models::ListAppInstanceGroupResponse listAppInstanceGroupWithOptions(const Models::ListAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of multiple delivery groups. This operation does not specify a particular delivery group but queries the details of all delivery groups that meet the specified conditions.
       *
       * @param request ListAppInstanceGroupRequest
       * @return ListAppInstanceGroupResponse
       */
      Models::ListAppInstanceGroupResponse listAppInstanceGroup(const Models::ListAppInstanceGroupRequest &request);

      /**
       * @summary Queries the details of session instances in a delivery group, including instance IDs, instance statuses, creation time, update time, session statuses, and public IP addresses of primary network interfaces.
       *
       * @param request ListAppInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppInstancesResponse
       */
      Models::ListAppInstancesResponse listAppInstancesWithOptions(const Models::ListAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of session instances in a delivery group, including instance IDs, instance statuses, creation time, update time, session statuses, and public IP addresses of primary network interfaces.
       *
       * @param request ListAppInstancesRequest
       * @return ListAppInstancesResponse
       */
      Models::ListAppInstancesResponse listAppInstances(const Models::ListAppInstancesRequest &request);

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
       * @summary Queries the binding information between users and resources.
       *
       * @param request ListBindInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBindInfoResponse
       */
      Models::ListBindInfoResponse listBindInfoWithOptions(const Models::ListBindInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the binding information between users and resources.
       *
       * @param request ListBindInfoRequest
       * @return ListBindInfoResponse
       */
      Models::ListBindInfoResponse listBindInfo(const Models::ListBindInfoRequest &request);

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
       * @summary Queries a list of LLM templates.
       *
       * @description You can use paging to retrieve the list of model templates under a model provider template in the Wuying Agent Management Center. You can filter results by model group ID, model provider template ID, model template ID, and model encoding. When you query by model group dimension, the default model is automatically pinned to the top.
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
       * @description You can use paging to retrieve the list of model templates under a model provider template in the Wuying Agent Management Center. You can filter results by model group ID, model provider template ID, model template ID, and model encoding. When you query by model group dimension, the default model is automatically pinned to the top.
       * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request ListLlmTemplatesRequest
       * @return ListLlmTemplatesResponse
       */
      Models::ListLlmTemplatesResponse listLlmTemplates(const Models::ListLlmTemplatesRequest &request);

      /**
       * @summary 查询模型提供商 Endpoint 列表
       *
       * @param request ListModelProviderEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelProviderEndpointsResponse
       */
      Models::ListModelProviderEndpointsResponse listModelProviderEndpointsWithOptions(const Models::ListModelProviderEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模型提供商 Endpoint 列表
       *
       * @param request ListModelProviderEndpointsRequest
       * @return ListModelProviderEndpointsResponse
       */
      Models::ListModelProviderEndpointsResponse listModelProviderEndpoints(const Models::ListModelProviderEndpointsRequest &request);

      /**
       * @summary Queries the list of model provider templates.
       *
       * @description You can perform a paged query to retrieve the list of model provider templates under a specified model group in the WUYING Agent Management Center. You can filter results by provider name, model group ID, and provider template ID. Paging is supported.
       * Before calling this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
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
       * Before calling this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request ListModelProviderTemplatesRequest
       * @return ListModelProviderTemplatesResponse
       */
      Models::ListModelProviderTemplatesResponse listModelProviderTemplates(const Models::ListModelProviderTemplatesRequest &request);

      /**
       * @summary Queries the list of resource groups associated with a model group.
       *
       * @description You can call this operation to query the list of resource groups authorized by a model group in the Wuying Agent Management Center.
       * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request ListModelTemplateResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelTemplateResourceGroupResponse
       */
      Models::ListModelTemplateResourceGroupResponse listModelTemplateResourceGroupWithOptions(const Models::ListModelTemplateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of resource groups associated with a model group.
       *
       * @description You can call this operation to query the list of resource groups authorized by a model group in the Wuying Agent Management Center.
       * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request ListModelTemplateResourceGroupRequest
       * @return ListModelTemplateResourceGroupResponse
       */
      Models::ListModelTemplateResourceGroupResponse listModelTemplateResourceGroup(const Models::ListModelTemplateResourceGroupRequest &request);

      /**
       * @summary Queries a list of model templates.
       *
       * @description You can use paged query to retrieve model groups that have been created in the Wuying Agent Management Center, with paging support. You can filter results by Agent provider, Agent platform, template group ID, and whether models have been configured.
       * Before calling this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param tmpReq ListModelTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelTemplatesResponse
       */
      Models::ListModelTemplatesResponse listModelTemplatesWithOptions(const Models::ListModelTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of model templates.
       *
       * @description You can use paged query to retrieve model groups that have been created in the Wuying Agent Management Center, with paging support. You can filter results by Agent provider, Agent platform, template group ID, and whether models have been configured.
       * Before calling this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
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
       * @summary Queries the regions supported by WUYING Cloud Application.
       *
       * @description > The regions returned by this operation are not necessarily all available regions. For information about available regions, see [Supported regions](https://help.aliyun.com/document_detail/426036.html).
       *
       * @param request ListRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const Models::ListRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions supported by WUYING Cloud Application.
       *
       * @description > The regions returned by this operation are not necessarily all available regions. For information about available regions, see [Supported regions](https://help.aliyun.com/document_detail/426036.html).
       *
       * @param request ListRegionsRequest
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions(const Models::ListRegionsRequest &request);

      /**
       * @summary Queries the tag list of one or more specified cloud resources.
       *
       * @param request ListTagCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagCloudResourcesResponse
       */
      Models::ListTagCloudResourcesResponse listTagCloudResourcesWithOptions(const Models::ListTagCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag list of one or more specified cloud resources.
       *
       * @param request ListTagCloudResourcesRequest
       * @return ListTagCloudResourcesResponse
       */
      Models::ListTagCloudResourcesResponse listTagCloudResources(const Models::ListTagCloudResourcesRequest &request);

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
       * @summary Queries the list of workstations.
       *
       * @param request ListWuyingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWuyingServerResponse
       */
      Models::ListWuyingServerResponse listWuyingServerWithOptions(const Models::ListWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of workstations.
       *
       * @param request ListWuyingServerRequest
       * @return ListWuyingServerResponse
       */
      Models::ListWuyingServerResponse listWuyingServer(const Models::ListWuyingServerRequest &request);

      /**
       * @summary Logs off all sessions in a pay-as-you-go delivery group that has scheduled auto scaling policies enabled.
       *
       * @description > This operation is applicable only to pay-as-you-go resource delivery groups that have scheduled auto scaling policies enabled, and can be called successfully only outside the scaling time periods configured in the scheduled auto scaling policies.
       *
       * @param request LogOffAllSessionsInAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LogOffAllSessionsInAppInstanceGroupResponse
       */
      Models::LogOffAllSessionsInAppInstanceGroupResponse logOffAllSessionsInAppInstanceGroupWithOptions(const Models::LogOffAllSessionsInAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Logs off all sessions in a pay-as-you-go delivery group that has scheduled auto scaling policies enabled.
       *
       * @description > This operation is applicable only to pay-as-you-go resource delivery groups that have scheduled auto scaling policies enabled, and can be called successfully only outside the scaling time periods configured in the scheduled auto scaling policies.
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
       * @summary Modifies the scaling mode of a delivery group, including fixed quantity (no elastic scaling), scheduled scaling, and automatic scaling.
       *
       * @description You can configure the scaling pattern for WUYING Cloud Application resources in Settings:
       * - Fixed quantity: Elastic scaling is not used.
       * - Automatic scaling: Automatically scales resources based on the number of connected sessions and the idle duration without session connections.
       * - Scheduled scaling: Executes resource scaling during specified time periods on specified dates.
       * Before using this operation, make sure that you fully understand the [billing method and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Cloud Application.
       *
       * @param tmpReq ModifyNodePoolAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNodePoolAttributeResponse
       */
      Models::ModifyNodePoolAttributeResponse modifyNodePoolAttributeWithOptions(const Models::ModifyNodePoolAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the scaling mode of a delivery group, including fixed quantity (no elastic scaling), scheduled scaling, and automatic scaling.
       *
       * @description You can configure the scaling pattern for WUYING Cloud Application resources in Settings:
       * - Fixed quantity: Elastic scaling is not used.
       * - Automatic scaling: Automatically scales resources based on the number of connected sessions and the idle duration without session connections.
       * - Scheduled scaling: Executes resource scaling during specified time periods on specified dates.
       * Before using this operation, make sure that you fully understand the [billing method and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Cloud Application.
       *
       * @param request ModifyNodePoolAttributeRequest
       * @return ModifyNodePoolAttributeResponse
       */
      Models::ModifyNodePoolAttributeResponse modifyNodePoolAttribute(const Models::ModifyNodePoolAttributeRequest &request);

      /**
       * @summary Modifies the configuration of an administrator account, such as whether to enable resource expiration reminders.
       *
       * @param request ModifyTenantConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTenantConfigResponse
       */
      Models::ModifyTenantConfigResponse modifyTenantConfigWithOptions(const Models::ModifyTenantConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an administrator account, such as whether to enable resource expiration reminders.
       *
       * @param request ModifyTenantConfigRequest
       * @return ModifyTenantConfigResponse
       */
      Models::ModifyTenantConfigResponse modifyTenantConfig(const Models::ModifyTenantConfigRequest &request);

      /**
       * @summary Modifies the properties of a cloud graphics workstation.
       *
       * @param request ModifyWuyingServerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWuyingServerAttributeResponse
       */
      Models::ModifyWuyingServerAttributeResponse modifyWuyingServerAttributeWithOptions(const Models::ModifyWuyingServerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the properties of a cloud graphics workstation.
       *
       * @param request ModifyWuyingServerAttributeRequest
       * @return ModifyWuyingServerAttributeResponse
       */
      Models::ModifyWuyingServerAttributeResponse modifyWuyingServerAttribute(const Models::ModifyWuyingServerAttributeRequest &request);

      /**
       * @summary Performs a paged query on allocated users added to a delivery group.
       *
       * @param request PageListAppInstanceGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PageListAppInstanceGroupUserResponse
       */
      Models::PageListAppInstanceGroupUserResponse pageListAppInstanceGroupUserWithOptions(const Models::PageListAppInstanceGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query on allocated users added to a delivery group.
       *
       * @param request PageListAppInstanceGroupUserRequest
       * @return PageListAppInstanceGroupUserResponse
       */
      Models::PageListAppInstanceGroupUserResponse pageListAppInstanceGroupUser(const Models::PageListAppInstanceGroupUserRequest &request);

      /**
       * @summary Removes model groups from a resource group.
       *
       * @description You can authorize model groups for resources that belong to Agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. The model groups serve as inference engines for Agents to execute tasks within the resource group.
       * When an Agent runtime has its own model group configured and the resource group it belongs to also has a model group configured, the model group bound to the resource group takes effect. The resource group setting takes priority over the Agent runtime setting.
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
       * @description You can authorize model groups for resources that belong to Agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. The model groups serve as inference engines for Agents to execute tasks within the resource group.
       * When an Agent runtime has its own model group configured and the resource group it belongs to also has a model group configured, the model group bound to the resource group takes effect. The resource group setting takes priority over the Agent runtime setting.
       * When you remove the model group from the resource group to which an Agent runtime belongs, the model group configured on the Agent runtime itself automatically takes effect.
       * Before calling this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
       *
       * @param request RemoveResourceGroupModelTemplateRequest
       * @return RemoveResourceGroupModelTemplateResponse
       */
      Models::RemoveResourceGroupModelTemplateResponse removeResourceGroupModelTemplate(const Models::RemoveResourceGroupModelTemplateRequest &request);

      /**
       * @summary Removes a third-party channel configuration from an agent runtime.
       *
       * @description You can call this operation to remove a specific third-party channel configuration from agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. After the configuration is removed, the agent can no longer use the third-party channel for conversations.
       * Before calling this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request RemoveRuntimeChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveRuntimeChannelResponse
       */
      Models::RemoveRuntimeChannelResponse removeRuntimeChannelWithOptions(const Models::RemoveRuntimeChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a third-party channel configuration from an agent runtime.
       *
       * @description You can call this operation to remove a specific third-party channel configuration from agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. After the configuration is removed, the agent can no longer use the third-party channel for conversations.
       * Before calling this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request RemoveRuntimeChannelRequest
       * @return RemoveRuntimeChannelResponse
       */
      Models::RemoveRuntimeChannelResponse removeRuntimeChannel(const Models::RemoveRuntimeChannelRequest &request);

      /**
       * @summary Removes a model group from an Agent runtime resource.
       *
       * @description You can remove model groups from Agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. When an Agent runtime resource needs to switch to a different model group, call this operation first to remove the authorization relationship between the Agent runtime resource and the existing model group.
       * Make sure that you are familiar with the operations and usage of the Wuying Agent Management Center before calling this operation.
       *
       * @param request RemoveRuntimeModelTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveRuntimeModelTemplateResponse
       */
      Models::RemoveRuntimeModelTemplateResponse removeRuntimeModelTemplateWithOptions(const Models::RemoveRuntimeModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a model group from an Agent runtime resource.
       *
       * @description You can remove model groups from Agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. When an Agent runtime resource needs to switch to a different model group, call this operation first to remove the authorization relationship between the Agent runtime resource and the existing model group.
       * Make sure that you are familiar with the operations and usage of the Wuying Agent Management Center before calling this operation.
       *
       * @param request RemoveRuntimeModelTemplateRequest
       * @return RemoveRuntimeModelTemplateResponse
       */
      Models::RemoveRuntimeModelTemplateResponse removeRuntimeModelTemplate(const Models::RemoveRuntimeModelTemplateRequest &request);

      /**
       * @summary Renews a delivery group.
       *
       * @description Before you call this operation, make sure that you are familiar with the [Billable methods and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Workspace.
       *
       * @param tmpReq RenewAppInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewAppInstanceGroupResponse
       */
      Models::RenewAppInstanceGroupResponse renewAppInstanceGroupWithOptions(const Models::RenewAppInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a delivery group.
       *
       * @description Before you call this operation, make sure that you are familiar with the [Billable methods and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Workspace.
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
       * @summary Creates and attaches tags to cloud resources. If a tag already exists on a resource, the tag value is updated.
       *
       * @param request TagCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagCloudResourcesResponse
       */
      Models::TagCloudResourcesResponse tagCloudResourcesWithOptions(const Models::TagCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and attaches tags to cloud resources. If a tag already exists on a resource, the tag value is updated.
       *
       * @param request TagCloudResourcesRequest
       * @return TagCloudResourcesResponse
       */
      Models::TagCloudResourcesResponse tagCloudResources(const Models::TagCloudResourcesRequest &request);

      /**
       * @summary 解绑研发主机的辅助私有IP
       *
       * @param request UnassignWuyingServerPrivateAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassignWuyingServerPrivateAddressesResponse
       */
      Models::UnassignWuyingServerPrivateAddressesResponse unassignWuyingServerPrivateAddressesWithOptions(const Models::UnassignWuyingServerPrivateAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑研发主机的辅助私有IP
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
       * @summary Updates the image of a delivery group.
       *
       * @description >Warning: After the image update starts, sessions of end users who are accessing cloud applications will be disconnected. Proceed with caution to avoid data loss for end users.
       * > After the update is published, changes typically take about 2 minutes to take effect on the end user side.
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
       * > After the update is published, changes typically take about 2 minutes to take effect on the end user side.
       *
       * @param request UpdateAppInstanceGroupImageRequest
       * @return UpdateAppInstanceGroupImageResponse
       */
      Models::UpdateAppInstanceGroupImageResponse updateAppInstanceGroupImage(const Models::UpdateAppInstanceGroupImageRequest &request);

      /**
       * @summary Updates a model provider template.
       *
       * @description You can update a model provider template that has been created in the Wuying Agent Management Center, including the template name, description, model service connection configuration, and Wuying security proxy switch. Partial field updates are supported. You only need to pass in the fields that you want to modify.
       * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param tmpReq UpdateModelProviderTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelProviderTemplateResponse
       */
      Models::UpdateModelProviderTemplateResponse updateModelProviderTemplateWithOptions(const Models::UpdateModelProviderTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a model provider template.
       *
       * @description You can update a model provider template that has been created in the Wuying Agent Management Center, including the template name, description, model service connection configuration, and Wuying security proxy switch. Partial field updates are supported. You only need to pass in the fields that you want to modify.
       * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request UpdateModelProviderTemplateRequest
       * @return UpdateModelProviderTemplateResponse
       */
      Models::UpdateModelProviderTemplateResponse updateModelProviderTemplate(const Models::UpdateModelProviderTemplateRequest &request);

      /**
       * @summary Updates a model template.
       *
       * @description You can update a model group that has been created in the Wuying Agent Management Center, including the group name, description, and model configuration information. The updated configuration automatically takes effect on associated cloud desktops.
       * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
       *
       * @param request UpdateModelTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelTemplateResponse
       */
      Models::UpdateModelTemplateResponse updateModelTemplateWithOptions(const Models::UpdateModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a model template.
       *
       * @description You can update a model group that has been created in the Wuying Agent Management Center, including the group name, description, and model configuration information. The updated configuration automatically takes effect on associated cloud desktops.
       * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
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
