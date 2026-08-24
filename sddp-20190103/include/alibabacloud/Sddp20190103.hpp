// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SDDP20190103_HPP_
#define ALIBABACLOUD_SDDP20190103_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Sddp20190103Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Sddp20190103.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Modifies the general alert configuration parameters.
       *
       * @description Creates or restores configurations based on the codes of common alert configuration items, allowing you to manage these configurations.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConfigResponse
       */
      Models::CreateConfigResponse createConfigWithOptions(const Models::CreateConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the general alert configuration parameters.
       *
       * @description Creates or restores configurations based on the codes of common alert configuration items, allowing you to manage these configurations.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateConfigRequest
       * @return CreateConfigResponse
       */
      Models::CreateConfigResponse createConfig(const Models::CreateConfigRequest &request);

      /**
       * @summary Creates a scan authorization for a database, project, or Object Storage Service (OSS) bucket.
       *
       * @description This operation is used to authorize scanning of data assets to further protect the data security of your data assets.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request CreateDataLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLimitResponse
       */
      Models::CreateDataLimitResponse createDataLimitWithOptions(const Models::CreateDataLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scan authorization for a database, project, or Object Storage Service (OSS) bucket.
       *
       * @description This operation is used to authorize scanning of data assets to further protect the data security of your data assets.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request CreateDataLimitRequest
       * @return CreateDataLimitResponse
       */
      Models::CreateDataLimitResponse createDataLimit(const Models::CreateDataLimitRequest &request);

      /**
       * @summary Creates a custom sensitive data detection rule by calling CreateRule.
       *
       * @param request CreateRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRuleResponse
       */
      Models::CreateRuleResponse createRuleWithOptions(const Models::CreateRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom sensitive data detection rule by calling CreateRule.
       *
       * @param request CreateRuleRequest
       * @return CreateRuleResponse
       */
      Models::CreateRuleResponse createRule(const Models::CreateRuleRequest &request);

      /**
       * @summary Calls the CreateScanTask operation to create a custom scan task for detecting sensitive data in assets that have been successfully authorized for detection.
       *
       * @description This operation is applicable to users who want to create custom scan tasks for authorized assets. It allows users to flexibly control the interval between scan tasks and the runtime of each scan task.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request CreateScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScanTaskResponse
       */
      Models::CreateScanTaskResponse createScanTaskWithOptions(const Models::CreateScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateScanTask operation to create a custom scan task for detecting sensitive data in assets that have been successfully authorized for detection.
       *
       * @description This operation is applicable to users who want to create custom scan tasks for authorized assets. It allows users to flexibly control the interval between scan tasks and the runtime of each scan task.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request CreateScanTaskRequest
       * @return CreateScanTaskResponse
       */
      Models::CreateScanTaskResponse createScanTask(const Models::CreateScanTaskRequest &request);

      /**
       * @summary Call CreateSlrRole to create a service-linked role for Data Security Center (DSC). This role authorizes DSC to access your cloud resources.
       *
       * @description This operation allows DSC to access the resources of Alibaba Cloud services such as OSS, RDS, and MaxCompute. After you call this operation, the system automatically creates a service-linked role. The role is named AliyunServiceRoleForSDDP, and its access policy is AliyunServiceRolePolicyForSDDP.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, API calls are throttled, which can affect your business. Call this operation at a reasonable rate.
       *
       * @param request CreateSlrRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSlrRoleResponse
       */
      Models::CreateSlrRoleResponse createSlrRoleWithOptions(const Models::CreateSlrRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call CreateSlrRole to create a service-linked role for Data Security Center (DSC). This role authorizes DSC to access your cloud resources.
       *
       * @description This operation allows DSC to access the resources of Alibaba Cloud services such as OSS, RDS, and MaxCompute. After you call this operation, the system automatically creates a service-linked role. The role is named AliyunServiceRoleForSDDP, and its access policy is AliyunServiceRolePolicyForSDDP.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, API calls are throttled, which can affect your business. Call this operation at a reasonable rate.
       *
       * @param request CreateSlrRoleRequest
       * @return CreateSlrRoleResponse
       */
      Models::CreateSlrRoleResponse createSlrRole(const Models::CreateSlrRoleRequest &request);

      /**
       * @summary Deletes authorized data assets such as databases, instances, or buckets from connection authorization.
       *
       * @description This operation is used to revoke authorization for data assets that a user has authorized, facilitating authorization management.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DeleteDataLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLimitResponse
       */
      Models::DeleteDataLimitResponse deleteDataLimitWithOptions(const Models::DeleteDataLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes authorized data assets such as databases, instances, or buckets from connection authorization.
       *
       * @description This operation is used to revoke authorization for data assets that a user has authorized, facilitating authorization management.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DeleteDataLimitRequest
       * @return DeleteDataLimitResponse
       */
      Models::DeleteDataLimitResponse deleteDataLimit(const Models::DeleteDataLimitRequest &request);

      /**
       * @summary Deletes a custom sensitive data detection rule.
       *
       * @param request DeleteRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRuleWithOptions(const Models::DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom sensitive data detection rule.
       *
       * @param request DeleteRuleRequest
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRule(const Models::DeleteRuleRequest &request);

      /**
       * @summary Queries the list of audit alert logs.
       *
       * @description This operation is used to query the list of data audit alert logs, which facilitates alerting search and alerting handling.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation at an appropriate frequency.
       *
       * @param request DescribeAuditLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditLogsResponse
       */
      Models::DescribeAuditLogsResponse describeAuditLogsWithOptions(const Models::DescribeAuditLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of audit alert logs.
       *
       * @description This operation is used to query the list of data audit alert logs, which facilitates alerting search and alerting handling.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation at an appropriate frequency.
       *
       * @param request DescribeAuditLogsRequest
       * @return DescribeAuditLogsResponse
       */
      Models::DescribeAuditLogsResponse describeAuditLogs(const Models::DescribeAuditLogsRequest &request);

      /**
       * @summary Queries the list of industry templates.
       *
       * @param request DescribeCategoryTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCategoryTemplateListResponse
       */
      Models::DescribeCategoryTemplateListResponse describeCategoryTemplateListWithOptions(const Models::DescribeCategoryTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of industry templates.
       *
       * @param request DescribeCategoryTemplateListRequest
       * @return DescribeCategoryTemplateListResponse
       */
      Models::DescribeCategoryTemplateListResponse describeCategoryTemplateList(const Models::DescribeCategoryTemplateListRequest &request);

      /**
       * @summary Queries a paginated list of rules in a data classification template.
       *
       * @description Retrieves the rules in a data classification template to help you review the rule details.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user on this operation is 10 calls per second. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeCategoryTemplateRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCategoryTemplateRuleListResponse
       */
      Models::DescribeCategoryTemplateRuleListResponse describeCategoryTemplateRuleListWithOptions(const Models::DescribeCategoryTemplateRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a paginated list of rules in a data classification template.
       *
       * @description Retrieves the rules in a data classification template to help you review the rule details.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user on this operation is 10 calls per second. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeCategoryTemplateRuleListRequest
       * @return DescribeCategoryTemplateRuleListResponse
       */
      Models::DescribeCategoryTemplateRuleListResponse describeCategoryTemplateRuleList(const Models::DescribeCategoryTemplateRuleListRequest &request);

      /**
       * @summary Queries column data in data asset tables, such as MaxCompute and ApsaraDB RDS tables, that are authorized for connection by Data Security Center.
       *
       * @description This operation is used to view column data in sensitive data asset tables, which helps you accurately analyze sensitive data.
       * ## Notes
       * The DescribeColumns operation has been revised to DescribeColumnsV2. Use the newer version DescribeColumnsV2 when developing applications.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnsResponse
       */
      Models::DescribeColumnsResponse describeColumnsWithOptions(const Models::DescribeColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries column data in data asset tables, such as MaxCompute and ApsaraDB RDS tables, that are authorized for connection by Data Security Center.
       *
       * @description This operation is used to view column data in sensitive data asset tables, which helps you accurately analyze sensitive data.
       * ## Notes
       * The DescribeColumns operation has been revised to DescribeColumnsV2. Use the newer version DescribeColumnsV2 when developing applications.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeColumnsRequest
       * @return DescribeColumnsResponse
       */
      Models::DescribeColumnsResponse describeColumns(const Models::DescribeColumnsRequest &request);

      /**
       * @summary Queries column data in data asset tables, such as MaxCompute and ApsaraDB RDS tables, that are connected to and authorized by Data Security Center.
       *
       * @param request DescribeColumnsV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnsV2Response
       */
      Models::DescribeColumnsV2Response describeColumnsV2WithOptions(const Models::DescribeColumnsV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries column data in data asset tables, such as MaxCompute and ApsaraDB RDS tables, that are connected to and authorized by Data Security Center.
       *
       * @param request DescribeColumnsV2Request
       * @return DescribeColumnsV2Response
       */
      Models::DescribeColumnsV2Response describeColumnsV2(const Models::DescribeColumnsV2Request &request);

      /**
       * @summary Queries common configuration items for anomaly alerts.
       *
       * @description # Usage notes
       * Queries common configuration items for anomaly alerts, which you can use to create or restore alert configurations.
       * # QPS limit
       * The maximum number of queries per second (QPS) per user is 10. If this limit is exceeded, API calls are throttled. This may impact your business. Call this operation only as needed.
       *
       * @param request DescribeConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConfigsResponse
       */
      Models::DescribeConfigsResponse describeConfigsWithOptions(const Models::DescribeConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries common configuration items for anomaly alerts.
       *
       * @description # Usage notes
       * Queries common configuration items for anomaly alerts, which you can use to create or restore alert configurations.
       * # QPS limit
       * The maximum number of queries per second (QPS) per user is 10. If this limit is exceeded, API calls are throttled. This may impact your business. Call this operation only as needed.
       *
       * @param request DescribeConfigsRequest
       * @return DescribeConfigsResponse
       */
      Models::DescribeConfigsResponse describeConfigs(const Models::DescribeConfigsRequest &request);

      /**
       * @summary Searches for data assets on the Overview page of Data Security Center (DSC).
       *
       * @description This operation is typically used to query data assets of different types on the overview page of DSC.
       * ## Usage notes
       * This operation is deprecated and no longer maintained.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeDataAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataAssetsResponse
       */
      Models::DescribeDataAssetsResponse describeDataAssetsWithOptions(const Models::DescribeDataAssetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for data assets on the Overview page of Data Security Center (DSC).
       *
       * @description This operation is typically used to query data assets of different types on the overview page of DSC.
       * ## Usage notes
       * This operation is deprecated and no longer maintained.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeDataAssetsRequest
       * @return DescribeDataAssetsResponse
       */
      Models::DescribeDataAssetsResponse describeDataAssets(const Models::DescribeDataAssetsRequest &request);

      /**
       * @summary Retrieves the details of an authorized data asset, such as a MaxCompute project, ApsaraDB RDS database, or OSS bucket.
       *
       * @param request DescribeDataLimitDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataLimitDetailResponse
       */
      Models::DescribeDataLimitDetailResponse describeDataLimitDetailWithOptions(const Models::DescribeDataLimitDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an authorized data asset, such as a MaxCompute project, ApsaraDB RDS database, or OSS bucket.
       *
       * @param request DescribeDataLimitDetailRequest
       * @return DescribeDataLimitDetailResponse
       */
      Models::DescribeDataLimitDetailResponse describeDataLimitDetail(const Models::DescribeDataLimitDetailRequest &request);

      /**
       * @summary Call the DescribeDataLimitSet operation to query the authorization list for unstructured assets or the list of regions supported by Data Security Center.
       *
       * @description Use this operation to retrieve a list of authorized product assets. This list helps you search for and aggregate resources.
       * ## Notes
       * In the future, this operation will be used only to retrieve the list of regions that a product supports. Other features will no longer be maintained.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. API calls that exceed this limit are throttled. Throttling can affect your business. We recommend that you call this operation a reasonable number of times.
       *
       * @param request DescribeDataLimitSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataLimitSetResponse
       */
      Models::DescribeDataLimitSetResponse describeDataLimitSetWithOptions(const Models::DescribeDataLimitSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeDataLimitSet operation to query the authorization list for unstructured assets or the list of regions supported by Data Security Center.
       *
       * @description Use this operation to retrieve a list of authorized product assets. This list helps you search for and aggregate resources.
       * ## Notes
       * In the future, this operation will be used only to retrieve the list of regions that a product supports. Other features will no longer be maintained.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. API calls that exceed this limit are throttled. Throttling can affect your business. We recommend that you call this operation a reasonable number of times.
       *
       * @param request DescribeDataLimitSetRequest
       * @return DescribeDataLimitSetResponse
       */
      Models::DescribeDataLimitSetResponse describeDataLimitSet(const Models::DescribeDataLimitSetRequest &request);

      /**
       * @summary Queries the list of data assets, including authorized instances, databases, and buckets.
       *
       * @param request DescribeDataLimitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataLimitsResponse
       */
      Models::DescribeDataLimitsResponse describeDataLimitsWithOptions(const Models::DescribeDataLimitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of data assets, including authorized instances, databases, and buckets.
       *
       * @param request DescribeDataLimitsRequest
       * @return DescribeDataLimitsResponse
       */
      Models::DescribeDataLimitsResponse describeDataLimits(const Models::DescribeDataLimitsRequest &request);

      /**
       * @summary Queries the execution history of data masking tasks.
       *
       * @description This operation is used to retrieve the execution status of static data masking tasks, allowing you to search for task statuses and view task progress.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeDataMaskingRunHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataMaskingRunHistoryResponse
       */
      Models::DescribeDataMaskingRunHistoryResponse describeDataMaskingRunHistoryWithOptions(const Models::DescribeDataMaskingRunHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution history of data masking tasks.
       *
       * @description This operation is used to retrieve the execution status of static data masking tasks, allowing you to search for task statuses and view task progress.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeDataMaskingRunHistoryRequest
       * @return DescribeDataMaskingRunHistoryResponse
       */
      Models::DescribeDataMaskingRunHistoryResponse describeDataMaskingRunHistory(const Models::DescribeDataMaskingRunHistoryRequest &request);

      /**
       * @summary Queries the list of static data masking tasks.
       *
       * @description This operation is used to retrieve the list of static data masking tasks for search and task management purposes.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request DescribeDataMaskingTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataMaskingTasksResponse
       */
      Models::DescribeDataMaskingTasksResponse describeDataMaskingTasksWithOptions(const Models::DescribeDataMaskingTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of static data masking tasks.
       *
       * @description This operation is used to retrieve the list of static data masking tasks for search and task management purposes.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request DescribeDataMaskingTasksRequest
       * @return DescribeDataMaskingTasksResponse
       */
      Models::DescribeDataMaskingTasksResponse describeDataMaskingTasks(const Models::DescribeDataMaskingTasksRequest &request);

      /**
       * @summary Queries the column detection results of a data table.
       *
       * @description ## Before you begin
       * The DescribeDataObjectColumnDetail operation has been revised to DescribeDataObjectColumnDetailV2. Use the newer version DescribeDataObjectColumnDetailV2 when developing applications.
       *
       * @param request DescribeDataObjectColumnDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataObjectColumnDetailResponse
       */
      Models::DescribeDataObjectColumnDetailResponse describeDataObjectColumnDetailWithOptions(const Models::DescribeDataObjectColumnDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the column detection results of a data table.
       *
       * @description ## Before you begin
       * The DescribeDataObjectColumnDetail operation has been revised to DescribeDataObjectColumnDetailV2. Use the newer version DescribeDataObjectColumnDetailV2 when developing applications.
       *
       * @param request DescribeDataObjectColumnDetailRequest
       * @return DescribeDataObjectColumnDetailResponse
       */
      Models::DescribeDataObjectColumnDetailResponse describeDataObjectColumnDetail(const Models::DescribeDataObjectColumnDetailRequest &request);

      /**
       * @summary Queries the column detection results of a data table.
       *
       * @param request DescribeDataObjectColumnDetailV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataObjectColumnDetailV2Response
       */
      Models::DescribeDataObjectColumnDetailV2Response describeDataObjectColumnDetailV2WithOptions(const Models::DescribeDataObjectColumnDetailV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the column detection results of a data table.
       *
       * @param request DescribeDataObjectColumnDetailV2Request
       * @return DescribeDataObjectColumnDetailV2Response
       */
      Models::DescribeDataObjectColumnDetailV2Response describeDataObjectColumnDetailV2(const Models::DescribeDataObjectColumnDetailV2Request &request);

      /**
       * @summary Queries the data detection results of data tables and files.
       *
       * @description Queries the detection results of data tables and files, allowing you to view asset data detection results from a global perspective.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeDataObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataObjectsResponse
       */
      Models::DescribeDataObjectsResponse describeDataObjectsWithOptions(const Models::DescribeDataObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data detection results of data tables and files.
       *
       * @description Queries the detection results of data tables and files, allowing you to view asset data detection results from a global perspective.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeDataObjectsRequest
       * @return DescribeDataObjectsResponse
       */
      Models::DescribeDataObjectsResponse describeDataObjects(const Models::DescribeDataObjectsRequest &request);

      /**
       * @summary Queries the list of OSS file types that can be detected.
       *
       * @param request DescribeDocTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocTypesResponse
       */
      Models::DescribeDocTypesResponse describeDocTypesWithOptions(const Models::DescribeDocTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of OSS file types that can be detected.
       *
       * @param request DescribeDocTypesRequest
       * @return DescribeDocTypesResponse
       */
      Models::DescribeDocTypesResponse describeDocTypes(const Models::DescribeDocTypesRequest &request);

      /**
       * @summary Queries the details of a single anomalous activity, including the time when the anomalous activity occurred, the anomaly description, and the handling status.
       *
       * @param request DescribeEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventDetailResponse
       */
      Models::DescribeEventDetailResponse describeEventDetailWithOptions(const Models::DescribeEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a single anomalous activity, including the time when the anomalous activity occurred, the anomaly description, and the handling status.
       *
       * @param request DescribeEventDetailRequest
       * @return DescribeEventDetailResponse
       */
      Models::DescribeEventDetailResponse describeEventDetail(const Models::DescribeEventDetailRequest &request);

      /**
       * @summary Queries anomalous activity types.
       *
       * @param request DescribeEventTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventTypesResponse
       */
      Models::DescribeEventTypesResponse describeEventTypesWithOptions(const Models::DescribeEventTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries anomalous activity types.
       *
       * @param request DescribeEventTypesRequest
       * @return DescribeEventTypesResponse
       */
      Models::DescribeEventTypesResponse describeEventTypes(const Models::DescribeEventTypesRequest &request);

      /**
       * @summary Lists anomalous events.
       *
       * @description This operation queries alerts for data breach risks to help you find and handle them.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, your API calls are throttled. This may affect your business. Plan your API calls accordingly.
       *
       * @param request DescribeEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEventsWithOptions(const Models::DescribeEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists anomalous events.
       *
       * @description This operation queries alerts for data breach risks to help you find and handle them.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, your API calls are throttled. This may affect your business. Plan your API calls accordingly.
       *
       * @param request DescribeEventsRequest
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEvents(const Models::DescribeEventsRequest &request);

      /**
       * @summary Queries the completion status of a detection task by task ID. You can obtain the task ID from the ID field in the response of the CreateScanTask or ScanOssObjectV1 operation.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeIdentifyTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIdentifyTaskStatusResponse
       */
      Models::DescribeIdentifyTaskStatusResponse describeIdentifyTaskStatusWithOptions(const Models::DescribeIdentifyTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the completion status of a detection task by task ID. You can obtain the task ID from the ID field in the response of the CreateScanTask or ScanOssObjectV1 operation.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeIdentifyTaskStatusRequest
       * @return DescribeIdentifyTaskStatusResponse
       */
      Models::DescribeIdentifyTaskStatusResponse describeIdentifyTaskStatus(const Models::DescribeIdentifyTaskStatusRequest &request);

      /**
       * @summary Queries a list of data assets.
       *
       * @description Queries the list of authorized or unauthorized data assets based on the AuthStatus parameter to help you understand the authorization status of your data assets.
       * This operation is no longer used in the new console.
       * ## QPS limit
       * Each user can call this operation up to 10 times per second. If this limit is exceeded, API calls are throttled, which may affect your business.
       *
       * @param request DescribeInstanceSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSourcesResponse
       */
      Models::DescribeInstanceSourcesResponse describeInstanceSourcesWithOptions(const Models::DescribeInstanceSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data assets.
       *
       * @description Queries the list of authorized or unauthorized data assets based on the AuthStatus parameter to help you understand the authorization status of your data assets.
       * This operation is no longer used in the new console.
       * ## QPS limit
       * Each user can call this operation up to 10 times per second. If this limit is exceeded, API calls are throttled, which may affect your business.
       *
       * @param request DescribeInstanceSourcesRequest
       * @return DescribeInstanceSourcesResponse
       */
      Models::DescribeInstanceSourcesResponse describeInstanceSources(const Models::DescribeInstanceSourcesRequest &request);

      /**
       * @summary Retrieves the list of data asset instances for authorized MaxCompute, ApsaraDB RDS, and OSS connections.
       *
       * @description When you call the DescribeInstances operation, you can set parameters such as search keywords and risk levels of data asset instances to retrieve a list of data asset instances that meet the specified conditions.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of data asset instances for authorized MaxCompute, ApsaraDB RDS, and OSS connections.
       *
       * @description When you call the DescribeInstances operation, you can set parameters such as search keywords and risk levels of data asset instances to retrieve a list of data asset instances that meet the specified conditions.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Queries the details of a single OSS storage object that is authorized for connection in Data Security Center.
       *
       * @description This operation is used to query the details of an OSS storage object, which helps you accurately locate sensitive asset information in OSS.
       * ## Before you begin
       * The DescribeOssObjectDetail operation has been revised to DescribeOssObjectDetailV2. Use the newer version DescribeOssObjectDetailV2 when developing applications.
       * ## Rate limit
       * The single-user queries per second (QPS) limit for this operation is 10. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Call this operation as appropriate.
       *
       * @param request DescribeOssObjectDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssObjectDetailResponse
       */
      Models::DescribeOssObjectDetailResponse describeOssObjectDetailWithOptions(const Models::DescribeOssObjectDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a single OSS storage object that is authorized for connection in Data Security Center.
       *
       * @description This operation is used to query the details of an OSS storage object, which helps you accurately locate sensitive asset information in OSS.
       * ## Before you begin
       * The DescribeOssObjectDetail operation has been revised to DescribeOssObjectDetailV2. Use the newer version DescribeOssObjectDetailV2 when developing applications.
       * ## Rate limit
       * The single-user queries per second (QPS) limit for this operation is 10. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Call this operation as appropriate.
       *
       * @param request DescribeOssObjectDetailRequest
       * @return DescribeOssObjectDetailResponse
       */
      Models::DescribeOssObjectDetailResponse describeOssObjectDetail(const Models::DescribeOssObjectDetailRequest &request);

      /**
       * @summary Queries the details of a single storage object in OSS that is authorized for connection to Data Security Center.
       *
       * @description This operation is used to query the details of an OSS storage object, which helps you accurately locate sensitive asset information in OSS.
       *
       * @param request DescribeOssObjectDetailV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssObjectDetailV2Response
       */
      Models::DescribeOssObjectDetailV2Response describeOssObjectDetailV2WithOptions(const Models::DescribeOssObjectDetailV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a single storage object in OSS that is authorized for connection to Data Security Center.
       *
       * @description This operation is used to query the details of an OSS storage object, which helps you accurately locate sensitive asset information in OSS.
       *
       * @param request DescribeOssObjectDetailV2Request
       * @return DescribeOssObjectDetailV2Response
       */
      Models::DescribeOssObjectDetailV2Response describeOssObjectDetailV2(const Models::DescribeOssObjectDetailV2Request &request);

      /**
       * @summary Lists authorized OSS objects.
       *
       * @param request DescribeOssObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssObjectsResponse
       */
      Models::DescribeOssObjectsResponse describeOssObjectsWithOptions(const Models::DescribeOssObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists authorized OSS objects.
       *
       * @param request DescribeOssObjectsRequest
       * @return DescribeOssObjectsResponse
       */
      Models::DescribeOssObjectsResponse describeOssObjects(const Models::DescribeOssObjectsRequest &request);

      /**
       * @summary Retrieves information about MaxCompute packages authorized for scanning, including package names, owner accounts, and risk levels.
       *
       * @description This API is typically used to query a list of MaxCompute packages. This helps you search for packages and obtain an overview of sensitive information.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, your API calls are throttled. This can affect your business. Make sure to call this API within the limit.
       *
       * @param request DescribePackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePackagesResponse
       */
      Models::DescribePackagesResponse describePackagesWithOptions(const Models::DescribePackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about MaxCompute packages authorized for scanning, including package names, owner accounts, and risk levels.
       *
       * @description This API is typically used to query a list of MaxCompute packages. This helps you search for packages and obtain an overview of sensitive information.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, your API calls are throttled. This can affect your business. Make sure to call this API within the limit.
       *
       * @param request DescribePackagesRequest
       * @return DescribePackagesResponse
       */
      Models::DescribePackagesResponse describePackages(const Models::DescribePackagesRequest &request);

      /**
       * @summary Queries the list of authorized or unauthorized assets.
       *
       * @param request DescribeParentInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParentInstanceResponse
       */
      Models::DescribeParentInstanceResponse describeParentInstanceWithOptions(const Models::DescribeParentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of authorized or unauthorized assets.
       *
       * @param request DescribeParentInstanceRequest
       * @return DescribeParentInstanceResponse
       */
      Models::DescribeParentInstanceResponse describeParentInstance(const Models::DescribeParentInstanceRequest &request);

      /**
       * @summary Call the DescribeRiskLevels operation to retrieve a list of risk levels for sensitive data.
       *
       * @description You can use this operation to retrieve a list of risk levels for sensitive data that are defined in the current template. This lets you view the number of rules that reference each risk level and the maximum risk level in the template.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second for a single user. If you exceed this limit, your API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeRiskLevelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskLevelsResponse
       */
      Models::DescribeRiskLevelsResponse describeRiskLevelsWithOptions(const Models::DescribeRiskLevelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeRiskLevels operation to retrieve a list of risk levels for sensitive data.
       *
       * @description You can use this operation to retrieve a list of risk levels for sensitive data that are defined in the current template. This lets you view the number of rules that reference each risk level and the maximum risk level in the template.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second for a single user. If you exceed this limit, your API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeRiskLevelsRequest
       * @return DescribeRiskLevelsResponse
       */
      Models::DescribeRiskLevelsResponse describeRiskLevels(const Models::DescribeRiskLevelsRequest &request);

      /**
       * @summary Queries a list of sensitive data detection rules.
       *
       * @param request DescribeRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRulesResponse
       */
      Models::DescribeRulesResponse describeRulesWithOptions(const Models::DescribeRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of sensitive data detection rules.
       *
       * @param request DescribeRulesRequest
       * @return DescribeRulesResponse
       */
      Models::DescribeRulesResponse describeRules(const Models::DescribeRulesRequest &request);

      /**
       * @summary Queries tables in data assets, such as MaxCompute and RDS, that Data Security Center is authorized to access.
       *
       * @description You can call the DescribeTables operation to retrieve information about specific data asset tables. You can specify parameters such as search keywords and risk levels.
       * ## QPS limits
       * Each Alibaba Cloud account can call this operation up to 10 times per second. If you exceed this limit, throttling is triggered, which may affect your business. We recommend that you call this operation at a sustainable rate.
       *
       * @param request DescribeTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTablesResponse
       */
      Models::DescribeTablesResponse describeTablesWithOptions(const Models::DescribeTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tables in data assets, such as MaxCompute and RDS, that Data Security Center is authorized to access.
       *
       * @description You can call the DescribeTables operation to retrieve information about specific data asset tables. You can specify parameters such as search keywords and risk levels.
       * ## QPS limits
       * Each Alibaba Cloud account can call this operation up to 10 times per second. If you exceed this limit, throttling is triggered, which may affect your business. We recommend that you call this operation at a sustainable rate.
       *
       * @param request DescribeTablesRequest
       * @return DescribeTablesResponse
       */
      Models::DescribeTablesResponse describeTables(const Models::DescribeTablesRequest &request);

      /**
       * @summary Lists all rules in an industry-specific template.
       *
       * @param request DescribeTemplateAllRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplateAllRulesResponse
       */
      Models::DescribeTemplateAllRulesResponse describeTemplateAllRulesWithOptions(const Models::DescribeTemplateAllRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all rules in an industry-specific template.
       *
       * @param request DescribeTemplateAllRulesRequest
       * @return DescribeTemplateAllRulesResponse
       */
      Models::DescribeTemplateAllRulesResponse describeTemplateAllRules(const Models::DescribeTemplateAllRulesRequest &request);

      /**
       * @summary Queries the status of a user account by calling DescribeUserStatus.
       *
       * @description Queries information about the current logon account. This helps you gain a comprehensive understanding of the effectiveness of Data Security Center (DSC).
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request DescribeUserStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserStatusResponse
       */
      Models::DescribeUserStatusResponse describeUserStatusWithOptions(const Models::DescribeUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a user account by calling DescribeUserStatus.
       *
       * @description Queries information about the current logon account. This helps you gain a comprehensive understanding of the effectiveness of Data Security Center (DSC).
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request DescribeUserStatusRequest
       * @return DescribeUserStatusResponse
       */
      Models::DescribeUserStatusResponse describeUserStatus(const Models::DescribeUserStatusRequest &request);

      /**
       * @summary Calls the DisableUserConfig operation to disable a user configuration. After the user configuration is disabled, you can call the CreateConfig operation with the same request parameter Code to restore the anomaly alert general configuration for the configuration item.
       *
       * @description This operation is used to disable a user configuration based on the code of a configuration item in the anomaly alert general configuration module, allowing you to promptly modify the effective status of the user configuration.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DisableUserConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableUserConfigResponse
       */
      Models::DisableUserConfigResponse disableUserConfigWithOptions(const Models::DisableUserConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DisableUserConfig operation to disable a user configuration. After the user configuration is disabled, you can call the CreateConfig operation with the same request parameter Code to restore the anomaly alert general configuration for the configuration item.
       *
       * @description This operation is used to disable a user configuration based on the code of a configuration item in the anomaly alert general configuration module, allowing you to promptly modify the effective status of the user configuration.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DisableUserConfigRequest
       * @return DisableUserConfigResponse
       */
      Models::DisableUserConfigResponse disableUserConfig(const Models::DisableUserConfigRequest &request);

      /**
       * @summary You can call the ExecDatamask operation to dynamically mask data.
       *
       * @param request ExecDatamaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecDatamaskResponse
       */
      Models::ExecDatamaskResponse execDatamaskWithOptions(const Models::ExecDatamaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ExecDatamask operation to dynamically mask data.
       *
       * @param request ExecDatamaskRequest
       * @return ExecDatamaskResponse
       */
      Models::ExecDatamaskResponse execDatamask(const Models::ExecDatamaskRequest &request);

      /**
       * @summary Triggers a data masking task.
       *
       * @param request ManualTriggerMaskingProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManualTriggerMaskingProcessResponse
       */
      Models::ManualTriggerMaskingProcessResponse manualTriggerMaskingProcessWithOptions(const Models::ManualTriggerMaskingProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers a data masking task.
       *
       * @param request ManualTriggerMaskingProcessRequest
       * @return ManualTriggerMaskingProcessResponse
       */
      Models::ManualTriggerMaskingProcessResponse manualTriggerMaskingProcess(const Models::ManualTriggerMaskingProcessRequest &request);

      /**
       * @summary Use the MaskOssImage operation to mask images stored as objects.
       *
       * @description **Prerequisites**
       * To use this operation, you must have an image masking quota. Each call deducts one unit from your quota.
       * **QPS limit**
       * The QPS limit for a single user is 10. If you exceed this limit, API calls are throttled, which can affect your business. To prevent service disruptions, operate within this limit.
       * **Usage notes**
       * After masking is complete, the system stores the masked image in the aliyun_dsc_desensitization folder within the source bucket.
       * For example, an image at exampledir/test.png in a bucket is saved as aliyun_dsc_desensitization/exampledir/test.png after masking.
       * For more information, see https\\://help.aliyun.com/zh/dsc/data-security-center/user-guide/picture-desensitization
       *
       * @param request MaskOssImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MaskOssImageResponse
       */
      Models::MaskOssImageResponse maskOssImageWithOptions(const Models::MaskOssImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the MaskOssImage operation to mask images stored as objects.
       *
       * @description **Prerequisites**
       * To use this operation, you must have an image masking quota. Each call deducts one unit from your quota.
       * **QPS limit**
       * The QPS limit for a single user is 10. If you exceed this limit, API calls are throttled, which can affect your business. To prevent service disruptions, operate within this limit.
       * **Usage notes**
       * After masking is complete, the system stores the masked image in the aliyun_dsc_desensitization folder within the source bucket.
       * For example, an image at exampledir/test.png in a bucket is saved as aliyun_dsc_desensitization/exampledir/test.png after masking.
       * For more information, see https\\://help.aliyun.com/zh/dsc/data-security-center/user-guide/picture-desensitization
       *
       * @param request MaskOssImageRequest
       * @return MaskOssImageResponse
       */
      Models::MaskOssImageResponse maskOssImage(const Models::MaskOssImageRequest &request);

      /**
       * @summary Modifies the configuration items of a Data Security Center (DSC) connection authorization.
       *
       * @param request ModifyDataLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataLimitResponse
       */
      Models::ModifyDataLimitResponse modifyDataLimitWithOptions(const Models::ModifyDataLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration items of a Data Security Center (DSC) connection authorization.
       *
       * @param request ModifyDataLimitRequest
       * @return ModifyDataLimitResponse
       */
      Models::ModifyDataLimitResponse modifyDataLimit(const Models::ModifyDataLimitRequest &request);

      /**
       * @summary Modifies the risk level definition rules for sensitive data, including the default risk level for unrecognized data and the risk level for data classified as "sensitive".
       *
       * @description This operation is used to modify the risk level definition rules for sensitive data, which helps you plan risk levels.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request ModifyDefaultLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefaultLevelResponse
       */
      Models::ModifyDefaultLevelResponse modifyDefaultLevelWithOptions(const Models::ModifyDefaultLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the risk level definition rules for sensitive data, including the default risk level for unrecognized data and the risk level for data classified as "sensitive".
       *
       * @description This operation is used to modify the risk level definition rules for sensitive data, which helps you plan risk levels.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request ModifyDefaultLevelRequest
       * @return ModifyDefaultLevelResponse
       */
      Models::ModifyDefaultLevelResponse modifyDefaultLevel(const Models::ModifyDefaultLevelRequest &request);

      /**
       * @summary Handles anomalous activities.
       *
       * @description This API operation is typically used to handle alerts for data breach threats, helping you protect your data assets promptly.
       * ## QPS limits
       * This API operation has a queries per second (QPS) limit of 10 for each user. If you exceed the limit, API calls are throttled, which can affect your business. We recommend calling the API operation at a reasonable rate.
       *
       * @param request ModifyEventStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEventStatusResponse
       */
      Models::ModifyEventStatusResponse modifyEventStatusWithOptions(const Models::ModifyEventStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handles anomalous activities.
       *
       * @description This API operation is typically used to handle alerts for data breach threats, helping you protect your data assets promptly.
       * ## QPS limits
       * This API operation has a queries per second (QPS) limit of 10 for each user. If you exceed the limit, API calls are throttled, which can affect your business. We recommend calling the API operation at a reasonable rate.
       *
       * @param request ModifyEventStatusRequest
       * @return ModifyEventStatusResponse
       */
      Models::ModifyEventStatusResponse modifyEventStatus(const Models::ModifyEventStatusRequest &request);

      /**
       * @summary Invokes this operation to enable the feature for detecting anomalous activity events of specified child classes.
       *
       * @param request ModifyEventTypeStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEventTypeStatusResponse
       */
      Models::ModifyEventTypeStatusResponse modifyEventTypeStatusWithOptions(const Models::ModifyEventTypeStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes this operation to enable the feature for detecting anomalous activity events of specified child classes.
       *
       * @param request ModifyEventTypeStatusRequest
       * @return ModifyEventTypeStatusResponse
       */
      Models::ModifyEventTypeStatusResponse modifyEventTypeStatus(const Models::ModifyEventTypeStatusRequest &request);

      /**
       * @summary You can call the ModifyReportTaskStatus operation to enable or disable report tasks.
       *
       * @description After you activate Data Security Center (DSC), report tasks are enabled by default. If you disable report tasks, Report Center, Cloud-native Data Audit Overview, and Data Security Lab will not generate new statistical data. Existing data is not affected.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request ModifyReportTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyReportTaskStatusResponse
       */
      Models::ModifyReportTaskStatusResponse modifyReportTaskStatusWithOptions(const Models::ModifyReportTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ModifyReportTaskStatus operation to enable or disable report tasks.
       *
       * @description After you activate Data Security Center (DSC), report tasks are enabled by default. If you disable report tasks, Report Center, Cloud-native Data Audit Overview, and Data Security Lab will not generate new statistical data. Existing data is not affected.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request ModifyReportTaskStatusRequest
       * @return ModifyReportTaskStatusResponse
       */
      Models::ModifyReportTaskStatusResponse modifyReportTaskStatus(const Models::ModifyReportTaskStatusRequest &request);

      /**
       * @summary Modifies a custom sensitive data detection rule in Data Security Center (DSC).
       *
       * @description When calling this operation, you must specify the rule name, rule ID, and rule content parameters.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request ModifyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRuleResponse
       */
      Models::ModifyRuleResponse modifyRuleWithOptions(const Models::ModifyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a custom sensitive data detection rule in Data Security Center (DSC).
       *
       * @description When calling this operation, you must specify the rule name, rule ID, and rule content parameters.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request ModifyRuleRequest
       * @return ModifyRuleResponse
       */
      Models::ModifyRuleResponse modifyRule(const Models::ModifyRuleRequest &request);

      /**
       * @summary Enables or disables the detection feature of a sensitive data detection rule.
       *
       * @param request ModifyRuleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRuleStatusResponse
       */
      Models::ModifyRuleStatusResponse modifyRuleStatusWithOptions(const Models::ModifyRuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the detection feature of a sensitive data detection rule.
       *
       * @param request ModifyRuleStatusRequest
       * @return ModifyRuleStatusResponse
       */
      Models::ModifyRuleStatusResponse modifyRuleStatus(const Models::ModifyRuleStatusRequest &request);

      /**
       * @summary Restores an image that has been masked by calling the RestoreOssImage operation.
       *
       * @description For files that were masked by calling MaskOssImage with IsAlwaysUpload set to true, you can call RestoreOssImage to retrieve the original image.
       * For example, the image aliyun_dsc_desensitization/exampledir/test.png in the bucket is stored as aliyun_dsc_original/exampledir/test.png after restoration.
       *
       * @param request RestoreOssImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreOssImageResponse
       */
      Models::RestoreOssImageResponse restoreOssImageWithOptions(const Models::RestoreOssImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores an image that has been masked by calling the RestoreOssImage operation.
       *
       * @description For files that were masked by calling MaskOssImage with IsAlwaysUpload set to true, you can call RestoreOssImage to retrieve the original image.
       * For example, the image aliyun_dsc_desensitization/exampledir/test.png in the bucket is stored as aliyun_dsc_original/exampledir/test.png after restoration.
       *
       * @param request RestoreOssImageRequest
       * @return RestoreOssImageResponse
       */
      Models::RestoreOssImageResponse restoreOssImage(const Models::RestoreOssImageRequest &request);

      /**
       * @summary The ScanOssObjectV1 operation creates a scan task to detect sensitive data in a specified object.
       *
       * @description ### Prerequisites
       * You must authorize and connect to the specified bucket before you call this operation. If the bucket is not authorized, the API call returns the bucket_not_authorized error code.
       * ### QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed the limit, API calls are throttled. This may affect your business. We recommend that you call the operation at a reasonable rate.
       * ### Usage notes
       * You can use the returned task ID to call the DescribeIdentifyTaskStatus operation to check the running status of the task.
       * After the task is complete, call the DescribeOssObjectDetailV2 operation and provide the BucketName, ServiceRegionId, and ObjectKey to view the sensitive data detection results for the object.
       *
       * @param tmpReq ScanOssObjectV1Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScanOssObjectV1Response
       */
      Models::ScanOssObjectV1Response scanOssObjectV1WithOptions(const Models::ScanOssObjectV1Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ScanOssObjectV1 operation creates a scan task to detect sensitive data in a specified object.
       *
       * @description ### Prerequisites
       * You must authorize and connect to the specified bucket before you call this operation. If the bucket is not authorized, the API call returns the bucket_not_authorized error code.
       * ### QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed the limit, API calls are throttled. This may affect your business. We recommend that you call the operation at a reasonable rate.
       * ### Usage notes
       * You can use the returned task ID to call the DescribeIdentifyTaskStatus operation to check the running status of the task.
       * After the task is complete, call the DescribeOssObjectDetailV2 operation and provide the BucketName, ServiceRegionId, and ObjectKey to view the sensitive data detection results for the object.
       *
       * @param request ScanOssObjectV1Request
       * @return ScanOssObjectV1Response
       */
      Models::ScanOssObjectV1Response scanOssObjectV1(const Models::ScanOssObjectV1Request &request);

      /**
       * @summary You can call the StopMaskingProcess operation to stop a data masking task. You can call the ManualTriggerMaskingProcess operation to restart a stopped task using its unique resource ID.
       *
       * @description This operation stops a running data masking task. For example, you can call this operation if you no longer need to mask data for a previously configured task.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled. This may affect your business. Ensure that you call this operation within the specified limit.
       *
       * @param request StopMaskingProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopMaskingProcessResponse
       */
      Models::StopMaskingProcessResponse stopMaskingProcessWithOptions(const Models::StopMaskingProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the StopMaskingProcess operation to stop a data masking task. You can call the ManualTriggerMaskingProcess operation to restart a stopped task using its unique resource ID.
       *
       * @description This operation stops a running data masking task. For example, you can call this operation if you no longer need to mask data for a previously configured task.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled. This may affect your business. Ensure that you call this operation within the specified limit.
       *
       * @param request StopMaskingProcessRequest
       * @return StopMaskingProcessResponse
       */
      Models::StopMaskingProcessResponse stopMaskingProcess(const Models::StopMaskingProcessRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
