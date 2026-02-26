// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_RESOURCECENTER20221201_HPP_
#define ALIBABACLOUD_RESOURCECENTER20221201_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ResourceCenter20221201Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ResourceCenter20221201.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Sets a default filter.
       *
       * @param request AssociateDefaultFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateDefaultFilterResponse
       */
      Models::AssociateDefaultFilterResponse associateDefaultFilterWithOptions(const Models::AssociateDefaultFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a default filter.
       *
       * @param request AssociateDefaultFilterRequest
       * @return AssociateDefaultFilterResponse
       */
      Models::AssociateDefaultFilterResponse associateDefaultFilter(const Models::AssociateDefaultFilterRequest &request);

      /**
       * @summary Queries the configurations of multiple resources in your account.
       *
       * @param request BatchGetResourceConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetResourceConfigurationsResponse
       */
      Models::BatchGetResourceConfigurationsResponse batchGetResourceConfigurationsWithOptions(const Models::BatchGetResourceConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of multiple resources in your account.
       *
       * @param request BatchGetResourceConfigurationsRequest
       * @return BatchGetResourceConfigurationsResponse
       */
      Models::BatchGetResourceConfigurationsResponse batchGetResourceConfigurations(const Models::BatchGetResourceConfigurationsRequest &request);

      /**
       * @summary Creates a resource delivery channel for the current account.
       *
       * @description Resource delivery supports the scheduled delivery of resource snapshots and the delivery of resource configuration changes.
       * Scheduled delivery of resource snapshots supports two scenarios:
       * - Standard delivery: Leave the `ResourceSnapshotDelivery.CustomExpression` parameter empty.
       * - Custom delivery: Set the `ResourceSnapshotDelivery.CustomExpression` parameter to an appropriate value.
       *
       * @param request CreateDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeliveryChannelResponse
       */
      Models::CreateDeliveryChannelResponse createDeliveryChannelWithOptions(const Models::CreateDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource delivery channel for the current account.
       *
       * @description Resource delivery supports the scheduled delivery of resource snapshots and the delivery of resource configuration changes.
       * Scheduled delivery of resource snapshots supports two scenarios:
       * - Standard delivery: Leave the `ResourceSnapshotDelivery.CustomExpression` parameter empty.
       * - Custom delivery: Set the `ResourceSnapshotDelivery.CustomExpression` parameter to an appropriate value.
       *
       * @param request CreateDeliveryChannelRequest
       * @return CreateDeliveryChannelResponse
       */
      Models::CreateDeliveryChannelResponse createDeliveryChannel(const Models::CreateDeliveryChannelRequest &request);

      /**
       * @summary Creates a filter.
       *
       * @param request CreateFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFilterResponse
       */
      Models::CreateFilterResponse createFilterWithOptions(const Models::CreateFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a filter.
       *
       * @param request CreateFilterRequest
       * @return CreateFilterResponse
       */
      Models::CreateFilterResponse createFilter(const Models::CreateFilterRequest &request);

      /**
       * @summary Creates a multi-account delivery channel.
       *
       * @description In Resource Center, you can create multi-account delivery channels by using the management account of your resource directory or the delegated administrator account of Resource Center to deliver resource configuration change events and scheduled resource snapshots within the members in your resource directory to Object Storage Service (OSS) or Simple Log Service (SLS). Then, other Alibaba Cloud services consume standardized resource information from OSS or Simple Log Service.
       * Scheduled resource snapshots support the following delivery scenarios:
       * - Standard delivery: Leave the `ResourceSnapshotDelivery.CustomExpression` parameter empty.
       * - Custom delivery: Set the `ResourceSnapshotDelivery.CustomExpression` parameter to an appropriate value.
       *
       * @param request CreateMultiAccountDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMultiAccountDeliveryChannelResponse
       */
      Models::CreateMultiAccountDeliveryChannelResponse createMultiAccountDeliveryChannelWithOptions(const Models::CreateMultiAccountDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a multi-account delivery channel.
       *
       * @description In Resource Center, you can create multi-account delivery channels by using the management account of your resource directory or the delegated administrator account of Resource Center to deliver resource configuration change events and scheduled resource snapshots within the members in your resource directory to Object Storage Service (OSS) or Simple Log Service (SLS). Then, other Alibaba Cloud services consume standardized resource information from OSS or Simple Log Service.
       * Scheduled resource snapshots support the following delivery scenarios:
       * - Standard delivery: Leave the `ResourceSnapshotDelivery.CustomExpression` parameter empty.
       * - Custom delivery: Set the `ResourceSnapshotDelivery.CustomExpression` parameter to an appropriate value.
       *
       * @param request CreateMultiAccountDeliveryChannelRequest
       * @return CreateMultiAccountDeliveryChannelResponse
       */
      Models::CreateMultiAccountDeliveryChannelResponse createMultiAccountDeliveryChannel(const Models::CreateMultiAccountDeliveryChannelRequest &request);

      /**
       * @summary Creates a custom query template.
       *
       * @param request CreateSavedQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSavedQueryResponse
       */
      Models::CreateSavedQueryResponse createSavedQueryWithOptions(const Models::CreateSavedQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom query template.
       *
       * @param request CreateSavedQueryRequest
       * @return CreateSavedQueryResponse
       */
      Models::CreateSavedQueryResponse createSavedQuery(const Models::CreateSavedQueryRequest &request);

      /**
       * @summary Deletes a single-account delivery channel.
       *
       * @param request DeleteDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeliveryChannelResponse
       */
      Models::DeleteDeliveryChannelResponse deleteDeliveryChannelWithOptions(const Models::DeleteDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a single-account delivery channel.
       *
       * @param request DeleteDeliveryChannelRequest
       * @return DeleteDeliveryChannelResponse
       */
      Models::DeleteDeliveryChannelResponse deleteDeliveryChannel(const Models::DeleteDeliveryChannelRequest &request);

      /**
       * @summary Deletes a filter.
       *
       * @param request DeleteFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFilterResponse
       */
      Models::DeleteFilterResponse deleteFilterWithOptions(const Models::DeleteFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a filter.
       *
       * @param request DeleteFilterRequest
       * @return DeleteFilterResponse
       */
      Models::DeleteFilterResponse deleteFilter(const Models::DeleteFilterRequest &request);

      /**
       * @summary Deletes a multi-account delivery channel.
       *
       * @param request DeleteMultiAccountDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMultiAccountDeliveryChannelResponse
       */
      Models::DeleteMultiAccountDeliveryChannelResponse deleteMultiAccountDeliveryChannelWithOptions(const Models::DeleteMultiAccountDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a multi-account delivery channel.
       *
       * @param request DeleteMultiAccountDeliveryChannelRequest
       * @return DeleteMultiAccountDeliveryChannelResponse
       */
      Models::DeleteMultiAccountDeliveryChannelResponse deleteMultiAccountDeliveryChannel(const Models::DeleteMultiAccountDeliveryChannelRequest &request);

      /**
       * @summary Deletes a custom query template.
       *
       * @param request DeleteSavedQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSavedQueryResponse
       */
      Models::DeleteSavedQueryResponse deleteSavedQueryWithOptions(const Models::DeleteSavedQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom query template.
       *
       * @param request DeleteSavedQueryRequest
       * @return DeleteSavedQueryResponse
       */
      Models::DeleteSavedQueryResponse deleteSavedQuery(const Models::DeleteSavedQueryRequest &request);

      /**
       * @summary 关闭跨账号搜索功能
       *
       * @param request DisableMultiAccountResourceCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableMultiAccountResourceCenterResponse
       */
      Models::DisableMultiAccountResourceCenterResponse disableMultiAccountResourceCenterWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭跨账号搜索功能
       *
       * @return DisableMultiAccountResourceCenterResponse
       */
      Models::DisableMultiAccountResourceCenterResponse disableMultiAccountResourceCenter();

      /**
       * @summary 禁用资源中心
       *
       * @param request DisableResourceCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableResourceCenterResponse
       */
      Models::DisableResourceCenterResponse disableResourceCenterWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用资源中心
       *
       * @return DisableResourceCenterResponse
       */
      Models::DisableResourceCenterResponse disableResourceCenter();

      /**
       * @summary Cancels the default filter.
       *
       * @param request DisassociateDefaultFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateDefaultFilterResponse
       */
      Models::DisassociateDefaultFilterResponse disassociateDefaultFilterWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the default filter.
       *
       * @return DisassociateDefaultFilterResponse
       */
      Models::DisassociateDefaultFilterResponse disassociateDefaultFilter();

      /**
       * @summary 开通跨账号搜索功能
       *
       * @param request EnableMultiAccountResourceCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableMultiAccountResourceCenterResponse
       */
      Models::EnableMultiAccountResourceCenterResponse enableMultiAccountResourceCenterWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开通跨账号搜索功能
       *
       * @return EnableMultiAccountResourceCenterResponse
       */
      Models::EnableMultiAccountResourceCenterResponse enableMultiAccountResourceCenter();

      /**
       * @summary Activates the Resource Center service.
       *
       * @param request EnableResourceCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableResourceCenterResponse
       */
      Models::EnableResourceCenterResponse enableResourceCenterWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the Resource Center service.
       *
       * @return EnableResourceCenterResponse
       */
      Models::EnableResourceCenterResponse enableResourceCenter();

      /**
       * @summary 执行多账号查询
       *
       * @param request ExecuteMultiAccountSQLQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteMultiAccountSQLQueryResponse
       */
      Models::ExecuteMultiAccountSQLQueryResponse executeMultiAccountSQLQueryWithOptions(const Models::ExecuteMultiAccountSQLQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行多账号查询
       *
       * @param request ExecuteMultiAccountSQLQueryRequest
       * @return ExecuteMultiAccountSQLQueryResponse
       */
      Models::ExecuteMultiAccountSQLQueryResponse executeMultiAccountSQLQuery(const Models::ExecuteMultiAccountSQLQueryRequest &request);

      /**
       * @summary Executes an SQL statement to query the resources that can be accessed within the current account.
       *
       * @param request ExecuteSQLQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteSQLQueryResponse
       */
      Models::ExecuteSQLQueryResponse executeSQLQueryWithOptions(const Models::ExecuteSQLQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes an SQL statement to query the resources that can be accessed within the current account.
       *
       * @param request ExecuteSQLQueryRequest
       * @return ExecuteSQLQueryResponse
       */
      Models::ExecuteSQLQueryResponse executeSQLQuery(const Models::ExecuteSQLQueryRequest &request);

      /**
       * @summary Queries the information about a delivery channel within the current account.
       *
       * @param request GetDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeliveryChannelResponse
       */
      Models::GetDeliveryChannelResponse getDeliveryChannelWithOptions(const Models::GetDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a delivery channel within the current account.
       *
       * @param request GetDeliveryChannelRequest
       * @return GetDeliveryChannelResponse
       */
      Models::GetDeliveryChannelResponse getDeliveryChannel(const Models::GetDeliveryChannelRequest &request);

      /**
       * @summary Queries the statistics of a resource delivery channel in the current account.
       *
       * @param request GetDeliveryChannelStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeliveryChannelStatisticsResponse
       */
      Models::GetDeliveryChannelStatisticsResponse getDeliveryChannelStatisticsWithOptions(const Models::GetDeliveryChannelStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of a resource delivery channel in the current account.
       *
       * @param request GetDeliveryChannelStatisticsRequest
       * @return GetDeliveryChannelStatisticsResponse
       */
      Models::GetDeliveryChannelStatisticsResponse getDeliveryChannelStatistics(const Models::GetDeliveryChannelStatisticsRequest &request);

      /**
       * @summary Queries the information about a sample query template.
       *
       * @param request GetExampleQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExampleQueryResponse
       */
      Models::GetExampleQueryResponse getExampleQueryWithOptions(const Models::GetExampleQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a sample query template.
       *
       * @param request GetExampleQueryRequest
       * @return GetExampleQueryResponse
       */
      Models::GetExampleQueryResponse getExampleQuery(const Models::GetExampleQueryRequest &request);

      /**
       * @summary Queries the information about a cross-account resource delivery channel.
       *
       * @param request GetMultiAccountDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultiAccountDeliveryChannelResponse
       */
      Models::GetMultiAccountDeliveryChannelResponse getMultiAccountDeliveryChannelWithOptions(const Models::GetMultiAccountDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a cross-account resource delivery channel.
       *
       * @param request GetMultiAccountDeliveryChannelRequest
       * @return GetMultiAccountDeliveryChannelResponse
       */
      Models::GetMultiAccountDeliveryChannelResponse getMultiAccountDeliveryChannel(const Models::GetMultiAccountDeliveryChannelRequest &request);

      /**
       * @summary Queries the statistics on a multi-account delivery channel.
       *
       * @param request GetMultiAccountDeliveryChannelStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultiAccountDeliveryChannelStatisticsResponse
       */
      Models::GetMultiAccountDeliveryChannelStatisticsResponse getMultiAccountDeliveryChannelStatisticsWithOptions(const Models::GetMultiAccountDeliveryChannelStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on a multi-account delivery channel.
       *
       * @param request GetMultiAccountDeliveryChannelStatisticsRequest
       * @return GetMultiAccountDeliveryChannelStatisticsResponse
       */
      Models::GetMultiAccountDeliveryChannelStatisticsResponse getMultiAccountDeliveryChannelStatistics(const Models::GetMultiAccountDeliveryChannelStatisticsRequest &request);

      /**
       * @summary 获取跨账号资源中心服务状态
       *
       * @param request GetMultiAccountResourceCenterServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultiAccountResourceCenterServiceStatusResponse
       */
      Models::GetMultiAccountResourceCenterServiceStatusResponse getMultiAccountResourceCenterServiceStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取跨账号资源中心服务状态
       *
       * @return GetMultiAccountResourceCenterServiceStatusResponse
       */
      Models::GetMultiAccountResourceCenterServiceStatusResponse getMultiAccountResourceCenterServiceStatus();

      /**
       * @summary Queries the configurations of a resource within the management account or a member of a resource directory.
       *
       * @param request GetMultiAccountResourceConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultiAccountResourceConfigurationResponse
       */
      Models::GetMultiAccountResourceConfigurationResponse getMultiAccountResourceConfigurationWithOptions(const Models::GetMultiAccountResourceConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a resource within the management account or a member of a resource directory.
       *
       * @param request GetMultiAccountResourceConfigurationRequest
       * @return GetMultiAccountResourceConfigurationResponse
       */
      Models::GetMultiAccountResourceConfigurationResponse getMultiAccountResourceConfiguration(const Models::GetMultiAccountResourceConfigurationRequest &request);

      /**
       * @summary Queries the number of resources within the management account and multiple members of a resource directory.
       *
       * @description You can query only resources supported by Resource Center. For more information, see [Services that work with Resource Center](https://help.aliyun.com/document_detail/477798.html).
       *
       * @param request GetMultiAccountResourceCountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultiAccountResourceCountsResponse
       */
      Models::GetMultiAccountResourceCountsResponse getMultiAccountResourceCountsWithOptions(const Models::GetMultiAccountResourceCountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of resources within the management account and multiple members of a resource directory.
       *
       * @description You can query only resources supported by Resource Center. For more information, see [Services that work with Resource Center](https://help.aliyun.com/document_detail/477798.html).
       *
       * @param request GetMultiAccountResourceCountsRequest
       * @return GetMultiAccountResourceCountsResponse
       */
      Models::GetMultiAccountResourceCountsResponse getMultiAccountResourceCounts(const Models::GetMultiAccountResourceCountsRequest &request);

      /**
       * @summary Queries the status of the Resource Center service.
       *
       * @param request GetResourceCenterServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceCenterServiceStatusResponse
       */
      Models::GetResourceCenterServiceStatusResponse getResourceCenterServiceStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the Resource Center service.
       *
       * @return GetResourceCenterServiceStatusResponse
       */
      Models::GetResourceCenterServiceStatusResponse getResourceCenterServiceStatus();

      /**
       * @summary 获取资源配置
       *
       * @param request GetResourceConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceConfigurationResponse
       */
      Models::GetResourceConfigurationResponse getResourceConfigurationWithOptions(const Models::GetResourceConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源配置
       *
       * @param request GetResourceConfigurationRequest
       * @return GetResourceConfigurationResponse
       */
      Models::GetResourceConfigurationResponse getResourceConfiguration(const Models::GetResourceConfigurationRequest &request);

      /**
       * @summary Queries the number of resources in your account that you have permission to access.
       *
       * @description - You can query the number of resources in your account that you have permission to access.
       * - You can query only the [Alibaba Cloud services and resource types that are supported by Resource Center](https://help.aliyun.com/document_detail/477798.html).
       *
       * @param request GetResourceCountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceCountsResponse
       */
      Models::GetResourceCountsResponse getResourceCountsWithOptions(const Models::GetResourceCountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of resources in your account that you have permission to access.
       *
       * @description - You can query the number of resources in your account that you have permission to access.
       * - You can query only the [Alibaba Cloud services and resource types that are supported by Resource Center](https://help.aliyun.com/document_detail/477798.html).
       *
       * @param request GetResourceCountsRequest
       * @return GetResourceCountsResponse
       */
      Models::GetResourceCountsResponse getResourceCounts(const Models::GetResourceCountsRequest &request);

      /**
       * @summary Queries the information about a custom query template.
       *
       * @param request GetSavedQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSavedQueryResponse
       */
      Models::GetSavedQueryResponse getSavedQueryWithOptions(const Models::GetSavedQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a custom query template.
       *
       * @param request GetSavedQueryRequest
       * @return GetSavedQueryResponse
       */
      Models::GetSavedQueryResponse getSavedQuery(const Models::GetSavedQueryRequest &request);

      /**
       * @summary Queries a list of delivery channels within the current account.
       *
       * @param request ListDeliveryChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeliveryChannelsResponse
       */
      Models::ListDeliveryChannelsResponse listDeliveryChannelsWithOptions(const Models::ListDeliveryChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of delivery channels within the current account.
       *
       * @param request ListDeliveryChannelsRequest
       * @return ListDeliveryChannelsResponse
       */
      Models::ListDeliveryChannelsResponse listDeliveryChannels(const Models::ListDeliveryChannelsRequest &request);

      /**
       * @summary Queries all sample query templates.
       *
       * @param request ListExampleQueriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExampleQueriesResponse
       */
      Models::ListExampleQueriesResponse listExampleQueriesWithOptions(const Models::ListExampleQueriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all sample query templates.
       *
       * @param request ListExampleQueriesRequest
       * @return ListExampleQueriesResponse
       */
      Models::ListExampleQueriesResponse listExampleQueries(const Models::ListExampleQueriesRequest &request);

      /**
       * @summary 获取过滤器列表
       *
       * @param request ListFiltersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFiltersResponse
       */
      Models::ListFiltersResponse listFiltersWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取过滤器列表
       *
       * @return ListFiltersResponse
       */
      Models::ListFiltersResponse listFilters();

      /**
       * @summary Queries a list of delivery channels in resource directory mode.
       *
       * @param request ListMultiAccountDeliveryChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultiAccountDeliveryChannelsResponse
       */
      Models::ListMultiAccountDeliveryChannelsResponse listMultiAccountDeliveryChannelsWithOptions(const Models::ListMultiAccountDeliveryChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of delivery channels in resource directory mode.
       *
       * @param request ListMultiAccountDeliveryChannelsRequest
       * @return ListMultiAccountDeliveryChannelsResponse
       */
      Models::ListMultiAccountDeliveryChannelsResponse listMultiAccountDeliveryChannels(const Models::ListMultiAccountDeliveryChannelsRequest &request);

      /**
       * @summary Queries the resource groups within the management account or a member in a resource directory.
       *
       * @param request ListMultiAccountResourceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultiAccountResourceGroupsResponse
       */
      Models::ListMultiAccountResourceGroupsResponse listMultiAccountResourceGroupsWithOptions(const Models::ListMultiAccountResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource groups within the management account or a member in a resource directory.
       *
       * @param request ListMultiAccountResourceGroupsRequest
       * @return ListMultiAccountResourceGroupsResponse
       */
      Models::ListMultiAccountResourceGroupsResponse listMultiAccountResourceGroups(const Models::ListMultiAccountResourceGroupsRequest &request);

      /**
       * @summary 跨账号列出资源关系
       *
       * @param request ListMultiAccountResourceRelationshipsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultiAccountResourceRelationshipsResponse
       */
      Models::ListMultiAccountResourceRelationshipsResponse listMultiAccountResourceRelationshipsWithOptions(const Models::ListMultiAccountResourceRelationshipsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 跨账号列出资源关系
       *
       * @param request ListMultiAccountResourceRelationshipsRequest
       * @return ListMultiAccountResourceRelationshipsResponse
       */
      Models::ListMultiAccountResourceRelationshipsResponse listMultiAccountResourceRelationships(const Models::ListMultiAccountResourceRelationshipsRequest &request);

      /**
       * @summary 查询多账号标签键
       *
       * @param request ListMultiAccountTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultiAccountTagKeysResponse
       */
      Models::ListMultiAccountTagKeysResponse listMultiAccountTagKeysWithOptions(const Models::ListMultiAccountTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询多账号标签键
       *
       * @param request ListMultiAccountTagKeysRequest
       * @return ListMultiAccountTagKeysResponse
       */
      Models::ListMultiAccountTagKeysResponse listMultiAccountTagKeys(const Models::ListMultiAccountTagKeysRequest &request);

      /**
       * @summary 查询多账号标签值
       *
       * @param request ListMultiAccountTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultiAccountTagValuesResponse
       */
      Models::ListMultiAccountTagValuesResponse listMultiAccountTagValuesWithOptions(const Models::ListMultiAccountTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询多账号标签值
       *
       * @param request ListMultiAccountTagValuesRequest
       * @return ListMultiAccountTagValuesResponse
       */
      Models::ListMultiAccountTagValuesResponse listMultiAccountTagValues(const Models::ListMultiAccountTagValuesRequest &request);

      /**
       * @summary 列出资源关系
       *
       * @param request ListResourceRelationshipsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceRelationshipsResponse
       */
      Models::ListResourceRelationshipsResponse listResourceRelationshipsWithOptions(const Models::ListResourceRelationshipsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出资源关系
       *
       * @param request ListResourceRelationshipsRequest
       * @return ListResourceRelationshipsResponse
       */
      Models::ListResourceRelationshipsResponse listResourceRelationships(const Models::ListResourceRelationshipsRequest &request);

      /**
       * @summary Queries the metadata of resource types
       *
       * @param request ListResourceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceTypesResponse
       */
      Models::ListResourceTypesResponse listResourceTypesWithOptions(const Models::ListResourceTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metadata of resource types
       *
       * @param request ListResourceTypesRequest
       * @return ListResourceTypesResponse
       */
      Models::ListResourceTypesResponse listResourceTypes(const Models::ListResourceTypesRequest &request);

      /**
       * @summary Queries all custom query templates.
       *
       * @param request ListSavedQueriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSavedQueriesResponse
       */
      Models::ListSavedQueriesResponse listSavedQueriesWithOptions(const Models::ListSavedQueriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all custom query templates.
       *
       * @param request ListSavedQueriesRequest
       * @return ListSavedQueriesResponse
       */
      Models::ListSavedQueriesResponse listSavedQueries(const Models::ListSavedQueriesRequest &request);

      /**
       * @summary Queries the tag keys of resources within the current account.
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag keys of resources within the current account.
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

      /**
       * @summary 查询标签值
       *
       * @param request ListTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValuesWithOptions(const Models::ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询标签值
       *
       * @param request ListTagValuesRequest
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValues(const Models::ListTagValuesRequest &request);

      /**
       * @summary Searches for resources in the management account and multiple member accounts of a resource directory.
       *
       * @description - You can search only for [Services that work with Resource Center](https://help.aliyun.com/document_detail/477798.html).
       * - To search for resources across accounts as a RAM user or RAM role, you must have been attached the `resourcecenter:SearchMultiAccountResources` policy. For more information, see [Grant a RAM user the permissions to use Resource Center](https://help.aliyun.com/document_detail/600556.html).
       * - By default, this operation returns a maximum of 20 entries. To change the maximum number of entries that can be returned, specify the `MaxResults` parameter.
       * - If the response does not include `NextToken`, no more data is available. To query the next page of results, set the `NextToken` parameter to the value that was returned from the previous call. If you do not specify the `NextToken` parameter, the first page of data is returned by default.
       * - You can set one or more filter conditions to narrow the search scope. For information about supported filter parameters and matching methods, see the information below. Multiple filter conditions are joined by a logical `AND`. Only resources that meet all filter conditions are returned. The values within a single filter condition are joined by a logical `OR`. Resources that meet any value for a filter condition are returned.
       * - For more query examples, visit <props="china">[示例中心](https://api.aliyun.com/api-tools/demo/ResourceCenter) <props="intl">[OpenAPI Portal](https://api.alibabacloud.com/api-tools/demo/ResourceCenter).
       *
       * @param request SearchMultiAccountResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMultiAccountResourcesResponse
       */
      Models::SearchMultiAccountResourcesResponse searchMultiAccountResourcesWithOptions(const Models::SearchMultiAccountResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for resources in the management account and multiple member accounts of a resource directory.
       *
       * @description - You can search only for [Services that work with Resource Center](https://help.aliyun.com/document_detail/477798.html).
       * - To search for resources across accounts as a RAM user or RAM role, you must have been attached the `resourcecenter:SearchMultiAccountResources` policy. For more information, see [Grant a RAM user the permissions to use Resource Center](https://help.aliyun.com/document_detail/600556.html).
       * - By default, this operation returns a maximum of 20 entries. To change the maximum number of entries that can be returned, specify the `MaxResults` parameter.
       * - If the response does not include `NextToken`, no more data is available. To query the next page of results, set the `NextToken` parameter to the value that was returned from the previous call. If you do not specify the `NextToken` parameter, the first page of data is returned by default.
       * - You can set one or more filter conditions to narrow the search scope. For information about supported filter parameters and matching methods, see the information below. Multiple filter conditions are joined by a logical `AND`. Only resources that meet all filter conditions are returned. The values within a single filter condition are joined by a logical `OR`. Resources that meet any value for a filter condition are returned.
       * - For more query examples, visit <props="china">[示例中心](https://api.aliyun.com/api-tools/demo/ResourceCenter) <props="intl">[OpenAPI Portal](https://api.alibabacloud.com/api-tools/demo/ResourceCenter).
       *
       * @param request SearchMultiAccountResourcesRequest
       * @return SearchMultiAccountResourcesResponse
       */
      Models::SearchMultiAccountResourcesResponse searchMultiAccountResources(const Models::SearchMultiAccountResourcesRequest &request);

      /**
       * @summary Searches for resources in your current account that you are permitted to access.
       *
       * @description - You can search only for resources in your current account that you are permitted to access.
       * - You can search only for the [Alibaba Cloud services and resource types that are supported by Resource Center](https://help.aliyun.com/document_detail/477798.html).
       * - By default, the SearchResources operation returns a maximum of 20 entries. You can specify the `MaxResults` parameter to change the maximum number of entries that are returned.
       * - If the response does not include a `NextToken` value, no more results are available. To retrieve the next page of results, include the `NextToken` value from the previous response in your next request. If you do not specify the `NextToken` parameter, the first page of results is returned.
       * - You can set one or more filter conditions to narrow the search scope. For information about the supported filter parameters and matching methods, see the following sections. Multiple filter conditions are combined by a logical `AND`. Only resources that meet all filter conditions are returned. The values within a filter condition are combined by a logical `OR`. Resources that meet any value of the filter condition are returned.
       * - For more query examples, see [API Explorer](https://api.aliyun.com/api-tools/demo/ResourceCenter).
       *
       * @param request SearchResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchResourcesResponse
       */
      Models::SearchResourcesResponse searchResourcesWithOptions(const Models::SearchResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for resources in your current account that you are permitted to access.
       *
       * @description - You can search only for resources in your current account that you are permitted to access.
       * - You can search only for the [Alibaba Cloud services and resource types that are supported by Resource Center](https://help.aliyun.com/document_detail/477798.html).
       * - By default, the SearchResources operation returns a maximum of 20 entries. You can specify the `MaxResults` parameter to change the maximum number of entries that are returned.
       * - If the response does not include a `NextToken` value, no more results are available. To retrieve the next page of results, include the `NextToken` value from the previous response in your next request. If you do not specify the `NextToken` parameter, the first page of results is returned.
       * - You can set one or more filter conditions to narrow the search scope. For information about the supported filter parameters and matching methods, see the following sections. Multiple filter conditions are combined by a logical `AND`. Only resources that meet all filter conditions are returned. The values within a filter condition are combined by a logical `OR`. Resources that meet any value of the filter condition are returned.
       * - For more query examples, see [API Explorer](https://api.aliyun.com/api-tools/demo/ResourceCenter).
       *
       * @param request SearchResourcesRequest
       * @return SearchResourcesResponse
       */
      Models::SearchResourcesResponse searchResources(const Models::SearchResourcesRequest &request);

      /**
       * @summary 更新投递渠道
       *
       * @param request UpdateDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDeliveryChannelResponse
       */
      Models::UpdateDeliveryChannelResponse updateDeliveryChannelWithOptions(const Models::UpdateDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新投递渠道
       *
       * @param request UpdateDeliveryChannelRequest
       * @return UpdateDeliveryChannelResponse
       */
      Models::UpdateDeliveryChannelResponse updateDeliveryChannel(const Models::UpdateDeliveryChannelRequest &request);

      /**
       * @summary Updates a filter.
       *
       * @param request UpdateFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFilterResponse
       */
      Models::UpdateFilterResponse updateFilterWithOptions(const Models::UpdateFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a filter.
       *
       * @param request UpdateFilterRequest
       * @return UpdateFilterResponse
       */
      Models::UpdateFilterResponse updateFilter(const Models::UpdateFilterRequest &request);

      /**
       * @summary Updates a multi-account delivery channel.
       *
       * @description Resource delivery supports the delivery of resource configuration change events and scheduled resource snapshots.
       * Scheduled resource snapshots support the following delivery scenarios:
       * - Standard delivery: Leave the `ResourceSnapshotDelivery.CustomExpression` parameter empty.
       * - Custom delivery: Set the `ResourceSnapshotDelivery.CustomExpression` parameter to an appropriate value.
       *
       * @param request UpdateMultiAccountDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMultiAccountDeliveryChannelResponse
       */
      Models::UpdateMultiAccountDeliveryChannelResponse updateMultiAccountDeliveryChannelWithOptions(const Models::UpdateMultiAccountDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a multi-account delivery channel.
       *
       * @description Resource delivery supports the delivery of resource configuration change events and scheduled resource snapshots.
       * Scheduled resource snapshots support the following delivery scenarios:
       * - Standard delivery: Leave the `ResourceSnapshotDelivery.CustomExpression` parameter empty.
       * - Custom delivery: Set the `ResourceSnapshotDelivery.CustomExpression` parameter to an appropriate value.
       *
       * @param request UpdateMultiAccountDeliveryChannelRequest
       * @return UpdateMultiAccountDeliveryChannelResponse
       */
      Models::UpdateMultiAccountDeliveryChannelResponse updateMultiAccountDeliveryChannel(const Models::UpdateMultiAccountDeliveryChannelRequest &request);

      /**
       * @summary Updates a custom query template.
       *
       * @param request UpdateSavedQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSavedQueryResponse
       */
      Models::UpdateSavedQueryResponse updateSavedQueryWithOptions(const Models::UpdateSavedQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a custom query template.
       *
       * @param request UpdateSavedQueryRequest
       * @return UpdateSavedQueryResponse
       */
      Models::UpdateSavedQueryResponse updateSavedQuery(const Models::UpdateSavedQueryRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
