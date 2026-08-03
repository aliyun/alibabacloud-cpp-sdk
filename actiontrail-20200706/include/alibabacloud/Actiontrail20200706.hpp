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
       * @summary Creates an advanced event query history record that saves a custom query conditional statement for reuse and management.
       *
       * @description This topic provides a demo of how to save a conditional statement as an advanced event query history record. The conditional statement is used to query all `AccessKey` access management events in logs.
       *
       * @param request CreateAdvancedQueryHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAdvancedQueryHistoryResponse
       */
      Models::CreateAdvancedQueryHistoryResponse createAdvancedQueryHistoryWithOptions(const Models::CreateAdvancedQueryHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an advanced event query history record that saves a custom query conditional statement for reuse and management.
       *
       * @description This topic provides a demo of how to save a conditional statement as an advanced event query history record. The conditional statement is used to query all `AccessKey` access management events in logs.
       *
       * @param request CreateAdvancedQueryHistoryRequest
       * @return CreateAdvancedQueryHistoryResponse
       */
      Models::CreateAdvancedQueryHistoryResponse createAdvancedQueryHistory(const Models::CreateAdvancedQueryHistoryRequest &request);

      /**
       * @summary Creates an advanced query template.
       *
       * @param request CreateAdvancedQueryTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAdvancedQueryTemplateResponse
       */
      Models::CreateAdvancedQueryTemplateResponse createAdvancedQueryTemplateWithOptions(const Models::CreateAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an advanced query template.
       *
       * @param request CreateAdvancedQueryTemplateRequest
       * @return CreateAdvancedQueryTemplateResponse
       */
      Models::CreateAdvancedQueryTemplateResponse createAdvancedQueryTemplate(const Models::CreateAdvancedQueryTemplateRequest &request);

      /**
       * @summary Creates a data backfill task.
       *
       * @description Limitations
       * - You must first call the [CreateTrail](https://help.aliyun.com/document_detail/212313.html) operation to create a single-account trail that delivers events to Simple Log Service (SLS).
       * - An Alibaba Cloud account can have only one data backfill task running at a time.
       * This topic provides an example of how to create data backfill task for the trail `trail-name`.
       *
       * @param request CreateDeliveryHistoryJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeliveryHistoryJobResponse
       */
      Models::CreateDeliveryHistoryJobResponse createDeliveryHistoryJobWithOptions(const Models::CreateDeliveryHistoryJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data backfill task.
       *
       * @description Limitations
       * - You must first call the [CreateTrail](https://help.aliyun.com/document_detail/212313.html) operation to create a single-account trail that delivers events to Simple Log Service (SLS).
       * - An Alibaba Cloud account can have only one data backfill task running at a time.
       * This topic provides an example of how to create data backfill task for the trail `trail-name`.
       *
       * @param request CreateDeliveryHistoryJobRequest
       * @return CreateDeliveryHistoryJobResponse
       */
      Models::CreateDeliveryHistoryJobResponse createDeliveryHistoryJob(const Models::CreateDeliveryHistoryJobRequest &request);

      /**
       * @summary Creates a trail to deliver events to a destination for long-term storage and analysis, such as an Object Storage Service (OSS) bucket, a Simple Log Service (SLS) Logstore, or a MaxCompute project.
       *
       * @description > By default, a trail that you create by using this API is in a **disabled** state. You must call the [StartLogging](https://help.aliyun.com/document_detail/432246.html) operation operation to enable the trail. After a trail is enabled, ActionTrail begins delivering events to your specified destination.
       * ### Prerequisites
       * Before you create a trail, you must have at least one of the following resources configured as a destination:
       * - OSS
       *   You must activate OSS and create a bucket.
       * - SLS
       *   You must activate SLS and create a Logstore.
       *   > When you create a trail with an SLS destination, ActionTrail automatically creates a Logstore named `actiontrail_<trail_name>` in your specified project. To ensure the integrity of your audit data, this Logstore only accepts events delivered by ActionTrail.
       * - MaxCompute
       *   You must activate MaxCompute.
       *   > When you create a trail with a MaxCompute destination, ActionTrail automatically creates a project named `actiontrail_<account_ID>`. To ensure the integrity of your audit data, this project only accepts events delivered by ActionTrail.
       * ### Usage notes
       * This example shows how to create a single-account trail named `trail-test` that delivers events to an OSS bucket named `audit-log`.
       *
       * @param request CreateTrailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrailResponse
       */
      Models::CreateTrailResponse createTrailWithOptions(const Models::CreateTrailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a trail to deliver events to a destination for long-term storage and analysis, such as an Object Storage Service (OSS) bucket, a Simple Log Service (SLS) Logstore, or a MaxCompute project.
       *
       * @description > By default, a trail that you create by using this API is in a **disabled** state. You must call the [StartLogging](https://help.aliyun.com/document_detail/432246.html) operation operation to enable the trail. After a trail is enabled, ActionTrail begins delivering events to your specified destination.
       * ### Prerequisites
       * Before you create a trail, you must have at least one of the following resources configured as a destination:
       * - OSS
       *   You must activate OSS and create a bucket.
       * - SLS
       *   You must activate SLS and create a Logstore.
       *   > When you create a trail with an SLS destination, ActionTrail automatically creates a Logstore named `actiontrail_<trail_name>` in your specified project. To ensure the integrity of your audit data, this Logstore only accepts events delivered by ActionTrail.
       * - MaxCompute
       *   You must activate MaxCompute.
       *   > When you create a trail with a MaxCompute destination, ActionTrail automatically creates a project named `actiontrail_<account_ID>`. To ensure the integrity of your audit data, this project only accepts events delivered by ActionTrail.
       * ### Usage notes
       * This example shows how to create a single-account trail named `trail-test` that delivers events to an OSS bucket named `audit-log`.
       *
       * @param request CreateTrailRequest
       * @return CreateTrailResponse
       */
      Models::CreateTrailResponse createTrail(const Models::CreateTrailRequest &request);

      /**
       * @summary Deletes an advanced query record.
       *
       * @param request DeleteAdvancedQueryHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAdvancedQueryHistoryResponse
       */
      Models::DeleteAdvancedQueryHistoryResponse deleteAdvancedQueryHistoryWithOptions(const Models::DeleteAdvancedQueryHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an advanced query record.
       *
       * @param request DeleteAdvancedQueryHistoryRequest
       * @return DeleteAdvancedQueryHistoryResponse
       */
      Models::DeleteAdvancedQueryHistoryResponse deleteAdvancedQueryHistory(const Models::DeleteAdvancedQueryHistoryRequest &request);

      /**
       * @summary Deletes an advanced query template.
       *
       * @param request DeleteAdvancedQueryTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAdvancedQueryTemplateResponse
       */
      Models::DeleteAdvancedQueryTemplateResponse deleteAdvancedQueryTemplateWithOptions(const Models::DeleteAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an advanced query template.
       *
       * @param request DeleteAdvancedQueryTemplateRequest
       * @return DeleteAdvancedQueryTemplateResponse
       */
      Models::DeleteAdvancedQueryTemplateResponse deleteAdvancedQueryTemplate(const Models::DeleteAdvancedQueryTemplateRequest &request);

      /**
       * @summary Deletes the data event selector for a specified trail.
       *
       * @param request DeleteDataEventSelectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataEventSelectorResponse
       */
      Models::DeleteDataEventSelectorResponse deleteDataEventSelectorWithOptions(const Models::DeleteDataEventSelectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the data event selector for a specified trail.
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
       * @summary Queries all advanced query records.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdvancedQueryHistoryResponse
       */
      Models::DescribeAdvancedQueryHistoryResponse describeAdvancedQueryHistoryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all advanced query records.
       *
       * @return DescribeAdvancedQueryHistoryResponse
       */
      Models::DescribeAdvancedQueryHistoryResponse describeAdvancedQueryHistory();

      /**
       * @summary Queries advanced query templates.
       *
       * @param request DescribeAdvancedQueryTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdvancedQueryTemplateResponse
       */
      Models::DescribeAdvancedQueryTemplateResponse describeAdvancedQueryTemplateWithOptions(const Models::DescribeAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries advanced query templates.
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
       * @summary Queries the lifecycle events of a specified resource.
       *
       * @param request DescribeResourceLifeCycleEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceLifeCycleEventsResponse
       */
      Models::DescribeResourceLifeCycleEventsResponse describeResourceLifeCycleEventsWithOptions(const Models::DescribeResourceLifeCycleEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the lifecycle events of a specified resource.
       *
       * @param request DescribeResourceLifeCycleEventsRequest
       * @return DescribeResourceLifeCycleEventsResponse
       */
      Models::DescribeResourceLifeCycleEventsResponse describeResourceLifeCycleEvents(const Models::DescribeResourceLifeCycleEventsRequest &request);

      /**
       * @summary Queries all advanced query scenarios.
       *
       * @param request DescribeScenesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScenesResponse
       */
      Models::DescribeScenesResponse describeScenesWithOptions(const Models::DescribeScenesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all advanced query scenarios.
       *
       * @param request DescribeScenesRequest
       * @return DescribeScenesResponse
       */
      Models::DescribeScenesResponse describeScenes(const Models::DescribeScenesRequest &request);

      /**
       * @summary Queries advanced query templates for a specified scenario.
       *
       * @param request DescribeSearchTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSearchTemplatesResponse
       */
      Models::DescribeSearchTemplatesResponse describeSearchTemplatesWithOptions(const Models::DescribeSearchTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries advanced query templates for a specified scenario.
       *
       * @param request DescribeSearchTemplatesRequest
       * @return DescribeSearchTemplatesResponse
       */
      Models::DescribeSearchTemplatesResponse describeSearchTemplates(const Models::DescribeSearchTemplatesRequest &request);

      /**
       * @summary Retrieves data for delivery monitoring metrics.
       *
       * @param request DescribeTrailDeliveryMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrailDeliveryMetricDataResponse
       */
      Models::DescribeTrailDeliveryMetricDataResponse describeTrailDeliveryMetricDataWithOptions(const Models::DescribeTrailDeliveryMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves data for delivery monitoring metrics.
       *
       * @param request DescribeTrailDeliveryMetricDataRequest
       * @return DescribeTrailDeliveryMetricDataResponse
       */
      Models::DescribeTrailDeliveryMetricDataResponse describeTrailDeliveryMetricData(const Models::DescribeTrailDeliveryMetricDataRequest &request);

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
       * @summary Queries the number of daily alerts within a specific time range.
       *
       * @param request DescribeUserAlertCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserAlertCountResponse
       */
      Models::DescribeUserAlertCountResponse describeUserAlertCountWithOptions(const Models::DescribeUserAlertCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of daily alerts within a specific time range.
       *
       * @param request DescribeUserAlertCountRequest
       * @return DescribeUserAlertCountResponse
       */
      Models::DescribeUserAlertCountResponse describeUserAlertCount(const Models::DescribeUserAlertCountRequest &request);

      /**
       * @summary Queries the number of daily logs within a specific time range.
       *
       * @param request DescribeUserLogCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserLogCountResponse
       */
      Models::DescribeUserLogCountResponse describeUserLogCountWithOptions(const Models::DescribeUserLogCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of daily logs within a specific time range.
       *
       * @param request DescribeUserLogCountRequest
       * @return DescribeUserLogCountResponse
       */
      Models::DescribeUserLogCountResponse describeUserLogCount(const Models::DescribeUserLogCountRequest &request);

      /**
       * @summary Queries the number of enabled trails, including organization trails.
       *
       * @param request DescribeUserTrailCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserTrailCountResponse
       */
      Models::DescribeUserTrailCountResponse describeUserTrailCountWithOptions(const Models::DescribeUserTrailCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of enabled trails, including organization trails.
       *
       * @param request DescribeUserTrailCountRequest
       * @return DescribeUserTrailCountResponse
       */
      Models::DescribeUserTrailCountResponse describeUserTrailCount(const Models::DescribeUserTrailCountRequest &request);

      /**
       * @summary Disables a specific type of Insights event.
       *
       * @param request DisableInsightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableInsightResponse
       */
      Models::DisableInsightResponse disableInsightWithOptions(const Models::DisableInsightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a specific type of Insights event.
       *
       * @param request DisableInsightRequest
       * @return DisableInsightResponse
       */
      Models::DisableInsightResponse disableInsight(const Models::DisableInsightRequest &request);

      /**
       * @summary Enables the Insights feature.
       *
       * @param request EnableInsightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableInsightResponse
       */
      Models::EnableInsightResponse enableInsightWithOptions(const Models::EnableInsightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Insights feature.
       *
       * @param request EnableInsightRequest
       * @return EnableInsightResponse
       */
      Models::EnableInsightResponse enableInsight(const Models::EnableInsightRequest &request);

      /**
       * @summary Queries the most recent events associated with a specified AccessKey pair, including the event name, source, timestamp, and details.
       *
       * @description You can call this operation to query only the information about the most recent events that are generated within 400 days after February 1, 2022 when a specified AccessKey pair is called to access Alibaba Cloud services. For more information about supported events, see [Alibaba Cloud services and events that are supported by the AccessKey pair audit feature](https://help.aliyun.com/document_detail/419214.html). Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessKeyLastUsedEventsResponse
       */
      Models::GetAccessKeyLastUsedEventsResponse getAccessKeyLastUsedEventsWithOptions(const Models::GetAccessKeyLastUsedEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the most recent events associated with a specified AccessKey pair, including the event name, source, timestamp, and details.
       *
       * @description You can call this operation to query only the information about the most recent events that are generated within 400 days after February 1, 2022 when a specified AccessKey pair is called to access Alibaba Cloud services. For more information about supported events, see [Alibaba Cloud services and events that are supported by the AccessKey pair audit feature](https://help.aliyun.com/document_detail/419214.html). Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedEventsRequest
       * @return GetAccessKeyLastUsedEventsResponse
       */
      Models::GetAccessKeyLastUsedEventsResponse getAccessKeyLastUsedEvents(const Models::GetAccessKeyLastUsedEventsRequest &request);

      /**
       * @summary Queries the most recent usage record of a specified AccessKey pair.
       *
       * @description You can call this operation to query only the information about the most recent call of a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessKeyLastUsedInfoResponse
       */
      Models::GetAccessKeyLastUsedInfoResponse getAccessKeyLastUsedInfoWithOptions(const Models::GetAccessKeyLastUsedInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the most recent usage record of a specified AccessKey pair.
       *
       * @description You can call this operation to query only the information about the most recent call of a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedInfoRequest
       * @return GetAccessKeyLastUsedInfoResponse
       */
      Models::GetAccessKeyLastUsedInfoResponse getAccessKeyLastUsedInfo(const Models::GetAccessKeyLastUsedInfoRequest &request);

      /**
       * @summary Queries the IP addresses most recently used by a specified AccessKey pair.
       *
       * @description You can call this operation to query only the information about the IP addresses that are most recently used within 400 days after February 1, 2022 when a specified AccessKey pair is called to access Alibaba Cloud services. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessKeyLastUsedIpsResponse
       */
      Models::GetAccessKeyLastUsedIpsResponse getAccessKeyLastUsedIpsWithOptions(const Models::GetAccessKeyLastUsedIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP addresses most recently used by a specified AccessKey pair.
       *
       * @description You can call this operation to query only the information about the IP addresses that are most recently used within 400 days after February 1, 2022 when a specified AccessKey pair is called to access Alibaba Cloud services. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedIpsRequest
       * @return GetAccessKeyLastUsedIpsResponse
       */
      Models::GetAccessKeyLastUsedIpsResponse getAccessKeyLastUsedIps(const Models::GetAccessKeyLastUsedIpsRequest &request);

      /**
       * @summary Queries the Alibaba Cloud services most recently accessed by a specified AccessKey pair.
       *
       * @description You can call this operation to query only the information about Alibaba Cloud services that are most recently accessed by using a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessKeyLastUsedProductsResponse
       */
      Models::GetAccessKeyLastUsedProductsResponse getAccessKeyLastUsedProductsWithOptions(const Models::GetAccessKeyLastUsedProductsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Alibaba Cloud services most recently accessed by a specified AccessKey pair.
       *
       * @description You can call this operation to query only the information about Alibaba Cloud services that are most recently accessed by using a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedProductsRequest
       * @return GetAccessKeyLastUsedProductsResponse
       */
      Models::GetAccessKeyLastUsedProductsResponse getAccessKeyLastUsedProducts(const Models::GetAccessKeyLastUsedProductsRequest &request);

      /**
       * @summary Queries the resources most recently used by a specified AccessKey pair.
       *
       * @description You can call this operation to query only the information about resources that are most recently accessed by using a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessKeyLastUsedResourcesResponse
       */
      Models::GetAccessKeyLastUsedResourcesResponse getAccessKeyLastUsedResourcesWithOptions(const Models::GetAccessKeyLastUsedResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources most recently used by a specified AccessKey pair.
       *
       * @description You can call this operation to query only the information about resources that are most recently accessed by using a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
       *
       * @param request GetAccessKeyLastUsedResourcesRequest
       * @return GetAccessKeyLastUsedResourcesResponse
       */
      Models::GetAccessKeyLastUsedResourcesResponse getAccessKeyLastUsedResources(const Models::GetAccessKeyLastUsedResourcesRequest &request);

      /**
       * @summary Retrieves information about a single advanced template.
       *
       * @param request GetAdvancedQueryTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAdvancedQueryTemplateResponse
       */
      Models::GetAdvancedQueryTemplateResponse getAdvancedQueryTemplateWithOptions(const Models::GetAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a single advanced template.
       *
       * @param request GetAdvancedQueryTemplateRequest
       * @return GetAdvancedQueryTemplateResponse
       */
      Models::GetAdvancedQueryTemplateResponse getAdvancedQueryTemplate(const Models::GetAdvancedQueryTemplateRequest &request);

      /**
       * @summary Queries the details about the data event selector for a specified trail.
       *
       * @param request GetDataEventSelectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataEventSelectorResponse
       */
      Models::GetDataEventSelectorResponse getDataEventSelectorWithOptions(const Models::GetDataEventSelectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about the data event selector for a specified trail.
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
       * @summary Queries the governance metrics of ActionTrail.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGovernanceMetricsResponse
       */
      Models::GetGovernanceMetricsResponse getGovernanceMetricsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the governance metrics of ActionTrail.
       *
       * @return GetGovernanceMetricsResponse
       */
      Models::GetGovernanceMetricsResponse getGovernanceMetrics();

      /**
       * @summary Queries the Insights event types to deliver for a trail.
       *
       * @param request GetInsightSelectorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInsightSelectorsResponse
       */
      Models::GetInsightSelectorsResponse getInsightSelectorsWithOptions(const Models::GetInsightSelectorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Insights event types to deliver for a trail.
       *
       * @param request GetInsightSelectorsRequest
       * @return GetInsightSelectorsResponse
       */
      Models::GetInsightSelectorsResponse getInsightSelectors(const Models::GetInsightSelectorsRequest &request);

      /**
       * @summary Queries all enabled types of Insights events.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInsightTypesResponse
       */
      Models::GetInsightTypesResponse getInsightTypesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all enabled types of Insights events.
       *
       * @return GetInsightTypesResponse
       */
      Models::GetInsightTypesResponse getInsightTypes();

      /**
       * @summary Queries the number of Insights events for the current account.
       *
       * @param request GetInsightsEventsCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInsightsEventsCountResponse
       */
      Models::GetInsightsEventsCountResponse getInsightsEventsCountWithOptions(const Models::GetInsightsEventsCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of Insights events for the current account.
       *
       * @param request GetInsightsEventsCountRequest
       * @return GetInsightsEventsCountResponse
       */
      Models::GetInsightsEventsCountResponse getInsightsEventsCount(const Models::GetInsightsEventsCountRequest &request);

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
       * @summary Queries all data event selectors.
       *
       * @param request ListDataEventSelectorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataEventSelectorsResponse
       */
      Models::ListDataEventSelectorsResponse listDataEventSelectorsWithOptions(const Models::ListDataEventSelectorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all data event selectors.
       *
       * @param request ListDataEventSelectorsRequest
       * @return ListDataEventSelectorsResponse
       */
      Models::ListDataEventSelectorsResponse listDataEventSelectors(const Models::ListDataEventSelectorsRequest &request);

      /**
       * @summary Queries the services that support data events and the names of these events.
       *
       * @param request ListDataEventServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataEventServicesResponse
       */
      Models::ListDataEventServicesResponse listDataEventServicesWithOptions(const Models::ListDataEventServicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the services that support data events and the names of these events.
       *
       * @param request ListDataEventServicesRequest
       * @return ListDataEventServicesResponse
       */
      Models::ListDataEventServicesResponse listDataEventServices(const Models::ListDataEventServicesRequest &request);

      /**
       * @summary Queries a list of data backfill tasks.
       *
       * @description This topic provides an example of how to query a list of data backfill tasks. The response shows a task with the ID `16602` that delivers historical events from the trail `trail-name` to Simple Log Service (SLS).
       *
       * @param request ListDeliveryHistoryJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeliveryHistoryJobsResponse
       */
      Models::ListDeliveryHistoryJobsResponse listDeliveryHistoryJobsWithOptions(const Models::ListDeliveryHistoryJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data backfill tasks.
       *
       * @description This topic provides an example of how to query a list of data backfill tasks. The response shows a task with the ID `16602` that delivers historical events from the trail `trail-name` to Simple Log Service (SLS).
       *
       * @param request ListDeliveryHistoryJobsRequest
       * @return ListDeliveryHistoryJobsResponse
       */
      Models::ListDeliveryHistoryJobsResponse listDeliveryHistoryJobs(const Models::ListDeliveryHistoryJobsRequest &request);

      /**
       * @summary Queries detailed historical events.
       *
       * @description > Do not call this operation frequently. To query events in near-real time, you can create a trail to deliver events to Simple Log Service (SLS) and use its real-time consumption feature. For more information, see [Create a single-account trail](https://help.aliyun.com/document_detail/28810.html), [Create a multi-account trail](https://help.aliyun.com/document_detail/160661.html), and [Real-time consumption](https://help.aliyun.com/document_detail/28997.html).
       *
       * @param request LookupEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LookupEventsResponse
       */
      Models::LookupEventsResponse lookupEventsWithOptions(const Models::LookupEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries detailed historical events.
       *
       * @description > Do not call this operation frequently. To query events in near-real time, you can create a trail to deliver events to Simple Log Service (SLS) and use its real-time consumption feature. For more information, see [Create a single-account trail](https://help.aliyun.com/document_detail/28810.html), [Create a multi-account trail](https://help.aliyun.com/document_detail/160661.html), and [Real-time consumption](https://help.aliyun.com/document_detail/28997.html).
       *
       * @param request LookupEventsRequest
       * @return LookupEventsResponse
       */
      Models::LookupEventsResponse lookupEvents(const Models::LookupEventsRequest &request);

      /**
       * @summary Queries Insights events.
       *
       * @param request LookupInsightEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LookupInsightEventsResponse
       */
      Models::LookupInsightEventsResponse lookupInsightEventsWithOptions(const Models::LookupInsightEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Insights events.
       *
       * @param request LookupInsightEventsRequest
       * @return LookupInsightEventsResponse
       */
      Models::LookupInsightEventsResponse lookupInsightEvents(const Models::LookupInsightEventsRequest &request);

      /**
       * @summary Creates or configures a data event selector. A trail must exist before you create a data event selector. If a trail does not exist, you can call the CreateTrail operation to create one.
       *
       * @param request PutDataEventSelectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutDataEventSelectorResponse
       */
      Models::PutDataEventSelectorResponse putDataEventSelectorWithOptions(const Models::PutDataEventSelectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or configures a data event selector. A trail must exist before you create a data event selector. If a trail does not exist, you can call the CreateTrail operation to create one.
       *
       * @param request PutDataEventSelectorRequest
       * @return PutDataEventSelectorResponse
       */
      Models::PutDataEventSelectorResponse putDataEventSelector(const Models::PutDataEventSelectorRequest &request);

      /**
       * @summary Specifies the types of Insights events to deliver for a trail.
       *
       * @param request PutInsightSelectorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutInsightSelectorsResponse
       */
      Models::PutInsightSelectorsResponse putInsightSelectorsWithOptions(const Models::PutInsightSelectorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies the types of Insights events to deliver for a trail.
       *
       * @param request PutInsightSelectorsRequest
       * @return PutInsightSelectorsResponse
       */
      Models::PutInsightSelectorsResponse putInsightSelectors(const Models::PutInsightSelectorsRequest &request);

      /**
       * @summary Enables a trail to start delivering ActionTrail events to Object Storage Service (OSS), Simple Log Service (SLS), or MaxCompute.
       *
       * @description This topic provides an example on how to enable a trail named `trail-test`.
       *
       * @param request StartLoggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartLoggingResponse
       */
      Models::StartLoggingResponse startLoggingWithOptions(const Models::StartLoggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a trail to start delivering ActionTrail events to Object Storage Service (OSS), Simple Log Service (SLS), or MaxCompute.
       *
       * @description This topic provides an example on how to enable a trail named `trail-test`.
       *
       * @param request StartLoggingRequest
       * @return StartLoggingResponse
       */
      Models::StartLoggingResponse startLogging(const Models::StartLoggingRequest &request);

      /**
       * @summary Disables a trail to stop delivering ActionTrail events to Object Storage Service (OSS), Simple Log Service (SLS), or MaxCompute.
       *
       * @description This topic provides an example on how to disable a trail named `trail-test`.
       *
       * @param request StopLoggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLoggingResponse
       */
      Models::StopLoggingResponse stopLoggingWithOptions(const Models::StopLoggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a trail to stop delivering ActionTrail events to Object Storage Service (OSS), Simple Log Service (SLS), or MaxCompute.
       *
       * @description This topic provides an example on how to disable a trail named `trail-test`.
       *
       * @param request StopLoggingRequest
       * @return StopLoggingResponse
       */
      Models::StopLoggingResponse stopLogging(const Models::StopLoggingRequest &request);

      /**
       * @summary Updates an advanced query template.
       *
       * @param request UpdateAdvancedQueryTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAdvancedQueryTemplateResponse
       */
      Models::UpdateAdvancedQueryTemplateResponse updateAdvancedQueryTemplateWithOptions(const Models::UpdateAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an advanced query template.
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
