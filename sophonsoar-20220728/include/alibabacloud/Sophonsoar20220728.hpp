// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SOPHONSOAR20220728_HPP_
#define ALIBABACLOUD_SOPHONSOAR20220728_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Sophonsoar20220728Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Sophonsoar20220728.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Compares configurations between two versions of a published playbook.
       *
       * @param request ComparePlaybooksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ComparePlaybooksResponse
       */
      Models::ComparePlaybooksResponse comparePlaybooksWithOptions(const Models::ComparePlaybooksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Compares configurations between two versions of a published playbook.
       *
       * @param request ComparePlaybooksRequest
       * @return ComparePlaybooksResponse
       */
      Models::ComparePlaybooksResponse comparePlaybooks(const Models::ComparePlaybooksRequest &request);

      /**
       * @summary Convert XML configuration.
       *
       * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the orchestration product before using this interface.
       *
       * @param request ConvertPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertPlaybookResponse
       */
      Models::ConvertPlaybookResponse convertPlaybookWithOptions(const Models::ConvertPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Convert XML configuration.
       *
       * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the orchestration product before using this interface.
       *
       * @param request ConvertPlaybookRequest
       * @return ConvertPlaybookResponse
       */
      Models::ConvertPlaybookResponse convertPlaybook(const Models::ConvertPlaybookRequest &request);

      /**
       * @summary Copies a playbook.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request CopyPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyPlaybookResponse
       */
      Models::CopyPlaybookResponse copyPlaybookWithOptions(const Models::CopyPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies a playbook.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request CopyPlaybookRequest
       * @return CopyPlaybookResponse
       */
      Models::CopyPlaybookResponse copyPlaybook(const Models::CopyPlaybookRequest &request);

      /**
       * @summary New Playbook.
       *
       * @description Create Playbook.
       *
       * @param request CreatePlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePlaybookResponse
       */
      Models::CreatePlaybookResponse createPlaybookWithOptions(const Models::CreatePlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary New Playbook.
       *
       * @description Create Playbook.
       *
       * @param request CreatePlaybookRequest
       * @return CreatePlaybookResponse
       */
      Models::CreatePlaybookResponse createPlaybook(const Models::CreatePlaybookRequest &request);

      /**
       * @summary Debugs a playbook.
       *
       * @param request DebugPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DebugPlaybookResponse
       */
      Models::DebugPlaybookResponse debugPlaybookWithOptions(const Models::DebugPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Debugs a playbook.
       *
       * @param request DebugPlaybookRequest
       * @return DebugPlaybookResponse
       */
      Models::DebugPlaybookResponse debugPlaybook(const Models::DebugPlaybookRequest &request);

      /**
       * @summary Deletes the assets in a component.
       *
       * @param request DeleteComponentAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComponentAssetResponse
       */
      Models::DeleteComponentAssetResponse deleteComponentAssetWithOptions(const Models::DeleteComponentAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the assets in a component.
       *
       * @param request DeleteComponentAssetRequest
       * @return DeleteComponentAssetResponse
       */
      Models::DeleteComponentAssetResponse deleteComponentAsset(const Models::DeleteComponentAssetRequest &request);

      /**
       * @summary Deletes a custom playbook.
       *
       * @param request DeletePlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePlaybookResponse
       */
      Models::DeletePlaybookResponse deletePlaybookWithOptions(const Models::DeletePlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom playbook.
       *
       * @param request DeletePlaybookRequest
       * @return DeletePlaybookResponse
       */
      Models::DeletePlaybookResponse deletePlaybook(const Models::DeletePlaybookRequest &request);

      /**
       * @summary Queries the metadata of assets in a component. The metadata of an asset refers to the fields that describe the asset.
       *
       * @param request DescribeComponentAssetFormRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentAssetFormResponse
       */
      Models::DescribeComponentAssetFormResponse describeComponentAssetFormWithOptions(const Models::DescribeComponentAssetFormRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metadata of assets in a component. The metadata of an asset refers to the fields that describe the asset.
       *
       * @param request DescribeComponentAssetFormRequest
       * @return DescribeComponentAssetFormResponse
       */
      Models::DescribeComponentAssetFormResponse describeComponentAssetForm(const Models::DescribeComponentAssetFormRequest &request);

      /**
       * @summary Queries a list of assets in a component.
       *
       * @param request DescribeComponentAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentAssetsResponse
       */
      Models::DescribeComponentAssetsResponse describeComponentAssetsWithOptions(const Models::DescribeComponentAssetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of assets in a component.
       *
       * @param request DescribeComponentAssetsRequest
       * @return DescribeComponentAssetsResponse
       */
      Models::DescribeComponentAssetsResponse describeComponentAssets(const Models::DescribeComponentAssetsRequest &request);

      /**
       * @summary Queries a list of common components that are available.
       *
       * @param request DescribeComponentListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentListResponse
       */
      Models::DescribeComponentListResponse describeComponentListWithOptions(const Models::DescribeComponentListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of common components that are available.
       *
       * @param request DescribeComponentListRequest
       * @return DescribeComponentListResponse
       */
      Models::DescribeComponentListResponse describeComponentList(const Models::DescribeComponentListRequest &request);

      /**
       * @summary Queries a list of predefined components that are available.
       *
       * @param request DescribeComponentPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentPlaybookResponse
       */
      Models::DescribeComponentPlaybookResponse describeComponentPlaybookWithOptions(const Models::DescribeComponentPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of predefined components that are available.
       *
       * @param request DescribeComponentPlaybookRequest
       * @return DescribeComponentPlaybookResponse
       */
      Models::DescribeComponentPlaybookResponse describeComponentPlaybook(const Models::DescribeComponentPlaybookRequest &request);

      /**
       * @summary Queries the JavaScript file of a component. The component uses the returned JavaScript file for page rendering.
       *
       * @param request DescribeComponentsJsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentsJsResponse
       */
      Models::DescribeComponentsJsResponse describeComponentsJsWithOptions(const Models::DescribeComponentsJsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the JavaScript file of a component. The component uses the returned JavaScript file for page rendering.
       *
       * @param request DescribeComponentsJsRequest
       * @return DescribeComponentsJsResponse
       */
      Models::DescribeComponentsJsResponse describeComponentsJs(const Models::DescribeComponentsJsRequest &request);

      /**
       * @summary Queries the information about the published versions of a playbook after deduplication.
       *
       * @param request DescribeDistinctReleasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDistinctReleasesResponse
       */
      Models::DescribeDistinctReleasesResponse describeDistinctReleasesWithOptions(const Models::DescribeDistinctReleasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the published versions of a playbook after deduplication.
       *
       * @param request DescribeDistinctReleasesRequest
       * @return DescribeDistinctReleasesResponse
       */
      Models::DescribeDistinctReleasesResponse describeDistinctReleases(const Models::DescribeDistinctReleasesRequest &request);

      /**
       * @summary Queries enumeration items that are required by a cloud service.
       *
       * @param request DescribeEnumItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnumItemsResponse
       */
      Models::DescribeEnumItemsResponse describeEnumItemsWithOptions(const Models::DescribeEnumItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries enumeration items that are required by a cloud service.
       *
       * @param request DescribeEnumItemsRequest
       * @return DescribeEnumItemsResponse
       */
      Models::DescribeEnumItemsResponse describeEnumItems(const Models::DescribeEnumItemsRequest &request);

      /**
       * @summary Queries the playbooks that are available for an automatic response plan.
       *
       * @param request DescribeExecutePlaybooksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExecutePlaybooksResponse
       */
      Models::DescribeExecutePlaybooksResponse describeExecutePlaybooksWithOptions(const Models::DescribeExecutePlaybooksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the playbooks that are available for an automatic response plan.
       *
       * @param request DescribeExecutePlaybooksRequest
       * @return DescribeExecutePlaybooksResponse
       */
      Models::DescribeExecutePlaybooksResponse describeExecutePlaybooks(const Models::DescribeExecutePlaybooksRequest &request);

      /**
       * @summary Queries the global configuration information about a cloud service.
       *
       * @param request DescribeFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFieldResponse
       */
      Models::DescribeFieldResponse describeFieldWithOptions(const Models::DescribeFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the global configuration information about a cloud service.
       *
       * @param request DescribeFieldRequest
       * @return DescribeFieldResponse
       */
      Models::DescribeFieldResponse describeField(const Models::DescribeFieldRequest &request);

      /**
       * @summary Queries groups of Alibaba Cloud services.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request DescribeGroupProductionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupProductionsResponse
       */
      Models::DescribeGroupProductionsResponse describeGroupProductionsWithOptions(const Models::DescribeGroupProductionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries groups of Alibaba Cloud services.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request DescribeGroupProductionsRequest
       * @return DescribeGroupProductionsResponse
       */
      Models::DescribeGroupProductionsResponse describeGroupProductions(const Models::DescribeGroupProductionsRequest &request);

      /**
       * @summary Queries the output structure information of each node in a playbook based on the most recent running record of the playbook.
       *
       * @param request DescribeLatestRecordSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLatestRecordSchemaResponse
       */
      Models::DescribeLatestRecordSchemaResponse describeLatestRecordSchemaWithOptions(const Models::DescribeLatestRecordSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the output structure information of each node in a playbook based on the most recent running record of the playbook.
       *
       * @param request DescribeLatestRecordSchemaRequest
       * @return DescribeLatestRecordSchemaResponse
       */
      Models::DescribeLatestRecordSchemaResponse describeLatestRecordSchema(const Models::DescribeLatestRecordSchemaRequest &request);

      /**
       * @summary Queries recommended dynamic input parameters of a component for playbook orchestration.
       *
       * @param request DescribeNodeParamTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNodeParamTagsResponse
       */
      Models::DescribeNodeParamTagsResponse describeNodeParamTagsWithOptions(const Models::DescribeNodeParamTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries recommended dynamic input parameters of a component for playbook orchestration.
       *
       * @param request DescribeNodeParamTagsRequest
       * @return DescribeNodeParamTagsResponse
       */
      Models::DescribeNodeParamTagsResponse describeNodeParamTags(const Models::DescribeNodeParamTagsRequest &request);

      /**
       * @summary Queries notification templates.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request DescribeNotifyTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNotifyTemplateListResponse
       */
      Models::DescribeNotifyTemplateListResponse describeNotifyTemplateListWithOptions(const Models::DescribeNotifyTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries notification templates.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request DescribeNotifyTemplateListRequest
       * @return DescribeNotifyTemplateListResponse
       */
      Models::DescribeNotifyTemplateListResponse describeNotifyTemplateList(const Models::DescribeNotifyTemplateListRequest &request);

      /**
       * @summary Queries the details of an API operation.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request DescribeOpenApiInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOpenApiInfoResponse
       */
      Models::DescribeOpenApiInfoResponse describeOpenApiInfoWithOptions(const Models::DescribeOpenApiInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an API operation.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request DescribeOpenApiInfoRequest
       * @return DescribeOpenApiInfoResponse
       */
      Models::DescribeOpenApiInfoResponse describeOpenApiInfo(const Models::DescribeOpenApiInfoRequest &request);

      /**
       * @summary Queries the API operations of an Alibaba Cloud service.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or the pricing for log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request DescribeOpenApiListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOpenApiListResponse
       */
      Models::DescribeOpenApiListResponse describeOpenApiListWithOptions(const Models::DescribeOpenApiListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the API operations of an Alibaba Cloud service.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or the pricing for log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request DescribeOpenApiListRequest
       * @return DescribeOpenApiListResponse
       */
      Models::DescribeOpenApiListResponse describeOpenApiList(const Models::DescribeOpenApiListRequest &request);

      /**
       * @summary Queries the XML configuration of a playbook.
       *
       * @param request DescribePlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlaybookResponse
       */
      Models::DescribePlaybookResponse describePlaybookWithOptions(const Models::DescribePlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the XML configuration of a playbook.
       *
       * @param request DescribePlaybookRequest
       * @return DescribePlaybookResponse
       */
      Models::DescribePlaybookResponse describePlaybook(const Models::DescribePlaybookRequest &request);

      /**
       * @summary Queries the input and output parameter configurations of a playbook.
       *
       * @param request DescribePlaybookInputOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlaybookInputOutputResponse
       */
      Models::DescribePlaybookInputOutputResponse describePlaybookInputOutputWithOptions(const Models::DescribePlaybookInputOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the input and output parameter configurations of a playbook.
       *
       * @param request DescribePlaybookInputOutputRequest
       * @return DescribePlaybookInputOutputResponse
       */
      Models::DescribePlaybookInputOutputResponse describePlaybookInputOutput(const Models::DescribePlaybookInputOutputRequest &request);

      /**
       * @summary Queries the metrics of a playbook. The metrics include the playbook name, playbook description, the number of times that the playbook is run, and the failure rate of the playbook.
       *
       * @param request DescribePlaybookMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlaybookMetricsResponse
       */
      Models::DescribePlaybookMetricsResponse describePlaybookMetricsWithOptions(const Models::DescribePlaybookMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metrics of a playbook. The metrics include the playbook name, playbook description, the number of times that the playbook is run, and the failure rate of the playbook.
       *
       * @param request DescribePlaybookMetricsRequest
       * @return DescribePlaybookMetricsResponse
       */
      Models::DescribePlaybookMetricsResponse describePlaybookMetrics(const Models::DescribePlaybookMetricsRequest &request);

      /**
       * @summary Queries the historical output data of a component node.
       *
       * @param request DescribePlaybookNodesOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlaybookNodesOutputResponse
       */
      Models::DescribePlaybookNodesOutputResponse describePlaybookNodesOutputWithOptions(const Models::DescribePlaybookNodesOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical output data of a component node.
       *
       * @param request DescribePlaybookNodesOutputRequest
       * @return DescribePlaybookNodesOutputResponse
       */
      Models::DescribePlaybookNodesOutputResponse describePlaybookNodesOutput(const Models::DescribePlaybookNodesOutputRequest &request);

      /**
       * @summary Queries the statistics of Security Orchestration Automation Response (SOAR), such as the numbers of created and enabled playbooks.
       *
       * @param request DescribePlaybookNumberMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlaybookNumberMetricsResponse
       */
      Models::DescribePlaybookNumberMetricsResponse describePlaybookNumberMetricsWithOptions(const Models::DescribePlaybookNumberMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of Security Orchestration Automation Response (SOAR), such as the numbers of created and enabled playbooks.
       *
       * @param request DescribePlaybookNumberMetricsRequest
       * @return DescribePlaybookNumberMetricsResponse
       */
      Models::DescribePlaybookNumberMetricsResponse describePlaybookNumberMetrics(const Models::DescribePlaybookNumberMetricsRequest &request);

      /**
       * @summary Queries the information about the published versions of a playbook.
       *
       * @param request DescribePlaybookReleasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlaybookReleasesResponse
       */
      Models::DescribePlaybookReleasesResponse describePlaybookReleasesWithOptions(const Models::DescribePlaybookReleasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the published versions of a playbook.
       *
       * @param request DescribePlaybookReleasesRequest
       * @return DescribePlaybookReleasesResponse
       */
      Models::DescribePlaybookReleasesResponse describePlaybookReleases(const Models::DescribePlaybookReleasesRequest &request);

      /**
       * @summary Retrieve the list of playbooks.
       *
       * @param request DescribePlaybooksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlaybooksResponse
       */
      Models::DescribePlaybooksResponse describePlaybooksWithOptions(const Models::DescribePlaybooksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the list of playbooks.
       *
       * @param request DescribePlaybooksRequest
       * @return DescribePlaybooksResponse
       */
      Models::DescribePlaybooksResponse describePlaybooks(const Models::DescribePlaybooksRequest &request);

      /**
       * @summary Queries the details of an API operation.
       *
       * @param request DescribePopApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePopApiResponse
       */
      Models::DescribePopApiResponse describePopApiWithOptions(const Models::DescribePopApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an API operation.
       *
       * @param request DescribePopApiRequest
       * @return DescribePopApiResponse
       */
      Models::DescribePopApiResponse describePopApi(const Models::DescribePopApiRequest &request);

      /**
       * @summary Queries statistics.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request DescribeProcessStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProcessStatisticsResponse
       */
      Models::DescribeProcessStatisticsResponse describeProcessStatisticsWithOptions(const Models::DescribeProcessStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request DescribeProcessStatisticsRequest
       * @return DescribeProcessStatisticsResponse
       */
      Models::DescribeProcessStatisticsResponse describeProcessStatistics(const Models::DescribeProcessStatisticsRequest &request);

      /**
       * @summary Query the number of associated disposal tasks based on the entity UUID.
       *
       * @param request DescribeProcessTaskCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProcessTaskCountResponse
       */
      Models::DescribeProcessTaskCountResponse describeProcessTaskCountWithOptions(const Models::DescribeProcessTaskCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the number of associated disposal tasks based on the entity UUID.
       *
       * @param request DescribeProcessTaskCountRequest
       * @return DescribeProcessTaskCountResponse
       */
      Models::DescribeProcessTaskCountResponse describeProcessTaskCount(const Models::DescribeProcessTaskCountRequest &request);

      /**
       * @summary Queries the information about handling tasks. When you use Security Orchestration Automation Response (SOAR) to handle events, handling tasks are generated in the handling center.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request DescribeProcessTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProcessTasksResponse
       */
      Models::DescribeProcessTasksResponse describeProcessTasksWithOptions(const Models::DescribeProcessTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about handling tasks. When you use Security Orchestration Automation Response (SOAR) to handle events, handling tasks are generated in the handling center.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request DescribeProcessTasksRequest
       * @return DescribeProcessTasksResponse
       */
      Models::DescribeProcessTasksResponse describeProcessTasks(const Models::DescribeProcessTasksRequest &request);

      /**
       * @summary Queries the data that is returned when a component initiates an action in a playbook task.
       *
       * @param request DescribeSoarRecordActionOutputListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarRecordActionOutputListResponse
       */
      Models::DescribeSoarRecordActionOutputListResponse describeSoarRecordActionOutputListWithOptions(const Models::DescribeSoarRecordActionOutputListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data that is returned when a component initiates an action in a playbook task.
       *
       * @param request DescribeSoarRecordActionOutputListRequest
       * @return DescribeSoarRecordActionOutputListResponse
       */
      Models::DescribeSoarRecordActionOutputListResponse describeSoarRecordActionOutputList(const Models::DescribeSoarRecordActionOutputListRequest &request);

      /**
       * @summary Queries the input and output data of a component action. You can call this operation after a playbook is run.
       *
       * @param request DescribeSoarRecordInOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarRecordInOutputResponse
       */
      Models::DescribeSoarRecordInOutputResponse describeSoarRecordInOutputWithOptions(const Models::DescribeSoarRecordInOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the input and output data of a component action. You can call this operation after a playbook is run.
       *
       * @param request DescribeSoarRecordInOutputRequest
       * @return DescribeSoarRecordInOutputResponse
       */
      Models::DescribeSoarRecordInOutputResponse describeSoarRecordInOutput(const Models::DescribeSoarRecordInOutputRequest &request);

      /**
       * @summary Get the execution records of a playbook.
       *
       * @param request DescribeSoarRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarRecordsResponse
       */
      Models::DescribeSoarRecordsResponse describeSoarRecordsWithOptions(const Models::DescribeSoarRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the execution records of a playbook.
       *
       * @param request DescribeSoarRecordsRequest
       * @return DescribeSoarRecordsResponse
       */
      Models::DescribeSoarRecordsResponse describeSoarRecords(const Models::DescribeSoarRecordsRequest &request);

      /**
       * @summary Queries the execution records of a component during the running of a playbook.
       *
       * @param request DescribeSoarTaskAndActionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarTaskAndActionsResponse
       */
      Models::DescribeSoarTaskAndActionsResponse describeSoarTaskAndActionsWithOptions(const Models::DescribeSoarTaskAndActionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution records of a component during the running of a playbook.
       *
       * @param request DescribeSoarTaskAndActionsRequest
       * @return DescribeSoarTaskAndActionsResponse
       */
      Models::DescribeSoarTaskAndActionsResponse describeSoarTaskAndActions(const Models::DescribeSoarTaskAndActionsRequest &request);

      /**
       * @summary Queries the commands that can be run to obtain objects.
       *
       * @param request DescribeSophonCommandsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSophonCommandsResponse
       */
      Models::DescribeSophonCommandsResponse describeSophonCommandsWithOptions(const Models::DescribeSophonCommandsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the commands that can be run to obtain objects.
       *
       * @param request DescribeSophonCommandsRequest
       * @return DescribeSophonCommandsResponse
       */
      Models::DescribeSophonCommandsResponse describeSophonCommands(const Models::DescribeSophonCommandsRequest &request);

      /**
       * @summary Query OpenApi List of Cloud Vendors.
       *
       * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., threat analysis and response log access traffic) before using this interface.
       *
       * @param request DescribeVendorApiListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVendorApiListResponse
       */
      Models::DescribeVendorApiListResponse describeVendorApiListWithOptions(const Models::DescribeVendorApiListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query OpenApi List of Cloud Vendors.
       *
       * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., threat analysis and response log access traffic) before using this interface.
       *
       * @param request DescribeVendorApiListRequest
       * @return DescribeVendorApiListResponse
       */
      Models::DescribeVendorApiListResponse describeVendorApiList(const Models::DescribeVendorApiListRequest &request);

      /**
       * @summary Queries the operational logs of a Python3 script by using the UUID that is returned when the script is run. The UUID is specified by requestUuid.
       *
       * @param request DescriberPython3ScriptLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescriberPython3ScriptLogsResponse
       */
      Models::DescriberPython3ScriptLogsResponse describerPython3ScriptLogsWithOptions(const Models::DescriberPython3ScriptLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operational logs of a Python3 script by using the UUID that is returned when the script is run. The UUID is specified by requestUuid.
       *
       * @param request DescriberPython3ScriptLogsRequest
       * @return DescriberPython3ScriptLogsResponse
       */
      Models::DescriberPython3ScriptLogsResponse describerPython3ScriptLogs(const Models::DescriberPython3ScriptLogsRequest &request);

      /**
       * @summary Modifies the information about the asset that is configured for a component.
       *
       * @param request ModifyComponentAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyComponentAssetResponse
       */
      Models::ModifyComponentAssetResponse modifyComponentAssetWithOptions(const Models::ModifyComponentAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about the asset that is configured for a component.
       *
       * @param request ModifyComponentAssetRequest
       * @return ModifyComponentAssetResponse
       */
      Models::ModifyComponentAssetResponse modifyComponentAsset(const Models::ModifyComponentAssetRequest &request);

      /**
       * @summary Modifies the configuration of a playbook.
       *
       * @param request ModifyPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPlaybookResponse
       */
      Models::ModifyPlaybookResponse modifyPlaybookWithOptions(const Models::ModifyPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a playbook.
       *
       * @param request ModifyPlaybookRequest
       * @return ModifyPlaybookResponse
       */
      Models::ModifyPlaybookResponse modifyPlaybook(const Models::ModifyPlaybookRequest &request);

      /**
       * @summary Modifies the input and output parameters of a playbook.
       *
       * @param request ModifyPlaybookInputOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPlaybookInputOutputResponse
       */
      Models::ModifyPlaybookInputOutputResponse modifyPlaybookInputOutputWithOptions(const Models::ModifyPlaybookInputOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the input and output parameters of a playbook.
       *
       * @param request ModifyPlaybookInputOutputRequest
       * @return ModifyPlaybookInputOutputResponse
       */
      Models::ModifyPlaybookInputOutputResponse modifyPlaybookInputOutput(const Models::ModifyPlaybookInputOutputRequest &request);

      /**
       * @summary Publishes the playbook. After the playbook is published, the playbook runs based on the new logic.
       *
       * @param request PublishPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishPlaybookResponse
       */
      Models::PublishPlaybookResponse publishPlaybookWithOptions(const Models::PublishPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes the playbook. After the playbook is published, the playbook runs based on the new logic.
       *
       * @param request PublishPlaybookRequest
       * @return PublishPlaybookResponse
       */
      Models::PublishPlaybookResponse publishPlaybook(const Models::PublishPlaybookRequest &request);

      /**
       * @summary Queries all playbooks at a time.
       *
       * @param request QueryTreeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTreeDataResponse
       */
      Models::QueryTreeDataResponse queryTreeDataWithOptions(const Models::QueryTreeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all playbooks at a time.
       *
       * @param request QueryTreeDataRequest
       * @return QueryTreeDataResponse
       */
      Models::QueryTreeDataResponse queryTreeData(const Models::QueryTreeDataRequest &request);

      /**
       * @summary Rolls back a playbook to a specific version. You can determine whether to publish the new playbook version during the rollback.
       *
       * @param request RevertPlaybookReleaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevertPlaybookReleaseResponse
       */
      Models::RevertPlaybookReleaseResponse revertPlaybookReleaseWithOptions(const Models::RevertPlaybookReleaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back a playbook to a specific version. You can determine whether to publish the new playbook version during the rollback.
       *
       * @param request RevertPlaybookReleaseRequest
       * @return RevertPlaybookReleaseResponse
       */
      Models::RevertPlaybookReleaseResponse revertPlaybookRelease(const Models::RevertPlaybookReleaseRequest &request);

      /**
       * @summary Runs the email notification component to send messages.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request RunNotifyComponentWithEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunNotifyComponentWithEmailResponse
       */
      Models::RunNotifyComponentWithEmailResponse runNotifyComponentWithEmailWithOptions(const Models::RunNotifyComponentWithEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs the email notification component to send messages.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request RunNotifyComponentWithEmailRequest
       * @return RunNotifyComponentWithEmailResponse
       */
      Models::RunNotifyComponentWithEmailResponse runNotifyComponentWithEmail(const Models::RunNotifyComponentWithEmailRequest &request);

      /**
       * @summary Execute Notification Component - Send Message via Message Center.
       *
       * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., Threat Analysis and Response Log Access Traffic) before using this interface.
       *
       * @param request RunNotifyComponentWithMessageCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunNotifyComponentWithMessageCenterResponse
       */
      Models::RunNotifyComponentWithMessageCenterResponse runNotifyComponentWithMessageCenterWithOptions(const Models::RunNotifyComponentWithMessageCenterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Execute Notification Component - Send Message via Message Center.
       *
       * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., Threat Analysis and Response Log Access Traffic) before using this interface.
       *
       * @param request RunNotifyComponentWithMessageCenterRequest
       * @return RunNotifyComponentWithMessageCenterResponse
       */
      Models::RunNotifyComponentWithMessageCenterResponse runNotifyComponentWithMessageCenter(const Models::RunNotifyComponentWithMessageCenterRequest &request);

      /**
       * @summary Runs the webhook notification component to send messages.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request RunNotifyComponentWithWebhookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunNotifyComponentWithWebhookResponse
       */
      Models::RunNotifyComponentWithWebhookResponse runNotifyComponentWithWebhookWithOptions(const Models::RunNotifyComponentWithWebhookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs the webhook notification component to send messages.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
       *
       * @param request RunNotifyComponentWithWebhookRequest
       * @return RunNotifyComponentWithWebhookResponse
       */
      Models::RunNotifyComponentWithWebhookResponse runNotifyComponentWithWebhook(const Models::RunNotifyComponentWithWebhookRequest &request);

      /**
       * @summary Submits and runs a Python3 script. You can call this operation only for data processing.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.alibabacloud.com/en/pricing-calculator?_p_lc=1&spm=openapi-amp.newDocPublishment.0.0.4c41281fWhbdPa#/commodity/vm_intl).
       *
       * @param request RunPython3ScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunPython3ScriptResponse
       */
      Models::RunPython3ScriptResponse runPython3ScriptWithOptions(const Models::RunPython3ScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits and runs a Python3 script. You can call this operation only for data processing.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.alibabacloud.com/en/pricing-calculator?_p_lc=1&spm=openapi-amp.newDocPublishment.0.0.4c41281fWhbdPa#/commodity/vm_intl).
       *
       * @param request RunPython3ScriptRequest
       * @return RunPython3ScriptResponse
       */
      Models::RunPython3ScriptResponse runPython3Script(const Models::RunPython3ScriptRequest &request);

      /**
       * @summary Triggers an enabled custom playbook or a predefined playbook.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.alibabacloud.com/en/pricing-calculator?_p_lc=1&spm=a2796.7960336.3034855210.1.7adab91arMeIx2#/commodity/vm_intl).
       *
       * @param request TriggerPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerPlaybookResponse
       */
      Models::TriggerPlaybookResponse triggerPlaybookWithOptions(const Models::TriggerPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers an enabled custom playbook or a predefined playbook.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.alibabacloud.com/en/pricing-calculator?_p_lc=1&spm=a2796.7960336.3034855210.1.7adab91arMeIx2#/commodity/vm_intl).
       *
       * @param request TriggerPlaybookRequest
       * @return TriggerPlaybookResponse
       */
      Models::TriggerPlaybookResponse triggerPlaybook(const Models::TriggerPlaybookRequest &request);

      /**
       * @summary Performs an action on a handling task that is generated by the handling center when an event is handled by using Security Orchestration Automation Response (SOAR). For example, you can call this operation to cancel blocking or isolation, or retry blocking.
       *
       * @param request TriggerProcessTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerProcessTaskResponse
       */
      Models::TriggerProcessTaskResponse triggerProcessTaskWithOptions(const Models::TriggerProcessTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs an action on a handling task that is generated by the handling center when an event is handled by using Security Orchestration Automation Response (SOAR). For example, you can call this operation to cancel blocking or isolation, or retry blocking.
       *
       * @param request TriggerProcessTaskRequest
       * @return TriggerProcessTaskResponse
       */
      Models::TriggerProcessTaskResponse triggerProcessTask(const Models::TriggerProcessTaskRequest &request);

      /**
       * @summary Triggers a playbook or a command.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.alibabacloud.com/en/pricing-calculator?_p_lc=1&spm=a2796.7960336.3034855210.1.7adab91arMeIx2#/commodity/vm_intl).
       *
       * @param request TriggerSophonPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerSophonPlaybookResponse
       */
      Models::TriggerSophonPlaybookResponse triggerSophonPlaybookWithOptions(const Models::TriggerSophonPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers a playbook or a command.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.alibabacloud.com/en/pricing-calculator?_p_lc=1&spm=a2796.7960336.3034855210.1.7adab91arMeIx2#/commodity/vm_intl).
       *
       * @param request TriggerSophonPlaybookRequest
       * @return TriggerSophonPlaybookResponse
       */
      Models::TriggerSophonPlaybookResponse triggerSophonPlaybook(const Models::TriggerSophonPlaybookRequest &request);

      /**
       * @summary Checks whether the configuration of the playbook is correct and whether the logic of the orchestration is reasonable.
       *
       * @param request VerifyPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyPlaybookResponse
       */
      Models::VerifyPlaybookResponse verifyPlaybookWithOptions(const Models::VerifyPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the configuration of the playbook is correct and whether the logic of the orchestration is reasonable.
       *
       * @param request VerifyPlaybookRequest
       * @return VerifyPlaybookResponse
       */
      Models::VerifyPlaybookResponse verifyPlaybook(const Models::VerifyPlaybookRequest &request);

      /**
       * @summary Checks whether the syntax of a Python code snippet is correct.
       *
       * @param request VerifyPythonFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyPythonFileResponse
       */
      Models::VerifyPythonFileResponse verifyPythonFileWithOptions(const Models::VerifyPythonFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the syntax of a Python code snippet is correct.
       *
       * @param request VerifyPythonFileRequest
       * @return VerifyPythonFileResponse
       */
      Models::VerifyPythonFileResponse verifyPythonFile(const Models::VerifyPythonFileRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
