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
       * @summary Modifies the configurations of a common configuration item for alerts.
       *
       * @description You can call this operation to create or restore configurations based on the codes of common configuration items. This allows you to manage the configurations of common configuration items.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConfigResponse
       */
      Models::CreateConfigResponse createConfigWithOptions(const Models::CreateConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a common configuration item for alerts.
       *
       * @description You can call this operation to create or restore configurations based on the codes of common configuration items. This allows you to manage the configurations of common configuration items.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateConfigRequest
       * @return CreateConfigResponse
       */
      Models::CreateConfigResponse createConfig(const Models::CreateConfigRequest &request);

      /**
       * @summary Authorizes Data Security Center (DSC) to scan data assets. The data assets can be a database, a project, or a bucket.
       *
       * @description You can call this operation to authorize DSC to scan data assets to ensure the security of the data assets.
       *
       * @param request CreateDataLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLimitResponse
       */
      Models::CreateDataLimitResponse createDataLimitWithOptions(const Models::CreateDataLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes Data Security Center (DSC) to scan data assets. The data assets can be a database, a project, or a bucket.
       *
       * @description You can call this operation to authorize DSC to scan data assets to ensure the security of the data assets.
       *
       * @param request CreateDataLimitRequest
       * @return CreateDataLimitResponse
       */
      Models::CreateDataLimitResponse createDataLimit(const Models::CreateDataLimitRequest &request);

      /**
       * @summary Creates a custom sensitive data detection rule.
       *
       * @param request CreateRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRuleResponse
       */
      Models::CreateRuleResponse createRuleWithOptions(const Models::CreateRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom sensitive data detection rule.
       *
       * @param request CreateRuleRequest
       * @return CreateRuleResponse
       */
      Models::CreateRuleResponse createRule(const Models::CreateRuleRequest &request);

      /**
       * @summary Creates a custom scan task. The custom scan task is used to scan data assets on which Data Security Center (DSC) is granted the scan permissions for sensitive data.
       *
       * @description You can call this operation to create a custom scan task for authorized data assets. You can customize the interval between two consecutive scan tasks and the time when the scan task is executed next time.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScanTaskResponse
       */
      Models::CreateScanTaskResponse createScanTaskWithOptions(const Models::CreateScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom scan task. The custom scan task is used to scan data assets on which Data Security Center (DSC) is granted the scan permissions for sensitive data.
       *
       * @description You can call this operation to create a custom scan task for authorized data assets. You can customize the interval between two consecutive scan tasks and the time when the scan task is executed next time.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateScanTaskRequest
       * @return CreateScanTaskResponse
       */
      Models::CreateScanTaskResponse createScanTask(const Models::CreateScanTaskRequest &request);

      /**
       * @summary Creates a service-linked role for Data Security Center (DSC) to grant DSC the permissions to access data assets in other services.
       *
       * @description You can call this operation to allow DSC to access the data assets in services such as Object Storage Service (OSS), ApsaraDB RDS, and MaxCompute. After you call this operation, the system automatically creates a service-linked role named AliyunServiceRoleForSDDP and attaches the AliyunServiceRolePolicyForSDDP policy to the role.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateSlrRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSlrRoleResponse
       */
      Models::CreateSlrRoleResponse createSlrRoleWithOptions(const Models::CreateSlrRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role for Data Security Center (DSC) to grant DSC the permissions to access data assets in other services.
       *
       * @description You can call this operation to allow DSC to access the data assets in services such as Object Storage Service (OSS), ApsaraDB RDS, and MaxCompute. After you call this operation, the system automatically creates a service-linked role named AliyunServiceRoleForSDDP and attaches the AliyunServiceRolePolicyForSDDP policy to the role.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateSlrRoleRequest
       * @return CreateSlrRoleResponse
       */
      Models::CreateSlrRoleResponse createSlrRole(const Models::CreateSlrRoleRequest &request);

      /**
       * @summary Revokes the scan permissions on a data asset. The data asset can be a database, an instance, or a bucket.
       *
       * @description You can call this operation to revoke the permissions on a data asset from Data Security Center (DSC).
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteDataLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLimitResponse
       */
      Models::DeleteDataLimitResponse deleteDataLimitWithOptions(const Models::DeleteDataLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the scan permissions on a data asset. The data asset can be a database, an instance, or a bucket.
       *
       * @description You can call this operation to revoke the permissions on a data asset from Data Security Center (DSC).
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteDataLimitRequest
       * @return DeleteDataLimitResponse
       */
      Models::DeleteDataLimitResponse deleteDataLimit(const Models::DeleteDataLimitRequest &request);

      /**
       * @summary Deletes a custom sensitive data detection rule from Data Security Center (DSC).
       *
       * @param request DeleteRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRuleWithOptions(const Models::DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom sensitive data detection rule from Data Security Center (DSC).
       *
       * @param request DeleteRuleRequest
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRule(const Models::DeleteRuleRequest &request);

      /**
       * @summary 查询审计告警日志列表
       *
       * @param request DescribeAuditLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditLogsResponse
       */
      Models::DescribeAuditLogsResponse describeAuditLogsWithOptions(const Models::DescribeAuditLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询审计告警日志列表
       *
       * @param request DescribeAuditLogsRequest
       * @return DescribeAuditLogsResponse
       */
      Models::DescribeAuditLogsResponse describeAuditLogs(const Models::DescribeAuditLogsRequest &request);

      /**
       * @summary Call this interface to query the list of industry templates.
       *
       * @param request DescribeCategoryTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCategoryTemplateListResponse
       */
      Models::DescribeCategoryTemplateListResponse describeCategoryTemplateListWithOptions(const Models::DescribeCategoryTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call this interface to query the list of industry templates.
       *
       * @param request DescribeCategoryTemplateListRequest
       * @return DescribeCategoryTemplateListResponse
       */
      Models::DescribeCategoryTemplateListResponse describeCategoryTemplateList(const Models::DescribeCategoryTemplateListRequest &request);

      /**
       * @summary Queries rules in a classification template by page.
       *
       * @description You can call this operation to query rules in a classification template.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeCategoryTemplateRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCategoryTemplateRuleListResponse
       */
      Models::DescribeCategoryTemplateRuleListResponse describeCategoryTemplateRuleListWithOptions(const Models::DescribeCategoryTemplateRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries rules in a classification template by page.
       *
       * @description You can call this operation to query rules in a classification template.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeCategoryTemplateRuleListRequest
       * @return DescribeCategoryTemplateRuleListResponse
       */
      Models::DescribeCategoryTemplateRuleListResponse describeCategoryTemplateRuleList(const Models::DescribeCategoryTemplateRuleListRequest &request);

      /**
       * @summary Queries data in the columns of the tables that Data Security Center (DSC) is authorized to access. The tables include the tables of MaxCompute and ApsaraDB RDS.
       *
       * @description You can call this operation to query the data in columns of a table that may contain sensitive data. This helps you analyze sensitive data.
       * ## [](#)Precautions
       * The DescribeColumns operation is changed to DescribeColumnsV2. We recommend that you call the DescribeColumnsV2 operation when you develop your applications.
       * ## [](#qps)Limits
       * Each Alibaba Cloud account can call this operation up to 10 times per second. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnsResponse
       */
      Models::DescribeColumnsResponse describeColumnsWithOptions(const Models::DescribeColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data in the columns of the tables that Data Security Center (DSC) is authorized to access. The tables include the tables of MaxCompute and ApsaraDB RDS.
       *
       * @description You can call this operation to query the data in columns of a table that may contain sensitive data. This helps you analyze sensitive data.
       * ## [](#)Precautions
       * The DescribeColumns operation is changed to DescribeColumnsV2. We recommend that you call the DescribeColumnsV2 operation when you develop your applications.
       * ## [](#qps)Limits
       * Each Alibaba Cloud account can call this operation up to 10 times per second. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeColumnsRequest
       * @return DescribeColumnsResponse
       */
      Models::DescribeColumnsResponse describeColumns(const Models::DescribeColumnsRequest &request);

      /**
       * @summary Query data in columns of data assets such as MaxCompute, RDS, etc., that are authorized by the Data Security Center.
       *
       * @param request DescribeColumnsV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnsV2Response
       */
      Models::DescribeColumnsV2Response describeColumnsV2WithOptions(const Models::DescribeColumnsV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query data in columns of data assets such as MaxCompute, RDS, etc., that are authorized by the Data Security Center.
       *
       * @param request DescribeColumnsV2Request
       * @return DescribeColumnsV2Response
       */
      Models::DescribeColumnsV2Response describeColumnsV2(const Models::DescribeColumnsV2Request &request);

      /**
       * @summary Queries common configuration items for alerts.
       *
       * @param request DescribeConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConfigsResponse
       */
      Models::DescribeConfigsResponse describeConfigsWithOptions(const Models::DescribeConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries common configuration items for alerts.
       *
       * @param request DescribeConfigsRequest
       * @return DescribeConfigsResponse
       */
      Models::DescribeConfigsResponse describeConfigs(const Models::DescribeConfigsRequest &request);

      /**
       * @summary Queries the sensitive data detection results of data assets that Data Security Center (DSC) is authorized to access.
       *
       * @param request DescribeDataAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataAssetsResponse
       */
      Models::DescribeDataAssetsResponse describeDataAssetsWithOptions(const Models::DescribeDataAssetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sensitive data detection results of data assets that Data Security Center (DSC) is authorized to access.
       *
       * @param request DescribeDataAssetsRequest
       * @return DescribeDataAssetsResponse
       */
      Models::DescribeDataAssetsResponse describeDataAssets(const Models::DescribeDataAssetsRequest &request);

      /**
       * @summary Queries the details of a data asset, such as a MaxCompute project, an ApsaraDB RDS database, or an Object Storage Service (OSS) bucket, that you authorize Data Security Center (DSC) to access.
       *
       * @param request DescribeDataLimitDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataLimitDetailResponse
       */
      Models::DescribeDataLimitDetailResponse describeDataLimitDetailWithOptions(const Models::DescribeDataLimitDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a data asset, such as a MaxCompute project, an ApsaraDB RDS database, or an Object Storage Service (OSS) bucket, that you authorize Data Security Center (DSC) to access.
       *
       * @param request DescribeDataLimitDetailRequest
       * @return DescribeDataLimitDetailResponse
       */
      Models::DescribeDataLimitDetailResponse describeDataLimitDetail(const Models::DescribeDataLimitDetailRequest &request);

      /**
       * @summary Queries data assets, such as instances, databases, and Object Storage Service (OSS) buckets, that you authorize Data Security Center (DSC) to scan in a service.
       *
       * @description You can call this operation to query the data assets that are authorized to be scanned. This facilitates resource search and aggregation.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDataLimitSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataLimitSetResponse
       */
      Models::DescribeDataLimitSetResponse describeDataLimitSetWithOptions(const Models::DescribeDataLimitSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data assets, such as instances, databases, and Object Storage Service (OSS) buckets, that you authorize Data Security Center (DSC) to scan in a service.
       *
       * @description You can call this operation to query the data assets that are authorized to be scanned. This facilitates resource search and aggregation.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDataLimitSetRequest
       * @return DescribeDataLimitSetResponse
       */
      Models::DescribeDataLimitSetResponse describeDataLimitSet(const Models::DescribeDataLimitSetRequest &request);

      /**
       * @summary Queries the data assets such as instances, databases, or buckets that Data Security Center (DSC) is authorized to access.
       *
       * @param request DescribeDataLimitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataLimitsResponse
       */
      Models::DescribeDataLimitsResponse describeDataLimitsWithOptions(const Models::DescribeDataLimitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data assets such as instances, databases, or buckets that Data Security Center (DSC) is authorized to access.
       *
       * @param request DescribeDataLimitsRequest
       * @return DescribeDataLimitsResponse
       */
      Models::DescribeDataLimitsResponse describeDataLimits(const Models::DescribeDataLimitsRequest &request);

      /**
       * @summary Queries the execution information about a de-identification task.
       *
       * @description You can call this operation to query the execution information of a static de-identification task, including the status and progress.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDataMaskingRunHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataMaskingRunHistoryResponse
       */
      Models::DescribeDataMaskingRunHistoryResponse describeDataMaskingRunHistoryWithOptions(const Models::DescribeDataMaskingRunHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution information about a de-identification task.
       *
       * @description You can call this operation to query the execution information of a static de-identification task, including the status and progress.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDataMaskingRunHistoryRequest
       * @return DescribeDataMaskingRunHistoryResponse
       */
      Models::DescribeDataMaskingRunHistoryResponse describeDataMaskingRunHistory(const Models::DescribeDataMaskingRunHistoryRequest &request);

      /**
       * @summary Queries de-identification tasks.
       *
       * @description You can call this operation to query static de-identification tasks. This facilitates task queries and management.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDataMaskingTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataMaskingTasksResponse
       */
      Models::DescribeDataMaskingTasksResponse describeDataMaskingTasksWithOptions(const Models::DescribeDataMaskingTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries de-identification tasks.
       *
       * @description You can call this operation to query static de-identification tasks. This facilitates task queries and management.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDataMaskingTasksRequest
       * @return DescribeDataMaskingTasksResponse
       */
      Models::DescribeDataMaskingTasksResponse describeDataMaskingTasks(const Models::DescribeDataMaskingTasksRequest &request);

      /**
       * @summary View data object column details
       *
       * @description ## Notes
       * The DescribeDataObjectColumnDetail interface has been revised to DescribeDataObjectColumnDetailV2. It is recommended that you use the newer version, DescribeDataObjectColumnDetailV2, when developing your application.
       *
       * @param request DescribeDataObjectColumnDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataObjectColumnDetailResponse
       */
      Models::DescribeDataObjectColumnDetailResponse describeDataObjectColumnDetailWithOptions(const Models::DescribeDataObjectColumnDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View data object column details
       *
       * @description ## Notes
       * The DescribeDataObjectColumnDetail interface has been revised to DescribeDataObjectColumnDetailV2. It is recommended that you use the newer version, DescribeDataObjectColumnDetailV2, when developing your application.
       *
       * @param request DescribeDataObjectColumnDetailRequest
       * @return DescribeDataObjectColumnDetailResponse
       */
      Models::DescribeDataObjectColumnDetailResponse describeDataObjectColumnDetail(const Models::DescribeDataObjectColumnDetailRequest &request);

      /**
       * @summary View Data Object Column Details V2
       *
       * @param request DescribeDataObjectColumnDetailV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataObjectColumnDetailV2Response
       */
      Models::DescribeDataObjectColumnDetailV2Response describeDataObjectColumnDetailV2WithOptions(const Models::DescribeDataObjectColumnDetailV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View Data Object Column Details V2
       *
       * @param request DescribeDataObjectColumnDetailV2Request
       * @return DescribeDataObjectColumnDetailV2Response
       */
      Models::DescribeDataObjectColumnDetailV2Response describeDataObjectColumnDetailV2(const Models::DescribeDataObjectColumnDetailV2Request &request);

      /**
       * @summary Paginated Query of Data Catalog Objects
       *
       * @param request DescribeDataObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataObjectsResponse
       */
      Models::DescribeDataObjectsResponse describeDataObjectsWithOptions(const Models::DescribeDataObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Paginated Query of Data Catalog Objects
       *
       * @param request DescribeDataObjectsRequest
       * @return DescribeDataObjectsResponse
       */
      Models::DescribeDataObjectsResponse describeDataObjects(const Models::DescribeDataObjectsRequest &request);

      /**
       * @summary Queries a list of OSS object types that can be identified.
       *
       * @param request DescribeDocTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocTypesResponse
       */
      Models::DescribeDocTypesResponse describeDocTypesWithOptions(const Models::DescribeDocTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of OSS object types that can be identified.
       *
       * @param request DescribeDocTypesRequest
       * @return DescribeDocTypesResponse
       */
      Models::DescribeDocTypesResponse describeDocTypes(const Models::DescribeDocTypesRequest &request);

      /**
       * @summary Queries the details of an anomalous event. The details include the time when the anomalous event occurred, and the description and handling status of the anomalous event.
       *
       * @param request DescribeEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventDetailResponse
       */
      Models::DescribeEventDetailResponse describeEventDetailWithOptions(const Models::DescribeEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an anomalous event. The details include the time when the anomalous event occurred, and the description and handling status of the anomalous event.
       *
       * @param request DescribeEventDetailRequest
       * @return DescribeEventDetailResponse
       */
      Models::DescribeEventDetailResponse describeEventDetail(const Models::DescribeEventDetailRequest &request);

      /**
       * @summary Queries the types of anomalous events.
       *
       * @param request DescribeEventTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventTypesResponse
       */
      Models::DescribeEventTypesResponse describeEventTypesWithOptions(const Models::DescribeEventTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types of anomalous events.
       *
       * @param request DescribeEventTypesRequest
       * @return DescribeEventTypesResponse
       */
      Models::DescribeEventTypesResponse describeEventTypes(const Models::DescribeEventTypesRequest &request);

      /**
       * @summary Queries anomalous events.
       *
       * @description You can call this operation to query anomalous events that may involve data leaks. This helps you search for and handle anomalous events.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEventsWithOptions(const Models::DescribeEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries anomalous events.
       *
       * @description You can call this operation to query anomalous events that may involve data leaks. This helps you search for and handle anomalous events.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeEventsRequest
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEvents(const Models::DescribeEventsRequest &request);

      /**
       * @summary Query the status of an identification task
       *
       * @description ## QPS Limit
       * The QPS limit for this interface per user is 10 times/second. Exceeding the limit will result in API calls being rate-limited, which may affect your business. Please call it reasonably.
       *
       * @param request DescribeIdentifyTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIdentifyTaskStatusResponse
       */
      Models::DescribeIdentifyTaskStatusResponse describeIdentifyTaskStatusWithOptions(const Models::DescribeIdentifyTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the status of an identification task
       *
       * @description ## QPS Limit
       * The QPS limit for this interface per user is 10 times/second. Exceeding the limit will result in API calls being rate-limited, which may affect your business. Please call it reasonably.
       *
       * @param request DescribeIdentifyTaskStatusRequest
       * @return DescribeIdentifyTaskStatusResponse
       */
      Models::DescribeIdentifyTaskStatusResponse describeIdentifyTaskStatus(const Models::DescribeIdentifyTaskStatusRequest &request);

      /**
       * @summary Queries a list of data assets.
       *
       * @description You can query a list of unauthorized or authorized data assets based on the value of AuthStatus.
       * This operation is no longer used for the KMS console of the new version.
       *
       * @param request DescribeInstanceSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSourcesResponse
       */
      Models::DescribeInstanceSourcesResponse describeInstanceSourcesWithOptions(const Models::DescribeInstanceSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data assets.
       *
       * @description You can query a list of unauthorized or authorized data assets based on the value of AuthStatus.
       * This operation is no longer used for the KMS console of the new version.
       *
       * @param request DescribeInstanceSourcesRequest
       * @return DescribeInstanceSourcesResponse
       */
      Models::DescribeInstanceSourcesResponse describeInstanceSources(const Models::DescribeInstanceSourcesRequest &request);

      /**
       * @summary Queries data assets such as MaxCompute, ApsaraDB RDS, and Object Storage Service (OSS) that you authorize Data Security Center (DSC) to access.
       *
       * @description When you call the DescribeInstances operation, you can specify parameters such as Name and RiskLevelId to query data assets that meet filter conditions.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data assets such as MaxCompute, ApsaraDB RDS, and Object Storage Service (OSS) that you authorize Data Security Center (DSC) to access.
       *
       * @description When you call the DescribeInstances operation, you can specify parameters such as Name and RiskLevelId to query data assets that meet filter conditions.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Queries the details of an Object Storage Service (OSS) object that Data Security Center (DSC) is authorized to access.
       *
       * @description You can call this operation to query the details of an Object Storage Service (OSS) object. This helps you locate sensitive data detected in OSS.
       * ## [](#)Precautions
       * The DescribeOssObjectDetail operation is chagned to DescribeOssObjectDetailV2. We recommend that you call the DescribeOssObjectDetailV2 operation when you develop your applications.
       * ## [](#qps)Limits
       * Each Alibaba Cloud account can call this operation up to 10 times per second. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeOssObjectDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssObjectDetailResponse
       */
      Models::DescribeOssObjectDetailResponse describeOssObjectDetailWithOptions(const Models::DescribeOssObjectDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an Object Storage Service (OSS) object that Data Security Center (DSC) is authorized to access.
       *
       * @description You can call this operation to query the details of an Object Storage Service (OSS) object. This helps you locate sensitive data detected in OSS.
       * ## [](#)Precautions
       * The DescribeOssObjectDetail operation is chagned to DescribeOssObjectDetailV2. We recommend that you call the DescribeOssObjectDetailV2 operation when you develop your applications.
       * ## [](#qps)Limits
       * Each Alibaba Cloud account can call this operation up to 10 times per second. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeOssObjectDetailRequest
       * @return DescribeOssObjectDetailResponse
       */
      Models::DescribeOssObjectDetailResponse describeOssObjectDetail(const Models::DescribeOssObjectDetailRequest &request);

      /**
       * @summary Call this interface to query the details of a single storage object in OSS that is authorized by the Data Security Center.
       *
       * @description This interface is generally used to query the detailed information of OSS storage objects, which facilitates the accurate positioning of sensitive OSS assets.
       *
       * @param request DescribeOssObjectDetailV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssObjectDetailV2Response
       */
      Models::DescribeOssObjectDetailV2Response describeOssObjectDetailV2WithOptions(const Models::DescribeOssObjectDetailV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call this interface to query the details of a single storage object in OSS that is authorized by the Data Security Center.
       *
       * @description This interface is generally used to query the detailed information of OSS storage objects, which facilitates the accurate positioning of sensitive OSS assets.
       *
       * @param request DescribeOssObjectDetailV2Request
       * @return DescribeOssObjectDetailV2Response
       */
      Models::DescribeOssObjectDetailV2Response describeOssObjectDetailV2(const Models::DescribeOssObjectDetailV2Request &request);

      /**
       * @summary Queries Object Storage Service (OSS) objects that you authorize Data Security Center (DSC) to access.
       *
       * @param request DescribeOssObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssObjectsResponse
       */
      Models::DescribeOssObjectsResponse describeOssObjectsWithOptions(const Models::DescribeOssObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Object Storage Service (OSS) objects that you authorize Data Security Center (DSC) to access.
       *
       * @param request DescribeOssObjectsRequest
       * @return DescribeOssObjectsResponse
       */
      Models::DescribeOssObjectsResponse describeOssObjects(const Models::DescribeOssObjectsRequest &request);

      /**
       * @summary Queries information about the MaxCompute packages that Data Security Center (DSC) is authorized to access. The information includes the names of MaxCompute packages, the accounts of MaxCompute package owners, and the sensitivity levels of MaxCompute packages.
       *
       * @description You can call this operation to query MaxCompute packages that are scanned by DSC. This helps you search for MaxCompute packages and view the summary of MaxCompute packages.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribePackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePackagesResponse
       */
      Models::DescribePackagesResponse describePackagesWithOptions(const Models::DescribePackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the MaxCompute packages that Data Security Center (DSC) is authorized to access. The information includes the names of MaxCompute packages, the accounts of MaxCompute package owners, and the sensitivity levels of MaxCompute packages.
       *
       * @description You can call this operation to query MaxCompute packages that are scanned by DSC. This helps you search for MaxCompute packages and view the summary of MaxCompute packages.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribePackagesRequest
       * @return DescribePackagesResponse
       */
      Models::DescribePackagesResponse describePackages(const Models::DescribePackagesRequest &request);

      /**
       * @summary Gets the list of first-level authorizations.
       *
       * @param request DescribeParentInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParentInstanceResponse
       */
      Models::DescribeParentInstanceResponse describeParentInstanceWithOptions(const Models::DescribeParentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the list of first-level authorizations.
       *
       * @param request DescribeParentInstanceRequest
       * @return DescribeParentInstanceResponse
       */
      Models::DescribeParentInstanceResponse describeParentInstance(const Models::DescribeParentInstanceRequest &request);

      /**
       * @summary Queries the sensitivity levels that are defined in a rule template provided by Data Security Center (DSC).
       *
       * @description You can call this operation to query the sensitivity levels that are defined in the current rule template provided by DSC. This helps you learn about the number of times that each sensitivity level is referenced in the rule template and the highest sensitivity level.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeRiskLevelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskLevelsResponse
       */
      Models::DescribeRiskLevelsResponse describeRiskLevelsWithOptions(const Models::DescribeRiskLevelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sensitivity levels that are defined in a rule template provided by Data Security Center (DSC).
       *
       * @description You can call this operation to query the sensitivity levels that are defined in the current rule template provided by DSC. This helps you learn about the number of times that each sensitivity level is referenced in the rule template and the highest sensitivity level.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeRiskLevelsRequest
       * @return DescribeRiskLevelsResponse
       */
      Models::DescribeRiskLevelsResponse describeRiskLevels(const Models::DescribeRiskLevelsRequest &request);

      /**
       * @summary Queries sensitive data detection rules.
       *
       * @param request DescribeRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRulesResponse
       */
      Models::DescribeRulesResponse describeRulesWithOptions(const Models::DescribeRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries sensitive data detection rules.
       *
       * @param request DescribeRulesRequest
       * @return DescribeRulesResponse
       */
      Models::DescribeRulesResponse describeRules(const Models::DescribeRulesRequest &request);

      /**
       * @summary Queries tables in data assets, such as MaxCompute projects and ApsaraDB RDS instances, that you authorize Data Security Center (DSC) to access.
       *
       * @description When you call the DescribeTables operation to query tables, you can specify parameters such as Name and RiskLevelId to filter tables.
       * # Limits
       * You can send up to 10 requests per second to call this operation by using your Alibaba Cloud account. If you send excessive requests, throttling is implemented, and your business may be affected.
       *
       * @param request DescribeTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTablesResponse
       */
      Models::DescribeTablesResponse describeTablesWithOptions(const Models::DescribeTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tables in data assets, such as MaxCompute projects and ApsaraDB RDS instances, that you authorize Data Security Center (DSC) to access.
       *
       * @description When you call the DescribeTables operation to query tables, you can specify parameters such as Name and RiskLevelId to filter tables.
       * # Limits
       * You can send up to 10 requests per second to call this operation by using your Alibaba Cloud account. If you send excessive requests, throttling is implemented, and your business may be affected.
       *
       * @param request DescribeTablesRequest
       * @return DescribeTablesResponse
       */
      Models::DescribeTablesResponse describeTables(const Models::DescribeTablesRequest &request);

      /**
       * @summary Call this interface to query all models list of industry templates.
       *
       * @param request DescribeTemplateAllRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplateAllRulesResponse
       */
      Models::DescribeTemplateAllRulesResponse describeTemplateAllRulesWithOptions(const Models::DescribeTemplateAllRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call this interface to query all models list of industry templates.
       *
       * @param request DescribeTemplateAllRulesRequest
       * @return DescribeTemplateAllRulesResponse
       */
      Models::DescribeTemplateAllRulesResponse describeTemplateAllRules(const Models::DescribeTemplateAllRulesRequest &request);

      /**
       * @summary Queries the information about an account.
       *
       * @description You can call this operation to query the information about the current account. This helps you get familiar with your account that accesses Data Security Center (DSC).
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeUserStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserStatusResponse
       */
      Models::DescribeUserStatusResponse describeUserStatusWithOptions(const Models::DescribeUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an account.
       *
       * @description You can call this operation to query the information about the current account. This helps you get familiar with your account that accesses Data Security Center (DSC).
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeUserStatusRequest
       * @return DescribeUserStatusResponse
       */
      Models::DescribeUserStatusResponse describeUserStatus(const Models::DescribeUserStatusRequest &request);

      /**
       * @summary Disables a configuration item. After you disable a configuration item, you can call the CreateConfig operation to enable the configuration item by specifying the code of the configuration item for the Code parameter in the request.
       *
       * @description You can call this operation to disable a configuration item based on the code of the configuration item. This helps you modify configurations at the earliest opportunity.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DisableUserConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableUserConfigResponse
       */
      Models::DisableUserConfigResponse disableUserConfigWithOptions(const Models::DisableUserConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a configuration item. After you disable a configuration item, you can call the CreateConfig operation to enable the configuration item by specifying the code of the configuration item for the Code parameter in the request.
       *
       * @description You can call this operation to disable a configuration item based on the code of the configuration item. This helps you modify configurations at the earliest opportunity.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DisableUserConfigRequest
       * @return DisableUserConfigResponse
       */
      Models::DisableUserConfigResponse disableUserConfig(const Models::DisableUserConfigRequest &request);

      /**
       * @summary Dynamically de-identifies sensitive data.
       *
       * @param request ExecDatamaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecDatamaskResponse
       */
      Models::ExecDatamaskResponse execDatamaskWithOptions(const Models::ExecDatamaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dynamically de-identifies sensitive data.
       *
       * @param request ExecDatamaskRequest
       * @return ExecDatamaskResponse
       */
      Models::ExecDatamaskResponse execDatamask(const Models::ExecDatamaskRequest &request);

      /**
       * @summary Triggers a de-identification task.
       *
       * @param request ManualTriggerMaskingProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManualTriggerMaskingProcessResponse
       */
      Models::ManualTriggerMaskingProcessResponse manualTriggerMaskingProcessWithOptions(const Models::ManualTriggerMaskingProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers a de-identification task.
       *
       * @param request ManualTriggerMaskingProcessRequest
       * @return ManualTriggerMaskingProcessResponse
       */
      Models::ManualTriggerMaskingProcessResponse manualTriggerMaskingProcess(const Models::ManualTriggerMaskingProcessRequest &request);

      /**
       * @summary OSS图片脱敏
       *
       * @param request MaskOssImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MaskOssImageResponse
       */
      Models::MaskOssImageResponse maskOssImageWithOptions(const Models::MaskOssImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary OSS图片脱敏
       *
       * @param request MaskOssImageRequest
       * @return MaskOssImageResponse
       */
      Models::MaskOssImageResponse maskOssImage(const Models::MaskOssImageRequest &request);

      /**
       * @summary Modifies configuration items for a data asset that you authorize Data Security Center (DSC) to access.
       *
       * @param request ModifyDataLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataLimitResponse
       */
      Models::ModifyDataLimitResponse modifyDataLimitWithOptions(const Models::ModifyDataLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies configuration items for a data asset that you authorize Data Security Center (DSC) to access.
       *
       * @param request ModifyDataLimitRequest
       * @return ModifyDataLimitResponse
       */
      Models::ModifyDataLimitResponse modifyDataLimit(const Models::ModifyDataLimitRequest &request);

      /**
       * @summary Changes the sensitivity levels of sensitive data. You can change the default sensitivity levels of data that cannot be classified as sensitive or insensitive, and the sensitivity levels of data that can be classified as sensitive.
       *
       * @description You can call this operation to modify the sensitivity levels of data. This helps you manage the sensitivity levels.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyDefaultLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefaultLevelResponse
       */
      Models::ModifyDefaultLevelResponse modifyDefaultLevelWithOptions(const Models::ModifyDefaultLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the sensitivity levels of sensitive data. You can change the default sensitivity levels of data that cannot be classified as sensitive or insensitive, and the sensitivity levels of data that can be classified as sensitive.
       *
       * @description You can call this operation to modify the sensitivity levels of data. This helps you manage the sensitivity levels.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyDefaultLevelRequest
       * @return ModifyDefaultLevelResponse
       */
      Models::ModifyDefaultLevelResponse modifyDefaultLevel(const Models::ModifyDefaultLevelRequest &request);

      /**
       * @summary Handles an anomalous event.
       *
       * @description You can call this operation to handle anomalous events that involve data leaks. This helps protect your data assets at the earliest opportunity.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyEventStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEventStatusResponse
       */
      Models::ModifyEventStatusResponse modifyEventStatusWithOptions(const Models::ModifyEventStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handles an anomalous event.
       *
       * @description You can call this operation to handle anomalous events that involve data leaks. This helps protect your data assets at the earliest opportunity.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyEventStatusRequest
       * @return ModifyEventStatusResponse
       */
      Models::ModifyEventStatusResponse modifyEventStatus(const Models::ModifyEventStatusRequest &request);

      /**
       * @summary Enables the detection of anomalous events of subtypes.
       *
       * @param request ModifyEventTypeStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEventTypeStatusResponse
       */
      Models::ModifyEventTypeStatusResponse modifyEventTypeStatusWithOptions(const Models::ModifyEventTypeStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the detection of anomalous events of subtypes.
       *
       * @param request ModifyEventTypeStatusRequest
       * @return ModifyEventTypeStatusResponse
       */
      Models::ModifyEventTypeStatusResponse modifyEventTypeStatus(const Models::ModifyEventTypeStatusRequest &request);

      /**
       * @summary Enables or disables the report task.
       *
       * @description You can call this operation to enable or disable the report task. After you activate Data Security Center (DSC), the report task is enabled by default. After you disable the report task, you cannot view statistics that are newly generated in the Report Center module, on the Overview page of the Cloud Native Data Audit module, and in the Data security lab module. Existing statistics are not affected.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyReportTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyReportTaskStatusResponse
       */
      Models::ModifyReportTaskStatusResponse modifyReportTaskStatusWithOptions(const Models::ModifyReportTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the report task.
       *
       * @description You can call this operation to enable or disable the report task. After you activate Data Security Center (DSC), the report task is enabled by default. After you disable the report task, you cannot view statistics that are newly generated in the Report Center module, on the Overview page of the Cloud Native Data Audit module, and in the Data security lab module. Existing statistics are not affected.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyReportTaskStatusRequest
       * @return ModifyReportTaskStatusResponse
       */
      Models::ModifyReportTaskStatusResponse modifyReportTaskStatus(const Models::ModifyReportTaskStatusRequest &request);

      /**
       * @summary Modifies a custom sensitive data detection rule in Data Security Center (DSC).
       *
       * @description When you call this operation, you must configure request parameters to specify the rule name, rule ID, and rule content.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRuleResponse
       */
      Models::ModifyRuleResponse modifyRuleWithOptions(const Models::ModifyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a custom sensitive data detection rule in Data Security Center (DSC).
       *
       * @description When you call this operation, you must configure request parameters to specify the rule name, rule ID, and rule content.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyRuleRequest
       * @return ModifyRuleResponse
       */
      Models::ModifyRuleResponse modifyRule(const Models::ModifyRuleRequest &request);

      /**
       * @summary Enables or disables a sensitive data detection rule.
       *
       * @param request ModifyRuleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRuleStatusResponse
       */
      Models::ModifyRuleStatusResponse modifyRuleStatusWithOptions(const Models::ModifyRuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables a sensitive data detection rule.
       *
       * @param request ModifyRuleStatusRequest
       * @return ModifyRuleStatusResponse
       */
      Models::ModifyRuleStatusResponse modifyRuleStatus(const Models::ModifyRuleStatusRequest &request);

      /**
       * @summary 图片复原
       *
       * @param request RestoreOssImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreOssImageResponse
       */
      Models::RestoreOssImageResponse restoreOssImageWithOptions(const Models::RestoreOssImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图片复原
       *
       * @param request RestoreOssImageRequest
       * @return RestoreOssImageResponse
       */
      Models::RestoreOssImageResponse restoreOssImage(const Models::RestoreOssImageRequest &request);

      /**
       * @summary Creates an identification task to scan sensitive data in Object Storage Service (OSS) objects.
       *
       * @description ### [](#)Prerequisites
       * To call this operation, make sure that asset authorization for your OSS bucket is complete and the bucket is connected. If the authorization is not complete, the bucket_not_authorized error code is returned when you call the operation.
       * ### [](#qps-)Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * ### [](#)Additional information
       * After you call this operation, you can obtain the task ID. You can specify the task ID in the DescribeIdentifyTaskDetail operation to query the state of the task.
       * After the task is complete, you can call the DescribeOssObjectDetailV2 operation to query the identification results of sensitive data in the related OSS objects. When you call the DescribeOssObjectDetailV2 operation, you must specify BucketName, ServiceRegionId, and ObjectKey.
       *
       * @param tmpReq ScanOssObjectV1Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScanOssObjectV1Response
       */
      Models::ScanOssObjectV1Response scanOssObjectV1WithOptions(const Models::ScanOssObjectV1Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an identification task to scan sensitive data in Object Storage Service (OSS) objects.
       *
       * @description ### [](#)Prerequisites
       * To call this operation, make sure that asset authorization for your OSS bucket is complete and the bucket is connected. If the authorization is not complete, the bucket_not_authorized error code is returned when you call the operation.
       * ### [](#qps-)Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * ### [](#)Additional information
       * After you call this operation, you can obtain the task ID. You can specify the task ID in the DescribeIdentifyTaskDetail operation to query the state of the task.
       * After the task is complete, you can call the DescribeOssObjectDetailV2 operation to query the identification results of sensitive data in the related OSS objects. When you call the DescribeOssObjectDetailV2 operation, you must specify BucketName, ServiceRegionId, and ObjectKey.
       *
       * @param request ScanOssObjectV1Request
       * @return ScanOssObjectV1Response
       */
      Models::ScanOssObjectV1Response scanOssObjectV1(const Models::ScanOssObjectV1Request &request);

      /**
       * @summary Stops a de-identification task. After you stop a de-identification task, you can resume the task by calling the ManualTriggerMaskingProcess operation.
       *
       * @description You can call this operation to stop a de-identification task that is running. For example, you can stop a de-identification task that is used to de-identify specific data.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request StopMaskingProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopMaskingProcessResponse
       */
      Models::StopMaskingProcessResponse stopMaskingProcessWithOptions(const Models::StopMaskingProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a de-identification task. After you stop a de-identification task, you can resume the task by calling the ManualTriggerMaskingProcess operation.
       *
       * @description You can call this operation to stop a de-identification task that is running. For example, you can stop a de-identification task that is used to de-identify specific data.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request StopMaskingProcessRequest
       * @return StopMaskingProcessResponse
       */
      Models::StopMaskingProcessResponse stopMaskingProcess(const Models::StopMaskingProcessRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
