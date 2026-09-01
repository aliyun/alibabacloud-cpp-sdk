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
       * @summary Compares the configurations of two published playbook versions.
       *
       * @param request ComparePlaybooksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ComparePlaybooksResponse
       */
      Models::ComparePlaybooksResponse comparePlaybooksWithOptions(const Models::ComparePlaybooksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Compares the configurations of two published playbook versions.
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
       * @summary Creates a new playbook.
       *
       * @param request CreatePlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePlaybookResponse
       */
      Models::CreatePlaybookResponse createPlaybookWithOptions(const Models::CreatePlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new playbook.
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
       * @summary Deletes a component asset.
       *
       * @param request DeleteComponentAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComponentAssetResponse
       */
      Models::DeleteComponentAssetResponse deleteComponentAssetWithOptions(const Models::DeleteComponentAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a component asset.
       *
       * @param request DeleteComponentAssetRequest
       * @return DeleteComponentAssetResponse
       */
      Models::DeleteComponentAssetResponse deleteComponentAsset(const Models::DeleteComponentAssetRequest &request);

      /**
       * @summary Deletes a specified custom playbook.
       *
       * @param request DeletePlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePlaybookResponse
       */
      Models::DeletePlaybookResponse deletePlaybookWithOptions(const Models::DeletePlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified custom playbook.
       *
       * @param request DeletePlaybookRequest
       * @return DeletePlaybookResponse
       */
      Models::DeletePlaybookResponse deletePlaybook(const Models::DeletePlaybookRequest &request);

      /**
       * @summary Obtains the metadata for a component asset, which defines the fields that constitute the asset.
       *
       * @param request DescribeComponentAssetFormRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentAssetFormResponse
       */
      Models::DescribeComponentAssetFormResponse describeComponentAssetFormWithOptions(const Models::DescribeComponentAssetFormRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the metadata for a component asset, which defines the fields that constitute the asset.
       *
       * @param request DescribeComponentAssetFormRequest
       * @return DescribeComponentAssetFormResponse
       */
      Models::DescribeComponentAssetFormResponse describeComponentAssetForm(const Models::DescribeComponentAssetFormRequest &request);

      /**
       * @summary Retrieves the asset list for a component.
       *
       * @param request DescribeComponentAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentAssetsResponse
       */
      Models::DescribeComponentAssetsResponse describeComponentAssetsWithOptions(const Models::DescribeComponentAssetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the asset list for a component.
       *
       * @param request DescribeComponentAssetsRequest
       * @return DescribeComponentAssetsResponse
       */
      Models::DescribeComponentAssetsResponse describeComponentAssets(const Models::DescribeComponentAssetsRequest &request);

      /**
       * @summary Retrieves a list of standard components that you can use.
       *
       * @param request DescribeComponentListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentListResponse
       */
      Models::DescribeComponentListResponse describeComponentListWithOptions(const Models::DescribeComponentListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of standard components that you can use.
       *
       * @param request DescribeComponentListRequest
       * @return DescribeComponentListResponse
       */
      Models::DescribeComponentListResponse describeComponentList(const Models::DescribeComponentListRequest &request);

      /**
       * @summary Retrieves a list of predefined components.
       *
       * @param request DescribeComponentPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentPlaybookResponse
       */
      Models::DescribeComponentPlaybookResponse describeComponentPlaybookWithOptions(const Models::DescribeComponentPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of predefined components.
       *
       * @param request DescribeComponentPlaybookRequest
       * @return DescribeComponentPlaybookResponse
       */
      Models::DescribeComponentPlaybookResponse describeComponentPlaybook(const Models::DescribeComponentPlaybookRequest &request);

      /**
       * @summary Obtains the JavaScript (JS) file that a component uses to render the page.
       *
       * @param request DescribeComponentsJsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentsJsResponse
       */
      Models::DescribeComponentsJsResponse describeComponentsJsWithOptions(const Models::DescribeComponentsJsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the JavaScript (JS) file that a component uses to render the page.
       *
       * @param request DescribeComponentsJsRequest
       * @return DescribeComponentsJsResponse
       */
      Models::DescribeComponentsJsResponse describeComponentsJs(const Models::DescribeComponentsJsRequest &request);

      /**
       * @summary Retrieves a list of distinct playbook releases.
       *
       * @param request DescribeDistinctReleasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDistinctReleasesResponse
       */
      Models::DescribeDistinctReleasesResponse describeDistinctReleasesWithOptions(const Models::DescribeDistinctReleasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of distinct playbook releases.
       *
       * @param request DescribeDistinctReleasesRequest
       * @return DescribeDistinctReleasesResponse
       */
      Models::DescribeDistinctReleasesResponse describeDistinctReleases(const Models::DescribeDistinctReleasesRequest &request);

      /**
       * @summary Queries the enumeration information for a product.
       *
       * @param request DescribeEnumItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnumItemsResponse
       */
      Models::DescribeEnumItemsResponse describeEnumItemsWithOptions(const Models::DescribeEnumItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the enumeration information for a product.
       *
       * @param request DescribeEnumItemsRequest
       * @return DescribeEnumItemsResponse
       */
      Models::DescribeEnumItemsResponse describeEnumItems(const Models::DescribeEnumItemsRequest &request);

      /**
       * @summary Queries a list of executable playbooks that are used to configure automated response plans.
       *
       * @param request DescribeExecutePlaybooksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExecutePlaybooksResponse
       */
      Models::DescribeExecutePlaybooksResponse describeExecutePlaybooksWithOptions(const Models::DescribeExecutePlaybooksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of executable playbooks that are used to configure automated response plans.
       *
       * @param request DescribeExecutePlaybooksRequest
       * @return DescribeExecutePlaybooksResponse
       */
      Models::DescribeExecutePlaybooksResponse describeExecutePlaybooks(const Models::DescribeExecutePlaybooksRequest &request);

      /**
       * @summary Retrieves global configuration information for the product.
       *
       * @param request DescribeFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFieldResponse
       */
      Models::DescribeFieldResponse describeFieldWithOptions(const Models::DescribeFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves global configuration information for the product.
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
       * @summary Describes the output structure of each node in a playbook based on the latest execution record.
       *
       * @param request DescribeLatestRecordSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLatestRecordSchemaResponse
       */
      Models::DescribeLatestRecordSchemaResponse describeLatestRecordSchemaWithOptions(const Models::DescribeLatestRecordSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the output structure of each node in a playbook based on the latest execution record.
       *
       * @param request DescribeLatestRecordSchemaRequest
       * @return DescribeLatestRecordSchemaResponse
       */
      Models::DescribeLatestRecordSchemaResponse describeLatestRecordSchema(const Models::DescribeLatestRecordSchemaRequest &request);

      /**
       * @summary Returns the reference paths for component inputs in a playbook orchestration.
       *
       * @param request DescribeNodeParamTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNodeParamTagsResponse
       */
      Models::DescribeNodeParamTagsResponse describeNodeParamTagsWithOptions(const Models::DescribeNodeParamTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the reference paths for component inputs in a playbook orchestration.
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
       * @summary Retrieve the API list for a product.
       *
       * @description Before you use this API, review the billing methods and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) for the orchestration product, which supports threat analysis, response, log access, and traffic monitoring.
       *
       * @param request DescribeOpenApiListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOpenApiListResponse
       */
      Models::DescribeOpenApiListResponse describeOpenApiListWithOptions(const Models::DescribeOpenApiListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the API list for a product.
       *
       * @description Before you use this API, review the billing methods and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) for the orchestration product, which supports threat analysis, response, log access, and traffic monitoring.
       *
       * @param request DescribeOpenApiListRequest
       * @return DescribeOpenApiListResponse
       */
      Models::DescribeOpenApiListResponse describeOpenApiList(const Models::DescribeOpenApiListRequest &request);

      /**
       * @summary Retrieves the XML configuration of a playbook.
       *
       * @param request DescribePlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlaybookResponse
       */
      Models::DescribePlaybookResponse describePlaybookWithOptions(const Models::DescribePlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the XML configuration of a playbook.
       *
       * @param request DescribePlaybookRequest
       * @return DescribePlaybookResponse
       */
      Models::DescribePlaybookResponse describePlaybook(const Models::DescribePlaybookRequest &request);

      /**
       * @summary Retrieves the input and output parameter configurations for a playbook.
       *
       * @param request DescribePlaybookInputOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlaybookInputOutputResponse
       */
      Models::DescribePlaybookInputOutputResponse describePlaybookInputOutputWithOptions(const Models::DescribePlaybookInputOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the input and output parameter configurations for a playbook.
       *
       * @param request DescribePlaybookInputOutputRequest
       * @return DescribePlaybookInputOutputResponse
       */
      Models::DescribePlaybookInputOutputResponse describePlaybookInputOutput(const Models::DescribePlaybookInputOutputRequest &request);

      /**
       * @summary Queries playbook metadata, including its name, description, number of runs, and failure rate.
       *
       * @param request DescribePlaybookMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlaybookMetricsResponse
       */
      Models::DescribePlaybookMetricsResponse describePlaybookMetricsWithOptions(const Models::DescribePlaybookMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries playbook metadata, including its name, description, number of runs, and failure rate.
       *
       * @param request DescribePlaybookMetricsRequest
       * @return DescribePlaybookMetricsResponse
       */
      Models::DescribePlaybookMetricsResponse describePlaybookMetrics(const Models::DescribePlaybookMetricsRequest &request);

      /**
       * @summary Retrieves the historical output data of a component.
       *
       * @param request DescribePlaybookNodesOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlaybookNodesOutputResponse
       */
      Models::DescribePlaybookNodesOutputResponse describePlaybookNodesOutputWithOptions(const Models::DescribePlaybookNodesOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the historical output data of a component.
       *
       * @param request DescribePlaybookNodesOutputRequest
       * @return DescribePlaybookNodesOutputResponse
       */
      Models::DescribePlaybookNodesOutputResponse describePlaybookNodesOutput(const Models::DescribePlaybookNodesOutputRequest &request);

      /**
       * @summary Retrieves metrics for the response orchestration product, including the total number of playbooks and the number of enabled playbooks.
       *
       * @param request DescribePlaybookNumberMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlaybookNumberMetricsResponse
       */
      Models::DescribePlaybookNumberMetricsResponse describePlaybookNumberMetricsWithOptions(const Models::DescribePlaybookNumberMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves metrics for the response orchestration product, including the total number of playbooks and the number of enabled playbooks.
       *
       * @param request DescribePlaybookNumberMetricsRequest
       * @return DescribePlaybookNumberMetricsResponse
       */
      Models::DescribePlaybookNumberMetricsResponse describePlaybookNumberMetrics(const Models::DescribePlaybookNumberMetricsRequest &request);

      /**
       * @summary Queries a list of published versions of a playbook.
       *
       * @param request DescribePlaybookReleasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlaybookReleasesResponse
       */
      Models::DescribePlaybookReleasesResponse describePlaybookReleasesWithOptions(const Models::DescribePlaybookReleasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of published versions of a playbook.
       *
       * @param request DescribePlaybookReleasesRequest
       * @return DescribePlaybookReleasesResponse
       */
      Models::DescribePlaybookReleasesResponse describePlaybookReleases(const Models::DescribePlaybookReleasesRequest &request);

      /**
       * @summary Queries a list of playbooks.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) for Security Orchestration, Automation, and Response (SOAR).
       *
       * @param request DescribePlaybooksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlaybooksResponse
       */
      Models::DescribePlaybooksResponse describePlaybooksWithOptions(const Models::DescribePlaybooksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of playbooks.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) for Security Orchestration, Automation, and Response (SOAR).
       *
       * @param request DescribePlaybooksRequest
       * @return DescribePlaybooksResponse
       */
      Models::DescribePlaybooksResponse describePlaybooks(const Models::DescribePlaybooksRequest &request);

      /**
       * @summary Retrieves the details of an OpenAPI.
       *
       * @param request DescribePopApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePopApiResponse
       */
      Models::DescribePopApiResponse describePopApiWithOptions(const Models::DescribePopApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an OpenAPI.
       *
       * @param request DescribePopApiRequest
       * @return DescribePopApiResponse
       */
      Models::DescribePopApiResponse describePopApi(const Models::DescribePopApiRequest &request);

      /**
       * @summary Retrieves statistics information.
       *
       * @description Make sure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (Cloud Threat Detection and Response (CTDR) log traffic) before you call this operation.
       *
       * @param request DescribeProcessStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProcessStatisticsResponse
       */
      Models::DescribeProcessStatisticsResponse describeProcessStatisticsWithOptions(const Models::DescribeProcessStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves statistics information.
       *
       * @description Make sure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (Cloud Threat Detection and Response (CTDR) log traffic) before you call this operation.
       *
       * @param request DescribeProcessStatisticsRequest
       * @return DescribeProcessStatisticsResponse
       */
      Models::DescribeProcessStatisticsResponse describeProcessStatistics(const Models::DescribeProcessStatisticsRequest &request);

      /**
       * @summary Queries the count of response tasks associated with an entity UUID.
       *
       * @param request DescribeProcessTaskCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProcessTaskCountResponse
       */
      Models::DescribeProcessTaskCountResponse describeProcessTaskCountWithOptions(const Models::DescribeProcessTaskCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the count of response tasks associated with an entity UUID.
       *
       * @param request DescribeProcessTaskCountRequest
       * @return DescribeProcessTaskCountResponse
       */
      Models::DescribeProcessTaskCountResponse describeProcessTaskCount(const Models::DescribeProcessTaskCountRequest &request);

      /**
       * @summary Retrieves a list of disposal tasks.
       *
       * @description Make sure that you are familiar with the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration feature (the log traffic of Cloud Threat Detection and Response (CTDR)) before you call this operation.
       *
       * @param request DescribeProcessTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProcessTasksResponse
       */
      Models::DescribeProcessTasksResponse describeProcessTasksWithOptions(const Models::DescribeProcessTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of disposal tasks.
       *
       * @description Make sure that you are familiar with the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration feature (the log traffic of Cloud Threat Detection and Response (CTDR)) before you call this operation.
       *
       * @param request DescribeProcessTasksRequest
       * @return DescribeProcessTasksResponse
       */
      Models::DescribeProcessTasksResponse describeProcessTasks(const Models::DescribeProcessTasksRequest &request);

      /**
       * @summary Retrieves the output data generated by a component for an action in a playbook task.
       *
       * @param request DescribeSoarRecordActionOutputListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarRecordActionOutputListResponse
       */
      Models::DescribeSoarRecordActionOutputListResponse describeSoarRecordActionOutputListWithOptions(const Models::DescribeSoarRecordActionOutputListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the output data generated by a component for an action in a playbook task.
       *
       * @param request DescribeSoarRecordActionOutputListRequest
       * @return DescribeSoarRecordActionOutputListResponse
       */
      Models::DescribeSoarRecordActionOutputListResponse describeSoarRecordActionOutputList(const Models::DescribeSoarRecordActionOutputListRequest &request);

      /**
       * @summary Retrieves the input and output data of a component action after a playbook task is executed.
       *
       * @param request DescribeSoarRecordInOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarRecordInOutputResponse
       */
      Models::DescribeSoarRecordInOutputResponse describeSoarRecordInOutputWithOptions(const Models::DescribeSoarRecordInOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the input and output data of a component action after a playbook task is executed.
       *
       * @param request DescribeSoarRecordInOutputRequest
       * @return DescribeSoarRecordInOutputResponse
       */
      Models::DescribeSoarRecordInOutputResponse describeSoarRecordInOutput(const Models::DescribeSoarRecordInOutputRequest &request);

      /**
       * @summary Queries the execution records for a playbook.
       *
       * @param request DescribeSoarRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarRecordsResponse
       */
      Models::DescribeSoarRecordsResponse describeSoarRecordsWithOptions(const Models::DescribeSoarRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution records for a playbook.
       *
       * @param request DescribeSoarRecordsRequest
       * @return DescribeSoarRecordsResponse
       */
      Models::DescribeSoarRecordsResponse describeSoarRecords(const Models::DescribeSoarRecordsRequest &request);

      /**
       * @summary Retrieves the component execution records for a single playbook run.
       *
       * @param request DescribeSoarTaskAndActionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarTaskAndActionsResponse
       */
      Models::DescribeSoarTaskAndActionsResponse describeSoarTaskAndActionsWithOptions(const Models::DescribeSoarTaskAndActionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the component execution records for a single playbook run.
       *
       * @param request DescribeSoarTaskAndActionsRequest
       * @return DescribeSoarTaskAndActionsResponse
       */
      Models::DescribeSoarTaskAndActionsResponse describeSoarTaskAndActions(const Models::DescribeSoarTaskAndActionsRequest &request);

      /**
       * @summary Queries the commands that are used to manage entities.
       *
       * @param request DescribeSophonCommandsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSophonCommandsResponse
       */
      Models::DescribeSophonCommandsResponse describeSophonCommandsWithOptions(const Models::DescribeSophonCommandsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the commands that are used to manage entities.
       *
       * @param request DescribeSophonCommandsRequest
       * @return DescribeSophonCommandsResponse
       */
      Models::DescribeSophonCommandsResponse describeSophonCommands(const Models::DescribeSophonCommandsRequest &request);

      /**
       * @summary Queries the API operations of a cloud service provider.
       *
       * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., threat analysis and response log access traffic) before using this interface.
       *
       * @param request DescribeVendorApiListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVendorApiListResponse
       */
      Models::DescribeVendorApiListResponse describeVendorApiListWithOptions(const Models::DescribeVendorApiListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the API operations of a cloud service provider.
       *
       * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., threat analysis and response log access traffic) before using this interface.
       *
       * @param request DescribeVendorApiListRequest
       * @return DescribeVendorApiListResponse
       */
      Models::DescribeVendorApiListResponse describeVendorApiList(const Models::DescribeVendorApiListRequest &request);

      /**
       * @summary After you submit a task for a Python 3 script, use the returned requestUuid to retrieve the operational logs.
       *
       * @param request DescriberPython3ScriptLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescriberPython3ScriptLogsResponse
       */
      Models::DescriberPython3ScriptLogsResponse describerPython3ScriptLogsWithOptions(const Models::DescriberPython3ScriptLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After you submit a task for a Python 3 script, use the returned requestUuid to retrieve the operational logs.
       *
       * @param request DescriberPython3ScriptLogsRequest
       * @return DescriberPython3ScriptLogsResponse
       */
      Models::DescriberPython3ScriptLogsResponse describerPython3ScriptLogs(const Models::DescriberPython3ScriptLogsRequest &request);

      /**
       * @summary You can call this operation to modify the asset information for a component.
       *
       * @param request ModifyComponentAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyComponentAssetResponse
       */
      Models::ModifyComponentAssetResponse modifyComponentAssetWithOptions(const Models::ModifyComponentAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to modify the asset information for a component.
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
       * @summary Publishes a playbook. Once published, the playbook runs with the new logic.
       *
       * @param request PublishPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishPlaybookResponse
       */
      Models::PublishPlaybookResponse publishPlaybookWithOptions(const Models::PublishPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a playbook. Once published, the playbook runs with the new logic.
       *
       * @param request PublishPlaybookRequest
       * @return PublishPlaybookResponse
       */
      Models::PublishPlaybookResponse publishPlaybook(const Models::PublishPlaybookRequest &request);

      /**
       * @summary Retrieves a list of all playbooks.
       *
       * @param request QueryTreeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTreeDataResponse
       */
      Models::QueryTreeDataResponse queryTreeDataWithOptions(const Models::QueryTreeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of all playbooks.
       *
       * @param request QueryTreeDataRequest
       * @return QueryTreeDataResponse
       */
      Models::QueryTreeDataResponse queryTreeData(const Models::QueryTreeDataRequest &request);

      /**
       * @summary Rolls back a playbook to a specified version. You can also specify whether to publish that version after the rollback.
       *
       * @param request RevertPlaybookReleaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevertPlaybookReleaseResponse
       */
      Models::RevertPlaybookReleaseResponse revertPlaybookReleaseWithOptions(const Models::RevertPlaybookReleaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back a playbook to a specified version. You can also specify whether to publish that version after the rollback.
       *
       * @param request RevertPlaybookReleaseRequest
       * @return RevertPlaybookReleaseResponse
       */
      Models::RevertPlaybookReleaseResponse revertPlaybookRelease(const Models::RevertPlaybookReleaseRequest &request);

      /**
       * @summary Runs the notification component to send an email message.
       *
       * @description Before calling this operation, understand the billing methods and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) for Security Orchestration Application Response (SOAR). SOAR is billed based on the log traffic added to the service.
       *
       * @param request RunNotifyComponentWithEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunNotifyComponentWithEmailResponse
       */
      Models::RunNotifyComponentWithEmailResponse runNotifyComponentWithEmailWithOptions(const Models::RunNotifyComponentWithEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs the notification component to send an email message.
       *
       * @description Before calling this operation, understand the billing methods and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) for Security Orchestration Application Response (SOAR). SOAR is billed based on the log traffic added to the service.
       *
       * @param request RunNotifyComponentWithEmailRequest
       * @return RunNotifyComponentWithEmailResponse
       */
      Models::RunNotifyComponentWithEmailResponse runNotifyComponentWithEmail(const Models::RunNotifyComponentWithEmailRequest &request);

      /**
       * @summary Sends a message using the notification component in Message Center.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of Security Orchestration Automation Response (SOAR). The service is billed based on the log traffic for threat analysis and response.
       *
       * @param request RunNotifyComponentWithMessageCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunNotifyComponentWithMessageCenterResponse
       */
      Models::RunNotifyComponentWithMessageCenterResponse runNotifyComponentWithMessageCenterWithOptions(const Models::RunNotifyComponentWithMessageCenterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message using the notification component in Message Center.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of Security Orchestration Automation Response (SOAR). The service is billed based on the log traffic for threat analysis and response.
       *
       * @param request RunNotifyComponentWithMessageCenterRequest
       * @return RunNotifyComponentWithMessageCenterResponse
       */
      Models::RunNotifyComponentWithMessageCenterResponse runNotifyComponentWithMessageCenter(const Models::RunNotifyComponentWithMessageCenterRequest &request);

      /**
       * @summary Sends a message from a notification component using a webhook.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of response orchestration. This feature is billed based on the log traffic for threat analysis and response.
       *
       * @param request RunNotifyComponentWithWebhookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunNotifyComponentWithWebhookResponse
       */
      Models::RunNotifyComponentWithWebhookResponse runNotifyComponentWithWebhookWithOptions(const Models::RunNotifyComponentWithWebhookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message from a notification component using a webhook.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of response orchestration. This feature is billed based on the log traffic for threat analysis and response.
       *
       * @param request RunNotifyComponentWithWebhookRequest
       * @return RunNotifyComponentWithWebhookResponse
       */
      Models::RunNotifyComponentWithWebhookResponse runNotifyComponentWithWebhook(const Models::RunNotifyComponentWithWebhookRequest &request);

      /**
       * @summary Executes a Python 3 code snippet for data processing.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product.
       *
       * @param request RunPython3ScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunPython3ScriptResponse
       */
      Models::RunPython3ScriptResponse runPython3ScriptWithOptions(const Models::RunPython3ScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a Python 3 code snippet for data processing.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product.
       *
       * @param request RunPython3ScriptRequest
       * @return RunPython3ScriptResponse
       */
      Models::RunPython3ScriptResponse runPython3Script(const Models::RunPython3ScriptRequest &request);

      /**
       * @summary Triggers an enabled custom or predefined playbook.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of Response Orchestration.
       *
       * @param request TriggerPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerPlaybookResponse
       */
      Models::TriggerPlaybookResponse triggerPlaybookWithOptions(const Models::TriggerPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers an enabled custom or predefined playbook.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of Response Orchestration.
       *
       * @param request TriggerPlaybookRequest
       * @return TriggerPlaybookResponse
       */
      Models::TriggerPlaybookResponse triggerPlaybook(const Models::TriggerPlaybookRequest &request);

      /**
       * @summary When an event is handled using response orchestration, the response center creates a task. Perform follow-up actions on the task, such as unblocking, retrying a block, and removing from isolation.
       *
       * @param request TriggerProcessTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerProcessTaskResponse
       */
      Models::TriggerProcessTaskResponse triggerProcessTaskWithOptions(const Models::TriggerProcessTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary When an event is handled using response orchestration, the response center creates a task. Perform follow-up actions on the task, such as unblocking, retrying a block, and removing from isolation.
       *
       * @param request TriggerProcessTaskRequest
       * @return TriggerProcessTaskResponse
       */
      Models::TriggerProcessTaskResponse triggerProcessTask(const Models::TriggerProcessTaskRequest &request);

      /**
       * @summary Triggers a playbook or a response command.
       *
       * @description Make sure that you are familiar with the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of Security Orchestration Automation Response (SOAR) before you call this operation.
       *
       * @param request TriggerSophonPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerSophonPlaybookResponse
       */
      Models::TriggerSophonPlaybookResponse triggerSophonPlaybookWithOptions(const Models::TriggerSophonPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers a playbook or a response command.
       *
       * @description Make sure that you are familiar with the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of Security Orchestration Automation Response (SOAR) before you call this operation.
       *
       * @param request TriggerSophonPlaybookRequest
       * @return TriggerSophonPlaybookResponse
       */
      Models::TriggerSophonPlaybookResponse triggerSophonPlaybook(const Models::TriggerSophonPlaybookRequest &request);

      /**
       * @summary Verifies that a playbook configuration is correct and its orchestration logic is valid.
       *
       * @param request VerifyPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyPlaybookResponse
       */
      Models::VerifyPlaybookResponse verifyPlaybookWithOptions(const Models::VerifyPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies that a playbook configuration is correct and its orchestration logic is valid.
       *
       * @param request VerifyPlaybookRequest
       * @return VerifyPlaybookResponse
       */
      Models::VerifyPlaybookResponse verifyPlaybook(const Models::VerifyPlaybookRequest &request);

      /**
       * @summary Verifies the syntax of a Python code snippet.
       *
       * @param request VerifyPythonFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyPythonFileResponse
       */
      Models::VerifyPythonFileResponse verifyPythonFileWithOptions(const Models::VerifyPythonFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the syntax of a Python code snippet.
       *
       * @param request VerifyPythonFileRequest
       * @return VerifyPythonFileResponse
       */
      Models::VerifyPythonFileResponse verifyPythonFile(const Models::VerifyPythonFileRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
