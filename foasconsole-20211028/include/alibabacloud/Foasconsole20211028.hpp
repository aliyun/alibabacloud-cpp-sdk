// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_FOASCONSOLE20211028_HPP_
#define ALIBABACLOUD_FOASCONSOLE20211028_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Foasconsole20211028Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Foasconsole20211028.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Modifies the resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Disables the Flink AI service.
       *
       * @description Disables the Flink AI service.
       * > **AI/Agent invocation guidelines**: If you call this OpenAPI operation in automated scenarios such as AI assistants or Code Agents, install and use the [official skill provided by the platform](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the operation directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI/Agent scenarios.
       *
       * @param request CloseFlinkAiServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseFlinkAiServiceResponse
       */
      Models::CloseFlinkAiServiceResponse closeFlinkAiServiceWithOptions(const Models::CloseFlinkAiServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the Flink AI service.
       *
       * @description Disables the Flink AI service.
       * > **AI/Agent invocation guidelines**: If you call this OpenAPI operation in automated scenarios such as AI assistants or Code Agents, install and use the [official skill provided by the platform](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the operation directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI/Agent scenarios.
       *
       * @param request CloseFlinkAiServiceRequest
       * @return CloseFlinkAiServiceResponse
       */
      Models::CloseFlinkAiServiceResponse closeFlinkAiService(const Models::CloseFlinkAiServiceRequest &request);

      /**
       * @summary Converts a subscription instance to a hybrid billing instance.
       *
       * @description **Before using this operation, make sure you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/hybrid-pricing) of hybrid billing for Fully Managed Flink.**
       *
       * @param tmpReq ConvertHybridInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertHybridInstanceResponse
       */
      Models::ConvertHybridInstanceResponse convertHybridInstanceWithOptions(const Models::ConvertHybridInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts a subscription instance to a hybrid billing instance.
       *
       * @description **Before using this operation, make sure you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/hybrid-pricing) of hybrid billing for Fully Managed Flink.**
       *
       * @param request ConvertHybridInstanceRequest
       * @return ConvertHybridInstanceResponse
       */
      Models::ConvertHybridInstanceResponse convertHybridInstance(const Models::ConvertHybridInstanceRequest &request);

      /**
       * @summary Converts a pay-as-you-go workspace to a subscription workspace.
       *
       * @description **Make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/switch-from-pay-as-you-go-to-subscription) of fully managed Flink before you call this operation.**
       *
       * @param tmpReq ConvertInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertInstanceResponse
       */
      Models::ConvertInstanceResponse convertInstanceWithOptions(const Models::ConvertInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts a pay-as-you-go workspace to a subscription workspace.
       *
       * @description **Make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/switch-from-pay-as-you-go-to-subscription) of fully managed Flink before you call this operation.**
       *
       * @param request ConvertInstanceRequest
       * @return ConvertInstanceResponse
       */
      Models::ConvertInstanceResponse convertInstance(const Models::ConvertInstanceRequest &request);

      /**
       * @summary Converts a subscription instance to pay-as-you-go.
       *
       * @description Before using this operation, make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/flink/product-overview/switch-from-subscription-to-pay-as-you-go) of Alibaba Cloud Realtime Compute for Apache Flink.
       *
       * @param request ConvertPrepayInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertPrepayInstanceResponse
       */
      Models::ConvertPrepayInstanceResponse convertPrepayInstanceWithOptions(const Models::ConvertPrepayInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts a subscription instance to pay-as-you-go.
       *
       * @description Before using this operation, make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/flink/product-overview/switch-from-subscription-to-pay-as-you-go) of Alibaba Cloud Realtime Compute for Apache Flink.
       *
       * @param request ConvertPrepayInstanceRequest
       * @return ConvertPrepayInstanceResponse
       */
      Models::ConvertPrepayInstanceResponse convertPrepayInstance(const Models::ConvertPrepayInstanceRequest &request);

      /**
       * @summary Creates a subscription or pay-as-you-go fully managed Flink workspace.
       *
       * @description **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/billing-overview) of fully managed Flink.**
       * > **AI/Agent invocation guide**: If you call this OpenAPI operation in automated scenarios such as AI assistants or Code Agents, we recommend that you install and use the [official Skill encapsulated by the platform](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the operation directly, append the AlibabaCloud-Agent-Skills/custom identifier to the User-Agent in the request header. This helps the platform continuously improve support for AI/Agent scenarios.
       *
       * @param tmpReq CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subscription or pay-as-you-go fully managed Flink workspace.
       *
       * @description **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/billing-overview) of fully managed Flink.**
       * > **AI/Agent invocation guide**: If you call this OpenAPI operation in automated scenarios such as AI assistants or Code Agents, we recommend that you install and use the [official Skill encapsulated by the platform](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the operation directly, append the AlibabaCloud-Agent-Skills/custom identifier to the User-Agent in the request header. This helps the platform continuously improve support for AI/Agent scenarios.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates a workspace in a fully managed Flink instance.
       *
       * @description Creates a workspace in a fully managed Flink instance.
       * > **AI/Agent invocation guide**: If you call this OpenAPI operation in automated scenarios such as AI assistants or Code Agents, install and use the [official skill provided by the platform](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the operation directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI/Agent scenarios.
       *
       * @param tmpReq CreateNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespaceWithOptions(const Models::CreateNamespaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workspace in a fully managed Flink instance.
       *
       * @description Creates a workspace in a fully managed Flink instance.
       * > **AI/Agent invocation guide**: If you call this OpenAPI operation in automated scenarios such as AI assistants or Code Agents, install and use the [official skill provided by the platform](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the operation directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI/Agent scenarios.
       *
       * @param request CreateNamespaceRequest
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespace(const Models::CreateNamespaceRequest &request);

      /**
       * @summary Releases a pay-as-you-go Realtime Compute for Apache Flink workspace.
       *
       * @description **Before using this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/refund-policy) of Realtime Compute for Apache Flink.**
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go Realtime Compute for Apache Flink workspace.
       *
       * @description **Before using this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/refund-policy) of Realtime Compute for Apache Flink.**
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Deletes a project workspace.
       *
       * @param request DeleteNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespaceWithOptions(const Models::DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a project workspace.
       *
       * @param request DeleteNamespaceRequest
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespace(const Models::DeleteNamespaceRequest &request);

      /**
       * @summary Queries the details of one or more fully managed Flink workspaces.
       *
       * @description > You cannot release a workspace in the following scenarios: - In pay-as-you-go mode, the workspace is in the Creating, Releasing, or Creation Timed Out state. - If the billing method is subscription, unsubscribe from the resources on the Unsubscription page in the User Center.
       * > **AI/Agent invocation guide**: If you call this API operation in automated scenarios such as AI assistants or Code Agents, we recommend that you install and use the [officially encapsulated skill](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API operation directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent header of the request. This helps the platform continuously improve support for AI/Agent scenarios.
       *
       * @param tmpReq DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more fully managed Flink workspaces.
       *
       * @description > You cannot release a workspace in the following scenarios: - In pay-as-you-go mode, the workspace is in the Creating, Releasing, or Creation Timed Out state. - If the billing method is subscription, unsubscribe from the resources on the Unsubscription page in the User Center.
       * > **AI/Agent invocation guide**: If you call this API operation in automated scenarios such as AI assistants or Code Agents, we recommend that you install and use the [officially encapsulated skill](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API operation directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent header of the request. This helps the platform continuously improve support for AI/Agent scenarios.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Queries the namespace information of a specific instance.
       *
       * @description You can call DescribeNamespaces to query the namespace information of a specific instance.
       * > **AI/Agent invocation guide**: If you call this OpenAPI in automated scenarios such as AI assistants or Code Agents, install and use the [official platform-encapsulated skill](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header to help the platform continuously improve support for AI and agent scenarios.
       *
       * @param tmpReq DescribeNamespacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNamespacesResponse
       */
      Models::DescribeNamespacesResponse describeNamespacesWithOptions(const Models::DescribeNamespacesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the namespace information of a specific instance.
       *
       * @description You can call DescribeNamespaces to query the namespace information of a specific instance.
       * > **AI/Agent invocation guide**: If you call this OpenAPI in automated scenarios such as AI assistants or Code Agents, install and use the [official platform-encapsulated skill](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header to help the platform continuously improve support for AI and agent scenarios.
       *
       * @param request DescribeNamespacesRequest
       * @return DescribeNamespacesResponse
       */
      Models::DescribeNamespacesResponse describeNamespaces(const Models::DescribeNamespacesRequest &request);

      /**
       * @summary Retrieves the regions available for purchase.
       *
       * @description Retrieves the regions available for purchase.
       * > **AI/Agent invocation guide**: If you call this OpenAPI in automated scenarios such as AI assistants or Code Agents, install and use the [official platform-encapsulated skill](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI and Agent scenarios.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportedRegionsResponse
       */
      Models::DescribeSupportedRegionsResponse describeSupportedRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the regions available for purchase.
       *
       * @description Retrieves the regions available for purchase.
       * > **AI/Agent invocation guide**: If you call this OpenAPI in automated scenarios such as AI assistants or Code Agents, install and use the [official platform-encapsulated skill](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI and Agent scenarios.
       *
       * @return DescribeSupportedRegionsResponse
       */
      Models::DescribeSupportedRegionsResponse describeSupportedRegions();

      /**
       * @summary Queries the zones available for purchase.
       *
       * @description Queries the zones available for purchase.
       * > **AI/Agent invocation guidelines**: If you call this OpenAPI in automated scenarios such as AI assistants or Code Agents, we recommend that you install and use the [official skill provided by the platform](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI and agent scenarios.
       *
       * @param request DescribeSupportedZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportedZonesResponse
       */
      Models::DescribeSupportedZonesResponse describeSupportedZonesWithOptions(const Models::DescribeSupportedZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones available for purchase.
       *
       * @description Queries the zones available for purchase.
       * > **AI/Agent invocation guidelines**: If you call this OpenAPI in automated scenarios such as AI assistants or Code Agents, we recommend that you install and use the [official skill provided by the platform](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI and agent scenarios.
       *
       * @param request DescribeSupportedZonesRequest
       * @return DescribeSupportedZonesResponse
       */
      Models::DescribeSupportedZonesResponse describeSupportedZones(const Models::DescribeSupportedZonesRequest &request);

      /**
       * @summary Retrieves the status of the Flink AI service.
       *
       * @description Retrieves the status of the Flink AI service.
       * > **AI/Agent invocation guide**: If you call this OpenAPI in automated scenarios such as AI assistants or Code Agents, install and use the [official platform-encapsulated skill](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI and Agent scenarios.
       *
       * @param request GetFlinkAiServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFlinkAiServiceResponse
       */
      Models::GetFlinkAiServiceResponse getFlinkAiServiceWithOptions(const Models::GetFlinkAiServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the status of the Flink AI service.
       *
       * @description Retrieves the status of the Flink AI service.
       * > **AI/Agent invocation guide**: If you call this OpenAPI in automated scenarios such as AI assistants or Code Agents, install and use the [official platform-encapsulated skill](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI and Agent scenarios.
       *
       * @param request GetFlinkAiServiceRequest
       * @return GetFlinkAiServiceResponse
       */
      Models::GetFlinkAiServiceResponse getFlinkAiService(const Models::GetFlinkAiServiceRequest &request);

      /**
       * @summary Queries the usage of the free quota for Flink AI services.
       *
       * @description Queries the usage of the free quota for Flink AI services.
       * > **AI/Agent invocation guide**: If you call this OpenAPI in automated scenarios such as AI assistants or Code Agents, install and use the [official platform-encapsulated skill](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI and Agent scenarios.
       *
       * @param request GetFlinkAiServiceFreeQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFlinkAiServiceFreeQuotaResponse
       */
      Models::GetFlinkAiServiceFreeQuotaResponse getFlinkAiServiceFreeQuotaWithOptions(const Models::GetFlinkAiServiceFreeQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage of the free quota for Flink AI services.
       *
       * @description Queries the usage of the free quota for Flink AI services.
       * > **AI/Agent invocation guide**: If you call this OpenAPI in automated scenarios such as AI assistants or Code Agents, install and use the [official platform-encapsulated skill](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI and Agent scenarios.
       *
       * @param request GetFlinkAiServiceFreeQuotaRequest
       * @return GetFlinkAiServiceFreeQuotaResponse
       */
      Models::GetFlinkAiServiceFreeQuotaResponse getFlinkAiServiceFreeQuota(const Models::GetFlinkAiServiceFreeQuotaRequest &request);

      /**
       * @summary Queries resource tags. You can query keys by tag values, query values by keys, or retrieve all tags used in a fully managed Flink workspace.
       *
       * @description You can call ListTagResources to query resource tags. You can query keys by tag values, query values by keys, or retrieve all tags used in a fully managed Flink workspace.
       * > **AI/Agent invocation guide**: If you call this API in automated scenarios such as AI assistants or Code Agents, install and use the [official skill provided by the platform](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI and agent scenarios.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resource tags. You can query keys by tag values, query values by keys, or retrieve all tags used in a fully managed Flink workspace.
       *
       * @description You can call ListTagResources to query resource tags. You can query keys by tag values, query values by keys, or retrieve all tags used in a fully managed Flink workspace.
       * > **AI/Agent invocation guide**: If you call this API in automated scenarios such as AI assistants or Code Agents, install and use the [official skill provided by the platform](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI and agent scenarios.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies the shutdown protection for Flink AI services.
       *
       * @description Modifies the shutdown protection for Flink AI services.
       * > **AI/Agent invocation guide**: If you call this API in automated scenarios such as AI assistants or Code Agents, install and use the [official platform-encapsulated skill](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI/Agent scenarios.
       *
       * @param request ModifyAiServiceProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAiServiceProtectionResponse
       */
      Models::ModifyAiServiceProtectionResponse modifyAiServiceProtectionWithOptions(const Models::ModifyAiServiceProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the shutdown protection for Flink AI services.
       *
       * @description Modifies the shutdown protection for Flink AI services.
       * > **AI/Agent invocation guide**: If you call this API in automated scenarios such as AI assistants or Code Agents, install and use the [official platform-encapsulated skill](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI/Agent scenarios.
       *
       * @param request ModifyAiServiceProtectionRequest
       * @return ModifyAiServiceProtectionResponse
       */
      Models::ModifyAiServiceProtectionResponse modifyAiServiceProtection(const Models::ModifyAiServiceProtectionRequest &request);

      /**
       * @summary Modifies the maximum pay-as-you-go resource limit for a hybrid billing instance.
       *
       * @description Make sure that you are familiar with the [billing methods](https://www.alibabacloud.com/help/en/flink/user-guide/reconfigure-resources#task-2507532) and pricing of Realtime Compute for Apache Flink before you call this operation.
       *
       * @param tmpReq ModifyElasticResourceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticResourceSpecResponse
       */
      Models::ModifyElasticResourceSpecResponse modifyElasticResourceSpecWithOptions(const Models::ModifyElasticResourceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maximum pay-as-you-go resource limit for a hybrid billing instance.
       *
       * @description Make sure that you are familiar with the [billing methods](https://www.alibabacloud.com/help/en/flink/user-guide/reconfigure-resources#task-2507532) and pricing of Realtime Compute for Apache Flink before you call this operation.
       *
       * @param request ModifyElasticResourceSpecRequest
       * @return ModifyElasticResourceSpecResponse
       */
      Models::ModifyElasticResourceSpecResponse modifyElasticResourceSpec(const Models::ModifyElasticResourceSpecRequest &request);

      /**
       * @summary Scales the resources of a workspace.
       *
       * @description Make sure that you fully understand the [billing methods](https://www.alibabacloud.com/help/en/flink/user-guide/reconfigure-resources#task-2507532) and pricing of Realtime Compute for Apache Flink before you call this operation.
       *
       * @param tmpReq ModifyInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpecWithOptions(const Models::ModifyInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales the resources of a workspace.
       *
       * @description Make sure that you fully understand the [billing methods](https://www.alibabacloud.com/help/en/flink/user-guide/reconfigure-resources#task-2507532) and pricing of Realtime Compute for Apache Flink before you call this operation.
       *
       * @param request ModifyInstanceSpecRequest
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpec(const Models::ModifyInstanceSpecRequest &request);

      /**
       * @deprecated OpenAPI ModifyInstanceVswitch is deprecated
       *
       * @summary Modifies the vSwitches available to a Flink workspace.
       *
       * @description Before using this operation, make sure that you fully understand the restrictions on [modifying vSwitches](https://www.alibabacloud.com/help/en/flink/user-guide/modify-a-vswitch) in Realtime Compute for Apache Flink.
       *
       * @param tmpReq ModifyInstanceVswitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceVswitchResponse
       */
      Models::ModifyInstanceVswitchResponse modifyInstanceVswitchWithOptions(const Models::ModifyInstanceVswitchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyInstanceVswitch is deprecated
       *
       * @summary Modifies the vSwitches available to a Flink workspace.
       *
       * @description Before using this operation, make sure that you fully understand the restrictions on [modifying vSwitches](https://www.alibabacloud.com/help/en/flink/user-guide/modify-a-vswitch) in Realtime Compute for Apache Flink.
       *
       * @param request ModifyInstanceVswitchRequest
       * @return ModifyInstanceVswitchResponse
       */
      Models::ModifyInstanceVswitchResponse modifyInstanceVswitch(const Models::ModifyInstanceVswitchRequest &request);

      /**
       * @summary Modifies the resource configurations of a project namespace in a pay-as-you-go, subscription, or hybrid billing workspace.
       *
       * @description >When calling this operation, note the following: - The order status must be normal, that is, OrderType=NORMAL. - When decreasing the quota, the specified resource specification quantity cannot be less than the quantity already in use. For details about the project resource specifications before and after the change, call [DescribeNamespaces](https://help.aliyun.com/document_detail/323441.html).
       *
       * @param tmpReq ModifyNamespaceSpecV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNamespaceSpecV2Response
       */
      Models::ModifyNamespaceSpecV2Response modifyNamespaceSpecV2WithOptions(const Models::ModifyNamespaceSpecV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource configurations of a project namespace in a pay-as-you-go, subscription, or hybrid billing workspace.
       *
       * @description >When calling this operation, note the following: - The order status must be normal, that is, OrderType=NORMAL. - When decreasing the quota, the specified resource specification quantity cannot be less than the quantity already in use. For details about the project resource specifications before and after the change, call [DescribeNamespaces](https://help.aliyun.com/document_detail/323441.html).
       *
       * @param request ModifyNamespaceSpecV2Request
       * @return ModifyNamespaceSpecV2Response
       */
      Models::ModifyNamespaceSpecV2Response modifyNamespaceSpecV2(const Models::ModifyNamespaceSpecV2Request &request);

      /**
       * @deprecated OpenAPI ModifyPrepayInstanceSpec is deprecated, please use foasconsole::2021-10-28::ModifyInstanceSpec instead.
       *
       * @summary Modifies the compute resource specifications of a subscription fully managed Flink instance. If the adjusted specifications are smaller than the current specifications, a scale-down operation is performed. If the adjusted specifications are larger than the current specifications, a scale-up operation is performed.
       *
       * @description **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/subscription) of fully managed Flink.**
       *
       * @param tmpReq ModifyPrepayInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpecWithOptions(const Models::ModifyPrepayInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyPrepayInstanceSpec is deprecated, please use foasconsole::2021-10-28::ModifyInstanceSpec instead.
       *
       * @summary Modifies the compute resource specifications of a subscription fully managed Flink instance. If the adjusted specifications are smaller than the current specifications, a scale-down operation is performed. If the adjusted specifications are larger than the current specifications, a scale-up operation is performed.
       *
       * @description **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/subscription) of fully managed Flink.**
       *
       * @param request ModifyPrepayInstanceSpecRequest
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpec(const Models::ModifyPrepayInstanceSpecRequest &request);

      /**
       * @deprecated OpenAPI ModifyPrepayNamespaceSpec is deprecated, please use foasconsole::2021-10-28::ModifyNamespaceSpec instead.
       *
       * @summary Modifies the specifications of a namespace in a subscription instance.
       *
       * @param tmpReq ModifyPrepayNamespaceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrepayNamespaceSpecResponse
       */
      Models::ModifyPrepayNamespaceSpecResponse modifyPrepayNamespaceSpecWithOptions(const Models::ModifyPrepayNamespaceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyPrepayNamespaceSpec is deprecated, please use foasconsole::2021-10-28::ModifyNamespaceSpec instead.
       *
       * @summary Modifies the specifications of a namespace in a subscription instance.
       *
       * @param request ModifyPrepayNamespaceSpecRequest
       * @return ModifyPrepayNamespaceSpecResponse
       */
      Models::ModifyPrepayNamespaceSpecResponse modifyPrepayNamespaceSpec(const Models::ModifyPrepayNamespaceSpecRequest &request);

      /**
       * @summary Activates the Flink AI service.
       *
       * @description Activates the Flink AI service.
       * > **AI/Agent invocation guide**: If you call this OpenAPI in automated scenarios such as AI assistants or Code Agents, install and use the [official skill encapsulated by the platform](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI/Agent scenarios.
       *
       * @param request OpenFlinkAiServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenFlinkAiServiceResponse
       */
      Models::OpenFlinkAiServiceResponse openFlinkAiServiceWithOptions(const Models::OpenFlinkAiServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the Flink AI service.
       *
       * @description Activates the Flink AI service.
       * > **AI/Agent invocation guide**: If you call this OpenAPI in automated scenarios such as AI assistants or Code Agents, install and use the [official skill encapsulated by the platform](https://skills.aliyun.com/skills/alibabacloud-flink-instance-manage). If you integrate the OpenAPI client and call the API directly, include the AlibabaCloud-Agent-Skills/custom identifier in the User-Agent request header. This helps the platform continuously improve support for AI/Agent scenarios.
       *
       * @param request OpenFlinkAiServiceRequest
       * @return OpenFlinkAiServiceResponse
       */
      Models::OpenFlinkAiServiceResponse openFlinkAiService(const Models::OpenFlinkAiServiceRequest &request);

      /**
       * @summary Queries the price for changing the billing method of an instance from pay-as-you-go to subscription.
       *
       * @param tmpReq QueryConvertInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConvertInstancePriceResponse
       */
      Models::QueryConvertInstancePriceResponse queryConvertInstancePriceWithOptions(const Models::QueryConvertInstancePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price for changing the billing method of an instance from pay-as-you-go to subscription.
       *
       * @param request QueryConvertInstancePriceRequest
       * @return QueryConvertInstancePriceResponse
       */
      Models::QueryConvertInstancePriceResponse queryConvertInstancePrice(const Models::QueryConvertInstancePriceRequest &request);

      /**
       * @summary Queries the estimated refund amount after your Flink instance is switched from subscription to pay-as-you-go. After the switch, your usage is metered hourly and billed accordingly.
       *
       * @param request QueryConvertPrepayInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConvertPrepayInstancePriceResponse
       */
      Models::QueryConvertPrepayInstancePriceResponse queryConvertPrepayInstancePriceWithOptions(const Models::QueryConvertPrepayInstancePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the estimated refund amount after your Flink instance is switched from subscription to pay-as-you-go. After the switch, your usage is metered hourly and billed accordingly.
       *
       * @param request QueryConvertPrepayInstancePriceRequest
       * @return QueryConvertPrepayInstancePriceResponse
       */
      Models::QueryConvertPrepayInstancePriceResponse queryConvertPrepayInstancePrice(const Models::QueryConvertPrepayInstancePriceRequest &request);

      /**
       * @summary Retrieves the pricing for purchasing a workspace for the current account.
       *
       * @param tmpReq QueryCreateInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCreateInstancePriceResponse
       */
      Models::QueryCreateInstancePriceResponse queryCreateInstancePriceWithOptions(const Models::QueryCreateInstancePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the pricing for purchasing a workspace for the current account.
       *
       * @param request QueryCreateInstancePriceRequest
       * @return QueryCreateInstancePriceResponse
       */
      Models::QueryCreateInstancePriceResponse queryCreateInstancePrice(const Models::QueryCreateInstancePriceRequest &request);

      /**
       * @summary Queries the price for upgrading or downgrading an instance.
       *
       * @param tmpReq QueryModifyInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyInstancePriceResponse
       */
      Models::QueryModifyInstancePriceResponse queryModifyInstancePriceWithOptions(const Models::QueryModifyInstancePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price for upgrading or downgrading an instance.
       *
       * @param request QueryModifyInstancePriceRequest
       * @return QueryModifyInstancePriceResponse
       */
      Models::QueryModifyInstancePriceResponse queryModifyInstancePrice(const Models::QueryModifyInstancePriceRequest &request);

      /**
       * @summary Queries the price for renewing a subscription workspace.
       *
       * @param request QueryRenewInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRenewInstancePriceResponse
       */
      Models::QueryRenewInstancePriceResponse queryRenewInstancePriceWithOptions(const Models::QueryRenewInstancePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price for renewing a subscription workspace.
       *
       * @param request QueryRenewInstancePriceRequest
       * @return QueryRenewInstancePriceResponse
       */
      Models::QueryRenewInstancePriceResponse queryRenewInstancePrice(const Models::QueryRenewInstancePriceRequest &request);

      /**
       * @summary Renews a subscription fully managed Flink workspace.
       *
       * @description **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/renewal-policy) of fully managed Flink.**
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a subscription fully managed Flink workspace.
       *
       * @description **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/renewal-policy) of fully managed Flink.**
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Call this API to add tags to resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call this API to add tags to resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Deletes resource tags.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes resource tags.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
