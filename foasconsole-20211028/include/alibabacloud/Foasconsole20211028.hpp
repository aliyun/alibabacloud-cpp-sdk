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
       * @summary Converts a subscription instance to a hybrid billing instance.
       *
       * @description **Before using this API, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/hybrid-pricing) of hybrid billing for Realtime Compute for Apache Flink.**
       *
       * @param tmpReq ConvertHybridInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertHybridInstanceResponse
       */
      Models::ConvertHybridInstanceResponse convertHybridInstanceWithOptions(const Models::ConvertHybridInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts a subscription instance to a hybrid billing instance.
       *
       * @description **Before using this API, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/hybrid-pricing) of hybrid billing for Realtime Compute for Apache Flink.**
       *
       * @param request ConvertHybridInstanceRequest
       * @return ConvertHybridInstanceResponse
       */
      Models::ConvertHybridInstanceResponse convertHybridInstance(const Models::ConvertHybridInstanceRequest &request);

      /**
       * @summary Converts a pay-as-you-go workspace to a subscription workspace.
       *
       * @description **Before using this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/switch-from-pay-as-you-go-to-subscription) of fully managed Flink.**
       *
       * @param tmpReq ConvertInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertInstanceResponse
       */
      Models::ConvertInstanceResponse convertInstanceWithOptions(const Models::ConvertInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts a pay-as-you-go workspace to a subscription workspace.
       *
       * @description **Before using this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/switch-from-pay-as-you-go-to-subscription) of fully managed Flink.**
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
       * @description **Make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/billing-overview) of fully managed Flink before you call this operation.**
       *
       * @param tmpReq CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subscription or pay-as-you-go fully managed Flink workspace.
       *
       * @description **Make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/billing-overview) of fully managed Flink before you call this operation.**
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates a workspace in a fully managed Flink instance.
       *
       * @param tmpReq CreateNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespaceWithOptions(const Models::CreateNamespaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workspace in a fully managed Flink instance.
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
       * @param tmpReq DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more fully managed Flink workspaces.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Queries the namespace information of a specified instance.
       *
       * @param tmpReq DescribeNamespacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNamespacesResponse
       */
      Models::DescribeNamespacesResponse describeNamespacesWithOptions(const Models::DescribeNamespacesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the namespace information of a specified instance.
       *
       * @param request DescribeNamespacesRequest
       * @return DescribeNamespacesResponse
       */
      Models::DescribeNamespacesResponse describeNamespaces(const Models::DescribeNamespacesRequest &request);

      /**
       * @summary Retrieves information about regions that support purchases of fully managed Flink.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportedRegionsResponse
       */
      Models::DescribeSupportedRegionsResponse describeSupportedRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about regions that support purchases of fully managed Flink.
       *
       * @return DescribeSupportedRegionsResponse
       */
      Models::DescribeSupportedRegionsResponse describeSupportedRegions();

      /**
       * @summary Retrieves information about zones that are available for purchase.
       *
       * @param request DescribeSupportedZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportedZonesResponse
       */
      Models::DescribeSupportedZonesResponse describeSupportedZonesWithOptions(const Models::DescribeSupportedZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about zones that are available for purchase.
       *
       * @param request DescribeSupportedZonesRequest
       * @return DescribeSupportedZonesResponse
       */
      Models::DescribeSupportedZonesResponse describeSupportedZones(const Models::DescribeSupportedZonesRequest &request);

      /**
       * @summary Queries resource tags. You can query tag keys by tag values, query tag values by tag keys, or retrieve all tag information used in your Flink fully managed workspace.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resource tags. You can query tag keys by tag values, query tag values by tag keys, or retrieve all tag information used in your Flink fully managed workspace.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

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
       * @summary Scales up or scales down the resources of a workspace.
       *
       * @description Make sure that you are familiar with the [billing methods](https://www.alibabacloud.com/help/en/flink/user-guide/reconfigure-resources#task-2507532) and pricing of Realtime Compute for Apache Flink before you call this operation.
       *
       * @param tmpReq ModifyInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpecWithOptions(const Models::ModifyInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales up or scales down the resources of a workspace.
       *
       * @description Make sure that you are familiar with the [billing methods](https://www.alibabacloud.com/help/en/flink/user-guide/reconfigure-resources#task-2507532) and pricing of Realtime Compute for Apache Flink before you call this operation.
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
       * @summary Modifies the compute resource specifications of a subscription Realtime Compute for Apache Flink instance. If the new specifications are smaller than the current specifications, a scale-in operation is performed. If the new specifications are larger than the current specifications, a scale-out operation is performed.
       *
       * @description **Before using this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/subscription) of Realtime Compute for Apache Flink.**
       *
       * @param tmpReq ModifyPrepayInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpecWithOptions(const Models::ModifyPrepayInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyPrepayInstanceSpec is deprecated, please use foasconsole::2021-10-28::ModifyInstanceSpec instead.
       *
       * @summary Modifies the compute resource specifications of a subscription Realtime Compute for Apache Flink instance. If the new specifications are smaller than the current specifications, a scale-in operation is performed. If the new specifications are larger than the current specifications, a scale-out operation is performed.
       *
       * @description **Before using this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/subscription) of Realtime Compute for Apache Flink.**
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
       * @summary Queries the price for converting a pay-as-you-go instance to a subscription instance.
       *
       * @param tmpReq QueryConvertInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConvertInstancePriceResponse
       */
      Models::QueryConvertInstancePriceResponse queryConvertInstancePriceWithOptions(const Models::QueryConvertInstancePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price for converting a pay-as-you-go instance to a subscription instance.
       *
       * @param request QueryConvertInstancePriceRequest
       * @return QueryConvertInstancePriceResponse
       */
      Models::QueryConvertInstancePriceResponse queryConvertInstancePrice(const Models::QueryConvertInstancePriceRequest &request);

      /**
       * @summary Queries the estimated refund amount after converting your Flink instance from subscription to pay-as-you-go. After the conversion, your usage is metered hourly and bills are generated accordingly.
       *
       * @param request QueryConvertPrepayInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConvertPrepayInstancePriceResponse
       */
      Models::QueryConvertPrepayInstancePriceResponse queryConvertPrepayInstancePriceWithOptions(const Models::QueryConvertPrepayInstancePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the estimated refund amount after converting your Flink instance from subscription to pay-as-you-go. After the conversion, your usage is metered hourly and bills are generated accordingly.
       *
       * @param request QueryConvertPrepayInstancePriceRequest
       * @return QueryConvertPrepayInstancePriceResponse
       */
      Models::QueryConvertPrepayInstancePriceResponse queryConvertPrepayInstancePrice(const Models::QueryConvertPrepayInstancePriceRequest &request);

      /**
       * @summary Retrieves the price of a workspace for the current account.
       *
       * @param tmpReq QueryCreateInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCreateInstancePriceResponse
       */
      Models::QueryCreateInstancePriceResponse queryCreateInstancePriceWithOptions(const Models::QueryCreateInstancePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the price of a workspace for the current account.
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
       * @summary Queries the renewal price of a subscription workspace.
       *
       * @param request QueryRenewInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRenewInstancePriceResponse
       */
      Models::QueryRenewInstancePriceResponse queryRenewInstancePriceWithOptions(const Models::QueryRenewInstancePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the renewal price of a subscription workspace.
       *
       * @param request QueryRenewInstancePriceRequest
       * @return QueryRenewInstancePriceResponse
       */
      Models::QueryRenewInstancePriceResponse queryRenewInstancePrice(const Models::QueryRenewInstancePriceRequest &request);

      /**
       * @summary Renews a subscription Realtime Compute for Apache Flink workspace.
       *
       * @description **Before using this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/renewal-policy) of Realtime Compute for Apache Flink.**
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a subscription Realtime Compute for Apache Flink workspace.
       *
       * @description **Before using this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/renewal-policy) of Realtime Compute for Apache Flink.**
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
