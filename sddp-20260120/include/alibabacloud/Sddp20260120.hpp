// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SDDP20260120_HPP_
#define ALIBABACLOUD_SDDP20260120_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Sddp20260120Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Sddp20260120.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Checks the prerequisites for column encryption on an instance.
       *
       * @description Checks the permissions, DPI engine, and running conditions of an instance before you create column encryption. You must check both ErrorCode and ErrorMessage in the response. Only ErrorCode=Success indicates that the check is passed. A successful request does not mean that the instance meets all encryption conditions. This check does not create a column encryption rule.
       * Parameter examples are for format illustration only. When you invoke the operation, replace them with the region, resource identity, and configuration values obtained from the current account.
       * Use the service registration endpoint of the region where the target asset is located and configure the Settings for the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       *
       * @param request CheckDataMaskingInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDataMaskingInstanceResponse
       */
      Models::CheckDataMaskingInstanceResponse checkDataMaskingInstanceWithOptions(const Models::CheckDataMaskingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the prerequisites for column encryption on an instance.
       *
       * @description Checks the permissions, DPI engine, and running conditions of an instance before you create column encryption. You must check both ErrorCode and ErrorMessage in the response. Only ErrorCode=Success indicates that the check is passed. A successful request does not mean that the instance meets all encryption conditions. This check does not create a column encryption rule.
       * Parameter examples are for format illustration only. When you invoke the operation, replace them with the region, resource identity, and configuration values obtained from the current account.
       * Use the service registration endpoint of the region where the target asset is located and configure the Settings for the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       *
       * @param request CheckDataMaskingInstanceRequest
       * @return CheckDataMaskingInstanceResponse
       */
      Models::CheckDataMaskingInstanceResponse checkDataMaskingInstance(const Models::CheckDataMaskingInstanceRequest &request);

      /**
       * @summary Creates a column encryption rule.
       *
       * @description Creates a column encryption rule for specified databases, tables, and columns under the same instance. Before calling this operation, check the instance status, supported algorithms, keys, target columns, and accounts. SubRuleList is a list of targets grouped by table, and Columns is a string of column names separated by commas. Accounts in UserList are granted the fullAccess plaintext permission. A successful request only indicates that the request is accepted. You must call the ListDataMaskingColumns and ListDataAssetAccounts operations to confirm the column status, account permissions, and validity period.
       * The parameter examples are for illustrative purposes only. When calling this operation, replace them with the region, resource identifiers, and configuration values obtained by querying the current account.
       * Use the endpoint of the region where the target asset is located, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance identity must match those of the target asset.
       * This operation only returns RequestId. Request acceptance does not mean that the business operation is complete. Read back the status as described in the operation description.
       *
       * @param tmpReq CreateDataMaskingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataMaskingRuleResponse
       */
      Models::CreateDataMaskingRuleResponse createDataMaskingRuleWithOptions(const Models::CreateDataMaskingRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a column encryption rule.
       *
       * @description Creates a column encryption rule for specified databases, tables, and columns under the same instance. Before calling this operation, check the instance status, supported algorithms, keys, target columns, and accounts. SubRuleList is a list of targets grouped by table, and Columns is a string of column names separated by commas. Accounts in UserList are granted the fullAccess plaintext permission. A successful request only indicates that the request is accepted. You must call the ListDataMaskingColumns and ListDataAssetAccounts operations to confirm the column status, account permissions, and validity period.
       * The parameter examples are for illustrative purposes only. When calling this operation, replace them with the region, resource identifiers, and configuration values obtained by querying the current account.
       * Use the endpoint of the region where the target asset is located, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance identity must match those of the target asset.
       * This operation only returns RequestId. Request acceptance does not mean that the business operation is complete. Read back the status as described in the operation description.
       *
       * @param request CreateDataMaskingRuleRequest
       * @return CreateDataMaskingRuleResponse
       */
      Models::CreateDataMaskingRuleResponse createDataMaskingRule(const Models::CreateDataMaskingRuleRequest &request);

      /**
       * @summary Disables encryption for specified columns.
       *
       * @description Disables encryption rules for specified columns in the same instance. SubRuleList precisely specifies databases, tables, and columns. If no rule is matched, no new operation object is created. The disable request is processed asynchronously. Use ListDataMaskingColumns to verify that the column is restored to NotEncrypted or that the target rule has been removed. DeleteFailed indicates that the disable operation failed.
       * The parameter examples are for format illustration only. When you invoke the API, replace them with the region, resource identifier, and configuration values obtained for the current account.
       * Use the endpoint of the region where the target asset is located, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance identifier must match the target asset.
       * This operation returns only RequestId. Request acceptance does not mean that the business operation is complete. You should check the status as described in the operation description.
       *
       * @param tmpReq DeleteDataMaskingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataMaskingRuleResponse
       */
      Models::DeleteDataMaskingRuleResponse deleteDataMaskingRuleWithOptions(const Models::DeleteDataMaskingRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables encryption for specified columns.
       *
       * @description Disables encryption rules for specified columns in the same instance. SubRuleList precisely specifies databases, tables, and columns. If no rule is matched, no new operation object is created. The disable request is processed asynchronously. Use ListDataMaskingColumns to verify that the column is restored to NotEncrypted or that the target rule has been removed. DeleteFailed indicates that the disable operation failed.
       * The parameter examples are for format illustration only. When you invoke the API, replace them with the region, resource identifier, and configuration values obtained for the current account.
       * Use the endpoint of the region where the target asset is located, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance identifier must match the target asset.
       * This operation returns only RequestId. Request acceptance does not mean that the business operation is complete. You should check the status as described in the operation description.
       *
       * @param request DeleteDataMaskingRuleRequest
       * @return DeleteDataMaskingRuleResponse
       */
      Models::DeleteDataMaskingRuleResponse deleteDataMaskingRule(const Models::DeleteDataMaskingRuleRequest &request);

      /**
       * @summary Queries the statistics of account permissions for column encryption.
       *
       * @description Queries the permission statistics of database accounts in the current region by product scope. Plaintext accounts correspond to FullAccessCount. Restricted access and decryption-prohibited accounts are counted in RestrictedAccessCount and NoneAccessCount, respectively. The number of accounts without configured permissions can be obtained by subtracting the number of the preceding three types of accounts from TotalCount. This operation does not accept filter conditions such as instance, database, table, or column.
       * Parameter examples are for format illustration only. Replace them with the region, resource identity, and configuration values obtained from the current account when you invoke this operation.
       * Use the service registration endpoint of the region where the target asset is located and configure the Settings for the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must be consistent with the target asset.
       *
       * @param request GetDataMaskingAccountCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataMaskingAccountCountResponse
       */
      Models::GetDataMaskingAccountCountResponse getDataMaskingAccountCountWithOptions(const Models::GetDataMaskingAccountCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of account permissions for column encryption.
       *
       * @description Queries the permission statistics of database accounts in the current region by product scope. Plaintext accounts correspond to FullAccessCount. Restricted access and decryption-prohibited accounts are counted in RestrictedAccessCount and NoneAccessCount, respectively. The number of accounts without configured permissions can be obtained by subtracting the number of the preceding three types of accounts from TotalCount. This operation does not accept filter conditions such as instance, database, table, or column.
       * Parameter examples are for format illustration only. Replace them with the region, resource identity, and configuration values obtained from the current account when you invoke this operation.
       * Use the service registration endpoint of the region where the target asset is located and configure the Settings for the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must be consistent with the target asset.
       *
       * @param request GetDataMaskingAccountCountRequest
       * @return GetDataMaskingAccountCountResponse
       */
      Models::GetDataMaskingAccountCountResponse getDataMaskingAccountCount(const Models::GetDataMaskingAccountCountRequest &request);

      /**
       * @summary Queries the statistics on the number of encrypted columns.
       *
       * @description Queries the total number of columns, the number of sensitive columns, the number of encrypted columns, and the number of columns that failed to be encrypted by region, product, and categorization and classification template. This operation returns data for statistics cards and does not filter by instance, database name, table name, column name, or model in the column list.
       * To be compatible with historical detection results, if the specified template has no first-screen results and is not filtered by sensitivity level or detection model, the results may backoff to the built-in general detection results. If strict template attribution is required, use the level or model conditions within the template for verification.
       * The parameter examples are for format illustration only. Replace them with the region, resource identity, and configuration values obtained from the current account when you invoke the operation.
       * Use the service registration endpoint of the region where the target asset is located and apply the Settings for the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       *
       * @param request GetDataMaskingColumnCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataMaskingColumnCountResponse
       */
      Models::GetDataMaskingColumnCountResponse getDataMaskingColumnCountWithOptions(const Models::GetDataMaskingColumnCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on the number of encrypted columns.
       *
       * @description Queries the total number of columns, the number of sensitive columns, the number of encrypted columns, and the number of columns that failed to be encrypted by region, product, and categorization and classification template. This operation returns data for statistics cards and does not filter by instance, database name, table name, column name, or model in the column list.
       * To be compatible with historical detection results, if the specified template has no first-screen results and is not filtered by sensitivity level or detection model, the results may backoff to the built-in general detection results. If strict template attribution is required, use the level or model conditions within the template for verification.
       * The parameter examples are for format illustration only. Replace them with the region, resource identity, and configuration values obtained from the current account when you invoke the operation.
       * Use the service registration endpoint of the region where the target asset is located and apply the Settings for the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       *
       * @param request GetDataMaskingColumnCountRequest
       * @return GetDataMaskingColumnCountResponse
       */
      Models::GetDataMaskingColumnCountResponse getDataMaskingColumnCount(const Models::GetDataMaskingColumnCountRequest &request);

      /**
       * @summary Queries the engine and kernel attributes of an instance.
       *
       * @description Queries the instance engine, current kernel version, maintenance window, and KMS encryption support. After a kernel upgrade, you can read back CurrentKernelVersion to verify the target version. If ErrorCode or ErrorMessage is present, handle the property query exception first.
       * Parameter examples are for format illustration only. When you call the API, replace them with the region, resource ID, and configuration values obtained from the current account.
       * Use the endpoint of the region where the target asset is located, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance ID must match the target asset.
       *
       * @param request GetInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceAttributeResponse
       */
      Models::GetInstanceAttributeResponse getInstanceAttributeWithOptions(const Models::GetInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the engine and kernel attributes of an instance.
       *
       * @description Queries the instance engine, current kernel version, maintenance window, and KMS encryption support. After a kernel upgrade, you can read back CurrentKernelVersion to verify the target version. If ErrorCode or ErrorMessage is present, handle the property query exception first.
       * Parameter examples are for format illustration only. When you call the API, replace them with the region, resource ID, and configuration values obtained from the current account.
       * Use the endpoint of the region where the target asset is located, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance ID must match the target asset.
       *
       * @param request GetInstanceAttributeRequest
       * @return GetInstanceAttributeResponse
       */
      Models::GetInstanceAttributeResponse getInstanceAttribute(const Models::GetInstanceAttributeRequest &request);

      /**
       * @summary Queries the columns and detection results of a data table.
       *
       * @description Performs a paging query on the columns and detection results in a data table. If both DataAssetSourceId and InstanceName are specified, DataAssetSourceId takes precedence. In PostgreSQL and Oracle scenarios, you can use the schema.table format for TableName and pass the corresponding EngineType. To query the execution status of column encryption, call ListDataMaskingColumns.
       * To ensure compatibility with historical detection results, if the specified template has no first-screen results and is not filtered by sensitivity level or detection model, the results may fall back to the built-in general detection results. If strict template attribution is required, use the level or model conditions within the template for verification.
       * The parameter examples are for format illustration only. When you call the API, replace them with the region, resource identifier, and configuration values obtained from the current account.
       * Use the endpoint of the region where the target asset is located, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance identity must match the target asset.
       *
       * @param request ListColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListColumnsResponse
       */
      Models::ListColumnsResponse listColumnsWithOptions(const Models::ListColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the columns and detection results of a data table.
       *
       * @description Performs a paging query on the columns and detection results in a data table. If both DataAssetSourceId and InstanceName are specified, DataAssetSourceId takes precedence. In PostgreSQL and Oracle scenarios, you can use the schema.table format for TableName and pass the corresponding EngineType. To query the execution status of column encryption, call ListDataMaskingColumns.
       * To ensure compatibility with historical detection results, if the specified template has no first-screen results and is not filtered by sensitivity level or detection model, the results may fall back to the built-in general detection results. If strict template attribution is required, use the level or model conditions within the template for verification.
       * The parameter examples are for format illustration only. When you call the API, replace them with the region, resource identifier, and configuration values obtained from the current account.
       * Use the endpoint of the region where the target asset is located, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance identity must match the target asset.
       *
       * @param request ListColumnsRequest
       * @return ListColumnsResponse
       */
      Models::ListColumnsResponse listColumns(const Models::ListColumnsRequest &request);

      /**
       * @summary Queries database accounts and column encryption permissions.
       *
       * @description Uses paging to query database accounts and their column encryption access permissions. This operation is used to select plaintext accounts when creating rules, and to verify AuthRole, EncryptionKeyMode, and ExpireTime before and after modifying account permissions. AccountName filters accounts by exact account name, and the account ID is obtained from Items[].Id.
       * The parameter examples are for format illustration only. Replace them with the region, resource IDs, and configuration values obtained from the current account when you call the operation.
       * Use the endpoint of the region where the target asset is located, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance ID must match the target asset.
       *
       * @param request ListDataAssetAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataAssetAccountsResponse
       */
      Models::ListDataAssetAccountsResponse listDataAssetAccountsWithOptions(const Models::ListDataAssetAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries database accounts and column encryption permissions.
       *
       * @description Uses paging to query database accounts and their column encryption access permissions. This operation is used to select plaintext accounts when creating rules, and to verify AuthRole, EncryptionKeyMode, and ExpireTime before and after modifying account permissions. AccountName filters accounts by exact account name, and the account ID is obtained from Items[].Id.
       * The parameter examples are for format illustration only. Replace them with the region, resource IDs, and configuration values obtained from the current account when you call the operation.
       * Use the endpoint of the region where the target asset is located, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance ID must match the target asset.
       *
       * @param request ListDataAssetAccountsRequest
       * @return ListDataAssetAccountsResponse
       */
      Models::ListDataAssetAccountsResponse listDataAssetAccounts(const Models::ListDataAssetAccountsRequest &request);

      /**
       * @summary Queries the column encryption status and detection results.
       *
       * @description Performs a paged query on columns and their encryption status, sensitivity levels, and detection models. Supports paging and combined filtering by template, product, instance, database, table, column name, model, and sensitivity level. Use this operation to read back data after the creation or shutdown of a rule. Processing and Deleting are intermediate states, while Failed and DeleteFailed indicate operation failures. The capitalization of the RiskLeveLId parameter name must be preserved exactly as is.
       * When querying by product, use a single ProductId or the corresponding ProductCode. The current column query cannot rely on ProductIds to filter multiple products. Query each product separately.
       * To ensure compatibility with historical detection results, if the specified template yields no initial results and is not filtered by sensitivity level or detection model, the results may fall back to the built-in general detection results. To strictly verify template attribution, use the level or model conditions within the template simultaneously.
       * Parameter examples are for format illustration only. Replace them with the region, resource identifiers, and configuration values obtained from the current account when making a call.
       * Use the service registration endpoint of the region where the target asset is located, and configure the Settings for the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       *
       * @param request ListDataMaskingColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataMaskingColumnsResponse
       */
      Models::ListDataMaskingColumnsResponse listDataMaskingColumnsWithOptions(const Models::ListDataMaskingColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the column encryption status and detection results.
       *
       * @description Performs a paged query on columns and their encryption status, sensitivity levels, and detection models. Supports paging and combined filtering by template, product, instance, database, table, column name, model, and sensitivity level. Use this operation to read back data after the creation or shutdown of a rule. Processing and Deleting are intermediate states, while Failed and DeleteFailed indicate operation failures. The capitalization of the RiskLeveLId parameter name must be preserved exactly as is.
       * When querying by product, use a single ProductId or the corresponding ProductCode. The current column query cannot rely on ProductIds to filter multiple products. Query each product separately.
       * To ensure compatibility with historical detection results, if the specified template yields no initial results and is not filtered by sensitivity level or detection model, the results may fall back to the built-in general detection results. To strictly verify template attribution, use the level or model conditions within the template simultaneously.
       * Parameter examples are for format illustration only. Replace them with the region, resource identifiers, and configuration values obtained from the current account when making a call.
       * Use the service registration endpoint of the region where the target asset is located, and configure the Settings for the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       *
       * @param request ListDataMaskingColumnsRequest
       * @return ListDataMaskingColumnsResponse
       */
      Models::ListDataMaskingColumnsResponse listDataMaskingColumns(const Models::ListDataMaskingColumnsRequest &request);

      /**
       * @summary Queries the column encryption algorithms supported by an instance.
       *
       * @description Queries the available column encryption algorithms for a specified instance and the reasons for any restrictions on each algorithm. Before selecting an algorithm, check the ErrorCode and ErrorMessage of the corresponding item. Do not assume that all instances support the same set of algorithms.
       * Parameter examples are for format illustration only. When you invoke the API, replace them with the region, resource IDs, and configuration values obtained from the current account.
       * Use the endpoint of the region where the target asset is located and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance ID must match the target asset.
       *
       * @param request ListDataMaskingEncryptionAlgorithmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataMaskingEncryptionAlgorithmsResponse
       */
      Models::ListDataMaskingEncryptionAlgorithmsResponse listDataMaskingEncryptionAlgorithmsWithOptions(const Models::ListDataMaskingEncryptionAlgorithmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the column encryption algorithms supported by an instance.
       *
       * @description Queries the available column encryption algorithms for a specified instance and the reasons for any restrictions on each algorithm. Before selecting an algorithm, check the ErrorCode and ErrorMessage of the corresponding item. Do not assume that all instances support the same set of algorithms.
       * Parameter examples are for format illustration only. When you invoke the API, replace them with the region, resource IDs, and configuration values obtained from the current account.
       * Use the endpoint of the region where the target asset is located and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance ID must match the target asset.
       *
       * @param request ListDataMaskingEncryptionAlgorithmsRequest
       * @return ListDataMaskingEncryptionAlgorithmsResponse
       */
      Models::ListDataMaskingEncryptionAlgorithmsResponse listDataMaskingEncryptionAlgorithms(const Models::ListDataMaskingEncryptionAlgorithmsRequest &request);

      /**
       * @summary Queries column-encrypted instances.
       *
       * @description Performs a paged query of column encryption instances, and supports filtering by conditions such as product, detect template, database, table, and column. The scope of instance-level status filtering differs from that of column-level status filtering. To find all unencrypted sensitive columns, first enumerate the instances of the target product, and then use ListDataMaskingColumns to filter by NotEncrypted to avoid missing partially encrypted instances.
       * When you need to filter precisely by EngineType, read all candidates by paging and then filter by the returned values. This parameter is not applied in some query paths. The matching semantics of InstanceId vary with query combinations. For precise positioning, verify the complete instance identity returned.
       * Parameter examples are for format illustration only. When you invoke the operation, replace them with the region, resource identity, and configuration values obtained from the current account.
       * Use the service registration endpoint of the region where the target asset is located, and configure the Settings for the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       *
       * @param request ListDataMaskingInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataMaskingInstancesResponse
       */
      Models::ListDataMaskingInstancesResponse listDataMaskingInstancesWithOptions(const Models::ListDataMaskingInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries column-encrypted instances.
       *
       * @description Performs a paged query of column encryption instances, and supports filtering by conditions such as product, detect template, database, table, and column. The scope of instance-level status filtering differs from that of column-level status filtering. To find all unencrypted sensitive columns, first enumerate the instances of the target product, and then use ListDataMaskingColumns to filter by NotEncrypted to avoid missing partially encrypted instances.
       * When you need to filter precisely by EngineType, read all candidates by paging and then filter by the returned values. This parameter is not applied in some query paths. The matching semantics of InstanceId vary with query combinations. For precise positioning, verify the complete instance identity returned.
       * Parameter examples are for format illustration only. When you invoke the operation, replace them with the region, resource identity, and configuration values obtained from the current account.
       * Use the service registration endpoint of the region where the target asset is located, and configure the Settings for the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       *
       * @param request ListDataMaskingInstancesRequest
       * @return ListDataMaskingInstancesResponse
       */
      Models::ListDataMaskingInstancesResponse listDataMaskingInstances(const Models::ListDataMaskingInstancesRequest &request);

      /**
       * @summary Queries the databases of an instance.
       *
       * @description Performs a paged query on managed data sources by using paging. In relational database scenarios, locate the instance by using ProductCode and InstanceId, and select a database from Items[].DbName. This operation queries the database inventory and does not filter by data categorization and classification templates.
       * Parameter examples are for format illustration only. Replace them with the region, resource identity, and configuration values obtained from the current account when you invoke this operation.
       * Use the service registration endpoint of the region where the target asset resides and configure the settings of the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       *
       * @param request ListDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSourcesWithOptions(const Models::ListDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the databases of an instance.
       *
       * @description Performs a paged query on managed data sources by using paging. In relational database scenarios, locate the instance by using ProductCode and InstanceId, and select a database from Items[].DbName. This operation queries the database inventory and does not filter by data categorization and classification templates.
       * Parameter examples are for format illustration only. Replace them with the region, resource identity, and configuration values obtained from the current account when you invoke this operation.
       * Use the service registration endpoint of the region where the target asset resides and configure the settings of the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       *
       * @param request ListDataSourcesRequest
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSources(const Models::ListDataSourcesRequest &request);

      /**
       * @summary Queries the recognition models in a template.
       *
       * @description Queries the valid recognition models in a specified template and returns RuleList. If TemplateId is not specified, the currently enabled template is used. The model ID is obtained from RuleList[].Id and can be used to filter TemplateRuleIds.
       * Parameter examples are provided only to illustrate the format. When you call the API, replace them with the region, resource IDs, and configuration values queried from the current account.
       *
       * @param request ListIdentifyModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdentifyModelsResponse
       */
      Models::ListIdentifyModelsResponse listIdentifyModelsWithOptions(const Models::ListIdentifyModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the recognition models in a template.
       *
       * @description Queries the valid recognition models in a specified template and returns RuleList. If TemplateId is not specified, the currently enabled template is used. The model ID is obtained from RuleList[].Id and can be used to filter TemplateRuleIds.
       * Parameter examples are provided only to illustrate the format. When you call the API, replace them with the region, resource IDs, and configuration values queried from the current account.
       *
       * @param request ListIdentifyModelsRequest
       * @return ListIdentifyModelsResponse
       */
      Models::ListIdentifyModelsResponse listIdentifyModels(const Models::ListIdentifyModelsRequest &request);

      /**
       * @summary Queries the available KMS keys for column encryption.
       *
       * @description Queries the KMS key identities and aliases available for the column encryption configuration of a specified instance. Before using a KMS key, verify the key status and usage conditions by calling the DescribeKey operation of KMS. This operation does not return the plaintext of the key.
       * The parameter examples are for format illustration only. Replace them with the region, resource identity, and configuration values obtained from the current account when you invoke the operation.
       * Use the service registration endpoint of the region where the target asset is located and configure the Settings for the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       *
       * @param request ListKmsKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKmsKeysResponse
       */
      Models::ListKmsKeysResponse listKmsKeysWithOptions(const Models::ListKmsKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available KMS keys for column encryption.
       *
       * @description Queries the KMS key identities and aliases available for the column encryption configuration of a specified instance. Before using a KMS key, verify the key status and usage conditions by calling the DescribeKey operation of KMS. This operation does not return the plaintext of the key.
       * The parameter examples are for format illustration only. Replace them with the region, resource identity, and configuration values obtained from the current account when you invoke the operation.
       * Use the service registration endpoint of the region where the target asset is located and configure the Settings for the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       *
       * @param request ListKmsKeysRequest
       * @return ListKmsKeysResponse
       */
      Models::ListKmsKeysResponse listKmsKeys(const Models::ListKmsKeysRequest &request);

      /**
       * @summary Queries the upgradable kernel versions.
       *
       * @description Queries the available kernel versions for an instance. For an upgrade, select the target version from KernelVersions[].KernelVersion. Do not manually construct the version number.
       * Parameter examples are for format illustration only. When you call the API, replace them with the region, resource ID, and configuration values obtained from the current account.
       * Use the endpoint of the region where the target asset is located, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance ID must match the target asset.
       *
       * @param request ListMiniEngineVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMiniEngineVersionsResponse
       */
      Models::ListMiniEngineVersionsResponse listMiniEngineVersionsWithOptions(const Models::ListMiniEngineVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the upgradable kernel versions.
       *
       * @description Queries the available kernel versions for an instance. For an upgrade, select the target version from KernelVersions[].KernelVersion. Do not manually construct the version number.
       * Parameter examples are for format illustration only. When you call the API, replace them with the region, resource ID, and configuration values obtained from the current account.
       * Use the endpoint of the region where the target asset is located, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance ID must match the target asset.
       *
       * @param request ListMiniEngineVersionsRequest
       * @return ListMiniEngineVersionsResponse
       */
      Models::ListMiniEngineVersionsResponse listMiniEngineVersions(const Models::ListMiniEngineVersionsRequest &request);

      /**
       * @summary Queries the regions where assets are located.
       *
       * @description Queries the list of regions where the assets owned by the current account are located. You can use this list to select the RegionId for subsequent region-specific API operations. You can filter the regions based on whether auditing or detection is enabled. The returned region list is not the same as the list of all regions supported by Alibaba Cloud services.
       * The parameter examples are for format illustration only. When you call this operation, replace them with the regions, resource identifiers, and configuration values queried from the current account.
       *
       * @param request ListRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const Models::ListRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions where assets are located.
       *
       * @description Queries the list of regions where the assets owned by the current account are located. You can use this list to select the RegionId for subsequent region-specific API operations. You can filter the regions based on whether auditing or detection is enabled. The returned region list is not the same as the list of all regions supported by Alibaba Cloud services.
       * The parameter examples are for format illustration only. When you call this operation, replace them with the regions, resource identifiers, and configuration values queried from the current account.
       *
       * @param request ListRegionsRequest
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions(const Models::ListRegionsRequest &request);

      /**
       * @summary Queries the sensitivity levels of a template.
       *
       * @description Queries the sensitivity levels in a data classification template. Pass the level ID in subsequent queries. Do not use level names such as S1 or S2 directly as RiskLevelId.
       * The parameter examples are for format illustration only. When calling the API, replace them with the region, resource identifiers, and configuration values obtained for the current account.
       *
       * @param request ListRiskLevelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRiskLevelsResponse
       */
      Models::ListRiskLevelsResponse listRiskLevelsWithOptions(const Models::ListRiskLevelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sensitivity levels of a template.
       *
       * @description Queries the sensitivity levels in a data classification template. Pass the level ID in subsequent queries. Do not use level names such as S1 or S2 directly as RiskLevelId.
       * The parameter examples are for format illustration only. When calling the API, replace them with the region, resource identifiers, and configuration values obtained for the current account.
       *
       * @param request ListRiskLevelsRequest
       * @return ListRiskLevelsResponse
       */
      Models::ListRiskLevelsResponse listRiskLevels(const Models::ListRiskLevelsRequest &request);

      /**
       * @summary Queries database tables.
       *
       * @description Queries database tables and detection results in a database by using paging. For relational databases, set DataAssetSourceId to the instance identity and DataSourceName to the database name. Table names in PostgreSQL and Oracle may contain a schema prefix. Pass the table name as is for subsequent column queries.
       * To be compatible with historical detection results, if the specified template yields no initial results and no filtering is applied by sensitivity level or detection model, the results may fall back to the built-in general detection results. To strictly verify template attribution, use the level or model conditions within the template at the same time.
       * The parameter examples are provided only to illustrate the format. When you invoke the API, replace them with the region, resource identity, and configuration values obtained from the current account.
       * Use the endpoint of the region where the target asset resides, and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       *
       * @param request ListTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTablesWithOptions(const Models::ListTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries database tables.
       *
       * @description Queries database tables and detection results in a database by using paging. For relational databases, set DataAssetSourceId to the instance identity and DataSourceName to the database name. Table names in PostgreSQL and Oracle may contain a schema prefix. Pass the table name as is for subsequent column queries.
       * To be compatible with historical detection results, if the specified template yields no initial results and no filtering is applied by sensitivity level or detection model, the results may fall back to the built-in general detection results. To strictly verify template attribution, use the level or model conditions within the template at the same time.
       * The parameter examples are provided only to illustrate the format. When you invoke the API, replace them with the region, resource identity, and configuration values obtained from the current account.
       * Use the endpoint of the region where the target asset resides, and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       *
       * @param request ListTablesRequest
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTables(const Models::ListTablesRequest &request);

      /**
       * @summary Queries classification and grading templates.
       *
       * @description Queries the classification and grading templates available for the current account. Use Items[].Id as the TemplateId for subsequent API operations. The detection model and sensitivity level must belong to the same template. Parameter examples are for format illustration only. Replace them with the region, resource identifiers, and configuration values obtained from the current account when making the call.
       *
       * @param request ListTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplatesWithOptions(const Models::ListTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries classification and grading templates.
       *
       * @description Queries the classification and grading templates available for the current account. Use Items[].Id as the TemplateId for subsequent API operations. The detection model and sensitivity level must belong to the same template. Parameter examples are for format illustration only. Replace them with the region, resource identifiers, and configuration values obtained from the current account when making the call.
       *
       * @param request ListTemplatesRequest
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplates(const Models::ListTemplatesRequest &request);

      /**
       * @summary Queries the summary of sensitive data.
       *
       * @description Queries the statistics of sensitive data in the overview, data catalog, or aggregated by region. If CountType is set to 41, overview statistics are returned. If CountType is set to 42, data catalog statistics for a specified product are returned. If CountType is set to 43, data aggregated by region and template is returned. The column encryption console uses CountType=43 and ProductCodeList to obtain region and template candidates. The statistics may be derived from generated summary results and do not indicate that a recently initiated synchronization or encryption operation has been completed.
       * Parameter examples are for format illustration only. When calling the API, replace them with the regions, resource identifiers, and configuration values obtained from the current account.
       *
       * @param request ListTotalSensitiveInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTotalSensitiveInfoResponse
       */
      Models::ListTotalSensitiveInfoResponse listTotalSensitiveInfoWithOptions(const Models::ListTotalSensitiveInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the summary of sensitive data.
       *
       * @description Queries the statistics of sensitive data in the overview, data catalog, or aggregated by region. If CountType is set to 41, overview statistics are returned. If CountType is set to 42, data catalog statistics for a specified product are returned. If CountType is set to 43, data aggregated by region and template is returned. The column encryption console uses CountType=43 and ProductCodeList to obtain region and template candidates. The statistics may be derived from generated summary results and do not indicate that a recently initiated synchronization or encryption operation has been completed.
       * Parameter examples are for format illustration only. When calling the API, replace them with the regions, resource identifiers, and configuration values obtained from the current account.
       *
       * @param request ListTotalSensitiveInfoRequest
       * @return ListTotalSensitiveInfoResponse
       */
      Models::ListTotalSensitiveInfoResponse listTotalSensitiveInfo(const Models::ListTotalSensitiveInfoRequest &request);

      /**
       * @summary Synchronizes the assets of a specified product in a region.
       *
       * @description Triggers asset synchronization for a specified product in the current region. The scope applies to the product and region, and is not limited to a specific instance. A successful request only indicates that the request is accepted. You can then verify asset changes by checking the lists of instances, databases, tables, and columns. This operation does not return a public node identifier for polling.
       * Parameter examples are for format illustration only. When you invoke this operation, replace them with the region, resource identifiers, and configuration values obtained from the current account.
       * Use the endpoint of the region where the target assets reside, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance identity must match the target assets.
       * This operation returns only RequestId. Request acceptance does not mean that the business operation is complete. You should check the status as described in the operation description.
       *
       * @param request SyncDataAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncDataAssetsResponse
       */
      Models::SyncDataAssetsResponse syncDataAssetsWithOptions(const Models::SyncDataAssetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes the assets of a specified product in a region.
       *
       * @description Triggers asset synchronization for a specified product in the current region. The scope applies to the product and region, and is not limited to a specific instance. A successful request only indicates that the request is accepted. You can then verify asset changes by checking the lists of instances, databases, tables, and columns. This operation does not return a public node identifier for polling.
       * Parameter examples are for format illustration only. When you invoke this operation, replace them with the region, resource identifiers, and configuration values obtained from the current account.
       * Use the endpoint of the region where the target assets reside, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance identity must match the target assets.
       * This operation returns only RequestId. Request acceptance does not mean that the business operation is complete. You should check the status as described in the operation description.
       *
       * @param request SyncDataAssetsRequest
       * @return SyncDataAssetsResponse
       */
      Models::SyncDataAssetsResponse syncDataAssets(const Models::SyncDataAssetsRequest &request);

      /**
       * @summary Modifies the column encryption algorithm and key for an instance.
       *
       * @description Modifies the instance-level column encryption algorithm and key configuration, which affects the column encryption configuration of the instance. The current implementation supports ApsaraDB RDS for MySQL and PolarDB-X 2.0. Query the algorithms and keys supported by the instance before invoking this operation. This operation does not have an EncryptionKeyMode parameter. Configure the parameter based on the usage conditions of EncryptionKeyId. After a successful request, read back the instance encryption configuration and column status. Do not determine completion based solely on the RequestId.
       * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identities, and configuration values obtained by querying your current account.
       * Use the service registration endpoint of the region where the target asset resides, and set the common parameter RegionId, for example, cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       * This operation returns only the RequestId. A successful request does not indicate that the business operation is complete. Read back the status as described in the operation description.
       *
       * @param request UpdateDataMaskingEncryptionAlgorithmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataMaskingEncryptionAlgorithmResponse
       */
      Models::UpdateDataMaskingEncryptionAlgorithmResponse updateDataMaskingEncryptionAlgorithmWithOptions(const Models::UpdateDataMaskingEncryptionAlgorithmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the column encryption algorithm and key for an instance.
       *
       * @description Modifies the instance-level column encryption algorithm and key configuration, which affects the column encryption configuration of the instance. The current implementation supports ApsaraDB RDS for MySQL and PolarDB-X 2.0. Query the algorithms and keys supported by the instance before invoking this operation. This operation does not have an EncryptionKeyMode parameter. Configure the parameter based on the usage conditions of EncryptionKeyId. After a successful request, read back the instance encryption configuration and column status. Do not determine completion based solely on the RequestId.
       * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identities, and configuration values obtained by querying your current account.
       * Use the service registration endpoint of the region where the target asset resides, and set the common parameter RegionId, for example, cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       * This operation returns only the RequestId. A successful request does not indicate that the business operation is complete. Read back the status as described in the operation description.
       *
       * @param request UpdateDataMaskingEncryptionAlgorithmRequest
       * @return UpdateDataMaskingEncryptionAlgorithmResponse
       */
      Models::UpdateDataMaskingEncryptionAlgorithmResponse updateDataMaskingEncryptionAlgorithm(const Models::UpdateDataMaskingEncryptionAlgorithmRequest &request);

      /**
       * @summary Sets the column encryption permissions for multiple database accounts.
       *
       * @description Sets the same column encryption access permissions Settings for a batch of database accounts. UserList can contain accounts from different instances under the same product and region. Each item must include InstanceId and AccountId. fullAccess allows plaintext access, restrictedAccess allows restricted access, and noneAccess prohibits decryption and is supported only by specific DPI engines and key patterns. Only fullAccess supports configuring an expiration time. After a successful request, invoke ListDataAssetAccounts to read back the results.
       * The parameter examples are for format illustration only. When invoking this operation, replace them with the region, resource identity, and configuration values obtained from the current account.
       * Use the service registration endpoint of the region where the target asset is located and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       * This operation returns only RequestId. Request acceptance does not mean the business operation is complete. You must read back the status as described in the operation description.
       *
       * @param tmpReq UpdateDataMaskingUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataMaskingUsersResponse
       */
      Models::UpdateDataMaskingUsersResponse updateDataMaskingUsersWithOptions(const Models::UpdateDataMaskingUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the column encryption permissions for multiple database accounts.
       *
       * @description Sets the same column encryption access permissions Settings for a batch of database accounts. UserList can contain accounts from different instances under the same product and region. Each item must include InstanceId and AccountId. fullAccess allows plaintext access, restrictedAccess allows restricted access, and noneAccess prohibits decryption and is supported only by specific DPI engines and key patterns. Only fullAccess supports configuring an expiration time. After a successful request, invoke ListDataAssetAccounts to read back the results.
       * The parameter examples are for format illustration only. When invoking this operation, replace them with the region, resource identity, and configuration values obtained from the current account.
       * Use the service registration endpoint of the region where the target asset is located and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       * This operation returns only RequestId. Request acceptance does not mean the business operation is complete. You must read back the status as described in the operation description.
       *
       * @param request UpdateDataMaskingUsersRequest
       * @return UpdateDataMaskingUsersResponse
       */
      Models::UpdateDataMaskingUsersResponse updateDataMaskingUsers(const Models::UpdateDataMaskingUsersRequest &request);

      /**
       * @summary Upgrades the database kernel of an instance.
       *
       * @description Upgrades the database kernel of a specified instance at the selected time. Invoke ListMiniEngineVersions to select a version, and check the current status and maintenance window of the instance. SpecifyTime requires a future SwitchTime, and PolarDB-X 2.0 does not support these time options. The upgrade is an asynchronous operation. Invoke GetInstanceAttribute to check the CurrentKernelVersion and verify the result.
       * The parameter examples are for format illustration only. Replace them with the region, resource identity, and configuration values obtained from the current account when you invoke the operation.
       * Use the service registration endpoint of the region where the target asset is located, and configure the Settings for the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       * This operation returns only RequestId. Acceptance of the request does not mean the business operation is complete. Check the status as described in the operation description.
       *
       * @param request UpgradeKernelVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeKernelVersionResponse
       */
      Models::UpgradeKernelVersionResponse upgradeKernelVersionWithOptions(const Models::UpgradeKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the database kernel of an instance.
       *
       * @description Upgrades the database kernel of a specified instance at the selected time. Invoke ListMiniEngineVersions to select a version, and check the current status and maintenance window of the instance. SpecifyTime requires a future SwitchTime, and PolarDB-X 2.0 does not support these time options. The upgrade is an asynchronous operation. Invoke GetInstanceAttribute to check the CurrentKernelVersion and verify the result.
       * The parameter examples are for format illustration only. Replace them with the region, resource identity, and configuration values obtained from the current account when you invoke the operation.
       * Use the service registration endpoint of the region where the target asset is located, and configure the Settings for the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
       * This operation returns only RequestId. Acceptance of the request does not mean the business operation is complete. Check the status as described in the operation description.
       *
       * @param request UpgradeKernelVersionRequest
       * @return UpgradeKernelVersionResponse
       */
      Models::UpgradeKernelVersionResponse upgradeKernelVersion(const Models::UpgradeKernelVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
