// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ACTIONTRAIL20200706_HPP_
#define ALIBABACLOUD_ACTIONTRAIL20200706_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Actiontrail20200706Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Actiontrail20200706.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建高级查询历史记录
       *
       * @param request CreateAdvancedQueryHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAdvancedQueryHistoryResponse
       */
      Models::CreateAdvancedQueryHistoryResponse createAdvancedQueryHistoryWithOptions(const Models::CreateAdvancedQueryHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建高级查询历史记录
       *
       * @param request CreateAdvancedQueryHistoryRequest
       * @return CreateAdvancedQueryHistoryResponse
       */
      Models::CreateAdvancedQueryHistoryResponse createAdvancedQueryHistory(const Models::CreateAdvancedQueryHistoryRequest &request);

      /**
       * @summary 创建高级查询模板
       *
       * @param request CreateAdvancedQueryTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAdvancedQueryTemplateResponse
       */
      Models::CreateAdvancedQueryTemplateResponse createAdvancedQueryTemplateWithOptions(const Models::CreateAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建高级查询模板
       *
       * @param request CreateAdvancedQueryTemplateRequest
       * @return CreateAdvancedQueryTemplateResponse
       */
      Models::CreateAdvancedQueryTemplateResponse createAdvancedQueryTemplate(const Models::CreateAdvancedQueryTemplateRequest &request);

      /**
       * @summary Creates a data backfill task.
       *
       * @description Limits
       * *   Make sure that you have created a single-account trail to deliver events to Simple Log Service by calling the [CreateTrail](https://help.aliyun.com/document_detail/212313.html) operation.
       * *   Only one data backfill task can run at a time within an Alibaba Cloud account.
       * This topic provides an example on how to create a data backfill task for a trail named `trail-name`.
       *
       * @param request CreateDeliveryHistoryJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeliveryHistoryJobResponse
       */
      Models::CreateDeliveryHistoryJobResponse createDeliveryHistoryJobWithOptions(const Models::CreateDeliveryHistoryJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data backfill task.
       *
       * @description Limits
       * *   Make sure that you have created a single-account trail to deliver events to Simple Log Service by calling the [CreateTrail](https://help.aliyun.com/document_detail/212313.html) operation.
       * *   Only one data backfill task can run at a time within an Alibaba Cloud account.
       * This topic provides an example on how to create a data backfill task for a trail named `trail-name`.
       *
       * @param request CreateDeliveryHistoryJobRequest
       * @return CreateDeliveryHistoryJobResponse
       */
      Models::CreateDeliveryHistoryJobResponse createDeliveryHistoryJob(const Models::CreateDeliveryHistoryJobRequest &request);

      /**
       * @summary Creates a trail. By default, ActionTrail allows you to query events generated within your Alibaba Cloud account in the last 90 days. To query and analyze events generated more than 90 days ago, create a trail to deliver events to Object Storage Service (OSS), Simple Log Service, or MaxCompute.
       *
       * @description **Operation description**
       * >By default, a trail that is created by calling an operation is in the Disabled state. You must call the StartLogging operation to enable the trail. This way, ActionTrail can deliver events to the destination cloud service.
       * **Prerequisites**
       * Before you create a trail, make sure that at least one of the following storage configurations is complete:
       * - Deliver events to OSS
       *   - OSS is activated and a bucket is created.
       *   
       * - Deliver events to Simple Log Service
       *   - Simple Log Service is activated and a project is created.
       *  >When a trail is created, ActionTrail automatically creates a Logstore named `actiontrail_<Trail name>` in the project. You cannot write data other than the audit data to the Logstore. This ensures the accuracy of the audit data.
       *     
       * - Deliver events to MaxCompute
       *   - MaxCompute is activated.
       * >When a trail is created, ActionTrail automatically creates a project named `actiontrail_<Account ID>` on the Projects page. You cannot write data other than the audit data to the project. This ensures the accuracy of the audit data.
       * **Usage Notes**
       * This topic provides an example on how to create a single-account trail named `trail-test` to deliver events to an OSS bucket named `audit-log`.
       *
       * @param request CreateTrailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrailResponse
       */
      Models::CreateTrailResponse createTrailWithOptions(const Models::CreateTrailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a trail. By default, ActionTrail allows you to query events generated within your Alibaba Cloud account in the last 90 days. To query and analyze events generated more than 90 days ago, create a trail to deliver events to Object Storage Service (OSS), Simple Log Service, or MaxCompute.
       *
       * @description **Operation description**
       * >By default, a trail that is created by calling an operation is in the Disabled state. You must call the StartLogging operation to enable the trail. This way, ActionTrail can deliver events to the destination cloud service.
       * **Prerequisites**
       * Before you create a trail, make sure that at least one of the following storage configurations is complete:
       * - Deliver events to OSS
       *   - OSS is activated and a bucket is created.
       *   
       * - Deliver events to Simple Log Service
       *   - Simple Log Service is activated and a project is created.
       *  >When a trail is created, ActionTrail automatically creates a Logstore named `actiontrail_<Trail name>` in the project. You cannot write data other than the audit data to the Logstore. This ensures the accuracy of the audit data.
       *     
       * - Deliver events to MaxCompute
       *   - MaxCompute is activated.
       * >When a trail is created, ActionTrail automatically creates a project named `actiontrail_<Account ID>` on the Projects page. You cannot write data other than the audit data to the project. This ensures the accuracy of the audit data.
       * **Usage Notes**
       * This topic provides an example on how to create a single-account trail named `trail-test` to deliver events to an OSS bucket named `audit-log`.
       *
       * @param request CreateTrailRequest
       * @return CreateTrailResponse
       */
      Models::CreateTrailResponse createTrail(const Models::CreateTrailRequest &request);

      /**
       * @summary 删除高级查询历史记录
       *
       * @param request DeleteAdvancedQueryHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAdvancedQueryHistoryResponse
       */
      Models::DeleteAdvancedQueryHistoryResponse deleteAdvancedQueryHistoryWithOptions(const Models::DeleteAdvancedQueryHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除高级查询历史记录
       *
       * @param request DeleteAdvancedQueryHistoryRequest
       * @return DeleteAdvancedQueryHistoryResponse
       */
      Models::DeleteAdvancedQueryHistoryResponse deleteAdvancedQueryHistory(const Models::DeleteAdvancedQueryHistoryRequest &request);

      /**
       * @summary 删除高级查询模板
       *
       * @param request DeleteAdvancedQueryTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAdvancedQueryTemplateResponse
       */
      Models::DeleteAdvancedQueryTemplateResponse deleteAdvancedQueryTemplateWithOptions(const Models::DeleteAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除高级查询模板
       *
       * @param request DeleteAdvancedQueryTemplateRequest
       * @return DeleteAdvancedQueryTemplateResponse
       */
      Models::DeleteAdvancedQueryTemplateResponse deleteAdvancedQueryTemplate(const Models::DeleteAdvancedQueryTemplateRequest &request);

      /**
       * @summary 删除数据事件选择器
       *
       * @param request DeleteDataEventSelectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataEventSelectorResponse
       */
      Models::DeleteDataEventSelectorResponse deleteDataEventSelectorWithOptions(const Models::DeleteDataEventSelectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据事件选择器
       *
       * @param request DeleteDataEventSelectorRequest
       * @return DeleteDataEventSelectorResponse
       */
      Models::DeleteDataEventSelectorResponse deleteDataEventSelector(const Models::DeleteDataEventSelectorRequest &request);

      /**
       * @summary Deletes a data backfill task.
       *
       * @description This topic describes how to delete a data backfill task whose ID is `16602`.
       *
       * @param request DeleteDeliveryHistoryJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeliveryHistoryJobResponse
       */
      Models::DeleteDeliveryHistoryJobResponse deleteDeliveryHistoryJobWithOptions(const Models::DeleteDeliveryHistoryJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data backfill task.
       *
       * @description This topic describes how to delete a data backfill task whose ID is `16602`.
       *
       * @param request DeleteDeliveryHistoryJobRequest
       * @return DeleteDeliveryHistoryJobResponse
       */
      Models::DeleteDeliveryHistoryJobResponse deleteDeliveryHistoryJob(const Models::DeleteDeliveryHistoryJobRequest &request);

      /**
       * @summary Deletes a trail.
       *
       * @description This topic describes how to delete a sample trail named `trail-test`.
       *
       * @param request DeleteTrailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrailResponse
       */
      Models::DeleteTrailResponse deleteTrailWithOptions(const Models::DeleteTrailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a trail.
       *
       * @description This topic describes how to delete a sample trail named `trail-test`.
       *
       * @param request DeleteTrailRequest
       * @return DeleteTrailResponse
       */
      Models::DeleteTrailResponse deleteTrail(const Models::DeleteTrailRequest &request);

      /**
       * @summary 查询高级查询历史记录
       *
       * @param request DescribeAdvancedQueryHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdvancedQueryHistoryResponse
       */
      Models::DescribeAdvancedQueryHistoryResponse describeAdvancedQueryHistoryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询高级查询历史记录
       *
       * @return DescribeAdvancedQueryHistoryResponse
       */
      Models::DescribeAdvancedQueryHistoryResponse describeAdvancedQueryHistory();

      /**
       * @summary 查询高级查询模板
       *
       * @param request DescribeAdvancedQueryTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdvancedQueryTemplateResponse
       */
      Models::DescribeAdvancedQueryTemplateResponse describeAdvancedQueryTemplateWithOptions(const Models::DescribeAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询高级查询模板
       *
       * @param request DescribeAdvancedQueryTemplateRequest
       * @return DescribeAdvancedQueryTemplateResponse
       */
      Models::DescribeAdvancedQueryTemplateResponse describeAdvancedQueryTemplate(const Models::DescribeAdvancedQueryTemplateRequest &request);

      /**
       * @summary Queries the Alibaba Cloud regions that are supported by ActionTrail.
       *
       * @description For more information, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Alibaba Cloud regions that are supported by ActionTrail.
       *
       * @description For more information, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary 列举资源生命周期事件
       *
       * @param request DescribeResourceLifeCycleEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceLifeCycleEventsResponse
       */
      Models::DescribeResourceLifeCycleEventsResponse describeResourceLifeCycleEventsWithOptions(const Models::DescribeResourceLifeCycleEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举资源生命周期事件
       *
       * @param request DescribeResourceLifeCycleEventsRequest
       * @return DescribeResourceLifeCycleEventsResponse
       */
      Models::DescribeResourceLifeCycleEventsResponse describeResourceLifeCycleEvents(const Models::DescribeResourceLifeCycleEventsRequest &request);

      /**
       * @summary 查询所有场景
       *
       * @param request DescribeScenesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScenesResponse
       */
      Models::DescribeScenesResponse describeScenesWithOptions(const Models::DescribeScenesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询所有场景
       *
       * @param request DescribeScenesRequest
       * @return DescribeScenesResponse
       */
      Models::DescribeScenesResponse describeScenes(const Models::DescribeScenesRequest &request);

      /**
       * @summary 列举所有模版
       *
       * @param request DescribeSearchTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSearchTemplatesResponse
       */
      Models::DescribeSearchTemplatesResponse describeSearchTemplatesWithOptions(const Models::DescribeSearchTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举所有模版
       *
       * @param request DescribeSearchTemplatesRequest
       * @return DescribeSearchTemplatesResponse
       */
      Models::DescribeSearchTemplatesResponse describeSearchTemplates(const Models::DescribeSearchTemplatesRequest &request);

      /**
       * @summary Queries created trails.
       *
       * @description This topic shows you how to query the information about the single-account trails within an Alibaba Cloud account. In this example, the information about a trail named `test-4` is returned.
       *
       * @param request DescribeTrailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrailsResponse
       */
      Models::DescribeTrailsResponse describeTrailsWithOptions(const Models::DescribeTrailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries created trails.
       *
       * @description This topic shows you how to query the information about the single-account trails within an Alibaba Cloud account. In this example, the information about a trail named `test-4` is returned.
       *
       * @param request DescribeTrailsRequest
       * @return DescribeTrailsResponse
       */
      Models::DescribeTrailsResponse describeTrails(const Models::DescribeTrailsRequest &request);

      /**
       * @summary 查询用户告警量
       *
       * @param request DescribeUserAlertCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserAlertCountResponse
       */
      Models::DescribeUserAlertCountResponse describeUserAlertCountWithOptions(const Models::DescribeUserAlertCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户告警量
       *
       * @param request DescribeUserAlertCountRequest
       * @return DescribeUserAlertCountResponse
       */
      Models::DescribeUserAlertCountResponse describeUserAlertCount(const Models::DescribeUserAlertCountRequest &request);

      /**
       * @summary 查询用户日志量
       *
       * @param request DescribeUserLogCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserLogCountResponse
       */
      Models::DescribeUserLogCountResponse describeUserLogCountWithOptions(const Models::DescribeUserLogCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户日志量
       *
       * @param request DescribeUserLogCountRequest
       * @return DescribeUserLogCountResponse
       */
      Models::DescribeUserLogCountResponse describeUserLogCount(const Models::DescribeUserLogCountRequest &request);

      /**
       * @summary Enables the Insights feature
       *
       * @param request EnableInsightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableInsightResponse
       */
      Models::EnableInsightResponse enableInsightWithOptions(const Models::EnableInsightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Insights feature
       *
       * @param request EnableInsightRequest
       * @return EnableInsightResponse
       */
      Models::EnableInsightResponse enableInsight(const Models::EnableInsightRequest &request);

      /**
       * @summary Queries the information about the most recent events that are generated when a specified AccessKey pair is called to access Alibaba Cloud services.
       *
       * @description You can call this operation to query only the information about the most recent events that are generated within 400 days after February 1, 2022 when a specified AccessKey pair is called to access Alibaba Cloud services. For more information about supported events, see [Alibaba Cloud services and events that are supported by the AccessKey pair audit feature](https://help.aliyun.com/document_detail/419214.html). Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessKeyLastUsedEventsResponse
       */
      Models::GetAccessKeyLastUsedEventsResponse getAccessKeyLastUsedEventsWithOptions(const Models::GetAccessKeyLastUsedEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the most recent events that are generated when a specified AccessKey pair is called to access Alibaba Cloud services.
       *
       * @description You can call this operation to query only the information about the most recent events that are generated within 400 days after February 1, 2022 when a specified AccessKey pair is called to access Alibaba Cloud services. For more information about supported events, see [Alibaba Cloud services and events that are supported by the AccessKey pair audit feature](https://help.aliyun.com/document_detail/419214.html). Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedEventsRequest
       * @return GetAccessKeyLastUsedEventsResponse
       */
      Models::GetAccessKeyLastUsedEventsResponse getAccessKeyLastUsedEvents(const Models::GetAccessKeyLastUsedEventsRequest &request);

      /**
       * @summary Queries the information about the most recent call of a specified AccessKey pair.
       *
       * @description You can call this operation to query only the information about the most recent call of a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessKeyLastUsedInfoResponse
       */
      Models::GetAccessKeyLastUsedInfoResponse getAccessKeyLastUsedInfoWithOptions(const Models::GetAccessKeyLastUsedInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the most recent call of a specified AccessKey pair.
       *
       * @description You can call this operation to query only the information about the most recent call of a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedInfoRequest
       * @return GetAccessKeyLastUsedInfoResponse
       */
      Models::GetAccessKeyLastUsedInfoResponse getAccessKeyLastUsedInfo(const Models::GetAccessKeyLastUsedInfoRequest &request);

      /**
       * @summary Queries the information about the IP addresses that are most recently used when an AccessKey pair is called to access Alibaba Cloud services.
       *
       * @description You can call this operation to query only the information about the IP addresses that are most recently used within 400 days after February 1, 2022 when a specified AccessKey pair is called to access Alibaba Cloud services. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessKeyLastUsedIpsResponse
       */
      Models::GetAccessKeyLastUsedIpsResponse getAccessKeyLastUsedIpsWithOptions(const Models::GetAccessKeyLastUsedIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the IP addresses that are most recently used when an AccessKey pair is called to access Alibaba Cloud services.
       *
       * @description You can call this operation to query only the information about the IP addresses that are most recently used within 400 days after February 1, 2022 when a specified AccessKey pair is called to access Alibaba Cloud services. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedIpsRequest
       * @return GetAccessKeyLastUsedIpsResponse
       */
      Models::GetAccessKeyLastUsedIpsResponse getAccessKeyLastUsedIps(const Models::GetAccessKeyLastUsedIpsRequest &request);

      /**
       * @summary Queries the information about the Alibaba Cloud services that are most recently accessed by using a specified AccessKey pair.
       *
       * @description You can call this operation to query only the information about Alibaba Cloud services that are most recently accessed by using a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessKeyLastUsedProductsResponse
       */
      Models::GetAccessKeyLastUsedProductsResponse getAccessKeyLastUsedProductsWithOptions(const Models::GetAccessKeyLastUsedProductsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the Alibaba Cloud services that are most recently accessed by using a specified AccessKey pair.
       *
       * @description You can call this operation to query only the information about Alibaba Cloud services that are most recently accessed by using a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedProductsRequest
       * @return GetAccessKeyLastUsedProductsResponse
       */
      Models::GetAccessKeyLastUsedProductsResponse getAccessKeyLastUsedProducts(const Models::GetAccessKeyLastUsedProductsRequest &request);

      /**
       * @summary Queries the information about the resources that are most recently accessed by using a specified AccessKey pair.
       *
       * @description You can call this operation to query only the information about resources that are most recently accessed by using a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessKeyLastUsedResourcesResponse
       */
      Models::GetAccessKeyLastUsedResourcesResponse getAccessKeyLastUsedResourcesWithOptions(const Models::GetAccessKeyLastUsedResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the resources that are most recently accessed by using a specified AccessKey pair.
       *
       * @description You can call this operation to query only the information about resources that are most recently accessed by using a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedResourcesRequest
       * @return GetAccessKeyLastUsedResourcesResponse
       */
      Models::GetAccessKeyLastUsedResourcesResponse getAccessKeyLastUsedResources(const Models::GetAccessKeyLastUsedResourcesRequest &request);

      /**
       * @summary 查询单个高级查询模板
       *
       * @param request GetAdvancedQueryTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAdvancedQueryTemplateResponse
       */
      Models::GetAdvancedQueryTemplateResponse getAdvancedQueryTemplateWithOptions(const Models::GetAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个高级查询模板
       *
       * @param request GetAdvancedQueryTemplateRequest
       * @return GetAdvancedQueryTemplateResponse
       */
      Models::GetAdvancedQueryTemplateResponse getAdvancedQueryTemplate(const Models::GetAdvancedQueryTemplateRequest &request);

      /**
       * @summary 查询事件选择器
       *
       * @param request GetDataEventSelectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataEventSelectorResponse
       */
      Models::GetDataEventSelectorResponse getDataEventSelectorWithOptions(const Models::GetDataEventSelectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询事件选择器
       *
       * @param request GetDataEventSelectorRequest
       * @return GetDataEventSelectorResponse
       */
      Models::GetDataEventSelectorResponse getDataEventSelector(const Models::GetDataEventSelectorRequest &request);

      /**
       * @summary Queries the details of a data backfill task.
       *
       * @description This topic provides an example on how to query the details of a data backfill task whose ID is `16602`. The return result shows that historical events for a trail named `trail-name` are delivered to Simple Log Service and the task is complete.
       *
       * @param request GetDeliveryHistoryJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeliveryHistoryJobResponse
       */
      Models::GetDeliveryHistoryJobResponse getDeliveryHistoryJobWithOptions(const Models::GetDeliveryHistoryJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a data backfill task.
       *
       * @description This topic provides an example on how to query the details of a data backfill task whose ID is `16602`. The return result shows that historical events for a trail named `trail-name` are delivered to Simple Log Service and the task is complete.
       *
       * @param request GetDeliveryHistoryJobRequest
       * @return GetDeliveryHistoryJobResponse
       */
      Models::GetDeliveryHistoryJobResponse getDeliveryHistoryJob(const Models::GetDeliveryHistoryJobRequest &request);

      /**
       * @summary Queries the region where global events are stored.
       *
       * @description By default, global events are stored in the Singapore region.
       * To obtain the permissions to call the API operation, you must submit a ticket.
       *
       * @param request GetGlobalEventsStorageRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGlobalEventsStorageRegionResponse
       */
      Models::GetGlobalEventsStorageRegionResponse getGlobalEventsStorageRegionWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the region where global events are stored.
       *
       * @description By default, global events are stored in the Singapore region.
       * To obtain the permissions to call the API operation, you must submit a ticket.
       *
       * @return GetGlobalEventsStorageRegionResponse
       */
      Models::GetGlobalEventsStorageRegionResponse getGlobalEventsStorageRegion();

      /**
       * @summary 操作审计成熟度查询接口
       *
       * @param request GetGovernanceMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGovernanceMetricsResponse
       */
      Models::GetGovernanceMetricsResponse getGovernanceMetricsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 操作审计成熟度查询接口
       *
       * @return GetGovernanceMetricsResponse
       */
      Models::GetGovernanceMetricsResponse getGovernanceMetrics();

      /**
       * @summary Queries the status of a trail.
       *
       * @description This topic describes how to query the status of a sample single-account trail named `trail-test`.
       *
       * @param request GetTrailStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrailStatusResponse
       */
      Models::GetTrailStatusResponse getTrailStatusWithOptions(const Models::GetTrailStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a trail.
       *
       * @description This topic describes how to query the status of a sample single-account trail named `trail-test`.
       *
       * @param request GetTrailStatusRequest
       * @return GetTrailStatusResponse
       */
      Models::GetTrailStatusResponse getTrailStatus(const Models::GetTrailStatusRequest &request);

      /**
       * @summary 批量查询事件选择器
       *
       * @param request ListDataEventSelectorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataEventSelectorsResponse
       */
      Models::ListDataEventSelectorsResponse listDataEventSelectorsWithOptions(const Models::ListDataEventSelectorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询事件选择器
       *
       * @param request ListDataEventSelectorsRequest
       * @return ListDataEventSelectorsResponse
       */
      Models::ListDataEventSelectorsResponse listDataEventSelectors(const Models::ListDataEventSelectorsRequest &request);

      /**
       * @summary 查询数据事件支持的服务与事件名称
       *
       * @param request ListDataEventServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataEventServicesResponse
       */
      Models::ListDataEventServicesResponse listDataEventServicesWithOptions(const Models::ListDataEventServicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据事件支持的服务与事件名称
       *
       * @param request ListDataEventServicesRequest
       * @return ListDataEventServicesResponse
       */
      Models::ListDataEventServicesResponse listDataEventServices(const Models::ListDataEventServicesRequest &request);

      /**
       * @summary Queries a list of data backfill tasks.
       *
       * @description This topic provides an example on how to query a list of data backfill tasks. The returned result shows that a data backfill task with the ID `16602` is used to deliver historical events for a trail named `trail-name` to Simple Log Service.
       *
       * @param request ListDeliveryHistoryJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeliveryHistoryJobsResponse
       */
      Models::ListDeliveryHistoryJobsResponse listDeliveryHistoryJobsWithOptions(const Models::ListDeliveryHistoryJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data backfill tasks.
       *
       * @description This topic provides an example on how to query a list of data backfill tasks. The returned result shows that a data backfill task with the ID `16602` is used to deliver historical events for a trail named `trail-name` to Simple Log Service.
       *
       * @param request ListDeliveryHistoryJobsRequest
       * @return ListDeliveryHistoryJobsResponse
       */
      Models::ListDeliveryHistoryJobsResponse listDeliveryHistoryJobs(const Models::ListDeliveryHistoryJobsRequest &request);

      /**
       * @summary Queries event details.
       *
       * @description When you call this operation to query event details, you can query the event details at most twice per second.
       * > Do not frequently call this operation. You can create a trail to deliver events to Log Service. Then, you can query event details in near real time by using the real-time log consumption feature of Log Service. For more information, see [Create a single-account trail](https://help.aliyun.com/document_detail/28810.html), [Create a multi-account trail](https://help.aliyun.com/document_detail/160661.html), and [Overview](https://help.aliyun.com/document_detail/28997.html).
       *
       * @param request LookupEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LookupEventsResponse
       */
      Models::LookupEventsResponse lookupEventsWithOptions(const Models::LookupEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries event details.
       *
       * @description When you call this operation to query event details, you can query the event details at most twice per second.
       * > Do not frequently call this operation. You can create a trail to deliver events to Log Service. Then, you can query event details in near real time by using the real-time log consumption feature of Log Service. For more information, see [Create a single-account trail](https://help.aliyun.com/document_detail/28810.html), [Create a multi-account trail](https://help.aliyun.com/document_detail/160661.html), and [Overview](https://help.aliyun.com/document_detail/28997.html).
       *
       * @param request LookupEventsRequest
       * @return LookupEventsResponse
       */
      Models::LookupEventsResponse lookupEvents(const Models::LookupEventsRequest &request);

      /**
       * @summary 创建事件选择器
       *
       * @param request PutDataEventSelectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutDataEventSelectorResponse
       */
      Models::PutDataEventSelectorResponse putDataEventSelectorWithOptions(const Models::PutDataEventSelectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建事件选择器
       *
       * @param request PutDataEventSelectorRequest
       * @return PutDataEventSelectorResponse
       */
      Models::PutDataEventSelectorResponse putDataEventSelector(const Models::PutDataEventSelectorRequest &request);

      /**
       * @summary Enables a trail to deliver events to an Object Storage Service (OSS) bucket or a Simple Log Service Logstore.
       *
       * @description This topic describes how to enable logging for a sample trail named `trail-test`.
       *
       * @param request StartLoggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartLoggingResponse
       */
      Models::StartLoggingResponse startLoggingWithOptions(const Models::StartLoggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a trail to deliver events to an Object Storage Service (OSS) bucket or a Simple Log Service Logstore.
       *
       * @description This topic describes how to enable logging for a sample trail named `trail-test`.
       *
       * @param request StartLoggingRequest
       * @return StartLoggingResponse
       */
      Models::StartLoggingResponse startLogging(const Models::StartLoggingRequest &request);

      /**
       * @summary Disables a trail to stop the delivery of events to an Object Storage Service (OSS) bucket or a  Simple Log Service Logstore.
       *
       * @description This topic describes how to disable logging for a sample trail named `trail-test`.
       *
       * @param request StopLoggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLoggingResponse
       */
      Models::StopLoggingResponse stopLoggingWithOptions(const Models::StopLoggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a trail to stop the delivery of events to an Object Storage Service (OSS) bucket or a  Simple Log Service Logstore.
       *
       * @description This topic describes how to disable logging for a sample trail named `trail-test`.
       *
       * @param request StopLoggingRequest
       * @return StopLoggingResponse
       */
      Models::StopLoggingResponse stopLogging(const Models::StopLoggingRequest &request);

      /**
       * @summary 更新高级查询模板
       *
       * @param request UpdateAdvancedQueryTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAdvancedQueryTemplateResponse
       */
      Models::UpdateAdvancedQueryTemplateResponse updateAdvancedQueryTemplateWithOptions(const Models::UpdateAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新高级查询模板
       *
       * @param request UpdateAdvancedQueryTemplateRequest
       * @return UpdateAdvancedQueryTemplateResponse
       */
      Models::UpdateAdvancedQueryTemplateResponse updateAdvancedQueryTemplate(const Models::UpdateAdvancedQueryTemplateRequest &request);

      /**
       * @summary Specifies the region where you want to store global events.
       *
       * @description By default, global events are stored in the Singapore region.
       * *   To obtain the permissions to call the API operation, you must submit a ticket.
       * *   Only the China (Hangzhou) region (cn-hangzhou) and the Singapore region (ap-southeast-1) are supported.
       *
       * @param request UpdateGlobalEventsStorageRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGlobalEventsStorageRegionResponse
       */
      Models::UpdateGlobalEventsStorageRegionResponse updateGlobalEventsStorageRegionWithOptions(const Models::UpdateGlobalEventsStorageRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies the region where you want to store global events.
       *
       * @description By default, global events are stored in the Singapore region.
       * *   To obtain the permissions to call the API operation, you must submit a ticket.
       * *   Only the China (Hangzhou) region (cn-hangzhou) and the Singapore region (ap-southeast-1) are supported.
       *
       * @param request UpdateGlobalEventsStorageRegionRequest
       * @return UpdateGlobalEventsStorageRegionResponse
       */
      Models::UpdateGlobalEventsStorageRegionResponse updateGlobalEventsStorageRegion(const Models::UpdateGlobalEventsStorageRegionRequest &request);

      /**
       * @summary Updates the configurations of a trail.
       *
       * @description This topic shows you how to change the destination Object Storage Service (OSS) bucket of a sample trail named `trail-test` to `audit-log`.
       *
       * @param request UpdateTrailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrailResponse
       */
      Models::UpdateTrailResponse updateTrailWithOptions(const Models::UpdateTrailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of a trail.
       *
       * @description This topic shows you how to change the destination Object Storage Service (OSS) bucket of a sample trail named `trail-test` to `audit-log`.
       *
       * @param request UpdateTrailRequest
       * @return UpdateTrailResponse
       */
      Models::UpdateTrailResponse updateTrail(const Models::UpdateTrailRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
