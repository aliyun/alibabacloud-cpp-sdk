// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MILVUS20231012_HPP_
#define ALIBABACLOUD_MILVUS20231012_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Milvus20231012Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Milvus20231012.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 资源转组
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 资源转组
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Create a service role for Milvus to access other cloud products
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDefaultRoleResponse
       */
      Models::CreateDefaultRoleResponse createDefaultRoleWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a service role for Milvus to access other cloud products
       *
       * @return CreateDefaultRoleResponse
       */
      Models::CreateDefaultRoleResponse createDefaultRole();

      /**
       * @summary 创建实例
       *
       * @param request CreateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary 删除实例
       *
       * @param request DeleteInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除实例
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Get the public IP address whitelist of a Milvus instance.
       *
       * @param request DescribeAccessControlListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessControlListResponse
       */
      Models::DescribeAccessControlListResponse describeAccessControlListWithOptions(const Models::DescribeAccessControlListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the public IP address whitelist of a Milvus instance.
       *
       * @param request DescribeAccessControlListRequest
       * @return DescribeAccessControlListResponse
       */
      Models::DescribeAccessControlListResponse describeAccessControlList(const Models::DescribeAccessControlListRequest &request);

      /**
       * @summary Get information about the custom configuration of each component of Milvus.
       *
       * @param request DescribeInstanceConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceConfigsResponse
       */
      Models::DescribeInstanceConfigsResponse describeInstanceConfigsWithOptions(const Models::DescribeInstanceConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get information about the custom configuration of each component of Milvus.
       *
       * @param request DescribeInstanceConfigsRequest
       * @return DescribeInstanceConfigsResponse
       */
      Models::DescribeInstanceConfigsResponse describeInstanceConfigs(const Models::DescribeInstanceConfigsRequest &request);

      /**
       * @summary 获取实例详情
       *
       * @param request GetInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const Models::GetInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const Models::GetInstanceRequest &request);

      /**
       * @summary Get the details of an instance.
       *
       * @param request GetInstanceDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceDetailResponse
       */
      Models::GetInstanceDetailResponse getInstanceDetailWithOptions(const Models::GetInstanceDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the details of an instance.
       *
       * @param request GetInstanceDetailRequest
       * @return GetInstanceDetailResponse
       */
      Models::GetInstanceDetailResponse getInstanceDetail(const Models::GetInstanceDetailRequest &request);

      /**
       * @summary Get the list of Milvus instances under the current account.
       *
       * @param tmpReq ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the list of Milvus instances under the current account.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary 根据集群ID或者名称搜索集群
       *
       * @param tmpReq ListInstancesV2Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesV2Response
       */
      Models::ListInstancesV2Response listInstancesV2WithOptions(const Models::ListInstancesV2Request &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据集群ID或者名称搜索集群
       *
       * @param request ListInstancesV2Request
       * @return ListInstancesV2Response
       */
      Models::ListInstancesV2Response listInstancesV2(const Models::ListInstancesV2Request &request);

      /**
       * @summary Update the configuration parameters of each component of Milvus.
       *
       * @param request ModifyInstanceConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfigWithOptions(const Models::ModifyInstanceConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the configuration parameters of each component of Milvus.
       *
       * @param request ModifyInstanceConfigRequest
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfig(const Models::ModifyInstanceConfigRequest &request);

      /**
       * @summary 打标
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打标
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 删除标签
       *
       * @param tmpReq UnTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除标签
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);

      /**
       * @summary Configure Public IP Address Whitelist
       *
       * @param request UpdateAccessControlListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAccessControlListResponse
       */
      Models::UpdateAccessControlListResponse updateAccessControlListWithOptions(const Models::UpdateAccessControlListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configure Public IP Address Whitelist
       *
       * @param request UpdateAccessControlListRequest
       * @return UpdateAccessControlListResponse
       */
      Models::UpdateAccessControlListResponse updateAccessControlList(const Models::UpdateAccessControlListRequest &request);

      /**
       * @summary 更新实例
       *
       * @param request UpdateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const Models::UpdateInstanceRequest &request);

      /**
       * @summary Modifies the name of an instance.
       *
       * @param request UpdateInstanceNameRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceNameResponse
       */
      Models::UpdateInstanceNameResponse updateInstanceNameWithOptions(const Models::UpdateInstanceNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of an instance.
       *
       * @param request UpdateInstanceNameRequest
       * @return UpdateInstanceNameResponse
       */
      Models::UpdateInstanceNameResponse updateInstanceName(const Models::UpdateInstanceNameRequest &request);

      /**
       * @summary Enable or disable Internet access for Milvus.
       *
       * @param request UpdatePublicNetworkStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePublicNetworkStatusResponse
       */
      Models::UpdatePublicNetworkStatusResponse updatePublicNetworkStatusWithOptions(const Models::UpdatePublicNetworkStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable or disable Internet access for Milvus.
       *
       * @param request UpdatePublicNetworkStatusRequest
       * @return UpdatePublicNetworkStatusResponse
       */
      Models::UpdatePublicNetworkStatusResponse updatePublicNetworkStatus(const Models::UpdatePublicNetworkStatusRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
