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
