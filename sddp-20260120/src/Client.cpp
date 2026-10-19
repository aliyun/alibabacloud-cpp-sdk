#include <darabonba/Core.hpp>
#include <alibabacloud/Sddp20260120.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Sddp20260120::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Sddp20260120
{

AlibabaCloud::Sddp20260120::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hongkong" , "sddp-api.cn-hongkong.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("sddp", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Checks the prerequisites for column encryption on an instance.
 *
 * @description Checks the permissions, engine, and runtime conditions of an instance before creating column encryption rules. Check both ErrorCode and ErrorMessage in the response. Only ErrorCode=Success indicates that the check passed. A successful request alone does not mean the instance meets all encryption conditions. This check does not create column encryption rules.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identities, and configuration values obtained from your account.
 * Use the service registration endpoint of the region where the target asset resides, and configure the common parameter RegionId to the corresponding value, such as cn-zhangjiakou. The product code and instance identifier must match the target asset.
 *
 * @param request CheckDataMaskingInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDataMaskingInstanceResponse
 */
CheckDataMaskingInstanceResponse Client::checkDataMaskingInstanceWithOptions(const CheckDataMaskingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDataMaskingInstance"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDataMaskingInstanceResponse>();
}

/**
 * @summary Checks the prerequisites for column encryption on an instance.
 *
 * @description Checks the permissions, engine, and runtime conditions of an instance before creating column encryption rules. Check both ErrorCode and ErrorMessage in the response. Only ErrorCode=Success indicates that the check passed. A successful request alone does not mean the instance meets all encryption conditions. This check does not create column encryption rules.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identities, and configuration values obtained from your account.
 * Use the service registration endpoint of the region where the target asset resides, and configure the common parameter RegionId to the corresponding value, such as cn-zhangjiakou. The product code and instance identifier must match the target asset.
 *
 * @param request CheckDataMaskingInstanceRequest
 * @return CheckDataMaskingInstanceResponse
 */
CheckDataMaskingInstanceResponse Client::checkDataMaskingInstance(const CheckDataMaskingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDataMaskingInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a column encryption rule.
 *
 * @description Creates a column encryption rule for a specified database, table, and columns under the same instance. Before invoking this operation, verify the instance status, supported algorithms, key, target columns, and accounts. SubRuleList is a list of target columns grouped by table. Columns is a comma-separated string of column names. Accounts in UserList are granted fullAccess plaintext access permissions. A successful request indicates only that the request has been accepted. You must invoke [ListDataMaskingColumns](https://help.aliyun.com/document_detail/2859325.html) and [ListDataAssetAccounts](https://help.aliyun.com/document_detail/2859330.html) to confirm the column status, account access permissions, and expiration time.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identifiers, and configuration values obtained from your account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 * This operation returns only RequestId. A successful request does not mean that the operation is complete. Read back the status as described in the operation description.
 *
 * @param tmpReq CreateDataMaskingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataMaskingRuleResponse
 */
CreateDataMaskingRuleResponse Client::createDataMaskingRuleWithOptions(const CreateDataMaskingRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataMaskingRuleShrinkRequest request = CreateDataMaskingRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubRuleList()) {
    request.setSubRuleListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubRuleList(), "SubRuleList", "json"));
  }

  if (!!tmpReq.hasUserList()) {
    request.setUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserList(), "UserList", "json"));
  }

  json query = {};
  if (!!request.hasEncAlgorithm()) {
    query["EncAlgorithm"] = request.getEncAlgorithm();
  }

  if (!!request.hasEncryptionKeyId()) {
    query["EncryptionKeyId"] = request.getEncryptionKeyId();
  }

  if (!!request.hasEncryptionKeyMode()) {
    query["EncryptionKeyMode"] = request.getEncryptionKeyMode();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasExpireTimeOperation()) {
    query["ExpireTimeOperation"] = request.getExpireTimeOperation();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasRiskHandleId()) {
    query["RiskHandleId"] = request.getRiskHandleId();
  }

  if (!!request.hasSubRuleListShrink()) {
    query["SubRuleList"] = request.getSubRuleListShrink();
  }

  if (!!request.hasUserListShrink()) {
    query["UserList"] = request.getUserListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataMaskingRule"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataMaskingRuleResponse>();
}

/**
 * @summary Creates a column encryption rule.
 *
 * @description Creates a column encryption rule for a specified database, table, and columns under the same instance. Before invoking this operation, verify the instance status, supported algorithms, key, target columns, and accounts. SubRuleList is a list of target columns grouped by table. Columns is a comma-separated string of column names. Accounts in UserList are granted fullAccess plaintext access permissions. A successful request indicates only that the request has been accepted. You must invoke [ListDataMaskingColumns](https://help.aliyun.com/document_detail/2859325.html) and [ListDataAssetAccounts](https://help.aliyun.com/document_detail/2859330.html) to confirm the column status, account access permissions, and expiration time.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identifiers, and configuration values obtained from your account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 * This operation returns only RequestId. A successful request does not mean that the operation is complete. Read back the status as described in the operation description.
 *
 * @param request CreateDataMaskingRuleRequest
 * @return CreateDataMaskingRuleResponse
 */
CreateDataMaskingRuleResponse Client::createDataMaskingRule(const CreateDataMaskingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataMaskingRuleWithOptions(request, runtime);
}

/**
 * @summary Disables encryption for specified columns.
 *
 * @description Disables column encryption rules for specified columns within the same instance. SubRuleList precisely specifies the database, table, and columns. If no matching rule is found, no new operation object is created. The disable request is processed asynchronously. Use ListDataMaskingColumns to verify that the column has recovered to NotEncrypted or that the target rule has been removed. DeleteFailed indicates that the shutdown failed.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identity, and configuration values obtained by querying your current account.
 * Use the endpoint of the region where the target asset resides, and set the common parameter RegionId to the corresponding value, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 * This operation returns only RequestId. Request acceptance does not indicate that the business operation is complete. Poll the status as described in the operation description.
 *
 * @param tmpReq DeleteDataMaskingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataMaskingRuleResponse
 */
DeleteDataMaskingRuleResponse Client::deleteDataMaskingRuleWithOptions(const DeleteDataMaskingRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteDataMaskingRuleShrinkRequest request = DeleteDataMaskingRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubRuleList()) {
    request.setSubRuleListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubRuleList(), "SubRuleList", "json"));
  }

  json query = {};
  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasSubRuleListShrink()) {
    query["SubRuleList"] = request.getSubRuleListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataMaskingRule"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataMaskingRuleResponse>();
}

/**
 * @summary Disables encryption for specified columns.
 *
 * @description Disables column encryption rules for specified columns within the same instance. SubRuleList precisely specifies the database, table, and columns. If no matching rule is found, no new operation object is created. The disable request is processed asynchronously. Use ListDataMaskingColumns to verify that the column has recovered to NotEncrypted or that the target rule has been removed. DeleteFailed indicates that the shutdown failed.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identity, and configuration values obtained by querying your current account.
 * Use the endpoint of the region where the target asset resides, and set the common parameter RegionId to the corresponding value, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 * This operation returns only RequestId. Request acceptance does not indicate that the business operation is complete. Poll the status as described in the operation description.
 *
 * @param request DeleteDataMaskingRuleRequest
 * @return DeleteDataMaskingRuleResponse
 */
DeleteDataMaskingRuleResponse Client::deleteDataMaskingRule(const DeleteDataMaskingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataMaskingRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the permission statistics of column encryption accounts.
 *
 * @description Queries the permission statistics of database accounts in the current region by product scope. Plaintext accounts correspond to FullAccessCount. Restricted access and decryption-prohibited accounts are counted in RestrictedAccessCount and NoneAccessCount, respectively. The number of accounts without configured permissions can be obtained by subtracting the preceding three account types from TotalCount. This operation does not accept filter conditions such as instance, database, table, or column.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identities, and configuration values obtained by querying the current account.
 * Use the endpoint of the region where the target asset resides, and set the common parameter RegionId to the corresponding value, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 *
 * @param request GetDataMaskingAccountCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataMaskingAccountCountResponse
 */
GetDataMaskingAccountCountResponse Client::getDataMaskingAccountCountWithOptions(const GetDataMaskingAccountCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductIds()) {
    query["ProductIds"] = request.getProductIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataMaskingAccountCount"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataMaskingAccountCountResponse>();
}

/**
 * @summary Queries the permission statistics of column encryption accounts.
 *
 * @description Queries the permission statistics of database accounts in the current region by product scope. Plaintext accounts correspond to FullAccessCount. Restricted access and decryption-prohibited accounts are counted in RestrictedAccessCount and NoneAccessCount, respectively. The number of accounts without configured permissions can be obtained by subtracting the preceding three account types from TotalCount. This operation does not accept filter conditions such as instance, database, table, or column.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identities, and configuration values obtained by querying the current account.
 * Use the endpoint of the region where the target asset resides, and set the common parameter RegionId to the corresponding value, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 *
 * @param request GetDataMaskingAccountCountRequest
 * @return GetDataMaskingAccountCountResponse
 */
GetDataMaskingAccountCountResponse Client::getDataMaskingAccountCount(const GetDataMaskingAccountCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataMaskingAccountCountWithOptions(request, runtime);
}

/**
 * @summary Queries column encryption statistics.
 *
 * @description Queries the total number of columns, the number of sensitive columns, the number of encrypted columns, and the number of columns that failed to be encrypted by region, product, and categorization template. This operation returns statistics card data and does not follow the instance, database name, table name, column name, or model filters in the column list.
 * For compatible with historical detection results, if no initial results are found for the specified template and no filtering by sensitivity level or detection model is applied, the results may backoff to built-in general detection results. To enforce strict template ownership, verify the results by using the sensitivity level or model conditions within the template.
 * The parameter examples are provided only to illustrate the format. Replace the values with the regions, resource identifiers, and configuration values obtained from your current account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 *
 * @param request GetDataMaskingColumnCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataMaskingColumnCountResponse
 */
GetDataMaskingColumnCountResponse Client::getDataMaskingColumnCountWithOptions(const GetDataMaskingColumnCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductIds()) {
    query["ProductIds"] = request.getProductIds();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataMaskingColumnCount"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataMaskingColumnCountResponse>();
}

/**
 * @summary Queries column encryption statistics.
 *
 * @description Queries the total number of columns, the number of sensitive columns, the number of encrypted columns, and the number of columns that failed to be encrypted by region, product, and categorization template. This operation returns statistics card data and does not follow the instance, database name, table name, column name, or model filters in the column list.
 * For compatible with historical detection results, if no initial results are found for the specified template and no filtering by sensitivity level or detection model is applied, the results may backoff to built-in general detection results. To enforce strict template ownership, verify the results by using the sensitivity level or model conditions within the template.
 * The parameter examples are provided only to illustrate the format. Replace the values with the regions, resource identifiers, and configuration values obtained from your current account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 *
 * @param request GetDataMaskingColumnCountRequest
 * @return GetDataMaskingColumnCountResponse
 */
GetDataMaskingColumnCountResponse Client::getDataMaskingColumnCount(const GetDataMaskingColumnCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataMaskingColumnCountWithOptions(request, runtime);
}

/**
 * @summary Queries the engine and kernel properties of an instance.
 *
 * @description Queries the DPI engine, current kernel version, O&M window, and KMS encryption support of an instance. After a kernel upgrade, you can read back CurrentKernelVersion to verify the target version. If ErrorCode or ErrorMessage is present, handle the property query exception first.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identity, and configuration values obtained from your current account.
 * Use the endpoint of the region where the target asset resides, and configure the common parameter RegionId in Settings, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 *
 * @param request GetInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceAttributeResponse
 */
GetInstanceAttributeResponse Client::getInstanceAttributeWithOptions(const GetInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceAttribute"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceAttributeResponse>();
}

/**
 * @summary Queries the engine and kernel properties of an instance.
 *
 * @description Queries the DPI engine, current kernel version, O&M window, and KMS encryption support of an instance. After a kernel upgrade, you can read back CurrentKernelVersion to verify the target version. If ErrorCode or ErrorMessage is present, handle the property query exception first.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identity, and configuration values obtained from your current account.
 * Use the endpoint of the region where the target asset resides, and configure the common parameter RegionId in Settings, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 *
 * @param request GetInstanceAttributeRequest
 * @return GetInstanceAttributeResponse
 */
GetInstanceAttributeResponse Client::getInstanceAttribute(const GetInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries columns and detection results of a data table.
 *
 * @description Queries columns and detection results of a data table with paging. When both DataAssetSourceId and InstanceName are specified, DataAssetSourceId takes precedence. For PostgreSQL and Oracle scenarios, you can use the schema.table format for TableName and pass in the corresponding EngineType. To query the execute status of column encryption, invoke ListDataMaskingColumns.
 * For compatible with historical detection results, if the specified template has no initial results and no filtering by sensitivity level or detection model is applied, the results may fall back to built-in general detection results. To strictly verify template ownership, use the sensitivity level or model conditions within the template for verification.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identity, and configuration values obtained from your current account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance identity must match the target asset.
 *
 * @param request ListColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListColumnsResponse
 */
ListColumnsResponse Client::listColumnsWithOptions(const ListColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDataAssetSourceId()) {
    query["DataAssetSourceId"] = request.getDataAssetSourceId();
  }

  if (!!request.hasDataSourceName()) {
    query["DataSourceName"] = request.getDataSourceName();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListColumns"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListColumnsResponse>();
}

/**
 * @summary Queries columns and detection results of a data table.
 *
 * @description Queries columns and detection results of a data table with paging. When both DataAssetSourceId and InstanceName are specified, DataAssetSourceId takes precedence. For PostgreSQL and Oracle scenarios, you can use the schema.table format for TableName and pass in the corresponding EngineType. To query the execute status of column encryption, invoke ListDataMaskingColumns.
 * For compatible with historical detection results, if the specified template has no initial results and no filtering by sensitivity level or detection model is applied, the results may fall back to built-in general detection results. To strictly verify template ownership, use the sensitivity level or model conditions within the template for verification.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identity, and configuration values obtained from your current account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance identity must match the target asset.
 *
 * @param request ListColumnsRequest
 * @return ListColumnsResponse
 */
ListColumnsResponse Client::listColumns(const ListColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listColumnsWithOptions(request, runtime);
}

/**
 * @summary Queries database accounts and column encryption permissions.
 *
 * @description Queries database accounts and their column encryption access permissions with paging. Use this operation to select plaintext accounts when creating rules, and to verify AuthRole, EncryptionKeyMode, and ExpireTime before and after modifying account permissions. AccountName filters by exact account name. The account identity is obtained from Items[].Id.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identities, and configuration values obtained from your current account query.
 * Use the endpoint of the region where the target asset resides, and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 *
 * @param request ListDataAssetAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataAssetAccountsResponse
 */
ListDataAssetAccountsResponse Client::listDataAssetAccountsWithOptions(const ListDataAssetAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAuthRole()) {
    query["AuthRole"] = request.getAuthRole();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductIds()) {
    query["ProductIds"] = request.getProductIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataAssetAccounts"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataAssetAccountsResponse>();
}

/**
 * @summary Queries database accounts and column encryption permissions.
 *
 * @description Queries database accounts and their column encryption access permissions with paging. Use this operation to select plaintext accounts when creating rules, and to verify AuthRole, EncryptionKeyMode, and ExpireTime before and after modifying account permissions. AccountName filters by exact account name. The account identity is obtained from Items[].Id.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identities, and configuration values obtained from your current account query.
 * Use the endpoint of the region where the target asset resides, and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 *
 * @param request ListDataAssetAccountsRequest
 * @return ListDataAssetAccountsResponse
 */
ListDataAssetAccountsResponse Client::listDataAssetAccounts(const ListDataAssetAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataAssetAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries the encryption status and detection results of columns.
 *
 * @description Performs a paging query on columns and their encryption status, sensitivity levels, and detection models. You can filter results by combining template, product, instance, database, table, column name, model, and sensitivity level. Use this operation to read back results after creating or shutting down a rule. Processing and Deleting are intermediate states. Failed and DeleteFailed indicate operation failures. The casing of the parameter name RiskLeveLId must be preserved as-is.
 * When querying by product, use a single ProductId or the corresponding ProductCode. Column queries do not support multi-product filtering through ProductIds. Query each product separately for multi-product scenarios.
 * For compatibility with historical detection results, if no first-page results are found for the specified template and no sensitivity level or detection model filter is applied, the results may fall back to built-in general detection results. To enforce strict template ownership, also use a level or model condition from that template for verification.
 * Parameter examples are provided only to illustrate the format. Replace them with the region, resource identifiers, and configuration values obtained from your account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, for example, cn-zhangjiakou. The product code and instance identifier must match the target asset.
 *
 * @param request ListDataMaskingColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataMaskingColumnsResponse
 */
ListDataMaskingColumnsResponse Client::listDataMaskingColumnsWithOptions(const ListDataMaskingColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnName()) {
    query["ColumnName"] = request.getColumnName();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMaskingStatus()) {
    query["MaskingStatus"] = request.getMaskingStatus();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasProductIds()) {
    query["ProductIds"] = request.getProductIds();
  }

  if (!!request.hasRiskLeveLId()) {
    query["RiskLeveLId"] = request.getRiskLeveLId();
  }

  if (!!request.hasRiskLevelIds()) {
    query["RiskLevelIds"] = request.getRiskLevelIds();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateRuleIds()) {
    query["TemplateRuleIds"] = request.getTemplateRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataMaskingColumns"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataMaskingColumnsResponse>();
}

/**
 * @summary Queries the encryption status and detection results of columns.
 *
 * @description Performs a paging query on columns and their encryption status, sensitivity levels, and detection models. You can filter results by combining template, product, instance, database, table, column name, model, and sensitivity level. Use this operation to read back results after creating or shutting down a rule. Processing and Deleting are intermediate states. Failed and DeleteFailed indicate operation failures. The casing of the parameter name RiskLeveLId must be preserved as-is.
 * When querying by product, use a single ProductId or the corresponding ProductCode. Column queries do not support multi-product filtering through ProductIds. Query each product separately for multi-product scenarios.
 * For compatibility with historical detection results, if no first-page results are found for the specified template and no sensitivity level or detection model filter is applied, the results may fall back to built-in general detection results. To enforce strict template ownership, also use a level or model condition from that template for verification.
 * Parameter examples are provided only to illustrate the format. Replace them with the region, resource identifiers, and configuration values obtained from your account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, for example, cn-zhangjiakou. The product code and instance identifier must match the target asset.
 *
 * @param request ListDataMaskingColumnsRequest
 * @return ListDataMaskingColumnsResponse
 */
ListDataMaskingColumnsResponse Client::listDataMaskingColumns(const ListDataMaskingColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataMaskingColumnsWithOptions(request, runtime);
}

/**
 * @summary Queries the column encryption algorithms supported by an instance.
 *
 * @description Queries the available column encryption algorithms for a specified instance and the restriction reasons for each algorithm. Before selecting an algorithm, check the ErrorCode and ErrorMessage of the corresponding entry. Do not assume that all instances support the same set of algorithms.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identifiers, and configuration values obtained from your current account.
 * Use the service registration endpoint of the region where the target asset resides, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance identifier must match the target asset.
 *
 * @param request ListDataMaskingEncryptionAlgorithmsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataMaskingEncryptionAlgorithmsResponse
 */
ListDataMaskingEncryptionAlgorithmsResponse Client::listDataMaskingEncryptionAlgorithmsWithOptions(const ListDataMaskingEncryptionAlgorithmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataMaskingEncryptionAlgorithms"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataMaskingEncryptionAlgorithmsResponse>();
}

/**
 * @summary Queries the column encryption algorithms supported by an instance.
 *
 * @description Queries the available column encryption algorithms for a specified instance and the restriction reasons for each algorithm. Before selecting an algorithm, check the ErrorCode and ErrorMessage of the corresponding entry. Do not assume that all instances support the same set of algorithms.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identifiers, and configuration values obtained from your current account.
 * Use the service registration endpoint of the region where the target asset resides, and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance identifier must match the target asset.
 *
 * @param request ListDataMaskingEncryptionAlgorithmsRequest
 * @return ListDataMaskingEncryptionAlgorithmsResponse
 */
ListDataMaskingEncryptionAlgorithmsResponse Client::listDataMaskingEncryptionAlgorithms(const ListDataMaskingEncryptionAlgorithmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataMaskingEncryptionAlgorithmsWithOptions(request, runtime);
}

/**
 * @summary Queries column encryption instances.
 *
 * @description Queries column encryption instances by paging and supports filtering by product, detection template, and database/table/column. Instance-level status filtering differs from column-level status filtering in scope. To find all unencrypted sensitive columns, first enumerate the instances of the target product, and then use ListDataMaskingColumns to filter by NotEncrypted. This prevents you from missing instances that are partially encrypted.
 * To filter precisely by EngineType, read all candidate pages and then filter by the returned values. Some query paths do not apply this parameter. The matching semantics of InstanceId vary depending on the query combination. To precisely locate an instance, verify the complete instance identity in the response.
 * The parameter examples are provided only to illustrate the format. Replace the values with the region IDs, resource identities, and configuration values that you obtain from your account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 *
 * @param request ListDataMaskingInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataMaskingInstancesResponse
 */
ListDataMaskingInstancesResponse Client::listDataMaskingInstancesWithOptions(const ListDataMaskingInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnName()) {
    query["ColumnName"] = request.getColumnName();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMaskingStatus()) {
    query["MaskingStatus"] = request.getMaskingStatus();
  }

  if (!!request.hasModelTagId()) {
    query["ModelTagId"] = request.getModelTagId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasProductIds()) {
    query["ProductIds"] = request.getProductIds();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasRiskLevelIds()) {
    query["RiskLevelIds"] = request.getRiskLevelIds();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateRuleIds()) {
    query["TemplateRuleIds"] = request.getTemplateRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataMaskingInstances"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataMaskingInstancesResponse>();
}

/**
 * @summary Queries column encryption instances.
 *
 * @description Queries column encryption instances by paging and supports filtering by product, detection template, and database/table/column. Instance-level status filtering differs from column-level status filtering in scope. To find all unencrypted sensitive columns, first enumerate the instances of the target product, and then use ListDataMaskingColumns to filter by NotEncrypted. This prevents you from missing instances that are partially encrypted.
 * To filter precisely by EngineType, read all candidate pages and then filter by the returned values. Some query paths do not apply this parameter. The matching semantics of InstanceId vary depending on the query combination. To precisely locate an instance, verify the complete instance identity in the response.
 * The parameter examples are provided only to illustrate the format. Replace the values with the region IDs, resource identities, and configuration values that you obtain from your account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 *
 * @param request ListDataMaskingInstancesRequest
 * @return ListDataMaskingInstancesResponse
 */
ListDataMaskingInstancesResponse Client::listDataMaskingInstances(const ListDataMaskingInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataMaskingInstancesWithOptions(request, runtime);
}

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
ListDataSourcesResponse Client::listDataSourcesWithOptions(const ListDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectStatus()) {
    query["ConnectStatus"] = request.getConnectStatus();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDataAssetId()) {
    query["DataAssetId"] = request.getDataAssetId();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasIdentifyStatus()) {
    query["IdentifyStatus"] = request.getIdentifyStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSources"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourcesResponse>();
}

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
ListDataSourcesResponse Client::listDataSources(const ListDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the sensitive data detection models of a template.
 *
 * @description Queries the valid sensitive data detection models within a specified template and returns RuleList. If TemplateId is not specified, the currently enabled template is used. Use RuleList[].Id to obtain model identifiers, which can be used for filtering with TemplateRuleIds.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identifiers, and configuration values obtained from your account.
 *
 * @param request ListIdentifyModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIdentifyModelsResponse
 */
ListIdentifyModelsResponse Client::listIdentifyModelsWithOptions(const ListIdentifyModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasFilterAuditModel()) {
    query["FilterAuditModel"] = request.getFilterAuditModel();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIdentifyModels"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIdentifyModelsResponse>();
}

/**
 * @summary Queries the sensitive data detection models of a template.
 *
 * @description Queries the valid sensitive data detection models within a specified template and returns RuleList. If TemplateId is not specified, the currently enabled template is used. Use RuleList[].Id to obtain model identifiers, which can be used for filtering with TemplateRuleIds.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identifiers, and configuration values obtained from your account.
 *
 * @param request ListIdentifyModelsRequest
 * @return ListIdentifyModelsResponse
 */
ListIdentifyModelsResponse Client::listIdentifyModels(const ListIdentifyModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIdentifyModelsWithOptions(request, runtime);
}

/**
 * @summary Queries the available KMS keys for column encryption.
 *
 * @description Queries the available KMS key identities and aliases for column encryption configuration of a specified instance. Before using a KMS key, verify the key status and usage conditions by invoking the DescribeKey operation of KMS. This operation does not return key plaintext.
 * The parameter examples are provided only to illustrate the format. Replace them with the regions, resource identities, and configuration values obtained from your current account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 *
 * @param request ListKmsKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKmsKeysResponse
 */
ListKmsKeysResponse Client::listKmsKeysWithOptions(const ListKmsKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKmsKeys"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKmsKeysResponse>();
}

/**
 * @summary Queries the available KMS keys for column encryption.
 *
 * @description Queries the available KMS key identities and aliases for column encryption configuration of a specified instance. Before using a KMS key, verify the key status and usage conditions by invoking the DescribeKey operation of KMS. This operation does not return key plaintext.
 * The parameter examples are provided only to illustrate the format. Replace them with the regions, resource identities, and configuration values obtained from your current account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 *
 * @param request ListKmsKeysRequest
 * @return ListKmsKeysResponse
 */
ListKmsKeysResponse Client::listKmsKeys(const ListKmsKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listKmsKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the available kernel versions for upgrade.
 *
 * @description Queries the kernel versions available for an instance. When upgrading, select the target version from KernelVersions[].KernelVersion. Do not manually construct version numbers.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identity, and configuration values obtained from your current account.
 * Use the endpoint of the region where the target asset resides, and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 *
 * @param request ListMiniEngineVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMiniEngineVersionsResponse
 */
ListMiniEngineVersionsResponse Client::listMiniEngineVersionsWithOptions(const ListMiniEngineVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMiniEngineVersions"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMiniEngineVersionsResponse>();
}

/**
 * @summary Queries the available kernel versions for upgrade.
 *
 * @description Queries the kernel versions available for an instance. When upgrading, select the target version from KernelVersions[].KernelVersion. Do not manually construct version numbers.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identity, and configuration values obtained from your current account.
 * Use the endpoint of the region where the target asset resides, and set the common parameter RegionId, such as cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 *
 * @param request ListMiniEngineVersionsRequest
 * @return ListMiniEngineVersionsResponse
 */
ListMiniEngineVersionsResponse Client::listMiniEngineVersions(const ListMiniEngineVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMiniEngineVersionsWithOptions(request, runtime);
}

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
ListRegionsResponse Client::listRegionsWithOptions(const ListRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudited()) {
    query["Audited"] = request.getAudited();
  }

  if (!!request.hasIdentified()) {
    query["Identified"] = request.getIdentified();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLoadAll()) {
    query["LoadAll"] = request.getLoadAll();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRegions"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegionsResponse>();
}

/**
 * @summary Queries the regions where assets are located.
 *
 * @description Queries the list of regions where the assets owned by the current account are located. You can use this list to select the RegionId for subsequent region-specific API operations. You can filter the regions based on whether auditing or detection is enabled. The returned region list is not the same as the list of all regions supported by Alibaba Cloud services.
 * The parameter examples are for format illustration only. When you call this operation, replace them with the regions, resource identifiers, and configuration values queried from the current account.
 *
 * @param request ListRegionsRequest
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegions(const ListRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the sensitivity levels of a template.
 *
 * @description Queries the sensitivity levels in a data classification template. Use the returned level ID for subsequent queries. Do not use level names such as S1 or S2 directly as the RiskLevelId.
 * The parameter examples are provided only to illustrate the format. Replace them with the regions, resource identifiers, and configuration values obtained from your account.
 *
 * @param request ListRiskLevelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRiskLevelsResponse
 */
ListRiskLevelsResponse Client::listRiskLevelsWithOptions(const ListRiskLevelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRiskLevels"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRiskLevelsResponse>();
}

/**
 * @summary Queries the sensitivity levels of a template.
 *
 * @description Queries the sensitivity levels in a data classification template. Use the returned level ID for subsequent queries. Do not use level names such as S1 or S2 directly as the RiskLevelId.
 * The parameter examples are provided only to illustrate the format. Replace them with the regions, resource identifiers, and configuration values obtained from your account.
 *
 * @param request ListRiskLevelsRequest
 * @return ListRiskLevelsResponse
 */
ListRiskLevelsResponse Client::listRiskLevels(const ListRiskLevelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRiskLevelsWithOptions(request, runtime);
}

/**
 * @summary Queries database tables.
 *
 * @description Performs a paging query on data tables and detection results in a database. For relational database scenarios, set DataAssetSourceId to the instance identity and DataSourceName to the database name. Table names in PostgreSQL and Oracle may include a schema prefix. Pass the table name as-is in subsequent column queries.
 * For compatibility with historical detection results, if no results are found on the first page for the specified template and no filtering by sensitivity level or detection model is applied, the results may backoff to built-in general detection results. To strictly verify template ownership, also use the sensitivity level or model conditions within the template.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identities, and configuration values obtained from your current account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance identity must match the target asset.
 *
 * @param request ListTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTablesWithOptions(const ListTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDataAssetSourceId()) {
    query["DataAssetSourceId"] = request.getDataAssetSourceId();
  }

  if (!!request.hasDataSourceName()) {
    query["DataSourceName"] = request.getDataSourceName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTables"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTablesResponse>();
}

/**
 * @summary Queries database tables.
 *
 * @description Performs a paging query on data tables and detection results in a database. For relational database scenarios, set DataAssetSourceId to the instance identity and DataSourceName to the database name. Table names in PostgreSQL and Oracle may include a schema prefix. Pass the table name as-is in subsequent column queries.
 * For compatibility with historical detection results, if no results are found on the first page for the specified template and no filtering by sensitivity level or detection model is applied, the results may backoff to built-in general detection results. To strictly verify template ownership, also use the sensitivity level or model conditions within the template.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identities, and configuration values obtained from your current account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, such as cn-zhangjiakou. The product code and instance identity must match the target asset.
 *
 * @param request ListTablesRequest
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTables(const ListTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTablesWithOptions(request, runtime);
}

/**
 * @summary Queries classification and grading templates.
 *
 * @description Queries the classification and grading templates available to the current account. Use Items[].Id as the TemplateId for subsequent API calls. Detection models and sensitivity levels must come from the same template.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identifiers, and configuration values obtained from your current account.
 *
 * @param request ListTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplatesWithOptions(const ListTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUsageScenario()) {
    query["UsageScenario"] = request.getUsageScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTemplates"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplatesResponse>();
}

/**
 * @summary Queries classification and grading templates.
 *
 * @description Queries the classification and grading templates available to the current account. Use Items[].Id as the TemplateId for subsequent API calls. Detection models and sensitivity levels must come from the same template.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identifiers, and configuration values obtained from your current account.
 *
 * @param request ListTemplatesRequest
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplates(const ListTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the summary of sensitive data.
 *
 * @description Queries the statistics of sensitive data from the overview, data catalog, or aggregated by region. CountType=41 returns overview statistics, 42 returns data catalog statistics for a specified product, and 43 returns data aggregated by region and template. The column encryption console uses CountType=43 with ProductCodeList to obtain region and template candidates. The statistics may come from pre-generated summary results and do not indicate that a recently initiated synchronization or encryption operation has completed.
 * The parameter examples are provided only to illustrate the format. Replace them with the regions, resource identifiers, and configuration values obtained by querying your current account.
 *
 * @param request ListTotalSensitiveInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTotalSensitiveInfoResponse
 */
ListTotalSensitiveInfoResponse Client::listTotalSensitiveInfoWithOptions(const ListTotalSensitiveInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCountType()) {
    query["CountType"] = request.getCountType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductCodeList()) {
    query["ProductCodeList"] = request.getProductCodeList();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTotalSensitiveInfo"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTotalSensitiveInfoResponse>();
}

/**
 * @summary Queries the summary of sensitive data.
 *
 * @description Queries the statistics of sensitive data from the overview, data catalog, or aggregated by region. CountType=41 returns overview statistics, 42 returns data catalog statistics for a specified product, and 43 returns data aggregated by region and template. The column encryption console uses CountType=43 with ProductCodeList to obtain region and template candidates. The statistics may come from pre-generated summary results and do not indicate that a recently initiated synchronization or encryption operation has completed.
 * The parameter examples are provided only to illustrate the format. Replace them with the regions, resource identifiers, and configuration values obtained by querying your current account.
 *
 * @param request ListTotalSensitiveInfoRequest
 * @return ListTotalSensitiveInfoResponse
 */
ListTotalSensitiveInfoResponse Client::listTotalSensitiveInfo(const ListTotalSensitiveInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTotalSensitiveInfoWithOptions(request, runtime);
}

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
SyncDataAssetsResponse Client::syncDataAssetsWithOptions(const SyncDataAssetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncDataAssets"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncDataAssetsResponse>();
}

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
SyncDataAssetsResponse Client::syncDataAssets(const SyncDataAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncDataAssetsWithOptions(request, runtime);
}

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
UpdateDataMaskingEncryptionAlgorithmResponse Client::updateDataMaskingEncryptionAlgorithmWithOptions(const UpdateDataMaskingEncryptionAlgorithmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptionAlgorithm()) {
    query["EncryptionAlgorithm"] = request.getEncryptionAlgorithm();
  }

  if (!!request.hasEncryptionKeyId()) {
    query["EncryptionKeyId"] = request.getEncryptionKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataMaskingEncryptionAlgorithm"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataMaskingEncryptionAlgorithmResponse>();
}

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
UpdateDataMaskingEncryptionAlgorithmResponse Client::updateDataMaskingEncryptionAlgorithm(const UpdateDataMaskingEncryptionAlgorithmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataMaskingEncryptionAlgorithmWithOptions(request, runtime);
}

/**
 * @summary Sets column encryption permissions for database accounts in batches.
 *
 * @description Sets the same column encryption access permissions for a batch of database accounts. UserList can contain accounts from different instances under the same product and region. Each entry must include InstanceId and AccountId. fullAccess allows plaintext access, restrictedAccess allows restricted access, and noneAccess denies decryption and is supported only for specific DPI engines and key patterns. Only fullAccess supports configuring a validity period. After a successful request, invoke ListDataAssetAccounts to verify the results.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identities, and configuration values obtained from your account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, for example, cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 * This operation returns only RequestId. A successful request does not indicate that the operation is complete. Verify the status by invoking the corresponding query operation as described in the operation description.
 *
 * @param tmpReq UpdateDataMaskingUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataMaskingUsersResponse
 */
UpdateDataMaskingUsersResponse Client::updateDataMaskingUsersWithOptions(const UpdateDataMaskingUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataMaskingUsersShrinkRequest request = UpdateDataMaskingUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserList()) {
    request.setUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserList(), "UserList", "json"));
  }

  json query = {};
  if (!!request.hasAuthRole()) {
    query["AuthRole"] = request.getAuthRole();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasExpireTimeOperation()) {
    query["ExpireTimeOperation"] = request.getExpireTimeOperation();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasUserListShrink()) {
    query["UserList"] = request.getUserListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataMaskingUsers"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataMaskingUsersResponse>();
}

/**
 * @summary Sets column encryption permissions for database accounts in batches.
 *
 * @description Sets the same column encryption access permissions for a batch of database accounts. UserList can contain accounts from different instances under the same product and region. Each entry must include InstanceId and AccountId. fullAccess allows plaintext access, restrictedAccess allows restricted access, and noneAccess denies decryption and is supported only for specific DPI engines and key patterns. Only fullAccess supports configuring a validity period. After a successful request, invoke ListDataAssetAccounts to verify the results.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identities, and configuration values obtained from your account.
 * Use the endpoint of the region where the target asset resides and set the common parameter RegionId, for example, cn-zhangjiakou. The product encoding and instance identity must match the target asset.
 * This operation returns only RequestId. A successful request does not indicate that the operation is complete. Verify the status by invoking the corresponding query operation as described in the operation description.
 *
 * @param request UpdateDataMaskingUsersRequest
 * @return UpdateDataMaskingUsersResponse
 */
UpdateDataMaskingUsersResponse Client::updateDataMaskingUsers(const UpdateDataMaskingUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataMaskingUsersWithOptions(request, runtime);
}

/**
 * @summary Upgrades the database kernel of an instance.
 *
 * @description Upgrades the database kernel of a specified instance at the selected time. Invoke ListMiniEngineVersions first to select a version, and check the current instance status and maintenance window. SpecifyTime requires a future SwitchTime value. PolarDB-X 2.0 does not support this time option. The upgrade is an asynchronous operation. Read back the CurrentKernelVersion field from GetInstanceAttribute to verify the result.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identity, and configuration values obtained from your current account.
 * Use the service registration endpoint of the region where the target asset resides, and configure the common parameter RegionId to the corresponding value, for example, cn-zhangjiakou. The product code and instance identity must match the target asset.
 * This operation returns only a RequestId. A successful request does not mean the operation is complete. Read back the status as described in the operation description.
 *
 * @param request UpgradeKernelVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeKernelVersionResponse
 */
UpgradeKernelVersionResponse Client::upgradeKernelVersionWithOptions(const UpgradeKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKernelVersion()) {
    query["KernelVersion"] = request.getKernelVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasUpgradeTime()) {
    query["UpgradeTime"] = request.getUpgradeTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeKernelVersion"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeKernelVersionResponse>();
}

/**
 * @summary Upgrades the database kernel of an instance.
 *
 * @description Upgrades the database kernel of a specified instance at the selected time. Invoke ListMiniEngineVersions first to select a version, and check the current instance status and maintenance window. SpecifyTime requires a future SwitchTime value. PolarDB-X 2.0 does not support this time option. The upgrade is an asynchronous operation. Read back the CurrentKernelVersion field from GetInstanceAttribute to verify the result.
 * The parameter examples are provided only to illustrate the format. Replace them with the region, resource identity, and configuration values obtained from your current account.
 * Use the service registration endpoint of the region where the target asset resides, and configure the common parameter RegionId to the corresponding value, for example, cn-zhangjiakou. The product code and instance identity must match the target asset.
 * This operation returns only a RequestId. A successful request does not mean the operation is complete. Read back the status as described in the operation description.
 *
 * @param request UpgradeKernelVersionRequest
 * @return UpgradeKernelVersionResponse
 */
UpgradeKernelVersionResponse Client::upgradeKernelVersion(const UpgradeKernelVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeKernelVersionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Sddp20260120