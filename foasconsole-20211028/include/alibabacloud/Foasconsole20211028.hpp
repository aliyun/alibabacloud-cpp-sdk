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
       * @summary 开通弹性计算
       *
       * @param tmpReq ConvertHybridInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertHybridInstanceResponse
       */
      Models::ConvertHybridInstanceResponse convertHybridInstanceWithOptions(const Models::ConvertHybridInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开通弹性计算
       *
       * @param request ConvertHybridInstanceRequest
       * @return ConvertHybridInstanceResponse
       */
      Models::ConvertHybridInstanceResponse convertHybridInstance(const Models::ConvertHybridInstanceRequest &request);

      /**
       * @summary Changes the billing method of a workspace from pay-as-you-go to subscription.
       *
       * @param tmpReq ConvertInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertInstanceResponse
       */
      Models::ConvertInstanceResponse convertInstanceWithOptions(const Models::ConvertInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of a workspace from pay-as-you-go to subscription.
       *
       * @param request ConvertInstanceRequest
       * @return ConvertInstanceResponse
       */
      Models::ConvertInstanceResponse convertInstance(const Models::ConvertInstanceRequest &request);

      /**
       * @summary Changes the billing method of a workspace from subscription to pay-as-you-go.
       *
       * @param request ConvertPrepayInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertPrepayInstanceResponse
       */
      Models::ConvertPrepayInstanceResponse convertPrepayInstanceWithOptions(const Models::ConvertPrepayInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of a workspace from subscription to pay-as-you-go.
       *
       * @param request ConvertPrepayInstanceRequest
       * @return ConvertPrepayInstanceResponse
       */
      Models::ConvertPrepayInstanceResponse convertPrepayInstance(const Models::ConvertPrepayInstanceRequest &request);

      /**
       * @summary Creates a subscription workspace or a pay-as-you-go workspace of Realtime Compute for Apache Flink.
       *
       * @param tmpReq CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subscription workspace or a pay-as-you-go workspace of Realtime Compute for Apache Flink.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates a namespace in a Realtime Compute for Apache Flink workspace.
       *
       * @param tmpReq CreateNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespaceWithOptions(const Models::CreateNamespaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a namespace in a Realtime Compute for Apache Flink workspace.
       *
       * @param request CreateNamespaceRequest
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespace(const Models::CreateNamespaceRequest &request);

      /**
       * @summary Deletes a pay-as-you-go workspace of Realtime Compute for Apache Flink.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a pay-as-you-go workspace of Realtime Compute for Apache Flink.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Deletes a namespace.
       *
       * @param request DeleteNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespaceWithOptions(const Models::DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a namespace.
       *
       * @param request DeleteNamespaceRequest
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespace(const Models::DeleteNamespaceRequest &request);

      /**
       * @summary Queries the details of one or more Realtime Compute for Apache Flink workspaces.
       *
       * @param tmpReq DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more Realtime Compute for Apache Flink workspaces.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Queries the information about a namespace that belongs to a workspace.
       *
       * @param tmpReq DescribeNamespacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNamespacesResponse
       */
      Models::DescribeNamespacesResponse describeNamespacesWithOptions(const Models::DescribeNamespacesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a namespace that belongs to a workspace.
       *
       * @param request DescribeNamespacesRequest
       * @return DescribeNamespacesResponse
       */
      Models::DescribeNamespacesResponse describeNamespaces(const Models::DescribeNamespacesRequest &request);

      /**
       * @summary Queries the regions that are available in which Realtime Compute for Apache Flink is supported.
       *
       * @param request DescribeSupportedRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportedRegionsResponse
       */
      Models::DescribeSupportedRegionsResponse describeSupportedRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions that are available in which Realtime Compute for Apache Flink is supported.
       *
       * @return DescribeSupportedRegionsResponse
       */
      Models::DescribeSupportedRegionsResponse describeSupportedRegions();

      /**
       * @summary Obtains the zones that are supported by Realtime Compute for Apache Flink.
       *
       * @param request DescribeSupportedZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportedZonesResponse
       */
      Models::DescribeSupportedZonesResponse describeSupportedZonesWithOptions(const Models::DescribeSupportedZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the zones that are supported by Realtime Compute for Apache Flink.
       *
       * @param request DescribeSupportedZonesRequest
       * @return DescribeSupportedZonesResponse
       */
      Models::DescribeSupportedZonesResponse describeSupportedZones(const Models::DescribeSupportedZonesRequest &request);

      /**
       * @summary Queries the tags of specified resources. You can query the key of a tag by tag value, or query the value of a tag by tag key. You can also obtain information about all tags that you use in a workspace in the console of fully managed Flink.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of specified resources. You can query the key of a tag by tag value, or query the value of a tag by tag key. You can also obtain information about all tags that you use in a workspace in the console of fully managed Flink.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 对按量弹性实例修改resource quota
       *
       * @param tmpReq ModifyElasticResourceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticResourceSpecResponse
       */
      Models::ModifyElasticResourceSpecResponse modifyElasticResourceSpecWithOptions(const Models::ModifyElasticResourceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对按量弹性实例修改resource quota
       *
       * @param request ModifyElasticResourceSpecRequest
       * @return ModifyElasticResourceSpecResponse
       */
      Models::ModifyElasticResourceSpecResponse modifyElasticResourceSpec(const Models::ModifyElasticResourceSpecRequest &request);

      /**
       * @summary Scale in or out a workspace to reconfigure resources for the workspace.
       *
       * @param tmpReq ModifyInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpecWithOptions(const Models::ModifyInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scale in or out a workspace to reconfigure resources for the workspace.
       *
       * @param request ModifyInstanceSpecRequest
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpec(const Models::ModifyInstanceSpecRequest &request);

      /**
       * @deprecated OpenAPI ModifyInstanceVswitch is deprecated
       *
       * @summary 修改集群交换机
       *
       * @param tmpReq ModifyInstanceVswitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceVswitchResponse
       */
      Models::ModifyInstanceVswitchResponse modifyInstanceVswitchWithOptions(const Models::ModifyInstanceVswitchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyInstanceVswitch is deprecated
       *
       * @summary 修改集群交换机
       *
       * @param request ModifyInstanceVswitchRequest
       * @return ModifyInstanceVswitchResponse
       */
      Models::ModifyInstanceVswitchResponse modifyInstanceVswitch(const Models::ModifyInstanceVswitchRequest &request);

      /**
       * @summary 修改namespace资源，包含按量和包年包月、混合计费
       *
       * @param tmpReq ModifyNamespaceSpecV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNamespaceSpecV2Response
       */
      Models::ModifyNamespaceSpecV2Response modifyNamespaceSpecV2WithOptions(const Models::ModifyNamespaceSpecV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改namespace资源，包含按量和包年包月、混合计费
       *
       * @param request ModifyNamespaceSpecV2Request
       * @return ModifyNamespaceSpecV2Response
       */
      Models::ModifyNamespaceSpecV2Response modifyNamespaceSpecV2(const Models::ModifyNamespaceSpecV2Request &request);

      /**
       * @deprecated OpenAPI ModifyPrepayInstanceSpec is deprecated, please use foasconsole::2021-10-28::ModifyInstanceSpec instead.
       *
       * @summary Modifies the configuration of the computing resources of a subscription fully managed Flink workspace. If the number of computing resources after the modification is less than the current number of computing resources, the scale-in operation is performed. If the number of computing resources after the modification is larger than the current number of computing resources, the scale-out operation is performed.
       *
       * @param tmpReq ModifyPrepayInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpecWithOptions(const Models::ModifyPrepayInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyPrepayInstanceSpec is deprecated, please use foasconsole::2021-10-28::ModifyInstanceSpec instead.
       *
       * @summary Modifies the configuration of the computing resources of a subscription fully managed Flink workspace. If the number of computing resources after the modification is less than the current number of computing resources, the scale-in operation is performed. If the number of computing resources after the modification is larger than the current number of computing resources, the scale-out operation is performed.
       *
       * @param request ModifyPrepayInstanceSpecRequest
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpec(const Models::ModifyPrepayInstanceSpecRequest &request);

      /**
       * @deprecated OpenAPI ModifyPrepayNamespaceSpec is deprecated, please use foasconsole::2021-10-28::ModifyNamespaceSpec instead.
       *
       * @summary Modifies the resource configurations of a namespace in a subscription workspace.
       *
       * @param tmpReq ModifyPrepayNamespaceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrepayNamespaceSpecResponse
       */
      Models::ModifyPrepayNamespaceSpecResponse modifyPrepayNamespaceSpecWithOptions(const Models::ModifyPrepayNamespaceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyPrepayNamespaceSpec is deprecated, please use foasconsole::2021-10-28::ModifyNamespaceSpec instead.
       *
       * @summary Modifies the resource configurations of a namespace in a subscription workspace.
       *
       * @param request ModifyPrepayNamespaceSpecRequest
       * @return ModifyPrepayNamespaceSpecResponse
       */
      Models::ModifyPrepayNamespaceSpecResponse modifyPrepayNamespaceSpec(const Models::ModifyPrepayNamespaceSpecRequest &request);

      /**
       * @summary Queries the fee of switching the billing method of a workspace from pay-as-you-go to subscription.
       *
       * @param tmpReq QueryConvertInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConvertInstancePriceResponse
       */
      Models::QueryConvertInstancePriceResponse queryConvertInstancePriceWithOptions(const Models::QueryConvertInstancePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fee of switching the billing method of a workspace from pay-as-you-go to subscription.
       *
       * @param request QueryConvertInstancePriceRequest
       * @return QueryConvertInstancePriceResponse
       */
      Models::QueryConvertInstancePriceResponse queryConvertInstancePrice(const Models::QueryConvertInstancePriceRequest &request);

      /**
       * @summary Obtains the estimated refund after the billing method of your Realtime Compute for Apache Flink workspace is changed from subscription to pay-as-you-go. After you change the billing method of your workspace to pay-as-you-go, bills are generated on an hourly basis.
       *
       * @param request QueryConvertPrepayInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConvertPrepayInstancePriceResponse
       */
      Models::QueryConvertPrepayInstancePriceResponse queryConvertPrepayInstancePriceWithOptions(const Models::QueryConvertPrepayInstancePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the estimated refund after the billing method of your Realtime Compute for Apache Flink workspace is changed from subscription to pay-as-you-go. After you change the billing method of your workspace to pay-as-you-go, bills are generated on an hourly basis.
       *
       * @param request QueryConvertPrepayInstancePriceRequest
       * @return QueryConvertPrepayInstancePriceResponse
       */
      Models::QueryConvertPrepayInstancePriceResponse queryConvertPrepayInstancePrice(const Models::QueryConvertPrepayInstancePriceRequest &request);

      /**
       * @summary Queries the fee of creating a workspace.
       *
       * @param tmpReq QueryCreateInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCreateInstancePriceResponse
       */
      Models::QueryCreateInstancePriceResponse queryCreateInstancePriceWithOptions(const Models::QueryCreateInstancePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fee of creating a workspace.
       *
       * @param request QueryCreateInstancePriceRequest
       * @return QueryCreateInstancePriceResponse
       */
      Models::QueryCreateInstancePriceResponse queryCreateInstancePrice(const Models::QueryCreateInstancePriceRequest &request);

      /**
       * @summary Queries the fee of modifying the resource configuration of a workspace.
       *
       * @param tmpReq QueryModifyInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyInstancePriceResponse
       */
      Models::QueryModifyInstancePriceResponse queryModifyInstancePriceWithOptions(const Models::QueryModifyInstancePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fee of modifying the resource configuration of a workspace.
       *
       * @param request QueryModifyInstancePriceRequest
       * @return QueryModifyInstancePriceResponse
       */
      Models::QueryModifyInstancePriceResponse queryModifyInstancePrice(const Models::QueryModifyInstancePriceRequest &request);

      /**
       * @summary Queries the fee of renewing a subscription workspace.
       *
       * @param request QueryRenewInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRenewInstancePriceResponse
       */
      Models::QueryRenewInstancePriceResponse queryRenewInstancePriceWithOptions(const Models::QueryRenewInstancePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fee of renewing a subscription workspace.
       *
       * @param request QueryRenewInstancePriceRequest
       * @return QueryRenewInstancePriceResponse
       */
      Models::QueryRenewInstancePriceResponse queryRenewInstancePrice(const Models::QueryRenewInstancePriceRequest &request);

      /**
       * @summary Renews a subscription workspace of Realtime Compute for Apache Flink.
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a subscription workspace of Realtime Compute for Apache Flink.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Adds tags to specified resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to specified resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from specified resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from specified resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
