// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_FOASCONSOLE20190601_HPP_
#define ALIBABACLOUD_FOASCONSOLE20190601_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Foasconsole20190601Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Foasconsole20190601.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 按量付费转包年包月
       *
       * @param request ConvertInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertInstanceResponse
       */
      Models::ConvertInstanceResponse convertInstanceWithOptions(const Models::ConvertInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 按量付费转包年包月
       *
       * @param request ConvertInstanceRequest
       * @return ConvertInstanceResponse
       */
      Models::ConvertInstanceResponse convertInstance(const Models::ConvertInstanceRequest &request);

      /**
       * @summary 包年包月转按量付费
       *
       * @param request ConvertPrepayInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertPrepayInstanceResponse
       */
      Models::ConvertPrepayInstanceResponse convertPrepayInstanceWithOptions(const Models::ConvertPrepayInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 包年包月转按量付费
       *
       * @param request ConvertPrepayInstanceRequest
       * @return ConvertPrepayInstanceResponse
       */
      Models::ConvertPrepayInstanceResponse convertPrepayInstance(const Models::ConvertPrepayInstanceRequest &request);

      /**
       * @summary 创建实例
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary 创建命名空间
       *
       * @param request CreateNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespaceWithOptions(const Models::CreateNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建命名空间
       *
       * @param request CreateNamespaceRequest
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespace(const Models::CreateNamespaceRequest &request);

      /**
       * @summary 释放按量付费的实例
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 释放按量付费的实例
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary 删除namespace
       *
       * @param request DeleteNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespaceWithOptions(const Models::DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除namespace
       *
       * @param request DeleteNamespaceRequest
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespace(const Models::DeleteNamespaceRequest &request);

      /**
       * @summary 扩容/缩容
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 扩容/缩容
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary namespace列表
       *
       * @param request DescribeNamespacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNamespacesResponse
       */
      Models::DescribeNamespacesResponse describeNamespacesWithOptions(const Models::DescribeNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary namespace列表
       *
       * @param request DescribeNamespacesRequest
       * @return DescribeNamespacesResponse
       */
      Models::DescribeNamespacesResponse describeNamespaces(const Models::DescribeNamespacesRequest &request);

      /**
       * @summary 获取支持的region列表
       *
       * @param request DescribeSupportedRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportedRegionsResponse
       */
      Models::DescribeSupportedRegionsResponse describeSupportedRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取支持的region列表
       *
       * @return DescribeSupportedRegionsResponse
       */
      Models::DescribeSupportedRegionsResponse describeSupportedRegions();

      /**
       * @summary 获取支持的zoneId列表
       *
       * @param request DescribeSupportedZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportedZonesResponse
       */
      Models::DescribeSupportedZonesResponse describeSupportedZonesWithOptions(const Models::DescribeSupportedZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取支持的zoneId列表
       *
       * @param request DescribeSupportedZonesRequest
       * @return DescribeSupportedZonesResponse
       */
      Models::DescribeSupportedZonesResponse describeSupportedZones(const Models::DescribeSupportedZonesRequest &request);

      /**
       * @summary 列举flinkasi标签
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举flinkasi标签
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @deprecated OpenAPI ModifyPrepayInstanceSpec is deprecated, please use foasconsole::2019-06-01::ModifyInstanceSpec instead.
       *
       * @summary 扩容/缩容
       *
       * @param request ModifyPrepayInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpecWithOptions(const Models::ModifyPrepayInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyPrepayInstanceSpec is deprecated, please use foasconsole::2019-06-01::ModifyInstanceSpec instead.
       *
       * @summary 扩容/缩容
       *
       * @param request ModifyPrepayInstanceSpecRequest
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpec(const Models::ModifyPrepayInstanceSpecRequest &request);

      /**
       * @deprecated OpenAPI ModifyPrepayNamespaceSpec is deprecated, please use foasconsole::2019-06-01::ModifyNamespaceSpec instead.
       *
       * @summary 修改namespace资源分配
       *
       * @param request ModifyPrepayNamespaceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrepayNamespaceSpecResponse
       */
      Models::ModifyPrepayNamespaceSpecResponse modifyPrepayNamespaceSpecWithOptions(const Models::ModifyPrepayNamespaceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyPrepayNamespaceSpec is deprecated, please use foasconsole::2019-06-01::ModifyNamespaceSpec instead.
       *
       * @summary 修改namespace资源分配
       *
       * @param request ModifyPrepayNamespaceSpecRequest
       * @return ModifyPrepayNamespaceSpecResponse
       */
      Models::ModifyPrepayNamespaceSpecResponse modifyPrepayNamespaceSpec(const Models::ModifyPrepayNamespaceSpecRequest &request);

      /**
       * @summary 按量付费转包年包月询价
       *
       * @param request QueryConvertInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConvertInstancePriceResponse
       */
      Models::QueryConvertInstancePriceResponse queryConvertInstancePriceWithOptions(const Models::QueryConvertInstancePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 按量付费转包年包月询价
       *
       * @param request QueryConvertInstancePriceRequest
       * @return QueryConvertInstancePriceResponse
       */
      Models::QueryConvertInstancePriceResponse queryConvertInstancePrice(const Models::QueryConvertInstancePriceRequest &request);

      /**
       * @summary 包年包月转按量付费询价
       *
       * @param request QueryConvertPrepayInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConvertPrepayInstancePriceResponse
       */
      Models::QueryConvertPrepayInstancePriceResponse queryConvertPrepayInstancePriceWithOptions(const Models::QueryConvertPrepayInstancePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 包年包月转按量付费询价
       *
       * @param request QueryConvertPrepayInstancePriceRequest
       * @return QueryConvertPrepayInstancePriceResponse
       */
      Models::QueryConvertPrepayInstancePriceResponse queryConvertPrepayInstancePrice(const Models::QueryConvertPrepayInstancePriceRequest &request);

      /**
       * @summary 获取创建实例的价格
       *
       * @param request QueryCreateInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCreateInstancePriceResponse
       */
      Models::QueryCreateInstancePriceResponse queryCreateInstancePriceWithOptions(const Models::QueryCreateInstancePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取创建实例的价格
       *
       * @param request QueryCreateInstancePriceRequest
       * @return QueryCreateInstancePriceResponse
       */
      Models::QueryCreateInstancePriceResponse queryCreateInstancePrice(const Models::QueryCreateInstancePriceRequest &request);

      /**
       * @summary 查询付费类型为包年包月的实例修改资源规格的价格
       *
       * @param request QueryModifyInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyInstancePriceResponse
       */
      Models::QueryModifyInstancePriceResponse queryModifyInstancePriceWithOptions(const Models::QueryModifyInstancePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询付费类型为包年包月的实例修改资源规格的价格
       *
       * @param request QueryModifyInstancePriceRequest
       * @return QueryModifyInstancePriceResponse
       */
      Models::QueryModifyInstancePriceResponse queryModifyInstancePrice(const Models::QueryModifyInstancePriceRequest &request);

      /**
       * @summary 查询付费类型为包年包月的实例续费价格
       *
       * @param request QueryRenewInstancePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRenewInstancePriceResponse
       */
      Models::QueryRenewInstancePriceResponse queryRenewInstancePriceWithOptions(const Models::QueryRenewInstancePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询付费类型为包年包月的实例续费价格
       *
       * @param request QueryRenewInstancePriceRequest
       * @return QueryRenewInstancePriceResponse
       */
      Models::QueryRenewInstancePriceResponse queryRenewInstancePrice(const Models::QueryRenewInstancePriceRequest &request);

      /**
       * @summary 续费
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 续费
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary 打标签接口
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打标签接口
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary flinkasi去标签
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary flinkasi去标签
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
