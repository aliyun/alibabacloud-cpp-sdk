// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PAI20240521_HPP_
#define ALIBABACLOUD_PAI20240521_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Pai20240521Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Pai20240521.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pai20240521
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 获取Quota
       *
       * @param request GetQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaResponse
       */
      Models::GetQuotaResponse getQuotaWithOptions(const string &QuotaId, const Models::GetQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Quota
       *
       * @param request GetQuotaRequest
       * @return GetQuotaResponse
       */
      Models::GetQuotaResponse getQuota(const string &QuotaId, const Models::GetQuotaRequest &request);

      /**
       * @summary get resource group by group id
       *
       * @param tmpReq GetResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupResponse
       */
      Models::GetResourceGroupResponse getResourceGroupWithOptions(const string &ResourceGroupID, const Models::GetResourceGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary get resource group by group id
       *
       * @param request GetResourceGroupRequest
       * @return GetResourceGroupResponse
       */
      Models::GetResourceGroupResponse getResourceGroup(const string &ResourceGroupID, const Models::GetResourceGroupRequest &request);

      /**
       * @summary get machine group
       *
       * @param tmpReq GetResourceGroupMachineGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupMachineGroupResponse
       */
      Models::GetResourceGroupMachineGroupResponse getResourceGroupMachineGroupWithOptions(const string &MachineGroupID, const string &ResourceGroupID, const Models::GetResourceGroupMachineGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary get machine group
       *
       * @param request GetResourceGroupMachineGroupRequest
       * @return GetResourceGroupMachineGroupResponse
       */
      Models::GetResourceGroupMachineGroupResponse getResourceGroupMachineGroup(const string &MachineGroupID, const string &ResourceGroupID, const Models::GetResourceGroupMachineGroupRequest &request);

      /**
       * @summary get resource group requested resource by resource group id
       *
       * @param request GetResourceGroupRequestRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupRequestResponse
       */
      Models::GetResourceGroupRequestResponse getResourceGroupRequestWithOptions(const Models::GetResourceGroupRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary get resource group requested resource by resource group id
       *
       * @param request GetResourceGroupRequestRequest
       * @return GetResourceGroupRequestResponse
       */
      Models::GetResourceGroupRequestResponse getResourceGroupRequest(const Models::GetResourceGroupRequestRequest &request);

      /**
       * @summary get resource group total resource by group id
       *
       * @param request GetResourceGroupTotalRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupTotalResponse
       */
      Models::GetResourceGroupTotalResponse getResourceGroupTotalWithOptions(const Models::GetResourceGroupTotalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary get resource group total resource by group id
       *
       * @param request GetResourceGroupTotalRequest
       * @return GetResourceGroupTotalResponse
       */
      Models::GetResourceGroupTotalResponse getResourceGroupTotal(const Models::GetResourceGroupTotalRequest &request);

      /**
       * @summary GetUserAliUidByInstanceId
       *
       * @param request GetUserAliUidByInstanceIdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserAliUidByInstanceIdResponse
       */
      Models::GetUserAliUidByInstanceIdResponse getUserAliUidByInstanceIdWithOptions(const string &ResourceInstanceId, const Models::GetUserAliUidByInstanceIdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetUserAliUidByInstanceId
       *
       * @param request GetUserAliUidByInstanceIdRequest
       * @return GetUserAliUidByInstanceIdResponse
       */
      Models::GetUserAliUidByInstanceIdResponse getUserAliUidByInstanceId(const string &ResourceInstanceId, const Models::GetUserAliUidByInstanceIdRequest &request);

      /**
       * @summary get user view  metrics
       *
       * @param request GetUserViewMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserViewMetricsResponse
       */
      Models::GetUserViewMetricsResponse getUserViewMetricsWithOptions(const string &ResourceGroupID, const Models::GetUserViewMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary get user view  metrics
       *
       * @param request GetUserViewMetricsRequest
       * @return GetUserViewMetricsResponse
       */
      Models::GetUserViewMetricsResponse getUserViewMetrics(const string &ResourceGroupID, const Models::GetUserViewMetricsRequest &request);

      /**
       * @summary ListCacheServices
       *
       * @param request ListDataCacheServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataCacheServicesResponse
       */
      Models::ListDataCacheServicesResponse listDataCacheServicesWithOptions(const Models::ListDataCacheServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListCacheServices
       *
       * @param request ListDataCacheServicesRequest
       * @return ListDataCacheServicesResponse
       */
      Models::ListDataCacheServicesResponse listDataCacheServices(const Models::ListDataCacheServicesRequest &request);

      /**
       * @summary 获取资源节点列表
       *
       * @param tmpReq ListNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodesWithOptions(const Models::ListNodesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源节点列表
       *
       * @param request ListNodesRequest
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodes(const Models::ListNodesRequest &request);

      /**
       * @summary 获取Quota列表
       *
       * @param request ListQuotasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotasResponse
       */
      Models::ListQuotasResponse listQuotasWithOptions(const Models::ListQuotasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Quota列表
       *
       * @param request ListQuotasRequest
       * @return ListQuotasResponse
       */
      Models::ListQuotasResponse listQuotas(const Models::ListQuotasRequest &request);

      /**
       * @summary list machine groups
       *
       * @param request ListResourceGroupMachineGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupMachineGroupsResponse
       */
      Models::ListResourceGroupMachineGroupsResponse listResourceGroupMachineGroupsWithOptions(const string &ResourceGroupID, const Models::ListResourceGroupMachineGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary list machine groups
       *
       * @param request ListResourceGroupMachineGroupsRequest
       * @return ListResourceGroupMachineGroupsResponse
       */
      Models::ListResourceGroupMachineGroupsResponse listResourceGroupMachineGroups(const string &ResourceGroupID, const Models::ListResourceGroupMachineGroupsRequest &request);

      /**
       * @summary list resource group
       *
       * @param request ListResourceGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroupsWithOptions(const Models::ListResourceGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary list resource group
       *
       * @param request ListResourceGroupsRequest
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroups(const Models::ListResourceGroupsRequest &request);

      /**
       * @summary 云产品查标签接口
       *
       * @param tmpReq ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 云产品查标签接口
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 打系统标签接口
       *
       * @param request TagResourcesSystemTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesSystemTagsResponse
       */
      Models::TagResourcesSystemTagsResponse tagResourcesSystemTagsWithOptions(const Models::TagResourcesSystemTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打系统标签接口
       *
       * @param request TagResourcesSystemTagsRequest
       * @return TagResourcesSystemTagsResponse
       */
      Models::TagResourcesSystemTagsResponse tagResourcesSystemTags(const Models::TagResourcesSystemTagsRequest &request);

      /**
       * @summary 删系统标签接口
       *
       * @param tmpReq UntagResourcesSystemTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesSystemTagsResponse
       */
      Models::UntagResourcesSystemTagsResponse untagResourcesSystemTagsWithOptions(const Models::UntagResourcesSystemTagsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删系统标签接口
       *
       * @param request UntagResourcesSystemTagsRequest
       * @return UntagResourcesSystemTagsResponse
       */
      Models::UntagResourcesSystemTagsResponse untagResourcesSystemTags(const Models::UntagResourcesSystemTagsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Pai20240521
#endif
