// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DMSENTERPRISE20181101_HPP_
#define ALIBABACLOUD_DMSENTERPRISE20181101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/DmsEnterprise20181101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/DmsEnterprise20181101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds instances, databases, and tables to the specified permission template.
       *
       * @param tmpReq AddAuthorityTemplateItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAuthorityTemplateItemsResponse
       */
      Models::AddAuthorityTemplateItemsResponse addAuthorityTemplateItemsWithOptions(const Models::AddAuthorityTemplateItemsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds instances, databases, and tables to the specified permission template.
       *
       * @param request AddAuthorityTemplateItemsRequest
       * @return AddAuthorityTemplateItemsResponse
       */
      Models::AddAuthorityTemplateItemsResponse addAuthorityTemplateItems(const Models::AddAuthorityTemplateItemsRequest &request);

      /**
       * @summary Adds a masking rule.
       *
       * @param request AddDesensitizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDesensitizationRuleResponse
       */
      Models::AddDesensitizationRuleResponse addDesensitizationRuleWithOptions(const Models::AddDesensitizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a masking rule.
       *
       * @param request AddDesensitizationRuleRequest
       * @return AddDesensitizationRuleResponse
       */
      Models::AddDesensitizationRuleResponse addDesensitizationRule(const Models::AddDesensitizationRuleRequest &request);

      /**
       * @summary Adds a database instance to Data Management (DMS) and enable security hosting for the instance.
       *
       * @description You must be a database administrator (DBA) or a DMS administrator. For more information, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
       *
       * @param request AddInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddInstanceResponse
       */
      Models::AddInstanceResponse addInstanceWithOptions(const Models::AddInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a database instance to Data Management (DMS) and enable security hosting for the instance.
       *
       * @description You must be a database administrator (DBA) or a DMS administrator. For more information, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
       *
       * @param request AddInstanceRequest
       * @return AddInstanceResponse
       */
      Models::AddInstanceResponse addInstance(const Models::AddInstanceRequest &request);

      /**
       * @summary Adds a workspace administrator, a workspace member, or a task flow developer in Data Management (DMS).
       *
       * @description You must call this operation as a DMS administrator, a database administrator (DBA), or a workspace administrator.
       * Usage notes:
       * *   Before you call this operation to add a user as a task flow developer, make sure that you have added the user as a workspace member.
       * *   You cannot call this operation to transfer the ownership of a task flow. To transfer the ownership of a task flow, call the [ChangLhDagOwner](https://help.aliyun.com/document_detail/424761.html) operation.
       * *   For more information about workspace roles and permissions, see [Manage permissions on a workspace](https://help.aliyun.com/document_detail/410893.html).
       *
       * @param tmpReq AddLhMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLhMembersResponse
       */
      Models::AddLhMembersResponse addLhMembersWithOptions(const Models::AddLhMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a workspace administrator, a workspace member, or a task flow developer in Data Management (DMS).
       *
       * @description You must call this operation as a DMS administrator, a database administrator (DBA), or a workspace administrator.
       * Usage notes:
       * *   Before you call this operation to add a user as a task flow developer, make sure that you have added the user as a workspace member.
       * *   You cannot call this operation to transfer the ownership of a task flow. To transfer the ownership of a task flow, call the [ChangLhDagOwner](https://help.aliyun.com/document_detail/424761.html) operation.
       * *   For more information about workspace roles and permissions, see [Manage permissions on a workspace](https://help.aliyun.com/document_detail/410893.html).
       *
       * @param request AddLhMembersRequest
       * @return AddLhMembersResponse
       */
      Models::AddLhMembersResponse addLhMembers(const Models::AddLhMembersRequest &request);

      /**
       * @summary Adds a routing algorithm to a logical table.
       *
       * @param request AddLogicTableRouteConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLogicTableRouteConfigResponse
       */
      Models::AddLogicTableRouteConfigResponse addLogicTableRouteConfigWithOptions(const Models::AddLogicTableRouteConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a routing algorithm to a logical table.
       *
       * @param request AddLogicTableRouteConfigRequest
       * @return AddLogicTableRouteConfigResponse
       */
      Models::AddLogicTableRouteConfigResponse addLogicTableRouteConfig(const Models::AddLogicTableRouteConfigRequest &request);

      /**
       * @summary Add a table to an asset category.
       *
       * @param request AddTableToCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTableToCategoryResponse
       */
      Models::AddTableToCategoryResponse addTableToCategoryWithOptions(const Models::AddTableToCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a table to an asset category.
       *
       * @param request AddTableToCategoryRequest
       * @return AddTableToCategoryResponse
       */
      Models::AddTableToCategoryResponse addTableToCategory(const Models::AddTableToCategoryRequest &request);

      /**
       * @summary Adds directed edges for an existing task node.
       *
       * @description When you add directed edges for a task node, take note of the following limits:
       * 1. The endpoints of the specified edge exist in the Directed Acyclic Graph (DAG) of the task flow specified by DagId.
       * 2. After a backward edge is added, the DAG does not contain loops.
       *
       * @param tmpReq AddTaskFlowEdgesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTaskFlowEdgesResponse
       */
      Models::AddTaskFlowEdgesResponse addTaskFlowEdgesWithOptions(const Models::AddTaskFlowEdgesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds directed edges for an existing task node.
       *
       * @description When you add directed edges for a task node, take note of the following limits:
       * 1. The endpoints of the specified edge exist in the Directed Acyclic Graph (DAG) of the task flow specified by DagId.
       * 2. After a backward edge is added, the DAG does not contain loops.
       *
       * @param request AddTaskFlowEdgesRequest
       * @return AddTaskFlowEdgesResponse
       */
      Models::AddTaskFlowEdgesResponse addTaskFlowEdges(const Models::AddTaskFlowEdgesRequest &request);

      /**
       * @summary Analyzes the lineage (dependencies and influence) between tables and between fields in SQL statements.
       *
       * @description The following conditions must be met before you call this API operation.
       * *   The database instance is of one of the following types: ApsaraDB RDS for MySQL, PolarDB for MySQL, AnalyticDB for MySQL, ApsaraDB RDS for PostgreSQL, PolarDB for PostgreSQL, AnalyticDB for PostgreSQL, Oracle, and openGauss.
       * *   A database instance is managed in Security Collaboration mode. For more information about control modes, see [Control modes](https://help.aliyun.com/document_detail/151629.html).
       *
       * @param request AnalyzeSQLLineageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnalyzeSQLLineageResponse
       */
      Models::AnalyzeSQLLineageResponse analyzeSQLLineageWithOptions(const Models::AnalyzeSQLLineageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Analyzes the lineage (dependencies and influence) between tables and between fields in SQL statements.
       *
       * @description The following conditions must be met before you call this API operation.
       * *   The database instance is of one of the following types: ApsaraDB RDS for MySQL, PolarDB for MySQL, AnalyticDB for MySQL, ApsaraDB RDS for PostgreSQL, PolarDB for PostgreSQL, AnalyticDB for PostgreSQL, Oracle, and openGauss.
       * *   A database instance is managed in Security Collaboration mode. For more information about control modes, see [Control modes](https://help.aliyun.com/document_detail/151629.html).
       *
       * @param request AnalyzeSQLLineageRequest
       * @return AnalyzeSQLLineageResponse
       */
      Models::AnalyzeSQLLineageResponse analyzeSQLLineage(const Models::AnalyzeSQLLineageRequest &request);

      /**
       * @summary Answers the syntax questions of the corresponding engine according to the specified database ID.
       *
       * @description You can call this operation to answer the syntax questions of the corresponding engine according to the specified database ID.
       *
       * @param request AnswerSqlSyntaxByMetaAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnswerSqlSyntaxByMetaAgentResponse
       */
      Models::AnswerSqlSyntaxByMetaAgentResponse answerSqlSyntaxByMetaAgentWithOptions(const Models::AnswerSqlSyntaxByMetaAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Answers the syntax questions of the corresponding engine according to the specified database ID.
       *
       * @description You can call this operation to answer the syntax questions of the corresponding engine according to the specified database ID.
       *
       * @param request AnswerSqlSyntaxByMetaAgentRequest
       * @return AnswerSqlSyntaxByMetaAgentResponse
       */
      Models::AnswerSqlSyntaxByMetaAgentResponse answerSqlSyntaxByMetaAgent(const Models::AnswerSqlSyntaxByMetaAgentRequest &request);

      /**
       * @summary Reviews a ticket.
       *
       * @param request ApproveOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApproveOrderResponse
       */
      Models::ApproveOrderResponse approveOrderWithOptions(const Models::ApproveOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reviews a ticket.
       *
       * @param request ApproveOrderRequest
       * @return ApproveOrderResponse
       */
      Models::ApproveOrderResponse approveOrder(const Models::ApproveOrderRequest &request);

      /**
       * @summary Backfills data for task orchestration.
       *
       * @description During a data backfill, task flows are run in sequence based on their dates. You can specify whether task flows are run in chronological or reverse chronological order. After the data backfill is complete, you can specify a date or date range, and a node range to run task flows.
       *
       * @param tmpReq BackFillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BackFillResponse
       */
      Models::BackFillResponse backFillWithOptions(const Models::BackFillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Backfills data for task orchestration.
       *
       * @description During a data backfill, task flows are run in sequence based on their dates. You can specify whether task flows are run in chronological or reverse chronological order. After the data backfill is complete, you can specify a date or date range, and a node range to run task flows.
       *
       * @param request BackFillRequest
       * @return BackFillResponse
       */
      Models::BackFillResponse backFill(const Models::BackFillRequest &request);

      /**
       * @summary Creates multiple partitions for a table in a data lakehouse at a time.
       *
       * @param tmpReq BatchCreateDataLakePartitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateDataLakePartitionsResponse
       */
      Models::BatchCreateDataLakePartitionsResponse batchCreateDataLakePartitionsWithOptions(const Models::BatchCreateDataLakePartitionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates multiple partitions for a table in a data lakehouse at a time.
       *
       * @param request BatchCreateDataLakePartitionsRequest
       * @return BatchCreateDataLakePartitionsResponse
       */
      Models::BatchCreateDataLakePartitionsResponse batchCreateDataLakePartitions(const Models::BatchCreateDataLakePartitionsRequest &request);

      /**
       * @summary Deletes multiple partitions of a table in a data lakehouse at a time.
       *
       * @param request BatchDeleteDataLakePartitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteDataLakePartitionsResponse
       */
      Models::BatchDeleteDataLakePartitionsResponse batchDeleteDataLakePartitionsWithOptions(const Models::BatchDeleteDataLakePartitionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple partitions of a table in a data lakehouse at a time.
       *
       * @param request BatchDeleteDataLakePartitionsRequest
       * @return BatchDeleteDataLakePartitionsResponse
       */
      Models::BatchDeleteDataLakePartitionsResponse batchDeleteDataLakePartitions(const Models::BatchDeleteDataLakePartitionsRequest &request);

      /**
       * @summary Updates multiple partitions of a table in a data lakehouse at a time.
       *
       * @param tmpReq BatchUpdateDataLakePartitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateDataLakePartitionsResponse
       */
      Models::BatchUpdateDataLakePartitionsResponse batchUpdateDataLakePartitionsWithOptions(const Models::BatchUpdateDataLakePartitionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates multiple partitions of a table in a data lakehouse at a time.
       *
       * @param request BatchUpdateDataLakePartitionsRequest
       * @return BatchUpdateDataLakePartitionsResponse
       */
      Models::BatchUpdateDataLakePartitionsResponse batchUpdateDataLakePartitions(const Models::BatchUpdateDataLakePartitionsRequest &request);

      /**
       * @summary Purchases a pay-as-you-go Data Management (DMS) resource.
       *
       * @param request BuyPayAsYouGoOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BuyPayAsYouGoOrderResponse
       */
      Models::BuyPayAsYouGoOrderResponse buyPayAsYouGoOrderWithOptions(const Models::BuyPayAsYouGoOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a pay-as-you-go Data Management (DMS) resource.
       *
       * @param request BuyPayAsYouGoOrderRequest
       * @return BuyPayAsYouGoOrderResponse
       */
      Models::BuyPayAsYouGoOrderResponse buyPayAsYouGoOrder(const Models::BuyPayAsYouGoOrderRequest &request);

      /**
       * @summary Adjusts the sensitivity level of one or more fields.
       *
       * @param request ChangeColumnSecLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeColumnSecLevelResponse
       */
      Models::ChangeColumnSecLevelResponse changeColumnSecLevelWithOptions(const Models::ChangeColumnSecLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adjusts the sensitivity level of one or more fields.
       *
       * @param request ChangeColumnSecLevelRequest
       * @return ChangeColumnSecLevelResponse
       */
      Models::ChangeColumnSecLevelResponse changeColumnSecLevel(const Models::ChangeColumnSecLevelRequest &request);

      /**
       * @summary Changes the security level of a column.
       *
       * @param request ChangeColumnSecurityLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeColumnSecurityLevelResponse
       */
      Models::ChangeColumnSecurityLevelResponse changeColumnSecurityLevelWithOptions(const Models::ChangeColumnSecurityLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the security level of a column.
       *
       * @param request ChangeColumnSecurityLevelRequest
       * @return ChangeColumnSecurityLevelResponse
       */
      Models::ChangeColumnSecurityLevelResponse changeColumnSecurityLevel(const Models::ChangeColumnSecurityLevelRequest &request);

      /**
       * @summary 移交数仓开发任务流
       *
       * @description Usage notes:
       * *   If you call this operation to transfer the ownership of a published task flow, the ownership transfer does not take effect.
       * *   You can call the [ReDeployLhDagVersion](https://help.aliyun.com/document_detail/424712.html) operation to redeploy a published version of a task flow.
       *
       * @param request ChangeLhDagOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeLhDagOwnerResponse
       */
      Models::ChangeLhDagOwnerResponse changeLhDagOwnerWithOptions(const Models::ChangeLhDagOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移交数仓开发任务流
       *
       * @description Usage notes:
       * *   If you call this operation to transfer the ownership of a published task flow, the ownership transfer does not take effect.
       * *   You can call the [ReDeployLhDagVersion](https://help.aliyun.com/document_detail/424712.html) operation to redeploy a published version of a task flow.
       *
       * @param request ChangeLhDagOwnerRequest
       * @return ChangeLhDagOwnerResponse
       */
      Models::ChangeLhDagOwnerResponse changeLhDagOwner(const Models::ChangeLhDagOwnerRequest &request);

      /**
       * @summary Chat API with DMS Data Masking capabilities.
       *
       * @description Chat API with DMS Data Masking capabilities.
       *
       * @param tmpReq ChatWithDesensitizeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatWithDesensitizeResponse
       */
      Models::ChatWithDesensitizeResponse chatWithDesensitizeWithOptions(const Models::ChatWithDesensitizeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Chat API with DMS Data Masking capabilities.
       *
       * @description Chat API with DMS Data Masking capabilities.
       *
       * @param request ChatWithDesensitizeRequest
       * @return ChatWithDesensitizeResponse
       */
      Models::ChatWithDesensitizeResponse chatWithDesensitize(const Models::ChatWithDesensitizeRequest &request);

      /**
       * @summary Chat SSE API with DMS Data Masking capability.
       *
       * @description Chat SSE API with DMS Data Masking capability.
       *
       * @param tmpReq ChatWithDesensitizeSSERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatWithDesensitizeSSEResponse
       */
      FutureGenerator<Models::ChatWithDesensitizeSSEResponse> chatWithDesensitizeSSEWithSSE(const Models::ChatWithDesensitizeSSERequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Chat SSE API with DMS Data Masking capability.
       *
       * @description Chat SSE API with DMS Data Masking capability.
       *
       * @param tmpReq ChatWithDesensitizeSSERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatWithDesensitizeSSEResponse
       */
      Models::ChatWithDesensitizeSSEResponse chatWithDesensitizeSSEWithOptions(const Models::ChatWithDesensitizeSSERequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Chat SSE API with DMS Data Masking capability.
       *
       * @description Chat SSE API with DMS Data Masking capability.
       *
       * @param request ChatWithDesensitizeSSERequest
       * @return ChatWithDesensitizeSSEResponse
       */
      Models::ChatWithDesensitizeSSEResponse chatWithDesensitizeSSE(const Models::ChatWithDesensitizeSSERequest &request);

      /**
       * @summary Batch verify table permissions.
       *
       * @description Verify the permissions on multiple tables at a time.
       *
       * @param tmpReq CheckBatchTableAccessPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckBatchTableAccessPermissionResponse
       */
      Models::CheckBatchTableAccessPermissionResponse checkBatchTableAccessPermissionWithOptions(const Models::CheckBatchTableAccessPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch verify table permissions.
       *
       * @description Verify the permissions on multiple tables at a time.
       *
       * @param request CheckBatchTableAccessPermissionRequest
       * @return CheckBatchTableAccessPermissionResponse
       */
      Models::CheckBatchTableAccessPermissionResponse checkBatchTableAccessPermission(const Models::CheckBatchTableAccessPermissionRequest &request);

      /**
       * @summary Closes a ticket.
       *
       * @param request CloseOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseOrderResponse
       */
      Models::CloseOrderResponse closeOrderWithOptions(const Models::CloseOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Closes a ticket.
       *
       * @param request CloseOrderRequest
       * @return CloseOrderResponse
       */
      Models::CloseOrderResponse closeOrder(const Models::CloseOrderRequest &request);

      /**
       * @summary Attaches a system policy or custom policy to a DMS user or custom role.
       *
       * @param request CreateAbacAuthorizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAbacAuthorizationResponse
       */
      Models::CreateAbacAuthorizationResponse createAbacAuthorizationWithOptions(const Models::CreateAbacAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a system policy or custom policy to a DMS user or custom role.
       *
       * @param request CreateAbacAuthorizationRequest
       * @return CreateAbacAuthorizationResponse
       */
      Models::CreateAbacAuthorizationResponse createAbacAuthorization(const Models::CreateAbacAuthorizationRequest &request);

      /**
       * @summary Creates a policy to manage the permissions on DMS features and data resources managed in DMS in a fine-grained manner.
       *
       * @description Currently, this feature is in the phased release phase. Only users who have phased out can use this feature and related APIs. For more information about the policy feature, see [Manage policies](https://help.aliyun.com/document_detail/2848565.html).
       *
       * @param request CreateAbacPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAbacPolicyResponse
       */
      Models::CreateAbacPolicyResponse createAbacPolicyWithOptions(const Models::CreateAbacPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a policy to manage the permissions on DMS features and data resources managed in DMS in a fine-grained manner.
       *
       * @description Currently, this feature is in the phased release phase. Only users who have phased out can use this feature and related APIs. For more information about the policy feature, see [Manage policies](https://help.aliyun.com/document_detail/2848565.html).
       *
       * @param request CreateAbacPolicyRequest
       * @return CreateAbacPolicyResponse
       */
      Models::CreateAbacPolicyResponse createAbacPolicy(const Models::CreateAbacPolicyRequest &request);

      /**
       * @summary Creates a permission template
       *
       * @description You are a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
       *
       * @param request CreateAuthorityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAuthorityTemplateResponse
       */
      Models::CreateAuthorityTemplateResponse createAuthorityTemplateWithOptions(const Models::CreateAuthorityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a permission template
       *
       * @description You are a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
       *
       * @param request CreateAuthorityTemplateRequest
       * @return CreateAuthorityTemplateResponse
       */
      Models::CreateAuthorityTemplateResponse createAuthorityTemplate(const Models::CreateAuthorityTemplateRequest &request);

      /**
       * @summary Creates a data archiving ticket to archive data to destinations such as dedicated storage space or ApsaraDB RDS for MySQL instances.
       *
       * @description You can call this API operation only for database instances that are managed in Security Collaboration mode.
       *
       * @param tmpReq CreateDataArchiveOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataArchiveOrderResponse
       */
      Models::CreateDataArchiveOrderResponse createDataArchiveOrderWithOptions(const Models::CreateDataArchiveOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data archiving ticket to archive data to destinations such as dedicated storage space or ApsaraDB RDS for MySQL instances.
       *
       * @description You can call this API operation only for database instances that are managed in Security Collaboration mode.
       *
       * @param request CreateDataArchiveOrderRequest
       * @return CreateDataArchiveOrderResponse
       */
      Models::CreateDataArchiveOrderResponse createDataArchiveOrder(const Models::CreateDataArchiveOrderRequest &request);

      /**
       * @summary Creates a ticket for changing data in Data Management (DMS).
       *
       * @description For more information about the Normal Data Modify feature, see [Change regular data](https://help.aliyun.com/document_detail/58419.html).
       *
       * @param tmpReq CreateDataCorrectOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataCorrectOrderResponse
       */
      Models::CreateDataCorrectOrderResponse createDataCorrectOrderWithOptions(const Models::CreateDataCorrectOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a ticket for changing data in Data Management (DMS).
       *
       * @description For more information about the Normal Data Modify feature, see [Change regular data](https://help.aliyun.com/document_detail/58419.html).
       *
       * @param request CreateDataCorrectOrderRequest
       * @return CreateDataCorrectOrderResponse
       */
      Models::CreateDataCorrectOrderResponse createDataCorrectOrder(const Models::CreateDataCorrectOrderRequest &request);

      /**
       * @summary Creates a ticket for clearing historical data.
       *
       * @description For more information about the historical data cleaning, see [Clear historical data](https://help.aliyun.com/document_detail/162507.html).
       * This operation can be used only for MySQL databases.
       *
       * @param tmpReq CreateDataCronClearOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataCronClearOrderResponse
       */
      Models::CreateDataCronClearOrderResponse createDataCronClearOrderWithOptions(const Models::CreateDataCronClearOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a ticket for clearing historical data.
       *
       * @description For more information about the historical data cleaning, see [Clear historical data](https://help.aliyun.com/document_detail/162507.html).
       * This operation can be used only for MySQL databases.
       *
       * @param request CreateDataCronClearOrderRequest
       * @return CreateDataCronClearOrderResponse
       */
      Models::CreateDataCronClearOrderResponse createDataCronClearOrder(const Models::CreateDataCronClearOrderRequest &request);

      /**
       * @summary Creates a ticket to export an SQL result set.
       *
       * @param tmpReq CreateDataExportOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataExportOrderResponse
       */
      Models::CreateDataExportOrderResponse createDataExportOrderWithOptions(const Models::CreateDataExportOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a ticket to export an SQL result set.
       *
       * @param request CreateDataExportOrderRequest
       * @return CreateDataExportOrderResponse
       */
      Models::CreateDataExportOrderResponse createDataExportOrder(const Models::CreateDataExportOrderRequest &request);

      /**
       * @summary Creates a ticket for importing data to Data Management (DMS).
       *
       * @description For more information about the Large Data Import feature, see [Import data](https://help.aliyun.com/document_detail/161439.html).
       *
       * @param tmpReq CreateDataImportOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataImportOrderResponse
       */
      Models::CreateDataImportOrderResponse createDataImportOrderWithOptions(const Models::CreateDataImportOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a ticket for importing data to Data Management (DMS).
       *
       * @description For more information about the Large Data Import feature, see [Import data](https://help.aliyun.com/document_detail/161439.html).
       *
       * @param request CreateDataImportOrderRequest
       * @return CreateDataImportOrderResponse
       */
      Models::CreateDataImportOrderResponse createDataImportOrder(const Models::CreateDataImportOrderRequest &request);

      /**
       * @summary Creates a database in a data lakehouse.
       *
       * @param tmpReq CreateDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakeDatabaseResponse
       */
      Models::CreateDataLakeDatabaseResponse createDataLakeDatabaseWithOptions(const Models::CreateDataLakeDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database in a data lakehouse.
       *
       * @param request CreateDataLakeDatabaseRequest
       * @return CreateDataLakeDatabaseResponse
       */
      Models::CreateDataLakeDatabaseResponse createDataLakeDatabase(const Models::CreateDataLakeDatabaseRequest &request);

      /**
       * @summary Creates a custom function in a data lakehouse.
       *
       * @param tmpReq CreateDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakeFunctionResponse
       */
      Models::CreateDataLakeFunctionResponse createDataLakeFunctionWithOptions(const Models::CreateDataLakeFunctionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom function in a data lakehouse.
       *
       * @param request CreateDataLakeFunctionRequest
       * @return CreateDataLakeFunctionResponse
       */
      Models::CreateDataLakeFunctionResponse createDataLakeFunction(const Models::CreateDataLakeFunctionRequest &request);

      /**
       * @summary Creates a partition for a table in a data lakehouse.
       *
       * @param tmpReq CreateDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakePartitionResponse
       */
      Models::CreateDataLakePartitionResponse createDataLakePartitionWithOptions(const Models::CreateDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a partition for a table in a data lakehouse.
       *
       * @param request CreateDataLakePartitionRequest
       * @return CreateDataLakePartitionResponse
       */
      Models::CreateDataLakePartitionResponse createDataLakePartition(const Models::CreateDataLakePartitionRequest &request);

      /**
       * @summary Creates a table in a data lakehouse.
       *
       * @param tmpReq CreateDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakeTableResponse
       */
      Models::CreateDataLakeTableResponse createDataLakeTableWithOptions(const Models::CreateDataLakeTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a table in a data lakehouse.
       *
       * @param request CreateDataLakeTableRequest
       * @return CreateDataLakeTableResponse
       */
      Models::CreateDataLakeTableResponse createDataLakeTable(const Models::CreateDataLakeTableRequest &request);

      /**
       * @summary Creates a data tracking ticket.
       *
       * @description This operation is available only for instances that are managed in Security Collaboration mode.
       *
       * @param tmpReq CreateDataTrackOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataTrackOrderResponse
       */
      Models::CreateDataTrackOrderResponse createDataTrackOrderWithOptions(const Models::CreateDataTrackOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data tracking ticket.
       *
       * @description This operation is available only for instances that are managed in Security Collaboration mode.
       *
       * @param request CreateDataTrackOrderRequest
       * @return CreateDataTrackOrderResponse
       */
      Models::CreateDataTrackOrderResponse createDataTrackOrder(const Models::CreateDataTrackOrderRequest &request);

      /**
       * @summary Creates a database export ticket.
       *
       * @param tmpReq CreateDatabaseExportOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatabaseExportOrderResponse
       */
      Models::CreateDatabaseExportOrderResponse createDatabaseExportOrderWithOptions(const Models::CreateDatabaseExportOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database export ticket.
       *
       * @param request CreateDatabaseExportOrderRequest
       * @return CreateDatabaseExportOrderResponse
       */
      Models::CreateDatabaseExportOrderResponse createDatabaseExportOrder(const Models::CreateDatabaseExportOrderRequest &request);

      /**
       * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
       *
       * @description ## 请求说明
       * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
       * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
       * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
       * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
       * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
       * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
       * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
       *
       * @param request CreateDifyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDifyInstanceResponse
       */
      Models::CreateDifyInstanceResponse createDifyInstanceWithOptions(const Models::CreateDifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
       *
       * @description ## 请求说明
       * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
       * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
       * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
       * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
       * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
       * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
       * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
       *
       * @param request CreateDifyInstanceRequest
       * @return CreateDifyInstanceResponse
       */
      Models::CreateDifyInstanceResponse createDifyInstance(const Models::CreateDifyInstanceRequest &request);

      /**
       * @summary 创建无锁变更工单
       *
       * @description For more information about the lock-free change feature, see [Overview](https://help.aliyun.com/document_detail/207847.html).
       * This operation can be used only for instances that are managed in Stable Change or Security Collaboration mode. For more information, see [Change data without the need to lock tables](https://help.aliyun.com/document_detail/96145.html) and [Change schemas without locking tables](https://help.aliyun.com/document_detail/98373.html).
       *
       * @param tmpReq CreateFreeLockCorrectOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFreeLockCorrectOrderResponse
       */
      Models::CreateFreeLockCorrectOrderResponse createFreeLockCorrectOrderWithOptions(const Models::CreateFreeLockCorrectOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建无锁变更工单
       *
       * @description For more information about the lock-free change feature, see [Overview](https://help.aliyun.com/document_detail/207847.html).
       * This operation can be used only for instances that are managed in Stable Change or Security Collaboration mode. For more information, see [Change data without the need to lock tables](https://help.aliyun.com/document_detail/96145.html) and [Change schemas without locking tables](https://help.aliyun.com/document_detail/98373.html).
       *
       * @param request CreateFreeLockCorrectOrderRequest
       * @return CreateFreeLockCorrectOrderResponse
       */
      Models::CreateFreeLockCorrectOrderResponse createFreeLockCorrectOrder(const Models::CreateFreeLockCorrectOrderRequest &request);

      /**
       * @summary Creates a workspace for data warehouse development in Data Management (DMS).
       *
       * @description *   The workspace name must be unique within a tenant. If a workspace with the same name already exists within the tenant, the call may fail.
       * *   You can call the [GetLhSpaceByName](https://help.aliyun.com/document_detail/424379.html) operation to query whether a workspace with a specific name already exists as a DMS administrator or database administrator (DBA).
       *
       * @param request CreateLakeHouseSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLakeHouseSpaceResponse
       */
      Models::CreateLakeHouseSpaceResponse createLakeHouseSpaceWithOptions(const Models::CreateLakeHouseSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workspace for data warehouse development in Data Management (DMS).
       *
       * @description *   The workspace name must be unique within a tenant. If a workspace with the same name already exists within the tenant, the call may fail.
       * *   You can call the [GetLhSpaceByName](https://help.aliyun.com/document_detail/424379.html) operation to query whether a workspace with a specific name already exists as a DMS administrator or database administrator (DBA).
       *
       * @param request CreateLakeHouseSpaceRequest
       * @return CreateLakeHouseSpaceResponse
       */
      Models::CreateLakeHouseSpaceResponse createLakeHouseSpace(const Models::CreateLakeHouseSpaceRequest &request);

      /**
       * @summary Creates a logical database in Database Management (DMS).
       *
       * @param tmpReq CreateLogicDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLogicDatabaseResponse
       */
      Models::CreateLogicDatabaseResponse createLogicDatabaseWithOptions(const Models::CreateLogicDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a logical database in Database Management (DMS).
       *
       * @param request CreateLogicDatabaseRequest
       * @return CreateLogicDatabaseResponse
       */
      Models::CreateLogicDatabaseResponse createLogicDatabase(const Models::CreateLogicDatabaseRequest &request);

      /**
       * @summary Create Asset Category
       *
       * @param tmpReq CreateMetaCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMetaCategoryResponse
       */
      Models::CreateMetaCategoryResponse createMetaCategoryWithOptions(const Models::CreateMetaCategoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Asset Category
       *
       * @param request CreateMetaCategoryRequest
       * @return CreateMetaCategoryResponse
       */
      Models::CreateMetaCategoryResponse createMetaCategory(const Models::CreateMetaCategoryRequest &request);

      /**
       * @summary Creates a ticket in Data Management (DMS).
       *
       * @description To facilitate ticket creation, you can call the following dedicated operations to create some types of tickets:
       * *   [CreateDataCorrectOrder](https://help.aliyun.com/document_detail/208388.html): creates a regular data change ticket.
       * *   [CreateDataCronClearOrder](https://help.aliyun.com/document_detail/208385.html): creates a ticket to clear historical data.
       * *   [CreateDataImportOrder](https://help.aliyun.com/document_detail/208387.html): creates a data import ticket.
       * *   [CreateFreeLockCorrectOrder](https://help.aliyun.com/document_detail/208386.html): creates a lock-free change ticket.
       *
       * @param tmpReq CreateOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrderWithOptions(const Models::CreateOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a ticket in Data Management (DMS).
       *
       * @description To facilitate ticket creation, you can call the following dedicated operations to create some types of tickets:
       * *   [CreateDataCorrectOrder](https://help.aliyun.com/document_detail/208388.html): creates a regular data change ticket.
       * *   [CreateDataCronClearOrder](https://help.aliyun.com/document_detail/208385.html): creates a ticket to clear historical data.
       * *   [CreateDataImportOrder](https://help.aliyun.com/document_detail/208387.html): creates a data import ticket.
       * *   [CreateFreeLockCorrectOrder](https://help.aliyun.com/document_detail/208386.html): creates a lock-free change ticket.
       *
       * @param request CreateOrderRequest
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrder(const Models::CreateOrderRequest &request);

      /**
       * @summary Creates a programmable object ticket.
       *
       * @description You can call this API operation only for database instances that are managed in Security Collaboration mode.
       *
       * @param tmpReq CreateProcCorrectOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProcCorrectOrderResponse
       */
      Models::CreateProcCorrectOrderResponse createProcCorrectOrderWithOptions(const Models::CreateProcCorrectOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a programmable object ticket.
       *
       * @description You can call this API operation only for database instances that are managed in Security Collaboration mode.
       *
       * @param request CreateProcCorrectOrderRequest
       * @return CreateProcCorrectOrderResponse
       */
      Models::CreateProcCorrectOrderResponse createProcCorrectOrder(const Models::CreateProcCorrectOrderRequest &request);

      /**
       * @summary Enables the secure access proxy feature for a database instance.
       *
       * @description - The database instance runs the MySQL or MariaDB database engine. For example, the database instance can be an ApsaraDB RDS for MySQL instance, a PolarDB for MySQL cluster, a Distributed Relational Database Service (DRDS) cluster, or an AnalyticDB for MySQL cluster. The database instance can also be a self-managed MySQL or MariaDB database, or a MySQL or MariaDB database in a third-party cloud.
       * - The database instance resides in the China (Hangzhou) or China (Beijing) region.
       * - You are a Data Management (DMS) administrator, a database administrator (DBA), or the owner of the database instance.
       *
       * @param request CreateProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProxyResponse
       */
      Models::CreateProxyResponse createProxyWithOptions(const Models::CreateProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the secure access proxy feature for a database instance.
       *
       * @description - The database instance runs the MySQL or MariaDB database engine. For example, the database instance can be an ApsaraDB RDS for MySQL instance, a PolarDB for MySQL cluster, a Distributed Relational Database Service (DRDS) cluster, or an AnalyticDB for MySQL cluster. The database instance can also be a self-managed MySQL or MariaDB database, or a MySQL or MariaDB database in a third-party cloud.
       * - The database instance resides in the China (Hangzhou) or China (Beijing) region.
       * - You are a Data Management (DMS) administrator, a database administrator (DBA), or the owner of the database instance.
       *
       * @param request CreateProxyRequest
       * @return CreateProxyResponse
       */
      Models::CreateProxyResponse createProxy(const Models::CreateProxyRequest &request);

      /**
       * @summary You can call the CreateProxyAccess to authorize users to access the DB instance through the Data Security Protection agent.
       *
       * @description - The data security protection feature is enabled for the instance.
       * - Your user role is the administrator role, DBA role, or the owner of data security protection for the current instance.
       *
       * @param request CreateProxyAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProxyAccessResponse
       */
      Models::CreateProxyAccessResponse createProxyAccessWithOptions(const Models::CreateProxyAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the CreateProxyAccess to authorize users to access the DB instance through the Data Security Protection agent.
       *
       * @description - The data security protection feature is enabled for the instance.
       * - Your user role is the administrator role, DBA role, or the owner of data security protection for the current instance.
       *
       * @param request CreateProxyAccessRequest
       * @return CreateProxyAccessResponse
       */
      Models::CreateProxyAccessResponse createProxyAccess(const Models::CreateProxyAccessRequest &request);

      /**
       * @summary Executes a schema design ticket.
       *
       * @param request CreatePublishGroupTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePublishGroupTaskResponse
       */
      Models::CreatePublishGroupTaskResponse createPublishGroupTaskWithOptions(const Models::CreatePublishGroupTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a schema design ticket.
       *
       * @param request CreatePublishGroupTaskRequest
       * @return CreatePublishGroupTaskResponse
       */
      Models::CreatePublishGroupTaskResponse createPublishGroupTask(const Models::CreatePublishGroupTaskRequest &request);

      /**
       * @summary Creates a SQL review ticket.
       *
       * @description You can call this operation only for database instances that are managed in Security Collaboration mode.
       * For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
       *
       * @param tmpReq CreateSQLReviewOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSQLReviewOrderResponse
       */
      Models::CreateSQLReviewOrderResponse createSQLReviewOrderWithOptions(const Models::CreateSQLReviewOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a SQL review ticket.
       *
       * @description You can call this operation only for database instances that are managed in Security Collaboration mode.
       * For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
       *
       * @param request CreateSQLReviewOrderRequest
       * @return CreateSQLReviewOrderResponse
       */
      Models::CreateSQLReviewOrderResponse createSQLReviewOrder(const Models::CreateSQLReviewOrderRequest &request);

      /**
       * @summary Creates a business scenario to group task flows by business scenario.
       *
       * @param request CreateScenarioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScenarioResponse
       */
      Models::CreateScenarioResponse createScenarioWithOptions(const Models::CreateScenarioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a business scenario to group task flows by business scenario.
       *
       * @param request CreateScenarioRequest
       * @return CreateScenarioResponse
       */
      Models::CreateScenarioResponse createScenario(const Models::CreateScenarioRequest &request);

      /**
       * @summary Creates a security rule set.
       *
       * @param request CreateStandardGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStandardGroupResponse
       */
      Models::CreateStandardGroupResponse createStandardGroupWithOptions(const Models::CreateStandardGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a security rule set.
       *
       * @param request CreateStandardGroupRequest
       * @return CreateStandardGroupResponse
       */
      Models::CreateStandardGroupResponse createStandardGroup(const Models::CreateStandardGroupRequest &request);

      /**
       * @summary Creates a schema synchronization ticket.
       *
       * @param tmpReq CreateStructSyncOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStructSyncOrderResponse
       */
      Models::CreateStructSyncOrderResponse createStructSyncOrderWithOptions(const Models::CreateStructSyncOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a schema synchronization ticket.
       *
       * @param request CreateStructSyncOrderRequest
       * @return CreateStructSyncOrderResponse
       */
      Models::CreateStructSyncOrderResponse createStructSyncOrder(const Models::CreateStructSyncOrderRequest &request);

      /**
       * @summary Creates a task node for a task flow.
       *
       * @param request CreateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTaskWithOptions(const Models::CreateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task node for a task flow.
       *
       * @param request CreateTaskRequest
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTask(const Models::CreateTaskRequest &request);

      /**
       * @summary Creates a task flow.
       *
       * @param request CreateTaskFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskFlowResponse
       */
      Models::CreateTaskFlowResponse createTaskFlowWithOptions(const Models::CreateTaskFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task flow.
       *
       * @param request CreateTaskFlowRequest
       * @return CreateTaskFlowResponse
       */
      Models::CreateTaskFlowResponse createTaskFlow(const Models::CreateTaskFlowRequest &request);

      /**
       * @summary 创建上传附件任务
       *
       * @param request CreateUploadFileJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUploadFileJobResponse
       */
      Models::CreateUploadFileJobResponse createUploadFileJobWithOptions(const Models::CreateUploadFileJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建上传附件任务
       *
       * @param request CreateUploadFileJobRequest
       * @return CreateUploadFileJobResponse
       */
      Models::CreateUploadFileJobResponse createUploadFileJob(const Models::CreateUploadFileJobRequest &request);

      /**
       * @summary Creates a task to upload an Object Storage Service (OSS) file and obtain the key of the task.
       *
       * @param tmpReq CreateUploadOSSFileJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUploadOSSFileJobResponse
       */
      Models::CreateUploadOSSFileJobResponse createUploadOSSFileJobWithOptions(const Models::CreateUploadOSSFileJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task to upload an Object Storage Service (OSS) file and obtain the key of the task.
       *
       * @param request CreateUploadOSSFileJobRequest
       * @return CreateUploadOSSFileJobResponse
       */
      Models::CreateUploadOSSFileJobResponse createUploadOSSFileJob(const Models::CreateUploadOSSFileJobRequest &request);

      /**
       * @summary Creates a workspace.
       *
       * @description ## [](#)Prerequisites
       * *   A virtual private cloud (VPC) is created.
       * *   Log on to the DMS console by using an Alibaba Cloud account or a RAM user that has high permissions, and grant DMS the permissions to access cloud resources (AliyunDMSProcessingDataRolePolicy).
       *
       * @param request CreateWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspaceWithOptions(const Models::CreateWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workspace.
       *
       * @description ## [](#)Prerequisites
       * *   A virtual private cloud (VPC) is created.
       * *   Log on to the DMS console by using an Alibaba Cloud account or a RAM user that has high permissions, and grant DMS the permissions to access cloud resources (AliyunDMSProcessingDataRolePolicy).
       *
       * @param request CreateWorkspaceRequest
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspace(const Models::CreateWorkspaceRequest &request);

      /**
       * @summary Detaches a policy from a user or role.
       *
       * @param request DeleteAbacAuthorizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAbacAuthorizationResponse
       */
      Models::DeleteAbacAuthorizationResponse deleteAbacAuthorizationWithOptions(const Models::DeleteAbacAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a policy from a user or role.
       *
       * @param request DeleteAbacAuthorizationRequest
       * @return DeleteAbacAuthorizationResponse
       */
      Models::DeleteAbacAuthorizationResponse deleteAbacAuthorization(const Models::DeleteAbacAuthorizationRequest &request);

      /**
       * @summary Deletes a created permission policy.
       *
       * @param request DeleteAbacPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAbacPolicyResponse
       */
      Models::DeleteAbacPolicyResponse deleteAbacPolicyWithOptions(const Models::DeleteAbacPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a created permission policy.
       *
       * @param request DeleteAbacPolicyRequest
       * @return DeleteAbacPolicyResponse
       */
      Models::DeleteAbacPolicyResponse deleteAbacPolicy(const Models::DeleteAbacPolicyRequest &request);

      /**
       * @summary Deletes a permission template.
       *
       * @param request DeleteAuthorityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAuthorityTemplateResponse
       */
      Models::DeleteAuthorityTemplateResponse deleteAuthorityTemplateWithOptions(const Models::DeleteAuthorityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a permission template.
       *
       * @param request DeleteAuthorityTemplateRequest
       * @return DeleteAuthorityTemplateResponse
       */
      Models::DeleteAuthorityTemplateResponse deleteAuthorityTemplate(const Models::DeleteAuthorityTemplateRequest &request);

      /**
       * @summary Deletes a database from a data lakehouse.
       *
       * @param request DeleteDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakeDatabaseResponse
       */
      Models::DeleteDataLakeDatabaseResponse deleteDataLakeDatabaseWithOptions(const Models::DeleteDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database from a data lakehouse.
       *
       * @param request DeleteDataLakeDatabaseRequest
       * @return DeleteDataLakeDatabaseResponse
       */
      Models::DeleteDataLakeDatabaseResponse deleteDataLakeDatabase(const Models::DeleteDataLakeDatabaseRequest &request);

      /**
       * @summary Deletes a user-defined function in a data lakehouse.
       *
       * @param request DeleteDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakeFunctionResponse
       */
      Models::DeleteDataLakeFunctionResponse deleteDataLakeFunctionWithOptions(const Models::DeleteDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user-defined function in a data lakehouse.
       *
       * @param request DeleteDataLakeFunctionRequest
       * @return DeleteDataLakeFunctionResponse
       */
      Models::DeleteDataLakeFunctionResponse deleteDataLakeFunction(const Models::DeleteDataLakeFunctionRequest &request);

      /**
       * @summary Deletes a partition from a table in a data lakehouse.
       *
       * @param tmpReq DeleteDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakePartitionResponse
       */
      Models::DeleteDataLakePartitionResponse deleteDataLakePartitionWithOptions(const Models::DeleteDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a partition from a table in a data lakehouse.
       *
       * @param request DeleteDataLakePartitionRequest
       * @return DeleteDataLakePartitionResponse
       */
      Models::DeleteDataLakePartitionResponse deleteDataLakePartition(const Models::DeleteDataLakePartitionRequest &request);

      /**
       * @summary Deletes a table from a data lakehouse.
       *
       * @param request DeleteDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakeTableResponse
       */
      Models::DeleteDataLakeTableResponse deleteDataLakeTableWithOptions(const Models::DeleteDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a table from a data lakehouse.
       *
       * @param request DeleteDataLakeTableRequest
       * @return DeleteDataLakeTableResponse
       */
      Models::DeleteDataLakeTableResponse deleteDataLakeTable(const Models::DeleteDataLakeTableRequest &request);

      /**
       * @summary Removes a database instance from Data Management (DMS).
       *
       * @description Note: You can call this operation only to remove a database instance from the instance list of DMS. The instance is not deleted or shut down.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a database instance from Data Management (DMS).
       *
       * @description Note: You can call this operation only to remove a database instance from the instance list of DMS. The instance is not deleted or shut down.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Deletes a workspace.
       *
       * @param request DeleteLakeHouseSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLakeHouseSpaceResponse
       */
      Models::DeleteLakeHouseSpaceResponse deleteLakeHouseSpaceWithOptions(const Models::DeleteLakeHouseSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workspace.
       *
       * @param request DeleteLakeHouseSpaceRequest
       * @return DeleteLakeHouseSpaceResponse
       */
      Models::DeleteLakeHouseSpaceResponse deleteLakeHouseSpace(const Models::DeleteLakeHouseSpaceRequest &request);

      /**
       * @summary 删除数仓空间成员
       *
       * @description You must call this operation as a DMS administrator, a database administrator (DBA), or a workspace administrator.
       * You cannot call this operation to transfer the ownership of a task flow. To transfer the ownership of a task flow, call the [ChangLhDagOwner](https://help.aliyun.com/document_detail/424761.html) operation.
       *
       * @param tmpReq DeleteLhMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLhMembersResponse
       */
      Models::DeleteLhMembersResponse deleteLhMembersWithOptions(const Models::DeleteLhMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数仓空间成员
       *
       * @description You must call this operation as a DMS administrator, a database administrator (DBA), or a workspace administrator.
       * You cannot call this operation to transfer the ownership of a task flow. To transfer the ownership of a task flow, call the [ChangLhDagOwner](https://help.aliyun.com/document_detail/424761.html) operation.
       *
       * @param request DeleteLhMembersRequest
       * @return DeleteLhMembersResponse
       */
      Models::DeleteLhMembersResponse deleteLhMembers(const Models::DeleteLhMembersRequest &request);

      /**
       * @summary Deletes a logical database in Database Management (DMS). This operation only deletes the specified logical database but does not delete physical databases.
       *
       * @param request DeleteLogicDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLogicDatabaseResponse
       */
      Models::DeleteLogicDatabaseResponse deleteLogicDatabaseWithOptions(const Models::DeleteLogicDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a logical database in Database Management (DMS). This operation only deletes the specified logical database but does not delete physical databases.
       *
       * @param request DeleteLogicDatabaseRequest
       * @return DeleteLogicDatabaseResponse
       */
      Models::DeleteLogicDatabaseResponse deleteLogicDatabase(const Models::DeleteLogicDatabaseRequest &request);

      /**
       * @summary Deletes the routing algorithm of a logical table.
       *
       * @param request DeleteLogicTableRouteConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLogicTableRouteConfigResponse
       */
      Models::DeleteLogicTableRouteConfigResponse deleteLogicTableRouteConfigWithOptions(const Models::DeleteLogicTableRouteConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the routing algorithm of a logical table.
       *
       * @param request DeleteLogicTableRouteConfigRequest
       * @return DeleteLogicTableRouteConfigResponse
       */
      Models::DeleteLogicTableRouteConfigResponse deleteLogicTableRouteConfig(const Models::DeleteLogicTableRouteConfigRequest &request);

      /**
       * @summary Deletes an asset category.
       *
       * @param request DeleteMetaCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMetaCategoryResponse
       */
      Models::DeleteMetaCategoryResponse deleteMetaCategoryWithOptions(const Models::DeleteMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an asset category.
       *
       * @param request DeleteMetaCategoryRequest
       * @return DeleteMetaCategoryResponse
       */
      Models::DeleteMetaCategoryResponse deleteMetaCategory(const Models::DeleteMetaCategoryRequest &request);

      /**
       * @summary You can call this operation to disable the data security protection proxy of a DB instance.
       *
       * @description After you disable this feature, your DB instance loses the JDBC protocol. All authorization information is recycled.
       *
       * @param request DeleteProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProxyResponse
       */
      Models::DeleteProxyResponse deleteProxyWithOptions(const Models::DeleteProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to disable the data security protection proxy of a DB instance.
       *
       * @description After you disable this feature, your DB instance loses the JDBC protocol. All authorization information is recycled.
       *
       * @param request DeleteProxyRequest
       * @return DeleteProxyResponse
       */
      Models::DeleteProxyResponse deleteProxy(const Models::DeleteProxyRequest &request);

      /**
       * @summary You can call this operation to DeleteProxyAccess reclaim the data security protection authorization of the target user.
       *
       * @param request DeleteProxyAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProxyAccessResponse
       */
      Models::DeleteProxyAccessResponse deleteProxyAccessWithOptions(const Models::DeleteProxyAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to DeleteProxyAccess reclaim the data security protection authorization of the target user.
       *
       * @param request DeleteProxyAccessRequest
       * @return DeleteProxyAccessResponse
       */
      Models::DeleteProxyAccessResponse deleteProxyAccess(const Models::DeleteProxyAccessRequest &request);

      /**
       * @summary Deletes a business scenario.
       *
       * @description When you call this operation, make sure that no task flow is specified in the business scenario.
       *
       * @param request DeleteScenarioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScenarioResponse
       */
      Models::DeleteScenarioResponse deleteScenarioWithOptions(const Models::DeleteScenarioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a business scenario.
       *
       * @description When you call this operation, make sure that no task flow is specified in the business scenario.
       *
       * @param request DeleteScenarioRequest
       * @return DeleteScenarioResponse
       */
      Models::DeleteScenarioResponse deleteScenario(const Models::DeleteScenarioRequest &request);

      /**
       * @summary Deletes a security rule set.
       *
       * @description Before you call this API operation, make sure that the security rule set is not associated with an instance.
       *
       * @param request DeleteStandardGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStandardGroupResponse
       */
      Models::DeleteStandardGroupResponse deleteStandardGroupWithOptions(const Models::DeleteStandardGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a security rule set.
       *
       * @description Before you call this API operation, make sure that the security rule set is not associated with an instance.
       *
       * @param request DeleteStandardGroupRequest
       * @return DeleteStandardGroupResponse
       */
      Models::DeleteStandardGroupResponse deleteStandardGroup(const Models::DeleteStandardGroupRequest &request);

      /**
       * @summary Deletes a task in a specified task flow.
       *
       * @param request DeleteTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTaskResponse
       */
      Models::DeleteTaskResponse deleteTaskWithOptions(const Models::DeleteTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a task in a specified task flow.
       *
       * @param request DeleteTaskRequest
       * @return DeleteTaskResponse
       */
      Models::DeleteTaskResponse deleteTask(const Models::DeleteTaskRequest &request);

      /**
       * @summary Deletes a task flow.
       *
       * @param request DeleteTaskFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTaskFlowResponse
       */
      Models::DeleteTaskFlowResponse deleteTaskFlowWithOptions(const Models::DeleteTaskFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a task flow.
       *
       * @param request DeleteTaskFlowRequest
       * @return DeleteTaskFlowResponse
       */
      Models::DeleteTaskFlowResponse deleteTaskFlow(const Models::DeleteTaskFlowRequest &request);

      /**
       * @summary Deletes task flow edges based on multiple conditions.
       *
       * @description This operation is used for multi-condition query. You can call it to delete the edges of a specified task flow that meet all specified conditions.
       *
       * @param request DeleteTaskFlowEdgesByConditionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTaskFlowEdgesByConditionResponse
       */
      Models::DeleteTaskFlowEdgesByConditionResponse deleteTaskFlowEdgesByConditionWithOptions(const Models::DeleteTaskFlowEdgesByConditionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes task flow edges based on multiple conditions.
       *
       * @description This operation is used for multi-condition query. You can call it to delete the edges of a specified task flow that meet all specified conditions.
       *
       * @param request DeleteTaskFlowEdgesByConditionRequest
       * @return DeleteTaskFlowEdgesByConditionResponse
       */
      Models::DeleteTaskFlowEdgesByConditionResponse deleteTaskFlowEdgesByCondition(const Models::DeleteTaskFlowEdgesByConditionRequest &request);

      /**
       * @summary Deletes an Alibaba Cloud account that is no longer used.
       *
       * @description The effect of deleting a user by calling this operation is the same as that of deleting a user by choosing System Management > User Management in the DMS Enterprise console. The administrator of DMS Enterprise can call this operation to delete a user that is no longer used from DMS Enterprise. After the user is deleted, the data source permission, data owner configuration, and database administrator (DBA) configuration of the corresponding Alibaba Cloud account or Resource Access Management (RAM) user are revoked and become invalid.
       * >  This operation only removes the association of the Alibaba Cloud account or RAM user with DMS Enterprise of the enterprise, rather than actually deleting the Alibaba Cloud account or RAM user. After the user is deleted, the Alibaba Cloud account or RAM user cannot log on to DMS Enterprise, unless the user is added to DMS Enterprise again.
       *
       * @param request DeleteUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const Models::DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Alibaba Cloud account that is no longer used.
       *
       * @description The effect of deleting a user by calling this operation is the same as that of deleting a user by choosing System Management > User Management in the DMS Enterprise console. The administrator of DMS Enterprise can call this operation to delete a user that is no longer used from DMS Enterprise. After the user is deleted, the data source permission, data owner configuration, and database administrator (DBA) configuration of the corresponding Alibaba Cloud account or Resource Access Management (RAM) user are revoked and become invalid.
       * >  This operation only removes the association of the Alibaba Cloud account or RAM user with DMS Enterprise of the enterprise, rather than actually deleting the Alibaba Cloud account or RAM user. After the user is deleted, the Alibaba Cloud account or RAM user cannot log on to DMS Enterprise, unless the user is added to DMS Enterprise again.
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const Models::DeleteUserRequest &request);

      /**
       * @summary Deletes a workspace.
       *
       * @param request DeleteWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspaceWithOptions(const Models::DeleteWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workspace.
       *
       * @param request DeleteWorkspaceRequest
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspace(const Models::DeleteWorkspaceRequest &request);

      /**
       * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
       *
       * @description ## 请求说明
       * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
       * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
       * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
       * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
       * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
       * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
       * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
       *
       * @param request DescribeDifyAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDifyAttributeResponse
       */
      Models::DescribeDifyAttributeResponse describeDifyAttributeWithOptions(const Models::DescribeDifyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
       *
       * @description ## 请求说明
       * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
       * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
       * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
       * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
       * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
       * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
       * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
       *
       * @param request DescribeDifyAttributeRequest
       * @return DescribeDifyAttributeResponse
       */
      Models::DescribeDifyAttributeResponse describeDifyAttribute(const Models::DescribeDifyAttributeRequest &request);

      /**
       * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
       *
       * @description ## 请求说明
       * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
       * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
       * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
       * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
       * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
       * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
       * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
       *
       * @param request DescribeDifyDefaultVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDifyDefaultVpcResponse
       */
      Models::DescribeDifyDefaultVpcResponse describeDifyDefaultVpcWithOptions(const Models::DescribeDifyDefaultVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
       *
       * @description ## 请求说明
       * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
       * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
       * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
       * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
       * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
       * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
       * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
       *
       * @param request DescribeDifyDefaultVpcRequest
       * @return DescribeDifyDefaultVpcResponse
       */
      Models::DescribeDifyDefaultVpcResponse describeDifyDefaultVpc(const Models::DescribeDifyDefaultVpcRequest &request);

      /**
       * @summary 用于获取Dify当前支持的版本信息
       *
       * @description ## 请求说明
       * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
       * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
       * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
       * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
       * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
       * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
       * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
       *
       * @param request DescribeDifyEditionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDifyEditionsResponse
       */
      Models::DescribeDifyEditionsResponse describeDifyEditionsWithOptions(const Models::DescribeDifyEditionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于获取Dify当前支持的版本信息
       *
       * @description ## 请求说明
       * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
       * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
       * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
       * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
       * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
       * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
       * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
       *
       * @param request DescribeDifyEditionsRequest
       * @return DescribeDifyEditionsResponse
       */
      Models::DescribeDifyEditionsResponse describeDifyEditions(const Models::DescribeDifyEditionsRequest &request);

      /**
       * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
       *
       * @description ## 请求说明
       * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
       * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
       * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
       * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
       * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
       * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
       * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
       *
       * @param request DescribeDifyRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDifyRegionsResponse
       */
      Models::DescribeDifyRegionsResponse describeDifyRegionsWithOptions(const Models::DescribeDifyRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
       *
       * @description ## 请求说明
       * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
       * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
       * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
       * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
       * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
       * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
       * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
       *
       * @param request DescribeDifyRegionsRequest
       * @return DescribeDifyRegionsResponse
       */
      Models::DescribeDifyRegionsResponse describeDifyRegions(const Models::DescribeDifyRegionsRequest &request);

      /**
       * @summary You can call this operation to disable a user that is temporarily not used in Data Management (DMS) Enterprise.
       *
       * @description The effect of disabling a user by calling this operation is the same as that of disabling a user by choosing System Management > User Management in the DMS Enterprise console. The administrator of DMS Enterprise can call this operation to disable a user that is temporarily not used in DMS Enterprise. After the user is disabled, the data source permission, data owner configuration, and database administrator (DBA) configuration of the corresponding Alibaba Cloud account or Resource Access Management (RAM) user are revoked and become invalid.
       * >  This operation only stops the Alibaba Cloud account or RAM user from logging on to DMS Enterprise of the enterprise, rather than actually disabling the Alibaba Cloud account or RAM user. After the user is disabled, the Alibaba Cloud account or RAM user cannot log on to DMS Enterprise, unless the user is enabled again. The disabled user, however, still exists in DMS Enterprise.
       *
       * @param request DisableUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableUserResponse
       */
      Models::DisableUserResponse disableUserWithOptions(const Models::DisableUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to disable a user that is temporarily not used in Data Management (DMS) Enterprise.
       *
       * @description The effect of disabling a user by calling this operation is the same as that of disabling a user by choosing System Management > User Management in the DMS Enterprise console. The administrator of DMS Enterprise can call this operation to disable a user that is temporarily not used in DMS Enterprise. After the user is disabled, the data source permission, data owner configuration, and database administrator (DBA) configuration of the corresponding Alibaba Cloud account or Resource Access Management (RAM) user are revoked and become invalid.
       * >  This operation only stops the Alibaba Cloud account or RAM user from logging on to DMS Enterprise of the enterprise, rather than actually disabling the Alibaba Cloud account or RAM user. After the user is disabled, the Alibaba Cloud account or RAM user cannot log on to DMS Enterprise, unless the user is enabled again. The disabled user, however, still exists in DMS Enterprise.
       *
       * @param request DisableUserRequest
       * @return DisableUserResponse
       */
      Models::DisableUserResponse disableUser(const Models::DisableUserRequest &request);

      /**
       * @summary Downloads the parsing result of a data tracking task.
       *
       * @param tmpReq DownloadDataTrackResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadDataTrackResultResponse
       */
      Models::DownloadDataTrackResultResponse downloadDataTrackResultWithOptions(const Models::DownloadDataTrackResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downloads the parsing result of a data tracking task.
       *
       * @param request DownloadDataTrackResultRequest
       * @return DownloadDataTrackResultResponse
       */
      Models::DownloadDataTrackResultResponse downloadDataTrackResult(const Models::DownloadDataTrackResultRequest &request);

      /**
       * @summary Modifies the information about a logical database.
       *
       * @param tmpReq EditLogicDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditLogicDatabaseResponse
       */
      Models::EditLogicDatabaseResponse editLogicDatabaseWithOptions(const Models::EditLogicDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a logical database.
       *
       * @param request EditLogicDatabaseRequest
       * @return EditLogicDatabaseResponse
       */
      Models::EditLogicDatabaseResponse editLogicDatabase(const Models::EditLogicDatabaseRequest &request);

      /**
       * @summary Edits the metadata business knowledge for specified GUIDs.
       *
       * @description Edits the business knowledge of the metadata represented by the specified GUID.
       *
       * @param request EditMetaKnowledgeAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditMetaKnowledgeAssetResponse
       */
      Models::EditMetaKnowledgeAssetResponse editMetaKnowledgeAssetWithOptions(const Models::EditMetaKnowledgeAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits the metadata business knowledge for specified GUIDs.
       *
       * @description Edits the business knowledge of the metadata represented by the specified GUID.
       *
       * @param request EditMetaKnowledgeAssetRequest
       * @return EditMetaKnowledgeAssetResponse
       */
      Models::EditMetaKnowledgeAssetResponse editMetaKnowledgeAsset(const Models::EditMetaKnowledgeAssetRequest &request);

      /**
       * @summary You can call this operation to enable a user that has been disabled in Data Management (DMS) Enterprise.
       *
       * @description The effect of enabling a user by calling this operation is the same as that of enabling a user by choosing System Management > User Management in the DMS Enterprise console. The administrator of DMS Enterprise can call this operation to enable a user that has been disabled in DMS Enterprise. After the user is enabled, the corresponding Alibaba Cloud account or Resource Access Management (RAM) user can continue to log on to DMS Enterprise and perform relevant operations.
       * >  This operation only enables the Alibaba Cloud account or RAM user to log on to DMS Enterprise of the enterprise and perform relevant operations, rather than granting other permissions to the Alibaba Cloud account or RAM user.
       *
       * @param request EnableUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableUserResponse
       */
      Models::EnableUserResponse enableUserWithOptions(const Models::EnableUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to enable a user that has been disabled in Data Management (DMS) Enterprise.
       *
       * @description The effect of enabling a user by calling this operation is the same as that of enabling a user by choosing System Management > User Management in the DMS Enterprise console. The administrator of DMS Enterprise can call this operation to enable a user that has been disabled in DMS Enterprise. After the user is enabled, the corresponding Alibaba Cloud account or Resource Access Management (RAM) user can continue to log on to DMS Enterprise and perform relevant operations.
       * >  This operation only enables the Alibaba Cloud account or RAM user to log on to DMS Enterprise of the enterprise and perform relevant operations, rather than granting other permissions to the Alibaba Cloud account or RAM user.
       *
       * @param request EnableUserRequest
       * @return EnableUserResponse
       */
      Models::EnableUserResponse enableUser(const Models::EnableUserRequest &request);

      /**
       * @summary Submits a ticket for data change.
       *
       * @param tmpReq ExecuteDataCorrectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteDataCorrectResponse
       */
      Models::ExecuteDataCorrectResponse executeDataCorrectWithOptions(const Models::ExecuteDataCorrectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a ticket for data change.
       *
       * @param request ExecuteDataCorrectRequest
       * @return ExecuteDataCorrectResponse
       */
      Models::ExecuteDataCorrectResponse executeDataCorrect(const Models::ExecuteDataCorrectRequest &request);

      /**
       * @summary Executes a data export ticket.
       *
       * @param tmpReq ExecuteDataExportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteDataExportResponse
       */
      Models::ExecuteDataExportResponse executeDataExportWithOptions(const Models::ExecuteDataExportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a data export ticket.
       *
       * @param request ExecuteDataExportRequest
       * @return ExecuteDataExportResponse
       */
      Models::ExecuteDataExportResponse executeDataExport(const Models::ExecuteDataExportRequest &request);

      /**
       * @summary Executes SQL statements.
       *
       * @description You can call this operation only for instances that are managed in Security Collaboration mode.
       *
       * @param request ExecuteScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteScriptResponse
       */
      Models::ExecuteScriptResponse executeScriptWithOptions(const Models::ExecuteScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes SQL statements.
       *
       * @description You can call this operation only for instances that are managed in Security Collaboration mode.
       *
       * @param request ExecuteScriptRequest
       * @return ExecuteScriptResponse
       */
      Models::ExecuteScriptResponse executeScript(const Models::ExecuteScriptRequest &request);

      /**
       * @summary Executes a schema synchronization task.
       *
       * @description If the security rules of an instance indicate that a ticket must be approved before you perform schema synchronization, you can call the [SubmitStructSyncOrderApproval](https://help.aliyun.com/document_detail/206166.html) operation to submit the ticket for approval.
       * >  You can call the [GetStructSyncJobDetail](https://help.aliyun.com/document_detail/206160.html) operation to query whether you need to submit a ticket for approval.
       *
       * @param request ExecuteStructSyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteStructSyncResponse
       */
      Models::ExecuteStructSyncResponse executeStructSyncWithOptions(const Models::ExecuteStructSyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a schema synchronization task.
       *
       * @description If the security rules of an instance indicate that a ticket must be approved before you perform schema synchronization, you can call the [SubmitStructSyncOrderApproval](https://help.aliyun.com/document_detail/206166.html) operation to submit the ticket for approval.
       * >  You can call the [GetStructSyncJobDetail](https://help.aliyun.com/document_detail/206160.html) operation to query whether you need to submit a ticket for approval.
       *
       * @param request ExecuteStructSyncRequest
       * @return ExecuteStructSyncResponse
       */
      Models::ExecuteStructSyncResponse executeStructSync(const Models::ExecuteStructSyncRequest &request);

      /**
       * @summary Uses the specified SQL statement, error message, and database ID to analyze and fix the SQL error.
       *
       * @description You can call this operation to analyze and fix SQL errors based on the specified SQL statement, error message, and database ID.
       *
       * @param request FixSqlByMetaAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FixSqlByMetaAgentResponse
       */
      Models::FixSqlByMetaAgentResponse fixSqlByMetaAgentWithOptions(const Models::FixSqlByMetaAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uses the specified SQL statement, error message, and database ID to analyze and fix the SQL error.
       *
       * @description You can call this operation to analyze and fix SQL errors based on the specified SQL statement, error message, and database ID.
       *
       * @param request FixSqlByMetaAgentRequest
       * @return FixSqlByMetaAgentResponse
       */
      Models::FixSqlByMetaAgentResponse fixSqlByMetaAgent(const Models::FixSqlByMetaAgentRequest &request);

      /**
       * @summary 数据库知识库补数据接口
       *
       * @param request GenMetaKnowledgeAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenMetaKnowledgeAssetResponse
       */
      Models::GenMetaKnowledgeAssetResponse genMetaKnowledgeAssetWithOptions(const Models::GenMetaKnowledgeAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 数据库知识库补数据接口
       *
       * @param request GenMetaKnowledgeAssetRequest
       * @return GenMetaKnowledgeAssetResponse
       */
      Models::GenMetaKnowledgeAssetResponse genMetaKnowledgeAsset(const Models::GenMetaKnowledgeAssetRequest &request);

      /**
       * @summary 根据用户提供的自然语言描述和数据库信息生成对应的SQL语句。
       *
       * @description ## 请求说明
       * - 该API用于将用户的自然语言问题转换为可执行的SQL查询语句。
       * - 用户需要提供数据库ID (`dbId`) 和实例ID (`instanceId`)，以及想要查询的问题描述 (`question`)。
       * - 可选参数包括业务知识 (`knowledge`)、数据库方言 (`dialect`)、历史消息 (`history`)、算法级别 (`level`) 和指定模型名称 (`model`)。
       * - `dialect` 默认值为 "SQL"，表示生成标准SQL语句；`level` 默认值为 "base"，代表基础级别的处理。
       * - 如果请求中包含多个表且这些表不属于同一个数据库，则返回的 `dbId` 将为0，表明这是一个跨库查询。
       * - 返回结果中除了生成的SQL语句外，还包括了求解时用到的表、引用的知识点、展示用的SQL等信息，方便进一步理解和使用。
       *
       * @param request GenerateSqlFromNLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateSqlFromNLResponse
       */
      Models::GenerateSqlFromNLResponse generateSqlFromNLWithOptions(const Models::GenerateSqlFromNLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据用户提供的自然语言描述和数据库信息生成对应的SQL语句。
       *
       * @description ## 请求说明
       * - 该API用于将用户的自然语言问题转换为可执行的SQL查询语句。
       * - 用户需要提供数据库ID (`dbId`) 和实例ID (`instanceId`)，以及想要查询的问题描述 (`question`)。
       * - 可选参数包括业务知识 (`knowledge`)、数据库方言 (`dialect`)、历史消息 (`history`)、算法级别 (`level`) 和指定模型名称 (`model`)。
       * - `dialect` 默认值为 "SQL"，表示生成标准SQL语句；`level` 默认值为 "base"，代表基础级别的处理。
       * - 如果请求中包含多个表且这些表不属于同一个数据库，则返回的 `dbId` 将为0，表明这是一个跨库查询。
       * - 返回结果中除了生成的SQL语句外，还包括了求解时用到的表、引用的知识点、展示用的SQL等信息，方便进一步理解和使用。
       *
       * @param request GenerateSqlFromNLRequest
       * @return GenerateSqlFromNLResponse
       */
      Models::GenerateSqlFromNLResponse generateSqlFromNL(const Models::GenerateSqlFromNLRequest &request);

      /**
       * @summary Queries the details of a policy, including the name, content, and the user who created the policy.
       *
       * @param request GetAbacPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAbacPolicyResponse
       */
      Models::GetAbacPolicyResponse getAbacPolicyWithOptions(const Models::GetAbacPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a policy, including the name, content, and the user who created the policy.
       *
       * @param request GetAbacPolicyRequest
       * @return GetAbacPolicyResponse
       */
      Models::GetAbacPolicyResponse getAbacPolicy(const Models::GetAbacPolicyRequest &request);

      /**
       * @summary Queries the approval details of a ticket.
       *
       * @param request GetApprovalDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApprovalDetailResponse
       */
      Models::GetApprovalDetailResponse getApprovalDetailWithOptions(const Models::GetApprovalDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the approval details of a ticket.
       *
       * @param request GetApprovalDetailRequest
       * @return GetApprovalDetailResponse
       */
      Models::GetApprovalDetailResponse getApprovalDetail(const Models::GetApprovalDetailRequest &request);

      /**
       * @summary Queries the information about a permission template.
       *
       * @description You must be a Data Management (DMS) administrator or a database administrator (DBA). For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
       *
       * @param request GetAuthorityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthorityTemplateResponse
       */
      Models::GetAuthorityTemplateResponse getAuthorityTemplateWithOptions(const Models::GetAuthorityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a permission template.
       *
       * @description You must be a Data Management (DMS) administrator or a database administrator (DBA). For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
       *
       * @param request GetAuthorityTemplateRequest
       * @return GetAuthorityTemplateResponse
       */
      Models::GetAuthorityTemplateResponse getAuthorityTemplate(const Models::GetAuthorityTemplateRequest &request);

      /**
       * @summary Queries the resources in a permission template.
       *
       * @description You are a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
       *
       * @param request GetAuthorityTemplateItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthorityTemplateItemResponse
       */
      Models::GetAuthorityTemplateItemResponse getAuthorityTemplateItemWithOptions(const Models::GetAuthorityTemplateItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources in a permission template.
       *
       * @description You are a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
       *
       * @param request GetAuthorityTemplateItemRequest
       * @return GetAuthorityTemplateItemResponse
       */
      Models::GetAuthorityTemplateItemResponse getAuthorityTemplateItem(const Models::GetAuthorityTemplateItemRequest &request);

      /**
       * @summary Queries the information about the classification and grading template associated with an instance.
       *
       * @param request GetClassificationTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClassificationTemplateResponse
       */
      Models::GetClassificationTemplateResponse getClassificationTemplateWithOptions(const Models::GetClassificationTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the classification and grading template associated with an instance.
       *
       * @param request GetClassificationTemplateRequest
       * @return GetClassificationTemplateResponse
       */
      Models::GetClassificationTemplateResponse getClassificationTemplate(const Models::GetClassificationTemplateRequest &request);

      /**
       * @summary Queries the log that records the scheduling details of an SQL task.
       *
       * @param request GetDBTaskSQLJobLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDBTaskSQLJobLogResponse
       */
      Models::GetDBTaskSQLJobLogResponse getDBTaskSQLJobLogWithOptions(const Models::GetDBTaskSQLJobLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log that records the scheduling details of an SQL task.
       *
       * @param request GetDBTaskSQLJobLogRequest
       * @return GetDBTaskSQLJobLogResponse
       */
      Models::GetDBTaskSQLJobLogResponse getDBTaskSQLJobLog(const Models::GetDBTaskSQLJobLogRequest &request);

      /**
       * @summary Queries the topologies of a logical database and its physical database shards.
       *
       * @param request GetDBTopologyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDBTopologyResponse
       */
      Models::GetDBTopologyResponse getDBTopologyWithOptions(const Models::GetDBTopologyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the topologies of a logical database and its physical database shards.
       *
       * @param request GetDBTopologyRequest
       * @return GetDBTopologyResponse
       */
      Models::GetDBTopologyResponse getDBTopology(const Models::GetDBTopologyRequest &request);

      /**
       * @summary Queries the statistics on the number of data archiving tickets, including the number of tickets of successful data archiving, failed data archiving,and in-progress data archiving, and the total number of data archiving tickets.
       *
       * @param request GetDataArchiveCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataArchiveCountResponse
       */
      Models::GetDataArchiveCountResponse getDataArchiveCountWithOptions(const Models::GetDataArchiveCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on the number of data archiving tickets, including the number of tickets of successful data archiving, failed data archiving,and in-progress data archiving, and the total number of data archiving tickets.
       *
       * @param request GetDataArchiveCountRequest
       * @return GetDataArchiveCountResponse
       */
      Models::GetDataArchiveCountResponse getDataArchiveCount(const Models::GetDataArchiveCountRequest &request);

      /**
       * @summary Queries the details of a data archiving ticket, including the time when the ticket was created, the scheduling information of the data archiving task, the logs of the data archiving task, and the database to which data is archived.
       *
       * @param request GetDataArchiveOrderDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataArchiveOrderDetailResponse
       */
      Models::GetDataArchiveOrderDetailResponse getDataArchiveOrderDetailWithOptions(const Models::GetDataArchiveOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a data archiving ticket, including the time when the ticket was created, the scheduling information of the data archiving task, the logs of the data archiving task, and the database to which data is archived.
       *
       * @param request GetDataArchiveOrderDetailRequest
       * @return GetDataArchiveOrderDetailResponse
       */
      Models::GetDataArchiveOrderDetailResponse getDataArchiveOrderDetail(const Models::GetDataArchiveOrderDetailRequest &request);

      /**
       * @summary Queries the download URL of the backup file for a data change ticket in Data Management (DMS).
       *
       * @param tmpReq GetDataCorrectBackupFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataCorrectBackupFilesResponse
       */
      Models::GetDataCorrectBackupFilesResponse getDataCorrectBackupFilesWithOptions(const Models::GetDataCorrectBackupFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the download URL of the backup file for a data change ticket in Data Management (DMS).
       *
       * @param request GetDataCorrectBackupFilesRequest
       * @return GetDataCorrectBackupFilesResponse
       */
      Models::GetDataCorrectBackupFilesResponse getDataCorrectBackupFiles(const Models::GetDataCorrectBackupFilesRequest &request);

      /**
       * @summary Queries the information about a data change ticket in Data Management (DMS).
       *
       * @param request GetDataCorrectOrderDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataCorrectOrderDetailResponse
       */
      Models::GetDataCorrectOrderDetailResponse getDataCorrectOrderDetailWithOptions(const Models::GetDataCorrectOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a data change ticket in Data Management (DMS).
       *
       * @param request GetDataCorrectOrderDetailRequest
       * @return GetDataCorrectOrderDetailResponse
       */
      Models::GetDataCorrectOrderDetailResponse getDataCorrectOrderDetail(const Models::GetDataCorrectOrderDetailRequest &request);

      /**
       * @summary Queries the download URL of the rollback attachment submitted along with a data change ticket.
       *
       * @param request GetDataCorrectRollbackFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataCorrectRollbackFileResponse
       */
      Models::GetDataCorrectRollbackFileResponse getDataCorrectRollbackFileWithOptions(const Models::GetDataCorrectRollbackFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the download URL of the rollback attachment submitted along with a data change ticket.
       *
       * @param request GetDataCorrectRollbackFileRequest
       * @return GetDataCorrectRollbackFileResponse
       */
      Models::GetDataCorrectRollbackFileResponse getDataCorrectRollbackFile(const Models::GetDataCorrectRollbackFileRequest &request);

      /**
       * @summary Queries the download URL of the SQL script for a data change task.
       *
       * @description This operation applies to [regular data change](https://help.aliyun.com/document_detail/58419.html) and [batch data import](https://help.aliyun.com/document_detail/144643.html).
       *
       * @param request GetDataCorrectSQLFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataCorrectSQLFileResponse
       */
      Models::GetDataCorrectSQLFileResponse getDataCorrectSQLFileWithOptions(const Models::GetDataCorrectSQLFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the download URL of the SQL script for a data change task.
       *
       * @description This operation applies to [regular data change](https://help.aliyun.com/document_detail/58419.html) and [batch data import](https://help.aliyun.com/document_detail/144643.html).
       *
       * @param request GetDataCorrectSQLFileRequest
       * @return GetDataCorrectSQLFileResponse
       */
      Models::GetDataCorrectSQLFileResponse getDataCorrectSQLFile(const Models::GetDataCorrectSQLFileRequest &request);

      /**
       * @summary Queries the information about a data change, lock-free data change, or data import task.
       *
       * @param request GetDataCorrectTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataCorrectTaskDetailResponse
       */
      Models::GetDataCorrectTaskDetailResponse getDataCorrectTaskDetailWithOptions(const Models::GetDataCorrectTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a data change, lock-free data change, or data import task.
       *
       * @param request GetDataCorrectTaskDetailRequest
       * @return GetDataCorrectTaskDetailResponse
       */
      Models::GetDataCorrectTaskDetailResponse getDataCorrectTaskDetail(const Models::GetDataCorrectTaskDetailRequest &request);

      /**
       * @summary Queries the scheduling configuration of a ticket for cleaning up historical data.
       *
       * @param request GetDataCronClearConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataCronClearConfigResponse
       */
      Models::GetDataCronClearConfigResponse getDataCronClearConfigWithOptions(const Models::GetDataCronClearConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scheduling configuration of a ticket for cleaning up historical data.
       *
       * @param request GetDataCronClearConfigRequest
       * @return GetDataCronClearConfigResponse
       */
      Models::GetDataCronClearConfigResponse getDataCronClearConfig(const Models::GetDataCronClearConfigRequest &request);

      /**
       * @summary Queries the details of a historical data cleansing ticket.
       *
       * @param request GetDataCronClearTaskDetailListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataCronClearTaskDetailListResponse
       */
      Models::GetDataCronClearTaskDetailListResponse getDataCronClearTaskDetailListWithOptions(const Models::GetDataCronClearTaskDetailListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a historical data cleansing ticket.
       *
       * @param request GetDataCronClearTaskDetailListRequest
       * @return GetDataCronClearTaskDetailListResponse
       */
      Models::GetDataCronClearTaskDetailListResponse getDataCronClearTaskDetailList(const Models::GetDataCronClearTaskDetailListRequest &request);

      /**
       * @summary Queries the download URL of export results for a data export ticket.
       *
       * @param request GetDataExportDownloadURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataExportDownloadURLResponse
       */
      Models::GetDataExportDownloadURLResponse getDataExportDownloadURLWithOptions(const Models::GetDataExportDownloadURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the download URL of export results for a data export ticket.
       *
       * @param request GetDataExportDownloadURLRequest
       * @return GetDataExportDownloadURLResponse
       */
      Models::GetDataExportDownloadURLResponse getDataExportDownloadURL(const Models::GetDataExportDownloadURLRequest &request);

      /**
       * @summary Queries the information about a data export ticket.
       *
       * @param request GetDataExportOrderDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataExportOrderDetailResponse
       */
      Models::GetDataExportOrderDetailResponse getDataExportOrderDetailWithOptions(const Models::GetDataExportOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a data export ticket.
       *
       * @param request GetDataExportOrderDetailRequest
       * @return GetDataExportOrderDetailResponse
       */
      Models::GetDataExportOrderDetailResponse getDataExportOrderDetail(const Models::GetDataExportOrderDetailRequest &request);

      /**
       * @summary Queries the precheck details of an SQL result set export ticket.
       *
       * @param request GetDataExportPreCheckDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataExportPreCheckDetailResponse
       */
      Models::GetDataExportPreCheckDetailResponse getDataExportPreCheckDetailWithOptions(const Models::GetDataExportPreCheckDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the precheck details of an SQL result set export ticket.
       *
       * @param request GetDataExportPreCheckDetailRequest
       * @return GetDataExportPreCheckDetailResponse
       */
      Models::GetDataExportPreCheckDetailResponse getDataExportPreCheckDetail(const Models::GetDataExportPreCheckDetailRequest &request);

      /**
       * @summary Queries the SQL statements used for data import in a ticket.
       *
       * @description You can call this operation only if the data is imported in security mode in your data import ticket.
       *
       * @param request GetDataImportSQLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataImportSQLResponse
       */
      Models::GetDataImportSQLResponse getDataImportSQLWithOptions(const Models::GetDataImportSQLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SQL statements used for data import in a ticket.
       *
       * @description You can call this operation only if the data is imported in security mode in your data import ticket.
       *
       * @param request GetDataImportSQLRequest
       * @return GetDataImportSQLResponse
       */
      Models::GetDataImportSQLResponse getDataImportSQL(const Models::GetDataImportSQLRequest &request);

      /**
       * @summary Queries the data catalog of the data lake.
       *
       * @param request GetDataLakeCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeCatalogResponse
       */
      Models::GetDataLakeCatalogResponse getDataLakeCatalogWithOptions(const Models::GetDataLakeCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data catalog of the data lake.
       *
       * @param request GetDataLakeCatalogRequest
       * @return GetDataLakeCatalogResponse
       */
      Models::GetDataLakeCatalogResponse getDataLakeCatalog(const Models::GetDataLakeCatalogRequest &request);

      /**
       * @summary Queries the information about the database in the data lake.
       *
       * @param request GetDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeDatabaseResponse
       */
      Models::GetDataLakeDatabaseResponse getDataLakeDatabaseWithOptions(const Models::GetDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the database in the data lake.
       *
       * @param request GetDataLakeDatabaseRequest
       * @return GetDataLakeDatabaseResponse
       */
      Models::GetDataLakeDatabaseResponse getDataLakeDatabase(const Models::GetDataLakeDatabaseRequest &request);

      /**
       * @summary Obtains the details about a user-defined function in a data lakehouse.
       *
       * @param request GetDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeFunctionResponse
       */
      Models::GetDataLakeFunctionResponse getDataLakeFunctionWithOptions(const Models::GetDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details about a user-defined function in a data lakehouse.
       *
       * @param request GetDataLakeFunctionRequest
       * @return GetDataLakeFunctionResponse
       */
      Models::GetDataLakeFunctionResponse getDataLakeFunction(const Models::GetDataLakeFunctionRequest &request);

      /**
       * @summary Queries the information about a partition of a table in a data lakehouse.
       *
       * @param tmpReq GetDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakePartitionResponse
       */
      Models::GetDataLakePartitionResponse getDataLakePartitionWithOptions(const Models::GetDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a partition of a table in a data lakehouse.
       *
       * @param request GetDataLakePartitionRequest
       * @return GetDataLakePartitionResponse
       */
      Models::GetDataLakePartitionResponse getDataLakePartition(const Models::GetDataLakePartitionRequest &request);

      /**
       * @summary Queries basic information about tables in the data lake.
       *
       * @param request GetDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeTableResponse
       */
      Models::GetDataLakeTableResponse getDataLakeTableWithOptions(const Models::GetDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries basic information about tables in the data lake.
       *
       * @param request GetDataLakeTableRequest
       * @return GetDataLakeTableResponse
       */
      Models::GetDataLakeTableResponse getDataLakeTable(const Models::GetDataLakeTableRequest &request);

      /**
       * @summary Queries the progress of a data tracking task.
       *
       * @param request GetDataTrackJobDegreeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataTrackJobDegreeResponse
       */
      Models::GetDataTrackJobDegreeResponse getDataTrackJobDegreeWithOptions(const Models::GetDataTrackJobDegreeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of a data tracking task.
       *
       * @param request GetDataTrackJobDegreeRequest
       * @return GetDataTrackJobDegreeResponse
       */
      Models::GetDataTrackJobDegreeResponse getDataTrackJobDegree(const Models::GetDataTrackJobDegreeRequest &request);

      /**
       * @summary Queries the metadata of tables involved in a data tracking task.
       *
       * @param request GetDataTrackJobTableMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataTrackJobTableMetaResponse
       */
      Models::GetDataTrackJobTableMetaResponse getDataTrackJobTableMetaWithOptions(const Models::GetDataTrackJobTableMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metadata of tables involved in a data tracking task.
       *
       * @param request GetDataTrackJobTableMetaRequest
       * @return GetDataTrackJobTableMetaResponse
       */
      Models::GetDataTrackJobTableMetaResponse getDataTrackJobTableMeta(const Models::GetDataTrackJobTableMetaRequest &request);

      /**
       * @summary Queries the details of a data tracking ticket.
       *
       * @param request GetDataTrackOrderDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataTrackOrderDetailResponse
       */
      Models::GetDataTrackOrderDetailResponse getDataTrackOrderDetailWithOptions(const Models::GetDataTrackOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a data tracking ticket.
       *
       * @param request GetDataTrackOrderDetailRequest
       * @return GetDataTrackOrderDetailResponse
       */
      Models::GetDataTrackOrderDetailResponse getDataTrackOrderDetail(const Models::GetDataTrackOrderDetailRequest &request);

      /**
       * @summary Queries details of a specific database.
       *
       * @param request GetDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatabaseResponse
       */
      Models::GetDatabaseResponse getDatabaseWithOptions(const Models::GetDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details of a specific database.
       *
       * @param request GetDatabaseRequest
       * @return GetDatabaseResponse
       */
      Models::GetDatabaseResponse getDatabase(const Models::GetDatabaseRequest &request);

      /**
       * @summary Queries the details of a database export ticket.
       *
       * @param request GetDatabaseExportOrderDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatabaseExportOrderDetailResponse
       */
      Models::GetDatabaseExportOrderDetailResponse getDatabaseExportOrderDetailWithOptions(const Models::GetDatabaseExportOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a database export ticket.
       *
       * @param request GetDatabaseExportOrderDetailRequest
       * @return GetDatabaseExportOrderDetailResponse
       */
      Models::GetDatabaseExportOrderDetailResponse getDatabaseExportOrderDetail(const Models::GetDatabaseExportOrderDetailRequest &request);

      /**
       * @summary Queries the download URL of the results of a database export ticket.
       *
       * @param request GetDbExportDownloadURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDbExportDownloadURLResponse
       */
      Models::GetDbExportDownloadURLResponse getDbExportDownloadURLWithOptions(const Models::GetDbExportDownloadURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the download URL of the results of a database export ticket.
       *
       * @param request GetDbExportDownloadURLRequest
       * @return GetDbExportDownloadURLResponse
       */
      Models::GetDbExportDownloadURLResponse getDbExportDownloadURL(const Models::GetDbExportDownloadURLRequest &request);

      /**
       * @summary Queries the details of a database instance.
       *
       * @param request GetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const Models::GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a database instance.
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const Models::GetInstanceRequest &request);

      /**
       * @summary Queries the minimum scheduling cycle of a task flow when a service level agreement (SLA) timeout rule is configured for the task flow.
       *
       * @description The scheduling cycle of a task flow must be greater than the minimum scheduling cycle configured in the SLA rule for the task flow.
       *
       * @param request GetIntervalLimitOfSLARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIntervalLimitOfSLAResponse
       */
      Models::GetIntervalLimitOfSLAResponse getIntervalLimitOfSLAWithOptions(const Models::GetIntervalLimitOfSLARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the minimum scheduling cycle of a task flow when a service level agreement (SLA) timeout rule is configured for the task flow.
       *
       * @description The scheduling cycle of a task flow must be greater than the minimum scheduling cycle configured in the SLA rule for the task flow.
       *
       * @param request GetIntervalLimitOfSLARequest
       * @return GetIntervalLimitOfSLAResponse
       */
      Models::GetIntervalLimitOfSLAResponse getIntervalLimitOfSLA(const Models::GetIntervalLimitOfSLARequest &request);

      /**
       * @summary Queries the information about a workspace based on the workspace name in Data Management (DMS).
       *
       * @description You are a DMS administrator or a database administrator (DBA).
       *
       * @param request GetLhSpaceByNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLhSpaceByNameResponse
       */
      Models::GetLhSpaceByNameResponse getLhSpaceByNameWithOptions(const Models::GetLhSpaceByNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a workspace based on the workspace name in Data Management (DMS).
       *
       * @description You are a DMS administrator or a database administrator (DBA).
       *
       * @param request GetLhSpaceByNameRequest
       * @return GetLhSpaceByNameResponse
       */
      Models::GetLhSpaceByNameResponse getLhSpaceByName(const Models::GetLhSpaceByNameRequest &request);

      /**
       * @summary Queries the details of a logical database.
       *
       * @param request GetLogicDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogicDatabaseResponse
       */
      Models::GetLogicDatabaseResponse getLogicDatabaseWithOptions(const Models::GetLogicDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a logical database.
       *
       * @param request GetLogicDatabaseRequest
       * @return GetLogicDatabaseResponse
       */
      Models::GetLogicDatabaseResponse getLogicDatabase(const Models::GetLogicDatabaseRequest &request);

      /**
       * @summary Queries the details of columns in a table.
       *
       * @description You can call this operation only for database instances whose control mode is Security Collaboration.
       *
       * @param request GetMetaTableColumnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaTableColumnResponse
       */
      Models::GetMetaTableColumnResponse getMetaTableColumnWithOptions(const Models::GetMetaTableColumnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of columns in a table.
       *
       * @description You can call this operation only for database instances whose control mode is Security Collaboration.
       *
       * @param request GetMetaTableColumnRequest
       * @return GetMetaTableColumnResponse
       */
      Models::GetMetaTableColumnResponse getMetaTableColumn(const Models::GetMetaTableColumnRequest &request);

      /**
       * @summary Queries the details of columns and indexes in a table.
       *
       * @description You can call this operation only for database instances whose control mode is Security Collaboration.
       *
       * @param request GetMetaTableDetailInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaTableDetailInfoResponse
       */
      Models::GetMetaTableDetailInfoResponse getMetaTableDetailInfoWithOptions(const Models::GetMetaTableDetailInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of columns and indexes in a table.
       *
       * @description You can call this operation only for database instances whose control mode is Security Collaboration.
       *
       * @param request GetMetaTableDetailInfoRequest
       * @return GetMetaTableDetailInfoResponse
       */
      Models::GetMetaTableDetailInfoResponse getMetaTableDetailInfo(const Models::GetMetaTableDetailInfoRequest &request);

      /**
       * @summary Queries the details and progress of an OnlineDDL task.
       *
       * @param request GetOnlineDDLProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOnlineDDLProgressResponse
       */
      Models::GetOnlineDDLProgressResponse getOnlineDDLProgressWithOptions(const Models::GetOnlineDDLProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details and progress of an OnlineDDL task.
       *
       * @param request GetOnlineDDLProgressRequest
       * @return GetOnlineDDLProgressResponse
       */
      Models::GetOnlineDDLProgressResponse getOnlineDDLProgress(const Models::GetOnlineDDLProgressRequest &request);

      /**
       * @summary Queries the details of operation logs that are generated in a specified period of time.
       *
       * @description Prerequisites: You are an administrator of Data Management (DMS) or a security administrator. You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetUser](https://help.aliyun.com/document_detail/147098.html) operation to obtain your user role from the RoleIdList parameter that is returned.
       *
       * @param request GetOpLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpLogResponse
       */
      Models::GetOpLogResponse getOpLogWithOptions(const Models::GetOpLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of operation logs that are generated in a specified period of time.
       *
       * @description Prerequisites: You are an administrator of Data Management (DMS) or a security administrator. You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetUser](https://help.aliyun.com/document_detail/147098.html) operation to obtain your user role from the RoleIdList parameter that is returned.
       *
       * @param request GetOpLogRequest
       * @return GetOpLogResponse
       */
      Models::GetOpLogResponse getOpLog(const Models::GetOpLogRequest &request);

      /**
       * @summary Queries the download URL of the attachment of a ticket.
       *
       * @param request GetOrderAttachmentFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrderAttachmentFileResponse
       */
      Models::GetOrderAttachmentFileResponse getOrderAttachmentFileWithOptions(const Models::GetOrderAttachmentFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the download URL of the attachment of a ticket.
       *
       * @param request GetOrderAttachmentFileRequest
       * @return GetOrderAttachmentFileResponse
       */
      Models::GetOrderAttachmentFileResponse getOrderAttachmentFile(const Models::GetOrderAttachmentFileRequest &request);

      /**
       * @summary Queries the basic information about a ticket.
       *
       * @param request GetOrderBaseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrderBaseInfoResponse
       */
      Models::GetOrderBaseInfoResponse getOrderBaseInfoWithOptions(const Models::GetOrderBaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about a ticket.
       *
       * @param request GetOrderBaseInfoRequest
       * @return GetOrderBaseInfoResponse
       */
      Models::GetOrderBaseInfoResponse getOrderBaseInfo(const Models::GetOrderBaseInfoRequest &request);

      /**
       * @summary Queries the details of the Database-OWNER, Table-OWNER, and Instance-OWNER tickets.
       *
       * @param request GetOwnerApplyOrderDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOwnerApplyOrderDetailResponse
       */
      Models::GetOwnerApplyOrderDetailResponse getOwnerApplyOrderDetailWithOptions(const Models::GetOwnerApplyOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the Database-OWNER, Table-OWNER, and Instance-OWNER tickets.
       *
       * @param request GetOwnerApplyOrderDetailRequest
       * @return GetOwnerApplyOrderDetailResponse
       */
      Models::GetOwnerApplyOrderDetailResponse getOwnerApplyOrderDetail(const Models::GetOwnerApplyOrderDetailRequest &request);

      /**
       * @summary Queries the task information about a ticket.
       *
       * @param request GetPagedInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPagedInstanceResponse
       */
      Models::GetPagedInstanceResponse getPagedInstanceWithOptions(const Models::GetPagedInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task information about a ticket.
       *
       * @param request GetPagedInstanceRequest
       * @return GetPagedInstanceResponse
       */
      Models::GetPagedInstanceResponse getPagedInstance(const Models::GetPagedInstanceRequest &request);

      /**
       * @summary Queries the details of a ticket that applies for permissions.
       *
       * @description You can call this operation to query the information about tickets that apply for permissions on databases, tables, and sensitive columns.
       *
       * @param request GetPermApplyOrderDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPermApplyOrderDetailResponse
       */
      Models::GetPermApplyOrderDetailResponse getPermApplyOrderDetailWithOptions(const Models::GetPermApplyOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a ticket that applies for permissions.
       *
       * @description You can call this operation to query the information about tickets that apply for permissions on databases, tables, and sensitive columns.
       *
       * @param request GetPermApplyOrderDetailRequest
       * @return GetPermApplyOrderDetailResponse
       */
      Models::GetPermApplyOrderDetailResponse getPermApplyOrderDetail(const Models::GetPermApplyOrderDetailRequest &request);

      /**
       * @summary Queries the details of a physical database.
       *
       * @param request GetPhysicalDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalDatabaseResponse
       */
      Models::GetPhysicalDatabaseResponse getPhysicalDatabaseWithOptions(const Models::GetPhysicalDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a physical database.
       *
       * @param request GetPhysicalDatabaseRequest
       * @return GetPhysicalDatabaseResponse
       */
      Models::GetPhysicalDatabaseResponse getPhysicalDatabase(const Models::GetPhysicalDatabaseRequest &request);

      /**
       * @summary Queries the details of a secure access proxy.
       *
       * @param request GetProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProxyResponse
       */
      Models::GetProxyResponse getProxyWithOptions(const Models::GetProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a secure access proxy.
       *
       * @param request GetProxyRequest
       * @return GetProxyResponse
       */
      Models::GetProxyResponse getProxy(const Models::GetProxyRequest &request);

      /**
       * @summary Queries the authorization information about the secure access proxy feature.
       *
       * @param request GetProxyAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProxyAccessResponse
       */
      Models::GetProxyAccessResponse getProxyAccessWithOptions(const Models::GetProxyAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorization information about the secure access proxy feature.
       *
       * @param request GetProxyAccessRequest
       * @return GetProxyAccessResponse
       */
      Models::GetProxyAccessResponse getProxyAccess(const Models::GetProxyAccessRequest &request);

      /**
       * @summary Queries the maximum number of custom service-level agreement (SLA) rules for task orchestration.
       *
       * @param request GetRuleNumLimitOfSLARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuleNumLimitOfSLAResponse
       */
      Models::GetRuleNumLimitOfSLAResponse getRuleNumLimitOfSLAWithOptions(const Models::GetRuleNumLimitOfSLARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum number of custom service-level agreement (SLA) rules for task orchestration.
       *
       * @param request GetRuleNumLimitOfSLARequest
       * @return GetRuleNumLimitOfSLAResponse
       */
      Models::GetRuleNumLimitOfSLAResponse getRuleNumLimitOfSLA(const Models::GetRuleNumLimitOfSLARequest &request);

      /**
       * @summary Queries the result of an SQL review.
       *
       * @description For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
       *
       * @param request GetSQLReviewCheckResultStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSQLReviewCheckResultStatusResponse
       */
      Models::GetSQLReviewCheckResultStatusResponse getSQLReviewCheckResultStatusWithOptions(const Models::GetSQLReviewCheckResultStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of an SQL review.
       *
       * @description For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
       *
       * @param request GetSQLReviewCheckResultStatusRequest
       * @return GetSQLReviewCheckResultStatusResponse
       */
      Models::GetSQLReviewCheckResultStatusResponse getSQLReviewCheckResultStatus(const Models::GetSQLReviewCheckResultStatusRequest &request);

      /**
       * @summary Queries the details of optimization suggestions. The operation applies only to the tickets for the data changes and SQL review.
       *
       * @description For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
       *
       * @param request GetSQLReviewOptimizeDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSQLReviewOptimizeDetailResponse
       */
      Models::GetSQLReviewOptimizeDetailResponse getSQLReviewOptimizeDetailWithOptions(const Models::GetSQLReviewOptimizeDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of optimization suggestions. The operation applies only to the tickets for the data changes and SQL review.
       *
       * @description For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
       *
       * @param request GetSQLReviewOptimizeDetailRequest
       * @return GetSQLReviewOptimizeDetailResponse
       */
      Models::GetSQLReviewOptimizeDetailResponse getSQLReviewOptimizeDetail(const Models::GetSQLReviewOptimizeDetailRequest &request);

      /**
       * @summary Queries the information about security rule sets of a tenant. The information includes the name and description of security rules, and instances associated with security rules.
       *
       * @param request GetStandardGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandardGroupResponse
       */
      Models::GetStandardGroupResponse getStandardGroupWithOptions(const Models::GetStandardGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about security rule sets of a tenant. The information includes the name and description of security rules, and instances associated with security rules.
       *
       * @param request GetStandardGroupRequest
       * @return GetStandardGroupResponse
       */
      Models::GetStandardGroupResponse getStandardGroup(const Models::GetStandardGroupRequest &request);

      /**
       * @summary Queries the SQL statements that are involved in a schema synchronization ticket.
       *
       * @param request GetStructSyncExecSqlDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStructSyncExecSqlDetailResponse
       */
      Models::GetStructSyncExecSqlDetailResponse getStructSyncExecSqlDetailWithOptions(const Models::GetStructSyncExecSqlDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SQL statements that are involved in a schema synchronization ticket.
       *
       * @param request GetStructSyncExecSqlDetailRequest
       * @return GetStructSyncExecSqlDetailResponse
       */
      Models::GetStructSyncExecSqlDetailResponse getStructSyncExecSqlDetail(const Models::GetStructSyncExecSqlDetailRequest &request);

      /**
       * @summary Queries the analysis result of a schema synchronization task.
       *
       * @param request GetStructSyncJobAnalyzeResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStructSyncJobAnalyzeResultResponse
       */
      Models::GetStructSyncJobAnalyzeResultResponse getStructSyncJobAnalyzeResultWithOptions(const Models::GetStructSyncJobAnalyzeResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the analysis result of a schema synchronization task.
       *
       * @param request GetStructSyncJobAnalyzeResultRequest
       * @return GetStructSyncJobAnalyzeResultResponse
       */
      Models::GetStructSyncJobAnalyzeResultResponse getStructSyncJobAnalyzeResult(const Models::GetStructSyncJobAnalyzeResultRequest &request);

      /**
       * @summary Queries the information of a schema synchronization task.
       *
       * @param request GetStructSyncJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStructSyncJobDetailResponse
       */
      Models::GetStructSyncJobDetailResponse getStructSyncJobDetailWithOptions(const Models::GetStructSyncJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a schema synchronization task.
       *
       * @param request GetStructSyncJobDetailRequest
       * @return GetStructSyncJobDetailResponse
       */
      Models::GetStructSyncJobDetailResponse getStructSyncJobDetail(const Models::GetStructSyncJobDetailRequest &request);

      /**
       * @summary Queries the details of a schema synchronization ticket.
       *
       * @param request GetStructSyncOrderDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStructSyncOrderDetailResponse
       */
      Models::GetStructSyncOrderDetailResponse getStructSyncOrderDetailWithOptions(const Models::GetStructSyncOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a schema synchronization ticket.
       *
       * @param request GetStructSyncOrderDetailRequest
       * @return GetStructSyncOrderDetailResponse
       */
      Models::GetStructSyncOrderDetailResponse getStructSyncOrderDetail(const Models::GetStructSyncOrderDetailRequest &request);

      /**
       * @summary Queries the topology of a data table.
       *
       * @param request GetTableDBTopologyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableDBTopologyResponse
       */
      Models::GetTableDBTopologyResponse getTableDBTopologyWithOptions(const Models::GetTableDBTopologyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the topology of a data table.
       *
       * @param request GetTableDBTopologyRequest
       * @return GetTableDBTopologyResponse
       */
      Models::GetTableDBTopologyResponse getTableDBTopology(const Models::GetTableDBTopologyRequest &request);

      /**
       * @summary Queries the information about a schema design ticket, such as the current node of the ticket, whether the ticket can be returned to the schema design node, and the publishing strategy.
       *
       * @param request GetTableDesignProjectFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableDesignProjectFlowResponse
       */
      Models::GetTableDesignProjectFlowResponse getTableDesignProjectFlowWithOptions(const Models::GetTableDesignProjectFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a schema design ticket, such as the current node of the ticket, whether the ticket can be returned to the schema design node, and the publishing strategy.
       *
       * @param request GetTableDesignProjectFlowRequest
       * @return GetTableDesignProjectFlowResponse
       */
      Models::GetTableDesignProjectFlowResponse getTableDesignProjectFlow(const Models::GetTableDesignProjectFlowRequest &request);

      /**
       * @summary Queries the information about the project and change base database of a schema design ticket, such as the state of the ticket, the ID of the user who created the ticket, and the name and ID of the change base database.
       *
       * @param request GetTableDesignProjectInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableDesignProjectInfoResponse
       */
      Models::GetTableDesignProjectInfoResponse getTableDesignProjectInfoWithOptions(const Models::GetTableDesignProjectInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the project and change base database of a schema design ticket, such as the state of the ticket, the ID of the user who created the ticket, and the name and ID of the change base database.
       *
       * @param request GetTableDesignProjectInfoRequest
       * @return GetTableDesignProjectInfoResponse
       */
      Models::GetTableDesignProjectInfoResponse getTableDesignProjectInfo(const Models::GetTableDesignProjectInfoRequest &request);

      /**
       * @summary Gets metadata knowledge for a specified GUID.
       *
       * @description This API can be called only for database instances that are enabled for security hosting.
       *
       * @param request GetTableKnowledgeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableKnowledgeInfoResponse
       */
      Models::GetTableKnowledgeInfoResponse getTableKnowledgeInfoWithOptions(const Models::GetTableKnowledgeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets metadata knowledge for a specified GUID.
       *
       * @description This API can be called only for database instances that are enabled for security hosting.
       *
       * @param request GetTableKnowledgeInfoRequest
       * @return GetTableKnowledgeInfoResponse
       */
      Models::GetTableKnowledgeInfoResponse getTableKnowledgeInfo(const Models::GetTableKnowledgeInfoRequest &request);

      /**
       * @summary Queries the topology of a table.
       *
       * @param request GetTableTopologyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableTopologyResponse
       */
      Models::GetTableTopologyResponse getTableTopologyWithOptions(const Models::GetTableTopologyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the topology of a table.
       *
       * @param request GetTableTopologyRequest
       * @return GetTableTopologyResponse
       */
      Models::GetTableTopologyResponse getTableTopology(const Models::GetTableTopologyRequest &request);

      /**
       * @summary Queries the configurations, including time variables, of a specified task node based on the task node ID.
       *
       * @param request GetTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTaskWithOptions(const Models::GetTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations, including time variables, of a specified task node based on the task node ID.
       *
       * @param request GetTaskRequest
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTask(const Models::GetTaskRequest &request);

      /**
       * @summary Queries the Directed Acyclic Graph (DAG) of a task flow.
       *
       * @param request GetTaskFlowGraphRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskFlowGraphResponse
       */
      Models::GetTaskFlowGraphResponse getTaskFlowGraphWithOptions(const Models::GetTaskFlowGraphRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Directed Acyclic Graph (DAG) of a task flow.
       *
       * @param request GetTaskFlowGraphRequest
       * @return GetTaskFlowGraphResponse
       */
      Models::GetTaskFlowGraphResponse getTaskFlowGraph(const Models::GetTaskFlowGraphRequest &request);

      /**
       * @summary Queries the notification settings for task flows.
       *
       * @param request GetTaskFlowNotificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskFlowNotificationResponse
       */
      Models::GetTaskFlowNotificationResponse getTaskFlowNotificationWithOptions(const Models::GetTaskFlowNotificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the notification settings for task flows.
       *
       * @param request GetTaskFlowNotificationRequest
       * @return GetTaskFlowNotificationResponse
       */
      Models::GetTaskFlowNotificationResponse getTaskFlowNotification(const Models::GetTaskFlowNotificationRequest &request);

      /**
       * @summary Queries the information about the nodes in an execution record of a task flow.
       *
       * @param request GetTaskInstanceRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskInstanceRelationResponse
       */
      Models::GetTaskInstanceRelationResponse getTaskInstanceRelationWithOptions(const Models::GetTaskInstanceRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the nodes in an execution record of a task flow.
       *
       * @param request GetTaskInstanceRelationRequest
       * @return GetTaskInstanceRelationResponse
       */
      Models::GetTaskInstanceRelationResponse getTaskInstanceRelation(const Models::GetTaskInstanceRelationRequest &request);

      /**
       * @summary Queries the information about a user.
       *
       * @param request GetUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a user.
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary Queries details of the active tenant.
       *
       * @param request GetUserActiveTenantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserActiveTenantResponse
       */
      Models::GetUserActiveTenantResponse getUserActiveTenantWithOptions(const Models::GetUserActiveTenantRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details of the active tenant.
       *
       * @param request GetUserActiveTenantRequest
       * @return GetUserActiveTenantResponse
       */
      Models::GetUserActiveTenantResponse getUserActiveTenant(const Models::GetUserActiveTenantRequest &request);

      /**
       * @summary Obtains the information of a file upload task.
       *
       * @param request GetUserUploadFileJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserUploadFileJobResponse
       */
      Models::GetUserUploadFileJobResponse getUserUploadFileJobWithOptions(const Models::GetUserUploadFileJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information of a file upload task.
       *
       * @param request GetUserUploadFileJobRequest
       * @return GetUserUploadFileJobResponse
       */
      Models::GetUserUploadFileJobResponse getUserUploadFileJob(const Models::GetUserUploadFileJobRequest &request);

      /**
       * @summary Queries the details of a workspace.
       *
       * @param request GetWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspaceWithOptions(const Models::GetWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a workspace.
       *
       * @param request GetWorkspaceRequest
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspace(const Models::GetWorkspaceRequest &request);

      /**
       * @summary Grants permissions on resources to users by using a permission template.
       *
       * @description You must be a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
       *
       * @param request GrantTemplateAuthorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantTemplateAuthorityResponse
       */
      Models::GrantTemplateAuthorityResponse grantTemplateAuthorityWithOptions(const Models::GrantTemplateAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions on resources to users by using a permission template.
       *
       * @description You must be a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
       *
       * @param request GrantTemplateAuthorityRequest
       * @return GrantTemplateAuthorityResponse
       */
      Models::GrantTemplateAuthorityResponse grantTemplateAuthority(const Models::GrantTemplateAuthorityRequest &request);

      /**
       * @summary Grants permissions on an instance, a database, or a table to a user.
       *
       * @param request GrantUserPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantUserPermissionResponse
       */
      Models::GrantUserPermissionResponse grantUserPermissionWithOptions(const Models::GrantUserPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions on an instance, a database, or a table to a user.
       *
       * @param request GrantUserPermissionRequest
       * @return GrantUserPermissionResponse
       */
      Models::GrantUserPermissionResponse grantUserPermission(const Models::GrantUserPermissionRequest &request);

      /**
       * @summary You can call this operation to obtain the authorization password of the security protection agent InspectProxyAccessSecret.
       *
       * @param request InspectProxyAccessSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InspectProxyAccessSecretResponse
       */
      Models::InspectProxyAccessSecretResponse inspectProxyAccessSecretWithOptions(const Models::InspectProxyAccessSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to obtain the authorization password of the security protection agent InspectProxyAccessSecret.
       *
       * @param request InspectProxyAccessSecretRequest
       * @return InspectProxyAccessSecretResponse
       */
      Models::InspectProxyAccessSecretResponse inspectProxyAccessSecret(const Models::InspectProxyAccessSecretRequest &request);

      /**
       * @summary Queries a list of users to which the specified policy is attached and the number of the users.
       *
       * @param request ListAbacAuthorizationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAbacAuthorizationsResponse
       */
      Models::ListAbacAuthorizationsResponse listAbacAuthorizationsWithOptions(const Models::ListAbacAuthorizationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of users to which the specified policy is attached and the number of the users.
       *
       * @param request ListAbacAuthorizationsRequest
       * @return ListAbacAuthorizationsResponse
       */
      Models::ListAbacAuthorizationsResponse listAbacAuthorizations(const Models::ListAbacAuthorizationsRequest &request);

      /**
       * @summary Queries a list of policies that are created by a user.
       *
       * @param request ListAbacPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAbacPoliciesResponse
       */
      Models::ListAbacPoliciesResponse listAbacPoliciesWithOptions(const Models::ListAbacPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of policies that are created by a user.
       *
       * @param request ListAbacPoliciesRequest
       * @return ListAbacPoliciesResponse
       */
      Models::ListAbacPoliciesResponse listAbacPolicies(const Models::ListAbacPoliciesRequest &request);

      /**
       * @summary Queries the information about permission templates, including the template creator, template name, and total number of templates.
       *
       * @param request ListAuthorityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorityTemplateResponse
       */
      Models::ListAuthorityTemplateResponse listAuthorityTemplateWithOptions(const Models::ListAuthorityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about permission templates, including the template creator, template name, and total number of templates.
       *
       * @param request ListAuthorityTemplateRequest
       * @return ListAuthorityTemplateResponse
       */
      Models::ListAuthorityTemplateResponse listAuthorityTemplate(const Models::ListAuthorityTemplateRequest &request);

      /**
       * @summary Queries the databases on which the specified user has permissions.
       *
       * @param request ListAuthorizedDatabasesForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedDatabasesForUserResponse
       */
      Models::ListAuthorizedDatabasesForUserResponse listAuthorizedDatabasesForUserWithOptions(const Models::ListAuthorizedDatabasesForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the databases on which the specified user has permissions.
       *
       * @param request ListAuthorizedDatabasesForUserRequest
       * @return ListAuthorizedDatabasesForUserResponse
       */
      Models::ListAuthorizedDatabasesForUserResponse listAuthorizedDatabasesForUser(const Models::ListAuthorizedDatabasesForUserRequest &request);

      /**
       * @summary Queries the instances on which the specified user has permissions.
       *
       * @param request ListAuthorizedInstancesForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedInstancesForUserResponse
       */
      Models::ListAuthorizedInstancesForUserResponse listAuthorizedInstancesForUserWithOptions(const Models::ListAuthorizedInstancesForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instances on which the specified user has permissions.
       *
       * @param request ListAuthorizedInstancesForUserRequest
       * @return ListAuthorizedInstancesForUserResponse
       */
      Models::ListAuthorizedInstancesForUserResponse listAuthorizedInstancesForUser(const Models::ListAuthorizedInstancesForUserRequest &request);

      /**
       * @summary Queries a list of users that have permissions on the specified database.
       *
       * @param request ListAuthorizedUsersForDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedUsersForDatabaseResponse
       */
      Models::ListAuthorizedUsersForDatabaseResponse listAuthorizedUsersForDatabaseWithOptions(const Models::ListAuthorizedUsersForDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of users that have permissions on the specified database.
       *
       * @param request ListAuthorizedUsersForDatabaseRequest
       * @return ListAuthorizedUsersForDatabaseResponse
       */
      Models::ListAuthorizedUsersForDatabaseResponse listAuthorizedUsersForDatabase(const Models::ListAuthorizedUsersForDatabaseRequest &request);

      /**
       * @summary Queries a list of users that have permissions on the specified instance.
       *
       * @param request ListAuthorizedUsersForInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedUsersForInstanceResponse
       */
      Models::ListAuthorizedUsersForInstanceResponse listAuthorizedUsersForInstanceWithOptions(const Models::ListAuthorizedUsersForInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of users that have permissions on the specified instance.
       *
       * @param request ListAuthorizedUsersForInstanceRequest
       * @return ListAuthorizedUsersForInstanceResponse
       */
      Models::ListAuthorizedUsersForInstanceResponse listAuthorizedUsersForInstance(const Models::ListAuthorizedUsersForInstanceRequest &request);

      /**
       * @summary Queries the classification templates.
       *
       * @param request ListClassificationTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClassificationTemplatesResponse
       */
      Models::ListClassificationTemplatesResponse listClassificationTemplatesWithOptions(const Models::ListClassificationTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the classification templates.
       *
       * @param request ListClassificationTemplatesRequest
       * @return ListClassificationTemplatesResponse
       */
      Models::ListClassificationTemplatesResponse listClassificationTemplates(const Models::ListClassificationTemplatesRequest &request);

      /**
       * @summary Returns the column information of a table.
       *
       * @description You can call this operation only for database instances whose control mode is Security Collaboration.
       *
       * @param request ListColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListColumnsResponse
       */
      Models::ListColumnsResponse listColumnsWithOptions(const Models::ListColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the column information of a table.
       *
       * @description You can call this operation only for database instances whose control mode is Security Collaboration.
       *
       * @param request ListColumnsRequest
       * @return ListColumnsResponse
       */
      Models::ListColumnsResponse listColumns(const Models::ListColumnsRequest &request);

      /**
       * @summary Queries the published versions of a task flow.
       *
       * @param request ListDAGVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDAGVersionsResponse
       */
      Models::ListDAGVersionsResponse listDAGVersionsWithOptions(const Models::ListDAGVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the published versions of a task flow.
       *
       * @param request ListDAGVersionsRequest
       * @return ListDAGVersionsResponse
       */
      Models::ListDAGVersionsResponse listDAGVersions(const Models::ListDAGVersionsRequest &request);

      /**
       * @summary Queries a list of SQL tasks.
       *
       * @param request ListDBTaskSQLJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDBTaskSQLJobResponse
       */
      Models::ListDBTaskSQLJobResponse listDBTaskSQLJobWithOptions(const Models::ListDBTaskSQLJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of SQL tasks.
       *
       * @param request ListDBTaskSQLJobRequest
       * @return ListDBTaskSQLJobResponse
       */
      Models::ListDBTaskSQLJobResponse listDBTaskSQLJob(const Models::ListDBTaskSQLJobRequest &request);

      /**
       * @summary Queries the details of an SQL task.
       *
       * @param request ListDBTaskSQLJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDBTaskSQLJobDetailResponse
       */
      Models::ListDBTaskSQLJobDetailResponse listDBTaskSQLJobDetailWithOptions(const Models::ListDBTaskSQLJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an SQL task.
       *
       * @param request ListDBTaskSQLJobDetailRequest
       * @return ListDBTaskSQLJobDetailResponse
       */
      Models::ListDBTaskSQLJobDetailResponse listDBTaskSQLJobDetail(const Models::ListDBTaskSQLJobDetailRequest &request);

      /**
       * @summary Queries the publishing details of a schema design ticket.
       *
       * @param request ListDDLPublishRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDDLPublishRecordsResponse
       */
      Models::ListDDLPublishRecordsResponse listDDLPublishRecordsWithOptions(const Models::ListDDLPublishRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the publishing details of a schema design ticket.
       *
       * @param request ListDDLPublishRecordsRequest
       * @return ListDDLPublishRecordsResponse
       */
      Models::ListDDLPublishRecordsResponse listDDLPublishRecords(const Models::ListDDLPublishRecordsRequest &request);

      /**
       * @summary Queries the databases that are involved in the precheck of a data change ticket.
       *
       * @description For more information about the Normal Data Modify feature, see [Change regular data](https://help.aliyun.com/document_detail/58419.html).
       *
       * @param request ListDataCorrectPreCheckDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataCorrectPreCheckDBResponse
       */
      Models::ListDataCorrectPreCheckDBResponse listDataCorrectPreCheckDBWithOptions(const Models::ListDataCorrectPreCheckDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the databases that are involved in the precheck of a data change ticket.
       *
       * @description For more information about the Normal Data Modify feature, see [Change regular data](https://help.aliyun.com/document_detail/58419.html).
       *
       * @param request ListDataCorrectPreCheckDBRequest
       * @return ListDataCorrectPreCheckDBResponse
       */
      Models::ListDataCorrectPreCheckDBResponse listDataCorrectPreCheckDB(const Models::ListDataCorrectPreCheckDBRequest &request);

      /**
       * @summary Queries the precheck information about an SQL statement that is specified in a data change ticket.
       *
       * @description For more information about the Normal Data Modify feature, see [Change regular data](https://help.aliyun.com/document_detail/58419.html).
       *
       * @param request ListDataCorrectPreCheckSQLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataCorrectPreCheckSQLResponse
       */
      Models::ListDataCorrectPreCheckSQLResponse listDataCorrectPreCheckSQLWithOptions(const Models::ListDataCorrectPreCheckSQLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the precheck information about an SQL statement that is specified in a data change ticket.
       *
       * @description For more information about the Normal Data Modify feature, see [Change regular data](https://help.aliyun.com/document_detail/58419.html).
       *
       * @param request ListDataCorrectPreCheckSQLRequest
       * @return ListDataCorrectPreCheckSQLResponse
       */
      Models::ListDataCorrectPreCheckSQLResponse listDataCorrectPreCheckSQL(const Models::ListDataCorrectPreCheckSQLRequest &request);

      /**
       * @summary Queries the precheck information of SQL statements used for data import in a ticket.
       *
       * @description You can call this operation only if the data is imported in security mode in your data import ticket.
       *
       * @param request ListDataImportSQLPreCheckDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataImportSQLPreCheckDetailResponse
       */
      Models::ListDataImportSQLPreCheckDetailResponse listDataImportSQLPreCheckDetailWithOptions(const Models::ListDataImportSQLPreCheckDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the precheck information of SQL statements used for data import in a ticket.
       *
       * @description You can call this operation only if the data is imported in security mode in your data import ticket.
       *
       * @param request ListDataImportSQLPreCheckDetailRequest
       * @return ListDataImportSQLPreCheckDetailResponse
       */
      Models::ListDataImportSQLPreCheckDetailResponse listDataImportSQLPreCheckDetail(const Models::ListDataImportSQLPreCheckDetailRequest &request);

      /**
       * @summary Queries the types of SQL statements used for data import in a ticket.
       *
       * @description You can call this operation only if the data is imported in security mode in your data import ticket.
       *
       * @param request ListDataImportSQLTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataImportSQLTypeResponse
       */
      Models::ListDataImportSQLTypeResponse listDataImportSQLTypeWithOptions(const Models::ListDataImportSQLTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types of SQL statements used for data import in a ticket.
       *
       * @description You can call this operation only if the data is imported in security mode in your data import ticket.
       *
       * @param request ListDataImportSQLTypeRequest
       * @return ListDataImportSQLTypeResponse
       */
      Models::ListDataImportSQLTypeResponse listDataImportSQLType(const Models::ListDataImportSQLTypeRequest &request);

      /**
       * @summary Queries a list of data catalogs in a data lake.
       *
       * @param request ListDataLakeCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeCatalogResponse
       */
      Models::ListDataLakeCatalogResponse listDataLakeCatalogWithOptions(const Models::ListDataLakeCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data catalogs in a data lake.
       *
       * @param request ListDataLakeCatalogRequest
       * @return ListDataLakeCatalogResponse
       */
      Models::ListDataLakeCatalogResponse listDataLakeCatalog(const Models::ListDataLakeCatalogRequest &request);

      /**
       * @summary Queries the list of databases in the data lake.
       *
       * @param request ListDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeDatabaseResponse
       */
      Models::ListDataLakeDatabaseResponse listDataLakeDatabaseWithOptions(const Models::ListDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of databases in the data lake.
       *
       * @param request ListDataLakeDatabaseRequest
       * @return ListDataLakeDatabaseResponse
       */
      Models::ListDataLakeDatabaseResponse listDataLakeDatabase(const Models::ListDataLakeDatabaseRequest &request);

      /**
       * @summary Queries a list of functions in a data lake.
       *
       * @param request ListDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeFunctionResponse
       */
      Models::ListDataLakeFunctionResponse listDataLakeFunctionWithOptions(const Models::ListDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of functions in a data lake.
       *
       * @param request ListDataLakeFunctionRequest
       * @return ListDataLakeFunctionResponse
       */
      Models::ListDataLakeFunctionResponse listDataLakeFunction(const Models::ListDataLakeFunctionRequest &request);

      /**
       * @summary Gets a list of data lake function names.
       *
       * @param request ListDataLakeFunctionNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeFunctionNameResponse
       */
      Models::ListDataLakeFunctionNameResponse listDataLakeFunctionNameWithOptions(const Models::ListDataLakeFunctionNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets a list of data lake function names.
       *
       * @param request ListDataLakeFunctionNameRequest
       * @return ListDataLakeFunctionNameResponse
       */
      Models::ListDataLakeFunctionNameResponse listDataLakeFunctionName(const Models::ListDataLakeFunctionNameRequest &request);

      /**
       * @summary Queries a list of partitions of a table in a data lake.
       *
       * @param tmpReq ListDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakePartitionResponse
       */
      Models::ListDataLakePartitionResponse listDataLakePartitionWithOptions(const Models::ListDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of partitions of a table in a data lake.
       *
       * @param request ListDataLakePartitionRequest
       * @return ListDataLakePartitionResponse
       */
      Models::ListDataLakePartitionResponse listDataLakePartition(const Models::ListDataLakePartitionRequest &request);

      /**
       * @summary Queries a list of partitions of a table in a data lake based on filter conditions.
       *
       * @param request ListDataLakePartitionByFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakePartitionByFilterResponse
       */
      Models::ListDataLakePartitionByFilterResponse listDataLakePartitionByFilterWithOptions(const Models::ListDataLakePartitionByFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of partitions of a table in a data lake based on filter conditions.
       *
       * @param request ListDataLakePartitionByFilterRequest
       * @return ListDataLakePartitionByFilterResponse
       */
      Models::ListDataLakePartitionByFilterResponse listDataLakePartitionByFilter(const Models::ListDataLakePartitionByFilterRequest &request);

      /**
       * @summary Queries a list of partition names of a table in a data lake.
       *
       * @param request ListDataLakePartitionNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakePartitionNameResponse
       */
      Models::ListDataLakePartitionNameResponse listDataLakePartitionNameWithOptions(const Models::ListDataLakePartitionNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of partition names of a table in a data lake.
       *
       * @param request ListDataLakePartitionNameRequest
       * @return ListDataLakePartitionNameResponse
       */
      Models::ListDataLakePartitionNameResponse listDataLakePartitionName(const Models::ListDataLakePartitionNameRequest &request);

      /**
       * @summary Queries a list of tables in a data lake.
       *
       * @param request ListDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeTableResponse
       */
      Models::ListDataLakeTableResponse listDataLakeTableWithOptions(const Models::ListDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tables in a data lake.
       *
       * @param request ListDataLakeTableRequest
       * @return ListDataLakeTableResponse
       */
      Models::ListDataLakeTableResponse listDataLakeTable(const Models::ListDataLakeTableRequest &request);

      /**
       * @summary Queries a list of names of tables in a data lake.
       *
       * @param request ListDataLakeTableNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeTableNameResponse
       */
      Models::ListDataLakeTableNameResponse listDataLakeTableNameWithOptions(const Models::ListDataLakeTableNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of names of tables in a data lake.
       *
       * @param request ListDataLakeTableNameRequest
       * @return ListDataLakeTableNameResponse
       */
      Models::ListDataLakeTableNameResponse listDataLakeTableName(const Models::ListDataLakeTableNameRequest &request);

      /**
       * @summary Queries basic information about tables in the data lake.
       *
       * @param request ListDataLakeTablebaseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeTablebaseInfoResponse
       */
      Models::ListDataLakeTablebaseInfoResponse listDataLakeTablebaseInfoWithOptions(const Models::ListDataLakeTablebaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries basic information about tables in the data lake.
       *
       * @param request ListDataLakeTablebaseInfoRequest
       * @return ListDataLakeTablebaseInfoResponse
       */
      Models::ListDataLakeTablebaseInfoResponse listDataLakeTablebaseInfo(const Models::ListDataLakeTablebaseInfoRequest &request);

      /**
       * @summary Queries the permissions of users on a database.
       *
       * @param request ListDatabaseUserPermssionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabaseUserPermssionsResponse
       */
      Models::ListDatabaseUserPermssionsResponse listDatabaseUserPermssionsWithOptions(const Models::ListDatabaseUserPermssionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permissions of users on a database.
       *
       * @param request ListDatabaseUserPermssionsRequest
       * @return ListDatabaseUserPermssionsResponse
       */
      Models::ListDatabaseUserPermssionsResponse listDatabaseUserPermssions(const Models::ListDatabaseUserPermssionsRequest &request);

      /**
       * @summary Queries the databases in a database instance.
       *
       * @param request ListDatabasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabasesWithOptions(const Models::ListDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the databases in a database instance.
       *
       * @param request ListDatabasesRequest
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabases(const Models::ListDatabasesRequest &request);

      /**
       * @summary Queries the default service level agreement (SLA) timeout rules.
       *
       * @param request ListDefaultSLARulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDefaultSLARulesResponse
       */
      Models::ListDefaultSLARulesResponse listDefaultSLARulesWithOptions(const Models::ListDefaultSLARulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default service level agreement (SLA) timeout rules.
       *
       * @param request ListDefaultSLARulesRequest
       * @return ListDefaultSLARulesResponse
       */
      Models::ListDefaultSLARulesResponse listDefaultSLARules(const Models::ListDefaultSLARulesRequest &request);

      /**
       * @summary Queries masking rules.
       *
       * @param request ListDesensitizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDesensitizationRuleResponse
       */
      Models::ListDesensitizationRuleResponse listDesensitizationRuleWithOptions(const Models::ListDesensitizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries masking rules.
       *
       * @param request ListDesensitizationRuleRequest
       * @return ListDesensitizationRuleResponse
       */
      Models::ListDesensitizationRuleResponse listDesensitizationRule(const Models::ListDesensitizationRuleRequest &request);

      /**
       * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
       *
       * @description ## 请求说明
       * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
       * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
       * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
       * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
       * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
       * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
       * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
       *
       * @param request ListDifyInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDifyInstancesResponse
       */
      Models::ListDifyInstancesResponse listDifyInstancesWithOptions(const Models::ListDifyInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
       *
       * @description ## 请求说明
       * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
       * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
       * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
       * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
       * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
       * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
       * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
       *
       * @param request ListDifyInstancesRequest
       * @return ListDifyInstancesResponse
       */
      Models::ListDifyInstancesResponse listDifyInstances(const Models::ListDifyInstancesRequest &request);

      /**
       * @summary Queries valid orders.
       *
       * @param request ListEffectiveOrdersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEffectiveOrdersResponse
       */
      Models::ListEffectiveOrdersResponse listEffectiveOrdersWithOptions(const Models::ListEffectiveOrdersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries valid orders.
       *
       * @param request ListEffectiveOrdersRequest
       * @return ListEffectiveOrdersResponse
       */
      Models::ListEffectiveOrdersResponse listEffectiveOrders(const Models::ListEffectiveOrdersRequest &request);

      /**
       * @summary Queries the indexes of a table.
       *
       * @param request ListIndexesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIndexesResponse
       */
      Models::ListIndexesResponse listIndexesWithOptions(const Models::ListIndexesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the indexes of a table.
       *
       * @param request ListIndexesRequest
       * @return ListIndexesResponse
       */
      Models::ListIndexesResponse listIndexes(const Models::ListIndexesRequest &request);

      /**
       * @summary Queries the logon records of an instance.
       *
       * @param request ListInstanceLoginAuditLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceLoginAuditLogResponse
       */
      Models::ListInstanceLoginAuditLogResponse listInstanceLoginAuditLogWithOptions(const Models::ListInstanceLoginAuditLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logon records of an instance.
       *
       * @param request ListInstanceLoginAuditLogRequest
       * @return ListInstanceLoginAuditLogResponse
       */
      Models::ListInstanceLoginAuditLogResponse listInstanceLoginAuditLog(const Models::ListInstanceLoginAuditLogRequest &request);

      /**
       * @summary Queries the permissions of a user on a specific instance.
       *
       * @param request ListInstanceUserPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceUserPermissionsResponse
       */
      Models::ListInstanceUserPermissionsResponse listInstanceUserPermissionsWithOptions(const Models::ListInstanceUserPermissionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permissions of a user on a specific instance.
       *
       * @param request ListInstanceUserPermissionsRequest
       * @return ListInstanceUserPermissionsResponse
       */
      Models::ListInstanceUserPermissionsResponse listInstanceUserPermissions(const Models::ListInstanceUserPermissionsRequest &request);

      /**
       * @summary Queries the information about database instances.
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about database instances.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Queries the task flows corresponding to a specific business scenario in a workspace in Data Management (DMS).
       *
       * @description *   Before you call this operation, make sure that you have the access permissions on the workspace. If you do not have the access permissions on the workspace, you can contact a DMS administrator, database administrator (DBA), or workspace administrator to add you as a member of the workspace. The [AddLhMembers](https://help.aliyun.com/document_detail/424759.html) operation can be called to add a workspace member.
       * *   If you are a DMS administrator or a workspace administrator, you can query the business scenarios and task flows related to a user in a workspace based on the user ID.
       *
       * @param request ListLhTaskFlowAndScenarioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLhTaskFlowAndScenarioResponse
       */
      Models::ListLhTaskFlowAndScenarioResponse listLhTaskFlowAndScenarioWithOptions(const Models::ListLhTaskFlowAndScenarioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task flows corresponding to a specific business scenario in a workspace in Data Management (DMS).
       *
       * @description *   Before you call this operation, make sure that you have the access permissions on the workspace. If you do not have the access permissions on the workspace, you can contact a DMS administrator, database administrator (DBA), or workspace administrator to add you as a member of the workspace. The [AddLhMembers](https://help.aliyun.com/document_detail/424759.html) operation can be called to add a workspace member.
       * *   If you are a DMS administrator or a workspace administrator, you can query the business scenarios and task flows related to a user in a workspace based on the user ID.
       *
       * @param request ListLhTaskFlowAndScenarioRequest
       * @return ListLhTaskFlowAndScenarioResponse
       */
      Models::ListLhTaskFlowAndScenarioResponse listLhTaskFlowAndScenario(const Models::ListLhTaskFlowAndScenarioRequest &request);

      /**
       * @summary Queries the details of logical databases.
       *
       * @param request ListLogicDatabasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogicDatabasesResponse
       */
      Models::ListLogicDatabasesResponse listLogicDatabasesWithOptions(const Models::ListLogicDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of logical databases.
       *
       * @param request ListLogicDatabasesRequest
       * @return ListLogicDatabasesResponse
       */
      Models::ListLogicDatabasesResponse listLogicDatabases(const Models::ListLogicDatabasesRequest &request);

      /**
       * @summary Queries the routing algorithms of a logical table.
       *
       * @param request ListLogicTableRouteConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogicTableRouteConfigResponse
       */
      Models::ListLogicTableRouteConfigResponse listLogicTableRouteConfigWithOptions(const Models::ListLogicTableRouteConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the routing algorithms of a logical table.
       *
       * @param request ListLogicTableRouteConfigRequest
       * @return ListLogicTableRouteConfigResponse
       */
      Models::ListLogicTableRouteConfigResponse listLogicTableRouteConfig(const Models::ListLogicTableRouteConfigRequest &request);

      /**
       * @summary Queries the details of the logical tables in a logical database.
       *
       * @param request ListLogicTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogicTablesResponse
       */
      Models::ListLogicTablesResponse listLogicTablesWithOptions(const Models::ListLogicTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the logical tables in a logical database.
       *
       * @param request ListLogicTablesRequest
       * @return ListLogicTablesResponse
       */
      Models::ListLogicTablesResponse listLogicTables(const Models::ListLogicTablesRequest &request);

      /**
       * @summary Queries a list of categories
       *
       * @param request ListMetaCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMetaCategoryResponse
       */
      Models::ListMetaCategoryResponse listMetaCategoryWithOptions(const Models::ListMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of categories
       *
       * @param request ListMetaCategoryRequest
       * @return ListMetaCategoryResponse
       */
      Models::ListMetaCategoryResponse listMetaCategory(const Models::ListMetaCategoryRequest &request);

      /**
       * @summary Queries tickets in Data Management (DMS).
       *
       * @param request ListOrdersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrdersResponse
       */
      Models::ListOrdersResponse listOrdersWithOptions(const Models::ListOrdersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tickets in Data Management (DMS).
       *
       * @param request ListOrdersRequest
       * @return ListOrdersResponse
       */
      Models::ListOrdersResponse listOrders(const Models::ListOrdersRequest &request);

      /**
       * @summary Queries the proxies that are generated by the secure access proxy feature.
       *
       * @param request ListProxiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProxiesResponse
       */
      Models::ListProxiesResponse listProxiesWithOptions(const Models::ListProxiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the proxies that are generated by the secure access proxy feature.
       *
       * @param request ListProxiesRequest
       * @return ListProxiesResponse
       */
      Models::ListProxiesResponse listProxies(const Models::ListProxiesRequest &request);

      /**
       * @summary Queries information about users that are authorized to access a database instance by using the secure access proxy feature.
       *
       * @param request ListProxyAccessesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProxyAccessesResponse
       */
      Models::ListProxyAccessesResponse listProxyAccessesWithOptions(const Models::ListProxyAccessesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about users that are authorized to access a database instance by using the secure access proxy feature.
       *
       * @param request ListProxyAccessesRequest
       * @return ListProxyAccessesResponse
       */
      Models::ListProxyAccessesResponse listProxyAccesses(const Models::ListProxyAccessesRequest &request);

      /**
       * @summary 操作审计-数据安全代理SQL执行列表
       *
       * @param request ListProxySQLExecAuditLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProxySQLExecAuditLogResponse
       */
      Models::ListProxySQLExecAuditLogResponse listProxySQLExecAuditLogWithOptions(const Models::ListProxySQLExecAuditLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 操作审计-数据安全代理SQL执行列表
       *
       * @param request ListProxySQLExecAuditLogRequest
       * @return ListProxySQLExecAuditLogResponse
       */
      Models::ListProxySQLExecAuditLogResponse listProxySQLExecAuditLog(const Models::ListProxySQLExecAuditLogRequest &request);

      /**
       * @summary Queries the custom service level agreement (SLA) rules.
       *
       * @param request ListSLARulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSLARulesResponse
       */
      Models::ListSLARulesResponse listSLARulesWithOptions(const Models::ListSLARulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the custom service level agreement (SLA) rules.
       *
       * @param request ListSLARulesRequest
       * @return ListSLARulesResponse
       */
      Models::ListSLARulesResponse listSLARules(const Models::ListSLARulesRequest &request);

      /**
       * @summary Queries SQL statements that were written on the SQLConsole tab.
       *
       * @param request ListSQLExecAuditLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSQLExecAuditLogResponse
       */
      Models::ListSQLExecAuditLogResponse listSQLExecAuditLogWithOptions(const Models::ListSQLExecAuditLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries SQL statements that were written on the SQLConsole tab.
       *
       * @param request ListSQLExecAuditLogRequest
       * @return ListSQLExecAuditLogResponse
       */
      Models::ListSQLExecAuditLogResponse listSQLExecAuditLog(const Models::ListSQLExecAuditLogRequest &request);

      /**
       * @summary Queries the details of the SQL statements that are involved in an SQL review ticket.
       *
       * @description For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
       *
       * @param tmpReq ListSQLReviewOriginSQLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSQLReviewOriginSQLResponse
       */
      Models::ListSQLReviewOriginSQLResponse listSQLReviewOriginSQLWithOptions(const Models::ListSQLReviewOriginSQLRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the SQL statements that are involved in an SQL review ticket.
       *
       * @description For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
       *
       * @param request ListSQLReviewOriginSQLRequest
       * @return ListSQLReviewOriginSQLResponse
       */
      Models::ListSQLReviewOriginSQLResponse listSQLReviewOriginSQL(const Models::ListSQLReviewOriginSQLRequest &request);

      /**
       * @summary Queries business scenarios.
       *
       * @param request ListScenariosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScenariosResponse
       */
      Models::ListScenariosResponse listScenariosWithOptions(const Models::ListScenariosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries business scenarios.
       *
       * @param request ListScenariosRequest
       * @return ListScenariosResponse
       */
      Models::ListScenariosResponse listScenarios(const Models::ListScenariosRequest &request);

      /**
       * @summary Queries the information about a sensitive field. The information includes the masking algorithm ID, masking algorithm name, and field security level.
       *
       * @param request ListSensitiveColumnInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSensitiveColumnInfoResponse
       */
      Models::ListSensitiveColumnInfoResponse listSensitiveColumnInfoWithOptions(const Models::ListSensitiveColumnInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a sensitive field. The information includes the masking algorithm ID, masking algorithm name, and field security level.
       *
       * @param request ListSensitiveColumnInfoRequest
       * @return ListSensitiveColumnInfoResponse
       */
      Models::ListSensitiveColumnInfoResponse listSensitiveColumnInfo(const Models::ListSensitiveColumnInfoRequest &request);

      /**
       * @summary Queries sensitive fields in a table of a database.
       *
       * @param request ListSensitiveColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSensitiveColumnsResponse
       */
      Models::ListSensitiveColumnsResponse listSensitiveColumnsWithOptions(const Models::ListSensitiveColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries sensitive fields in a table of a database.
       *
       * @param request ListSensitiveColumnsRequest
       * @return ListSensitiveColumnsResponse
       */
      Models::ListSensitiveColumnsResponse listSensitiveColumns(const Models::ListSensitiveColumnsRequest &request);

      /**
       * @summary Queries the details of a sensitive field.
       *
       * @param request ListSensitiveColumnsDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSensitiveColumnsDetailResponse
       */
      Models::ListSensitiveColumnsDetailResponse listSensitiveColumnsDetailWithOptions(const Models::ListSensitiveColumnsDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a sensitive field.
       *
       * @param request ListSensitiveColumnsDetailRequest
       * @return ListSensitiveColumnsDetailResponse
       */
      Models::ListSensitiveColumnsDetailResponse listSensitiveColumnsDetail(const Models::ListSensitiveColumnsDetailRequest &request);

      /**
       * @summary Queries the audit logs for sensitive information.
       *
       * @param request ListSensitiveDataAuditLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSensitiveDataAuditLogResponse
       */
      Models::ListSensitiveDataAuditLogResponse listSensitiveDataAuditLogWithOptions(const Models::ListSensitiveDataAuditLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the audit logs for sensitive information.
       *
       * @param request ListSensitiveDataAuditLogRequest
       * @return ListSensitiveDataAuditLogResponse
       */
      Models::ListSensitiveDataAuditLogResponse listSensitiveDataAuditLog(const Models::ListSensitiveDataAuditLogRequest &request);

      /**
       * @summary Queries the sensitivity levels of a classification template.
       *
       * @param request ListSensitivityLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSensitivityLevelResponse
       */
      Models::ListSensitivityLevelResponse listSensitivityLevelWithOptions(const Models::ListSensitivityLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sensitivity levels of a classification template.
       *
       * @param request ListSensitivityLevelRequest
       * @return ListSensitivityLevelResponse
       */
      Models::ListSensitivityLevelResponse listSensitivityLevel(const Models::ListSensitivityLevelRequest &request);

      /**
       * @summary Queries security rule sets.
       *
       * @param request ListStandardGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStandardGroupsResponse
       */
      Models::ListStandardGroupsResponse listStandardGroupsWithOptions(const Models::ListStandardGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries security rule sets.
       *
       * @param request ListStandardGroupsRequest
       * @return ListStandardGroupsResponse
       */
      Models::ListStandardGroupsResponse listStandardGroups(const Models::ListStandardGroupsRequest &request);

      /**
       * @summary Queries the details about fields in a table.
       *
       * @param request ListTableColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTableColumnsResponse
       */
      Models::ListTableColumnsResponse listTableColumnsWithOptions(const Models::ListTableColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about fields in a table.
       *
       * @param request ListTableColumnsRequest
       * @return ListTableColumnsResponse
       */
      Models::ListTableColumnsResponse listTableColumns(const Models::ListTableColumnsRequest &request);

      /**
       * @summary Queries the tables in a database.
       *
       * @description You can call this operation only for database instances whose control mode is Security Collaboration.
       *
       * @param request ListTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTablesWithOptions(const Models::ListTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tables in a database.
       *
       * @description You can call this operation only for database instances whose control mode is Security Collaboration.
       *
       * @param request ListTablesRequest
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTables(const Models::ListTablesRequest &request);

      /**
       * @summary Obtains the list of tables in a category.
       *
       * @param request ListTablesInCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTablesInCategoryResponse
       */
      Models::ListTablesInCategoryResponse listTablesInCategoryWithOptions(const Models::ListTablesInCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the list of tables in a category.
       *
       * @param request ListTablesInCategoryRequest
       * @return ListTablesInCategoryResponse
       */
      Models::ListTablesInCategoryResponse listTablesInCategory(const Models::ListTablesInCategoryRequest &request);

      /**
       * @summary 任务编排获取任务流列表
       *
       * @param request ListTaskFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskFlowResponse
       */
      Models::ListTaskFlowResponse listTaskFlowWithOptions(const Models::ListTaskFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务编排获取任务流列表
       *
       * @param request ListTaskFlowRequest
       * @return ListTaskFlowResponse
       */
      Models::ListTaskFlowResponse listTaskFlow(const Models::ListTaskFlowRequest &request);

      /**
       * @summary Queries the constants for a task flow.
       *
       * @param request ListTaskFlowConstantsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskFlowConstantsResponse
       */
      Models::ListTaskFlowConstantsResponse listTaskFlowConstantsWithOptions(const Models::ListTaskFlowConstantsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the constants for a task flow.
       *
       * @param request ListTaskFlowConstantsRequest
       * @return ListTaskFlowConstantsResponse
       */
      Models::ListTaskFlowConstantsResponse listTaskFlowConstants(const Models::ListTaskFlowConstantsRequest &request);

      /**
       * @summary Queries the users that are involved in a specified task flow.
       *
       * @param request ListTaskFlowCooperatorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskFlowCooperatorsResponse
       */
      Models::ListTaskFlowCooperatorsResponse listTaskFlowCooperatorsWithOptions(const Models::ListTaskFlowCooperatorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the users that are involved in a specified task flow.
       *
       * @param request ListTaskFlowCooperatorsRequest
       * @return ListTaskFlowCooperatorsResponse
       */
      Models::ListTaskFlowCooperatorsResponse listTaskFlowCooperators(const Models::ListTaskFlowCooperatorsRequest &request);

      /**
       * @summary Queries the edges of the directed acyclic graph (DAG) for a specified task flow based on multiple conditions.
       *
       * @description This operation is used for multi-condition query. You can call this operation to query the edges of a specified task flow that meet all specified conditions.
       *
       * @param request ListTaskFlowEdgesByConditionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskFlowEdgesByConditionResponse
       */
      Models::ListTaskFlowEdgesByConditionResponse listTaskFlowEdgesByConditionWithOptions(const Models::ListTaskFlowEdgesByConditionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the edges of the directed acyclic graph (DAG) for a specified task flow based on multiple conditions.
       *
       * @description This operation is used for multi-condition query. You can call this operation to query the edges of a specified task flow that meet all specified conditions.
       *
       * @param request ListTaskFlowEdgesByConditionRequest
       * @return ListTaskFlowEdgesByConditionResponse
       */
      Models::ListTaskFlowEdgesByConditionResponse listTaskFlowEdgesByCondition(const Models::ListTaskFlowEdgesByConditionRequest &request);

      /**
       * @summary Queries the execution records of a task flow.
       *
       * @param request ListTaskFlowInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskFlowInstanceResponse
       */
      Models::ListTaskFlowInstanceResponse listTaskFlowInstanceWithOptions(const Models::ListTaskFlowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution records of a task flow.
       *
       * @param request ListTaskFlowInstanceRequest
       * @return ListTaskFlowInstanceResponse
       */
      Models::ListTaskFlowInstanceResponse listTaskFlowInstance(const Models::ListTaskFlowInstanceRequest &request);

      /**
       * @summary Queries the time variables for a task flow.
       *
       * @param request ListTaskFlowTimeVariablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskFlowTimeVariablesResponse
       */
      Models::ListTaskFlowTimeVariablesResponse listTaskFlowTimeVariablesWithOptions(const Models::ListTaskFlowTimeVariablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the time variables for a task flow.
       *
       * @param request ListTaskFlowTimeVariablesRequest
       * @return ListTaskFlowTimeVariablesResponse
       */
      Models::ListTaskFlowTimeVariablesResponse listTaskFlowTimeVariables(const Models::ListTaskFlowTimeVariablesRequest &request);

      /**
       * @summary Queries task flows by page.
       *
       * @param tmpReq ListTaskFlowsByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskFlowsByPageResponse
       */
      Models::ListTaskFlowsByPageResponse listTaskFlowsByPageWithOptions(const Models::ListTaskFlowsByPageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries task flows by page.
       *
       * @param request ListTaskFlowsByPageRequest
       * @return ListTaskFlowsByPageResponse
       */
      Models::ListTaskFlowsByPageResponse listTaskFlowsByPage(const Models::ListTaskFlowsByPageRequest &request);

      /**
       * @summary Queries the tasks in a specified task flow.
       *
       * @param request ListTasksInTaskFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTasksInTaskFlowResponse
       */
      Models::ListTasksInTaskFlowResponse listTasksInTaskFlowWithOptions(const Models::ListTasksInTaskFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tasks in a specified task flow.
       *
       * @param request ListTasksInTaskFlowRequest
       * @return ListTasksInTaskFlowResponse
       */
      Models::ListTasksInTaskFlowResponse listTasksInTaskFlow(const Models::ListTasksInTaskFlowRequest &request);

      /**
       * @summary Obtains
       *
       * @param request ListUserOwnedResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserOwnedResourcesResponse
       */
      Models::ListUserOwnedResourcesResponse listUserOwnedResourcesWithOptions(const Models::ListUserOwnedResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains
       *
       * @param request ListUserOwnedResourcesRequest
       * @return ListUserOwnedResourcesResponse
       */
      Models::ListUserOwnedResourcesResponse listUserOwnedResources(const Models::ListUserOwnedResourcesRequest &request);

      /**
       * @summary Queries the permissions of a specific user on a database or a table.
       *
       * @param request ListUserPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserPermissionsResponse
       */
      Models::ListUserPermissionsResponse listUserPermissionsWithOptions(const Models::ListUserPermissionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permissions of a specific user on a database or a table.
       *
       * @param request ListUserPermissionsRequest
       * @return ListUserPermissionsResponse
       */
      Models::ListUserPermissionsResponse listUserPermissions(const Models::ListUserPermissionsRequest &request);

      /**
       * @summary 获取用户租户列表
       *
       * @param request ListUserTenantsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserTenantsResponse
       */
      Models::ListUserTenantsResponse listUserTenantsWithOptions(const Models::ListUserTenantsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户租户列表
       *
       * @param request ListUserTenantsRequest
       * @return ListUserTenantsResponse
       */
      Models::ListUserTenantsResponse listUserTenants(const Models::ListUserTenantsRequest &request);

      /**
       * @summary Queries the details of users.
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of users.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Queries approval nodes.
       *
       * @param request ListWorkFlowNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkFlowNodesResponse
       */
      Models::ListWorkFlowNodesResponse listWorkFlowNodesWithOptions(const Models::ListWorkFlowNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries approval nodes.
       *
       * @param request ListWorkFlowNodesRequest
       * @return ListWorkFlowNodesResponse
       */
      Models::ListWorkFlowNodesResponse listWorkFlowNodes(const Models::ListWorkFlowNodesRequest &request);

      /**
       * @summary Queries approval templates.
       *
       * @param request ListWorkFlowTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkFlowTemplatesResponse
       */
      Models::ListWorkFlowTemplatesResponse listWorkFlowTemplatesWithOptions(const Models::ListWorkFlowTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries approval templates.
       *
       * @param request ListWorkFlowTemplatesRequest
       * @return ListWorkFlowTemplatesResponse
       */
      Models::ListWorkFlowTemplatesResponse listWorkFlowTemplates(const Models::ListWorkFlowTemplatesRequest &request);

      /**
       * @summary Queries a list of workspaces of the tenant.
       *
       * @param request ListWorkspacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of workspaces of the tenant.
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary Sets the status of a task flow to "Successful".
       *
       * @param request MakeTaskFlowInstanceSuccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MakeTaskFlowInstanceSuccessResponse
       */
      Models::MakeTaskFlowInstanceSuccessResponse makeTaskFlowInstanceSuccessWithOptions(const Models::MakeTaskFlowInstanceSuccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the status of a task flow to "Successful".
       *
       * @param request MakeTaskFlowInstanceSuccessRequest
       * @return MakeTaskFlowInstanceSuccessResponse
       */
      Models::MakeTaskFlowInstanceSuccessResponse makeTaskFlowInstanceSuccess(const Models::MakeTaskFlowInstanceSuccessRequest &request);

      /**
       * @summary Modifies the SQL script that is submitted by using a data change ticket.
       *
       * @param request ModifyDataCorrectExecSQLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataCorrectExecSQLResponse
       */
      Models::ModifyDataCorrectExecSQLResponse modifyDataCorrectExecSQLWithOptions(const Models::ModifyDataCorrectExecSQLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the SQL script that is submitted by using a data change ticket.
       *
       * @param request ModifyDataCorrectExecSQLRequest
       * @return ModifyDataCorrectExecSQLResponse
       */
      Models::ModifyDataCorrectExecSQLResponse modifyDataCorrectExecSQL(const Models::ModifyDataCorrectExecSQLRequest &request);

      /**
       * @summary Modifies the masking rule bound to a specified field.
       *
       * @param request ModifyDesensitizationStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDesensitizationStrategyResponse
       */
      Models::ModifyDesensitizationStrategyResponse modifyDesensitizationStrategyWithOptions(const Models::ModifyDesensitizationStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the masking rule bound to a specified field.
       *
       * @param request ModifyDesensitizationStrategyRequest
       * @return ModifyDesensitizationStrategyResponse
       */
      Models::ModifyDesensitizationStrategyResponse modifyDesensitizationStrategy(const Models::ModifyDesensitizationStrategyRequest &request);

      /**
       * @summary Modifies the basic and advanced information about a database instance in Data Management (DMS). The basic information includes the hosting mode of the instance, the instance account username and password, and features that are enabled for the instance. The advanced information includes the environment type, the instance name in DMS, and the timeout period for querying and exporting data.
       *
       * @param request ModifyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstanceWithOptions(const Models::ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic and advanced information about a database instance in Data Management (DMS). The basic information includes the hosting mode of the instance, the instance account username and password, and features that are enabled for the instance. The advanced information includes the environment type, the instance name in DMS, and the timeout period for querying and exporting data.
       *
       * @param request ModifyInstanceRequest
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstance(const Models::ModifyInstanceRequest &request);

      /**
       * @summary Migrates a task flow to a specified business scenario.
       *
       * @param request MoveTaskFlowToScenarioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveTaskFlowToScenarioResponse
       */
      Models::MoveTaskFlowToScenarioResponse moveTaskFlowToScenarioWithOptions(const Models::MoveTaskFlowToScenarioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates a task flow to a specified business scenario.
       *
       * @param request MoveTaskFlowToScenarioRequest
       * @return MoveTaskFlowToScenarioResponse
       */
      Models::MoveTaskFlowToScenarioResponse moveTaskFlowToScenario(const Models::MoveTaskFlowToScenarioRequest &request);

      /**
       * @summary Unpublishes a published task flow.
       *
       * @param request OfflineTaskFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineTaskFlowResponse
       */
      Models::OfflineTaskFlowResponse offlineTaskFlowWithOptions(const Models::OfflineTaskFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unpublishes a published task flow.
       *
       * @param request OfflineTaskFlowRequest
       * @return OfflineTaskFlowResponse
       */
      Models::OfflineTaskFlowResponse offlineTaskFlow(const Models::OfflineTaskFlowRequest &request);

      /**
       * @summary Analyzes and optimizes the SQL statements in the specified database.
       *
       * @description You can call this operation to analyze and optimize the SQL statements in the specified database.
       *
       * @param request OptimizeSqlByMetaAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OptimizeSqlByMetaAgentResponse
       */
      Models::OptimizeSqlByMetaAgentResponse optimizeSqlByMetaAgentWithOptions(const Models::OptimizeSqlByMetaAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Analyzes and optimizes the SQL statements in the specified database.
       *
       * @description You can call this operation to analyze and optimize the SQL statements in the specified database.
       *
       * @param request OptimizeSqlByMetaAgentRequest
       * @return OptimizeSqlByMetaAgentResponse
       */
      Models::OptimizeSqlByMetaAgentResponse optimizeSqlByMetaAgent(const Models::OptimizeSqlByMetaAgentRequest &request);

      /**
       * @summary Pauses a SQL task for data change.
       *
       * @description You can call this operation only for database instances that are managed in Security Collaboration mode.
       *
       * @param request PauseDataCorrectSQLJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseDataCorrectSQLJobResponse
       */
      Models::PauseDataCorrectSQLJobResponse pauseDataCorrectSQLJobWithOptions(const Models::PauseDataCorrectSQLJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses a SQL task for data change.
       *
       * @description You can call this operation only for database instances that are managed in Security Collaboration mode.
       *
       * @param request PauseDataCorrectSQLJobRequest
       * @return PauseDataCorrectSQLJobResponse
       */
      Models::PauseDataCorrectSQLJobResponse pauseDataCorrectSQLJob(const Models::PauseDataCorrectSQLJobRequest &request);

      /**
       * @summary Terminates a SQL result set export task.
       *
       * @param request PauseDataExportJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseDataExportJobResponse
       */
      Models::PauseDataExportJobResponse pauseDataExportJobWithOptions(const Models::PauseDataExportJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a SQL result set export task.
       *
       * @param request PauseDataExportJobRequest
       * @return PauseDataExportJobResponse
       */
      Models::PauseDataExportJobResponse pauseDataExportJob(const Models::PauseDataExportJobRequest &request);

      /**
       * @summary Previews the approval process of a ticket before the ticket is submitted.
       *
       * @param request PreviewWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewWorkflowResponse
       */
      Models::PreviewWorkflowResponse previewWorkflowWithOptions(const Models::PreviewWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Previews the approval process of a ticket before the ticket is submitted.
       *
       * @param request PreviewWorkflowRequest
       * @return PreviewWorkflowResponse
       */
      Models::PreviewWorkflowResponse previewWorkflow(const Models::PreviewWorkflowRequest &request);

      /**
       * @summary Publishes and deploys a task flow.
       *
       * @param request PublishAndDeployTaskFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishAndDeployTaskFlowResponse
       */
      Models::PublishAndDeployTaskFlowResponse publishAndDeployTaskFlowWithOptions(const Models::PublishAndDeployTaskFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes and deploys a task flow.
       *
       * @param request PublishAndDeployTaskFlowRequest
       * @return PublishAndDeployTaskFlowResponse
       */
      Models::PublishAndDeployTaskFlowResponse publishAndDeployTaskFlow(const Models::PublishAndDeployTaskFlowRequest &request);

      /**
       * @summary Queries the download and parsing progress of data tracking logs.
       *
       * @param request QueryDataTrackResultDownloadStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDataTrackResultDownloadStatusResponse
       */
      Models::QueryDataTrackResultDownloadStatusResponse queryDataTrackResultDownloadStatusWithOptions(const Models::QueryDataTrackResultDownloadStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the download and parsing progress of data tracking logs.
       *
       * @param request QueryDataTrackResultDownloadStatusRequest
       * @return QueryDataTrackResultDownloadStatusResponse
       */
      Models::QueryDataTrackResultDownloadStatusResponse queryDataTrackResultDownloadStatus(const Models::QueryDataTrackResultDownloadStatusRequest &request);

      /**
       * @summary 部署任务流的历史版本
       *
       * @param request ReDeployLhDagVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReDeployLhDagVersionResponse
       */
      Models::ReDeployLhDagVersionResponse reDeployLhDagVersionWithOptions(const Models::ReDeployLhDagVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 部署任务流的历史版本
       *
       * @param request ReDeployLhDagVersionRequest
       * @return ReDeployLhDagVersionResponse
       */
      Models::ReDeployLhDagVersionResponse reDeployLhDagVersion(const Models::ReDeployLhDagVersionRequest &request);

      /**
       * @summary Reruns a task flow instance.
       *
       * @param request ReRunTaskFlowInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReRunTaskFlowInstanceResponse
       */
      Models::ReRunTaskFlowInstanceResponse reRunTaskFlowInstanceWithOptions(const Models::ReRunTaskFlowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reruns a task flow instance.
       *
       * @param request ReRunTaskFlowInstanceRequest
       * @return ReRunTaskFlowInstanceResponse
       */
      Models::ReRunTaskFlowInstanceResponse reRunTaskFlowInstance(const Models::ReRunTaskFlowInstanceRequest &request);

      /**
       * @summary 用于重新部署DIFY实例。
       *
       * @description ## 请求说明
       * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
       * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
       * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
       * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
       * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
       * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
       * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
       *
       * @param request RedeployDifyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedeployDifyInstanceResponse
       */
      Models::RedeployDifyInstanceResponse redeployDifyInstanceWithOptions(const Models::RedeployDifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于重新部署DIFY实例。
       *
       * @description ## 请求说明
       * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
       * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
       * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
       * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
       * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
       * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
       * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
       *
       * @param request RedeployDifyInstanceRequest
       * @return RedeployDifyInstanceResponse
       */
      Models::RedeployDifyInstanceResponse redeployDifyInstance(const Models::RedeployDifyInstanceRequest &request);

      /**
       * @summary Unsubscribes from a pay-as-you-go Data Management (DMS) resource.
       *
       * @param request RefundPayAsYouGoOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefundPayAsYouGoOrderResponse
       */
      Models::RefundPayAsYouGoOrderResponse refundPayAsYouGoOrderWithOptions(const Models::RefundPayAsYouGoOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unsubscribes from a pay-as-you-go Data Management (DMS) resource.
       *
       * @param request RefundPayAsYouGoOrderRequest
       * @return RefundPayAsYouGoOrderResponse
       */
      Models::RefundPayAsYouGoOrderResponse refundPayAsYouGoOrder(const Models::RefundPayAsYouGoOrderRequest &request);

      /**
       * @summary Registers a database instance in Data Management (DMS).
       *
       * @description Prerequisites: You are a DMS administrator or a database administrator (DBA). You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetUser](https://help.aliyun.com/document_detail/147098.html) operation to query your user role from the RoleIdList parameter that is returned.
       *
       * @param request RegisterInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterInstanceResponse
       */
      Models::RegisterInstanceResponse registerInstanceWithOptions(const Models::RegisterInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a database instance in Data Management (DMS).
       *
       * @description Prerequisites: You are a DMS administrator or a database administrator (DBA). You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetUser](https://help.aliyun.com/document_detail/147098.html) operation to query your user role from the RoleIdList parameter that is returned.
       *
       * @param request RegisterInstanceRequest
       * @return RegisterInstanceResponse
       */
      Models::RegisterInstanceResponse registerInstance(const Models::RegisterInstanceRequest &request);

      /**
       * @summary Registers a user for your enterprise.
       *
       * @description If you are an **administrator** in Data Management (DMS), you can call this operation to register a user for your enterprise. To view users that are assigned the administrator role, perform the following steps: Log on to the DMS console. In the top navigation bar, click O&M. In the left-side navigation pane, click User.
       *
       * @param request RegisterUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterUserResponse
       */
      Models::RegisterUserResponse registerUserWithOptions(const Models::RegisterUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a user for your enterprise.
       *
       * @description If you are an **administrator** in Data Management (DMS), you can call this operation to register a user for your enterprise. To view users that are assigned the administrator role, perform the following steps: Log on to the DMS console. In the top navigation bar, click O&M. In the left-side navigation pane, click User.
       *
       * @param request RegisterUserRequest
       * @return RegisterUserResponse
       */
      Models::RegisterUserResponse registerUser(const Models::RegisterUserRequest &request);

      /**
       * @summary Deletes a data export task.
       *
       * @param request RemoveDataExportJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDataExportJobResponse
       */
      Models::RemoveDataExportJobResponse removeDataExportJobWithOptions(const Models::RemoveDataExportJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data export task.
       *
       * @param request RemoveDataExportJobRequest
       * @return RemoveDataExportJobResponse
       */
      Models::RemoveDataExportJobResponse removeDataExportJob(const Models::RemoveDataExportJobRequest &request);

      /**
       * @summary Removes table from the asset category.
       *
       * @param request RemoveTableFromCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTableFromCategoryResponse
       */
      Models::RemoveTableFromCategoryResponse removeTableFromCategoryWithOptions(const Models::RemoveTableFromCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes table from the asset category.
       *
       * @param request RemoveTableFromCategoryRequest
       * @return RemoveTableFromCategoryResponse
       */
      Models::RemoveTableFromCategoryResponse removeTableFromCategory(const Models::RemoveTableFromCategoryRequest &request);

      /**
       * @summary Reruns a failed SQL task for data change.
       *
       * @param request RestartDataCorrectSQLJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDataCorrectSQLJobResponse
       */
      Models::RestartDataCorrectSQLJobResponse restartDataCorrectSQLJobWithOptions(const Models::RestartDataCorrectSQLJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reruns a failed SQL task for data change.
       *
       * @param request RestartDataCorrectSQLJobRequest
       * @return RestartDataCorrectSQLJobResponse
       */
      Models::RestartDataCorrectSQLJobResponse restartDataCorrectSQLJob(const Models::RestartDataCorrectSQLJobRequest &request);

      /**
       * @summary Restarts a SQL result set export task.
       *
       * @param request RestartDataExportJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDataExportJobResponse
       */
      Models::RestartDataExportJobResponse restartDataExportJobWithOptions(const Models::RestartDataExportJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a SQL result set export task.
       *
       * @param request RestartDataExportJobRequest
       * @return RestartDataExportJobResponse
       */
      Models::RestartDataExportJobResponse restartDataExportJob(const Models::RestartDataExportJobRequest &request);

      /**
       * @summary Resumes a suspended task flow.
       *
       * @description You can call this operation only for task flows that are suspended.
       *
       * @param request ResumeTaskFlowInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeTaskFlowInstanceResponse
       */
      Models::ResumeTaskFlowInstanceResponse resumeTaskFlowInstanceWithOptions(const Models::ResumeTaskFlowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a suspended task flow.
       *
       * @description You can call this operation only for task flows that are suspended.
       *
       * @param request ResumeTaskFlowInstanceRequest
       * @return ResumeTaskFlowInstanceResponse
       */
      Models::ResumeTaskFlowInstanceResponse resumeTaskFlowInstance(const Models::ResumeTaskFlowInstanceRequest &request);

      /**
       * @summary Reruns the precheck for a data change ticket.
       *
       * @param request RetryDataCorrectPreCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryDataCorrectPreCheckResponse
       */
      Models::RetryDataCorrectPreCheckResponse retryDataCorrectPreCheckWithOptions(const Models::RetryDataCorrectPreCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reruns the precheck for a data change ticket.
       *
       * @param request RetryDataCorrectPreCheckRequest
       * @return RetryDataCorrectPreCheckResponse
       */
      Models::RetryDataCorrectPreCheckResponse retryDataCorrectPreCheck(const Models::RetryDataCorrectPreCheckRequest &request);

      /**
       * @summary Revokes permissions on resources from Data Management (DMS) users by using a permission template.
       *
       * @description You must be a database administrator (DBA) or a DMS administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
       *
       * @param request RevokeTemplateAuthorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeTemplateAuthorityResponse
       */
      Models::RevokeTemplateAuthorityResponse revokeTemplateAuthorityWithOptions(const Models::RevokeTemplateAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes permissions on resources from Data Management (DMS) users by using a permission template.
       *
       * @description You must be a database administrator (DBA) or a DMS administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
       *
       * @param request RevokeTemplateAuthorityRequest
       * @return RevokeTemplateAuthorityResponse
       */
      Models::RevokeTemplateAuthorityResponse revokeTemplateAuthority(const Models::RevokeTemplateAuthorityRequest &request);

      /**
       * @summary Revokes the permissions on instances, databases, and tables from a user.
       *
       * @param request RevokeUserPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeUserPermissionResponse
       */
      Models::RevokeUserPermissionResponse revokeUserPermissionWithOptions(const Models::RevokeUserPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions on instances, databases, and tables from a user.
       *
       * @param request RevokeUserPermissionRequest
       * @return RevokeUserPermissionResponse
       */
      Models::RevokeUserPermissionResponse revokeUserPermission(const Models::RevokeUserPermissionRequest &request);

      /**
       * @summary Searches for the parsing result of a data tracking task.
       *
       * @param tmpReq SearchDataTrackResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchDataTrackResultResponse
       */
      Models::SearchDataTrackResultResponse searchDataTrackResultWithOptions(const Models::SearchDataTrackResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for the parsing result of a data tracking task.
       *
       * @param request SearchDataTrackResultRequest
       * @return SearchDataTrackResultResponse
       */
      Models::SearchDataTrackResultResponse searchDataTrackResult(const Models::SearchDataTrackResultRequest &request);

      /**
       * @summary Queries the details of the databases.
       *
       * @param request SearchDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchDatabaseResponse
       */
      Models::SearchDatabaseResponse searchDatabaseWithOptions(const Models::SearchDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the databases.
       *
       * @param request SearchDatabaseRequest
       * @return SearchDatabaseResponse
       */
      Models::SearchDatabaseResponse searchDatabase(const Models::SearchDatabaseRequest &request);

      /**
       * @summary Queries detailed information about tables.
       *
       * @description You can call this operation only for database instances that are managed in Security Collaboration mode.
       *
       * @param request SearchTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchTableResponse
       */
      Models::SearchTableResponse searchTableWithOptions(const Models::SearchTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries detailed information about tables.
       *
       * @description You can call this operation only for database instances that are managed in Security Collaboration mode.
       *
       * @param request SearchTableRequest
       * @return SearchTableResponse
       */
      Models::SearchTableResponse searchTable(const Models::SearchTableRequest &request);

      /**
       * @summary Configures the owner of an instance, a database, or a table.
       *
       * @param request SetOwnersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetOwnersResponse
       */
      Models::SetOwnersResponse setOwnersWithOptions(const Models::SetOwnersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the owner of an instance, a database, or a table.
       *
       * @param request SetOwnersRequest
       * @return SetOwnersResponse
       */
      Models::SetOwnersResponse setOwners(const Models::SetOwnersRequest &request);

      /**
       * @summary Configures whether the operation buttons, such as Agree, Revoke, and Sign, are displayed in the ticket approval section of the DMS console.
       *
       * @param request SetWorkflowExtraInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetWorkflowExtraInfoResponse
       */
      Models::SetWorkflowExtraInfoResponse setWorkflowExtraInfoWithOptions(const Models::SetWorkflowExtraInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures whether the operation buttons, such as Agree, Revoke, and Sign, are displayed in the ticket approval section of the DMS console.
       *
       * @param request SetWorkflowExtraInfoRequest
       * @return SetWorkflowExtraInfoResponse
       */
      Models::SetWorkflowExtraInfoResponse setWorkflowExtraInfo(const Models::SetWorkflowExtraInfoRequest &request);

      /**
       * @summary 添加实例
       *
       * @param request SimplyAddInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SimplyAddInstanceResponse
       */
      Models::SimplyAddInstanceResponse simplyAddInstanceWithOptions(const Models::SimplyAddInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加实例
       *
       * @param request SimplyAddInstanceRequest
       * @return SimplyAddInstanceResponse
       */
      Models::SimplyAddInstanceResponse simplyAddInstance(const Models::SimplyAddInstanceRequest &request);

      /**
       * @summary Skips the verification on the number of rows in the precheck for data change.
       *
       * @param request SkipDataCorrectRowCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SkipDataCorrectRowCheckResponse
       */
      Models::SkipDataCorrectRowCheckResponse skipDataCorrectRowCheckWithOptions(const Models::SkipDataCorrectRowCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Skips the verification on the number of rows in the precheck for data change.
       *
       * @param request SkipDataCorrectRowCheckRequest
       * @return SkipDataCorrectRowCheckResponse
       */
      Models::SkipDataCorrectRowCheckResponse skipDataCorrectRowCheck(const Models::SkipDataCorrectRowCheckRequest &request);

      /**
       * @summary Stops a task flow instance.
       *
       * @param request StopTaskFlowInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTaskFlowInstanceResponse
       */
      Models::StopTaskFlowInstanceResponse stopTaskFlowInstanceWithOptions(const Models::StopTaskFlowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a task flow instance.
       *
       * @param request StopTaskFlowInstanceRequest
       * @return StopTaskFlowInstanceResponse
       */
      Models::StopTaskFlowInstanceResponse stopTaskFlowInstance(const Models::StopTaskFlowInstanceRequest &request);

      /**
       * @summary Submits a ticket for approval.
       *
       * @param request SubmitOrderApprovalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitOrderApprovalResponse
       */
      Models::SubmitOrderApprovalResponse submitOrderApprovalWithOptions(const Models::SubmitOrderApprovalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a ticket for approval.
       *
       * @param request SubmitOrderApprovalRequest
       * @return SubmitOrderApprovalResponse
       */
      Models::SubmitOrderApprovalResponse submitOrderApproval(const Models::SubmitOrderApprovalRequest &request);

      /**
       * @summary Submits a schema synchronization ticket for approval.
       *
       * @param request SubmitStructSyncOrderApprovalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitStructSyncOrderApprovalResponse
       */
      Models::SubmitStructSyncOrderApprovalResponse submitStructSyncOrderApprovalWithOptions(const Models::SubmitStructSyncOrderApprovalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a schema synchronization ticket for approval.
       *
       * @param request SubmitStructSyncOrderApprovalRequest
       * @return SubmitStructSyncOrderApprovalResponse
       */
      Models::SubmitStructSyncOrderApprovalResponse submitStructSyncOrderApproval(const Models::SubmitStructSyncOrderApprovalRequest &request);

      /**
       * @summary Suspends an ongoing or scheduled SQL result set export task.
       *
       * @param request SuspendDataExportJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendDataExportJobResponse
       */
      Models::SuspendDataExportJobResponse suspendDataExportJobWithOptions(const Models::SuspendDataExportJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends an ongoing or scheduled SQL result set export task.
       *
       * @param request SuspendDataExportJobRequest
       * @return SuspendDataExportJobResponse
       */
      Models::SuspendDataExportJobResponse suspendDataExportJob(const Models::SuspendDataExportJobRequest &request);

      /**
       * @summary Suspends a task flow instance.
       *
       * @param request SuspendTaskFlowInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendTaskFlowInstanceResponse
       */
      Models::SuspendTaskFlowInstanceResponse suspendTaskFlowInstanceWithOptions(const Models::SuspendTaskFlowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends a task flow instance.
       *
       * @param request SuspendTaskFlowInstanceRequest
       * @return SuspendTaskFlowInstanceResponse
       */
      Models::SuspendTaskFlowInstanceResponse suspendTaskFlowInstance(const Models::SuspendTaskFlowInstanceRequest &request);

      /**
       * @summary Synchronizes the metadata of a database.
       *
       * @param request SyncDatabaseMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncDatabaseMetaResponse
       */
      Models::SyncDatabaseMetaResponse syncDatabaseMetaWithOptions(const Models::SyncDatabaseMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes the metadata of a database.
       *
       * @param request SyncDatabaseMetaRequest
       * @return SyncDatabaseMetaResponse
       */
      Models::SyncDatabaseMetaResponse syncDatabaseMeta(const Models::SyncDatabaseMetaRequest &request);

      /**
       * @summary Synchronizes the metadata of all databases in a database instance.
       *
       * @description You can call this operation only for database instances whose control mode is Security Collaboration.
       *
       * @param request SyncInstanceMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncInstanceMetaResponse
       */
      Models::SyncInstanceMetaResponse syncInstanceMetaWithOptions(const Models::SyncInstanceMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes the metadata of all databases in a database instance.
       *
       * @description You can call this operation only for database instances whose control mode is Security Collaboration.
       *
       * @param request SyncInstanceMetaRequest
       * @return SyncInstanceMetaResponse
       */
      Models::SyncInstanceMetaResponse syncInstanceMeta(const Models::SyncInstanceMetaRequest &request);

      /**
       * @summary Tests the task flow of task orchestration.
       *
       * @description ### [](#)Usage notes
       * An edge can be created only when the following conditions are met:
       * 1.  The start and end nodes of the edge exist in the directed acyclic graph (DAG) of the task flow specified by DagId.
       * 2.  After the edge is created, the DAG does not contain loops.
       *
       * @param request TryRunTaskFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TryRunTaskFlowResponse
       */
      Models::TryRunTaskFlowResponse tryRunTaskFlowWithOptions(const Models::TryRunTaskFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tests the task flow of task orchestration.
       *
       * @description ### [](#)Usage notes
       * An edge can be created only when the following conditions are met:
       * 1.  The start and end nodes of the edge exist in the directed acyclic graph (DAG) of the task flow specified by DagId.
       * 2.  After the edge is created, the DAG does not contain loops.
       *
       * @param request TryRunTaskFlowRequest
       * @return TryRunTaskFlowResponse
       */
      Models::TryRunTaskFlowResponse tryRunTaskFlow(const Models::TryRunTaskFlowRequest &request);

      /**
       * @summary Updates the name, description, or content of a policy.
       *
       * @param request UpdateAbacPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAbacPolicyResponse
       */
      Models::UpdateAbacPolicyResponse updateAbacPolicyWithOptions(const Models::UpdateAbacPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name, description, or content of a policy.
       *
       * @param request UpdateAbacPolicyRequest
       * @return UpdateAbacPolicyResponse
       */
      Models::UpdateAbacPolicyResponse updateAbacPolicy(const Models::UpdateAbacPolicyRequest &request);

      /**
       * @summary Modifies a permission template.
       *
       * @description You are a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
       *
       * @param request UpdateAuthorityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthorityTemplateResponse
       */
      Models::UpdateAuthorityTemplateResponse updateAuthorityTemplateWithOptions(const Models::UpdateAuthorityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a permission template.
       *
       * @description You are a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
       *
       * @param request UpdateAuthorityTemplateRequest
       * @return UpdateAuthorityTemplateResponse
       */
      Models::UpdateAuthorityTemplateResponse updateAuthorityTemplate(const Models::UpdateAuthorityTemplateRequest &request);

      /**
       * @summary Updates the information about a database in a data lakehouse.
       *
       * @param tmpReq UpdateDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakeDatabaseResponse
       */
      Models::UpdateDataLakeDatabaseResponse updateDataLakeDatabaseWithOptions(const Models::UpdateDataLakeDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a database in a data lakehouse.
       *
       * @param request UpdateDataLakeDatabaseRequest
       * @return UpdateDataLakeDatabaseResponse
       */
      Models::UpdateDataLakeDatabaseResponse updateDataLakeDatabase(const Models::UpdateDataLakeDatabaseRequest &request);

      /**
       * @summary Updates a user-defined function in a data lakehouse.
       *
       * @param tmpReq UpdateDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakeFunctionResponse
       */
      Models::UpdateDataLakeFunctionResponse updateDataLakeFunctionWithOptions(const Models::UpdateDataLakeFunctionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a user-defined function in a data lakehouse.
       *
       * @param request UpdateDataLakeFunctionRequest
       * @return UpdateDataLakeFunctionResponse
       */
      Models::UpdateDataLakeFunctionResponse updateDataLakeFunction(const Models::UpdateDataLakeFunctionRequest &request);

      /**
       * @summary Updates the partition information of a table in a data lakehouse.
       *
       * @param tmpReq UpdateDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakePartitionResponse
       */
      Models::UpdateDataLakePartitionResponse updateDataLakePartitionWithOptions(const Models::UpdateDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the partition information of a table in a data lakehouse.
       *
       * @param request UpdateDataLakePartitionRequest
       * @return UpdateDataLakePartitionResponse
       */
      Models::UpdateDataLakePartitionResponse updateDataLakePartition(const Models::UpdateDataLakePartitionRequest &request);

      /**
       * @summary Updates the information about a table in a data lakehouse.
       *
       * @param tmpReq UpdateDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakeTableResponse
       */
      Models::UpdateDataLakeTableResponse updateDataLakeTableWithOptions(const Models::UpdateDataLakeTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a table in a data lakehouse.
       *
       * @param request UpdateDataLakeTableRequest
       * @return UpdateDataLakeTableResponse
       */
      Models::UpdateDataLakeTableResponse updateDataLakeTable(const Models::UpdateDataLakeTableRequest &request);

      /**
       * @summary Updates the information about a database instance and checks the connectivity of the database instance.
       *
       * @description Before you call the UpdateInstance operation, call the [GetInstance](https://help.aliyun.com/document_detail/141567.html) or [ListInstances](https://help.aliyun.com/document_detail/141936.html) operation to obtain the complete information about the instance.
       *
       * @param request UpdateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a database instance and checks the connectivity of the database instance.
       *
       * @description Before you call the UpdateInstance operation, call the [GetInstance](https://help.aliyun.com/document_detail/141567.html) or [ListInstances](https://help.aliyun.com/document_detail/141936.html) operation to obtain the complete information about the instance.
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const Models::UpdateInstanceRequest &request);

      /**
       * @summary Updates asset category information.
       *
       * @param tmpReq UpdateMetaCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMetaCategoryResponse
       */
      Models::UpdateMetaCategoryResponse updateMetaCategoryWithOptions(const Models::UpdateMetaCategoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates asset category information.
       *
       * @param request UpdateMetaCategoryRequest
       * @return UpdateMetaCategoryResponse
       */
      Models::UpdateMetaCategoryResponse updateMetaCategory(const Models::UpdateMetaCategoryRequest &request);

      /**
       * @summary Updates the service level agreement (SLA) timeout reminder for a task flow.
       *
       * @description SLA rules take effect after task flows are deployed and published.
       *
       * @param tmpReq UpdateSLARulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSLARulesResponse
       */
      Models::UpdateSLARulesResponse updateSLARulesWithOptions(const Models::UpdateSLARulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the service level agreement (SLA) timeout reminder for a task flow.
       *
       * @description SLA rules take effect after task flows are deployed and published.
       *
       * @param request UpdateSLARulesRequest
       * @return UpdateSLARulesResponse
       */
      Models::UpdateSLARulesResponse updateSLARules(const Models::UpdateSLARulesRequest &request);

      /**
       * @summary Updates the name and description of the business scenario for a specified task flow.
       *
       * @param request UpdateScenarioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScenarioResponse
       */
      Models::UpdateScenarioResponse updateScenarioWithOptions(const Models::UpdateScenarioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name and description of the business scenario for a specified task flow.
       *
       * @param request UpdateScenarioRequest
       * @return UpdateScenarioResponse
       */
      Models::UpdateScenarioResponse updateScenario(const Models::UpdateScenarioRequest &request);

      /**
       * @summary Modifies the name and description of a specific security rule set.
       *
       * @param request UpdateStandardGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStandardGroupResponse
       */
      Models::UpdateStandardGroupResponse updateStandardGroupWithOptions(const Models::UpdateStandardGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a specific security rule set.
       *
       * @param request UpdateStandardGroupRequest
       * @return UpdateStandardGroupResponse
       */
      Models::UpdateStandardGroupResponse updateStandardGroup(const Models::UpdateStandardGroupRequest &request);

      /**
       * @summary Updates the advanced configuration of a task node.
       *
       * @description You can call this operation to configure a failed task or rerun a task.
       *
       * @param request UpdateTaskConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskConfigResponse
       */
      Models::UpdateTaskConfigResponse updateTaskConfigWithOptions(const Models::UpdateTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the advanced configuration of a task node.
       *
       * @description You can call this operation to configure a failed task or rerun a task.
       *
       * @param request UpdateTaskConfigRequest
       * @return UpdateTaskConfigResponse
       */
      Models::UpdateTaskConfigResponse updateTaskConfig(const Models::UpdateTaskConfigRequest &request);

      /**
       * @summary Updates tasks in a task flow.
       *
       * @description You can call this operation to modify node configurations.
       *
       * @param request UpdateTaskContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskContentResponse
       */
      Models::UpdateTaskContentResponse updateTaskContentWithOptions(const Models::UpdateTaskContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates tasks in a task flow.
       *
       * @description You can call this operation to modify node configurations.
       *
       * @param request UpdateTaskContentRequest
       * @return UpdateTaskContentResponse
       */
      Models::UpdateTaskContentResponse updateTaskContent(const Models::UpdateTaskContentRequest &request);

      /**
       * @summary Updates the node content in large SQL files.
       *
       * @description You can call this operation to modify node configurations.
       *
       * @param request UpdateTaskContentV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskContentV2Response
       */
      Models::UpdateTaskContentV2Response updateTaskContentV2WithOptions(const Models::UpdateTaskContentV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the node content in large SQL files.
       *
       * @description You can call this operation to modify node configurations.
       *
       * @param request UpdateTaskContentV2Request
       * @return UpdateTaskContentV2Response
       */
      Models::UpdateTaskContentV2Response updateTaskContentV2(const Models::UpdateTaskContentV2Request &request);

      /**
       * @summary Updates the constants for a specified task flow.
       *
       * @param tmpReq UpdateTaskFlowConstantsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskFlowConstantsResponse
       */
      Models::UpdateTaskFlowConstantsResponse updateTaskFlowConstantsWithOptions(const Models::UpdateTaskFlowConstantsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the constants for a specified task flow.
       *
       * @param request UpdateTaskFlowConstantsRequest
       * @return UpdateTaskFlowConstantsResponse
       */
      Models::UpdateTaskFlowConstantsResponse updateTaskFlowConstants(const Models::UpdateTaskFlowConstantsRequest &request);

      /**
       * @summary Updates the IDs of the users who are involved in the task flow.
       *
       * @param tmpReq UpdateTaskFlowCooperatorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskFlowCooperatorsResponse
       */
      Models::UpdateTaskFlowCooperatorsResponse updateTaskFlowCooperatorsWithOptions(const Models::UpdateTaskFlowCooperatorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the IDs of the users who are involved in the task flow.
       *
       * @param request UpdateTaskFlowCooperatorsRequest
       * @return UpdateTaskFlowCooperatorsResponse
       */
      Models::UpdateTaskFlowCooperatorsResponse updateTaskFlowCooperators(const Models::UpdateTaskFlowCooperatorsRequest &request);

      /**
       * @summary Updates the start node and end node of multiple edges at a time for a task flow.
       *
       * @description ###
       * The edges can be updated only when the following conditions are met:
       * 1.  The specified edge exists in the directed acyclic graph (DAG) of the task flow specified by DagId.
       * 2.  The specified edge nodes exist in the DAG of the task flow specified by DagId.
       * 3.  After the update, rings do not exist in the DAG.
       *
       * @param tmpReq UpdateTaskFlowEdgesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskFlowEdgesResponse
       */
      Models::UpdateTaskFlowEdgesResponse updateTaskFlowEdgesWithOptions(const Models::UpdateTaskFlowEdgesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the start node and end node of multiple edges at a time for a task flow.
       *
       * @description ###
       * The edges can be updated only when the following conditions are met:
       * 1.  The specified edge exists in the directed acyclic graph (DAG) of the task flow specified by DagId.
       * 2.  The specified edge nodes exist in the DAG of the task flow specified by DagId.
       * 3.  After the update, rings do not exist in the DAG.
       *
       * @param request UpdateTaskFlowEdgesRequest
       * @return UpdateTaskFlowEdgesResponse
       */
      Models::UpdateTaskFlowEdgesResponse updateTaskFlowEdges(const Models::UpdateTaskFlowEdgesRequest &request);

      /**
       * @summary Updates the name and description of a task flow.
       *
       * @param request UpdateTaskFlowNameAndDescRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskFlowNameAndDescResponse
       */
      Models::UpdateTaskFlowNameAndDescResponse updateTaskFlowNameAndDescWithOptions(const Models::UpdateTaskFlowNameAndDescRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name and description of a task flow.
       *
       * @param request UpdateTaskFlowNameAndDescRequest
       * @return UpdateTaskFlowNameAndDescResponse
       */
      Models::UpdateTaskFlowNameAndDescResponse updateTaskFlowNameAndDesc(const Models::UpdateTaskFlowNameAndDescRequest &request);

      /**
       * @summary Updates the notification settings for task flows.
       *
       * @param request UpdateTaskFlowNotificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskFlowNotificationResponse
       */
      Models::UpdateTaskFlowNotificationResponse updateTaskFlowNotificationWithOptions(const Models::UpdateTaskFlowNotificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the notification settings for task flows.
       *
       * @param request UpdateTaskFlowNotificationRequest
       * @return UpdateTaskFlowNotificationResponse
       */
      Models::UpdateTaskFlowNotificationResponse updateTaskFlowNotification(const Models::UpdateTaskFlowNotificationRequest &request);

      /**
       * @summary Changes the owner of a task flow.
       *
       * @description Note: The new owner of the task flow must belong to the same tenant as the previous owner.
       *
       * @param request UpdateTaskFlowOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskFlowOwnerResponse
       */
      Models::UpdateTaskFlowOwnerResponse updateTaskFlowOwnerWithOptions(const Models::UpdateTaskFlowOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the owner of a task flow.
       *
       * @description Note: The new owner of the task flow must belong to the same tenant as the previous owner.
       *
       * @param request UpdateTaskFlowOwnerRequest
       * @return UpdateTaskFlowOwnerResponse
       */
      Models::UpdateTaskFlowOwnerResponse updateTaskFlowOwner(const Models::UpdateTaskFlowOwnerRequest &request);

      /**
       * @summary Fully updates the edges of a task flow.
       *
       * @description You can call this operation to perform a full update. For incremental updates, see AddTaskFlowEdges, UpdateTaskFlowEdges, and DeleteTaskFlowEdgesByMultiCondition.
       *
       * @param tmpReq UpdateTaskFlowRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskFlowRelationsResponse
       */
      Models::UpdateTaskFlowRelationsResponse updateTaskFlowRelationsWithOptions(const Models::UpdateTaskFlowRelationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Fully updates the edges of a task flow.
       *
       * @description You can call this operation to perform a full update. For incremental updates, see AddTaskFlowEdges, UpdateTaskFlowEdges, and DeleteTaskFlowEdgesByMultiCondition.
       *
       * @param request UpdateTaskFlowRelationsRequest
       * @return UpdateTaskFlowRelationsResponse
       */
      Models::UpdateTaskFlowRelationsResponse updateTaskFlowRelations(const Models::UpdateTaskFlowRelationsRequest &request);

      /**
       * @summary Updates the scheduling properties for a task flow.
       *
       * @description You can call this operation to update the scheduling properties for a task flow in the editing state. You can configure a **timed scheduling** task flow or an **event scheduling** task flow. When you configure a **timed scheduling** task flow, you can choose from one-time scheduling or periodic scheduling. When you configure an **event scheduling** task flow, you can subscribe to task flows or task flow nodes.****\\
       * After you update the scheduling properties, you need to publish and deploy the task flow again. The new task flow instance will run based on the updated scheduling properties.
       *
       * @param request UpdateTaskFlowScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskFlowScheduleResponse
       */
      Models::UpdateTaskFlowScheduleResponse updateTaskFlowScheduleWithOptions(const Models::UpdateTaskFlowScheduleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the scheduling properties for a task flow.
       *
       * @description You can call this operation to update the scheduling properties for a task flow in the editing state. You can configure a **timed scheduling** task flow or an **event scheduling** task flow. When you configure a **timed scheduling** task flow, you can choose from one-time scheduling or periodic scheduling. When you configure an **event scheduling** task flow, you can subscribe to task flows or task flow nodes.****\\
       * After you update the scheduling properties, you need to publish and deploy the task flow again. The new task flow instance will run based on the updated scheduling properties.
       *
       * @param request UpdateTaskFlowScheduleRequest
       * @return UpdateTaskFlowScheduleResponse
       */
      Models::UpdateTaskFlowScheduleResponse updateTaskFlowSchedule(const Models::UpdateTaskFlowScheduleRequest &request);

      /**
       * @summary Updates the time variables for a task flow.
       *
       * @param request UpdateTaskFlowTimeVariablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskFlowTimeVariablesResponse
       */
      Models::UpdateTaskFlowTimeVariablesResponse updateTaskFlowTimeVariablesWithOptions(const Models::UpdateTaskFlowTimeVariablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the time variables for a task flow.
       *
       * @param request UpdateTaskFlowTimeVariablesRequest
       * @return UpdateTaskFlowTimeVariablesResponse
       */
      Models::UpdateTaskFlowTimeVariablesResponse updateTaskFlowTimeVariables(const Models::UpdateTaskFlowTimeVariablesRequest &request);

      /**
       * @summary Updates the name of a specified task.
       *
       * @param request UpdateTaskNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskNameResponse
       */
      Models::UpdateTaskNameResponse updateTaskNameWithOptions(const Models::UpdateTaskNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name of a specified task.
       *
       * @param request UpdateTaskNameRequest
       * @return UpdateTaskNameResponse
       */
      Models::UpdateTaskNameResponse updateTaskName(const Models::UpdateTaskNameRequest &request);

      /**
       * @summary Updates the output variables for a specified task node.
       *
       * @description Only nodes of single-instance SQL assignment, script code, and ECS remote command have output variables.
       *
       * @param request UpdateTaskOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskOutputResponse
       */
      Models::UpdateTaskOutputResponse updateTaskOutputWithOptions(const Models::UpdateTaskOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the output variables for a specified task node.
       *
       * @description Only nodes of single-instance SQL assignment, script code, and ECS remote command have output variables.
       *
       * @param request UpdateTaskOutputRequest
       * @return UpdateTaskOutputResponse
       */
      Models::UpdateTaskOutputResponse updateTaskOutput(const Models::UpdateTaskOutputRequest &request);

      /**
       * @summary Updates time variables for a task.
       *
       * @param request UpdateTaskTimeVariablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskTimeVariablesResponse
       */
      Models::UpdateTaskTimeVariablesResponse updateTaskTimeVariablesWithOptions(const Models::UpdateTaskTimeVariablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates time variables for a task.
       *
       * @param request UpdateTaskTimeVariablesRequest
       * @return UpdateTaskTimeVariablesResponse
       */
      Models::UpdateTaskTimeVariablesResponse updateTaskTimeVariables(const Models::UpdateTaskTimeVariablesRequest &request);

      /**
       * @summary Updates user information.
       *
       * @param request UpdateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates user information.
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);

      /**
       * @summary Updates the information about a workspace.
       *
       * @param request UpdateWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspaceWithOptions(const Models::UpdateWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a workspace.
       *
       * @param request UpdateWorkspaceRequest
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspace(const Models::UpdateWorkspaceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
