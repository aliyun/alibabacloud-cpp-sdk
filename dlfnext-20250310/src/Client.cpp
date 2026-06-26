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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "dlfnext.us-west-1.aliyuncs.com"},
    {"us-east-1" , "dlfnext.us-east-1.aliyuncs.com"},
    {"eu-central-1" , "dlfnext.eu-central-1.aliyuncs.com"},
    {"cn-wulanchabu" , "dlfnext.cn-wulanchabu.aliyuncs.com"},
    {"cn-shenzhen" , "dlfnext.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai" , "dlfnext.cn-shanghai.aliyuncs.com"},
    {"cn-hongkong" , "dlfnext.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou" , "dlfnext.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing" , "dlfnext.cn-beijing.aliyuncs.com"},
    {"ap-southeast-5" , "dlfnext.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-1" , "dlfnext.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-1" , "dlfnext.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Updates a catalog.
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
 * @summary Updates a catalog.
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
 * @summary Updates a database.
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
 * @summary Updates a database.
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
 * @summary Updates a sink.
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
 * @summary Updates a sink.
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
 * @summary Updates a share.
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
 * @summary Updates a share.
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
 * @summary Updates the receivers of a share.
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
 * @summary Updates the receivers of a share.
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
 * @summary Modifies shared resources.
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
 * @summary Modifies shared resources.
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
 * @summary Updates a table.
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
 * @summary Updates a table.
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
 * @summary Changes the table schema.
 *
 * @param request AlterTableSchemaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AlterTableSchemaResponse
 */
AlterTableSchemaResponse Client::alterTableSchemaWithOptions(const string &catalogId, const string &database, const string &table, const AlterTableSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSchema()) {
    body["schema"] = request.getSchema();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AlterTableSchema"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table) , "/schema")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AlterTableSchemaResponse>();
}

/**
 * @summary Changes the table schema.
 *
 * @param request AlterTableSchemaRequest
 * @return AlterTableSchemaResponse
 */
AlterTableSchemaResponse Client::alterTableSchema(const string &catalogId, const string &database, const string &table, const AlterTableSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return alterTableSchemaWithOptions(catalogId, database, table, request, headers, runtime);
}

/**
 * @summary Grants permissions to one or more DLF users or roles.
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
 * @summary Grants permissions to one or more DLF users or roles.
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
 * @summary Revokes permissions in a batch.
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
 * @summary Revokes permissions in a batch.
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
 * @summary Creates a catalog.
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
 * @summary Creates a catalog.
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
 * @summary Creates a database.
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
 * @summary Creates a database.
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
 * @summary Creates a receiver.
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
 * @summary Creates a receiver.
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
 * @summary Creates a DLF role.
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
 * @summary Creates a DLF role.
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
 * @summary Creates a share.
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
 * @summary Creates a share.
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
 * @summary Creates a table.
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
 * @summary Creates a table.
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
 * @summary Deletes a DLF role.
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
 * @summary Deletes a DLF role.
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
 * @summary Retrieves the regions where DLF is activated.
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
 * @summary Retrieves the regions where DLF is activated.
 *
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(headers, runtime);
}

/**
 * @summary Deletes a data lake data catalog. The following conditions must be met, otherwise the deletion will fail: all tables and user-created databases under the catalog have been deleted; the databases and tables have been deleted for at least 24 hours.
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
 * @summary Deletes a data lake data catalog. The following conditions must be met, otherwise the deletion will fail: all tables and user-created databases under the catalog have been deleted; the databases and tables have been deleted for at least 24 hours.
 *
 * @return DropCatalogResponse
 */
DropCatalogResponse Client::dropCatalog(const string &catalog) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return dropCatalogWithOptions(catalog, headers, runtime);
}

/**
 * @summary Drops a database.
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
 * @summary Drops a database.
 *
 * @return DropDatabaseResponse
 */
DropDatabaseResponse Client::dropDatabase(const string &catalogId, const string &database) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return dropDatabaseWithOptions(catalogId, database, headers, runtime);
}

/**
 * @summary Removes a receiver.
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
 * @summary Removes a receiver.
 *
 * @return DropReceiverResponse
 */
DropReceiverResponse Client::dropReceiver(const string &receiver) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return dropReceiverWithOptions(receiver, headers, runtime);
}

/**
 * @summary Deletes a share.
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
 * @summary Deletes a share.
 *
 * @return DropShareResponse
 */
DropShareResponse Client::dropShare(const string &share) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return dropShareWithOptions(share, headers, runtime);
}

/**
 * @summary Drops a table.
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
 * @summary Drops a table.
 *
 * @return DropTableResponse
 */
DropTableResponse Client::dropTable(const string &catalogId, const string &database, const string &table) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return dropTableWithOptions(catalogId, database, table, headers, runtime);
}

/**
 * @summary Retrieves the details of a catalog.
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
 * @summary Retrieves the details of a catalog.
 *
 * @return GetCatalogResponse
 */
GetCatalogResponse Client::getCatalog(const string &catalog) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCatalogWithOptions(catalog, headers, runtime);
}

/**
 * @summary Retrieves the details of a catalog.
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
 * @summary Retrieves the details of a catalog.
 *
 * @return GetCatalogByIdResponse
 */
GetCatalogByIdResponse Client::getCatalogById(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCatalogByIdWithOptions(id, headers, runtime);
}

/**
 * @summary Retrieves the storage overview of a data catalog.
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
 * @summary Retrieves the storage overview of a data catalog.
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
 * @summary Retrieves the storage overview trend for a catalog.
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
 * @summary Retrieves the storage overview trend for a catalog.
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
 * @summary Obtains a temporary access credential (token) for a catalog.
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
 * @summary Obtains a temporary access credential (token) for a catalog.
 *
 * @return GetCatalogTokenResponse
 */
GetCatalogTokenResponse Client::getCatalogToken(const string &catalog) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCatalogTokenWithOptions(catalog, headers, runtime);
}

/**
 * @summary Retrieves the details of a database.
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
 * @summary Retrieves the details of a database.
 *
 * @return GetDatabaseResponse
 */
GetDatabaseResponse Client::getDatabase(const string &catalogId, const string &database) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatabaseWithOptions(catalogId, database, headers, runtime);
}

/**
 * @summary You can view an inventory overview.
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
 * @summary You can view an inventory overview.
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
 * @summary Retrieves information about an Iceberg namespace.
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
 * @summary Retrieves information about an Iceberg namespace.
 *
 * @return GetIcebergNamespaceResponse
 */
GetIcebergNamespaceResponse Client::getIcebergNamespace(const string &catalogId, const string &_namespace) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIcebergNamespaceWithOptions(catalogId, namespace, headers, runtime);
}

/**
 * @summary Retrieves the details of a table.
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
 * @summary Retrieves the details of a table.
 *
 * @return GetIcebergTableResponse
 */
GetIcebergTableResponse Client::getIcebergTable(const string &catalogId, const string &_namespace, const string &table) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIcebergTableWithOptions(catalogId, namespace, table, headers, runtime);
}

/**
 * @summary Retrieves a receiver.
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
 * @summary Retrieves a receiver.
 *
 * @return GetReceiverResponse
 */
GetReceiverResponse Client::getReceiver(const string &receiver) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getReceiverWithOptions(receiver, headers, runtime);
}

/**
 * @summary Queries the DLF activation status of in a region.
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
 * @summary Queries the DLF activation status of in a region.
 *
 * @return GetRegionStatusResponse
 */
GetRegionStatusResponse Client::getRegionStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRegionStatusWithOptions(headers, runtime);
}

/**
 * @summary Retrieves a role.
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
 * @summary Retrieves a role.
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
 * @summary Retrieves the details of a share.
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
 * @summary Retrieves the details of a share.
 *
 * @return GetShareResponse
 */
GetShareResponse Client::getShare(const string &share) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getShareWithOptions(share, headers, runtime);
}

/**
 * @summary Retrieves the details of a table in a data lake.
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
 * @summary Retrieves the details of a table in a data lake.
 *
 * @return GetTableResponse
 */
GetTableResponse Client::getTable(const string &catalogId, const string &database, const string &table) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableWithOptions(catalogId, database, table, headers, runtime);
}

/**
 * @summary Retrieves the compaction details of a table.
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
 * @summary Retrieves the compaction details of a table.
 *
 * @return GetTableCompactionResponse
 */
GetTableCompactionResponse Client::getTableCompaction(const string &catalogId, const string &database, const string &table) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableCompactionWithOptions(catalogId, database, table, headers, runtime);
}

/**
 * @summary Queries a table snapshot.
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
 * @summary Queries a table snapshot.
 *
 * @return GetTableSnapshotResponse
 */
GetTableSnapshotResponse Client::getTableSnapshot(const string &catalogId, const string &database, const string &table) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableSnapshotWithOptions(catalogId, database, table, headers, runtime);
}

/**
 * @summary Retrieves the storage summary for a table.
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
 * @summary Retrieves the storage summary for a table.
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
 * @summary Obtains a temporary access credential for a data lake table.
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
 * @summary Obtains a temporary access credential for a data lake table.
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
 * @summary Retrieves a user.
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
 * @summary Retrieves a user.
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
 * @summary Obtain the VPC configuration.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVpcConfigResponse
 */
GetVpcConfigResponse Client::getVpcConfigWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVpcConfig"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/auth/vpc")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVpcConfigResponse>();
}

/**
 * @summary Obtain the VPC configuration.
 *
 * @return GetVpcConfigResponse
 */
GetVpcConfigResponse Client::getVpcConfig() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getVpcConfigWithOptions(headers, runtime);
}

/**
 * @summary Grants a role to one or more users.
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
 * @summary Grants a role to one or more users.
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
 * @summary Lists catalogs.
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
 * @summary Lists catalogs.
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
 * @summary Retrieves database details.
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
 * @summary Retrieves database details.
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
 * @summary Retrieves databases.
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
 * @summary Retrieves databases.
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
 * @summary Lists functions.
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
 * @summary Lists functions.
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
 * @summary Lists Iceberg namespaces.
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
 * @summary Lists Iceberg namespaces.
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
 * @summary Lists the snapshots of an Iceberg table.
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
 * @summary Lists the snapshots of an Iceberg table.
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
 * @summary Lists the details of Iceberg tables.
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
 * @summary Lists the details of Iceberg tables.
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
 * @summary Retrieves storage overview for partitions.
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
 * @summary Retrieves storage overview for partitions.
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
 * @summary Lists partitions.
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
 * @summary Lists partitions.
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
 * @summary Retrieves a list of partitions by their names.
 *
 * @param request ListPartitionsByNamesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPartitionsByNamesResponse
 */
ListPartitionsByNamesResponse Client::listPartitionsByNamesWithOptions(const string &catalogId, const string &database, const string &table, const ListPartitionsByNamesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSpecs()) {
    body["specs"] = request.getSpecs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPartitionsByNames"},
    {"version" , "2025-03-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dlf/v1/" , Darabonba::Encode::Encoder::percentEncode(catalogId) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(database) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table) , "/partitions/list-by-names")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPartitionsByNamesResponse>();
}

/**
 * @summary Retrieves a list of partitions by their names.
 *
 * @param request ListPartitionsByNamesRequest
 * @return ListPartitionsByNamesResponse
 */
ListPartitionsByNamesResponse Client::listPartitionsByNames(const string &catalogId, const string &database, const string &table, const ListPartitionsByNamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPartitionsByNamesWithOptions(catalogId, database, table, request, headers, runtime);
}

/**
 * @summary Retrieves the permissions for a resource or principal.
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
 * @summary Retrieves the permissions for a resource or principal.
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
 * @summary Retrieves shares.
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
 * @summary Retrieves shares.
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
 * @summary Retrieves received shares.
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
 * @summary Retrieves received shares.
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
 * @summary Queries a list of receivers.
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
 * @summary Queries a list of receivers.
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
 * @summary Retrieves the users for a role.
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
 * @summary Retrieves the users for a role.
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
 * @summary Retrieves roles.
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
 * @summary Retrieves roles.
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
 * @summary Gets the receivers of a share.
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
 * @summary Gets the receivers of a share.
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
 * @summary Retrieves shared resources.
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
 * @summary Retrieves shared resources.
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
 * @summary Returns a list of table snapshots.
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
 * @summary Returns a list of table snapshots.
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
 * @summary Lists the details of one or more tables.
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
 * @summary Lists the details of one or more tables.
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
 * @summary Retrieves a list of tables.
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
 * @summary Retrieves a list of tables.
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
 * @summary Retrieves the roles assigned to a user.
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
 * @summary Retrieves the roles assigned to a user.
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
 * @summary Retrieves a list of users.
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
 * @summary Retrieves a list of users.
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
 * @summary Lists the details of one or more views.
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
 * @summary Lists the details of one or more views.
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
 * @summary Returns the names of views.
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
 * @summary Returns the names of views.
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
 * @summary Syncs users.
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
 * @summary Syncs users.
 *
 * @return RefreshUserSyncResponse
 */
RefreshUserSyncResponse Client::refreshUserSync() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return refreshUserSyncWithOptions(headers, runtime);
}

/**
 * @summary Revokes a role from one or more users.
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
 * @summary Revokes a role from one or more users.
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
 * @summary Rolls back a table.
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
 * @summary Rolls back a table.
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
 * @summary Subscribes to DLF in the current region.
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
 * @summary Subscribes to DLF in the current region.
 *
 * @return SubscribeResponse
 */
SubscribeResponse Client::subscribe() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return subscribeWithOptions(headers, runtime);
}

/**
 * @summary Updates a DLF role.
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
 * @summary Updates a DLF role.
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
 * @summary Updates the users for a role.
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
 * @summary Updates the users for a role.
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