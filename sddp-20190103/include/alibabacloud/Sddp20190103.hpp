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
       * @summary You can call the CreateDataLimit operation to grant permissions to scan databases, projects, and buckets.
       *
       * @description You can use this operation to grant permissions to scan your data assets. This helps improve the security of your data assets.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, the system throttles your API calls. This may affect your business. Plan your calls accordingly.
       *
       * @param request CreateDataLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLimitResponse
       */
      Models::CreateDataLimitResponse createDataLimitWithOptions(const Models::CreateDataLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the CreateDataLimit operation to grant permissions to scan databases, projects, and buckets.
       *
       * @description You can use this operation to grant permissions to scan your data assets. This helps improve the security of your data assets.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, the system throttles your API calls. This may affect your business. Plan your calls accordingly.
       *
       * @param request CreateDataLimitRequest
       * @return CreateDataLimitResponse
       */
      Models::CreateDataLimitResponse createDataLimit(const Models::CreateDataLimitRequest &request);

      /**
       * @summary Call CreateRule to create a custom sensitive data detection rule.
       *
       * @param request CreateRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRuleResponse
       */
      Models::CreateRuleResponse createRuleWithOptions(const Models::CreateRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call CreateRule to create a custom sensitive data detection rule.
       *
       * @param request CreateRuleRequest
       * @return CreateRuleResponse
       */
      Models::CreateRuleResponse createRule(const Models::CreateRuleRequest &request);

      /**
       * @summary You can call the CreateScanTask operation to create a custom scan task to detect sensitive data in authorized assets.
       *
       * @description This operation creates custom scan tasks for authorized assets. You can control the run interval and runtime of each scan task.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second for a single user. If you exceed this limit, API calls are throttled. This may impact your business. Plan your calls accordingly.
       *
       * @param request CreateScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScanTaskResponse
       */
      Models::CreateScanTaskResponse createScanTaskWithOptions(const Models::CreateScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the CreateScanTask operation to create a custom scan task to detect sensitive data in authorized assets.
       *
       * @description This operation creates custom scan tasks for authorized assets. You can control the run interval and runtime of each scan task.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second for a single user. If you exceed this limit, API calls are throttled. This may impact your business. Plan your calls accordingly.
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
       * @summary Revokes the scan authorization for a data asset, such as a database, instance, or bucket.
       *
       * @description This operation is typically used to revoke authorization for data assets. This helps you manage data access permissions.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled. This may affect your business. We recommend that you call this operation within this limit.
       *
       * @param request DeleteDataLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLimitResponse
       */
      Models::DeleteDataLimitResponse deleteDataLimitWithOptions(const Models::DeleteDataLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the scan authorization for a data asset, such as a database, instance, or bucket.
       *
       * @description This operation is typically used to revoke authorization for data assets. This helps you manage data access permissions.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled. This may affect your business. We recommend that you call this operation within this limit.
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
       * @summary Retrieves a list of audit alert logs.
       *
       * @description This operation queries a list of data audit alert logs, allowing you to search for and handle alerts.
       * ## QPS limit
       * The QPS limit for a single user is 10. If you exceed this limit, the system throttles your API calls. Plan your calls accordingly.
       *
       * @param request DescribeAuditLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditLogsResponse
       */
      Models::DescribeAuditLogsResponse describeAuditLogsWithOptions(const Models::DescribeAuditLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of audit alert logs.
       *
       * @description This operation queries a list of data audit alert logs, allowing you to search for and handle alerts.
       * ## QPS limit
       * The QPS limit for a single user is 10. If you exceed this limit, the system throttles your API calls. Plan your calls accordingly.
       *
       * @param request DescribeAuditLogsRequest
       * @return DescribeAuditLogsResponse
       */
      Models::DescribeAuditLogsResponse describeAuditLogs(const Models::DescribeAuditLogsRequest &request);

      /**
       * @summary Lists industry-specific templates.
       *
       * @param request DescribeCategoryTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCategoryTemplateListResponse
       */
      Models::DescribeCategoryTemplateListResponse describeCategoryTemplateListWithOptions(const Models::DescribeCategoryTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists industry-specific templates.
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
       * @summary You can call the DescribeColumns API to query column data in data asset tables, such as MaxCompute and RDS, that are authorized to connect to Data Security Center.
       *
       * @description This API is typically used to view column data in sensitive data asset information tables. This helps users accurately analyze sensitive data.
       * ## Notes
       * The DescribeColumns API has been revised and replaced by DescribeColumnsV2. Use the newer DescribeColumnsV2 version when developing applications.
       * ## QPS Limits
       * The single-user QPS limit for this API is 10 calls per second. If you exceed this limit, API calls will be rate-limited. This may affect your business. You should call the API reasonably.
       *
       * @param request DescribeColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnsResponse
       */
      Models::DescribeColumnsResponse describeColumnsWithOptions(const Models::DescribeColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeColumns API to query column data in data asset tables, such as MaxCompute and RDS, that are authorized to connect to Data Security Center.
       *
       * @description This API is typically used to view column data in sensitive data asset information tables. This helps users accurately analyze sensitive data.
       * ## Notes
       * The DescribeColumns API has been revised and replaced by DescribeColumnsV2. Use the newer DescribeColumnsV2 version when developing applications.
       * ## QPS Limits
       * The single-user QPS limit for this API is 10 calls per second. If you exceed this limit, API calls will be rate-limited. This may affect your business. You should call the API reasonably.
       *
       * @param request DescribeColumnsRequest
       * @return DescribeColumnsResponse
       */
      Models::DescribeColumnsResponse describeColumns(const Models::DescribeColumnsRequest &request);

      /**
       * @summary The DescribeColumnsV2 operation queries data in the columns of data asset tables, such as those in MaxCompute and RDS, that are authorized in Data Security Center.
       *
       * @param request DescribeColumnsV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnsV2Response
       */
      Models::DescribeColumnsV2Response describeColumnsV2WithOptions(const Models::DescribeColumnsV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The DescribeColumnsV2 operation queries data in the columns of data asset tables, such as those in MaxCompute and RDS, that are authorized in Data Security Center.
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
       * @summary Queries the list of data assets for authorized instances, databases, and buckets.
       *
       * @param request DescribeDataLimitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataLimitsResponse
       */
      Models::DescribeDataLimitsResponse describeDataLimitsWithOptions(const Models::DescribeDataLimitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of data assets for authorized instances, databases, and buckets.
       *
       * @param request DescribeDataLimitsRequest
       * @return DescribeDataLimitsResponse
       */
      Models::DescribeDataLimitsResponse describeDataLimits(const Models::DescribeDataLimitsRequest &request);

      /**
       * @summary You can call DescribeDataMaskingRunHistory to query the execution history of data masking tasks.
       *
       * @description This operation retrieves the execution history of static data masking tasks. You can use it to search for task statuses and view task progress.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user on this operation is 10 calls per second. Calls that exceed this limit are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeDataMaskingRunHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataMaskingRunHistoryResponse
       */
      Models::DescribeDataMaskingRunHistoryResponse describeDataMaskingRunHistoryWithOptions(const Models::DescribeDataMaskingRunHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call DescribeDataMaskingRunHistory to query the execution history of data masking tasks.
       *
       * @description This operation retrieves the execution history of static data masking tasks. You can use it to search for task statuses and view task progress.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user on this operation is 10 calls per second. Calls that exceed this limit are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeDataMaskingRunHistoryRequest
       * @return DescribeDataMaskingRunHistoryResponse
       */
      Models::DescribeDataMaskingRunHistoryResponse describeDataMaskingRunHistory(const Models::DescribeDataMaskingRunHistoryRequest &request);

      /**
       * @summary Call DescribeDataMaskingTasks to retrieve a list of data masking tasks.
       *
       * @description This operation retrieves a list of static data masking tasks, which you can then search and manage.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, your API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeDataMaskingTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataMaskingTasksResponse
       */
      Models::DescribeDataMaskingTasksResponse describeDataMaskingTasksWithOptions(const Models::DescribeDataMaskingTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call DescribeDataMaskingTasks to retrieve a list of data masking tasks.
       *
       * @description This operation retrieves a list of static data masking tasks, which you can then search and manage.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, your API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeDataMaskingTasksRequest
       * @return DescribeDataMaskingTasksResponse
       */
      Models::DescribeDataMaskingTasksResponse describeDataMaskingTasks(const Models::DescribeDataMaskingTasksRequest &request);

      /**
       * @summary Queries the detection results for columns in a data table.
       *
       * @description ## Notes
       * The DescribeDataObjectColumnDetail operation has been updated to DescribeDataObjectColumnDetailV2. We recommend that you use the latest version, DescribeDataObjectColumnDetailV2, for application development.
       *
       * @param request DescribeDataObjectColumnDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataObjectColumnDetailResponse
       */
      Models::DescribeDataObjectColumnDetailResponse describeDataObjectColumnDetailWithOptions(const Models::DescribeDataObjectColumnDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detection results for columns in a data table.
       *
       * @description ## Notes
       * The DescribeDataObjectColumnDetail operation has been updated to DescribeDataObjectColumnDetailV2. We recommend that you use the latest version, DescribeDataObjectColumnDetailV2, for application development.
       *
       * @param request DescribeDataObjectColumnDetailRequest
       * @return DescribeDataObjectColumnDetailResponse
       */
      Models::DescribeDataObjectColumnDetailResponse describeDataObjectColumnDetail(const Models::DescribeDataObjectColumnDetailRequest &request);

      /**
       * @summary Queries the detection results for the columns of a data table.
       *
       * @param request DescribeDataObjectColumnDetailV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataObjectColumnDetailV2Response
       */
      Models::DescribeDataObjectColumnDetailV2Response describeDataObjectColumnDetailV2WithOptions(const Models::DescribeDataObjectColumnDetailV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detection results for the columns of a data table.
       *
       * @param request DescribeDataObjectColumnDetailV2Request
       * @return DescribeDataObjectColumnDetailV2Response
       */
      Models::DescribeDataObjectColumnDetailV2Response describeDataObjectColumnDetailV2(const Models::DescribeDataObjectColumnDetailV2Request &request);

      /**
       * @summary Query data detection results for tables and files.
       *
       * @description This operation queries data detection results for tables and files, to provide a comprehensive view across all your assets.
       * ## QPS limit
       * The per-user QPS limit for this operation is 10 requests per second. If you exceed this limit, the system throttles your API calls. To prevent business disruptions, call this operation only when necessary.
       *
       * @param request DescribeDataObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataObjectsResponse
       */
      Models::DescribeDataObjectsResponse describeDataObjectsWithOptions(const Models::DescribeDataObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query data detection results for tables and files.
       *
       * @description This operation queries data detection results for tables and files, to provide a comprehensive view across all your assets.
       * ## QPS limit
       * The per-user QPS limit for this operation is 10 requests per second. If you exceed this limit, the system throttles your API calls. To prevent business disruptions, call this operation only when necessary.
       *
       * @param request DescribeDataObjectsRequest
       * @return DescribeDataObjectsResponse
       */
      Models::DescribeDataObjectsResponse describeDataObjects(const Models::DescribeDataObjectsRequest &request);

      /**
       * @summary Queries a list of file types supported by Object Storage Service (OSS).
       *
       * @param request DescribeDocTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocTypesResponse
       */
      Models::DescribeDocTypesResponse describeDocTypesWithOptions(const Models::DescribeDocTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of file types supported by Object Storage Service (OSS).
       *
       * @param request DescribeDocTypesRequest
       * @return DescribeDocTypesResponse
       */
      Models::DescribeDocTypesResponse describeDocTypes(const Models::DescribeDocTypesRequest &request);

      /**
       * @summary Retrieves the details of an anomalous event, including its occurrence time, description, and handling status.
       *
       * @param request DescribeEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventDetailResponse
       */
      Models::DescribeEventDetailResponse describeEventDetailWithOptions(const Models::DescribeEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an anomalous event, including its occurrence time, description, and handling status.
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
       * @summary Retrieves the completion status of a detection task based on the task ID. You can obtain the task ID from the Id field in the return value of a CreateScanTask or ScanOssObjectV1 API call.
       *
       * @description ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
       *
       * @param request DescribeIdentifyTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIdentifyTaskStatusResponse
       */
      Models::DescribeIdentifyTaskStatusResponse describeIdentifyTaskStatusWithOptions(const Models::DescribeIdentifyTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the completion status of a detection task based on the task ID. You can obtain the task ID from the Id field in the return value of a CreateScanTask or ScanOssObjectV1 API call.
       *
       * @description ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
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
       * @summary Retrieves a list of authorized MaxCompute, RDS, and OSS data asset instances.
       *
       * @description When you call the DescribeInstances operation, you can set parameters such as search keywords and the threat level of data asset instances to retrieve a list of instances that meet your requirements.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user for this operation is 10 calls per second. If you exceed this limit, API calls are throttled. This can affect your business. Plan your calls accordingly.
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of authorized MaxCompute, RDS, and OSS data asset instances.
       *
       * @description When you call the DescribeInstances operation, you can set parameters such as search keywords and the threat level of data asset instances to retrieve a list of instances that meet your requirements.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user for this operation is 10 calls per second. If you exceed this limit, API calls are throttled. This can affect your business. Plan your calls accordingly.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Obtains detailed information about an authorized OSS object in Data Security Center.
       *
       * @description This operation is typically used to query the details of OSS objects. This information helps you accurately locate sensitive data assets in OSS.
       * ## Usage notes
       * The DescribeOssObjectDetail operation has been updated to DescribeOssObjectDetailV2. We recommend that you use the new version, DescribeOssObjectDetailV2, when you develop applications.
       * ## QPS limit
       * A single user can make up to 10 queries per second (QPS). If you exceed the limit, API calls are throttled. This may affect your business. We recommend that you plan your calls accordingly.
       *
       * @param request DescribeOssObjectDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssObjectDetailResponse
       */
      Models::DescribeOssObjectDetailResponse describeOssObjectDetailWithOptions(const Models::DescribeOssObjectDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains detailed information about an authorized OSS object in Data Security Center.
       *
       * @description This operation is typically used to query the details of OSS objects. This information helps you accurately locate sensitive data assets in OSS.
       * ## Usage notes
       * The DescribeOssObjectDetail operation has been updated to DescribeOssObjectDetailV2. We recommend that you use the new version, DescribeOssObjectDetailV2, when you develop applications.
       * ## QPS limit
       * A single user can make up to 10 queries per second (QPS). If you exceed the limit, API calls are throttled. This may affect your business. We recommend that you plan your calls accordingly.
       *
       * @param request DescribeOssObjectDetailRequest
       * @return DescribeOssObjectDetailResponse
       */
      Models::DescribeOssObjectDetailResponse describeOssObjectDetail(const Models::DescribeOssObjectDetailRequest &request);

      /**
       * @summary Obtains detailed information about an authorized OSS object in Data Security Center.
       *
       * @description This operation queries the details of OSS objects. You can use this operation to locate sensitive data assets in OSS.
       *
       * @param request DescribeOssObjectDetailV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssObjectDetailV2Response
       */
      Models::DescribeOssObjectDetailV2Response describeOssObjectDetailV2WithOptions(const Models::DescribeOssObjectDetailV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains detailed information about an authorized OSS object in Data Security Center.
       *
       * @description This operation queries the details of OSS objects. You can use this operation to locate sensitive data assets in OSS.
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
       * @summary Lists assets and their authorization status.
       *
       * @param request DescribeParentInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParentInstanceResponse
       */
      Models::DescribeParentInstanceResponse describeParentInstanceWithOptions(const Models::DescribeParentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists assets and their authorization status.
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
       * @summary Queries the status of a user account.
       *
       * @description Retrieves information about the current account, such as your usage of Data Security Center (DSC).
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled. This may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeUserStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserStatusResponse
       */
      Models::DescribeUserStatusResponse describeUserStatusWithOptions(const Models::DescribeUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a user account.
       *
       * @description Retrieves information about the current account, such as your usage of Data Security Center (DSC).
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled. This may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeUserStatusRequest
       * @return DescribeUserStatusResponse
       */
      Models::DescribeUserStatusResponse describeUserStatus(const Models::DescribeUserStatusRequest &request);

      /**
       * @summary You can call the DisableUserConfig operation to disable a user configuration. After a configuration is disabled, you can call the CreateConfig operation and specify the same Code parameter to restore the general anomaly alert configuration.
       *
       * @description This operation disables a user configuration based on the code of a configuration item in the general anomaly alert configuration module. This lets you promptly change the status of the user configuration.
       * ## QPS limits
       * This operation is limited to 10 queries per second (QPS) per user. Calls that exceed this limit are throttled. Throttling may impact your business. Plan your calls accordingly.
       *
       * @param request DisableUserConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableUserConfigResponse
       */
      Models::DisableUserConfigResponse disableUserConfigWithOptions(const Models::DisableUserConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DisableUserConfig operation to disable a user configuration. After a configuration is disabled, you can call the CreateConfig operation and specify the same Code parameter to restore the general anomaly alert configuration.
       *
       * @description This operation disables a user configuration based on the code of a configuration item in the general anomaly alert configuration module. This lets you promptly change the status of the user configuration.
       * ## QPS limits
       * This operation is limited to 10 queries per second (QPS) per user. Calls that exceed this limit are throttled. Throttling may impact your business. Plan your calls accordingly.
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
       * @summary You can call ModifyDataLimit to modify the configuration items of a connection authorization in Data Security Center (DSC).
       *
       * @param request ModifyDataLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataLimitResponse
       */
      Models::ModifyDataLimitResponse modifyDataLimitWithOptions(const Models::ModifyDataLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call ModifyDataLimit to modify the configuration items of a connection authorization in Data Security Center (DSC).
       *
       * @param request ModifyDataLimitRequest
       * @return ModifyDataLimitResponse
       */
      Models::ModifyDataLimitResponse modifyDataLimit(const Models::ModifyDataLimitRequest &request);

      /**
       * @summary Modifies the rules that define threat levels for sensitive data. This includes the default threat level for unidentified data and the threat levels for data that is classified as sensitive.
       *
       * @description This API modifies the rules that define threat levels for sensitive data to help with threat level planning.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled. Throttling can impact your business. We recommend that you call this API at a reasonable rate.
       *
       * @param request ModifyDefaultLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefaultLevelResponse
       */
      Models::ModifyDefaultLevelResponse modifyDefaultLevelWithOptions(const Models::ModifyDefaultLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the rules that define threat levels for sensitive data. This includes the default threat level for unidentified data and the threat levels for data that is classified as sensitive.
       *
       * @description This API modifies the rules that define threat levels for sensitive data to help with threat level planning.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled. Throttling can impact your business. We recommend that you call this API at a reasonable rate.
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
       * @summary This operation enables anomalous activity detection for subtypes.
       *
       * @param request ModifyEventTypeStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEventTypeStatusResponse
       */
      Models::ModifyEventTypeStatusResponse modifyEventTypeStatusWithOptions(const Models::ModifyEventTypeStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation enables anomalous activity detection for subtypes.
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
       * @description You must specify the rule name, rule ID, and rule content.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second for a single user. If the limit is exceeded, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRuleResponse
       */
      Models::ModifyRuleResponse modifyRuleWithOptions(const Models::ModifyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a custom sensitive data detection rule in Data Security Center (DSC).
       *
       * @description You must specify the rule name, rule ID, and rule content.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second for a single user. If the limit is exceeded, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyRuleRequest
       * @return ModifyRuleResponse
       */
      Models::ModifyRuleResponse modifyRule(const Models::ModifyRuleRequest &request);

      /**
       * @summary Enables or disables sensitive data detection rules.
       *
       * @param request ModifyRuleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRuleStatusResponse
       */
      Models::ModifyRuleStatusResponse modifyRuleStatusWithOptions(const Models::ModifyRuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables sensitive data detection rules.
       *
       * @param request ModifyRuleStatusRequest
       * @return ModifyRuleStatusResponse
       */
      Models::ModifyRuleStatusResponse modifyRuleStatus(const Models::ModifyRuleStatusRequest &request);

      /**
       * @summary You can call the RestoreOssImage operation to restore desensitized images.
       *
       * @description You can use RestoreOssImage to retrieve the original images that were processed by the MaskOssImage operation if the IsAlwaysUpload parameter is set to `true`.
       * For example, the image `aliyun_dsc_desensitization/exampledir/test.png` in a bucket is restored and saved as `aliyun_dsc_original/exampledir/test.png`.
       *
       * @param request RestoreOssImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreOssImageResponse
       */
      Models::RestoreOssImageResponse restoreOssImageWithOptions(const Models::RestoreOssImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the RestoreOssImage operation to restore desensitized images.
       *
       * @description You can use RestoreOssImage to retrieve the original images that were processed by the MaskOssImage operation if the IsAlwaysUpload parameter is set to `true`.
       * For example, the image `aliyun_dsc_desensitization/exampledir/test.png` in a bucket is restored and saved as `aliyun_dsc_original/exampledir/test.png`.
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
