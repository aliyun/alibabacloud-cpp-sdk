#include <darabonba/Core.hpp>
#include <alibabacloud/DlfNext20250310.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::DlfNext20250310::Models;
namespace AlibabaCloud
{
namespace DlfNext20250310
{

AlibabaCloud::DlfNext20250310::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("dlfnext", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 更新数据目录
 *
 * @param request AlterCatalogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AlterCatalogResponse
 */
AlterCatalogResponse Client::alterCatalogWithOptions(const string &catalog, const AlterCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRemovals()) {
    body["removals"] = request.getRemovals();
  }

  if (!!request.hasUpdates()) {
    body["updates"] = request.getUpdates();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AlterCatalog"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/catalogs/" , Darabonba::Encode::Encoder::percentEncode(catalog))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AlterCatalogResponse>();
}

/**
 * @summary 更新数据目录
 *
 * @param request AlterCatalogRequest
 * @return AlterCatalogResponse
 */
AlterCatalogResponse Client::alterCatalog(const string &catalog, const AlterCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return alterCatalogWithOptions(catalog, request, headers, runtime);
}

/**
 * @summary 更新数据库
 *
 * @param request AlterDatabaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AlterDatabaseResponse
 */
AlterDatabaseResponse Client::alterDatabaseWithOptions(const string &catalogId, const string &database, const AlterDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRemovals()) {
    body["removals"] = request.getRemovals();
  }

  if (!!request.hasUpdates()) {
    body["updates"] = request.getUpdates();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AlterDatabase"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AlterDatabaseResponse>();
}

/**
 * @summary 更新数据库
 *
 * @param request AlterDatabaseRequest
 * @return AlterDatabaseResponse
 */
AlterDatabaseResponse Client::alterDatabase(const string &catalogId, const string &database, const AlterDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return alterDatabaseWithOptions(catalogId, database, request, headers, runtime);
}

/**
 * @summary 更新接收者
 *
 * @param request AlterReceiverRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AlterReceiverResponse
 */
AlterReceiverResponse Client::alterReceiverWithOptions(const string &receiver, const AlterReceiverRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComment()) {
    body["comment"] = request.getComment();
  }

  if (!!request.hasReceiverName()) {
    body["receiverName"] = request.getReceiverName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AlterReceiver"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/share/receivers/" , Darabonba::Encode::Encoder::percentEncode(receiver))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AlterReceiverResponse>();
}

/**
 * @summary 更新接收者
 *
 * @param request AlterReceiverRequest
 * @return AlterReceiverResponse
 */
AlterReceiverResponse Client::alterReceiver(const string &receiver, const AlterReceiverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return alterReceiverWithOptions(receiver, request, headers, runtime);
}

/**
 * @summary 更新共享
 *
 * @param request AlterShareRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AlterShareResponse
 */
AlterShareResponse Client::alterShareWithOptions(const string &share, const AlterShareRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComment()) {
    body["comment"] = request.getComment();
  }

  if (!!request.hasEnableWrite()) {
    body["enableWrite"] = request.getEnableWrite();
  }

  if (!!request.hasShareName()) {
    body["shareName"] = request.getShareName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AlterShare"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/share/shares/" , Darabonba::Encode::Encoder::percentEncode(share))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AlterShareResponse>();
}

/**
 * @summary 更新共享
 *
 * @param request AlterShareRequest
 * @return AlterShareResponse
 */
AlterShareResponse Client::alterShare(const string &share, const AlterShareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return alterShareWithOptions(share, request, headers, runtime);
}

/**
 * @summary 更新共享中的接收者
 *
 * @param request AlterShareReceiversRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AlterShareReceiversResponse
 */
AlterShareReceiversResponse Client::alterShareReceiversWithOptions(const string &share, const AlterShareReceiversRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddedReceivers()) {
    body["addedReceivers"] = request.getAddedReceivers();
  }

  if (!!request.hasRemovedReceivers()) {
    body["removedReceivers"] = request.getRemovedReceivers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AlterShareReceivers"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/share/shares/" , Darabonba::Encode::Encoder::percentEncode(share) , "/receivers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AlterShareReceiversResponse>();
}

/**
 * @summary 更新共享中的接收者
 *
 * @param request AlterShareReceiversRequest
 * @return AlterShareReceiversResponse
 */
AlterShareReceiversResponse Client::alterShareReceivers(const string &share, const AlterShareReceiversRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return alterShareReceiversWithOptions(share, request, headers, runtime);
}

/**
 * @summary 更改共享资源
 *
 * @param request AlterShareResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AlterShareResourcesResponse
 */
AlterShareResourcesResponse Client::alterShareResourcesWithOptions(const string &share, const AlterShareResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["catalogId"] = request.getCatalogId();
  }

  if (!!request.hasShareResourceList()) {
    body["shareResourceList"] = request.getShareResourceList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AlterShareResources"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/share/shares/" , Darabonba::Encode::Encoder::percentEncode(share) , "/resources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AlterShareResourcesResponse>();
}

/**
 * @summary 更改共享资源
 *
 * @param request AlterShareResourcesRequest
 * @return AlterShareResourcesResponse
 */
AlterShareResourcesResponse Client::alterShareResources(const string &share, const AlterShareResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return alterShareResourcesWithOptions(share, request, headers, runtime);
}

/**
 * @summary 更改Table
 *
 * @param request AlterTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AlterTableResponse
 */
AlterTableResponse Client::alterTableWithOptions(const string &catalogId, const string &database, const string &table, const AlterTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChanges()) {
    body["changes"] = request.getChanges();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AlterTable"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AlterTableResponse>();
}

/**
 * @summary 更改Table
 *
 * @param request AlterTableRequest
 * @return AlterTableResponse
 */
AlterTableResponse Client::alterTable(const string &catalogId, const string &database, const string &table, const AlterTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return alterTableWithOptions(catalogId, database, table, request, headers, runtime);
}

/**
 * @summary 批量授权
 *
 * @param request BatchGrantPermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGrantPermissionsResponse
 */
BatchGrantPermissionsResponse Client::batchGrantPermissionsWithOptions(const string &catalogId, const BatchGrantPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPermissions()) {
    body["permissions"] = request.getPermissions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchGrantPermissions"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/permissions/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/batchgrant")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGrantPermissionsResponse>();
}

/**
 * @summary 批量授权
 *
 * @param request BatchGrantPermissionsRequest
 * @return BatchGrantPermissionsResponse
 */
BatchGrantPermissionsResponse Client::batchGrantPermissions(const string &catalogId, const BatchGrantPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchGrantPermissionsWithOptions(catalogId, request, headers, runtime);
}

/**
 * @summary 批量取消授权
 *
 * @param request BatchRevokePermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchRevokePermissionsResponse
 */
BatchRevokePermissionsResponse Client::batchRevokePermissionsWithOptions(const string &catalogId, const BatchRevokePermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPermissions()) {
    body["permissions"] = request.getPermissions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchRevokePermissions"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/permissions/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/batchrevoke")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchRevokePermissionsResponse>();
}

/**
 * @summary 批量取消授权
 *
 * @param request BatchRevokePermissionsRequest
 * @return BatchRevokePermissionsResponse
 */
BatchRevokePermissionsResponse Client::batchRevokePermissions(const string &catalogId, const BatchRevokePermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchRevokePermissionsWithOptions(catalogId, request, headers, runtime);
}

/**
 * @summary 创建数据目录
 *
 * @param request CreateCatalogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCatalogResponse
 */
CreateCatalogResponse Client::createCatalogWithOptions(const CreateCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIsShared()) {
    body["isShared"] = request.getIsShared();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOptions()) {
    body["options"] = request.getOptions();
  }

  if (!!request.hasShareId()) {
    body["shareId"] = request.getShareId();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCatalog"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/catalogs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCatalogResponse>();
}

/**
 * @summary 创建数据目录
 *
 * @param request CreateCatalogRequest
 * @return CreateCatalogResponse
 */
CreateCatalogResponse Client::createCatalog(const CreateCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCatalogWithOptions(request, headers, runtime);
}

/**
 * @summary 创建数据库
 *
 * @param request CreateDatabaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatabaseResponse
 */
CreateDatabaseResponse Client::createDatabaseWithOptions(const string &catalogId, const CreateDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOptions()) {
    body["options"] = request.getOptions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDatabase"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatabaseResponse>();
}

/**
 * @summary 创建数据库
 *
 * @param request CreateDatabaseRequest
 * @return CreateDatabaseResponse
 */
CreateDatabaseResponse Client::createDatabase(const string &catalogId, const CreateDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDatabaseWithOptions(catalogId, request, headers, runtime);
}

/**
 * @summary 创建接收者
 *
 * @param request CreateReceiverRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateReceiverResponse
 */
CreateReceiverResponse Client::createReceiverWithOptions(const CreateReceiverRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComment()) {
    body["comment"] = request.getComment();
  }

  if (!!request.hasReceiverName()) {
    body["receiverName"] = request.getReceiverName();
  }

  if (!!request.hasReceiverTenantId()) {
    body["receiverTenantId"] = request.getReceiverTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateReceiver"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/share/receivers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateReceiverResponse>();
}

/**
 * @summary 创建接收者
 *
 * @param request CreateReceiverRequest
 * @return CreateReceiverResponse
 */
CreateReceiverResponse Client::createReceiver(const CreateReceiverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createReceiverWithOptions(request, headers, runtime);
}

/**
 * @summary 创建角色
 *
 * @param request CreateRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRoleWithOptions(const CreateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasRoleName()) {
    body["roleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRole"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/roles")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRoleResponse>();
}

/**
 * @summary 创建角色
 *
 * @param request CreateRoleRequest
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRole(const CreateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRoleWithOptions(request, headers, runtime);
}

/**
 * @summary 创建共享
 *
 * @param request CreateShareRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateShareResponse
 */
CreateShareResponse Client::createShareWithOptions(const CreateShareRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComment()) {
    body["comment"] = request.getComment();
  }

  if (!!request.hasEnableWrite()) {
    body["enableWrite"] = request.getEnableWrite();
  }

  if (!!request.hasShareName()) {
    body["shareName"] = request.getShareName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateShare"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/share/shares")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateShareResponse>();
}

/**
 * @summary 创建共享
 *
 * @param request CreateShareRequest
 * @return CreateShareResponse
 */
CreateShareResponse Client::createShare(const CreateShareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createShareWithOptions(request, headers, runtime);
}

/**
 * @summary 创建表
 *
 * @param request CreateTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTableResponse
 */
CreateTableResponse Client::createTableWithOptions(const string &catalogId, const string &database, const CreateTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentifier()) {
    body["identifier"] = request.getIdentifier();
  }

  if (!!request.hasSchema()) {
    body["schema"] = request.getSchema();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTable"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/tables")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTableResponse>();
}

/**
 * @summary 创建表
 *
 * @param request CreateTableRequest
 * @return CreateTableResponse
 */
CreateTableResponse Client::createTable(const string &catalogId, const string &database, const CreateTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTableWithOptions(catalogId, database, request, headers, runtime);
}

/**
 * @summary 删除角色
 *
 * @param request DeleteRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRoleWithOptions(const DeleteRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRolePrincipal()) {
    query["rolePrincipal"] = request.getRolePrincipal();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRole"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/roles")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRoleResponse>();
}

/**
 * @summary 删除角色
 *
 * @param request DeleteRoleRequest
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRole(const DeleteRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRoleWithOptions(request, headers, runtime);
}

/**
 * @summary 查询 DLF 开通地域
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/service/regions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary 查询 DLF 开通地域
 *
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(headers, runtime);
}

/**
 * @summary 删除数据湖Catalog
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DropCatalogResponse
 */
DropCatalogResponse Client::dropCatalogWithOptions(const string &catalog, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DropCatalog"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/catalogs/" , Darabonba::Encode::Encoder::percentEncode(catalog))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DropCatalogResponse>();
}

/**
 * @summary 删除数据湖Catalog
 *
 * @return DropCatalogResponse
 */
DropCatalogResponse Client::dropCatalog(const string &catalog) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return dropCatalogWithOptions(catalog, headers, runtime);
}

/**
 * @summary 删除数据库
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DropDatabaseResponse
 */
DropDatabaseResponse Client::dropDatabaseWithOptions(const string &catalogId, const string &database, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DropDatabase"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DropDatabaseResponse>();
}

/**
 * @summary 删除数据库
 *
 * @return DropDatabaseResponse
 */
DropDatabaseResponse Client::dropDatabase(const string &catalogId, const string &database) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return dropDatabaseWithOptions(catalogId, database, headers, runtime);
}

/**
 * @summary 删除接收者
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DropReceiverResponse
 */
DropReceiverResponse Client::dropReceiverWithOptions(const string &receiver, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DropReceiver"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/share/receivers/" , Darabonba::Encode::Encoder::percentEncode(receiver))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DropReceiverResponse>();
}

/**
 * @summary 删除接收者
 *
 * @return DropReceiverResponse
 */
DropReceiverResponse Client::dropReceiver(const string &receiver) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return dropReceiverWithOptions(receiver, headers, runtime);
}

/**
 * @summary 删除共享
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DropShareResponse
 */
DropShareResponse Client::dropShareWithOptions(const string &share, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DropShare"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/share/shares/" , Darabonba::Encode::Encoder::percentEncode(share))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DropShareResponse>();
}

/**
 * @summary 删除共享
 *
 * @return DropShareResponse
 */
DropShareResponse Client::dropShare(const string &share) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return dropShareWithOptions(share, headers, runtime);
}

/**
 * @summary 删除表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DropTableResponse
 */
DropTableResponse Client::dropTableWithOptions(const string &catalogId, const string &database, const string &table, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DropTable"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DropTableResponse>();
}

/**
 * @summary 删除表
 *
 * @return DropTableResponse
 */
DropTableResponse Client::dropTable(const string &catalogId, const string &database, const string &table) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return dropTableWithOptions(catalogId, database, table, headers, runtime);
}

/**
 * @summary 查看数据湖Catalog
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCatalogResponse
 */
GetCatalogResponse Client::getCatalogWithOptions(const string &catalog, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCatalog"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/catalogs/" , Darabonba::Encode::Encoder::percentEncode(catalog))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCatalogResponse>();
}

/**
 * @summary 查看数据湖Catalog
 *
 * @return GetCatalogResponse
 */
GetCatalogResponse Client::getCatalog(const string &catalog) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCatalogWithOptions(catalog, headers, runtime);
}

/**
 * @summary 查看数据湖Catalog
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCatalogByIdResponse
 */
GetCatalogByIdResponse Client::getCatalogByIdWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCatalogById"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/catalogs/id/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCatalogByIdResponse>();
}

/**
 * @summary 查看数据湖Catalog
 *
 * @return GetCatalogByIdResponse
 */
GetCatalogByIdResponse Client::getCatalogById(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCatalogByIdWithOptions(id, headers, runtime);
}

/**
 * @summary 查看表
 *
 * @param request GetCatalogSummaryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCatalogSummaryResponse
 */
GetCatalogSummaryResponse Client::getCatalogSummaryWithOptions(const string &catalogId, const GetCatalogSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDate()) {
    query["date"] = request.getDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCatalogSummary"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/storage-summary")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCatalogSummaryResponse>();
}

/**
 * @summary 查看表
 *
 * @param request GetCatalogSummaryRequest
 * @return GetCatalogSummaryResponse
 */
GetCatalogSummaryResponse Client::getCatalogSummary(const string &catalogId, const GetCatalogSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCatalogSummaryWithOptions(catalogId, request, headers, runtime);
}

/**
 * @summary 查看表
 *
 * @param request GetCatalogSummaryTrendRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCatalogSummaryTrendResponse
 */
GetCatalogSummaryTrendResponse Client::getCatalogSummaryTrendWithOptions(const string &catalogId, const GetCatalogSummaryTrendRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["endDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["startDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCatalogSummaryTrend"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/storage-summary/trend")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCatalogSummaryTrendResponse>();
}

/**
 * @summary 查看表
 *
 * @param request GetCatalogSummaryTrendRequest
 * @return GetCatalogSummaryTrendResponse
 */
GetCatalogSummaryTrendResponse Client::getCatalogSummaryTrend(const string &catalogId, const GetCatalogSummaryTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCatalogSummaryTrendWithOptions(catalogId, request, headers, runtime);
}

/**
 * @summary 获取数据湖Catalog的临时访问凭证
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCatalogTokenResponse
 */
GetCatalogTokenResponse Client::getCatalogTokenWithOptions(const string &catalog, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCatalogToken"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/catalogs/" , Darabonba::Encode::Encoder::percentEncode(catalog) , "/token")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCatalogTokenResponse>();
}

/**
 * @summary 获取数据湖Catalog的临时访问凭证
 *
 * @return GetCatalogTokenResponse
 */
GetCatalogTokenResponse Client::getCatalogToken(const string &catalog) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCatalogTokenWithOptions(catalog, headers, runtime);
}

/**
 * @summary 查看数据库
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatabaseResponse
 */
GetDatabaseResponse Client::getDatabaseWithOptions(const string &catalogId, const string &database, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatabase"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatabaseResponse>();
}

/**
 * @summary 查看数据库
 *
 * @return GetDatabaseResponse
 */
GetDatabaseResponse Client::getDatabase(const string &catalogId, const string &database) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatabaseWithOptions(catalogId, database, headers, runtime);
}

/**
 * @summary 查看表
 *
 * @param request GetDatabaseSummaryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatabaseSummaryResponse
 */
GetDatabaseSummaryResponse Client::getDatabaseSummaryWithOptions(const string &catalogId, const string &database, const GetDatabaseSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDate()) {
    query["date"] = request.getDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatabaseSummary"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/storage-summary")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatabaseSummaryResponse>();
}

/**
 * @summary 查看表
 *
 * @param request GetDatabaseSummaryRequest
 * @return GetDatabaseSummaryResponse
 */
GetDatabaseSummaryResponse Client::getDatabaseSummary(const string &catalogId, const string &database, const GetDatabaseSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatabaseSummaryWithOptions(catalogId, database, request, headers, runtime);
}

/**
 * @summary 查看iceberg数据库
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIcebergNamespaceResponse
 */
GetIcebergNamespaceResponse Client::getIcebergNamespaceWithOptions(const string &catalogId, const string &_namespace, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIcebergNamespace"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/iceberg/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIcebergNamespaceResponse>();
}

/**
 * @summary 查看iceberg数据库
 *
 * @return GetIcebergNamespaceResponse
 */
GetIcebergNamespaceResponse Client::getIcebergNamespace(const string &catalogId, const string &_namespace) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIcebergNamespaceWithOptions(catalogId, namespace, headers, runtime);
}

/**
 * @summary 查看表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIcebergTableResponse
 */
GetIcebergTableResponse Client::getIcebergTableWithOptions(const string &catalogId, const string &_namespace, const string &table, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIcebergTable"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/iceberg/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIcebergTableResponse>();
}

/**
 * @summary 查看表
 *
 * @return GetIcebergTableResponse
 */
GetIcebergTableResponse Client::getIcebergTable(const string &catalogId, const string &_namespace, const string &table) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIcebergTableWithOptions(catalogId, namespace, table, headers, runtime);
}

/**
 * @summary 获取接收者
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetReceiverResponse
 */
GetReceiverResponse Client::getReceiverWithOptions(const string &receiver, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetReceiver"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/share/receivers/" , Darabonba::Encode::Encoder::percentEncode(receiver))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetReceiverResponse>();
}

/**
 * @summary 获取接收者
 *
 * @return GetReceiverResponse
 */
GetReceiverResponse Client::getReceiver(const string &receiver) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getReceiverWithOptions(receiver, headers, runtime);
}

/**
 * @summary 查询 DLF 当前地域开通状态
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRegionStatusResponse
 */
GetRegionStatusResponse Client::getRegionStatusWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRegionStatus"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/service/status")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRegionStatusResponse>();
}

/**
 * @summary 查询 DLF 当前地域开通状态
 *
 * @return GetRegionStatusResponse
 */
GetRegionStatusResponse Client::getRegionStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRegionStatusWithOptions(headers, runtime);
}

/**
 * @summary 获取角色
 *
 * @param request GetRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoleResponse
 */
GetRoleResponse Client::getRoleWithOptions(const GetRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRolePrincipal()) {
    query["rolePrincipal"] = request.getRolePrincipal();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRole"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/roles")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoleResponse>();
}

/**
 * @summary 获取角色
 *
 * @param request GetRoleRequest
 * @return GetRoleResponse
 */
GetRoleResponse Client::getRole(const GetRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRoleWithOptions(request, headers, runtime);
}

/**
 * @summary 获取共享
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetShareResponse
 */
GetShareResponse Client::getShareWithOptions(const string &share, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetShare"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/share/shares/" , Darabonba::Encode::Encoder::percentEncode(share))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetShareResponse>();
}

/**
 * @summary 获取共享
 *
 * @return GetShareResponse
 */
GetShareResponse Client::getShare(const string &share) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getShareWithOptions(share, headers, runtime);
}

/**
 * @summary 查看表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableResponse
 */
GetTableResponse Client::getTableWithOptions(const string &catalogId, const string &database, const string &table, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTable"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableResponse>();
}

/**
 * @summary 查看表
 *
 * @return GetTableResponse
 */
GetTableResponse Client::getTable(const string &catalogId, const string &database, const string &table) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableWithOptions(catalogId, database, table, headers, runtime);
}

/**
 * @summary 查看表Compaction详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableCompactionResponse
 */
GetTableCompactionResponse Client::getTableCompactionWithOptions(const string &catalogId, const string &database, const string &table, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableCompaction"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table) , "/compaction")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableCompactionResponse>();
}

/**
 * @summary 查看表Compaction详情
 *
 * @return GetTableCompactionResponse
 */
GetTableCompactionResponse Client::getTableCompaction(const string &catalogId, const string &database, const string &table) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableCompactionWithOptions(catalogId, database, table, headers, runtime);
}

/**
 * @summary 查看表快照
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableSnapshotResponse
 */
GetTableSnapshotResponse Client::getTableSnapshotWithOptions(const string &catalogId, const string &database, const string &table, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableSnapshot"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table) , "/snapshot")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableSnapshotResponse>();
}

/**
 * @summary 查看表快照
 *
 * @return GetTableSnapshotResponse
 */
GetTableSnapshotResponse Client::getTableSnapshot(const string &catalogId, const string &database, const string &table) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableSnapshotWithOptions(catalogId, database, table, headers, runtime);
}

/**
 * @summary 查看表
 *
 * @param request GetTableSummaryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableSummaryResponse
 */
GetTableSummaryResponse Client::getTableSummaryWithOptions(const string &catalogId, const string &database, const string &table, const GetTableSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDate()) {
    query["date"] = request.getDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableSummary"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table) , "/storage-summary")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableSummaryResponse>();
}

/**
 * @summary 查看表
 *
 * @param request GetTableSummaryRequest
 * @return GetTableSummaryResponse
 */
GetTableSummaryResponse Client::getTableSummary(const string &catalogId, const string &database, const string &table, const GetTableSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableSummaryWithOptions(catalogId, database, table, request, headers, runtime);
}

/**
 * @summary 获取数据湖表的临时访问凭证
 *
 * @param request GetTableTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableTokenResponse
 */
GetTableTokenResponse Client::getTableTokenWithOptions(const string &catalogId, const string &database, const string &table, const GetTableTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsInternal()) {
    query["isInternal"] = request.getIsInternal();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableToken"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table) , "/token")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableTokenResponse>();
}

/**
 * @summary 获取数据湖表的临时访问凭证
 *
 * @param request GetTableTokenRequest
 * @return GetTableTokenResponse
 */
GetTableTokenResponse Client::getTableToken(const string &catalogId, const string &database, const string &table, const GetTableTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableTokenWithOptions(catalogId, database, table, request, headers, runtime);
}

/**
 * @summary 获取用户
 *
 * @param request GetUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipal()) {
    query["userPrincipal"] = request.getUserPrincipal();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/users")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserResponse>();
}

/**
 * @summary 获取用户
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserWithOptions(request, headers, runtime);
}

/**
 * @summary 批量授予角色权限给用户
 *
 * @param request GrantRoleToUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantRoleToUsersResponse
 */
GrantRoleToUsersResponse Client::grantRoleToUsersWithOptions(const GrantRoleToUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRolePrincipal()) {
    body["rolePrincipal"] = request.getRolePrincipal();
  }

  if (!!request.hasUserPrincipals()) {
    body["userPrincipals"] = request.getUserPrincipals();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GrantRoleToUsers"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/roles/grant")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantRoleToUsersResponse>();
}

/**
 * @summary 批量授予角色权限给用户
 *
 * @param request GrantRoleToUsersRequest
 * @return GrantRoleToUsersResponse
 */
GrantRoleToUsersResponse Client::grantRoleToUsers(const GrantRoleToUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return grantRoleToUsersWithOptions(request, headers, runtime);
}

/**
 * @summary 查看数据目录列表
 *
 * @param request ListCatalogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCatalogsResponse
 */
ListCatalogsResponse Client::listCatalogsWithOptions(const ListCatalogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogNamePattern()) {
    query["catalogNamePattern"] = request.getCatalogNamePattern();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCatalogs"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/catalogs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCatalogsResponse>();
}

/**
 * @summary 查看数据目录列表
 *
 * @param request ListCatalogsRequest
 * @return ListCatalogsResponse
 */
ListCatalogsResponse Client::listCatalogs(const ListCatalogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCatalogsWithOptions(request, headers, runtime);
}

/**
 * @summary 查看数据库列表
 *
 * @param request ListDatabaseDetailsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabaseDetailsResponse
 */
ListDatabaseDetailsResponse Client::listDatabaseDetailsWithOptions(const string &catalogId, const ListDatabaseDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseNamePattern()) {
    query["databaseNamePattern"] = request.getDatabaseNamePattern();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabaseDetails"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/database-details")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabaseDetailsResponse>();
}

/**
 * @summary 查看数据库列表
 *
 * @param request ListDatabaseDetailsRequest
 * @return ListDatabaseDetailsResponse
 */
ListDatabaseDetailsResponse Client::listDatabaseDetails(const string &catalogId, const ListDatabaseDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDatabaseDetailsWithOptions(catalogId, request, headers, runtime);
}

/**
 * @summary 查看数据库列表
 *
 * @param request ListDatabasesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabasesWithOptions(const string &catalogId, const ListDatabasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseNamePattern()) {
    query["databaseNamePattern"] = request.getDatabaseNamePattern();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabases"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabasesResponse>();
}

/**
 * @summary 查看数据库列表
 *
 * @param request ListDatabasesRequest
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabases(const string &catalogId, const ListDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDatabasesWithOptions(catalogId, request, headers, runtime);
}

/**
 * @summary 查看函数列表
 *
 * @param request ListFunctionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFunctionsResponse
 */
ListFunctionsResponse Client::listFunctionsWithOptions(const string &catalogId, const string &database, const ListFunctionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFunctionNamePattern()) {
    query["functionNamePattern"] = request.getFunctionNamePattern();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFunctions"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/functions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFunctionsResponse>();
}

/**
 * @summary 查看函数列表
 *
 * @param request ListFunctionsRequest
 * @return ListFunctionsResponse
 */
ListFunctionsResponse Client::listFunctions(const string &catalogId, const string &database, const ListFunctionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFunctionsWithOptions(catalogId, database, request, headers, runtime);
}

/**
 * @summary 查看iceberg数据库列表
 *
 * @param request ListIcebergNamespaceDetailsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIcebergNamespaceDetailsResponse
 */
ListIcebergNamespaceDetailsResponse Client::listIcebergNamespaceDetailsWithOptions(const string &catalogId, const ListIcebergNamespaceDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNamespaceNamePattern()) {
    query["namespaceNamePattern"] = request.getNamespaceNamePattern();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIcebergNamespaceDetails"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/iceberg/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/namespace-details")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIcebergNamespaceDetailsResponse>();
}

/**
 * @summary 查看iceberg数据库列表
 *
 * @param request ListIcebergNamespaceDetailsRequest
 * @return ListIcebergNamespaceDetailsResponse
 */
ListIcebergNamespaceDetailsResponse Client::listIcebergNamespaceDetails(const string &catalogId, const ListIcebergNamespaceDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIcebergNamespaceDetailsWithOptions(catalogId, request, headers, runtime);
}

/**
 * @summary 查看iceberg表快照列表
 *
 * @param request ListIcebergSnapshotsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIcebergSnapshotsResponse
 */
ListIcebergSnapshotsResponse Client::listIcebergSnapshotsWithOptions(const string &catalogId, const string &_namespace, const string &table, const ListIcebergSnapshotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIcebergSnapshots"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/iceberg/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table) , "/snapshots")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIcebergSnapshotsResponse>();
}

/**
 * @summary 查看iceberg表快照列表
 *
 * @param request ListIcebergSnapshotsRequest
 * @return ListIcebergSnapshotsResponse
 */
ListIcebergSnapshotsResponse Client::listIcebergSnapshots(const string &catalogId, const string &_namespace, const string &table, const ListIcebergSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIcebergSnapshotsWithOptions(catalogId, namespace, table, request, headers, runtime);
}

/**
 * @summary 查看iceberg表详情列表
 *
 * @param request ListIcebergTableDetailsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIcebergTableDetailsResponse
 */
ListIcebergTableDetailsResponse Client::listIcebergTableDetailsWithOptions(const string &catalogId, const string &_namespace, const ListIcebergTableDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  if (!!request.hasTableNamePattern()) {
    query["tableNamePattern"] = request.getTableNamePattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIcebergTableDetails"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/iceberg/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/table-details")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIcebergTableDetailsResponse>();
}

/**
 * @summary 查看iceberg表详情列表
 *
 * @param request ListIcebergTableDetailsRequest
 * @return ListIcebergTableDetailsResponse
 */
ListIcebergTableDetailsResponse Client::listIcebergTableDetails(const string &catalogId, const string &_namespace, const ListIcebergTableDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIcebergTableDetailsWithOptions(catalogId, namespace, request, headers, runtime);
}

/**
 * @summary 查看表
 *
 * @param request ListPartitionSummariesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPartitionSummariesResponse
 */
ListPartitionSummariesResponse Client::listPartitionSummariesWithOptions(const string &catalogId, const string &database, const string &table, const ListPartitionSummariesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  if (!!request.hasPartitionNamePattern()) {
    query["partitionNamePattern"] = request.getPartitionNamePattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPartitionSummaries"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table) , "/partitions/storage-summary")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPartitionSummariesResponse>();
}

/**
 * @summary 查看表
 *
 * @param request ListPartitionSummariesRequest
 * @return ListPartitionSummariesResponse
 */
ListPartitionSummariesResponse Client::listPartitionSummaries(const string &catalogId, const string &database, const string &table, const ListPartitionSummariesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPartitionSummariesWithOptions(catalogId, database, table, request, headers, runtime);
}

/**
 * @summary listPartitions
 *
 * @param request ListPartitionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPartitionsResponse
 */
ListPartitionsResponse Client::listPartitionsWithOptions(const string &catalogId, const string &database, const string &table, const ListPartitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  if (!!request.hasPartitionNamePattern()) {
    query["partitionNamePattern"] = request.getPartitionNamePattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPartitions"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table) , "/partitions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPartitionsResponse>();
}

/**
 * @summary listPartitions
 *
 * @param request ListPartitionsRequest
 * @return ListPartitionsResponse
 */
ListPartitionsResponse Client::listPartitions(const string &catalogId, const string &database, const string &table, const ListPartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPartitionsWithOptions(catalogId, database, table, request, headers, runtime);
}

/**
 * @summary 获取指定资源或指定Principal的权限信息
 *
 * @param request ListPermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPermissionsResponse
 */
ListPermissionsResponse Client::listPermissionsWithOptions(const string &catalogId, const ListPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabase()) {
    query["database"] = request.getDatabase();
  }

  if (!!request.hasFunction()) {
    query["function"] = request.getFunction();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  if (!!request.hasPrincipal()) {
    query["principal"] = request.getPrincipal();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTable()) {
    query["table"] = request.getTable();
  }

  if (!!request.hasView()) {
    query["view"] = request.getView();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPermissions"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/permissions/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPermissionsResponse>();
}

/**
 * @summary 获取指定资源或指定Principal的权限信息
 *
 * @param request ListPermissionsRequest
 * @return ListPermissionsResponse
 */
ListPermissionsResponse Client::listPermissions(const string &catalogId, const ListPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPermissionsWithOptions(catalogId, request, headers, runtime);
}

/**
 * @summary 获取提供的共享列表
 *
 * @param request ListProvidedSharesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProvidedSharesResponse
 */
ListProvidedSharesResponse Client::listProvidedSharesWithOptions(const ListProvidedSharesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProvidedShares"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/share/shares/list/provided")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProvidedSharesResponse>();
}

/**
 * @summary 获取提供的共享列表
 *
 * @param request ListProvidedSharesRequest
 * @return ListProvidedSharesResponse
 */
ListProvidedSharesResponse Client::listProvidedShares(const ListProvidedSharesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProvidedSharesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取接收的共享列表
 *
 * @param request ListReceivedSharesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListReceivedSharesResponse
 */
ListReceivedSharesResponse Client::listReceivedSharesWithOptions(const ListReceivedSharesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListReceivedShares"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/share/shares/list/received")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListReceivedSharesResponse>();
}

/**
 * @summary 获取接收的共享列表
 *
 * @param request ListReceivedSharesRequest
 * @return ListReceivedSharesResponse
 */
ListReceivedSharesResponse Client::listReceivedShares(const ListReceivedSharesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listReceivedSharesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取接收者列表
 *
 * @param request ListReceiversRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListReceiversResponse
 */
ListReceiversResponse Client::listReceiversWithOptions(const ListReceiversRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  if (!!request.hasReceiverName()) {
    query["receiverName"] = request.getReceiverName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListReceivers"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/share/receivers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListReceiversResponse>();
}

/**
 * @summary 获取接收者列表
 *
 * @param request ListReceiversRequest
 * @return ListReceiversResponse
 */
ListReceiversResponse Client::listReceivers(const ListReceiversRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listReceiversWithOptions(request, headers, runtime);
}

/**
 * @summary 获取角色用户列表
 *
 * @param request ListRoleUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRoleUsersResponse
 */
ListRoleUsersResponse Client::listRoleUsersWithOptions(const ListRoleUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  if (!!request.hasRolePrincipal()) {
    query["rolePrincipal"] = request.getRolePrincipal();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRoleUsers"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/roles/users/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRoleUsersResponse>();
}

/**
 * @summary 获取角色用户列表
 *
 * @param request ListRoleUsersRequest
 * @return ListRoleUsersResponse
 */
ListRoleUsersResponse Client::listRoleUsers(const ListRoleUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRoleUsersWithOptions(request, headers, runtime);
}

/**
 * @summary 获取角色列表
 *
 * @param request ListRolesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRolesWithOptions(const ListRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  if (!!request.hasRoleName()) {
    query["roleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRoles"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/roles/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRolesResponse>();
}

/**
 * @summary 获取角色列表
 *
 * @param request ListRolesRequest
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRoles(const ListRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRolesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取共享中的接收者列表
 *
 * @param request ListShareReceiversRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListShareReceiversResponse
 */
ListShareReceiversResponse Client::listShareReceiversWithOptions(const string &share, const ListShareReceiversRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListShareReceivers"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/share/shares/" , Darabonba::Encode::Encoder::percentEncode(share) , "/receivers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListShareReceiversResponse>();
}

/**
 * @summary 获取共享中的接收者列表
 *
 * @param request ListShareReceiversRequest
 * @return ListShareReceiversResponse
 */
ListShareReceiversResponse Client::listShareReceivers(const string &share, const ListShareReceiversRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listShareReceiversWithOptions(share, request, headers, runtime);
}

/**
 * @summary 获取共享资源列表
 *
 * @param request ListShareResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListShareResourcesResponse
 */
ListShareResourcesResponse Client::listShareResourcesWithOptions(const string &share, const ListShareResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListShareResources"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/share/shares/" , Darabonba::Encode::Encoder::percentEncode(share) , "/resources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListShareResourcesResponse>();
}

/**
 * @summary 获取共享资源列表
 *
 * @param request ListShareResourcesRequest
 * @return ListShareResourcesResponse
 */
ListShareResourcesResponse Client::listShareResources(const string &share, const ListShareResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listShareResourcesWithOptions(share, request, headers, runtime);
}

/**
 * @summary 查看表快照列表
 *
 * @param request ListSnapshotsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSnapshotsResponse
 */
ListSnapshotsResponse Client::listSnapshotsWithOptions(const string &catalogId, const string &database, const string &table, const ListSnapshotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSnapshots"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table) , "/snapshots")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSnapshotsResponse>();
}

/**
 * @summary 查看表快照列表
 *
 * @param request ListSnapshotsRequest
 * @return ListSnapshotsResponse
 */
ListSnapshotsResponse Client::listSnapshots(const string &catalogId, const string &database, const string &table, const ListSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSnapshotsWithOptions(catalogId, database, table, request, headers, runtime);
}

/**
 * @summary 查看表详情列表
 *
 * @param request ListTableDetailsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTableDetailsResponse
 */
ListTableDetailsResponse Client::listTableDetailsWithOptions(const string &catalogId, const string &database, const ListTableDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  if (!!request.hasTableNamePattern()) {
    query["tableNamePattern"] = request.getTableNamePattern();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTableDetails"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/table-details")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTableDetailsResponse>();
}

/**
 * @summary 查看表详情列表
 *
 * @param request ListTableDetailsRequest
 * @return ListTableDetailsResponse
 */
ListTableDetailsResponse Client::listTableDetails(const string &catalogId, const string &database, const ListTableDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTableDetailsWithOptions(catalogId, database, request, headers, runtime);
}

/**
 * @summary 查看表详情列表
 *
 * @param request ListTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTablesWithOptions(const string &catalogId, const string &database, const ListTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  if (!!request.hasTableNamePattern()) {
    query["tableNamePattern"] = request.getTableNamePattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTables"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/tables")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTablesResponse>();
}

/**
 * @summary 查看表详情列表
 *
 * @param request ListTablesRequest
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTables(const string &catalogId, const string &database, const ListTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTablesWithOptions(catalogId, database, request, headers, runtime);
}

/**
 * @summary 获取用户角色列表
 *
 * @param request ListUserRolesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserRolesResponse
 */
ListUserRolesResponse Client::listUserRolesWithOptions(const ListUserRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  if (!!request.hasUserPrincipal()) {
    query["userPrincipal"] = request.getUserPrincipal();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserRoles"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/users/roles/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserRolesResponse>();
}

/**
 * @summary 获取用户角色列表
 *
 * @param request ListUserRolesRequest
 * @return ListUserRolesResponse
 */
ListUserRolesResponse Client::listUserRoles(const ListUserRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserRolesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取用户列表
 *
 * @param request ListUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  if (!!request.hasUserName()) {
    query["userName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/users/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary 获取用户列表
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUsersWithOptions(request, headers, runtime);
}

/**
 * @summary 查看视图详情列表
 *
 * @param request ListViewDetailsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListViewDetailsResponse
 */
ListViewDetailsResponse Client::listViewDetailsWithOptions(const string &catalogId, const string &database, const ListViewDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  if (!!request.hasViewNamePattern()) {
    query["viewNamePattern"] = request.getViewNamePattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListViewDetails"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/view-details")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListViewDetailsResponse>();
}

/**
 * @summary 查看视图详情列表
 *
 * @param request ListViewDetailsRequest
 * @return ListViewDetailsResponse
 */
ListViewDetailsResponse Client::listViewDetails(const string &catalogId, const string &database, const ListViewDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listViewDetailsWithOptions(catalogId, database, request, headers, runtime);
}

/**
 * @summary 查看视图详情列表
 *
 * @param request ListViewsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListViewsResponse
 */
ListViewsResponse Client::listViewsWithOptions(const string &catalogId, const string &database, const ListViewsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPageToken()) {
    query["pageToken"] = request.getPageToken();
  }

  if (!!request.hasViewNamePattern()) {
    query["viewNamePattern"] = request.getViewNamePattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListViews"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/views")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListViewsResponse>();
}

/**
 * @summary 查看视图详情列表
 *
 * @param request ListViewsRequest
 * @return ListViewsResponse
 */
ListViewsResponse Client::listViews(const string &catalogId, const string &database, const ListViewsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listViewsWithOptions(catalogId, database, request, headers, runtime);
}

/**
 * @summary 刷新用户同步
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshUserSyncResponse
 */
RefreshUserSyncResponse Client::refreshUserSyncWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshUserSync"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/usersync")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshUserSyncResponse>();
}

/**
 * @summary 刷新用户同步
 *
 * @return RefreshUserSyncResponse
 */
RefreshUserSyncResponse Client::refreshUserSync() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return refreshUserSyncWithOptions(headers, runtime);
}

/**
 * @summary 批量取消授予角色权限给用户
 *
 * @param request RevokeRoleFromUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeRoleFromUsersResponse
 */
RevokeRoleFromUsersResponse Client::revokeRoleFromUsersWithOptions(const RevokeRoleFromUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRolePrincipal()) {
    body["rolePrincipal"] = request.getRolePrincipal();
  }

  if (!!request.hasUserPrincipals()) {
    body["userPrincipals"] = request.getUserPrincipals();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RevokeRoleFromUsers"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/roles/revoke")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeRoleFromUsersResponse>();
}

/**
 * @summary 批量取消授予角色权限给用户
 *
 * @param request RevokeRoleFromUsersRequest
 * @return RevokeRoleFromUsersResponse
 */
RevokeRoleFromUsersResponse Client::revokeRoleFromUsers(const RevokeRoleFromUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return revokeRoleFromUsersWithOptions(request, headers, runtime);
}

/**
 * @summary 回滚表
 *
 * @param request RollbackTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackTableResponse
 */
RollbackTableResponse Client::rollbackTableWithOptions(const string &catalogId, const string &database, const string &table, const RollbackTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstant()) {
    body["instant"] = request.getInstant();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RollbackTable"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table) , "/rollback")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackTableResponse>();
}

/**
 * @summary 回滚表
 *
 * @param request RollbackTableRequest
 * @return RollbackTableResponse
 */
RollbackTableResponse Client::rollbackTable(const string &catalogId, const string &database, const string &table, const RollbackTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rollbackTableWithOptions(catalogId, database, table, request, headers, runtime);
}

/**
 * @summary 订阅当前地域的 DLF
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubscribeResponse
 */
SubscribeResponse Client::subscribeWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Subscribe"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/service/subscribe")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubscribeResponse>();
}

/**
 * @summary 订阅当前地域的 DLF
 *
 * @return SubscribeResponse
 */
SubscribeResponse Client::subscribe() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return subscribeWithOptions(headers, runtime);
}

/**
 * @summary 更新角色
 *
 * @param request UpdateRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRoleWithOptions(const UpdateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasRolePrincipal()) {
    body["rolePrincipal"] = request.getRolePrincipal();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRole"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/roles")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRoleResponse>();
}

/**
 * @summary 更新角色
 *
 * @param request UpdateRoleRequest
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRole(const UpdateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRoleWithOptions(request, headers, runtime);
}

/**
 * @summary 更新角色用户
 *
 * @param request UpdateRoleUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRoleUsersResponse
 */
UpdateRoleUsersResponse Client::updateRoleUsersWithOptions(const UpdateRoleUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRolePrincipal()) {
    body["rolePrincipal"] = request.getRolePrincipal();
  }

  if (!!request.hasUserPrincipals()) {
    body["userPrincipals"] = request.getUserPrincipals();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRoleUsers"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/roles/users")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRoleUsersResponse>();
}

/**
 * @summary 更新角色用户
 *
 * @param request UpdateRoleUsersRequest
 * @return UpdateRoleUsersResponse
 */
UpdateRoleUsersResponse Client::updateRoleUsers(const UpdateRoleUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRoleUsersWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace DlfNext20250310