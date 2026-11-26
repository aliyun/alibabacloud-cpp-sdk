#include <darabonba/Core.hpp>
#include <alibabacloud/WinNexo20260512.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/Convert.hpp>
#include <darabonba/encode/Encoder.hpp>
#include <alibabacloud/credentials/Client.hpp>
#include <darabonba/http/FileField.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::OpenApi::Exceptions;
using namespace AlibabaCloud::Credentials::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::WinNexo20260512::Models;
namespace AlibabaCloud
{
namespace WinNexo20260512
{

AlibabaCloud::WinNexo20260512::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_productId = "WinNexo";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("winnexo", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds multiple tenant members to a specified user group in a single request.
 *
 * @description ## Request description
 * - This operation supports batch addition of members by providing a user group ID and one or more user IDs.
 * - Duplicate entries in the user ID list do not cause errors. The system automatically handles duplicates to ensure each user is added only once.
 * - The caller must have the required permissions to perform this operation.
 * - This operation is applicable to scenarios that require quick team structure management or access control policy adjustments.
 *
 * @param tmpReq AddUserGroupMembersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserGroupMembersResponse
 */
AddUserGroupMembersResponse Client::addUserGroupMembersWithOptions(const AddUserGroupMembersRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddUserGroupMembersShrinkRequest request = AddUserGroupMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserIds()) {
    request.setUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserIds(), "userIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasUserGroupId()) {
    body["userGroupId"] = request.getUserGroupId();
  }

  if (!!request.hasUserIdsShrink()) {
    body["userIds"] = request.getUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddUserGroupMembers"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/addUserGroupMembers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserGroupMembersResponse>();
}

/**
 * @summary Adds multiple tenant members to a specified user group in a single request.
 *
 * @description ## Request description
 * - This operation supports batch addition of members by providing a user group ID and one or more user IDs.
 * - Duplicate entries in the user ID list do not cause errors. The system automatically handles duplicates to ensure each user is added only once.
 * - The caller must have the required permissions to perform this operation.
 * - This operation is applicable to scenarios that require quick team structure management or access control policy adjustments.
 *
 * @param request AddUserGroupMembersRequest
 * @return AddUserGroupMembersResponse
 */
AddUserGroupMembersResponse Client::addUserGroupMembers(const AddUserGroupMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addUserGroupMembersWithOptions(request, headers, runtime);
}

/**
 * @summary Invalidates to-do items in batches.
 *
 * @description Invalidates to-do items in batches by a collection of IDs. No error is returned for completed or non-existent items, ensuring idempotence.
 *
 * @param tmpReq BatchCancelTodosRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCancelTodosResponse
 */
BatchCancelTodosResponse Client::batchCancelTodosWithOptions(const BatchCancelTodosRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchCancelTodosShrinkRequest request = BatchCancelTodosShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTodoIds()) {
    request.setTodoIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTodoIds(), "todoIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasTodoIdsShrink()) {
    body["todoIds"] = request.getTodoIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchCancelTodos"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/batchCancelTodos")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCancelTodosResponse>();
}

/**
 * @summary Invalidates to-do items in batches.
 *
 * @description Invalidates to-do items in batches by a collection of IDs. No error is returned for completed or non-existent items, ensuring idempotence.
 *
 * @param request BatchCancelTodosRequest
 * @return BatchCancelTodosResponse
 */
BatchCancelTodosResponse Client::batchCancelTodos(const BatchCancelTodosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchCancelTodosWithOptions(request, headers, runtime);
}

/**
 * @summary Performs batch operations to schedule, pause, resume, or delete work items for valid members. A failure in a single item does not roll back other items.
 *
 * @description Performs batch operations to schedule, pause, resume, or delete work items for valid members. A failure in a single item does not roll back other items.
 *
 * @param tmpReq BatchOperateWorkItemsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchOperateWorkItemsResponse
 */
BatchOperateWorkItemsResponse Client::batchOperateWorkItemsWithOptions(const BatchOperateWorkItemsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchOperateWorkItemsShrinkRequest request = BatchOperateWorkItemsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWorkItemIds()) {
    request.setWorkItemIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWorkItemIds(), "workItemIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.getAction();
  }

  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasIdempotencyKey()) {
    body["idempotencyKey"] = request.getIdempotencyKey();
  }

  if (!!request.hasWorkItemIdsShrink()) {
    body["workItemIds"] = request.getWorkItemIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchOperateWorkItems"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/batchOperateWorkItems")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchOperateWorkItemsResponse>();
}

/**
 * @summary Performs batch operations to schedule, pause, resume, or delete work items for valid members. A failure in a single item does not roll back other items.
 *
 * @description Performs batch operations to schedule, pause, resume, or delete work items for valid members. A failure in a single item does not roll back other items.
 *
 * @param request BatchOperateWorkItemsRequest
 * @return BatchOperateWorkItemsResponse
 */
BatchOperateWorkItemsResponse Client::batchOperateWorkItems(const BatchOperateWorkItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchOperateWorkItemsWithOptions(request, headers, runtime);
}

/**
 * @summary Cancels exact object type favorites for digital workers in batches.
 *
 * @description Idempotently cancels favorites across three independent dimensions: graphName, operatingObjectName, and objectType. The original array accepts 1 to 200 items per request, and each item must be a non-empty string with a maximum length of 128 characters. After server-side validation, the order is preserved and duplicates are removed. Non-string values, oversized values, or arrays exceeding the limit are rejected. Deletion, item-by-item status updates, and the calculation of the remaining valid count are completed within the same transaction. To safely cancel all favorites, you must also call ClearOperatingObjectFavorites to clear historical, MISSING, or permission-hidden records that are invisible in the list, and finally read back the data to confirm that the total is 0.
 *
 * @param tmpReq BatchRemoveOperatingObjectFavoritesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchRemoveOperatingObjectFavoritesResponse
 */
BatchRemoveOperatingObjectFavoritesResponse Client::batchRemoveOperatingObjectFavoritesWithOptions(const BatchRemoveOperatingObjectFavoritesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchRemoveOperatingObjectFavoritesShrinkRequest request = BatchRemoveOperatingObjectFavoritesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectIds()) {
    request.setObjectIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectIds(), "objectIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  if (!!request.hasObjectIdsShrink()) {
    body["objectIds"] = request.getObjectIdsShrink();
  }

  if (!!request.hasObjectType()) {
    body["objectType"] = request.getObjectType();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchRemoveOperatingObjectFavorites"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/batchRemoveOperatingObjectFavorites")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchRemoveOperatingObjectFavoritesResponse>();
}

/**
 * @summary Cancels exact object type favorites for digital workers in batches.
 *
 * @description Idempotently cancels favorites across three independent dimensions: graphName, operatingObjectName, and objectType. The original array accepts 1 to 200 items per request, and each item must be a non-empty string with a maximum length of 128 characters. After server-side validation, the order is preserved and duplicates are removed. Non-string values, oversized values, or arrays exceeding the limit are rejected. Deletion, item-by-item status updates, and the calculation of the remaining valid count are completed within the same transaction. To safely cancel all favorites, you must also call ClearOperatingObjectFavorites to clear historical, MISSING, or permission-hidden records that are invisible in the list, and finally read back the data to confirm that the total is 0.
 *
 * @param request BatchRemoveOperatingObjectFavoritesRequest
 * @return BatchRemoveOperatingObjectFavoritesResponse
 */
BatchRemoveOperatingObjectFavoritesResponse Client::batchRemoveOperatingObjectFavorites(const BatchRemoveOperatingObjectFavoritesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchRemoveOperatingObjectFavoritesWithOptions(request, headers, runtime);
}

/**
 * @summary Cancels a to-do item.
 *
 * @description Cancels a to-do item. If the to-do item specified by todoId is not found, a 404 error is returned. If workItemId is used, the system makes a best-effort attempt to cancel to-do items in batches.
 *
 * @param request CancelTodoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelTodoResponse
 */
CancelTodoResponse Client::cancelTodoWithOptions(const CancelTodoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasTodoId()) {
    body["todoId"] = request.getTodoId();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CancelTodo"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/cancelTodo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelTodoResponse>();
}

/**
 * @summary Cancels a to-do item.
 *
 * @description Cancels a to-do item. If the to-do item specified by todoId is not found, a 404 error is returned. If workItemId is used, the system makes a best-effort attempt to cancel to-do items in batches.
 *
 * @param request CancelTodoRequest
 * @return CancelTodoResponse
 */
CancelTodoResponse Client::cancelTodo(const CancelTodoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelTodoWithOptions(request, headers, runtime);
}

/**
 * @summary Checks the resource permissions within an application.
 *
 * @description Requires the APP/VIEW permission for checking your own permissions and the APP/MANAGE permission for checking permissions on behalf of others.
 *
 * @param request CheckAppResourcePermissionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAppResourcePermissionResponse
 */
CheckAppResourcePermissionResponse Client::checkAppResourcePermissionWithOptions(const CheckAppResourcePermissionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasPermission()) {
    body["permission"] = request.getPermission();
  }

  if (!!request.hasResourceKey()) {
    body["resourceKey"] = request.getResourceKey();
  }

  if (!!request.hasResourceTenantId()) {
    body["resourceTenantId"] = request.getResourceTenantId();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTargetUserId()) {
    body["targetUserId"] = request.getTargetUserId();
  }

  if (!!request.hasTargetUserTenantId()) {
    body["targetUserTenantId"] = request.getTargetUserTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckAppResourcePermission"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/checkAppResourcePermission")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAppResourcePermissionResponse>();
}

/**
 * @summary Checks the resource permissions within an application.
 *
 * @description Requires the APP/VIEW permission for checking your own permissions and the APP/MANAGE permission for checking permissions on behalf of others.
 *
 * @param request CheckAppResourcePermissionRequest
 * @return CheckAppResourcePermissionResponse
 */
CheckAppResourcePermissionResponse Client::checkAppResourcePermission(const CheckAppResourcePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkAppResourcePermissionWithOptions(request, headers, runtime);
}

/**
 * @summary Checks the resource permissions within applications in batches.
 *
 * @description Authenticates applications in a batch and reuses constant-time service queries.
 *
 * @param tmpReq CheckAppResourcePermissionsBatchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAppResourcePermissionsBatchResponse
 */
CheckAppResourcePermissionsBatchResponse Client::checkAppResourcePermissionsBatchWithOptions(const CheckAppResourcePermissionsBatchRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CheckAppResourcePermissionsBatchShrinkRequest request = CheckAppResourcePermissionsBatchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasChecks()) {
    request.setChecksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChecks(), "checks", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasChecksShrink()) {
    body["checks"] = request.getChecksShrink();
  }

  if (!!request.hasResourceTenantId()) {
    body["resourceTenantId"] = request.getResourceTenantId();
  }

  if (!!request.hasTargetUserId()) {
    body["targetUserId"] = request.getTargetUserId();
  }

  if (!!request.hasTargetUserTenantId()) {
    body["targetUserTenantId"] = request.getTargetUserTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckAppResourcePermissionsBatch"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/checkAppResourcePermissionsBatch")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAppResourcePermissionsBatchResponse>();
}

/**
 * @summary Checks the resource permissions within applications in batches.
 *
 * @description Authenticates applications in a batch and reuses constant-time service queries.
 *
 * @param request CheckAppResourcePermissionsBatchRequest
 * @return CheckAppResourcePermissionsBatchResponse
 */
CheckAppResourcePermissionsBatchResponse Client::checkAppResourcePermissionsBatch(const CheckAppResourcePermissionsBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkAppResourcePermissionsBatchWithOptions(request, headers, runtime);
}

/**
 * @summary Performs a service health check.
 *
 * @param request CheckHealthRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckHealthResponse
 */
CheckHealthResponse Client::checkHealthWithOptions(const CheckHealthRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckHealth"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/checkHealth")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckHealthResponse>();
}

/**
 * @summary Performs a service health check.
 *
 * @param request CheckHealthRequest
 * @return CheckHealthResponse
 */
CheckHealthResponse Client::checkHealth(const CheckHealthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkHealthWithOptions(request, headers, runtime);
}

/**
 * @summary Clears automatic memory.
 *
 * @description Manages personal or specified writing collaboration workspace memory based on the authenticated user. The workspace mode inherits active member permissions.
 *
 * @param request ClearAutoMemoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearAutoMemoryResponse
 */
ClearAutoMemoryResponse Client::clearAutoMemoryWithOptions(const ClearAutoMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerType()) {
    body["ownerType"] = request.getOwnerType();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ClearAutoMemory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/clearAutoMemory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearAutoMemoryResponse>();
}

/**
 * @summary Clears automatic memory.
 *
 * @description Manages personal or specified writing collaboration workspace memory based on the authenticated user. The workspace mode inherits active member permissions.
 *
 * @param request ClearAutoMemoryRequest
 * @return ClearAutoMemoryResponse
 */
ClearAutoMemoryResponse Client::clearAutoMemory(const ClearAutoMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return clearAutoMemoryWithOptions(request, headers, runtime);
}

/**
 * @summary Clears all follows of a specific object type for a digital employee.
 *
 * @description Clears all persisted follows for the current calling user across three independent dimensions: graphName, operatingObjectName, and objectType. This includes historical records, MISSING records, and permission-hidden records that are not visible in the list. The operation does not return invisible object IDs and verifies that the remaining physical record count is zero within the same transaction.
 *
 * @param request ClearOperatingObjectFavoritesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearOperatingObjectFavoritesResponse
 */
ClearOperatingObjectFavoritesResponse Client::clearOperatingObjectFavoritesWithOptions(const ClearOperatingObjectFavoritesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  if (!!request.hasObjectType()) {
    body["objectType"] = request.getObjectType();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ClearOperatingObjectFavorites"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/clearOperatingObjectFavorites")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearOperatingObjectFavoritesResponse>();
}

/**
 * @summary Clears all follows of a specific object type for a digital employee.
 *
 * @description Clears all persisted follows for the current calling user across three independent dimensions: graphName, operatingObjectName, and objectType. This includes historical records, MISSING records, and permission-hidden records that are not visible in the list. The operation does not return invisible object IDs and verifies that the remaining physical record count is zero within the same transaction.
 *
 * @param request ClearOperatingObjectFavoritesRequest
 * @return ClearOperatingObjectFavoritesResponse
 */
ClearOperatingObjectFavoritesResponse Client::clearOperatingObjectFavorites(const ClearOperatingObjectFavoritesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return clearOperatingObjectFavoritesWithOptions(request, headers, runtime);
}

/**
 * @summary Closes workflow to-do items in batches.
 *
 * @description Closes to-do items in batches by workflow. This operation matches all PENDING to-do items for the specified workflow run in the workspace and is idempotent.
 *
 * @param request CloseWorkflowTodosRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseWorkflowTodosResponse
 */
CloseWorkflowTodosResponse Client::closeWorkflowTodosWithOptions(const CloseWorkflowTodosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasSourceWorkflowId()) {
    body["sourceWorkflowId"] = request.getSourceWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloseWorkflowTodos"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/closeWorkflowTodos")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseWorkflowTodosResponse>();
}

/**
 * @summary Closes workflow to-do items in batches.
 *
 * @description Closes to-do items in batches by workflow. This operation matches all PENDING to-do items for the specified workflow run in the workspace and is idempotent.
 *
 * @param request CloseWorkflowTodosRequest
 * @return CloseWorkflowTodosResponse
 */
CloseWorkflowTodosResponse Client::closeWorkflowTodos(const CloseWorkflowTodosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return closeWorkflowTodosWithOptions(request, headers, runtime);
}

/**
 * @summary Converts a direct session to a work session.
 *
 * @description Freezes the currently valid and completed direct model history of the source session and performs replication into a new work session, while retaining the source session. For hybrid sessions, only the direct history is transformed, and ordinary work history or old history containing only display records is not included. The transform scope is not limited by directMaxHistoryRounds. The transform itself does not initiate a chat or run a skill. To query or continue the same transform, invoke the operation repeatedly for the same source session, producing at most one successful target. Upon success, the original target is always returned, and no automatic synchronization applies to subsequent messages in the source session. Only status=succeeded indicates that the target is ready for use. When the status is processing, continue querying with the same source sessionId. You cannot send messages to, fork, or share a target that is not yet ready. SourceBusy is returned if the source session is currently generating content. NoConvertibleHistory is returned if there is no valid model history. ConvertedTargetUnavailable is returned if a previously successful target is deleted or its history is unrecoverable, and the target is not rebuilt. Only ordinary sessions that the user can operate and that have work permissions are allowed. Access control rules deny restricted sources such as group_shared, task_follow_up, skill_follow_up, and skill_output_backfill. Background view permissions do not grant transform rights.
 *
 * @param request ConvertDirectConversationToWorkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertDirectConversationToWorkResponse
 */
ConvertDirectConversationToWorkResponse Client::convertDirectConversationToWorkWithOptions(const ConvertDirectConversationToWorkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ConvertDirectConversationToWork"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/convertDirectConversationToWork")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConvertDirectConversationToWorkResponse>();
}

/**
 * @summary Converts a direct session to a work session.
 *
 * @description Freezes the currently valid and completed direct model history of the source session and performs replication into a new work session, while retaining the source session. For hybrid sessions, only the direct history is transformed, and ordinary work history or old history containing only display records is not included. The transform scope is not limited by directMaxHistoryRounds. The transform itself does not initiate a chat or run a skill. To query or continue the same transform, invoke the operation repeatedly for the same source session, producing at most one successful target. Upon success, the original target is always returned, and no automatic synchronization applies to subsequent messages in the source session. Only status=succeeded indicates that the target is ready for use. When the status is processing, continue querying with the same source sessionId. You cannot send messages to, fork, or share a target that is not yet ready. SourceBusy is returned if the source session is currently generating content. NoConvertibleHistory is returned if there is no valid model history. ConvertedTargetUnavailable is returned if a previously successful target is deleted or its history is unrecoverable, and the target is not rebuilt. Only ordinary sessions that the user can operate and that have work permissions are allowed. Access control rules deny restricted sources such as group_shared, task_follow_up, skill_follow_up, and skill_output_backfill. Background view permissions do not grant transform rights.
 *
 * @param request ConvertDirectConversationToWorkRequest
 * @return ConvertDirectConversationToWorkResponse
 */
ConvertDirectConversationToWorkResponse Client::convertDirectConversationToWork(const ConvertDirectConversationToWorkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return convertDirectConversationToWorkWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the to-do badge counts.
 *
 * @description Retrieves the to-do badge counts for the current user, including the pending count and unread count.
 *
 * @param request CountTodosRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CountTodosResponse
 */
CountTodosResponse Client::countTodosWithOptions(const CountTodosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CountTodos"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/countTodos")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CountTodosResponse>();
}

/**
 * @summary Retrieves the to-do badge counts.
 *
 * @description Retrieves the to-do badge counts for the current user, including the pending count and unread count.
 *
 * @param request CountTodosRequest
 * @return CountTodosResponse
 */
CountTodosResponse Client::countTodos(const CountTodosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return countTodosWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a service notice.
 *
 * @description ## Request description
 * Creates a service notice. The caller must be mapped to a real platform user in the system O&M tenant and must have announcement management permissions.
 * - `priority`: The importance level of the notice. Valid values: URGENT, IMPORTANT, and GENERAL.
 * - `targetTenantIds` / `targetRoleCodes`: Used only when the corresponding target mode is set to SPECIFIED. Pass values as a JSON array.
 * - `effectiveStart` / `effectiveEnd`: ISO 8601 time with time zone.
 * - `publishNow`: If set to true, the notice is published immediately after creation. Otherwise, it is saved as a draft.
 *
 * @param tmpReq CreateAnnouncementRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAnnouncementResponse
 */
CreateAnnouncementResponse Client::createAnnouncementWithOptions(const CreateAnnouncementRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAnnouncementShrinkRequest request = CreateAnnouncementShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTargetRoleCodes()) {
    request.setTargetRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTargetRoleCodes(), "targetRoleCodes", "json"));
  }

  if (!!tmpReq.hasTargetTenantIds()) {
    request.setTargetTenantIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTargetTenantIds(), "targetTenantIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasDisplayPage()) {
    body["displayPage"] = request.getDisplayPage();
  }

  if (!!request.hasDisplayType()) {
    body["displayType"] = request.getDisplayType();
  }

  if (!!request.hasEffectiveEnd()) {
    body["effectiveEnd"] = request.getEffectiveEnd();
  }

  if (!!request.hasEffectiveStart()) {
    body["effectiveStart"] = request.getEffectiveStart();
  }

  if (!!request.hasPriority()) {
    body["priority"] = request.getPriority();
  }

  if (!!request.hasPublishNow()) {
    body["publishNow"] = request.getPublishNow();
  }

  if (!!request.hasTargetRoleCodesShrink()) {
    body["targetRoleCodes"] = request.getTargetRoleCodesShrink();
  }

  if (!!request.hasTargetRoleMode()) {
    body["targetRoleMode"] = request.getTargetRoleMode();
  }

  if (!!request.hasTargetTenantIdsShrink()) {
    body["targetTenantIds"] = request.getTargetTenantIdsShrink();
  }

  if (!!request.hasTargetTenantMode()) {
    body["targetTenantMode"] = request.getTargetTenantMode();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAnnouncement"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createAnnouncement")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAnnouncementResponse>();
}

/**
 * @summary Creates a service notice.
 *
 * @description ## Request description
 * Creates a service notice. The caller must be mapped to a real platform user in the system O&M tenant and must have announcement management permissions.
 * - `priority`: The importance level of the notice. Valid values: URGENT, IMPORTANT, and GENERAL.
 * - `targetTenantIds` / `targetRoleCodes`: Used only when the corresponding target mode is set to SPECIFIED. Pass values as a JSON array.
 * - `effectiveStart` / `effectiveEnd`: ISO 8601 time with time zone.
 * - `publishNow`: If set to true, the notice is published immediately after creation. Otherwise, it is saved as a draft.
 *
 * @param request CreateAnnouncementRequest
 * @return CreateAnnouncementResponse
 */
CreateAnnouncementResponse Client::createAnnouncement(const CreateAnnouncementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAnnouncementWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a session.
 *
 * @param tmpReq CreateConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConversationResponse
 */
CreateConversationResponse Client::createConversationWithOptions(const CreateConversationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateConversationShrinkRequest request = CreateConversationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOperatingObjectName()) {
    request.setOperatingObjectNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOperatingObjectName(), "operatingObjectName", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasMetadata()) {
    body["metadata"] = request.getMetadata();
  }

  if (!!request.hasObjectId()) {
    body["objectId"] = request.getObjectId();
  }

  if (!!request.hasOperatingObjectNameShrink()) {
    body["operatingObjectName"] = request.getOperatingObjectNameShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateConversation"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createConversation")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConversationResponse>();
}

/**
 * @summary Creates a session.
 *
 * @param request CreateConversationRequest
 * @return CreateConversationResponse
 */
CreateConversationResponse Client::createConversation(const CreateConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createConversationWithOptions(request, headers, runtime);
}

/**
 * @summary Registers a custom-only organization.
 *
 * @description Registers a custom-only organization for subsequent department tree push through syncOrgStructure.
 *     Registration logic:
 *     1. Validates the corpId format (must start with a lowercase letter or digit, 3-64 characters, hyphens allowed).
 *     2. Delegates to OrgSyncAuthorizedService to execute registration (includes permission verification and tenant-level uniqueness check).
 *     3. Returns the registration result.
 *     Note: Custom-only organizations support only department tree synchronization. Member relationship synchronization is not supported.
 *
 * @param request CreateCustomOrgRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomOrgResponse
 */
CreateCustomOrgResponse Client::createCustomOrgWithOptions(const CreateCustomOrgRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCorpId()) {
    body["corpId"] = request.getCorpId();
  }

  if (!!request.hasCorpName()) {
    body["corpName"] = request.getCorpName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCustomOrg"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createCustomOrg")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomOrgResponse>();
}

/**
 * @summary Registers a custom-only organization.
 *
 * @description Registers a custom-only organization for subsequent department tree push through syncOrgStructure.
 *     Registration logic:
 *     1. Validates the corpId format (must start with a lowercase letter or digit, 3-64 characters, hyphens allowed).
 *     2. Delegates to OrgSyncAuthorizedService to execute registration (includes permission verification and tenant-level uniqueness check).
 *     3. Returns the registration result.
 *     Note: Custom-only organizations support only department tree synchronization. Member relationship synchronization is not supported.
 *
 * @param request CreateCustomOrgRequest
 * @return CreateCustomOrgResponse
 */
CreateCustomOrgResponse Client::createCustomOrg(const CreateCustomOrgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCustomOrgWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a free exploration work item and a group topic that match the page settings, and configures digital workers and the visibility scope.
 *
 * @description Creates a free exploration work item and a group topic that match the page settings, and configures digital workers and the visibility scope. This operation does not send messages or execute automatically. It is not idempotent. If a timeout occurs, call queryWorkItemFeed first.
 *
 * @param tmpReq CreateFreeExplorationWorkItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFreeExplorationWorkItemResponse
 */
CreateFreeExplorationWorkItemResponse Client::createFreeExplorationWorkItemWithOptions(const CreateFreeExplorationWorkItemRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFreeExplorationWorkItemShrinkRequest request = CreateFreeExplorationWorkItemShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentNames()) {
    request.setAgentNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentNames(), "agentNames", "json"));
  }

  if (!!tmpReq.hasMemberUserIds()) {
    request.setMemberUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMemberUserIds(), "memberUserIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAgentNamesShrink()) {
    body["agentNames"] = request.getAgentNamesShrink();
  }

  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasMemberUserIdsShrink()) {
    body["memberUserIds"] = request.getMemberUserIdsShrink();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  if (!!request.hasVisibility()) {
    body["visibility"] = request.getVisibility();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFreeExplorationWorkItem"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createFreeExplorationWorkItem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFreeExplorationWorkItemResponse>();
}

/**
 * @summary Creates a free exploration work item and a group topic that match the page settings, and configures digital workers and the visibility scope.
 *
 * @description Creates a free exploration work item and a group topic that match the page settings, and configures digital workers and the visibility scope. This operation does not send messages or execute automatically. It is not idempotent. If a timeout occurs, call queryWorkItemFeed first.
 *
 * @param request CreateFreeExplorationWorkItemRequest
 * @return CreateFreeExplorationWorkItemResponse
 */
CreateFreeExplorationWorkItemResponse Client::createFreeExplorationWorkItem(const CreateFreeExplorationWorkItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFreeExplorationWorkItemWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a semantic graph and associates a data source.
 *
 * @description Creates a semantic graph through OpenAPI by synchronously creating a placeholder record with version 0.0.0 and associates a data source during creation.
 * You can edit content through the personal draft API and officially publish it through the product console.
 * Workflow:
 * 1. Verifies permissions. Personal tokens verify semantic management permissions. Deployment or system-level tokens are also allowed.
 * 2. Synchronously writes an active placeholder record to the database with schemaVersion fixed to 0.0.0 and associates the data source. History is not recorded, and runtime reconstruction is not triggered.
 * 3. You can subsequently edit the graph content through personal drafts and officially publish it in the console.
 * Error codes:
 * - ERR.GraphSchema.GraphNameInvalid: The graph name is invalid.
 * - ERR.GraphSchema.GraphNameDuplicated: The graph name already exists.
 * - ERR.GraphSchema.DisplayNameInvalid: The display name is invalid or duplicated.
 * - ERR.GraphDataSource.*: The data source does not exist or is not an RDB type and cannot be associated.
 *
 * @param request CreateGraphRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGraphResponse
 */
CreateGraphResponse Client::createGraphWithOptions(const CreateGraphRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasBusinessProfile()) {
    body["businessProfile"] = request.getBusinessProfile();
  }

  if (!!request.hasDataSourceId()) {
    body["dataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGraph"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createGraph")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGraphResponse>();
}

/**
 * @summary Creates a semantic graph and associates a data source.
 *
 * @description Creates a semantic graph through OpenAPI by synchronously creating a placeholder record with version 0.0.0 and associates a data source during creation.
 * You can edit content through the personal draft API and officially publish it through the product console.
 * Workflow:
 * 1. Verifies permissions. Personal tokens verify semantic management permissions. Deployment or system-level tokens are also allowed.
 * 2. Synchronously writes an active placeholder record to the database with schemaVersion fixed to 0.0.0 and associates the data source. History is not recorded, and runtime reconstruction is not triggered.
 * 3. You can subsequently edit the graph content through personal drafts and officially publish it in the console.
 * Error codes:
 * - ERR.GraphSchema.GraphNameInvalid: The graph name is invalid.
 * - ERR.GraphSchema.GraphNameDuplicated: The graph name already exists.
 * - ERR.GraphSchema.DisplayNameInvalid: The display name is invalid or duplicated.
 * - ERR.GraphDataSource.*: The data source does not exist or is not an RDB type and cannot be associated.
 *
 * @param request CreateGraphRequest
 * @return CreateGraphResponse
 */
CreateGraphResponse Client::createGraph(const CreateGraphRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGraphWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a DingTalk group chat knowledge resource in a group.
 *
 * @description ## Operation description
 * - Connects a specified DingTalk group chat to a group knowledge base that the caller has joined.
 * - The resource type is fixed to ALI_DING, the scope is fixed to GROUP, and the owning user is resolved from the gateway authentication identity.
 * - groupId, chatId, and historyStartTime are required.
 * - updateFrequency can be configured by using a preset or a five-field cron expression for subsequent synchronization frequency.
 * - The server verifies the caller\\"s group membership, the target group directory permissions, and the uniqueness of chatId within the scope.
 *
 * @param tmpReq CreateGroupAliDingChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupAliDingChatResponse
 */
CreateGroupAliDingChatResponse Client::createGroupAliDingChatWithOptions(const CreateGroupAliDingChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateGroupAliDingChatShrinkRequest request = CreateGroupAliDingChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateFrequency()) {
    request.setUpdateFrequencyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateFrequency(), "updateFrequency", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasChatName()) {
    body["chatName"] = request.getChatName();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasHistoryStartTime()) {
    body["historyStartTime"] = request.getHistoryStartTime();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasUpdateFrequencyShrink()) {
    body["updateFrequency"] = request.getUpdateFrequencyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGroupAliDingChat"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createGroupAliDingChat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupAliDingChatResponse>();
}

/**
 * @summary Creates a DingTalk group chat knowledge resource in a group.
 *
 * @description ## Operation description
 * - Connects a specified DingTalk group chat to a group knowledge base that the caller has joined.
 * - The resource type is fixed to ALI_DING, the scope is fixed to GROUP, and the owning user is resolved from the gateway authentication identity.
 * - groupId, chatId, and historyStartTime are required.
 * - updateFrequency can be configured by using a preset or a five-field cron expression for subsequent synchronization frequency.
 * - The server verifies the caller\\"s group membership, the target group directory permissions, and the uniqueness of chatId within the scope.
 *
 * @param request CreateGroupAliDingChatRequest
 * @return CreateGroupAliDingChatResponse
 */
CreateGroupAliDingChatResponse Client::createGroupAliDingChat(const CreateGroupAliDingChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGroupAliDingChatWithOptions(request, headers, runtime);
}

/**
 * @summary Collects an Alibaba DingTalk online document to a collaborative share.
 *
 * @description An authorized member collects a document to a physical folder in the collaborative share. Uses the fixed ALI_DING/Vacuum channel and processes the request asynchronously. Query the resource status after submission.
 *
 * @param request CreateGroupAliDingDocRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupAliDingDocResponse
 */
CreateGroupAliDingDocResponse Client::createGroupAliDingDocWithOptions(const CreateGroupAliDingDocRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFilePublicUrl()) {
    body["filePublicUrl"] = request.getFilePublicUrl();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGroupAliDingDoc"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createGroupAliDingDoc")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupAliDingDocResponse>();
}

/**
 * @summary Collects an Alibaba DingTalk online document to a collaborative share.
 *
 * @description An authorized member collects a document to a physical folder in the collaborative share. Uses the fixed ALI_DING/Vacuum channel and processes the request asynchronously. Query the resource status after submission.
 *
 * @param request CreateGroupAliDingDocRequest
 * @return CreateGroupAliDingDocResponse
 */
CreateGroupAliDingDocResponse Client::createGroupAliDingDoc(const CreateGroupAliDingDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGroupAliDingDocWithOptions(request, headers, runtime);
}

/**
 * @summary Creates common DingTalk group chat knowledge for a group.
 *
 * @description ## Request description
 * - Connects a specified common DingTalk group chat to the group knowledge base that the caller has joined.
 * - The resource type is fixed to DINGTALK, the scope is fixed to GROUP, and the owning user is parsed from the gateway authentication identity.
 * - groupId, chatId, and historyStartTime are required.
 * - You can configure the subsequent synchronization frequency for updateFrequency by using a preset or a five-part cron expression.
 * - The server verifies the caller\\"s group member identity and the target group directory permissions. The same group chat can be created as different sources.
 *
 * @param tmpReq CreateGroupDingtalkChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupDingtalkChatResponse
 */
CreateGroupDingtalkChatResponse Client::createGroupDingtalkChatWithOptions(const CreateGroupDingtalkChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateGroupDingtalkChatShrinkRequest request = CreateGroupDingtalkChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateFrequency()) {
    request.setUpdateFrequencyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateFrequency(), "updateFrequency", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasChatName()) {
    body["chatName"] = request.getChatName();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasHistoryStartTime()) {
    body["historyStartTime"] = request.getHistoryStartTime();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasUpdateFrequencyShrink()) {
    body["updateFrequency"] = request.getUpdateFrequencyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGroupDingtalkChat"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createGroupDingtalkChat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupDingtalkChatResponse>();
}

/**
 * @summary Creates common DingTalk group chat knowledge for a group.
 *
 * @description ## Request description
 * - Connects a specified common DingTalk group chat to the group knowledge base that the caller has joined.
 * - The resource type is fixed to DINGTALK, the scope is fixed to GROUP, and the owning user is parsed from the gateway authentication identity.
 * - groupId, chatId, and historyStartTime are required.
 * - You can configure the subsequent synchronization frequency for updateFrequency by using a preset or a five-part cron expression.
 * - The server verifies the caller\\"s group member identity and the target group directory permissions. The same group chat can be created as different sources.
 *
 * @param request CreateGroupDingtalkChatRequest
 * @return CreateGroupDingtalkChatResponse
 */
CreateGroupDingtalkChatResponse Client::createGroupDingtalkChat(const CreateGroupDingtalkChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGroupDingtalkChatWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a material directory for a collaboration workspace.
 *
 * @description Valid workspace members can create physical subdirectories. If the parent directory is omitted or set to root, the internal root is used and created lazily on the first attempt. The parent directory must belong to the current workspace.
 *
 * @param request CreateGroupDirectoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupDirectoryResponse
 */
CreateGroupDirectoryResponse Client::createGroupDirectoryWithOptions(const CreateGroupDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasParentDirectoryId()) {
    body["parentDirectoryId"] = request.getParentDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGroupDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createGroupDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupDirectoryResponse>();
}

/**
 * @summary Creates a material directory for a collaboration workspace.
 *
 * @description Valid workspace members can create physical subdirectories. If the parent directory is omitted or set to root, the internal root is used and created lazily on the first attempt. The parent directory must belong to the current workspace.
 *
 * @param request CreateGroupDirectoryRequest
 * @return CreateGroupDirectoryResponse
 */
CreateGroupDirectoryResponse Client::createGroupDirectory(const CreateGroupDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGroupDirectoryWithOptions(request, headers, runtime);
}

/**
 * @summary Collects Lark group chat data into a collaboration workspace.
 *
 * @description The trusted platform user serves as a Lark connector user. After workspace authentication is passed, data is collected asynchronously. The frontend queries the details to check the actual status.
 *
 * @param tmpReq CreateGroupFeishuChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupFeishuChatResponse
 */
CreateGroupFeishuChatResponse Client::createGroupFeishuChatWithOptions(const CreateGroupFeishuChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateGroupFeishuChatShrinkRequest request = CreateGroupFeishuChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateFrequency()) {
    request.setUpdateFrequencyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateFrequency(), "updateFrequency", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasHistoryStartTime()) {
    body["historyStartTime"] = request.getHistoryStartTime();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasUpdateFrequencyShrink()) {
    body["updateFrequency"] = request.getUpdateFrequencyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGroupFeishuChat"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createGroupFeishuChat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupFeishuChatResponse>();
}

/**
 * @summary Collects Lark group chat data into a collaboration workspace.
 *
 * @description The trusted platform user serves as a Lark connector user. After workspace authentication is passed, data is collected asynchronously. The frontend queries the details to check the actual status.
 *
 * @param request CreateGroupFeishuChatRequest
 * @return CreateGroupFeishuChatResponse
 */
CreateGroupFeishuChatResponse Client::createGroupFeishuChat(const CreateGroupFeishuChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGroupFeishuChatWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a group knowledge resource from a single Lark online document by using the current user\\"s Lark authorization.
 *
 * @description ## Request description\\n\\nFixed to `ONLINE_DOC + FEISHU + GROUP`. `groupId` is required. If `directoryId` is omitted, the root directory of the group knowledge base is used. Group membership and directory write permissions are verified by the backend.
 *
 * @param tmpReq CreateGroupFeishuDocRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupFeishuDocResponse
 */
CreateGroupFeishuDocResponse Client::createGroupFeishuDocWithOptions(const CreateGroupFeishuDocRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateGroupFeishuDocShrinkRequest request = CreateGroupFeishuDocShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectBindings()) {
    request.setObjectBindingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectBindings(), "objectBindings", "json"));
  }

  if (!!tmpReq.hasSyncConfig()) {
    request.setSyncConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSyncConfig(), "syncConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasDocUrl()) {
    body["docUrl"] = request.getDocUrl();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasObjectBindingsShrink()) {
    body["objectBindings"] = request.getObjectBindingsShrink();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasSyncConfigShrink()) {
    body["syncConfig"] = request.getSyncConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGroupFeishuDoc"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createGroupFeishuDoc")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupFeishuDocResponse>();
}

/**
 * @summary Creates a group knowledge resource from a single Lark online document by using the current user\\"s Lark authorization.
 *
 * @description ## Request description\\n\\nFixed to `ONLINE_DOC + FEISHU + GROUP`. `groupId` is required. If `directoryId` is omitted, the root directory of the group knowledge base is used. Group membership and directory write permissions are verified by the backend.
 *
 * @param request CreateGroupFeishuDocRequest
 * @return CreateGroupFeishuDocResponse
 */
CreateGroupFeishuDocResponse Client::createGroupFeishuDoc(const CreateGroupFeishuDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGroupFeishuDocWithOptions(request, headers, runtime);
}

/**
 * @summary Uploads a local file to a collaborative share.
 *
 * @description First use getSourceUploadSignature to complete the local file PUT operation, then submit the fileRecordId of SOURCE/OSS for the current tenant. The file path and name are read by the server, fixed as FILE/LOCAL/GROUP. Valid members can write to the physical directory of the space. If directoryId is omitted or set to root, the space root directory is used. The creation result is returned. To check the subsequent parsing status, perform a query.
 *
 * @param request CreateGroupFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupFileResponse
 */
CreateGroupFileResponse Client::createGroupFileWithOptions(const CreateGroupFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFileRecordId()) {
    body["fileRecordId"] = request.getFileRecordId();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGroupFile"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createGroupFile")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupFileResponse>();
}

/**
 * @summary Uploads a local file to a collaborative share.
 *
 * @description First use getSourceUploadSignature to complete the local file PUT operation, then submit the fileRecordId of SOURCE/OSS for the current tenant. The file path and name are read by the server, fixed as FILE/LOCAL/GROUP. Valid members can write to the physical directory of the space. If directoryId is omitted or set to root, the space root directory is used. The creation result is returned. To check the subsequent parsing status, perform a query.
 *
 * @param request CreateGroupFileRequest
 * @return CreateGroupFileResponse
 */
CreateGroupFileResponse Client::createGroupFile(const CreateGroupFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGroupFileWithOptions(request, headers, runtime);
}

/**
 * @summary Collects a public web page into a collaborative workspace.
 *
 * @description Allows valid members to collect web pages into a physical directory of the workspace. The resource type is fixed to PUBLIC_URL or GROUP. Use the getGroupSource operation to query the backend status.
 *
 * @param request CreateGroupPublicUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupPublicUrlResponse
 */
CreateGroupPublicUrlResponse Client::createGroupPublicUrlWithOptions(const CreateGroupPublicUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasOriginalUrl()) {
    body["originalUrl"] = request.getOriginalUrl();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGroupPublicUrl"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createGroupPublicUrl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupPublicUrlResponse>();
}

/**
 * @summary Collects a public web page into a collaborative workspace.
 *
 * @description Allows valid members to collect web pages into a physical directory of the workspace. The resource type is fixed to PUBLIC_URL or GROUP. Use the getGroupSource operation to query the backend status.
 *
 * @param request CreateGroupPublicUrlRequest
 * @return CreateGroupPublicUrlResponse
 */
CreateGroupPublicUrlResponse Client::createGroupPublicUrl(const CreateGroupPublicUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGroupPublicUrlWithOptions(request, headers, runtime);
}

/**
 * @summary Uploads plain text to a collaboration workspace.
 *
 * @description Uploads plain text to a physical directory as a valid workspace member. The type is fixed to TEXT or GROUP. If directoryId or root is omitted, the workspace root is resolved. The content and final name follow the provider processing rules. The actual status and actual directory are returned, which does not indicate that the resolution is complete.
 *
 * @param request CreateGroupTextRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupTextResponse
 */
CreateGroupTextResponse Client::createGroupTextWithOptions(const CreateGroupTextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasTextContent()) {
    body["textContent"] = request.getTextContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGroupText"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createGroupText")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupTextResponse>();
}

/**
 * @summary Uploads plain text to a collaboration workspace.
 *
 * @description Uploads plain text to a physical directory as a valid workspace member. The type is fixed to TEXT or GROUP. If directoryId or root is omitted, the workspace root is resolved. The content and final name follow the provider processing rules. The actual status and actual directory are returned, which does not indicate that the resolution is complete.
 *
 * @param request CreateGroupTextRequest
 * @return CreateGroupTextResponse
 */
CreateGroupTextResponse Client::createGroupText(const CreateGroupTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGroupTextWithOptions(request, headers, runtime);
}

/**
 * @summary Uploads an AliDing online document to an enterprise knowledge base. Management permissions are required.
 *
 * @description ## Operation description
 * - Adds an AliDing online document to a specified enterprise knowledge base.
 * - The caller must have the `DEVELOPMENT_KB_MANAGE` feature permission.
 * - The `source_type` parameter is fixed to `ONLINE_DOC`, `platform` is fixed to `ALI_DING`, and `scope` is fixed to `TENANT`.
 * - If `directoryId` is not provided, the document is bound to the root directory of the current digital employee by default. If provided, it must be a valid directory ID under the current tenant.
 * - The `filePublicUrl` parameter is required and specifies the public access URL of the AliDing online document to be uploaded.
 * - Optional parameters include `operatingObjectName` (digital employee name), `description` (resource description), `knowledgeId` (knowledge base ID), and `sourceTags` (resource tags).
 * - A successful response returns information about the newly created resource, such as `sourceId`, `name`, `status`, `directoryId`, and creation time.
 *
 * @param request CreateKnowledgeBaseAliDingDocRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKnowledgeBaseAliDingDocResponse
 */
CreateKnowledgeBaseAliDingDocResponse Client::createKnowledgeBaseAliDingDocWithOptions(const CreateKnowledgeBaseAliDingDocRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFilePublicUrl()) {
    body["filePublicUrl"] = request.getFilePublicUrl();
  }

  if (!!request.hasKnowledgeId()) {
    body["knowledgeId"] = request.getKnowledgeId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBaseAliDingDoc"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createKnowledgeBaseAlidingDoc")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBaseAliDingDocResponse>();
}

/**
 * @summary Uploads an AliDing online document to an enterprise knowledge base. Management permissions are required.
 *
 * @description ## Operation description
 * - Adds an AliDing online document to a specified enterprise knowledge base.
 * - The caller must have the `DEVELOPMENT_KB_MANAGE` feature permission.
 * - The `source_type` parameter is fixed to `ONLINE_DOC`, `platform` is fixed to `ALI_DING`, and `scope` is fixed to `TENANT`.
 * - If `directoryId` is not provided, the document is bound to the root directory of the current digital employee by default. If provided, it must be a valid directory ID under the current tenant.
 * - The `filePublicUrl` parameter is required and specifies the public access URL of the AliDing online document to be uploaded.
 * - Optional parameters include `operatingObjectName` (digital employee name), `description` (resource description), `knowledgeId` (knowledge base ID), and `sourceTags` (resource tags).
 * - A successful response returns information about the newly created resource, such as `sourceId`, `name`, `status`, `directoryId`, and creation time.
 *
 * @param request CreateKnowledgeBaseAliDingDocRequest
 * @return CreateKnowledgeBaseAliDingDocResponse
 */
CreateKnowledgeBaseAliDingDocResponse Client::createKnowledgeBaseAliDingDoc(const CreateKnowledgeBaseAliDingDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBaseAliDingDocWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a new category directory in the enterprise knowledge base.
 *
 * @description ## Request description
 * - This operation allows users with the `DEVELOPMENT_KB_MANAGE` permission to create a new category for the enterprise knowledge base.
 * - You can specify a parent category ID during creation. If not specified, the new category is mounted directly under the root directory of the enterprise knowledge base.
 * - The system automatically checks for issues such as name conflicts and directory depth limits.
 * - The `tenant_id` and `user_id` are obtained only through the authenticated identity. Even if provided in the request body, they are ignored.
 * - Ensure that the provided `parentDirectoryId`, if any, belongs to the current tenant.
 *
 * @param request CreateKnowledgeBaseDirectoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKnowledgeBaseDirectoryResponse
 */
CreateKnowledgeBaseDirectoryResponse Client::createKnowledgeBaseDirectoryWithOptions(const CreateKnowledgeBaseDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasParentDirectoryId()) {
    body["parentDirectoryId"] = request.getParentDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBaseDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createKnowledgeBaseDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBaseDirectoryResponse>();
}

/**
 * @summary Creates a new category directory in the enterprise knowledge base.
 *
 * @description ## Request description
 * - This operation allows users with the `DEVELOPMENT_KB_MANAGE` permission to create a new category for the enterprise knowledge base.
 * - You can specify a parent category ID during creation. If not specified, the new category is mounted directly under the root directory of the enterprise knowledge base.
 * - The system automatically checks for issues such as name conflicts and directory depth limits.
 * - The `tenant_id` and `user_id` are obtained only through the authenticated identity. Even if provided in the request body, they are ignored.
 * - Ensure that the provided `parentDirectoryId`, if any, belongs to the current tenant.
 *
 * @param request CreateKnowledgeBaseDirectoryRequest
 * @return CreateKnowledgeBaseDirectoryResponse
 */
CreateKnowledgeBaseDirectoryResponse Client::createKnowledgeBaseDirectory(const CreateKnowledgeBaseDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBaseDirectoryWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a single Lark online document in the enterprise knowledge base using the current user\\"s Lark authorization.
 *
 * @description ## Request description\\n\\nFixed as `ONLINE_DOC + FEISHU + TENANT`. `directoryId` is required. The invoker must have the enterprise knowledge base feature permission and knowledge base management permission on the target knowledge base.
 *
 * @param tmpReq CreateKnowledgeBaseFeishuDocRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKnowledgeBaseFeishuDocResponse
 */
CreateKnowledgeBaseFeishuDocResponse Client::createKnowledgeBaseFeishuDocWithOptions(const CreateKnowledgeBaseFeishuDocRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateKnowledgeBaseFeishuDocShrinkRequest request = CreateKnowledgeBaseFeishuDocShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectBindings()) {
    request.setObjectBindingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectBindings(), "objectBindings", "json"));
  }

  if (!!tmpReq.hasSyncConfig()) {
    request.setSyncConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSyncConfig(), "syncConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasDocUrl()) {
    body["docUrl"] = request.getDocUrl();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasObjectBindingsShrink()) {
    body["objectBindings"] = request.getObjectBindingsShrink();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasSyncConfigShrink()) {
    body["syncConfig"] = request.getSyncConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBaseFeishuDoc"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createKnowledgeBaseFeishuDoc")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBaseFeishuDocResponse>();
}

/**
 * @summary Creates a single Lark online document in the enterprise knowledge base using the current user\\"s Lark authorization.
 *
 * @description ## Request description\\n\\nFixed as `ONLINE_DOC + FEISHU + TENANT`. `directoryId` is required. The invoker must have the enterprise knowledge base feature permission and knowledge base management permission on the target knowledge base.
 *
 * @param request CreateKnowledgeBaseFeishuDocRequest
 * @return CreateKnowledgeBaseFeishuDocResponse
 */
CreateKnowledgeBaseFeishuDocResponse Client::createKnowledgeBaseFeishuDoc(const CreateKnowledgeBaseFeishuDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBaseFeishuDocWithOptions(request, headers, runtime);
}

/**
 * @summary Uploads a specified file to the enterprise knowledge base. Management permissions are required.
 *
 * @description ## Operation description
 * - This operation uploads a file to the enterprise knowledge base.
 * - The `DEVELOPMENT_KB_MANAGE` permission is required to call this operation.
 * - You must provide the Object Storage Service (OSS) persistent address (`filePath`) of the file when uploading.
 * - Optional parameters include the public access URL and original file name to enhance the completeness of file information.
 * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee.
 * - You can use `sourceTags` to add labels to resources for subsequent management and retrieval.
 * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Ensure that your account balance is sufficient.
 *
 * @param request CreateKnowledgeBaseFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKnowledgeBaseFileResponse
 */
CreateKnowledgeBaseFileResponse Client::createKnowledgeBaseFileWithOptions(const CreateKnowledgeBaseFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFileExt()) {
    body["fileExt"] = request.getFileExt();
  }

  if (!!request.hasFileName()) {
    body["fileName"] = request.getFileName();
  }

  if (!!request.hasFilePath()) {
    body["filePath"] = request.getFilePath();
  }

  if (!!request.hasFilePublicUrl()) {
    body["filePublicUrl"] = request.getFilePublicUrl();
  }

  if (!!request.hasFileRecordId()) {
    body["fileRecordId"] = request.getFileRecordId();
  }

  if (!!request.hasKnowledgeId()) {
    body["knowledgeId"] = request.getKnowledgeId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBaseFile"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createKnowledgeBaseFile")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBaseFileResponse>();
}

/**
 * @summary Uploads a specified file to the enterprise knowledge base. Management permissions are required.
 *
 * @description ## Operation description
 * - This operation uploads a file to the enterprise knowledge base.
 * - The `DEVELOPMENT_KB_MANAGE` permission is required to call this operation.
 * - You must provide the Object Storage Service (OSS) persistent address (`filePath`) of the file when uploading.
 * - Optional parameters include the public access URL and original file name to enhance the completeness of file information.
 * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee.
 * - You can use `sourceTags` to add labels to resources for subsequent management and retrieval.
 * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Ensure that your account balance is sufficient.
 *
 * @param request CreateKnowledgeBaseFileRequest
 * @return CreateKnowledgeBaseFileResponse
 */
CreateKnowledgeBaseFileResponse Client::createKnowledgeBaseFile(const CreateKnowledgeBaseFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBaseFileWithOptions(request, headers, runtime);
}

/**
 * @summary Collects a single public web page into the enterprise knowledge base of the current user.
 *
 * @description ## Request description\\n\\nThe PUBLIC_URL + TENANT combination is fixed, and the user is determined by the trusted OpenAPI identity. A successful creation only indicates that the request is accepted. Invoke getKnowledgeBaseSource to query the background collection status. directoryId is required, and the caller must have knowledge base management permissions on the target knowledge base.
 *
 * @param request CreateKnowledgeBasePublicUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKnowledgeBasePublicUrlResponse
 */
CreateKnowledgeBasePublicUrlResponse Client::createKnowledgeBasePublicUrlWithOptions(const CreateKnowledgeBasePublicUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasOriginalUrl()) {
    body["originalUrl"] = request.getOriginalUrl();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBasePublicUrl"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createKnowledgeBasePublicUrl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBasePublicUrlResponse>();
}

/**
 * @summary Collects a single public web page into the enterprise knowledge base of the current user.
 *
 * @description ## Request description\\n\\nThe PUBLIC_URL + TENANT combination is fixed, and the user is determined by the trusted OpenAPI identity. A successful creation only indicates that the request is accepted. Invoke getKnowledgeBaseSource to query the background collection status. directoryId is required, and the caller must have knowledge base management permissions on the target knowledge base.
 *
 * @param request CreateKnowledgeBasePublicUrlRequest
 * @return CreateKnowledgeBasePublicUrlResponse
 */
CreateKnowledgeBasePublicUrlResponse Client::createKnowledgeBasePublicUrl(const CreateKnowledgeBasePublicUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBasePublicUrlWithOptions(request, headers, runtime);
}

/**
 * @summary Adds plain text content to a specified enterprise knowledge base.
 *
 * @description ## Operation description
 * - This API is used to upload plain text information to an enterprise knowledge base. The caller must have the required management permissions.
 * - The `textContent` field is required and represents the plain text content to upload.
 * - Optional parameters include the digital employee name (`operatingObjectName`) and resource description (`description`), which allow users to customize additional details.
 * - If `directoryId` is provided, the uploaded text is attached to the specified knowledge base folder. If not provided, the text is attached to the root folder of the current digital employee by default.
 * - You can use `sourceTags` to add labels to resources for easier management and retrieval.
 * - Before invoking this operation, make sure that you have correctly configured the authentication method (AK, BearerToken, and APP authentication are supported) and have the `DEVELOPMENT_KB_MANAGE` permission.
 *
 * @param request CreateKnowledgeBaseTextRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKnowledgeBaseTextResponse
 */
CreateKnowledgeBaseTextResponse Client::createKnowledgeBaseTextWithOptions(const CreateKnowledgeBaseTextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasKnowledgeId()) {
    body["knowledgeId"] = request.getKnowledgeId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasTextContent()) {
    body["textContent"] = request.getTextContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBaseText"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createKnowledgeBaseText")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBaseTextResponse>();
}

/**
 * @summary Adds plain text content to a specified enterprise knowledge base.
 *
 * @description ## Operation description
 * - This API is used to upload plain text information to an enterprise knowledge base. The caller must have the required management permissions.
 * - The `textContent` field is required and represents the plain text content to upload.
 * - Optional parameters include the digital employee name (`operatingObjectName`) and resource description (`description`), which allow users to customize additional details.
 * - If `directoryId` is provided, the uploaded text is attached to the specified knowledge base folder. If not provided, the text is attached to the root folder of the current digital employee by default.
 * - You can use `sourceTags` to add labels to resources for easier management and retrieval.
 * - Before invoking this operation, make sure that you have correctly configured the authentication method (AK, BearerToken, and APP authentication are supported) and have the `DEVELOPMENT_KB_MANAGE` permission.
 *
 * @param request CreateKnowledgeBaseTextRequest
 * @return CreateKnowledgeBaseTextResponse
 */
CreateKnowledgeBaseTextResponse Client::createKnowledgeBaseText(const CreateKnowledgeBaseTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBaseTextWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an offline recording in an enterprise knowledge base.
 *
 * @description Creates an uploaded recording as an offline meeting resource in an enterprise knowledge base. The sourceType is fixed to VOICE_MEETING, the scope is fixed to TENANT, and the meeting mode is fixed to OFFLINE. You must specify the target enterprise knowledge base directory directoryId and have administrative permissions for the knowledge base. Personal directories, collaborative workspace directories, and directories of other tenants cannot be used as targets. Call GetSourceUploadSignature with scope=knowledge and PUT the file first, and then pass the returned fileUrl. OSS object keys supported by existing recording services are also compatible. The API itself does not transmit audio binaries. This API reuses the internal offline recording storage, metering and billing, and background transcription pipelines. The resource status returned upon creation does not indicate that transcription is complete. During the creation phase, a transcription task is submitted and the media duration is synchronously detected. The gateway timeout is 300,000 milliseconds. This API does not provide an idempotency key. If a request times out or the connection is disconnected, query the target knowledge base first to confirm whether the resource has been created to avoid duplicate resources or duplicate billing caused by direct retries. The identity is obtained from the unified authentication chain. Specifying the tenant, user, scope, sourceType, or settings in the request body is not accepted.
 *
 * @param request CreateKnowledgeBaseVoiceMeetingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKnowledgeBaseVoiceMeetingResponse
 */
CreateKnowledgeBaseVoiceMeetingResponse Client::createKnowledgeBaseVoiceMeetingWithOptions(const CreateKnowledgeBaseVoiceMeetingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFileUrl()) {
    body["fileUrl"] = request.getFileUrl();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBaseVoiceMeeting"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createKnowledgeBaseVoiceMeeting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBaseVoiceMeetingResponse>();
}

/**
 * @summary Creates an offline recording in an enterprise knowledge base.
 *
 * @description Creates an uploaded recording as an offline meeting resource in an enterprise knowledge base. The sourceType is fixed to VOICE_MEETING, the scope is fixed to TENANT, and the meeting mode is fixed to OFFLINE. You must specify the target enterprise knowledge base directory directoryId and have administrative permissions for the knowledge base. Personal directories, collaborative workspace directories, and directories of other tenants cannot be used as targets. Call GetSourceUploadSignature with scope=knowledge and PUT the file first, and then pass the returned fileUrl. OSS object keys supported by existing recording services are also compatible. The API itself does not transmit audio binaries. This API reuses the internal offline recording storage, metering and billing, and background transcription pipelines. The resource status returned upon creation does not indicate that transcription is complete. During the creation phase, a transcription task is submitted and the media duration is synchronously detected. The gateway timeout is 300,000 milliseconds. This API does not provide an idempotency key. If a request times out or the connection is disconnected, query the target knowledge base first to confirm whether the resource has been created to avoid duplicate resources or duplicate billing caused by direct retries. The identity is obtained from the unified authentication chain. Specifying the tenant, user, scope, sourceType, or settings in the request body is not accepted.
 *
 * @param request CreateKnowledgeBaseVoiceMeetingRequest
 * @return CreateKnowledgeBaseVoiceMeetingResponse
 */
CreateKnowledgeBaseVoiceMeetingResponse Client::createKnowledgeBaseVoiceMeeting(const CreateKnowledgeBaseVoiceMeetingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBaseVoiceMeetingWithOptions(request, headers, runtime);
}

/**
 * @summary Creates personal knowledge from a DingTalk group chat.
 *
 * @description ## Request description
 * - Integrates a specified DingTalk group chat into the personal knowledge base of the current user.
 * - The resource type is fixed to ALI_DING, the scope is fixed to PERSONAL, and the owning user is parsed from the gateway authentication identity.
 * - historyStartTime is required and supports the YYYY-MM-DD or YYYY-MM-DD HH:MM:SS format.
 * - updateFrequency can be configured with a preset or a five-part cron expression for subsequent synchronization frequency.
 * - chatId must be unique within the target personal scope.
 *
 * @param tmpReq CreatePersonalAliDingChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalAliDingChatResponse
 */
CreatePersonalAliDingChatResponse Client::createPersonalAliDingChatWithOptions(const CreatePersonalAliDingChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePersonalAliDingChatShrinkRequest request = CreatePersonalAliDingChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateFrequency()) {
    request.setUpdateFrequencyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateFrequency(), "updateFrequency", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasChatName()) {
    body["chatName"] = request.getChatName();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasHistoryStartTime()) {
    body["historyStartTime"] = request.getHistoryStartTime();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasUpdateFrequencyShrink()) {
    body["updateFrequency"] = request.getUpdateFrequencyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalAliDingChat"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalAliDingChat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalAliDingChatResponse>();
}

/**
 * @summary Creates personal knowledge from a DingTalk group chat.
 *
 * @description ## Request description
 * - Integrates a specified DingTalk group chat into the personal knowledge base of the current user.
 * - The resource type is fixed to ALI_DING, the scope is fixed to PERSONAL, and the owning user is parsed from the gateway authentication identity.
 * - historyStartTime is required and supports the YYYY-MM-DD or YYYY-MM-DD HH:MM:SS format.
 * - updateFrequency can be configured with a preset or a five-part cron expression for subsequent synchronization frequency.
 * - chatId must be unique within the target personal scope.
 *
 * @param request CreatePersonalAliDingChatRequest
 * @return CreatePersonalAliDingChatResponse
 */
CreatePersonalAliDingChatResponse Client::createPersonalAliDingChat(const CreatePersonalAliDingChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalAliDingChatWithOptions(request, headers, runtime);
}

/**
 * @summary Uploads an AliDing meeting file to the personal resource library of the current digital employee.
 *
 * @description ## Request description
 * - This API uploads AliDing meeting materials (such as audio/video files and Shanji links) to the "My Resources" section of a specified digital employee.
 * - The `source_type` is fixed to `ALI_DING_MEETING`, and the `scope` is fixed to `PERSONAL`.
 * - You must provide a public audio/video OSS URL (`ossUrl`) and the original Shanji link (`shanjiUrl`).
 * - Optionally, you can specify a target personal directory ID (`directoryId`). If not specified, the resource is automatically bound to the default root directory of the current digital employee.
 * - You can add a resource description (`description`) and meeting notes (`notes`). The meeting notes can be used for auxiliary analysis.
 * - This operation requires authentication. AK, BearerToken, and APP authentication methods are supported.
 *
 * @param request CreatePersonalAliDingMeetingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalAliDingMeetingResponse
 */
CreatePersonalAliDingMeetingResponse Client::createPersonalAliDingMeetingWithOptions(const CreatePersonalAliDingMeetingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasShanjiUrl()) {
    body["shanjiUrl"] = request.getShanjiUrl();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalAliDingMeeting"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalAliDingMeeting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalAliDingMeetingResponse>();
}

/**
 * @summary Uploads an AliDing meeting file to the personal resource library of the current digital employee.
 *
 * @description ## Request description
 * - This API uploads AliDing meeting materials (such as audio/video files and Shanji links) to the "My Resources" section of a specified digital employee.
 * - The `source_type` is fixed to `ALI_DING_MEETING`, and the `scope` is fixed to `PERSONAL`.
 * - You must provide a public audio/video OSS URL (`ossUrl`) and the original Shanji link (`shanjiUrl`).
 * - Optionally, you can specify a target personal directory ID (`directoryId`). If not specified, the resource is automatically bound to the default root directory of the current digital employee.
 * - You can add a resource description (`description`) and meeting notes (`notes`). The meeting notes can be used for auxiliary analysis.
 * - This operation requires authentication. AK, BearerToken, and APP authentication methods are supported.
 *
 * @param request CreatePersonalAliDingMeetingRequest
 * @return CreatePersonalAliDingMeetingResponse
 */
CreatePersonalAliDingMeetingResponse Client::createPersonalAliDingMeeting(const CreatePersonalAliDingMeetingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalAliDingMeetingWithOptions(request, headers, runtime);
}

/**
 * @summary Uploads an AliDing online document to the personal resources of the current digital employee.
 *
 * @description ## Request description
 * - This API operation adds an AliDing online document to the "My Resources" section of a specified digital employee.
 * - Fixed parameters include `source_type=ONLINE_DOC`, `platform=ALI_DING`, and `scope=PERSONAL`.
 * - If `directoryId` is not provided, the document is attached to the root folder of the current digital employee by default. If `directoryId` is provided, make sure that the folder belongs to the current user and exists under the current digital employee.
 * - During the invoke process, metering is started and related operation logs are recorded.
 * - For security purposes, `tenant_id` and `user_id` are obtained only from the authentication identity. Values provided by the caller for these fields are ignored.
 * - Any validation or execute failure throws an exception through the service and is transformed to a POP error code returned to the caller.
 * ## Related operations
 *
 * @param request CreatePersonalAlidingDocRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalAlidingDocResponse
 */
CreatePersonalAlidingDocResponse Client::createPersonalAlidingDocWithOptions(const CreatePersonalAlidingDocRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFilePublicUrl()) {
    body["filePublicUrl"] = request.getFilePublicUrl();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalAlidingDoc"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalAliDingDoc")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalAlidingDocResponse>();
}

/**
 * @summary Uploads an AliDing online document to the personal resources of the current digital employee.
 *
 * @description ## Request description
 * - This API operation adds an AliDing online document to the "My Resources" section of a specified digital employee.
 * - Fixed parameters include `source_type=ONLINE_DOC`, `platform=ALI_DING`, and `scope=PERSONAL`.
 * - If `directoryId` is not provided, the document is attached to the root folder of the current digital employee by default. If `directoryId` is provided, make sure that the folder belongs to the current user and exists under the current digital employee.
 * - During the invoke process, metering is started and related operation logs are recorded.
 * - For security purposes, `tenant_id` and `user_id` are obtained only from the authentication identity. Values provided by the caller for these fields are ignored.
 * - Any validation or execute failure throws an exception through the service and is transformed to a POP error code returned to the caller.
 * ## Related operations
 *
 * @param request CreatePersonalAlidingDocRequest
 * @return CreatePersonalAlidingDocResponse
 */
CreatePersonalAlidingDocResponse Client::createPersonalAlidingDoc(const CreatePersonalAlidingDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalAlidingDocWithOptions(request, headers, runtime);
}

/**
 * @summary Adds the entire AliDing knowledge base to the personal resources of the current digital employee.
 *
 * @description ## Request description
 * - This API creates an AliDing knowledge base and mounts it under the personal resource directory of the specified digital employee.
 * - `platform` is fixed to `ALI_DING`, and `directory_type` is fixed to `PERSONAL`.
 * - If `directoryId` is provided, the system verifies that the directory exists and belongs to the current tenant and is of the personal type.
 * - During creation, the knowledge base root directory is initialized (with the status set to `RUNNING`), and background tasks are dispatched based on the provided synchronization configuration to pull the remote directory tree and create child nodes.
 * - For security purposes, `tenant_id` and `user_id` are obtained only from the authenticated identity. These fields in the request body are ignored.
 * - The synchronization configuration is optional. If enabled, a cron expression is required. If not provided or disabled, scheduled synchronization is not performed by default.
 * - The knowledge base name can be customized. If not provided, it is automatically populated after background synchronization.
 * - Multi-value object binding is supported. Related information is serialized and stored in the knowledge base metadata.
 *
 * @param tmpReq CreatePersonalAlidingKnowledgeBaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalAlidingKnowledgeBaseResponse
 */
CreatePersonalAlidingKnowledgeBaseResponse Client::createPersonalAlidingKnowledgeBaseWithOptions(const CreatePersonalAlidingKnowledgeBaseRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePersonalAlidingKnowledgeBaseShrinkRequest request = CreatePersonalAlidingKnowledgeBaseShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectBindings()) {
    request.setObjectBindingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectBindings(), "objectBindings", "json"));
  }

  if (!!tmpReq.hasSyncConfig()) {
    request.setSyncConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSyncConfig(), "syncConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasKbName()) {
    body["kbName"] = request.getKbName();
  }

  if (!!request.hasKbUrl()) {
    body["kbUrl"] = request.getKbUrl();
  }

  if (!!request.hasObjectBindingsShrink()) {
    body["objectBindings"] = request.getObjectBindingsShrink();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasSyncConfigShrink()) {
    body["syncConfig"] = request.getSyncConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalAlidingKnowledgeBase"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalAliDingKnowledgeBase")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalAlidingKnowledgeBaseResponse>();
}

/**
 * @summary Adds the entire AliDing knowledge base to the personal resources of the current digital employee.
 *
 * @description ## Request description
 * - This API creates an AliDing knowledge base and mounts it under the personal resource directory of the specified digital employee.
 * - `platform` is fixed to `ALI_DING`, and `directory_type` is fixed to `PERSONAL`.
 * - If `directoryId` is provided, the system verifies that the directory exists and belongs to the current tenant and is of the personal type.
 * - During creation, the knowledge base root directory is initialized (with the status set to `RUNNING`), and background tasks are dispatched based on the provided synchronization configuration to pull the remote directory tree and create child nodes.
 * - For security purposes, `tenant_id` and `user_id` are obtained only from the authenticated identity. These fields in the request body are ignored.
 * - The synchronization configuration is optional. If enabled, a cron expression is required. If not provided or disabled, scheduled synchronization is not performed by default.
 * - The knowledge base name can be customized. If not provided, it is automatically populated after background synchronization.
 * - Multi-value object binding is supported. Related information is serialized and stored in the knowledge base metadata.
 *
 * @param request CreatePersonalAlidingKnowledgeBaseRequest
 * @return CreatePersonalAlidingKnowledgeBaseResponse
 */
CreatePersonalAlidingKnowledgeBaseResponse Client::createPersonalAlidingKnowledgeBase(const CreatePersonalAlidingKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalAlidingKnowledgeBaseWithOptions(request, headers, runtime);
}

/**
 * @summary Creates personal knowledge for a regular DingTalk group chat.
 *
 * @description ## Request description
 * - Integrates a specified regular DingTalk group chat into the personal knowledge base of the current user.
 * - The resource type is fixed to DINGTALK, the scope is fixed to PERSONAL, and the owning user is parsed from the gateway authentication identity.
 * - historyStartTime is required and supports the YYYY-MM-DD or YYYY-MM-DD HH:MM:SS format.
 * - updateFrequency can be configured with a preset or a five-part cron expression for the subsequent synchronization frequency.
 * - The same group chat can be created as different sources, and each source is isolated by sourceId.
 *
 * @param tmpReq CreatePersonalDingtalkChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalDingtalkChatResponse
 */
CreatePersonalDingtalkChatResponse Client::createPersonalDingtalkChatWithOptions(const CreatePersonalDingtalkChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePersonalDingtalkChatShrinkRequest request = CreatePersonalDingtalkChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateFrequency()) {
    request.setUpdateFrequencyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateFrequency(), "updateFrequency", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasChatName()) {
    body["chatName"] = request.getChatName();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasHistoryStartTime()) {
    body["historyStartTime"] = request.getHistoryStartTime();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasUpdateFrequencyShrink()) {
    body["updateFrequency"] = request.getUpdateFrequencyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalDingtalkChat"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalDingtalkChat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalDingtalkChatResponse>();
}

/**
 * @summary Creates personal knowledge for a regular DingTalk group chat.
 *
 * @description ## Request description
 * - Integrates a specified regular DingTalk group chat into the personal knowledge base of the current user.
 * - The resource type is fixed to DINGTALK, the scope is fixed to PERSONAL, and the owning user is parsed from the gateway authentication identity.
 * - historyStartTime is required and supports the YYYY-MM-DD or YYYY-MM-DD HH:MM:SS format.
 * - updateFrequency can be configured with a preset or a five-part cron expression for the subsequent synchronization frequency.
 * - The same group chat can be created as different sources, and each source is isolated by sourceId.
 *
 * @param request CreatePersonalDingtalkChatRequest
 * @return CreatePersonalDingtalkChatResponse
 */
CreatePersonalDingtalkChatResponse Client::createPersonalDingtalkChat(const CreatePersonalDingtalkChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalDingtalkChatWithOptions(request, headers, runtime);
}

/**
 * @deprecated OpenAPI CreatePersonalDingtalkMeeting is deprecated
 *
 * @summary Uploads a DingTalk meeting to the personal resource library of the current digital employee.
 *
 * @description ## Request description
 * - This operation uploads a DingTalk meeting as a resource to the "My Resources" section of a specified digital employee.
 * - `source_type` is fixed to `DINGTALK_MEETING`, and `scope` is fixed to `PERSONAL`.
 * - If `credentialId` is not provided, the system default configurations are used.
 * - If `directoryId` is not specified, the resource is automatically attached to the default root folder of the current digital employee. If specified, it must be an existing personal folder of the invoker under the digital employee.
 * - The optional parameters `description` and `notes` are used to describe the resource and record meeting notes, respectively. The `notes` value is used for auxiliary analysis.
 *
 * @param request CreatePersonalDingtalkMeetingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalDingtalkMeetingResponse
 */
CreatePersonalDingtalkMeetingResponse Client::createPersonalDingtalkMeetingWithOptions(const CreatePersonalDingtalkMeetingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCredentialId()) {
    body["credentialId"] = request.getCredentialId();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasRoomCode()) {
    body["roomCode"] = request.getRoomCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalDingtalkMeeting"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalDingtalkMeeting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalDingtalkMeetingResponse>();
}

/**
 * @deprecated OpenAPI CreatePersonalDingtalkMeeting is deprecated
 *
 * @summary Uploads a DingTalk meeting to the personal resource library of the current digital employee.
 *
 * @description ## Request description
 * - This operation uploads a DingTalk meeting as a resource to the "My Resources" section of a specified digital employee.
 * - `source_type` is fixed to `DINGTALK_MEETING`, and `scope` is fixed to `PERSONAL`.
 * - If `credentialId` is not provided, the system default configurations are used.
 * - If `directoryId` is not specified, the resource is automatically attached to the default root folder of the current digital employee. If specified, it must be an existing personal folder of the invoker under the digital employee.
 * - The optional parameters `description` and `notes` are used to describe the resource and record meeting notes, respectively. The `notes` value is used for auxiliary analysis.
 *
 * @param request CreatePersonalDingtalkMeetingRequest
 * @return CreatePersonalDingtalkMeetingResponse
 */
CreatePersonalDingtalkMeetingResponse Client::createPersonalDingtalkMeeting(const CreatePersonalDingtalkMeetingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalDingtalkMeetingWithOptions(request, headers, runtime);
}

/**
 * @summary Uploads a meeting to the current user\\"s personal knowledge base by using the URL of a standard DingTalk Shanji note.
 *
 * @description ## Request description
 * - This API creates a meeting resource by using a standard DingTalk Shanji note link. The collection method is fixed to the DWS corresponding to personal OAuth.
 * - `source_type` is fixed to `DINGTALK_MEETING`, and `scope` is fixed to `PERSONAL`.
 * - You must provide a standard DingTalk Shanji note link or taskUuid (`shanjiUrl`).
 * - Optionally specify a target personal directory ID (`directoryId`). If not specified, the default root directory of the current digital employee is used.
 * - You can add a resource description (`description`) and meeting notes (`notes`).
 * - This operation supports one of the following authentication methods: AK, BearerToken, or APP.
 *
 * @param request CreatePersonalDingtalkMinutesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalDingtalkMinutesResponse
 */
CreatePersonalDingtalkMinutesResponse Client::createPersonalDingtalkMinutesWithOptions(const CreatePersonalDingtalkMinutesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasShanjiUrl()) {
    body["shanjiUrl"] = request.getShanjiUrl();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalDingtalkMinutes"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalDingtalkMinutes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalDingtalkMinutesResponse>();
}

/**
 * @summary Uploads a meeting to the current user\\"s personal knowledge base by using the URL of a standard DingTalk Shanji note.
 *
 * @description ## Request description
 * - This API creates a meeting resource by using a standard DingTalk Shanji note link. The collection method is fixed to the DWS corresponding to personal OAuth.
 * - `source_type` is fixed to `DINGTALK_MEETING`, and `scope` is fixed to `PERSONAL`.
 * - You must provide a standard DingTalk Shanji note link or taskUuid (`shanjiUrl`).
 * - Optionally specify a target personal directory ID (`directoryId`). If not specified, the default root directory of the current digital employee is used.
 * - You can add a resource description (`description`) and meeting notes (`notes`).
 * - This operation supports one of the following authentication methods: AK, BearerToken, or APP.
 *
 * @param request CreatePersonalDingtalkMinutesRequest
 * @return CreatePersonalDingtalkMinutesResponse
 */
CreatePersonalDingtalkMinutesResponse Client::createPersonalDingtalkMinutes(const CreatePersonalDingtalkMinutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalDingtalkMinutesWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a personal folder (category) under My Resources.
 *
 * @description ## Request description
 * - This API is used to create a personal folder (category) under "My Resources".
 * - If `parentDirectoryId` is not specified, the system automatically uses or creates the default root folder of the current digital employee as the parent folder.
 * - If `parentDirectoryId` is specified, it must be an existing personal folder of the current user under the current digital employee.
 * - `tenant_id` and `user_id` are derived from the authenticated identity only. These fields are ignored if passed in the request body.
 *
 * @param request CreatePersonalDirectoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalDirectoryResponse
 */
CreatePersonalDirectoryResponse Client::createPersonalDirectoryWithOptions(const CreatePersonalDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasParentDirectoryId()) {
    body["parentDirectoryId"] = request.getParentDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalDirectoryResponse>();
}

/**
 * @summary Creates a personal folder (category) under My Resources.
 *
 * @description ## Request description
 * - This API is used to create a personal folder (category) under "My Resources".
 * - If `parentDirectoryId` is not specified, the system automatically uses or creates the default root folder of the current digital employee as the parent folder.
 * - If `parentDirectoryId` is specified, it must be an existing personal folder of the current user under the current digital employee.
 * - `tenant_id` and `user_id` are derived from the authenticated identity only. These fields are ignored if passed in the request body.
 *
 * @param request CreatePersonalDirectoryRequest
 * @return CreatePersonalDirectoryResponse
 */
CreatePersonalDirectoryResponse Client::createPersonalDirectory(const CreatePersonalDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalDirectoryWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a personal knowledge resource from a single Lark group chat using the current user\\"s Lark authorization.
 *
 * @description ## Request description
 * This API uses the Lark application connection managed by the user corresponding to the current OpenAPI identity. It pulls the name and historical messages of the specified group chat through the built-in CLI of the project and creates a knowledge resource in the user\\"s personal knowledge base.
 * - `chatId`: The Lark group chat ID. Must start with `oc_`.
 * - `directoryId` (optional): The target personal directory ID. If omitted, the current user\\"s default personal root directory is used.
 * - `historyStartTime` (optional): The start time for historical messages. Supports `YYYY-MM-DD` or `YYYY-MM-DD HH:MM:SS`.
 * - `updateFrequency` (optional): The Source-level scheduled synchronization configuration. Supports preset frequencies or five-field cron expressions.
 * - `description`, `operatingObjectName`, `notes`, `sourceTags`: Optional Source metadata.
 * Security constraints: The Source Type is fixed to FEISHU, and the knowledge scope is fixed to PERSONAL. The Lark connector user is determined by the POP trusted identity. Credentials or user IDs passed by the caller are not accepted.
 *
 * @param tmpReq CreatePersonalFeishuChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalFeishuChatResponse
 */
CreatePersonalFeishuChatResponse Client::createPersonalFeishuChatWithOptions(const CreatePersonalFeishuChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePersonalFeishuChatShrinkRequest request = CreatePersonalFeishuChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateFrequency()) {
    request.setUpdateFrequencyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateFrequency(), "updateFrequency", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasHistoryStartTime()) {
    body["historyStartTime"] = request.getHistoryStartTime();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasUpdateFrequencyShrink()) {
    body["updateFrequency"] = request.getUpdateFrequencyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalFeishuChat"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalFeishuChat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalFeishuChatResponse>();
}

/**
 * @summary Creates a personal knowledge resource from a single Lark group chat using the current user\\"s Lark authorization.
 *
 * @description ## Request description
 * This API uses the Lark application connection managed by the user corresponding to the current OpenAPI identity. It pulls the name and historical messages of the specified group chat through the built-in CLI of the project and creates a knowledge resource in the user\\"s personal knowledge base.
 * - `chatId`: The Lark group chat ID. Must start with `oc_`.
 * - `directoryId` (optional): The target personal directory ID. If omitted, the current user\\"s default personal root directory is used.
 * - `historyStartTime` (optional): The start time for historical messages. Supports `YYYY-MM-DD` or `YYYY-MM-DD HH:MM:SS`.
 * - `updateFrequency` (optional): The Source-level scheduled synchronization configuration. Supports preset frequencies or five-field cron expressions.
 * - `description`, `operatingObjectName`, `notes`, `sourceTags`: Optional Source metadata.
 * Security constraints: The Source Type is fixed to FEISHU, and the knowledge scope is fixed to PERSONAL. The Lark connector user is determined by the POP trusted identity. Credentials or user IDs passed by the caller are not accepted.
 *
 * @param request CreatePersonalFeishuChatRequest
 * @return CreatePersonalFeishuChatResponse
 */
CreatePersonalFeishuChatResponse Client::createPersonalFeishuChat(const CreatePersonalFeishuChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalFeishuChatWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a personal knowledge resource from a single Lark online document using the current user\\"s Lark authorization.
 *
 * @description ## Request description\\n\\nFixed as `ONLINE_DOC + FEISHU + PERSONAL`. The Lark connector user is determined by the trusted OpenAPI identity. If `directoryId` is omitted, the current user\\"s default personal root directory is used.
 *
 * @param tmpReq CreatePersonalFeishuDocRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalFeishuDocResponse
 */
CreatePersonalFeishuDocResponse Client::createPersonalFeishuDocWithOptions(const CreatePersonalFeishuDocRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePersonalFeishuDocShrinkRequest request = CreatePersonalFeishuDocShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectBindings()) {
    request.setObjectBindingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectBindings(), "objectBindings", "json"));
  }

  if (!!tmpReq.hasSyncConfig()) {
    request.setSyncConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSyncConfig(), "syncConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasDocUrl()) {
    body["docUrl"] = request.getDocUrl();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasObjectBindingsShrink()) {
    body["objectBindings"] = request.getObjectBindingsShrink();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasSyncConfigShrink()) {
    body["syncConfig"] = request.getSyncConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalFeishuDoc"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalFeishuDoc")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalFeishuDocResponse>();
}

/**
 * @summary Creates a personal knowledge resource from a single Lark online document using the current user\\"s Lark authorization.
 *
 * @description ## Request description\\n\\nFixed as `ONLINE_DOC + FEISHU + PERSONAL`. The Lark connector user is determined by the trusted OpenAPI identity. If `directoryId` is omitted, the current user\\"s default personal root directory is used.
 *
 * @param request CreatePersonalFeishuDocRequest
 * @return CreatePersonalFeishuDocResponse
 */
CreatePersonalFeishuDocResponse Client::createPersonalFeishuDoc(const CreatePersonalFeishuDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalFeishuDocWithOptions(request, headers, runtime);
}

/**
 * @summary Uploads a Lark Minutes meeting file to the personal resource library of the current digital employee.
 *
 * @description ## Request description
 * This API uploads a meeting record from Lark Minutes to the "My Resources" section of a specified digital employee. By providing the required parameters, such as the unique identifier of the Lark Minutes record (`minuteToken`) and the credential ID (`credentialId`), you can migrate and save meeting content. If no target directory is specified, the resource is bound to the root directory of the current digital employee by default.
 * - `operatingObjectName`: The name of the digital employee that performs the operation.
 * - `name`: The display name of the uploaded resource in the system.
 * - `minuteToken`: The unique identifier of the meeting from the Lark Minutes platform.
 * - `credentialId`: The ID associated with specific authentication information, used to verify the validity of the request.
 * - `directoryId` (optional): The ID of the target personal directory in which to store the resource. If this field is omitted, the resource is automatically placed in the default location.
 * - `description` (optional): A brief description or note about the uploaded resource.
 * Precautions:
 * - Ensure that the provided `minuteToken` and `credentialId` are valid.
 * - If `directoryId` is specified, confirm that it belongs to one of the available personal directories of the caller in the current digital employee environment.
 *
 * @param request CreatePersonalFeishuMinuteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalFeishuMinuteResponse
 */
CreatePersonalFeishuMinuteResponse Client::createPersonalFeishuMinuteWithOptions(const CreatePersonalFeishuMinuteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCredentialId()) {
    body["credentialId"] = request.getCredentialId();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasMinuteToken()) {
    body["minuteToken"] = request.getMinuteToken();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalFeishuMinute"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalFeishuMinute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalFeishuMinuteResponse>();
}

/**
 * @summary Uploads a Lark Minutes meeting file to the personal resource library of the current digital employee.
 *
 * @description ## Request description
 * This API uploads a meeting record from Lark Minutes to the "My Resources" section of a specified digital employee. By providing the required parameters, such as the unique identifier of the Lark Minutes record (`minuteToken`) and the credential ID (`credentialId`), you can migrate and save meeting content. If no target directory is specified, the resource is bound to the root directory of the current digital employee by default.
 * - `operatingObjectName`: The name of the digital employee that performs the operation.
 * - `name`: The display name of the uploaded resource in the system.
 * - `minuteToken`: The unique identifier of the meeting from the Lark Minutes platform.
 * - `credentialId`: The ID associated with specific authentication information, used to verify the validity of the request.
 * - `directoryId` (optional): The ID of the target personal directory in which to store the resource. If this field is omitted, the resource is automatically placed in the default location.
 * - `description` (optional): A brief description or note about the uploaded resource.
 * Precautions:
 * - Ensure that the provided `minuteToken` and `credentialId` are valid.
 * - If `directoryId` is specified, confirm that it belongs to one of the available personal directories of the caller in the current digital employee environment.
 *
 * @param request CreatePersonalFeishuMinuteRequest
 * @return CreatePersonalFeishuMinuteResponse
 */
CreatePersonalFeishuMinuteResponse Client::createPersonalFeishuMinute(const CreatePersonalFeishuMinuteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalFeishuMinuteWithOptions(request, headers, runtime);
}

/**
 * @summary Uploads a file to the personal resource library of the current digital employee.
 *
 * @description ## Request description
 * - This API uploads a file to the "My Resources" section of a specified digital employee.
 * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
 * - An OSS persistence address (`filePath`) must be provided for the file. Other information such as the public access URL and original file name is optional.
 * - If the destination directory ID (`directoryId`) is not specified, the file is automatically attached to the default root directory of the current digital employee. If it is specified, ensure that the directory belongs to the personal directory of the invoker.
 * - Multiple authentication methods such as AK, BearerToken, and APP are supported to authenticate securely.
 * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
 *
 * @param request CreatePersonalFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalFileResponse
 */
CreatePersonalFileResponse Client::createPersonalFileWithOptions(const CreatePersonalFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFileExt()) {
    body["fileExt"] = request.getFileExt();
  }

  if (!!request.hasFileName()) {
    body["fileName"] = request.getFileName();
  }

  if (!!request.hasFilePath()) {
    body["filePath"] = request.getFilePath();
  }

  if (!!request.hasFilePublicUrl()) {
    body["filePublicUrl"] = request.getFilePublicUrl();
  }

  if (!!request.hasFileRecordId()) {
    body["fileRecordId"] = request.getFileRecordId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalFile"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalFile")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalFileResponse>();
}

/**
 * @summary Uploads a file to the personal resource library of the current digital employee.
 *
 * @description ## Request description
 * - This API uploads a file to the "My Resources" section of a specified digital employee.
 * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
 * - An OSS persistence address (`filePath`) must be provided for the file. Other information such as the public access URL and original file name is optional.
 * - If the destination directory ID (`directoryId`) is not specified, the file is automatically attached to the default root directory of the current digital employee. If it is specified, ensure that the directory belongs to the personal directory of the invoker.
 * - Multiple authentication methods such as AK, BearerToken, and APP are supported to authenticate securely.
 * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
 *
 * @param request CreatePersonalFileRequest
 * @return CreatePersonalFileResponse
 */
CreatePersonalFileResponse Client::createPersonalFile(const CreatePersonalFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalFileWithOptions(request, headers, runtime);
}

/**
 * @summary Collects a single public web page into the current user\\"s personal knowledge base.
 *
 * @description ## Request description\\n\\nFixed to `PUBLIC_URL + PERSONAL`. The user is determined by the trusted OpenAPI identity. Creation only indicates acceptance. Use getSource to query the background collection status. If `directoryId` is omitted, the current user\\"s default personal root directory is used.
 *
 * @param request CreatePersonalPublicUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalPublicUrlResponse
 */
CreatePersonalPublicUrlResponse Client::createPersonalPublicUrlWithOptions(const CreatePersonalPublicUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasOriginalUrl()) {
    body["originalUrl"] = request.getOriginalUrl();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalPublicUrl"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalPublicUrl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalPublicUrlResponse>();
}

/**
 * @summary Collects a single public web page into the current user\\"s personal knowledge base.
 *
 * @description ## Request description\\n\\nFixed to `PUBLIC_URL + PERSONAL`. The user is determined by the trusted OpenAPI identity. Creation only indicates acceptance. Use getSource to query the background collection status. If `directoryId` is omitted, the current user\\"s default personal root directory is used.
 *
 * @param request CreatePersonalPublicUrlRequest
 * @return CreatePersonalPublicUrlResponse
 */
CreatePersonalPublicUrlResponse Client::createPersonalPublicUrl(const CreatePersonalPublicUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalPublicUrlWithOptions(request, headers, runtime);
}

/**
 * @summary Uploads plain text content to the personal resource library of the current digital employee.
 *
 * @description ## Operation description
 * - This API is used to add plain text content to the personal resources of a specified digital employee.
 * - `source_type` is fixed to `TEXT`, and `scope` is fixed to `PERSONAL`.
 * - If `directoryId` is not provided, the content is bound to the root directory of the current digital employee by default. If provided, it must be an existing personal directory of the caller under the digital employee.
 * - `tenant_id` and `user_id` can only be obtained from the authentication identity information. These parameters are ignored if passed through the request body.
 * - A metering process is initiated during the call, and a corresponding `billing_id` is generated.
 * - The text content is written to `unstructured_docs`, and an initial resource record is generated.
 * - Any validation or execution failure throws a `RobjectException`, which is converted to a POP error code by the global middleware and returned to the caller.
 *
 * @param request CreatePersonalTextRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalTextResponse
 */
CreatePersonalTextResponse Client::createPersonalTextWithOptions(const CreatePersonalTextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasTextContent()) {
    body["textContent"] = request.getTextContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalText"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalText")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalTextResponse>();
}

/**
 * @summary Uploads plain text content to the personal resource library of the current digital employee.
 *
 * @description ## Operation description
 * - This API is used to add plain text content to the personal resources of a specified digital employee.
 * - `source_type` is fixed to `TEXT`, and `scope` is fixed to `PERSONAL`.
 * - If `directoryId` is not provided, the content is bound to the root directory of the current digital employee by default. If provided, it must be an existing personal directory of the caller under the digital employee.
 * - `tenant_id` and `user_id` can only be obtained from the authentication identity information. These parameters are ignored if passed through the request body.
 * - A metering process is initiated during the call, and a corresponding `billing_id` is generated.
 * - The text content is written to `unstructured_docs`, and an initial resource record is generated.
 * - Any validation or execution failure throws a `RobjectException`, which is converted to a POP error code by the global middleware and returned to the caller.
 *
 * @param request CreatePersonalTextRequest
 * @return CreatePersonalTextResponse
 */
CreatePersonalTextResponse Client::createPersonalText(const CreatePersonalTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalTextWithOptions(request, headers, runtime);
}

/**
 * @summary Uploads an offline meeting audio file to the personal resources of the current digital employee.
 *
 * @description ## Request description
 * - This API operation uploads an audio file of an offline meeting to My Resources of a specified digital employee.
 * - The `source_type` parameter is fixed to `VOICE_MEETING`, the `scope` parameter is fixed to `PERSONAL`, and the `voice_meeting_type` parameter is fixed to `OFFLINE`.
 * - If `directoryId` is not provided in the request body, the resource is automatically bound to the default root directory. If `directoryId` is provided, it must be an existing personal directory of the current user under the current digital employee.
 * - Calling this API operation starts a background process to transcribe the audio file and returns the information about the newly created resource.
 * - For security purposes, `tenant_id` and `user_id` are obtained only from the authenticated identity. These fields are ignored even if they are included in the request body.
 * - Any validation or execution failure throws an `RobjectException`, which is converted into a POP error code by the global middleware.
 *
 * @param request CreatePersonalVoiceMeetingRequest
 * @param headers CreatePersonalVoiceMeetingHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalVoiceMeetingResponse
 */
CreatePersonalVoiceMeetingResponse Client::createPersonalVoiceMeetingWithOptions(const CreatePersonalVoiceMeetingRequest &request, const CreatePersonalVoiceMeetingHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFileUrl()) {
    body["fileUrl"] = request.getFileUrl();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasRequestId()) {
    realHeaders["requestId"] = Darabonba::Convert::stringVal(headers.getRequestId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalVoiceMeeting"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalVoiceMeeting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalVoiceMeetingResponse>();
}

/**
 * @summary Uploads an offline meeting audio file to the personal resources of the current digital employee.
 *
 * @description ## Request description
 * - This API operation uploads an audio file of an offline meeting to My Resources of a specified digital employee.
 * - The `source_type` parameter is fixed to `VOICE_MEETING`, the `scope` parameter is fixed to `PERSONAL`, and the `voice_meeting_type` parameter is fixed to `OFFLINE`.
 * - If `directoryId` is not provided in the request body, the resource is automatically bound to the default root directory. If `directoryId` is provided, it must be an existing personal directory of the current user under the current digital employee.
 * - Calling this API operation starts a background process to transcribe the audio file and returns the information about the newly created resource.
 * - For security purposes, `tenant_id` and `user_id` are obtained only from the authenticated identity. These fields are ignored even if they are included in the request body.
 * - Any validation or execution failure throws an `RobjectException`, which is converted into a POP error code by the global middleware.
 *
 * @param request CreatePersonalVoiceMeetingRequest
 * @return CreatePersonalVoiceMeetingResponse
 */
CreatePersonalVoiceMeetingResponse Client::createPersonalVoiceMeeting(const CreatePersonalVoiceMeetingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreatePersonalVoiceMeetingHeaders headers = CreatePersonalVoiceMeetingHeaders();
  return createPersonalVoiceMeetingWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a scheduled task.
 *
 * @description ## Request description
 * - This API is used to upload files to the enterprise knowledge base.
 * - You must have the DEVELOPMENT_KB_MANAGE feature permission to call this API.
 * - When uploading a file, you must provide the OSS persistence address of the file (filePath).
 * - Optional parameters include the public access URL of the file and the original file name to enhance the completeness of the file information.
 * - If directoryId is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, it is bound to the default root directory of the current digital employee by default.
 * - You can add tags to resources by using sourceTags for subsequent management and retrieval.
 * - This operation triggers a billing bill (UNSTRUCTURED_PARSE). Make sure your account balance is sufficient.
 *
 * @param tmpReq CreateScheduledTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScheduledTaskResponse
 */
CreateScheduledTaskResponse Client::createScheduledTaskWithOptions(const CreateScheduledTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateScheduledTaskShrinkRequest request = CreateScheduledTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDescription()) {
    request.setDescriptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDescription(), "description", "json"));
  }

  if (!!tmpReq.hasDigitalEmployeeName()) {
    request.setDigitalEmployeeNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDigitalEmployeeName(), "digitalEmployeeName", "json"));
  }

  if (!!tmpReq.hasSegments()) {
    request.setSegmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSegments(), "segments", "json"));
  }

  if (!!tmpReq.hasTaskDetail()) {
    request.setTaskDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskDetail(), "taskDetail", "json"));
  }

  if (!!tmpReq.hasTriggerConfig()) {
    request.setTriggerConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTriggerConfig(), "triggerConfig", "json"));
  }

  if (!!tmpReq.hasVisibleMemberUserIds()) {
    request.setVisibleMemberUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVisibleMemberUserIds(), "visibleMemberUserIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAutoPreference()) {
    body["autoPreference"] = request.getAutoPreference();
  }

  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasDescriptionShrink()) {
    body["description"] = request.getDescriptionShrink();
  }

  if (!!request.hasDigitalEmployeeNameShrink()) {
    body["digitalEmployeeName"] = request.getDigitalEmployeeNameShrink();
  }

  if (!!request.hasIsOpen()) {
    body["isOpen"] = request.getIsOpen();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOutputMode()) {
    body["outputMode"] = request.getOutputMode();
  }

  if (!!request.hasSegmentsShrink()) {
    body["segments"] = request.getSegmentsShrink();
  }

  if (!!request.hasTaskDetailShrink()) {
    body["taskDetail"] = request.getTaskDetailShrink();
  }

  if (!!request.hasTriggerConfigShrink()) {
    body["triggerConfig"] = request.getTriggerConfigShrink();
  }

  if (!!request.hasVisibility()) {
    body["visibility"] = request.getVisibility();
  }

  if (!!request.hasVisibleMemberUserIdsShrink()) {
    body["visibleMemberUserIds"] = request.getVisibleMemberUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateScheduledTask"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createScheduledTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScheduledTaskResponse>();
}

/**
 * @summary Creates a scheduled task.
 *
 * @description ## Request description
 * - This API is used to upload files to the enterprise knowledge base.
 * - You must have the DEVELOPMENT_KB_MANAGE feature permission to call this API.
 * - When uploading a file, you must provide the OSS persistence address of the file (filePath).
 * - Optional parameters include the public access URL of the file and the original file name to enhance the completeness of the file information.
 * - If directoryId is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, it is bound to the default root directory of the current digital employee by default.
 * - You can add tags to resources by using sourceTags for subsequent management and retrieval.
 * - This operation triggers a billing bill (UNSTRUCTURED_PARSE). Make sure your account balance is sufficient.
 *
 * @param request CreateScheduledTaskRequest
 * @return CreateScheduledTaskResponse
 */
CreateScheduledTaskResponse Client::createScheduledTask(const CreateScheduledTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createScheduledTaskWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an enterprise knowledge base root directory or subdirectory in the current tenant, and configures digital employee associations and AI version summaries for standard enterprise root directories.
 *
 * @description Creating an enterprise knowledge base root directory requires the knowledge base management feature permission. Creating a subdirectory requires the management permission of the associated knowledge base. The newly added digital employee association and version summary fields are supported only for standard enterprise knowledge base root directories and cannot be submitted together with a non-null parentId. The directory creation and these configurations are atomically saved in the same operation. After the directory is created, you can use the returned directoryId to call GetKnowledgeBaseConfiguration or the intelligent index configuration API. This API does not have an idempotency key. If a timeout occurs, verify the creation result first to avoid duplicate creations.
 *
 * @param tmpReq CreateTenantDirectoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTenantDirectoryResponse
 */
CreateTenantDirectoryResponse Client::createTenantDirectoryWithOptions(const CreateTenantDirectoryRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTenantDirectoryShrinkRequest request = CreateTenantDirectoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOperatingObjectNames()) {
    request.setOperatingObjectNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOperatingObjectNames(), "operatingObjectNames", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasChangeRecordEnabled()) {
    body["changeRecordEnabled"] = request.getChangeRecordEnabled();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOoVisibilityMode()) {
    body["ooVisibilityMode"] = request.getOoVisibilityMode();
  }

  if (!!request.hasOperatingObjectNamesShrink()) {
    body["operatingObjectNames"] = request.getOperatingObjectNamesShrink();
  }

  if (!!request.hasParentId()) {
    body["parentId"] = request.getParentId();
  }

  if (!!request.hasPath()) {
    body["path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTenantDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createTenantDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTenantDirectoryResponse>();
}

/**
 * @summary Creates an enterprise knowledge base root directory or subdirectory in the current tenant, and configures digital employee associations and AI version summaries for standard enterprise root directories.
 *
 * @description Creating an enterprise knowledge base root directory requires the knowledge base management feature permission. Creating a subdirectory requires the management permission of the associated knowledge base. The newly added digital employee association and version summary fields are supported only for standard enterprise knowledge base root directories and cannot be submitted together with a non-null parentId. The directory creation and these configurations are atomically saved in the same operation. After the directory is created, you can use the returned directoryId to call GetKnowledgeBaseConfiguration or the intelligent index configuration API. This API does not have an idempotency key. If a timeout occurs, verify the creation result first to avoid duplicate creations.
 *
 * @param request CreateTenantDirectoryRequest
 * @return CreateTenantDirectoryResponse
 */
CreateTenantDirectoryResponse Client::createTenantDirectory(const CreateTenantDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTenantDirectoryWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a to-do item.
 *
 * @description Creates a to-do item. The sourceType parameter only accepts OPEN_API. The existence of assignees is not verified, and the caller must ensure the correct mapping.
 *
 * @param tmpReq CreateTodoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTodoResponse
 */
CreateTodoResponse Client::createTodoWithOptions(const CreateTodoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTodoShrinkRequest request = CreateTodoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssigneeUserIds()) {
    request.setAssigneeUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssigneeUserIds(), "assigneeUserIds", "json"));
  }

  if (!!tmpReq.hasQuestions()) {
    request.setQuestionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuestions(), "questions", "json"));
  }

  if (!!tmpReq.hasSourceContext()) {
    request.setSourceContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceContext(), "sourceContext", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAssigneeUserIdsShrink()) {
    body["assigneeUserIds"] = request.getAssigneeUserIdsShrink();
  }

  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasPriority()) {
    body["priority"] = request.getPriority();
  }

  if (!!request.hasQuestionsShrink()) {
    body["questions"] = request.getQuestionsShrink();
  }

  if (!!request.hasSourceContextShrink()) {
    body["sourceContext"] = request.getSourceContextShrink();
  }

  if (!!request.hasSourceType()) {
    body["sourceType"] = request.getSourceType();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTodo"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createTodo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTodoResponse>();
}

/**
 * @summary Creates a to-do item.
 *
 * @description Creates a to-do item. The sourceType parameter only accepts OPEN_API. The existence of assignees is not verified, and the caller must ensure the correct mapping.
 *
 * @param request CreateTodoRequest
 * @return CreateTodoResponse
 */
CreateTodoResponse Client::createTodo(const CreateTodoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTodoWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a user and adds the user to a tenant.
 *
 * @description Creates a user by calling the API.
 *     Business orchestration:
 *     1. Parses roleCodes into role_ids (validates against system role enums).
 *     2. Checks whether the user already exists (used to return the isNewUser flag).
 *     3. Calls UserManagementService.add_tenant_member to complete the creation or addition process (the password must be passed as an RSA ciphertext by the caller).
 *     4. Returns the creation result (including the isNewUser flag).
 *     Error codes:
 *     - ERR.User.DeactivatedInTenant: The user is deactivated in the tenant. Use updateUser to resume the user.
 *     - ERR.User.AlreadyInTenant: The user is already an active member of the tenant.
 *     - ERR.User.DisplayNameDuplicateInTenant: The display name is duplicated within the tenant.
 *
 * @param tmpReq CreateUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateUserShrinkRequest request = CreateUserShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoleCodes()) {
    request.setRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRoleCodes(), "roleCodes", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasPasswordEncrypted()) {
    body["passwordEncrypted"] = request.getPasswordEncrypted();
  }

  if (!!request.hasRoleCodesShrink()) {
    body["roleCodes"] = request.getRoleCodesShrink();
  }

  if (!!request.hasSsoProvider()) {
    body["ssoProvider"] = request.getSsoProvider();
  }

  if (!!request.hasWnAccountId()) {
    body["wnAccountId"] = request.getWnAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateUser"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createUser")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserResponse>();
}

/**
 * @summary Creates a user and adds the user to a tenant.
 *
 * @description Creates a user by calling the API.
 *     Business orchestration:
 *     1. Parses roleCodes into role_ids (validates against system role enums).
 *     2. Checks whether the user already exists (used to return the isNewUser flag).
 *     3. Calls UserManagementService.add_tenant_member to complete the creation or addition process (the password must be passed as an RSA ciphertext by the caller).
 *     4. Returns the creation result (including the isNewUser flag).
 *     Error codes:
 *     - ERR.User.DeactivatedInTenant: The user is deactivated in the tenant. Use updateUser to resume the user.
 *     - ERR.User.AlreadyInTenant: The user is already an active member of the tenant.
 *     - ERR.User.DisplayNameDuplicateInTenant: The display name is duplicated within the tenant.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createUserWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a new user group under the tenant to which the authenticated identity belongs.
 *
 * @description ## Request description
 * You can use this API operation to create a new user group within a specified tenant. The user group name must be unique under the same parent node. If the `parentId` parameter is not provided, the user group is created under the root node by default. You can also add a description for the new user group.
 * ### Important notes
 * - As a common parameter, `tenantId` can be explicitly passed by using the `--tenant-id` option in winnexo-cli.
 * - After the user group is created, the returned details include but are not limited to the user group ID, name, and level.
 *
 * @param request CreateUserGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserGroupResponse
 */
CreateUserGroupResponse Client::createUserGroupWithOptions(const CreateUserGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasParentId()) {
    body["parentId"] = request.getParentId();
  }

  if (!!request.hasUserGroupName()) {
    body["userGroupName"] = request.getUserGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateUserGroup"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createUserGroup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserGroupResponse>();
}

/**
 * @summary Creates a new user group under the tenant to which the authenticated identity belongs.
 *
 * @description ## Request description
 * You can use this API operation to create a new user group within a specified tenant. The user group name must be unique under the same parent node. If the `parentId` parameter is not provided, the user group is created under the root node by default. You can also add a description for the new user group.
 * ### Important notes
 * - As a common parameter, `tenantId` can be explicitly passed by using the `--tenant-id` option in winnexo-cli.
 * - After the user group is created, the returned details include but are not limited to the user group ID, name, and level.
 *
 * @param request CreateUserGroupRequest
 * @return CreateUserGroupResponse
 */
CreateUserGroupResponse Client::createUserGroup(const CreateUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createUserGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a WINNEXO user in the current tenant and assigns roles and user groups to the user.
 *
 * @description ## Request description
 * - This operation creates a WINNEXO user under a specified tenant and optionally assigns system roles and user groups to the user.
 * - The `accountId` parameter serves as the logon account for the user and must be unique.
 * - The `displayName` parameter specifies the display name of the user, which must also be unique within the tenant and cannot exceed 100 characters in length.
 * - The optional `roleCodes` parameter specifies a list of roles for the user. By default, the `APPLICATION_USER` role is assigned.
 * - The `userGroupIds` parameter allows you to add up to 100 user group IDs to the new user. Make sure that all specified user groups belong to the same tenant.
 * - The password must be encrypted by using the RSA-OAEP-SHA256 algorithm and submitted in Base64 format.
 * - This operation supports calls over HTTPS and requires the request body in JSON format.
 * - For security authentication, AK, BearerToken, and APP are supported.
 *
 * @param tmpReq CreateUserWithGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserWithGroupsResponse
 */
CreateUserWithGroupsResponse Client::createUserWithGroupsWithOptions(const CreateUserWithGroupsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateUserWithGroupsShrinkRequest request = CreateUserWithGroupsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoleCodes()) {
    request.setRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRoleCodes(), "roleCodes", "json"));
  }

  if (!!tmpReq.hasUserGroupIds()) {
    request.setUserGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserGroupIds(), "userGroupIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasPasswordEncrypted()) {
    body["passwordEncrypted"] = request.getPasswordEncrypted();
  }

  if (!!request.hasRoleCodesShrink()) {
    body["roleCodes"] = request.getRoleCodesShrink();
  }

  if (!!request.hasUserGroupIdsShrink()) {
    body["userGroupIds"] = request.getUserGroupIdsShrink();
  }

  if (!!request.hasWnAccountId()) {
    body["wnAccountId"] = request.getWnAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateUserWithGroups"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createUserWithGroups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserWithGroupsResponse>();
}

/**
 * @summary Creates a WINNEXO user in the current tenant and assigns roles and user groups to the user.
 *
 * @description ## Request description
 * - This operation creates a WINNEXO user under a specified tenant and optionally assigns system roles and user groups to the user.
 * - The `accountId` parameter serves as the logon account for the user and must be unique.
 * - The `displayName` parameter specifies the display name of the user, which must also be unique within the tenant and cannot exceed 100 characters in length.
 * - The optional `roleCodes` parameter specifies a list of roles for the user. By default, the `APPLICATION_USER` role is assigned.
 * - The `userGroupIds` parameter allows you to add up to 100 user group IDs to the new user. Make sure that all specified user groups belong to the same tenant.
 * - The password must be encrypted by using the RSA-OAEP-SHA256 algorithm and submitted in Base64 format.
 * - This operation supports calls over HTTPS and requires the request body in JSON format.
 * - For security authentication, AK, BearerToken, and APP are supported.
 *
 * @param request CreateUserWithGroupsRequest
 * @return CreateUserWithGroupsResponse
 */
CreateUserWithGroupsResponse Client::createUserWithGroups(const CreateUserWithGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createUserWithGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a Workflow work item and copies the template execution snapshot. Only the WORKFLOW type is accepted.
 *
 * @description Creates a Workflow work item and copies the template execution snapshot. Only the WORKFLOW type is accepted.
 *
 * @param tmpReq CreateWorkItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkItemResponse
 */
CreateWorkItemResponse Client::createWorkItemWithOptions(const CreateWorkItemRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWorkItemShrinkRequest request = CreateWorkItemShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAttachments()) {
    request.setAttachmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAttachments(), "attachments", "json"));
  }

  if (!!tmpReq.hasCollaboratorUserIds()) {
    request.setCollaboratorUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCollaboratorUserIds(), "collaboratorUserIds", "json"));
  }

  if (!!tmpReq.hasWorkflowTemplateIds()) {
    request.setWorkflowTemplateIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWorkflowTemplateIds(), "workflowTemplateIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAcceptanceCriteria()) {
    body["acceptanceCriteria"] = request.getAcceptanceCriteria();
  }

  if (!!request.hasAttachmentsShrink()) {
    body["attachments"] = request.getAttachmentsShrink();
  }

  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasCollaboratorUserIdsShrink()) {
    body["collaboratorUserIds"] = request.getCollaboratorUserIdsShrink();
  }

  if (!!request.hasConversationId()) {
    body["conversationId"] = request.getConversationId();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasItemType()) {
    body["itemType"] = request.getItemType();
  }

  if (!!request.hasOwnerUserId()) {
    body["ownerUserId"] = request.getOwnerUserId();
  }

  if (!!request.hasPriority()) {
    body["priority"] = request.getPriority();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  if (!!request.hasWorkflowTemplateIdsShrink()) {
    body["workflowTemplateIds"] = request.getWorkflowTemplateIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkItem"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createWorkItem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkItemResponse>();
}

/**
 * @summary Creates a Workflow work item and copies the template execution snapshot. Only the WORKFLOW type is accepted.
 *
 * @description Creates a Workflow work item and copies the template execution snapshot. Only the WORKFLOW type is accepted.
 *
 * @param request CreateWorkItemRequest
 * @return CreateWorkItemResponse
 */
CreateWorkItemResponse Client::createWorkItem(const CreateWorkItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkItemWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a work item idempotently by business ID in a specified collaboration workspace, starts an actual run based on a workflow template, and returns the logical instance and the current execution view.
 *
 * @description Combines creation and scheduling without bypassing work item permissions or run admission.
 *
 * @param tmpReq CreateWorkflowInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkflowInstanceResponse
 */
CreateWorkflowInstanceResponse Client::createWorkflowInstanceWithOptions(const CreateWorkflowInstanceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWorkflowInstanceShrinkRequest request = CreateWorkflowInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVariables()) {
    request.setVariablesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVariables(), "variables", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAcceptanceCriteria()) {
    body["acceptanceCriteria"] = request.getAcceptanceCriteria();
  }

  if (!!request.hasBusinessId()) {
    body["businessId"] = request.getBusinessId();
  }

  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasInitiator()) {
    body["initiator"] = request.getInitiator();
  }

  if (!!request.hasPriority()) {
    body["priority"] = request.getPriority();
  }

  if (!!request.hasTemplateId()) {
    body["templateId"] = request.getTemplateId();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  if (!!request.hasVariablesShrink()) {
    body["variables"] = request.getVariablesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkflowInstance"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createWorkflowInstance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkflowInstanceResponse>();
}

/**
 * @summary Creates a work item idempotently by business ID in a specified collaboration workspace, starts an actual run based on a workflow template, and returns the logical instance and the current execution view.
 *
 * @description Combines creation and scheduling without bypassing work item permissions or run admission.
 *
 * @param request CreateWorkflowInstanceRequest
 * @return CreateWorkflowInstanceResponse
 */
CreateWorkflowInstanceResponse Client::createWorkflowInstance(const CreateWorkflowInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkflowInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a new workflow template. Templates with the same name are not overwritten.
 *
 * @description Creates a new workflow template. Templates with the same name are not overwritten.
 *
 * @param tmpReq CreateWorkflowTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkflowTemplateResponse
 */
CreateWorkflowTemplateResponse Client::createWorkflowTemplateWithOptions(const CreateWorkflowTemplateRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWorkflowTemplateShrinkRequest request = CreateWorkflowTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDefinition()) {
    request.setDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDefinition(), "definition", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.getAction();
  }

  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasDefinitionShrink()) {
    body["definition"] = request.getDefinitionShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkflowTemplate"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createWorkflowTemplate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkflowTemplateResponse>();
}

/**
 * @summary Creates a new workflow template. Templates with the same name are not overwritten.
 *
 * @description Creates a new workflow template. Templates with the same name are not overwritten.
 *
 * @param request CreateWorkflowTemplateRequest
 * @return CreateWorkflowTemplateResponse
 */
CreateWorkflowTemplateResponse Client::createWorkflowTemplate(const CreateWorkflowTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkflowTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a draft of a workflow template.
 *
 * @description Generates a draft version of a workflow template for storage management administrators. If the selected version is a draft, the original version is returned without creating a new version, ensuring idempotency. If the selected version is committed, content generation creates a v(maximum version number + 1) draft through replication of the original content. The effective version remains unchanged. You can subsequently use UpdateWorkflowTemplate and pass the returned version to save or commit the draft.
 *
 * @param request CreateWorkflowTemplateDraftVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkflowTemplateDraftVersionResponse
 */
CreateWorkflowTemplateDraftVersionResponse Client::createWorkflowTemplateDraftVersionWithOptions(const CreateWorkflowTemplateDraftVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasTemplateId()) {
    body["templateId"] = request.getTemplateId();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkflowTemplateDraftVersion"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createWorkflowTemplateDraftVersion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkflowTemplateDraftVersionResponse>();
}

/**
 * @summary Creates a draft of a workflow template.
 *
 * @description Generates a draft version of a workflow template for storage management administrators. If the selected version is a draft, the original version is returned without creating a new version, ensuring idempotency. If the selected version is committed, content generation creates a v(maximum version number + 1) draft through replication of the original content. The effective version remains unchanged. You can subsequently use UpdateWorkflowTemplate and pass the returned version to save or commit the draft.
 *
 * @param request CreateWorkflowTemplateDraftVersionRequest
 * @return CreateWorkflowTemplateDraftVersionResponse
 */
CreateWorkflowTemplateDraftVersionResponse Client::createWorkflowTemplateDraftVersion(const CreateWorkflowTemplateDraftVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkflowTemplateDraftVersionWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes resource permissions within applications in batches.
 *
 * @description Invokes the original atomic deletion capability after passing MANAGE verification for each application.
 *
 * @param tmpReq DeleteAppResourcePermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppResourcePermissionsResponse
 */
DeleteAppResourcePermissionsResponse Client::deleteAppResourcePermissionsWithOptions(const DeleteAppResourcePermissionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAppResourcePermissionsShrinkRequest request = DeleteAppResourcePermissionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasItems()) {
    request.setItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getItems(), "items", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasItemsShrink()) {
    body["items"] = request.getItemsShrink();
  }

  if (!!request.hasResourceTenantId()) {
    body["resourceTenantId"] = request.getResourceTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteAppResourcePermissions"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/deleteAppResourcePermissions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppResourcePermissionsResponse>();
}

/**
 * @summary Deletes resource permissions within applications in batches.
 *
 * @description Invokes the original atomic deletion capability after passing MANAGE verification for each application.
 *
 * @param request DeleteAppResourcePermissionsRequest
 * @return DeleteAppResourcePermissionsResponse
 */
DeleteAppResourcePermissionsResponse Client::deleteAppResourcePermissions(const DeleteAppResourcePermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAppResourcePermissionsWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a session.
 *
 * @description ## Request description
 * - This API is used to upload a file to the "My Resources" section of a specified digital employee.
 * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
 * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
 * - If the target directory ID (`directoryId`) is not specified, the file is automatically bound to the default root directory of the current digital employee. If specified, ensure that the directory belongs to the caller\\"s personal directory.
 * - Multiple authentication methods (AK, BearerToken, APP) are supported for security authentication.
 * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
 *
 * @param request DeleteChatSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChatSessionResponse
 */
DeleteChatSessionResponse Client::deleteChatSessionWithOptions(const DeleteChatSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChatSession"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/deleteChatSession")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChatSessionResponse>();
}

/**
 * @summary Deletes a session.
 *
 * @description ## Request description
 * - This API is used to upload a file to the "My Resources" section of a specified digital employee.
 * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
 * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
 * - If the target directory ID (`directoryId`) is not specified, the file is automatically bound to the default root directory of the current digital employee. If specified, ensure that the directory belongs to the caller\\"s personal directory.
 * - Multiple authentication methods (AK, BearerToken, APP) are supported for security authentication.
 * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
 *
 * @param request DeleteChatSessionRequest
 * @return DeleteChatSessionResponse
 */
DeleteChatSessionResponse Client::deleteChatSession(const DeleteChatSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteChatSessionWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a specified source.
 *
 * @description ## Operation description
 * - `tenantId` is derived from the authenticated identity only. Any value passed by the caller is ignored.
 * - `sourceId` is passed through the request body. The registration path is the flat URI `/openapi/deleteSource` and does not contain a `{sourceId}` path template. Do not append the resource ID as a path segment. The gateway performs exact routing based on the flat URI and returns `InvalidAction.NotFound` if the path does not match.
 * - Deletion is irreversible. The parsing results and bindings associated with the resource are invalidated.
 *
 * @param request DeleteSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSourceResponse
 */
DeleteSourceResponse Client::deleteSourceWithOptions(const DeleteSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/deleteSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSourceResponse>();
}

/**
 * @summary Deletes a specified source.
 *
 * @description ## Operation description
 * - `tenantId` is derived from the authenticated identity only. Any value passed by the caller is ignored.
 * - `sourceId` is passed through the request body. The registration path is the flat URI `/openapi/deleteSource` and does not contain a `{sourceId}` path template. Do not append the resource ID as a path segment. The gateway performs exact routing based on the flat URI and returns `InvalidAction.NotFound` if the path does not match.
 * - Deletion is irreversible. The parsing results and bindings associated with the resource are invalidated.
 *
 * @param request DeleteSourceRequest
 * @return DeleteSourceResponse
 */
DeleteSourceResponse Client::deleteSource(const DeleteSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSourceWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an enterprise knowledge base and its subdirectories.
 *
 * @description ## Request description
 * - This API allows you to delete a specific enterprise knowledge base directory.
 * - Set the `deleteMode` parameter to select different deletion strategies, including reject deletion (reject), recursive deletion (recursive), or move the directory to the root directory (move_to_root).
 * - If `deleteMode` is not provided, the default behavior is to reject deletion.
 * - The enterprise directory boundary is validated before the deletion operation.
 *
 * @param request DeleteTenantDirectoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTenantDirectoryResponse
 */
DeleteTenantDirectoryResponse Client::deleteTenantDirectoryWithOptions(const DeleteTenantDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDeleteMode()) {
    body["deleteMode"] = request.getDeleteMode();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteTenantDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/deleteTenantDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTenantDirectoryResponse>();
}

/**
 * @summary Deletes an enterprise knowledge base and its subdirectories.
 *
 * @description ## Request description
 * - This API allows you to delete a specific enterprise knowledge base directory.
 * - Set the `deleteMode` parameter to select different deletion strategies, including reject deletion (reject), recursive deletion (recursive), or move the directory to the root directory (move_to_root).
 * - If `deleteMode` is not provided, the default behavior is to reject deletion.
 * - The enterprise directory boundary is validated before the deletion operation.
 *
 * @param request DeleteTenantDirectoryRequest
 * @return DeleteTenantDirectoryResponse
 */
DeleteTenantDirectoryResponse Client::deleteTenantDirectory(const DeleteTenantDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTenantDirectoryWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a non-processing work item by a valid member and cascades the cleanup of to-do items, node topics, and runtimes.
 *
 * @description Deletes a non-processing work item by a valid member and cascades the cleanup of to-do items, node topics, and runtimes.
 *
 * @param request DeleteWorkItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkItemResponse
 */
DeleteWorkItemResponse Client::deleteWorkItemWithOptions(const DeleteWorkItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteWorkItem"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/deleteWorkItem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkItemResponse>();
}

/**
 * @summary Deletes a non-processing work item by a valid member and cascades the cleanup of to-do items, node topics, and runtimes.
 *
 * @description Deletes a non-processing work item by a valid member and cascades the cleanup of to-do items, node topics, and runtimes.
 *
 * @param request DeleteWorkItemRequest
 * @return DeleteWorkItemResponse
 */
DeleteWorkItemResponse Client::deleteWorkItem(const DeleteWorkItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkItemWithOptions(request, headers, runtime);
}

/**
 * @summary Physically deletes a workflow template and its steps for valid members without performing work item dependency checks.
 *
 * @description Physically deletes a workflow template and its steps for valid members without performing work item dependency checks.
 *
 * @param request DeleteWorkflowTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkflowTemplateResponse
 */
DeleteWorkflowTemplateResponse Client::deleteWorkflowTemplateWithOptions(const DeleteWorkflowTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasTemplateId()) {
    body["templateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteWorkflowTemplate"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/deleteWorkflowTemplate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkflowTemplateResponse>();
}

/**
 * @summary Physically deletes a workflow template and its steps for valid members without performing work item dependency checks.
 *
 * @description Physically deletes a workflow template and its steps for valid members without performing work item dependency checks.
 *
 * @param request DeleteWorkflowTemplateRequest
 * @return DeleteWorkflowTemplateResponse
 */
DeleteWorkflowTemplateResponse Client::deleteWorkflowTemplate(const DeleteWorkflowTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkflowTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a specified version of a workflow template.
 *
 * @description Deletes a specified version of a workflow template as a workspace administrator. Only inactive versions can be deleted. The system denies requests to delete the active version or the last version of the template with a 409 error. After deletion, the list of remaining versions is returned.
 *
 * @param request DeleteWorkflowTemplateVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkflowTemplateVersionResponse
 */
DeleteWorkflowTemplateVersionResponse Client::deleteWorkflowTemplateVersionWithOptions(const DeleteWorkflowTemplateVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasTemplateId()) {
    body["templateId"] = request.getTemplateId();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteWorkflowTemplateVersion"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/deleteWorkflowTemplateVersion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkflowTemplateVersionResponse>();
}

/**
 * @summary Deletes a specified version of a workflow template.
 *
 * @description Deletes a specified version of a workflow template as a workspace administrator. Only inactive versions can be deleted. The system denies requests to delete the active version or the last version of the template with a 409 error. After deletion, the list of remaining versions is returned.
 *
 * @param request DeleteWorkflowTemplateVersionRequest
 * @return DeleteWorkflowTemplateVersionResponse
 */
DeleteWorkflowTemplateVersionResponse Client::deleteWorkflowTemplateVersion(const DeleteWorkflowTemplateVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkflowTemplateVersionWithOptions(request, headers, runtime);
}

/**
 * @summary Disables session sharing.
 *
 * @description Idempotently disables session sharing owned by the current calling user. Existing share links become invalid immediately.
 *
 * @param request DisableConversationShareRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableConversationShareResponse
 */
DisableConversationShareResponse Client::disableConversationShareWithOptions(const DisableConversationShareRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DisableConversationShare"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/disableConversationShare")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableConversationShareResponse>();
}

/**
 * @summary Disables session sharing.
 *
 * @description Idempotently disables session sharing owned by the current calling user. Existing share links become invalid immediately.
 *
 * @param request DisableConversationShareRequest
 * @return DisableConversationShareResponse
 */
DisableConversationShareResponse Client::disableConversationShare(const DisableConversationShareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableConversationShareWithOptions(request, headers, runtime);
}

/**
 * @summary Disables sharing for output item details.
 *
 * @description Idempotently disables sharing for output item details owned by the current calling user, and immediately invalidates previous sharing links. You can locate the target by outputItemId, or precisely by sessionId and outputItemName.
 *
 * @param request DisableOutputItemShareRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableOutputItemShareResponse
 */
DisableOutputItemShareResponse Client::disableOutputItemShareWithOptions(const DisableOutputItemShareRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasOutputItemId()) {
    body["outputItemId"] = request.getOutputItemId();
  }

  if (!!request.hasOutputItemName()) {
    body["outputItemName"] = request.getOutputItemName();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DisableOutputItemShare"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/disableOutputItemShare")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableOutputItemShareResponse>();
}

/**
 * @summary Disables sharing for output item details.
 *
 * @description Idempotently disables sharing for output item details owned by the current calling user, and immediately invalidates previous sharing links. You can locate the target by outputItemId, or precisely by sessionId and outputItemName.
 *
 * @param request DisableOutputItemShareRequest
 * @return DisableOutputItemShareResponse
 */
DisableOutputItemShareResponse Client::disableOutputItemShare(const DisableOutputItemShareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableOutputItemShareWithOptions(request, headers, runtime);
}

/**
 * @summary Disables an API token.
 *
 * @description Disables the INSTANCE token of a user.
 *     Business logic:
 *     1. Retrieves user_id from identity (caller_type=user is enforced).
 *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
 *     3. Calls disable_token (ACTIVE → INACTIVE).
 *     4. Returns disabled=True.
 *     Idempotence: If no ACTIVE token exists, deactivate_all affects 0 rows and does not return an error.
 *
 * @param request DisableTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableTokenResponse
 */
DisableTokenResponse Client::disableTokenWithOptions(const DisableTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasWnUserId()) {
    body["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DisableToken"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/disableToken")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableTokenResponse>();
}

/**
 * @summary Disables an API token.
 *
 * @description Disables the INSTANCE token of a user.
 *     Business logic:
 *     1. Retrieves user_id from identity (caller_type=user is enforced).
 *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
 *     3. Calls disable_token (ACTIVE → INACTIVE).
 *     4. Returns disabled=True.
 *     Idempotence: If no ACTIVE token exists, deactivate_all affects 0 rows and does not return an error.
 *
 * @param request DisableTokenRequest
 * @return DisableTokenResponse
 */
DisableTokenResponse Client::disableToken(const DisableTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableTokenWithOptions(request, headers, runtime);
}

/**
 * @summary Enables session sharing and retrieves the sharing link.
 *
 * @description Enables sharing for a session owned by the current calling user and returns the sharing link. The first time sharing is enabled, a snapshot of the currently shareable messages is taken. Subsequent enabling retains the original link.
 *
 * @param tmpReq EnableConversationShareRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableConversationShareResponse
 */
EnableConversationShareResponse Client::enableConversationShareWithOptions(const EnableConversationShareRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EnableConversationShareShrinkRequest request = EnableConversationShareShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasShareUserGroupIds()) {
    request.setShareUserGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getShareUserGroupIds(), "shareUserGroupIds", "json"));
  }

  if (!!tmpReq.hasShareUserIds()) {
    request.setShareUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getShareUserIds(), "shareUserIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasShareAccessType()) {
    body["shareAccessType"] = request.getShareAccessType();
  }

  if (!!request.hasShareUserGroupIdsShrink()) {
    body["shareUserGroupIds"] = request.getShareUserGroupIdsShrink();
  }

  if (!!request.hasShareUserIdsShrink()) {
    body["shareUserIds"] = request.getShareUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnableConversationShare"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/enableConversationShare")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableConversationShareResponse>();
}

/**
 * @summary Enables session sharing and retrieves the sharing link.
 *
 * @description Enables sharing for a session owned by the current calling user and returns the sharing link. The first time sharing is enabled, a snapshot of the currently shareable messages is taken. Subsequent enabling retains the original link.
 *
 * @param request EnableConversationShareRequest
 * @return EnableConversationShareResponse
 */
EnableConversationShareResponse Client::enableConversationShare(const EnableConversationShareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableConversationShareWithOptions(request, headers, runtime);
}

/**
 * @summary Enables sharing for an output item and retrieves the share link.
 *
 * @description Enables sharing for an output item owned by the current caller and returns the share link. You can locate the output item by outputItemId, or precisely locate it by sessionId and outputItemName. If both methods are provided, outputItemId takes precedence.
 *
 * @param tmpReq EnableOutputItemShareRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableOutputItemShareResponse
 */
EnableOutputItemShareResponse Client::enableOutputItemShareWithOptions(const EnableOutputItemShareRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EnableOutputItemShareShrinkRequest request = EnableOutputItemShareShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasShareUserGroupIds()) {
    request.setShareUserGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getShareUserGroupIds(), "shareUserGroupIds", "json"));
  }

  if (!!tmpReq.hasShareUserIds()) {
    request.setShareUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getShareUserIds(), "shareUserIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasOutputItemId()) {
    body["outputItemId"] = request.getOutputItemId();
  }

  if (!!request.hasOutputItemName()) {
    body["outputItemName"] = request.getOutputItemName();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasShareAccessType()) {
    body["shareAccessType"] = request.getShareAccessType();
  }

  if (!!request.hasShareUserGroupIdsShrink()) {
    body["shareUserGroupIds"] = request.getShareUserGroupIdsShrink();
  }

  if (!!request.hasShareUserIdsShrink()) {
    body["shareUserIds"] = request.getShareUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnableOutputItemShare"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/enableOutputItemShare")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableOutputItemShareResponse>();
}

/**
 * @summary Enables sharing for an output item and retrieves the share link.
 *
 * @description Enables sharing for an output item owned by the current caller and returns the share link. You can locate the output item by outputItemId, or precisely locate it by sessionId and outputItemName. If both methods are provided, outputItemId takes precedence.
 *
 * @param request EnableOutputItemShareRequest
 * @return EnableOutputItemShareResponse
 */
EnableOutputItemShareResponse Client::enableOutputItemShare(const EnableOutputItemShareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableOutputItemShareWithOptions(request, headers, runtime);
}

/**
 * @summary Enables an API token.
 *
 * @description Enables the INSTANCE token for a user (idempotent).
 *     Business logic:
 *     1. Retrieves user_id from identity (caller_type=user is required).
 *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
 *     3. Calls enable_token:
 *        - If an ACTIVE token exists, returns idempotently (only the masked value is returned, and the plaintext is not issued again).
 *        - If an INACTIVE token exists, reactivates it (returns the plaintext).
 *        - If no token exists, creates one (returns the plaintext).
 *     Security constraint: The token plaintext is returned only once when the token is first enabled. Subsequent idempotent calls do not return the plaintext.
 *
 * @param request EnableTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableTokenResponse
 */
EnableTokenResponse Client::enableTokenWithOptions(const EnableTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasWnUserId()) {
    body["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnableToken"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/enableToken")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableTokenResponse>();
}

/**
 * @summary Enables an API token.
 *
 * @description Enables the INSTANCE token for a user (idempotent).
 *     Business logic:
 *     1. Retrieves user_id from identity (caller_type=user is required).
 *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
 *     3. Calls enable_token:
 *        - If an ACTIVE token exists, returns idempotently (only the masked value is returned, and the plaintext is not issued again).
 *        - If an INACTIVE token exists, reactivates it (returns the plaintext).
 *        - If no token exists, creates one (returns the plaintext).
 *     Security constraint: The token plaintext is returned only once when the token is first enabled. Subsequent idempotent calls do not return the plaintext.
 *
 * @param request EnableTokenRequest
 * @return EnableTokenResponse
 */
EnableTokenResponse Client::enableToken(const EnableTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableTokenWithOptions(request, headers, runtime);
}

/**
 * @summary 立即执行定时任务
 *
 * @param request ExecuteScheduledTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteScheduledTaskResponse
 */
ExecuteScheduledTaskResponse Client::executeScheduledTaskWithOptions(const ExecuteScheduledTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteScheduledTask"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/executeScheduledTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteScheduledTaskResponse>();
}

/**
 * @summary 立即执行定时任务
 *
 * @param request ExecuteScheduledTaskRequest
 * @return ExecuteScheduledTaskResponse
 */
ExecuteScheduledTaskResponse Client::executeScheduledTask(const ExecuteScheduledTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeScheduledTaskWithOptions(request, headers, runtime);
}

/**
 * @summary Exports a simplified template definition that can be re-imported by valid members.
 *
 * @description Exports a simplified template definition that can be re-imported by valid members.
 *
 * @param request ExportWorkflowTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportWorkflowTemplateResponse
 */
ExportWorkflowTemplateResponse Client::exportWorkflowTemplateWithOptions(const ExportWorkflowTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasTemplateId()) {
    body["templateId"] = request.getTemplateId();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportWorkflowTemplate"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/exportWorkflowTemplate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportWorkflowTemplateResponse>();
}

/**
 * @summary Exports a simplified template definition that can be re-imported by valid members.
 *
 * @description Exports a simplified template definition that can be re-imported by valid members.
 *
 * @param request ExportWorkflowTemplateRequest
 * @return ExportWorkflowTemplateResponse
 */
ExportWorkflowTemplateResponse Client::exportWorkflowTemplate(const ExportWorkflowTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportWorkflowTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary Generates a non-persistent template draft by calling a large language model (LLM). This operation consumes the LLM quota of the tenant and requires the caller to be a valid member.
 *
 * @description Generates a non-persistent template draft by calling a large language model (LLM). This operation consumes the LLM quota of the tenant and requires the caller to be a valid member.
 *
 * @param tmpReq GenerateWorkflowTemplateDraftRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateWorkflowTemplateDraftResponse
 */
GenerateWorkflowTemplateDraftResponse Client::generateWorkflowTemplateDraftWithOptions(const GenerateWorkflowTemplateDraftRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GenerateWorkflowTemplateDraftShrinkRequest request = GenerateWorkflowTemplateDraftShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPreviousDraft()) {
    request.setPreviousDraftShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPreviousDraft(), "previousDraft", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasPreviousDraftShrink()) {
    body["previousDraft"] = request.getPreviousDraftShrink();
  }

  if (!!request.hasRequirement()) {
    body["requirement"] = request.getRequirement();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateWorkflowTemplateDraft"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/generateWorkflowTemplateDraft")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateWorkflowTemplateDraftResponse>();
}

/**
 * @summary Generates a non-persistent template draft by calling a large language model (LLM). This operation consumes the LLM quota of the tenant and requires the caller to be a valid member.
 *
 * @description Generates a non-persistent template draft by calling a large language model (LLM). This operation consumes the LLM quota of the tenant and requires the caller to be a valid member.
 *
 * @param request GenerateWorkflowTemplateDraftRequest
 * @return GenerateWorkflowTemplateDraftResponse
 */
GenerateWorkflowTemplateDraftResponse Client::generateWorkflowTemplateDraft(const GenerateWorkflowTemplateDraftRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateWorkflowTemplateDraftWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the operation logs of a workflow agent.
 *
 * @description Queries the operation logs of a workflow agent.
 *
 * @param request GetAgentWorkLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentWorkLogResponse
 */
GetAgentWorkLogResponse Client::getAgentWorkLogWithOptions(const GetAgentWorkLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasNodeId()) {
    body["nodeId"] = request.getNodeId();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAgentWorkLog"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getAgentWorkLog")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentWorkLogResponse>();
}

/**
 * @summary Queries the operation logs of a workflow agent.
 *
 * @description Queries the operation logs of a workflow agent.
 *
 * @param request GetAgentWorkLogRequest
 * @return GetAgentWorkLogResponse
 */
GetAgentWorkLogResponse Client::getAgentWorkLog(const GetAgentWorkLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentWorkLogWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves DingTalk meeting minutes content for the Winnexo Lite Workbench.
 *
 * @description ## Request description
 * - This API is exclusively for the Winnexo Lite Workbench.
 * - Retrieves the title, meeting summary, to-do items, and full transcription based on a DingTalk minutes ID.
 * - Audio and video files are not downloaded. If any content fails to be read, the entire request fails.
 *
 * @param request GetAliDingMinutesContentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAliDingMinutesContentResponse
 */
GetAliDingMinutesContentResponse Client::getAliDingMinutesContentWithOptions(const GetAliDingMinutesContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasMinutesId()) {
    body["minutesId"] = request.getMinutesId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAliDingMinutesContent"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getAliDingMinutesContent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAliDingMinutesContentResponse>();
}

/**
 * @summary Retrieves DingTalk meeting minutes content for the Winnexo Lite Workbench.
 *
 * @description ## Request description
 * - This API is exclusively for the Winnexo Lite Workbench.
 * - Retrieves the title, meeting summary, to-do items, and full transcription based on a DingTalk minutes ID.
 * - Audio and video files are not downloaded. If any content fails to be read, the entire request fails.
 *
 * @param request GetAliDingMinutesContentRequest
 * @return GetAliDingMinutesContentResponse
 */
GetAliDingMinutesContentResponse Client::getAliDingMinutesContent(const GetAliDingMinutesContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAliDingMinutesContentWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves session details.
 *
 * @description ## Operation description
 * - This API is used to upload files to the "My Resources" section of a specified digital employee.
 * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
 * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
 * - If the target folder ID (`directoryId`) is not specified, the file is automatically attached to the default root folder of the current digital employee. If specified, ensure that the folder belongs to the invoker\\"s personal folder.
 * - Multiple authentication methods (AK, BearerToken, APP) are supported to authenticate requests.
 * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
 *
 * @param request GetChatSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatSessionResponse
 */
GetChatSessionResponse Client::getChatSessionWithOptions(const GetChatSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.getLimit();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChatSession"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getChatSession")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatSessionResponse>();
}

/**
 * @summary Retrieves session details.
 *
 * @description ## Operation description
 * - This API is used to upload files to the "My Resources" section of a specified digital employee.
 * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
 * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
 * - If the target folder ID (`directoryId`) is not specified, the file is automatically attached to the default root folder of the current digital employee. If specified, ensure that the folder belongs to the invoker\\"s personal folder.
 * - Multiple authentication methods (AK, BearerToken, APP) are supported to authenticate requests.
 * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
 *
 * @param request GetChatSessionRequest
 * @return GetChatSessionResponse
 */
GetChatSessionResponse Client::getChatSession(const GetChatSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getChatSessionWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the content, preview URL, or short-term download URL of a file generated during a digital employee conversation.
 *
 * @description Retrieves the content, preview URL, or short-term download URL of a file generated during a digital employee conversation. This operation supports USER_OUTPUT_ITEM file references in workflow nodes. The caller must pass permission checks for the tenant, space member, and file source. You do not need to register the file as a work item artifact. This operation does not accept artifactId.
 *
 * @param request GetCollaborationGroupOutputItemPreviewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCollaborationGroupOutputItemPreviewResponse
 */
GetCollaborationGroupOutputItemPreviewResponse Client::getCollaborationGroupOutputItemPreviewWithOptions(const GetCollaborationGroupOutputItemPreviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasItemId()) {
    body["itemId"] = request.getItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetCollaborationGroupOutputItemPreview"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getCollaborationGroupOutputItemPreview")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCollaborationGroupOutputItemPreviewResponse>();
}

/**
 * @summary Retrieves the content, preview URL, or short-term download URL of a file generated during a digital employee conversation.
 *
 * @description Retrieves the content, preview URL, or short-term download URL of a file generated during a digital employee conversation. This operation supports USER_OUTPUT_ITEM file references in workflow nodes. The caller must pass permission checks for the tenant, space member, and file source. You do not need to register the file as a work item artifact. This operation does not accept artifactId.
 *
 * @param request GetCollaborationGroupOutputItemPreviewRequest
 * @return GetCollaborationGroupOutputItemPreviewResponse
 */
GetCollaborationGroupOutputItemPreviewResponse Client::getCollaborationGroupOutputItemPreview(const GetCollaborationGroupOutputItemPreviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCollaborationGroupOutputItemPreviewWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the full schema after merging the active schema with personal drafts.
 *
 * @description Retrieves the full schema YAML by merging the active schema with the current user\\"s draft via OpenAPI (personal token only).
 *     Business orchestration:
 *     1. Draft domain identity verification (personal token only. Deploy/system-level tokens are rejected)
 *        and semantic view permission verification.
 *     2. If no personal draft exists, the full active YAML is returned (underlying short path).
 *        If a draft exists, the merged full YAML is returned for editor rendering and pre-publish preview.
 *     Error codes:
 *     - ERR.User.TokenUserOnly: Personal drafts support only user tokens.
 *     - ERR.GraphSchema.*: The knowledge graph does not exist.
 *
 * @param request GetGraphDraftAssembledRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGraphDraftAssembledResponse
 */
GetGraphDraftAssembledResponse Client::getGraphDraftAssembledWithOptions(const GetGraphDraftAssembledRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetGraphDraftAssembled"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getGraphDraftAssembled")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGraphDraftAssembledResponse>();
}

/**
 * @summary Retrieves the full schema after merging the active schema with personal drafts.
 *
 * @description Retrieves the full schema YAML by merging the active schema with the current user\\"s draft via OpenAPI (personal token only).
 *     Business orchestration:
 *     1. Draft domain identity verification (personal token only. Deploy/system-level tokens are rejected)
 *        and semantic view permission verification.
 *     2. If no personal draft exists, the full active YAML is returned (underlying short path).
 *        If a draft exists, the merged full YAML is returned for editor rendering and pre-publish preview.
 *     Error codes:
 *     - ERR.User.TokenUserOnly: Personal drafts support only user tokens.
 *     - ERR.GraphSchema.*: The knowledge graph does not exist.
 *
 * @param request GetGraphDraftAssembledRequest
 * @return GetGraphDraftAssembledResponse
 */
GetGraphDraftAssembledResponse Client::getGraphDraftAssembled(const GetGraphDraftAssembledRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGraphDraftAssembledWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the active Graph Schema readable by the current user.
 *
 * @description Reads the active schema_content and securely trims it based on the token user\\"s semantic resource READ permissions.
 *
 * @param request GetGraphSchemaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGraphSchemaResponse
 */
GetGraphSchemaResponse Client::getGraphSchemaWithOptions(const GetGraphSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetGraphSchema"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getGraphSchema")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGraphSchemaResponse>();
}

/**
 * @summary Retrieves the active Graph Schema readable by the current user.
 *
 * @description Reads the active schema_content and securely trims it based on the token user\\"s semantic resource READ permissions.
 *
 * @param request GetGraphSchemaRequest
 * @return GetGraphSchemaResponse
 */
GetGraphSchemaResponse Client::getGraphSchema(const GetGraphSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGraphSchemaWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the complete schema of a semantic graph from the management perspective.
 *
 * @description Retrieves the complete active schema of a graph from the OpenAPI management perspective. This operation does not perform resource-level permission trimming, but requires semantic view permission at the entry point.
 * graphStatus and hasDraft reflect the personal draft and publish status from the current caller\\"s perspective. Deployment or system-level tokens have no personal identity, so hasDraft is always false.
 * Error codes:
 * - ERR.GraphSchema.GraphSchemaNotFound: The graph does not exist.
 *
 * @param request GetGraphSchemaDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGraphSchemaDetailResponse
 */
GetGraphSchemaDetailResponse Client::getGraphSchemaDetailWithOptions(const GetGraphSchemaDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetGraphSchemaDetail"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getGraphSchemaDetail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGraphSchemaDetailResponse>();
}

/**
 * @summary Retrieves the complete schema of a semantic graph from the management perspective.
 *
 * @description Retrieves the complete active schema of a graph from the OpenAPI management perspective. This operation does not perform resource-level permission trimming, but requires semantic view permission at the entry point.
 * graphStatus and hasDraft reflect the personal draft and publish status from the current caller\\"s perspective. Deployment or system-level tokens have no personal identity, so hasDraft is always false.
 * Error codes:
 * - ERR.GraphSchema.GraphSchemaNotFound: The graph does not exist.
 *
 * @param request GetGraphSchemaDetailRequest
 * @return GetGraphSchemaDetailResponse
 */
GetGraphSchemaDetailResponse Client::getGraphSchemaDetail(const GetGraphSchemaDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGraphSchemaDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the details of a resource in a collaboration space.
 *
 * @description Queries the details of a specified resource visible in a space in read-only mode. Unauthorized and invalid references are denied, and the space folder is not initialized.
 *
 * @param request GetGroupSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupSourceResponse
 */
GetGroupSourceResponse Client::getGroupSourceWithOptions(const GetGroupSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetGroupSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getGroupSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGroupSourceResponse>();
}

/**
 * @summary Retrieves the details of a resource in a collaboration space.
 *
 * @description Queries the details of a specified resource visible in a space in read-only mode. Unauthorized and invalid references are denied, and the space folder is not initialized.
 *
 * @param request GetGroupSourceRequest
 * @return GetGroupSourceResponse
 */
GetGroupSourceResponse Client::getGroupSource(const GetGroupSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGroupSourceWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the expiration time of the most recently created standard package instance for a tenant.
 *
 * @description ## Operation description
 * - This API operation queries the expiration time of the most recently created standard package instance for a specified tenant.
 * - If no standard package instance is found, the `found` field returns `False`.
 * - You can use the `tenantId` parameter to specify the tenant ID. By default, the tenant ID of the caller is used.
 * - The request method is POST and must be called over HTTPS.
 * - Valid authentication information (such as AK, BearerToken, or APP) is required to complete the request.
 *
 * @param request GetInstanceExpireTimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceExpireTimeResponse
 */
GetInstanceExpireTimeResponse Client::getInstanceExpireTimeWithOptions(const GetInstanceExpireTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceExpireTime"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getInstanceExpireTime")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceExpireTimeResponse>();
}

/**
 * @summary Queries the expiration time of the most recently created standard package instance for a tenant.
 *
 * @description ## Operation description
 * - This API operation queries the expiration time of the most recently created standard package instance for a specified tenant.
 * - If no standard package instance is found, the `found` field returns `False`.
 * - You can use the `tenantId` parameter to specify the tenant ID. By default, the tenant ID of the caller is used.
 * - The request method is POST and must be called over HTTPS.
 * - Valid authentication information (such as AK, BearerToken, or APP) is required to complete the request.
 *
 * @param request GetInstanceExpireTimeRequest
 * @return GetInstanceExpireTimeResponse
 */
GetInstanceExpireTimeResponse Client::getInstanceExpireTime(const GetInstanceExpireTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceExpireTimeWithOptions(request, headers, runtime);
}

/**
 * @summary 读取企业知识库配置
 *
 * @description 需要当前租户的平台用户身份及目标知识库管理权限；仅有内容阅读权限不足以读取本接口。仅支持普通企业自建知识库根目录，不支持个人空间、群知识库、子目录或特殊知识库。读取不创建配置。历史未显式设置 ALL 的关联模式返回 SPECIFIED，空名单的含义必须结合模式判断；版本摘要历史缺省为 false。修改这些配置使用 UpdateTenantDirectory，读取 LLM Wiki 配置使用 GetKnowledgeBaseSmartIndexConfiguration。
 *
 * @param request GetKnowledgeBaseConfigurationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKnowledgeBaseConfigurationResponse
 */
GetKnowledgeBaseConfigurationResponse Client::getKnowledgeBaseConfigurationWithOptions(const GetKnowledgeBaseConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetKnowledgeBaseConfiguration"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getKnowledgeBaseConfiguration")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKnowledgeBaseConfigurationResponse>();
}

/**
 * @summary 读取企业知识库配置
 *
 * @description 需要当前租户的平台用户身份及目标知识库管理权限；仅有内容阅读权限不足以读取本接口。仅支持普通企业自建知识库根目录，不支持个人空间、群知识库、子目录或特殊知识库。读取不创建配置。历史未显式设置 ALL 的关联模式返回 SPECIFIED，空名单的含义必须结合模式判断；版本摘要历史缺省为 false。修改这些配置使用 UpdateTenantDirectory，读取 LLM Wiki 配置使用 GetKnowledgeBaseSmartIndexConfiguration。
 *
 * @param request GetKnowledgeBaseConfigurationRequest
 * @return GetKnowledgeBaseConfigurationResponse
 */
GetKnowledgeBaseConfigurationResponse Client::getKnowledgeBaseConfiguration(const GetKnowledgeBaseConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKnowledgeBaseConfigurationWithOptions(request, headers, runtime);
}

/**
 * @summary 读取企业知识库智能索引配置
 *
 * @description 需要当前租户的活跃成员身份；目标知识库管理者或对知识库内容具有可见权限的用户可读取。仅支持普通企业知识库根目录。未配置时返回 enabled=false、revision=0、lifecycle=DISABLED，不创建配置、任务或账单。更新前读取 revision，作为 UpdateKnowledgeBaseSmartIndexConfiguration 的 expectedRevision；更新后可通过本接口查询异步构建和清理状态。
 *
 * @param request GetKnowledgeBaseSmartIndexConfigurationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKnowledgeBaseSmartIndexConfigurationResponse
 */
GetKnowledgeBaseSmartIndexConfigurationResponse Client::getKnowledgeBaseSmartIndexConfigurationWithOptions(const GetKnowledgeBaseSmartIndexConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetKnowledgeBaseSmartIndexConfiguration"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getKnowledgeBaseSmartIndexConfiguration")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKnowledgeBaseSmartIndexConfigurationResponse>();
}

/**
 * @summary 读取企业知识库智能索引配置
 *
 * @description 需要当前租户的活跃成员身份；目标知识库管理者或对知识库内容具有可见权限的用户可读取。仅支持普通企业知识库根目录。未配置时返回 enabled=false、revision=0、lifecycle=DISABLED，不创建配置、任务或账单。更新前读取 revision，作为 UpdateKnowledgeBaseSmartIndexConfiguration 的 expectedRevision；更新后可通过本接口查询异步构建和清理状态。
 *
 * @param request GetKnowledgeBaseSmartIndexConfigurationRequest
 * @return GetKnowledgeBaseSmartIndexConfigurationResponse
 */
GetKnowledgeBaseSmartIndexConfigurationResponse Client::getKnowledgeBaseSmartIndexConfiguration(const GetKnowledgeBaseSmartIndexConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKnowledgeBaseSmartIndexConfigurationWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the details of a specified knowledge item in the enterprise knowledge base.
 *
 * @description ## Operation description
 * - This API operation retrieves the details of a specific knowledge item in the enterprise knowledge base.
 * - Calling this operation requires the `DEVELOPMENT_KB_VIEW` feature permission.
 * - Knowledge details include but are not limited to the knowledge type, name, and description.
 * - The `sourceId` parameter is required to identify the knowledge item to query.
 * - `tenantId` is an optional parameter. The tenant ID of the caller is used by default.
 * - Authentication is supported through `AK`, `BearerToken`, or `APP` methods.
 * - Security constraint: `tenant_id` and `user_id` can only be derived from the authenticated identity.
 *
 * @param request GetKnowledgeBaseSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKnowledgeBaseSourceResponse
 */
GetKnowledgeBaseSourceResponse Client::getKnowledgeBaseSourceWithOptions(const GetKnowledgeBaseSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetKnowledgeBaseSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getKnowledgeBaseSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKnowledgeBaseSourceResponse>();
}

/**
 * @summary Queries the details of a specified knowledge item in the enterprise knowledge base.
 *
 * @description ## Operation description
 * - This API operation retrieves the details of a specific knowledge item in the enterprise knowledge base.
 * - Calling this operation requires the `DEVELOPMENT_KB_VIEW` feature permission.
 * - Knowledge details include but are not limited to the knowledge type, name, and description.
 * - The `sourceId` parameter is required to identify the knowledge item to query.
 * - `tenantId` is an optional parameter. The tenant ID of the caller is used by default.
 * - Authentication is supported through `AK`, `BearerToken`, or `APP` methods.
 * - Security constraint: `tenant_id` and `user_id` can only be derived from the authenticated identity.
 *
 * @param request GetKnowledgeBaseSourceRequest
 * @return GetKnowledgeBaseSourceResponse
 */
GetKnowledgeBaseSourceResponse Client::getKnowledgeBaseSource(const GetKnowledgeBaseSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKnowledgeBaseSourceWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the automatic memory collection switch.
 *
 * @description Manages the memory of a personal or specified writing collaboration workspace based on the authenticated user. The workspace mode inherits active member permissions.
 *
 * @param request GetMemoryAutoExtractionSwitchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMemoryAutoExtractionSwitchResponse
 */
GetMemoryAutoExtractionSwitchResponse Client::getMemoryAutoExtractionSwitchWithOptions(const GetMemoryAutoExtractionSwitchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerType()) {
    body["ownerType"] = request.getOwnerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetMemoryAutoExtractionSwitch"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getMemoryAutoExtractionSwitch")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMemoryAutoExtractionSwitchResponse>();
}

/**
 * @summary Queries the automatic memory collection switch.
 *
 * @description Manages the memory of a personal or specified writing collaboration workspace based on the authenticated user. The workspace mode inherits active member permissions.
 *
 * @param request GetMemoryAutoExtractionSwitchRequest
 * @return GetMemoryAutoExtractionSwitchResponse
 */
GetMemoryAutoExtractionSwitchResponse Client::getMemoryAutoExtractionSwitch(const GetMemoryAutoExtractionSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemoryAutoExtractionSwitchWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the details of a memory.
 *
 * @description Manages personal memories or memories of a specified writing workspace based on the authenticated user. The workspace mode inherits the permissions of active members.
 *
 * @param request GetMemoryDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMemoryDetailResponse
 */
GetMemoryDetailResponse Client::getMemoryDetailWithOptions(const GetMemoryDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerType()) {
    body["ownerType"] = request.getOwnerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetMemoryDetail"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getMemoryDetail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMemoryDetailResponse>();
}

/**
 * @summary Queries the details of a memory.
 *
 * @description Manages personal memories or memories of a specified writing workspace based on the authenticated user. The workspace mode inherits the permissions of active members.
 *
 * @param request GetMemoryDetailRequest
 * @return GetMemoryDetailResponse
 */
GetMemoryDetailResponse Client::getMemoryDetail(const GetMemoryDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemoryDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the details of an instance node.
 *
 * @description Queries the complete details of an instance node.
 *
 * @param request GetNodeDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeDetailResponse
 */
GetNodeDetailResponse Client::getNodeDetailWithOptions(const GetNodeDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasInstanceId()) {
    body["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    body["nodeId"] = request.getNodeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetNodeDetail"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getNodeDetail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeDetailResponse>();
}

/**
 * @summary Queries the details of an instance node.
 *
 * @description Queries the complete details of an instance node.
 *
 * @param request GetNodeDetailRequest
 * @return GetNodeDetailResponse
 */
GetNodeDetailResponse Client::getNodeDetail(const GetNodeDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getNodeDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the sessions of personal scheduled tasks.
 *
 * @description ## Request description
 * - This operation uploads a file to the enterprise knowledge base.
 * - You must have the DEVELOPMENT_KB_MANAGE feature permission to call this API.
 * - You must provide the OSS persistence URL (filePath) of the file when uploading a file.
 * - Optional parameters include the public access URL and original file name to enhance the completeness of file information.
 * - If you specify directoryId, the file is placed in the specified enterprise knowledge base directory. Otherwise, the file is placed in the default root directory of the current digital employee.
 * - You can use sourceTags to add tags to resources for subsequent management and retrieval.
 * - This operation generates a bill for UNSTRUCTURED_PARSE. Make sure that your account balance is sufficient.
 *
 * @param request GetScheduledTaskConversationRecordsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScheduledTaskConversationRecordsResponse
 */
GetScheduledTaskConversationRecordsResponse Client::getScheduledTaskConversationRecordsWithOptions(const GetScheduledTaskConversationRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasInitiatorUserId()) {
    query["initiatorUserId"] = request.getInitiatorUserId();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScheduledTaskConversationRecords"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getScheduledTaskConversationRecords")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScheduledTaskConversationRecordsResponse>();
}

/**
 * @summary Queries the sessions of personal scheduled tasks.
 *
 * @description ## Request description
 * - This operation uploads a file to the enterprise knowledge base.
 * - You must have the DEVELOPMENT_KB_MANAGE feature permission to call this API.
 * - You must provide the OSS persistence URL (filePath) of the file when uploading a file.
 * - Optional parameters include the public access URL and original file name to enhance the completeness of file information.
 * - If you specify directoryId, the file is placed in the specified enterprise knowledge base directory. Otherwise, the file is placed in the default root directory of the current digital employee.
 * - You can use sourceTags to add tags to resources for subsequent management and retrieval.
 * - This operation generates a bill for UNSTRUCTURED_PARSE. Make sure that your account balance is sufficient.
 *
 * @param request GetScheduledTaskConversationRecordsRequest
 * @return GetScheduledTaskConversationRecordsResponse
 */
GetScheduledTaskConversationRecordsResponse Client::getScheduledTaskConversationRecords(const GetScheduledTaskConversationRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getScheduledTaskConversationRecordsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the execution details of a scheduled task.
 *
 * @description ## Request description
 * - This API is used to upload files to the enterprise knowledge base.
 * - You must have the `DEVELOPMENT_KB_MANAGE` feature permission to call this API.
 * - When uploading a file, you must provide the OSS persistent address (`filePath`) of the file.
 * - Optional parameters include the public access URL and original file name of the file to enhance the completeness of the file information.
 * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee by default.
 * - You can use `sourceTags` to add tags to resources for subsequent management and retrieval.
 * - This operation triggers billing (UNSTRUCTURED_PARSE). Make sure that your account balance is sufficient.
 *
 * @param request GetScheduledTaskExecutionDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScheduledTaskExecutionDetailResponse
 */
GetScheduledTaskExecutionDetailResponse Client::getScheduledTaskExecutionDetailWithOptions(const GetScheduledTaskExecutionDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasExecutionId()) {
    query["executionId"] = request.getExecutionId();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScheduledTaskExecutionDetail"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getScheduledTaskExecutionDetail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScheduledTaskExecutionDetailResponse>();
}

/**
 * @summary Retrieves the execution details of a scheduled task.
 *
 * @description ## Request description
 * - This API is used to upload files to the enterprise knowledge base.
 * - You must have the `DEVELOPMENT_KB_MANAGE` feature permission to call this API.
 * - When uploading a file, you must provide the OSS persistent address (`filePath`) of the file.
 * - Optional parameters include the public access URL and original file name of the file to enhance the completeness of the file information.
 * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee by default.
 * - You can use `sourceTags` to add tags to resources for subsequent management and retrieval.
 * - This operation triggers billing (UNSTRUCTURED_PARSE). Make sure that your account balance is sufficient.
 *
 * @param request GetScheduledTaskExecutionDetailRequest
 * @return GetScheduledTaskExecutionDetailResponse
 */
GetScheduledTaskExecutionDetailResponse Client::getScheduledTaskExecutionDetail(const GetScheduledTaskExecutionDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getScheduledTaskExecutionDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the execution records of scheduled tasks.
 *
 * @description ## Request description
 * - This operation uploads files to the enterprise knowledge base.
 * - You must have the `DEVELOPMENT_KB_MANAGE` feature permission to call this API.
 * - When uploading a file, you must provide the OSS persistence address of the file (`filePath`).
 * - Optional parameters include the public access URL and original file name of the file to enhance the completeness of the file information.
 * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee.
 * - You can use `sourceTags` to add tags to resources for subsequent management and retrieval.
 * - This operation triggers a bill for UNSTRUCTURED_PARSE. Make sure that your account balance is sufficient.
 *
 * @param request GetScheduledTaskExecutionRecordsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScheduledTaskExecutionRecordsResponse
 */
GetScheduledTaskExecutionRecordsResponse Client::getScheduledTaskExecutionRecordsWithOptions(const GetScheduledTaskExecutionRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasCollaborationGroupId()) {
    query["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasInitiatorUserId()) {
    query["initiatorUserId"] = request.getInitiatorUserId();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScheduledTaskExecutionRecords"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getScheduledTaskExecutionRecords")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScheduledTaskExecutionRecordsResponse>();
}

/**
 * @summary Retrieves the execution records of scheduled tasks.
 *
 * @description ## Request description
 * - This operation uploads files to the enterprise knowledge base.
 * - You must have the `DEVELOPMENT_KB_MANAGE` feature permission to call this API.
 * - When uploading a file, you must provide the OSS persistence address of the file (`filePath`).
 * - Optional parameters include the public access URL and original file name of the file to enhance the completeness of the file information.
 * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee.
 * - You can use `sourceTags` to add tags to resources for subsequent management and retrieval.
 * - This operation triggers a bill for UNSTRUCTURED_PARSE. Make sure that your account balance is sufficient.
 *
 * @param request GetScheduledTaskExecutionRecordsRequest
 * @return GetScheduledTaskExecutionRecordsResponse
 */
GetScheduledTaskExecutionRecordsResponse Client::getScheduledTaskExecutionRecords(const GetScheduledTaskExecutionRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getScheduledTaskExecutionRecordsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the push configuration options for scheduled tasks.
 *
 * @description Queries the channels and methods available to the current user for scheduled task push notifications.
 *
 * @param request GetScheduledTaskPushOptionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScheduledTaskPushOptionsResponse
 */
GetScheduledTaskPushOptionsResponse Client::getScheduledTaskPushOptionsWithOptions(const GetScheduledTaskPushOptionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasDigitalEmployeeName()) {
    body["digitalEmployeeName"] = request.getDigitalEmployeeName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetScheduledTaskPushOptions"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getScheduledTaskPushOptions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScheduledTaskPushOptionsResponse>();
}

/**
 * @summary Retrieves the push configuration options for scheduled tasks.
 *
 * @description Queries the channels and methods available to the current user for scheduled task push notifications.
 *
 * @param request GetScheduledTaskPushOptionsRequest
 * @return GetScheduledTaskPushOptionsResponse
 */
GetScheduledTaskPushOptionsResponse Client::getScheduledTaskPushOptions(const GetScheduledTaskPushOptionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getScheduledTaskPushOptionsWithOptions(request, headers, runtime);
}

/**
 * @deprecated OpenAPI GetScheduledTaskUnderstandDetail is deprecated
 *
 * @summary Retrieves the details of scheduled task understanding.
 *
 * @description ## Request description
 * - This operation uploads a file to the enterprise knowledge base.
 * - You must have the `DEVELOPMENT_KB_MANAGE` permission to call this operation.
 * - You must provide the OSS persistent address (`filePath`) of the file when uploading.
 * - Optional parameters include the public access URL and original file name of the file to enhance the completeness of file information.
 * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee by default.
 * - You can add tags to the resource by using `sourceTags` for subsequent management and retrieval.
 * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Make sure that your account balance is sufficient.
 *
 * @param tmpReq GetScheduledTaskUnderstandDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScheduledTaskUnderstandDetailResponse
 */
GetScheduledTaskUnderstandDetailResponse Client::getScheduledTaskUnderstandDetailWithOptions(const GetScheduledTaskUnderstandDetailRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetScheduledTaskUnderstandDetailShrinkRequest request = GetScheduledTaskUnderstandDetailShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDigitalEmployeeName()) {
    request.setDigitalEmployeeNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDigitalEmployeeName(), "digitalEmployeeName", "json"));
  }

  if (!!tmpReq.hasSegments()) {
    request.setSegmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSegments(), "segments", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasCollaborationGroupId()) {
    query["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasDigitalEmployeeNameShrink()) {
    query["digitalEmployeeName"] = request.getDigitalEmployeeNameShrink();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasSegmentsShrink()) {
    query["segments"] = request.getSegmentsShrink();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  if (!!request.hasUserInput()) {
    query["userInput"] = request.getUserInput();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScheduledTaskUnderstandDetail"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getScheduledTaskUnderstandDetail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScheduledTaskUnderstandDetailResponse>();
}

/**
 * @deprecated OpenAPI GetScheduledTaskUnderstandDetail is deprecated
 *
 * @summary Retrieves the details of scheduled task understanding.
 *
 * @description ## Request description
 * - This operation uploads a file to the enterprise knowledge base.
 * - You must have the `DEVELOPMENT_KB_MANAGE` permission to call this operation.
 * - You must provide the OSS persistent address (`filePath`) of the file when uploading.
 * - Optional parameters include the public access URL and original file name of the file to enhance the completeness of file information.
 * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee by default.
 * - You can add tags to the resource by using `sourceTags` for subsequent management and retrieval.
 * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Make sure that your account balance is sufficient.
 *
 * @param request GetScheduledTaskUnderstandDetailRequest
 * @return GetScheduledTaskUnderstandDetailResponse
 */
GetScheduledTaskUnderstandDetailResponse Client::getScheduledTaskUnderstandDetail(const GetScheduledTaskUnderstandDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getScheduledTaskUnderstandDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the details of a skill.
 *
 * @description ## Request description
 * Queries skill details by SkillCode or SkillName, including metadata, input parameter schema, and SKILL.md summary.
 * - **TenantId**: Optional common parameter passed through to the backend header by the gateway. If not specified, the default tenant of the current caller is used.
 * - **SkillCode**: Mutually exclusive with SkillName. If both are provided, SkillCode takes precedence.
 * - **SkillName**: Mutually exclusive with SkillCode. If the name is not unique within the tenant, `ERR.SkillHub.SkillNameAmbiguous` is returned.
 * - **ViewMode**: Optional. Valid values: `draft` (draft or edit view) and `published` (published view, default).
 * - **IncludeSkillFiles**: Optional. Specifies whether to return the complete skill file tree (SKILL.md, scripts, and templates). Default value: `false`.
 *
 * @param request GetSkillRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillResponse
 */
GetSkillResponse Client::getSkillWithOptions(const GetSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasIncludeSkillFiles()) {
    body["includeSkillFiles"] = request.getIncludeSkillFiles();
  }

  if (!!request.hasSkillCode()) {
    body["skillCode"] = request.getSkillCode();
  }

  if (!!request.hasSkillName()) {
    body["skillName"] = request.getSkillName();
  }

  if (!!request.hasViewMode()) {
    body["viewMode"] = request.getViewMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSkill"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getSkill")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillResponse>();
}

/**
 * @summary Retrieves the details of a skill.
 *
 * @description ## Request description
 * Queries skill details by SkillCode or SkillName, including metadata, input parameter schema, and SKILL.md summary.
 * - **TenantId**: Optional common parameter passed through to the backend header by the gateway. If not specified, the default tenant of the current caller is used.
 * - **SkillCode**: Mutually exclusive with SkillName. If both are provided, SkillCode takes precedence.
 * - **SkillName**: Mutually exclusive with SkillCode. If the name is not unique within the tenant, `ERR.SkillHub.SkillNameAmbiguous` is returned.
 * - **ViewMode**: Optional. Valid values: `draft` (draft or edit view) and `published` (published view, default).
 * - **IncludeSkillFiles**: Optional. Specifies whether to return the complete skill file tree (SKILL.md, scripts, and templates). Default value: `false`.
 *
 * @param request GetSkillRequest
 * @return GetSkillResponse
 */
GetSkillResponse Client::getSkill(const GetSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSkillWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the execution result of a skill.
 *
 * @description ## Request description
 * Queries the current status and result of an asynchronous task by using RunId.
 * - **State machine**: Running (PENDING/RUNNING) → Succeeded / Failed / Cancelled
 * - **TenantId**: Optional common parameter passed through by the gateway. The backend verifies that RunId belongs to the current tenant. Otherwise, it uniformly returns ERR.SkillHub.RunNotFound to avoid leaking resource existence.
 * - **IncludeLogs**: Optional. Specifies whether to return execution logs. Default value: false.
 * If the execution is successful, Result.Content[] is an array of MCP-style content blocks (Text / File / Image).
 *
 * @param request GetSkillRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillRunResponse
 */
GetSkillRunResponse Client::getSkillRunWithOptions(const GetSkillRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasIncludeLogs()) {
    body["includeLogs"] = request.getIncludeLogs();
  }

  if (!!request.hasRunId()) {
    body["runId"] = request.getRunId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSkillRun"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getSkillRun")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillRunResponse>();
}

/**
 * @summary Queries the execution result of a skill.
 *
 * @description ## Request description
 * Queries the current status and result of an asynchronous task by using RunId.
 * - **State machine**: Running (PENDING/RUNNING) → Succeeded / Failed / Cancelled
 * - **TenantId**: Optional common parameter passed through by the gateway. The backend verifies that RunId belongs to the current tenant. Otherwise, it uniformly returns ERR.SkillHub.RunNotFound to avoid leaking resource existence.
 * - **IncludeLogs**: Optional. Specifies whether to return execution logs. Default value: false.
 * If the execution is successful, Result.Content[] is an array of MCP-style content blocks (Text / File / Image).
 *
 * @param request GetSkillRunRequest
 * @return GetSkillRunResponse
 */
GetSkillRunResponse Client::getSkillRun(const GetSkillRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSkillRunWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the details of a specified resource (knowledge) and supports returning large detail fields on demand.
 *
 * @description ## Request description
 * - `tenant_id` is derived only from the authenticated identity. If the caller passes it in the request body, it is ignored.
 * - The response does not expose audit fields such as `creator` or `modifier`. The `unstructured_docs[ ].content` field is not returned by default to avoid large response payloads.
 * - You can obtain more detailed information, including `settings`, `notes`, `structuredTables`, and `unstructuredDocs`, by setting the `includeDetails` parameter to `true`.
 *
 * @param request GetSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSourceResponse
 */
GetSourceResponse Client::getSourceWithOptions(const GetSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasIncludeDetails()) {
    body["includeDetails"] = request.getIncludeDetails();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSourceResponse>();
}

/**
 * @summary Queries the details of a specified resource (knowledge) and supports returning large detail fields on demand.
 *
 * @description ## Request description
 * - `tenant_id` is derived only from the authenticated identity. If the caller passes it in the request body, it is ignored.
 * - The response does not expose audit fields such as `creator` or `modifier`. The `unstructured_docs[ ].content` field is not returned by default to avoid large response payloads.
 * - You can obtain more detailed information, including `settings`, `notes`, `structuredTables`, and `unstructuredDocs`, by setting the `includeDetails` parameter to `true`.
 *
 * @param request GetSourceRequest
 * @return GetSourceResponse
 */
GetSourceResponse Client::getSource(const GetSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSourceWithOptions(request, headers, runtime);
}

/**
 * @summary Generates a signed URL for directly uploading files to OSS.
 *
 * @description ## Operation description
 * This API allows callers to obtain a signed URL for directly uploading files to Alibaba Cloud Object Storage Service (OSS) based on the provided file name and other information. With this URL, users can upload files directly to the specified OSS location without routing through an intermediate server, which improves efficiency and security.
 * - **Security constraint**: `tenant_id`/`user_id` are derived only from the authenticated identity. Values provided in the request body are ignored.
 * - **Default value**: If the `expires` parameter is not specified, the default expiration time is 3600 seconds (1 hour).
 * - **Content-Type**: If `contentType` is not provided, the system attempts to automatically infer the file type.
 * - **Scope**: The `scope` parameter defines whether the data source belongs to a personal or enterprise knowledge base. By default, this parameter may not need to be set.
 *
 * @param request GetSourceUploadSignatureRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSourceUploadSignatureResponse
 */
GetSourceUploadSignatureResponse Client::getSourceUploadSignatureWithOptions(const GetSourceUploadSignatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContentType()) {
    body["contentType"] = request.getContentType();
  }

  if (!!request.hasExpires()) {
    body["expires"] = request.getExpires();
  }

  if (!!request.hasFilename()) {
    body["filename"] = request.getFilename();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.getScope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSourceUploadSignature"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getSourceUploadSignature")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSourceUploadSignatureResponse>();
}

/**
 * @summary Generates a signed URL for directly uploading files to OSS.
 *
 * @description ## Operation description
 * This API allows callers to obtain a signed URL for directly uploading files to Alibaba Cloud Object Storage Service (OSS) based on the provided file name and other information. With this URL, users can upload files directly to the specified OSS location without routing through an intermediate server, which improves efficiency and security.
 * - **Security constraint**: `tenant_id`/`user_id` are derived only from the authenticated identity. Values provided in the request body are ignored.
 * - **Default value**: If the `expires` parameter is not specified, the default expiration time is 3600 seconds (1 hour).
 * - **Content-Type**: If `contentType` is not provided, the system attempts to automatically infer the file type.
 * - **Scope**: The `scope` parameter defines whether the data source belongs to a personal or enterprise knowledge base. By default, this parameter may not need to be set.
 *
 * @param request GetSourceUploadSignatureRequest
 * @return GetSourceUploadSignatureResponse
 */
GetSourceUploadSignatureResponse Client::getSourceUploadSignature(const GetSourceUploadSignatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSourceUploadSignatureWithOptions(request, headers, runtime);
}

/**
 * @summary Queries to-do items.
 *
 * @description Queries to-do items without triggering the read status side effect. You must specify one of the following parameters: todoId, workItemId, or messageId. The priority order is todoId > workItemId > messageId.
 *
 * @param request GetTodoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTodoResponse
 */
GetTodoResponse Client::getTodoWithOptions(const GetTodoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasMessageId()) {
    body["messageId"] = request.getMessageId();
  }

  if (!!request.hasTodoId()) {
    body["todoId"] = request.getTodoId();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTodo"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getTodo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTodoResponse>();
}

/**
 * @summary Queries to-do items.
 *
 * @description Queries to-do items without triggering the read status side effect. You must specify one of the following parameters: todoId, workItemId, or messageId. The priority order is todoId > workItemId > messageId.
 *
 * @param request GetTodoRequest
 * @return GetTodoResponse
 */
GetTodoResponse Client::getTodo(const GetTodoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTodoWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the details of a to-do item.
 *
 * @description Queries the details of a to-do item. If the current caller is a pending assignee, the readAt field is automatically populated to mark the item as read.
 *
 * @param request GetTodoDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTodoDetailResponse
 */
GetTodoDetailResponse Client::getTodoDetailWithOptions(const GetTodoDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasTodoId()) {
    body["todoId"] = request.getTodoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTodoDetail"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getTodoDetail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTodoDetailResponse>();
}

/**
 * @summary Queries the details of a to-do item.
 *
 * @description Queries the details of a to-do item. If the current caller is a pending assignee, the readAt field is automatically populated to mark the item as read.
 *
 * @param request GetTodoDetailRequest
 * @return GetTodoDetailResponse
 */
GetTodoDetailResponse Client::getTodoDetail(const GetTodoDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTodoDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves an API token and ensures that it is active.
 *
 * @description Retrieves the INSTANCE token for a user and ensures that it is in an active state (idempotent).
 *     Business logic:
 *     1. Obtains user_id from identity (caller_type=user is enforced).
 *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
 *     3. Calls ensure_active_token:
 *        - If an ACTIVE token exists, returns the token in plaintext as-is (no reset, no key rotation).
 *        - If an INACTIVE token exists, automatically re-enables it and returns the plaintext.
 *        - If no token exists (or only expired RESET records exist), creates a new token and returns the plaintext.
 *     Difference from EnableToken: When an ACTIVE token already exists, EnableToken returns only the masked value. This operation guarantees that a usable plaintext credential is returned without destroying the existing token.
 *
 * @param request GetTokenEnsureEnableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTokenEnsureEnableResponse
 */
GetTokenEnsureEnableResponse Client::getTokenEnsureEnableWithOptions(const GetTokenEnsureEnableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasWnUserId()) {
    body["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTokenEnsureEnable"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getTokenEnsureEnable")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenEnsureEnableResponse>();
}

/**
 * @summary Retrieves an API token and ensures that it is active.
 *
 * @description Retrieves the INSTANCE token for a user and ensures that it is in an active state (idempotent).
 *     Business logic:
 *     1. Obtains user_id from identity (caller_type=user is enforced).
 *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
 *     3. Calls ensure_active_token:
 *        - If an ACTIVE token exists, returns the token in plaintext as-is (no reset, no key rotation).
 *        - If an INACTIVE token exists, automatically re-enables it and returns the plaintext.
 *        - If no token exists (or only expired RESET records exist), creates a new token and returns the plaintext.
 *     Difference from EnableToken: When an ACTIVE token already exists, EnableToken returns only the masked value. This operation guarantees that a usable plaintext credential is returned without destroying the existing token.
 *
 * @param request GetTokenEnsureEnableRequest
 * @return GetTokenEnsureEnableResponse
 */
GetTokenEnsureEnableResponse Client::getTokenEnsureEnable(const GetTokenEnsureEnableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTokenEnsureEnableWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the token status of a user.
 *
 * @description Queries the INSTANCE token status of a user.
 *     Business logic:
 *     1. Retrieves user_id from identity (caller_type=user is required).
 *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
 *     3. Queries the ACTIVE INSTANCE token.
 *     4. If the token exists, returns enabled=True with the masked value and creation time.
 *     5. If the token does not exist, returns enabled=False.
 *
 * @param request GetTokenInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTokenInfoResponse
 */
GetTokenInfoResponse Client::getTokenInfoWithOptions(const GetTokenInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasWnUserId()) {
    body["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTokenInfo"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getTokenInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenInfoResponse>();
}

/**
 * @summary Queries the token status of a user.
 *
 * @description Queries the INSTANCE token status of a user.
 *     Business logic:
 *     1. Retrieves user_id from identity (caller_type=user is required).
 *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
 *     3. Queries the ACTIVE INSTANCE token.
 *     4. If the token exists, returns enabled=True with the masked value and creation time.
 *     5. If the token does not exist, returns enabled=False.
 *
 * @param request GetTokenInfoRequest
 * @return GetTokenInfoResponse
 */
GetTokenInfoResponse Client::getTokenInfo(const GetTokenInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTokenInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the details of a user.
 *
 * @description Queries the details of a user.
 *     Business orchestration:
 *     1. Locate the user by wnUserId or accountId.
 *     2. Query the mapping information of the user in the current tenant, including the status, join time, and last logon time.
 *     3. Query the roles of the user in the current tenant.
 *     4. Query the user groups to which the user belongs in the current tenant.
 *     5. Assemble the response.
 *     Error codes:
 *     - ERR.User.NotFound: The user does not exist.
 *     - ERR.User.NotInTenant: The user does not belong to the current tenant.
 *
 * @param request GetUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  if (!!request.hasWnAccountId()) {
    query["wnAccountId"] = request.getWnAccountId();
  }

  if (!!request.hasWnUserId()) {
    query["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getUser")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserResponse>();
}

/**
 * @summary Queries the details of a user.
 *
 * @description Queries the details of a user.
 *     Business orchestration:
 *     1. Locate the user by wnUserId or accountId.
 *     2. Query the mapping information of the user in the current tenant, including the status, join time, and last logon time.
 *     3. Query the roles of the user in the current tenant.
 *     4. Query the user groups to which the user belongs in the current tenant.
 *     5. Assemble the response.
 *     Error codes:
 *     - ERR.User.NotFound: The user does not exist.
 *     - ERR.User.NotInTenant: The user does not belong to the current tenant.
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
 * @summary Queries the real-time credit consumption, limit, and remaining balance of the current logged-on user.
 *
 * @description ## Request description
 * - This API is used to retrieve the credit usage details of the current logged-on user, including the credit limit, consumed credits, and remaining credits.
 * - Data is sourced from a real-time Redis cache, ensuring information immediacy.
 * - You can specify a tenant ID to query the credit usage of a user under a specific tenant. By default, the caller\\"s default tenant is used.
 * - You can optionally provide a `RequestId` as a request identifier, but this is not required.
 *
 * @param request GetUserCreditUsageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserCreditUsageResponse
 */
GetUserCreditUsageResponse Client::getUserCreditUsageWithOptions(const GetUserCreditUsageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserCreditUsage"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getUserCreditUsage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserCreditUsageResponse>();
}

/**
 * @summary Queries the real-time credit consumption, limit, and remaining balance of the current logged-on user.
 *
 * @description ## Request description
 * - This API is used to retrieve the credit usage details of the current logged-on user, including the credit limit, consumed credits, and remaining credits.
 * - Data is sourced from a real-time Redis cache, ensuring information immediacy.
 * - You can specify a tenant ID to query the credit usage of a user under a specific tenant. By default, the caller\\"s default tenant is used.
 * - You can optionally provide a `RequestId` as a request identifier, but this is not required.
 *
 * @param request GetUserCreditUsageRequest
 * @return GetUserCreditUsageResponse
 */
GetUserCreditUsageResponse Client::getUserCreditUsage(const GetUserCreditUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserCreditUsageWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the details of a specified user group, including its parent group, child groups, and members.
 *
 * @description ## Operation description
 * - This operation retrieves the details of a specified user group, including the basic information of the user group, parent user group information, direct child user group list, and direct member list.
 * - `userGroupId` is a required parameter and must be provided in the request body.
 * - `tenantId` is an optional parameter that can be passed through the query string.
 * - The operation supports multiple authentication methods, including AK, BearerToken, and APP authentication.
 * - The content type for both requests and responses is `application/json`.
 * - Make sure you have the required permissions (such as `winnexo:GetUserGroup`) before calling this operation.
 *
 * @param request GetUserGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserGroupResponse
 */
GetUserGroupResponse Client::getUserGroupWithOptions(const GetUserGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasUserGroupId()) {
    body["userGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetUserGroup"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getUserGroup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserGroupResponse>();
}

/**
 * @summary Queries the details of a specified user group, including its parent group, child groups, and members.
 *
 * @description ## Operation description
 * - This operation retrieves the details of a specified user group, including the basic information of the user group, parent user group information, direct child user group list, and direct member list.
 * - `userGroupId` is a required parameter and must be provided in the request body.
 * - `tenantId` is an optional parameter that can be passed through the query string.
 * - The operation supports multiple authentication methods, including AK, BearerToken, and APP authentication.
 * - The content type for both requests and responses is `application/json`.
 * - Make sure you have the required permissions (such as `winnexo:GetUserGroup`) before calling this operation.
 *
 * @param request GetUserGroupRequest
 * @return GetUserGroupResponse
 */
GetUserGroupResponse Client::getUserGroup(const GetUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the complete information of an authenticated user, including basic information and the tenant list.
 *
 * @description - This operation returns the detailed information of the current authenticated user.
 * - If the tenant information is invalid, the corresponding error message is returned.
 * - tenantId is an optional parameter. If it is not provided, the default tenant ID of the caller is used.
 * - The returned data includes the user profile (such as the username and avatar URL), role preference settings, and details of all affiliated tenants.
 * - Note that if the currently logged-on tenant is the system tenant (that is, tenantId=10000), it is explicitly identified in the response.
 *
 * @param request GetUserInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserInfoResponse
 */
GetUserInfoResponse Client::getUserInfoWithOptions(const GetUserInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserInfo"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getUserInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserInfoResponse>();
}

/**
 * @summary Retrieves the complete information of an authenticated user, including basic information and the tenant list.
 *
 * @description - This operation returns the detailed information of the current authenticated user.
 * - If the tenant information is invalid, the corresponding error message is returned.
 * - tenantId is an optional parameter. If it is not provided, the default tenant ID of the caller is used.
 * - The returned data includes the user profile (such as the username and avatar URL), role preference settings, and details of all affiliated tenants.
 * - Note that if the currently logged-on tenant is the system tenant (that is, tenantId=10000), it is explicitly identified in the response.
 *
 * @param request GetUserInfoRequest
 * @return GetUserInfoResponse
 */
GetUserInfoResponse Client::getUserInfo(const GetUserInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the details of a work item visible to valid members in the current collaboration space.
 *
 * @description Retrieves the details of a work item visible to valid members in the current collaboration space.
 *
 * @param request GetWorkItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkItemResponse
 */
GetWorkItemResponse Client::getWorkItemWithOptions(const GetWorkItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetWorkItem"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getWorkItem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkItemResponse>();
}

/**
 * @summary Retrieves the details of a work item visible to valid members in the current collaboration space.
 *
 * @description Retrieves the details of a work item visible to valid members in the current collaboration space.
 *
 * @param request GetWorkItemRequest
 * @return GetWorkItemResponse
 */
GetWorkItemResponse Client::getWorkItem(const GetWorkItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkItemWithOptions(request, headers, runtime);
}

/**
 * @summary Redirects to the short-term signed download URL of the artifact with an HTTP 302 status code after validating the caller\\"s permissions for the work item.
 *
 * @description Redirects to the short-term signed download URL of the artifact with an HTTP 302 status code after validating the caller\\"s permissions for the work item.
 *
 * @param request GetWorkItemArtifactAccessRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkItemArtifactAccessResponse
 */
GetWorkItemArtifactAccessResponse Client::getWorkItemArtifactAccessWithOptions(const GetWorkItemArtifactAccessRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasArtifactId()) {
    query["artifactId"] = request.getArtifactId();
  }

  if (!!request.hasCollaborationGroupId()) {
    query["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkItemId()) {
    query["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkItemArtifactAccess"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getWorkItemArtifactAccess")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkItemArtifactAccessResponse>();
}

/**
 * @summary Redirects to the short-term signed download URL of the artifact with an HTTP 302 status code after validating the caller\\"s permissions for the work item.
 *
 * @description Redirects to the short-term signed download URL of the artifact with an HTTP 302 status code after validating the caller\\"s permissions for the work item.
 *
 * @param request GetWorkItemArtifactAccessRequest
 * @return GetWorkItemArtifactAccessResponse
 */
GetWorkItemArtifactAccessResponse Client::getWorkItemArtifactAccess(const GetWorkItemArtifactAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkItemArtifactAccessWithOptions(request, headers, runtime);
}

/**
 * @summary Redirects to the short-term preview URL of the specified attachment with a 302 status code after validating the caller\\"s work item permissions.
 *
 * @description Redirects to the short-term preview URL of the specified attachment with a 302 status code after validating the caller\\"s work item permissions.
 *
 * @param request GetWorkItemAttachmentAccessRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkItemAttachmentAccessResponse
 */
GetWorkItemAttachmentAccessResponse Client::getWorkItemAttachmentAccessWithOptions(const GetWorkItemAttachmentAccessRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasAttachmentId()) {
    query["attachmentId"] = request.getAttachmentId();
  }

  if (!!request.hasCollaborationGroupId()) {
    query["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkItemId()) {
    query["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkItemAttachmentAccess"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getWorkItemAttachmentAccess")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkItemAttachmentAccessResponse>();
}

/**
 * @summary Redirects to the short-term preview URL of the specified attachment with a 302 status code after validating the caller\\"s work item permissions.
 *
 * @description Redirects to the short-term preview URL of the specified attachment with a 302 status code after validating the caller\\"s work item permissions.
 *
 * @param request GetWorkItemAttachmentAccessRequest
 * @return GetWorkItemAttachmentAccessResponse
 */
GetWorkItemAttachmentAccessResponse Client::getWorkItemAttachmentAccess(const GetWorkItemAttachmentAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkItemAttachmentAccessWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the complete audit event records of a work item.
 *
 * @param request GetWorkItemAuditRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkItemAuditResponse
 */
GetWorkItemAuditResponse Client::getWorkItemAuditWithOptions(const GetWorkItemAuditRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetWorkItemAudit"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getWorkItemAudit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkItemAuditResponse>();
}

/**
 * @summary Queries the complete audit event records of a work item.
 *
 * @param request GetWorkItemAuditRequest
 * @return GetWorkItemAuditResponse
 */
GetWorkItemAuditResponse Client::getWorkItemAudit(const GetWorkItemAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkItemAuditWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the execution summaries of all nodes in a work item.
 *
 * @description Queries the execution summaries of all nodes in a work item.
 *
 * @param request GetWorkItemRunSummariesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkItemRunSummariesResponse
 */
GetWorkItemRunSummariesResponse Client::getWorkItemRunSummariesWithOptions(const GetWorkItemRunSummariesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasNodeKey()) {
    body["nodeKey"] = request.getNodeKey();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetWorkItemRunSummaries"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getWorkItemRunSummaries")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkItemRunSummariesResponse>();
}

/**
 * @summary Queries the execution summaries of all nodes in a work item.
 *
 * @description Queries the execution summaries of all nodes in a work item.
 *
 * @param request GetWorkItemRunSummariesRequest
 * @return GetWorkItemRunSummariesResponse
 */
GetWorkItemRunSummariesResponse Client::getWorkItemRunSummaries(const GetWorkItemRunSummariesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkItemRunSummariesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the current running, review, and pause statuses of a work item, along with the actual active nodes and execution progress, by using a stable logical instance ID.
 *
 * @description Retrieves the instance based on the current member and work item visibility.
 *
 * @param request GetWorkflowInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkflowInstanceResponse
 */
GetWorkflowInstanceResponse Client::getWorkflowInstanceWithOptions(const GetWorkflowInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["instanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetWorkflowInstance"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getWorkflowInstance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkflowInstanceResponse>();
}

/**
 * @summary Queries the current running, review, and pause statuses of a work item, along with the actual active nodes and execution progress, by using a stable logical instance ID.
 *
 * @description Retrieves the instance based on the current member and work item visibility.
 *
 * @param request GetWorkflowInstanceRequest
 * @return GetWorkflowInstanceResponse
 */
GetWorkflowInstanceResponse Client::getWorkflowInstance(const GetWorkflowInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkflowInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the current and effective configurations of a workflow node.
 *
 * @param request GetWorkflowNodeConfigurationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkflowNodeConfigurationResponse
 */
GetWorkflowNodeConfigurationResponse Client::getWorkflowNodeConfigurationWithOptions(const GetWorkflowNodeConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasInstanceId()) {
    body["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    body["nodeId"] = request.getNodeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetWorkflowNodeConfiguration"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getWorkflowNodeConfiguration")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkflowNodeConfigurationResponse>();
}

/**
 * @summary Queries the current and effective configurations of a workflow node.
 *
 * @param request GetWorkflowNodeConfigurationRequest
 * @return GetWorkflowNodeConfigurationResponse
 */
GetWorkflowNodeConfigurationResponse Client::getWorkflowNodeConfiguration(const GetWorkflowNodeConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkflowNodeConfigurationWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the current configuration of a workflow template in a collaboration workspace.
 *
 * @description Retrieves the current configuration of a workflow template in a collaboration workspace.
 *
 * @param request GetWorkflowTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkflowTemplateResponse
 */
GetWorkflowTemplateResponse Client::getWorkflowTemplateWithOptions(const GetWorkflowTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasTemplateId()) {
    body["templateId"] = request.getTemplateId();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetWorkflowTemplate"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getWorkflowTemplate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkflowTemplateResponse>();
}

/**
 * @summary Retrieves the current configuration of a workflow template in a collaboration workspace.
 *
 * @description Retrieves the current configuration of a workflow template in a collaboration workspace.
 *
 * @param request GetWorkflowTemplateRequest
 * @return GetWorkflowTemplateResponse
 */
GetWorkflowTemplateResponse Client::getWorkflowTemplate(const GetWorkflowTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkflowTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary Grants authorization to authorized users or user groups to use a digital human.
 *
 * @description Grants authorization to authorized users or user groups to use a specified digital human.
 *     Business logic:
 *     1. Constructs an AuthContext from identity.
 *     2. Performs mutual exclusion validation on the request body: specify either userIds or userGroupIds.
 *     3. Delegates to AgentAuthorizationAuthorizedService.grant_authorization to execute.
 *     4. Pre-validation: verifies MANAGE permission and agent existence (performed at the AuthorizedService layer, which performs authentication first before it exposes existence).
 *     5. Existing authorization records are updated (expire_date / permissions).
 *
 * @param tmpReq GrantAgentUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantAgentUsersResponse
 */
GrantAgentUsersResponse Client::grantAgentUsersWithOptions(const GrantAgentUsersRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GrantAgentUsersShrinkRequest request = GrantAgentUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPermissions()) {
    request.setPermissionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPermissions(), "permissions", "json"));
  }

  if (!!tmpReq.hasUserGroupIds()) {
    request.setUserGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserGroupIds(), "userGroupIds", "json"));
  }

  if (!!tmpReq.hasUserIds()) {
    request.setUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserIds(), "userIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasExpireDate()) {
    body["expireDate"] = request.getExpireDate();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasPermissionsShrink()) {
    body["permissions"] = request.getPermissionsShrink();
  }

  if (!!request.hasUserGroupIdsShrink()) {
    body["userGroupIds"] = request.getUserGroupIdsShrink();
  }

  if (!!request.hasUserIdsShrink()) {
    body["userIds"] = request.getUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GrantAgentUsers"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/grantAgentUsers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantAgentUsersResponse>();
}

/**
 * @summary Grants authorization to authorized users or user groups to use a digital human.
 *
 * @description Grants authorization to authorized users or user groups to use a specified digital human.
 *     Business logic:
 *     1. Constructs an AuthContext from identity.
 *     2. Performs mutual exclusion validation on the request body: specify either userIds or userGroupIds.
 *     3. Delegates to AgentAuthorizationAuthorizedService.grant_authorization to execute.
 *     4. Pre-validation: verifies MANAGE permission and agent existence (performed at the AuthorizedService layer, which performs authentication first before it exposes existence).
 *     5. Existing authorization records are updated (expire_date / permissions).
 *
 * @param request GrantAgentUsersRequest
 * @return GrantAgentUsersResponse
 */
GrantAgentUsersResponse Client::grantAgentUsers(const GrantAgentUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return grantAgentUsersWithOptions(request, headers, runtime);
}

/**
 * @summary Imports a portable template in JSON format and creates a new template, regardless of whether a template with the same name already exists.
 *
 * @description Imports a portable template in JSON format and creates a new template, regardless of whether a template with the same name already exists.
 *
 * @param tmpReq ImportWorkflowTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportWorkflowTemplateResponse
 */
ImportWorkflowTemplateResponse Client::importWorkflowTemplateWithOptions(const ImportWorkflowTemplateRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ImportWorkflowTemplateShrinkRequest request = ImportWorkflowTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTemplate()) {
    request.setTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplate(), "template", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasTemplateShrink()) {
    body["template"] = request.getTemplateShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ImportWorkflowTemplate"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/importWorkflowTemplate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportWorkflowTemplateResponse>();
}

/**
 * @summary Imports a portable template in JSON format and creates a new template, regardless of whether a template with the same name already exists.
 *
 * @description Imports a portable template in JSON format and creates a new template, regardless of whether a template with the same name already exists.
 *
 * @param request ImportWorkflowTemplateRequest
 * @return ImportWorkflowTemplateResponse
 */
ImportWorkflowTemplateResponse Client::importWorkflowTemplate(const ImportWorkflowTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return importWorkflowTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary Queries currently effective service notices.
 *
 * @description ## Operation description
 * Performs a paging query for published platform announcements that are effective within the current database time window. The caller must be a real user who has the announcement viewing permission in the system O&M tenant.
 *
 * @param request ListActiveAnnouncementsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListActiveAnnouncementsResponse
 */
ListActiveAnnouncementsResponse Client::listActiveAnnouncementsWithOptions(const ListActiveAnnouncementsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasPageNumber()) {
    body["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListActiveAnnouncements"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listActiveAnnouncements")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListActiveAnnouncementsResponse>();
}

/**
 * @summary Queries currently effective service notices.
 *
 * @description ## Operation description
 * Performs a paging query for published platform announcements that are effective within the current database time window. The caller must be a real user who has the announcement viewing permission in the system O&M tenant.
 *
 * @param request ListActiveAnnouncementsRequest
 * @return ListActiveAnnouncementsResponse
 */
ListActiveAnnouncementsResponse Client::listActiveAnnouncements(const ListActiveAnnouncementsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listActiveAnnouncementsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the enterprise knowledge base list for a tenant or drills down to view its contents.
 *
 * @description ## Request description
 * - This operation supports two modes. If directoryId is empty or set to \\"root\\", it returns the top-level list of the knowledge base. If directoryId has a specific value, it performs a drill-down operation and returns the subdirectories and resources under the specified directory.
 * - tenantId is a common parameter. If you do not specify this parameter, the tenant ID of the caller is used by default.
 * - In drill-down mode (when directoryId is not empty), you can use the sourceTypes parameter to filter resources of specific types.
 * - You can customize the sort field (sortField) and sort order (sortOrder). Invalid values are reset to the default settings.
 * - The search feature applies only when retrieving the top-level list and supports only fuzzy matching for names or descriptions.
 * - For security purposes, tenant_id is strictly obtained from the authentication identity and cannot be passed in the request body.
 *
 * @param tmpReq ListAdminKnowledgeBasesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAdminKnowledgeBasesResponse
 */
ListAdminKnowledgeBasesResponse Client::listAdminKnowledgeBasesWithOptions(const ListAdminKnowledgeBasesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAdminKnowledgeBasesShrinkRequest request = ListAdminKnowledgeBasesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSourceTypes()) {
    request.setSourceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceTypes(), "sourceTypes", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSortField()) {
    body["sortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  if (!!request.hasSourceTypesShrink()) {
    body["sourceTypes"] = request.getSourceTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAdminKnowledgeBases"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listAdminKnowledgeBases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAdminKnowledgeBasesResponse>();
}

/**
 * @summary Queries the enterprise knowledge base list for a tenant or drills down to view its contents.
 *
 * @description ## Request description
 * - This operation supports two modes. If directoryId is empty or set to \\"root\\", it returns the top-level list of the knowledge base. If directoryId has a specific value, it performs a drill-down operation and returns the subdirectories and resources under the specified directory.
 * - tenantId is a common parameter. If you do not specify this parameter, the tenant ID of the caller is used by default.
 * - In drill-down mode (when directoryId is not empty), you can use the sourceTypes parameter to filter resources of specific types.
 * - You can customize the sort field (sortField) and sort order (sortOrder). Invalid values are reset to the default settings.
 * - The search feature applies only when retrieving the top-level list and supports only fuzzy matching for names or descriptions.
 * - For security purposes, tenant_id is strictly obtained from the authentication identity and cannot be passed in the request body.
 *
 * @param request ListAdminKnowledgeBasesRequest
 * @return ListAdminKnowledgeBasesResponse
 */
ListAdminKnowledgeBasesResponse Client::listAdminKnowledgeBases(const ListAdminKnowledgeBasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAdminKnowledgeBasesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the full list of digital employees for a tenant.
 *
 * @description Queries the full list of digital employees under a tenant, including deactivated ones.
 *     Business logic:
 *     1. Constructs an AuthContext from the identity.
 *     2. Delegates to AgentAuthorizationAuthorizedService.list_agents to perform permission verification (APPLICATION_AGENT_VIEW).
 *     3. Returns rich fields for all digital employees of the tenant (operatingObjectName, displayName, authMode, and isActive).
 *     4. System-level tokens are automatically allowed through ctx.skip_permission.
 *     Difference from listAuthorizedAgents: This operation returns all digital employees of the tenant (including deactivated ones, without authorization filtering) and includes rich fields such as displayName and isActive for management console display.
 *
 * @param request ListAgentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentsResponse
 */
ListAgentsResponse Client::listAgentsWithOptions(const ListAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgents"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listAgents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentsResponse>();
}

/**
 * @summary Queries the full list of digital employees for a tenant.
 *
 * @description Queries the full list of digital employees under a tenant, including deactivated ones.
 *     Business logic:
 *     1. Constructs an AuthContext from the identity.
 *     2. Delegates to AgentAuthorizationAuthorizedService.list_agents to perform permission verification (APPLICATION_AGENT_VIEW).
 *     3. Returns rich fields for all digital employees of the tenant (operatingObjectName, displayName, authMode, and isActive).
 *     4. System-level tokens are automatically allowed through ctx.skip_permission.
 *     Difference from listAuthorizedAgents: This operation returns all digital employees of the tenant (including deactivated ones, without authorization filtering) and includes rich fields such as displayName and isActive for management console display.
 *
 * @param request ListAgentsRequest
 * @return ListAgentsResponse
 */
ListAgentsResponse Client::listAgents(const ListAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAgentsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves DingTalk group chat records for the Winnexo lightweight workbench.
 *
 * @description ## Operation description
 * - This operation is exclusively for the Winnexo lightweight workbench.
 * - Uses the existing time, direction, and pageSize time-watermark protocol to read messages from a specified group chat.
 * - Does not introduce start or end time ranges. The response does not include raw DWS objects, attachment locators, or temporary download URLs.
 *
 * @param request ListAliDingGroupMessagesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAliDingGroupMessagesResponse
 */
ListAliDingGroupMessagesResponse Client::listAliDingGroupMessagesWithOptions(const ListAliDingGroupMessagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasDirection()) {
    body["direction"] = request.getDirection();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasTime()) {
    body["time"] = request.getTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAliDingGroupMessages"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listAliDingGroupMessages")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAliDingGroupMessagesResponse>();
}

/**
 * @summary Retrieves DingTalk group chat records for the Winnexo lightweight workbench.
 *
 * @description ## Operation description
 * - This operation is exclusively for the Winnexo lightweight workbench.
 * - Uses the existing time, direction, and pageSize time-watermark protocol to read messages from a specified group chat.
 * - Does not introduce start or end time ranges. The response does not include raw DWS objects, attachment locators, or temporary download URLs.
 *
 * @param request ListAliDingGroupMessagesRequest
 * @return ListAliDingGroupMessagesResponse
 */
ListAliDingGroupMessagesResponse Client::listAliDingGroupMessages(const ListAliDingGroupMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAliDingGroupMessagesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the list of DingTalk meeting minutes for the Winnexo lightweight workbench.
 *
 * @description ## Operation description
 * - This operation is exclusively for the Winnexo lightweight workbench.
 * - Queries DingTalk meeting transcripts that the current platform user has access to, based on the startTime and endTime provided by the caller.
 * - The time must include a time zone. This operation does not use recentDays and does not determine the time range on behalf of the caller.
 *
 * @param request ListAliDingMinutesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAliDingMinutesResponse
 */
ListAliDingMinutesResponse Client::listAliDingMinutesWithOptions(const ListAliDingMinutesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCursor()) {
    body["cursor"] = request.getCursor();
  }

  if (!!request.hasEndTime()) {
    body["endTime"] = request.getEndTime();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAliDingMinutes"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listAliDingMinutes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAliDingMinutesResponse>();
}

/**
 * @summary Retrieves the list of DingTalk meeting minutes for the Winnexo lightweight workbench.
 *
 * @description ## Operation description
 * - This operation is exclusively for the Winnexo lightweight workbench.
 * - Queries DingTalk meeting transcripts that the current platform user has access to, based on the startTime and endTime provided by the caller.
 * - The time must include a time zone. This operation does not use recentDays and does not determine the time range on behalf of the caller.
 *
 * @param request ListAliDingMinutesRequest
 * @return ListAliDingMinutesResponse
 */
ListAliDingMinutesResponse Client::listAliDingMinutes(const ListAliDingMinutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAliDingMinutesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the resource authorization records within an application.
 *
 * @description Pages the resource authorization records by secure application prefix after APP/MANAGE authorization.
 *
 * @param tmpReq ListAppResourcePermissionRecordsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppResourcePermissionRecordsResponse
 */
ListAppResourcePermissionRecordsResponse Client::listAppResourcePermissionRecordsWithOptions(const ListAppResourcePermissionRecordsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAppResourcePermissionRecordsShrinkRequest request = ListAppResourcePermissionRecordsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPermissions()) {
    request.setPermissionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPermissions(), "permissions", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGranteeId()) {
    body["granteeId"] = request.getGranteeId();
  }

  if (!!request.hasGranteeTenantId()) {
    body["granteeTenantId"] = request.getGranteeTenantId();
  }

  if (!!request.hasGranteeType()) {
    body["granteeType"] = request.getGranteeType();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPermissionsShrink()) {
    body["permissions"] = request.getPermissionsShrink();
  }

  if (!!request.hasResourceKeyPrefix()) {
    body["resourceKeyPrefix"] = request.getResourceKeyPrefix();
  }

  if (!!request.hasResourceTenantId()) {
    body["resourceTenantId"] = request.getResourceTenantId();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAppResourcePermissionRecords"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listAppResourcePermissionRecords")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppResourcePermissionRecordsResponse>();
}

/**
 * @summary Queries the resource authorization records within an application.
 *
 * @description Pages the resource authorization records by secure application prefix after APP/MANAGE authorization.
 *
 * @param request ListAppResourcePermissionRecordsRequest
 * @return ListAppResourcePermissionRecordsResponse
 */
ListAppResourcePermissionRecordsResponse Client::listAppResourcePermissionRecords(const ListAppResourcePermissionRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAppResourcePermissionRecordsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the effective resource permissions of a user within an application.
 *
 * @description Enforces the application prefix. The VIEW permission is required for querying your own resources, and the MANAGE permission is required for querying resources on behalf of others.
 *
 * @param tmpReq ListAppResourceUserPermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppResourceUserPermissionsResponse
 */
ListAppResourceUserPermissionsResponse Client::listAppResourceUserPermissionsWithOptions(const ListAppResourceUserPermissionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAppResourceUserPermissionsShrinkRequest request = ListAppResourceUserPermissionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPermissions()) {
    request.setPermissionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPermissions(), "permissions", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPermissionsShrink()) {
    body["permissions"] = request.getPermissionsShrink();
  }

  if (!!request.hasResourceKeyPrefix()) {
    body["resourceKeyPrefix"] = request.getResourceKeyPrefix();
  }

  if (!!request.hasResourceTenantId()) {
    body["resourceTenantId"] = request.getResourceTenantId();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTargetUserId()) {
    body["targetUserId"] = request.getTargetUserId();
  }

  if (!!request.hasTargetUserTenantId()) {
    body["targetUserTenantId"] = request.getTargetUserTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAppResourceUserPermissions"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listAppResourceUserPermissions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppResourceUserPermissionsResponse>();
}

/**
 * @summary Queries the effective resource permissions of a user within an application.
 *
 * @description Enforces the application prefix. The VIEW permission is required for querying your own resources, and the MANAGE permission is required for querying resources on behalf of others.
 *
 * @param request ListAppResourceUserPermissionsRequest
 * @return ListAppResourceUserPermissionsResponse
 */
ListAppResourceUserPermissionsResponse Client::listAppResourceUserPermissions(const ListAppResourceUserPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAppResourceUserPermissionsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the list of digital human names for which the caller has the specified permission.
 *
 * @description Queries the list of digital human names for which the current caller (or a specified target user) has the specified permission (USE/MANAGE).
 *     Business logic:
 *     1. Constructs an AuthContext from the identity.
 *     2. Delegates to AgentAuthorizationAuthorizedService.list_authorized_agents to execute the query.
 *     3. When skip_permission=True, returns all active agents of the tenant.
 *     4. Regular users are filtered based on authorization records and auth_mode.
 *     5. When targetUserId is specified (querying on behalf of another user), the APPLICATION_AGENT_VIEW gate is required, and the query is restricted to the current tenant. If the target user is not a member of the current tenant, a USER_NOT_IN_TENANT error is thrown (an empty list is not silently returned).
 *
 * @param request ListAuthorizedAgentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizedAgentsResponse
 */
ListAuthorizedAgentsResponse Client::listAuthorizedAgentsWithOptions(const ListAuthorizedAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasPermission()) {
    body["permission"] = request.getPermission();
  }

  if (!!request.hasTargetUserId()) {
    body["targetUserId"] = request.getTargetUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAuthorizedAgents"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listAuthorizedAgents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizedAgentsResponse>();
}

/**
 * @summary Queries the list of digital human names for which the caller has the specified permission.
 *
 * @description Queries the list of digital human names for which the current caller (or a specified target user) has the specified permission (USE/MANAGE).
 *     Business logic:
 *     1. Constructs an AuthContext from the identity.
 *     2. Delegates to AgentAuthorizationAuthorizedService.list_authorized_agents to execute the query.
 *     3. When skip_permission=True, returns all active agents of the tenant.
 *     4. Regular users are filtered based on authorization records and auth_mode.
 *     5. When targetUserId is specified (querying on behalf of another user), the APPLICATION_AGENT_VIEW gate is required, and the query is restricted to the current tenant. If the target user is not a member of the current tenant, a USER_NOT_IN_TENANT error is thrown (an empty list is not silently returned).
 *
 * @param request ListAuthorizedAgentsRequest
 * @return ListAuthorizedAgentsResponse
 */
ListAuthorizedAgentsResponse Client::listAuthorizedAgents(const ListAuthorizedAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAuthorizedAgentsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the list of authorized users or user groups for a digital employee.
 *
 * @description Queries the list of authorized users or user groups for a specified digital employee.
 *     Business logic:
 *     1. Constructs an AuthContext from the identity.
 *     2. Delegates to AgentAuthorizationAuthorizedService.list_authorized_users to execute the query.
 *     3. Permission verification is performed at the AuthorizedService layer by @require_permission(APPLICATION_AGENT_VIEW).
 *     4. When auth_mode is set to ALL_USERS, only records with the MANAGE permission are displayed.
 *
 * @param request ListAuthorizedUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizedUsersResponse
 */
ListAuthorizedUsersResponse Client::listAuthorizedUsersWithOptions(const ListAuthorizedUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGranteeType()) {
    body["granteeType"] = request.getGranteeType();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasPermission()) {
    body["permission"] = request.getPermission();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAuthorizedUsers"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listAuthorizedUsers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizedUsersResponse>();
}

/**
 * @summary Queries the list of authorized users or user groups for a digital employee.
 *
 * @description Queries the list of authorized users or user groups for a specified digital employee.
 *     Business logic:
 *     1. Constructs an AuthContext from the identity.
 *     2. Delegates to AgentAuthorizationAuthorizedService.list_authorized_users to execute the query.
 *     3. Permission verification is performed at the AuthorizedService layer by @require_permission(APPLICATION_AGENT_VIEW).
 *     4. When auth_mode is set to ALL_USERS, only records with the MANAGE permission are displayed.
 *
 * @param request ListAuthorizedUsersRequest
 * @return ListAuthorizedUsersResponse
 */
ListAuthorizedUsersResponse Client::listAuthorizedUsers(const ListAuthorizedUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAuthorizedUsersWithOptions(request, headers, runtime);
}

/**
 * @summary Enumerates the available organization synchronization configurations.
 *
 * @description Enumerates all available organization synchronization configurations under the current tenant.
 *     Returns a list of configs in a unified format, covering four platform types:
 *     - **wecom**: Retrieves active WeCom SSO configurations from SsoProviderRegistry.
 *     - **saml**: Retrieves active SAML SSO configurations from SsoProviderRegistry, using idpEntityId as the corpId.
 *     - **oauth2**: Retrieves active OAuth2 SSO configurations from SsoProviderRegistry, using clientId as the corpId.
 *     - **custom**: Queries the database for purely custom organizations registered under the tenant.
 *     The client distinguishes processing logic based on the returned platformType. The corpId is a required parameter for subsequent synchronization API operations.
 *
 * @param request ListAvailableConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAvailableConfigsResponse
 */
ListAvailableConfigsResponse Client::listAvailableConfigsWithOptions(const ListAvailableConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAvailableConfigs"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listAvailableConfigs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAvailableConfigsResponse>();
}

/**
 * @summary Enumerates the available organization synchronization configurations.
 *
 * @description Enumerates all available organization synchronization configurations under the current tenant.
 *     Returns a list of configs in a unified format, covering four platform types:
 *     - **wecom**: Retrieves active WeCom SSO configurations from SsoProviderRegistry.
 *     - **saml**: Retrieves active SAML SSO configurations from SsoProviderRegistry, using idpEntityId as the corpId.
 *     - **oauth2**: Retrieves active OAuth2 SSO configurations from SsoProviderRegistry, using clientId as the corpId.
 *     - **custom**: Queries the database for purely custom organizations registered under the tenant.
 *     The client distinguishes processing logic based on the returned platformType. The corpId is a required parameter for subsequent synchronization API operations.
 *
 * @param request ListAvailableConfigsRequest
 * @return ListAvailableConfigsResponse
 */
ListAvailableConfigsResponse Client::listAvailableConfigs(const ListAvailableConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAvailableConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries and filters a list of bills by using OpenAPI with multiple filter conditions.
 *
 * @description ## Operation description
 * - This operation queries a list of bills based on specified conditions.
 * - You can filter bills by tenant, user, operation type, status, time range, business source, and other conditions.
 * - Returns paginated bill data. The default number of entries per page is 20.
 * - You can specify whether to filter out bills with zero credit consumption. By default, these bills are filtered out.
 * - You must provide necessary authentication information, such as an AccessKey pair, bearer token, or application authentication, when you make a request.
 *
 * @param request ListBillingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBillingResponse
 */
ListBillingResponse Client::listBillingWithOptions(const ListBillingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasBizId()) {
    body["bizId"] = request.getBizId();
  }

  if (!!request.hasBizType()) {
    body["bizType"] = request.getBizType();
  }

  if (!!request.hasEndTime()) {
    body["endTime"] = request.getEndTime();
  }

  if (!!request.hasIgnoreZero()) {
    body["ignoreZero"] = request.getIgnoreZero();
  }

  if (!!request.hasOperation()) {
    body["operation"] = request.getOperation();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  if (!!request.hasWnUserId()) {
    body["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListBilling"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listBilling")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBillingResponse>();
}

/**
 * @summary Queries and filters a list of bills by using OpenAPI with multiple filter conditions.
 *
 * @description ## Operation description
 * - This operation queries a list of bills based on specified conditions.
 * - You can filter bills by tenant, user, operation type, status, time range, business source, and other conditions.
 * - Returns paginated bill data. The default number of entries per page is 20.
 * - You can specify whether to filter out bills with zero credit consumption. By default, these bills are filtered out.
 * - You must provide necessary authentication information, such as an AccessKey pair, bearer token, or application authentication, when you make a request.
 *
 * @param request ListBillingRequest
 * @return ListBillingResponse
 */
ListBillingResponse Client::listBilling(const ListBillingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listBillingWithOptions(request, headers, runtime);
}

/**
 * @summary Reads group chat text and multimedia content in message order.
 *
 * @description Reads the connected DingTalk, AliDing, or WeCom group chat sources, and paginates the results in ascending order by send time and message record ID. Each message includes the original text, as well as document content, image descriptions, or audio and video transcriptions arranged in the order they appear in the message. The caller must have read permissions for the source. Reading does not trigger attachment parsing. Pagination provides a real-time view, and historical backfilling may change pagination positions. Attachment content is retrieved from the Document Agent. For unparsed items, the API returns found=false and the local processing status. Upstream failures return errors.
 *
 * @param request ListChatMessageContentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChatMessageContentsResponse
 */
ListChatMessageContentsResponse Client::listChatMessageContentsWithOptions(const ListChatMessageContentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasMaxCharsPerAttachment()) {
    body["maxCharsPerAttachment"] = request.getMaxCharsPerAttachment();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListChatMessageContents"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listChatMessageContents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChatMessageContentsResponse>();
}

/**
 * @summary Reads group chat text and multimedia content in message order.
 *
 * @description Reads the connected DingTalk, AliDing, or WeCom group chat sources, and paginates the results in ascending order by send time and message record ID. Each message includes the original text, as well as document content, image descriptions, or audio and video transcriptions arranged in the order they appear in the message. The caller must have read permissions for the source. Reading does not trigger attachment parsing. Pagination provides a real-time view, and historical backfilling may change pagination positions. Attachment content is retrieved from the Document Agent. For unparsed items, the API returns found=false and the local processing status. Upstream failures return errors.
 *
 * @param request ListChatMessageContentsRequest
 * @return ListChatMessageContentsResponse
 */
ListChatMessageContentsResponse Client::listChatMessageContents(const ListChatMessageContentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listChatMessageContentsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists chat sessions of the current user in reverse chronological order by creation time.
 *
 * @description ## Operation description
 * - This API operation supports filtering and sorting by multiple parameters, including tenant ID, page size, pagination token, keyword search, digital employee name, and update time range.
 * - By default, results are sorted in descending order by the `UpdatedAt` field.
 * - If an invalid `NextToken` is provided or `PageSize` exceeds the allowed range (1-100), the API operation returns a 400 error.
 *
 * @param request ListChatSessionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChatSessionsResponse
 */
ListChatSessionsResponse Client::listChatSessionsWithOptions(const ListChatSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasDigitalEmployeeName()) {
    query["digitalEmployeeName"] = request.getDigitalEmployeeName();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChatSessions"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listChatSessions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChatSessionsResponse>();
}

/**
 * @summary Lists chat sessions of the current user in reverse chronological order by creation time.
 *
 * @description ## Operation description
 * - This API operation supports filtering and sorting by multiple parameters, including tenant ID, page size, pagination token, keyword search, digital employee name, and update time range.
 * - By default, results are sorted in descending order by the `UpdatedAt` field.
 * - If an invalid `NextToken` is provided or `PageSize` exceeds the allowed range (1-100), the API operation returns a 400 error.
 *
 * @param request ListChatSessionsRequest
 * @return ListChatSessionsResponse
 */
ListChatSessionsResponse Client::listChatSessions(const ListChatSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listChatSessionsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the member list of a collaboration workspace by using paging.
 *
 * @description Queries active members of a specified workspace by using paging and supports searching by member display name. The caller must be an active member of the workspace in the current tenant. The isActive field indicates the enabling status of the tenant account and does not represent the employment status.
 *
 * @param request ListCollaborationGroupMembersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCollaborationGroupMembersResponse
 */
ListCollaborationGroupMembersResponse Client::listCollaborationGroupMembersWithOptions(const ListCollaborationGroupMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListCollaborationGroupMembers"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listCollaborationGroupMembers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCollaborationGroupMembersResponse>();
}

/**
 * @summary Queries the member list of a collaboration workspace by using paging.
 *
 * @description Queries active members of a specified workspace by using paging and supports searching by member display name. The caller must be an active member of the workspace in the current tenant. The isActive field indicates the enabling status of the tenant account and does not represent the employment status.
 *
 * @param request ListCollaborationGroupMembersRequest
 * @return ListCollaborationGroupMembersResponse
 */
ListCollaborationGroupMembersResponse Client::listCollaborationGroupMembers(const ListCollaborationGroupMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCollaborationGroupMembersWithOptions(request, headers, runtime);
}

/**
 * @summary Performs a paging query for the list of collaboration spaces visible to the current user.
 *
 * @description Performs a paging query for the collaboration spaces that the user who invokes the operation has validly joined in the current tenant. Supports searching by space name. Only ACTIVE spaces are returned. An identity used to invoke the operation that is associated with a platform user is required, and deployment credentials without a user identity are not supported.
 *
 * @param request ListCollaborationGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCollaborationGroupsResponse
 */
ListCollaborationGroupsResponse Client::listCollaborationGroupsWithOptions(const ListCollaborationGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListCollaborationGroups"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listCollaborationGroups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCollaborationGroupsResponse>();
}

/**
 * @summary Performs a paging query for the list of collaboration spaces visible to the current user.
 *
 * @description Performs a paging query for the collaboration spaces that the user who invokes the operation has validly joined in the current tenant. Supports searching by space name. Only ACTIVE spaces are returned. An identity used to invoke the operation that is associated with a platform user is required, and deployment credentials without a user identity are not supported.
 *
 * @param request ListCollaborationGroupsRequest
 * @return ListCollaborationGroupsResponse
 */
ListCollaborationGroupsResponse Client::listCollaborationGroups(const ListCollaborationGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCollaborationGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists personal draft changes for a semantic graph.
 *
 * @description Queries the list of personal draft changes for the current user under a specified graph (personal token only).
 *     Business orchestration:
 *     1. Draft domain identity verification (personal token only. Deployment/system-level tokens are rejected)
 *        and semantic view permission verification.
 *     2. Returns the active drafts of the current user (with online change risks).
 *        In permission revocation scenarios, the system also cleans up unauthorized drafts (existing behavior).
 *     Online risk aggregation (riskCode / riskMessage) is serialized as risk JSON text.
 *     Error codes:
 *     - ERR.User.TokenUserOnly: Personal drafts support only user tokens.
 *     - ERR.GraphSchema.*: The graph does not exist.
 *
 * @param request ListGraphDraftResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGraphDraftResourcesResponse
 */
ListGraphDraftResourcesResponse Client::listGraphDraftResourcesWithOptions(const ListGraphDraftResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListGraphDraftResources"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listGraphDraftResources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGraphDraftResourcesResponse>();
}

/**
 * @summary Lists personal draft changes for a semantic graph.
 *
 * @description Queries the list of personal draft changes for the current user under a specified graph (personal token only).
 *     Business orchestration:
 *     1. Draft domain identity verification (personal token only. Deployment/system-level tokens are rejected)
 *        and semantic view permission verification.
 *     2. Returns the active drafts of the current user (with online change risks).
 *        In permission revocation scenarios, the system also cleans up unauthorized drafts (existing behavior).
 *     Online risk aggregation (riskCode / riskMessage) is serialized as risk JSON text.
 *     Error codes:
 *     - ERR.User.TokenUserOnly: Personal drafts support only user tokens.
 *     - ERR.GraphSchema.*: The graph does not exist.
 *
 * @param request ListGraphDraftResourcesRequest
 * @return ListGraphDraftResourcesResponse
 */
ListGraphDraftResourcesResponse Client::listGraphDraftResources(const ListGraphDraftResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGraphDraftResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the list of semantic graphs from the management perspective.
 *
 * @description Queries the list of semantic graphs from the management perspective through OpenAPI, including graphs in draft or publishing status.
 *     Returns tenant-level active graphs. graphStatus has three states: PUBLISHED, DEVELOPING (the current user has an active draft), and
 *     PUBLISHING (the current user is publishing). Deploy-level or system-level tokens have no personal identity, so hasDraft is always false.
 *     keyword matches graphName or displayName (case-insensitive). semanticTags retains a graph if any tag matches.
 *
 * @param tmpReq ListGraphSchemasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGraphSchemasResponse
 */
ListGraphSchemasResponse Client::listGraphSchemasWithOptions(const ListGraphSchemasRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListGraphSchemasShrinkRequest request = ListGraphSchemasShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSemanticTags()) {
    request.setSemanticTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSemanticTags(), "semanticTags", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasSemanticTagsShrink()) {
    body["semanticTags"] = request.getSemanticTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListGraphSchemas"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listGraphSchemas")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGraphSchemasResponse>();
}

/**
 * @summary Queries the list of semantic graphs from the management perspective.
 *
 * @description Queries the list of semantic graphs from the management perspective through OpenAPI, including graphs in draft or publishing status.
 *     Returns tenant-level active graphs. graphStatus has three states: PUBLISHED, DEVELOPING (the current user has an active draft), and
 *     PUBLISHING (the current user is publishing). Deploy-level or system-level tokens have no personal identity, so hasDraft is always false.
 *     keyword matches graphName or displayName (case-insensitive). semanticTags retains a graph if any tag matches.
 *
 * @param request ListGraphSchemasRequest
 * @return ListGraphSchemasResponse
 */
ListGraphSchemasResponse Client::listGraphSchemas(const ListGraphSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGraphSchemasWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the graphs available for semantic queries for a tenant.
 *
 * @description Lists the published graphs under an identity tenant.
 *     The CLI mapping is ``winnexo graph list``. ``tenantId`` is a required common parameter and is not included in the request body.
 *     The returned ``graphName`` can be directly used in ``querySemanticKnowledge``. This query is consistent with the existing frontend graph list and does not filter by digital employee permissions. Specific semantic queries still verify the agent USE permission.
 *     Database exceptions are directly routed to unified 5xx error handling and are not disguised as a successful empty list.
 *
 * @param request ListGraphsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGraphsResponse
 */
ListGraphsResponse Client::listGraphsWithOptions(const ListGraphsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGraphs"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listGraphs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGraphsResponse>();
}

/**
 * @summary Queries the graphs available for semantic queries for a tenant.
 *
 * @description Lists the published graphs under an identity tenant.
 *     The CLI mapping is ``winnexo graph list``. ``tenantId`` is a required common parameter and is not included in the request body.
 *     The returned ``graphName`` can be directly used in ``querySemanticKnowledge``. This query is consistent with the existing frontend graph list and does not filter by digital employee permissions. Specific semantic queries still verify the agent USE permission.
 *     Database exceptions are directly routed to unified 5xx error handling and are not disguised as a successful empty list.
 *
 * @param request ListGraphsRequest
 * @return ListGraphsResponse
 */
ListGraphsResponse Client::listGraphs(const ListGraphsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGraphsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists the resource directories of a collaborative share.
 *
 * @description Valid members can list the query root itself and all its descendant directories, including visible referenced directories marked as readOnly. The results are not paginated and do not return resources. The first query reuses the existing service-initialized internal root.
 *
 * @param request ListGroupDirectoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupDirectoriesResponse
 */
ListGroupDirectoriesResponse Client::listGroupDirectoriesWithOptions(const ListGroupDirectoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasSortField()) {
    body["sortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListGroupDirectories"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listGroupDirectories")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupDirectoriesResponse>();
}

/**
 * @summary Lists the resource directories of a collaborative share.
 *
 * @description Valid members can list the query root itself and all its descendant directories, including visible referenced directories marked as readOnly. The results are not paginated and do not return resources. The first query reuses the existing service-initialized internal root.
 *
 * @param request ListGroupDirectoriesRequest
 * @return ListGroupDirectoriesResponse
 */
ListGroupDirectoriesResponse Client::listGroupDirectories(const ListGroupDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGroupDirectoriesWithOptions(request, headers, runtime);
}

/**
 * @summary Performs a paged query on the contents of a collaboration space folder.
 *
 * @description Corresponds to the space list-resources operation. Active members can query immediate subdirectories and resources based on directory visibility scope. Results are paginated with directories listed first and include read-only references. If the directory is omitted or set to root, the existing root initialization is used. If sourceTypes has values, only resources are returned. sourceStatus follows the existing behavior where physical directories are retained and immediate reference directories are not returned.
 *
 * @param tmpReq ListGroupDirectoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupDirectoryResponse
 */
ListGroupDirectoryResponse Client::listGroupDirectoryWithOptions(const ListGroupDirectoryRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListGroupDirectoryShrinkRequest request = ListGroupDirectoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSourceTypes()) {
    request.setSourceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceTypes(), "sourceTypes", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSortField()) {
    body["sortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  if (!!request.hasSourceStatus()) {
    body["sourceStatus"] = request.getSourceStatus();
  }

  if (!!request.hasSourceTypesShrink()) {
    body["sourceTypes"] = request.getSourceTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListGroupDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listGroupDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupDirectoryResponse>();
}

/**
 * @summary Performs a paged query on the contents of a collaboration space folder.
 *
 * @description Corresponds to the space list-resources operation. Active members can query immediate subdirectories and resources based on directory visibility scope. Results are paginated with directories listed first and include read-only references. If the directory is omitted or set to root, the existing root initialization is used. If sourceTypes has values, only resources are returned. sourceStatus follows the existing behavior where physical directories are retained and immediate reference directories are not returned.
 *
 * @param request ListGroupDirectoryRequest
 * @return ListGroupDirectoryResponse
 */
ListGroupDirectoryResponse Client::listGroupDirectory(const ListGroupDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGroupDirectoryWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the node list of an instance.
 *
 * @description Queries the node list of an instance.
 *
 * @param request ListInstanceNodesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceNodesResponse
 */
ListInstanceNodesResponse Client::listInstanceNodesWithOptions(const ListInstanceNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasInstanceId()) {
    body["instanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListInstanceNodes"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listInstanceNodes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceNodesResponse>();
}

/**
 * @summary Queries the node list of an instance.
 *
 * @description Queries the node list of an instance.
 *
 * @param request ListInstanceNodesRequest
 * @return ListInstanceNodesResponse
 */
ListInstanceNodesResponse Client::listInstanceNodes(const ListInstanceNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceNodesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the category directory tree of an enterprise knowledge base and supports sorting by specified fields.
 *
 * @description ## Request description
 * - This API retrieves the category list (subdirectory tree) of an enterprise knowledge base. You must have the knowledge base view permission.
 * - If the directoryId parameter is not provided, all category trees under the root directory of the enterprise knowledge base are returned. If directoryId is provided, the subdirectory tree with this directory as the root is returned.
 * - You can use the sortField and sortOrder parameters to sort the results. By default, the results are sorted in descending order of creation time.
 * - Security constraints: The tenant_id and user_id parameters are obtained only from the authenticated identity, and the caller must have the DEVELOPMENT_KB_VIEW feature permission.
 *
 * @param request ListKnowledgeBaseDirectoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKnowledgeBaseDirectoriesResponse
 */
ListKnowledgeBaseDirectoriesResponse Client::listKnowledgeBaseDirectoriesWithOptions(const ListKnowledgeBaseDirectoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasSortField()) {
    body["sortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListKnowledgeBaseDirectories"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listKnowledgeBaseDirectories")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKnowledgeBaseDirectoriesResponse>();
}

/**
 * @summary Queries the category directory tree of an enterprise knowledge base and supports sorting by specified fields.
 *
 * @description ## Request description
 * - This API retrieves the category list (subdirectory tree) of an enterprise knowledge base. You must have the knowledge base view permission.
 * - If the directoryId parameter is not provided, all category trees under the root directory of the enterprise knowledge base are returned. If directoryId is provided, the subdirectory tree with this directory as the root is returned.
 * - You can use the sortField and sortOrder parameters to sort the results. By default, the results are sorted in descending order of creation time.
 * - Security constraints: The tenant_id and user_id parameters are obtained only from the authenticated identity, and the caller must have the DEVELOPMENT_KB_VIEW feature permission.
 *
 * @param request ListKnowledgeBaseDirectoriesRequest
 * @return ListKnowledgeBaseDirectoriesResponse
 */
ListKnowledgeBaseDirectoriesResponse Client::listKnowledgeBaseDirectories(const ListKnowledgeBaseDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKnowledgeBaseDirectoriesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries enterprise knowledge base resources by bound object.
 *
 * @description Queries bound sources precisely by the graphName, objectType, and objectId triplet. The target object must exist and be readable by the current user. The identity is derived from the unified authentication chain. Specifying a user, tenant, or scope in the request body is not accepted.
 * Queries only TENANT resources visible to the current user within the current tenant. The knowledge base root, directory ancestors, and source content ACLs must all pass validation. Uses content visibility semantics. It does not require knowledge base management permissions and does not bypass content ACLs due to management permissions. For multi-directory bindings, only legally readable directories are displayed.
 * Does not return group, orphaned, or internally hidden knowledge assets. Binding filtering, resource permissions, hidden filtering, and deduplication all occur before total count calculation and pagination. The totalCount does not include invisible resources. Multiple bindings of the same source are counted only once, regardless of the processing status.
 * Returns sources, totalCount, page, and pageSize upon success. Returns an empty list and 0 if no matches are found. Returns an empty list and the actual authorized total count for out-of-bounds pages. Returns only basic resource fields. It does not return settings, signed URLs, or other object bindings. Pagination is based on real-time queries and does not provide cross-request snapshots.
 *
 * @param request ListKnowledgeBaseSourcesByObjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKnowledgeBaseSourcesByObjectResponse
 */
ListKnowledgeBaseSourcesByObjectResponse Client::listKnowledgeBaseSourcesByObjectWithOptions(const ListKnowledgeBaseSourcesByObjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  if (!!request.hasObjectId()) {
    body["objectId"] = request.getObjectId();
  }

  if (!!request.hasObjectType()) {
    body["objectType"] = request.getObjectType();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListKnowledgeBaseSourcesByObject"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listKnowledgeBaseSourcesByObject")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKnowledgeBaseSourcesByObjectResponse>();
}

/**
 * @summary Queries enterprise knowledge base resources by bound object.
 *
 * @description Queries bound sources precisely by the graphName, objectType, and objectId triplet. The target object must exist and be readable by the current user. The identity is derived from the unified authentication chain. Specifying a user, tenant, or scope in the request body is not accepted.
 * Queries only TENANT resources visible to the current user within the current tenant. The knowledge base root, directory ancestors, and source content ACLs must all pass validation. Uses content visibility semantics. It does not require knowledge base management permissions and does not bypass content ACLs due to management permissions. For multi-directory bindings, only legally readable directories are displayed.
 * Does not return group, orphaned, or internally hidden knowledge assets. Binding filtering, resource permissions, hidden filtering, and deduplication all occur before total count calculation and pagination. The totalCount does not include invisible resources. Multiple bindings of the same source are counted only once, regardless of the processing status.
 * Returns sources, totalCount, page, and pageSize upon success. Returns an empty list and 0 if no matches are found. Returns an empty list and the actual authorized total count for out-of-bounds pages. Returns only basic resource fields. It does not return settings, signed URLs, or other object bindings. Pagination is based on real-time queries and does not provide cross-request snapshots.
 *
 * @param request ListKnowledgeBaseSourcesByObjectRequest
 * @return ListKnowledgeBaseSourcesByObjectResponse
 */
ListKnowledgeBaseSourcesByObjectResponse Client::listKnowledgeBaseSourcesByObject(const ListKnowledgeBaseSourcesByObjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKnowledgeBaseSourcesByObjectWithOptions(request, headers, runtime);
}

/**
 * @summary Performs a paging query for the exact object type subscriptions of a digital worker.
 *
 * @description Queries subscriptions based on three independent dimensions: graphName, operatingObjectName, and objectType. Supports primary objects and explicit first-level associated objects. Uses opaque cursor pagination and is not limited by the 1,000-item display window of the subscription panel.
 *
 * @param request ListOperatingObjectFavoritesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperatingObjectFavoritesResponse
 */
ListOperatingObjectFavoritesResponse Client::listOperatingObjectFavoritesWithOptions(const ListOperatingObjectFavoritesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.getNextToken();
  }

  if (!!request.hasObjectType()) {
    body["objectType"] = request.getObjectType();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListOperatingObjectFavorites"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listOperatingObjectFavorites")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperatingObjectFavoritesResponse>();
}

/**
 * @summary Performs a paging query for the exact object type subscriptions of a digital worker.
 *
 * @description Queries subscriptions based on three independent dimensions: graphName, operatingObjectName, and objectType. Supports primary objects and explicit first-level associated objects. Uses opaque cursor pagination and is not limited by the 1,000-item display window of the subscription panel.
 *
 * @param request ListOperatingObjectFavoritesRequest
 * @return ListOperatingObjectFavoritesResponse
 */
ListOperatingObjectFavoritesResponse Client::listOperatingObjectFavorites(const ListOperatingObjectFavoritesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listOperatingObjectFavoritesWithOptions(request, headers, runtime);
}

/**
 * @summary Performs a paged query of the visible outputs and the latest published file versions for the current user or a specified collaboration workspace. Supports filtering by session, label, and business ID. The paging and total count are calculated based on the primary output records.
 *
 * @description If collaborationGroupId is not provided, queries the personal outputs of the current caller. If provided, queries the outputs of the specified collaboration workspace and verifies the real-time access permissions of the current workspace members and source resources. The caller identity and tenant permissions are determined by the authentication context.
 * The sessionId parameter requires an exact match for a regular session, skill session, or node execution session. The tags parameter requires all specified labels to match simultaneously. The bizId parameter requires an exact match for the business ID of the file registration or associated workflow instance. The new conditions are combined with the existing operatingObjectName, itemType, keyword, and sharedOnly conditions using the AND operator, and are executed before counting and paging.
 * Tags and business IDs are derived from file registrations or workflow instance associations. Unregistered tags or business IDs are not inferred from titles. Pagination defaults to page 1 with 20 items per page, up to a maximum of 100 items, sorted in descending order by update time. The response structure remains compatible with the original API operation.
 * For versioned files, the latest published version is returned by default without expanding historical versions. This API operation does not currently support querying specific versions. Pagination and the total count are still based on the primary output records, deduplicated by outputId, and are not counted by the number of files or historical versions.
 * For versioned files, fileInfo.path is a time-sensitive download link attached to the published version and content revisions selected during the query. Downloads do not perform an automatic switchover to other versions published later. Invoke this API operation again to obtain a new link after the current one expires. Historical files that have not yet formed a published version may not return download information.
 *
 * @param tmpReq ListOutputFilesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOutputFilesResponse
 */
ListOutputFilesResponse Client::listOutputFilesWithOptions(const ListOutputFilesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListOutputFilesShrinkRequest request = ListOutputFilesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "tags", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasBizId()) {
    body["bizId"] = request.getBizId();
  }

  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasItemType()) {
    body["itemType"] = request.getItemType();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasSharedOnly()) {
    body["sharedOnly"] = request.getSharedOnly();
  }

  if (!!request.hasTagsShrink()) {
    body["tags"] = request.getTagsShrink();
  }

  if (!!request.hasTaskExecutionId()) {
    body["taskExecutionId"] = request.getTaskExecutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListOutputFiles"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listOutputFiles")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOutputFilesResponse>();
}

/**
 * @summary Performs a paged query of the visible outputs and the latest published file versions for the current user or a specified collaboration workspace. Supports filtering by session, label, and business ID. The paging and total count are calculated based on the primary output records.
 *
 * @description If collaborationGroupId is not provided, queries the personal outputs of the current caller. If provided, queries the outputs of the specified collaboration workspace and verifies the real-time access permissions of the current workspace members and source resources. The caller identity and tenant permissions are determined by the authentication context.
 * The sessionId parameter requires an exact match for a regular session, skill session, or node execution session. The tags parameter requires all specified labels to match simultaneously. The bizId parameter requires an exact match for the business ID of the file registration or associated workflow instance. The new conditions are combined with the existing operatingObjectName, itemType, keyword, and sharedOnly conditions using the AND operator, and are executed before counting and paging.
 * Tags and business IDs are derived from file registrations or workflow instance associations. Unregistered tags or business IDs are not inferred from titles. Pagination defaults to page 1 with 20 items per page, up to a maximum of 100 items, sorted in descending order by update time. The response structure remains compatible with the original API operation.
 * For versioned files, the latest published version is returned by default without expanding historical versions. This API operation does not currently support querying specific versions. Pagination and the total count are still based on the primary output records, deduplicated by outputId, and are not counted by the number of files or historical versions.
 * For versioned files, fileInfo.path is a time-sensitive download link attached to the published version and content revisions selected during the query. Downloads do not perform an automatic switchover to other versions published later. Invoke this API operation again to obtain a new link after the current one expires. Historical files that have not yet formed a published version may not return download information.
 *
 * @param request ListOutputFilesRequest
 * @return ListOutputFilesResponse
 */
ListOutputFilesResponse Client::listOutputFiles(const ListOutputFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listOutputFilesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the subdirectories and resources under a specified digital employee resource directory.
 *
 * @description ## Operation description
 * - This API is used to drill down and query the subdirectories and resources under the "My Resources" directory.
 * - When `directoryId` is set to \\"root\\", the service automatically resolves and returns the content under the current digital employee\\"s default root directory. If a specific directory ID is provided, the subdirectories and resources under that directory are returned.
 * - Security constraint: `tenant_id` and `user_id` can only come from the authenticated identity information. These fields provided by the caller in the request body are ignored.
 * - You can use the `sourceTypes` parameter to filter resources of specific types. When this parameter has a value, only resources that match the type condition are returned, and subdirectories are not included.
 * - Sorting is supported by name (`name`), creation time (`gmt_create`), or modification time (`gmt_modified`) in ascending or descending order.
 * - The pagination feature allows you to customize the number of items displayed per page (maximum 100) and the current page number.
 *
 * @param tmpReq ListPersonalDirectoryContentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPersonalDirectoryContentsResponse
 */
ListPersonalDirectoryContentsResponse Client::listPersonalDirectoryContentsWithOptions(const ListPersonalDirectoryContentsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPersonalDirectoryContentsShrinkRequest request = ListPersonalDirectoryContentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSourceTypes()) {
    request.setSourceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceTypes(), "sourceTypes", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSortField()) {
    body["sortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  if (!!request.hasSourceTypesShrink()) {
    body["sourceTypes"] = request.getSourceTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPersonalDirectoryContents"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listPersonalDirectoryContents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPersonalDirectoryContentsResponse>();
}

/**
 * @summary Queries the subdirectories and resources under a specified digital employee resource directory.
 *
 * @description ## Operation description
 * - This API is used to drill down and query the subdirectories and resources under the "My Resources" directory.
 * - When `directoryId` is set to \\"root\\", the service automatically resolves and returns the content under the current digital employee\\"s default root directory. If a specific directory ID is provided, the subdirectories and resources under that directory are returned.
 * - Security constraint: `tenant_id` and `user_id` can only come from the authenticated identity information. These fields provided by the caller in the request body are ignored.
 * - You can use the `sourceTypes` parameter to filter resources of specific types. When this parameter has a value, only resources that match the type condition are returned, and subdirectories are not included.
 * - Sorting is supported by name (`name`), creation time (`gmt_create`), or modification time (`gmt_modified`) in ascending or descending order.
 * - The pagination feature allows you to customize the number of items displayed per page (maximum 100) and the current page number.
 *
 * @param request ListPersonalDirectoryContentsRequest
 * @return ListPersonalDirectoryContentsResponse
 */
ListPersonalDirectoryContentsResponse Client::listPersonalDirectoryContents(const ListPersonalDirectoryContentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPersonalDirectoryContentsWithOptions(request, headers, runtime);
}

/**
 * @summary 按绑定对象查询个人资源
 *
 * @description 按 graphName、objectType、objectId 三元组精确查询绑定的 Source。目标对象必须存在且对当前用户可读；身份来自统一鉴权链，不接受请求体指定用户、租户或 scope。
 * 仅查询当前租户内由当前用户创建、位于其有效个人目录树下的 PERSONAL 资源；目录根不依赖名称。所有目录祖先须同租户、同所有者且为个人类型。
 * 不返回群组、孤儿或内部隐藏知识资产。绑定过滤、资源权限、隐藏过滤和去重均发生在总数计算和分页之前；totalCount 不包含不可见资源。同一 Source 多绑定只计一次，不限制处理状态。
 * 成功返回 sources、totalCount、page、pageSize；无匹配返回空列表和 0，越界页返回空列表及真实授权总数。只返回资源基础字段，不返回 settings、签名 URL 或其他对象绑定。分页为实时查询，不提供跨请求快照。
 *
 * @param request ListPersonalSourcesByObjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPersonalSourcesByObjectResponse
 */
ListPersonalSourcesByObjectResponse Client::listPersonalSourcesByObjectWithOptions(const ListPersonalSourcesByObjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  if (!!request.hasObjectId()) {
    body["objectId"] = request.getObjectId();
  }

  if (!!request.hasObjectType()) {
    body["objectType"] = request.getObjectType();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPersonalSourcesByObject"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listPersonalSourcesByObject")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPersonalSourcesByObjectResponse>();
}

/**
 * @summary 按绑定对象查询个人资源
 *
 * @description 按 graphName、objectType、objectId 三元组精确查询绑定的 Source。目标对象必须存在且对当前用户可读；身份来自统一鉴权链，不接受请求体指定用户、租户或 scope。
 * 仅查询当前租户内由当前用户创建、位于其有效个人目录树下的 PERSONAL 资源；目录根不依赖名称。所有目录祖先须同租户、同所有者且为个人类型。
 * 不返回群组、孤儿或内部隐藏知识资产。绑定过滤、资源权限、隐藏过滤和去重均发生在总数计算和分页之前；totalCount 不包含不可见资源。同一 Source 多绑定只计一次，不限制处理状态。
 * 成功返回 sources、totalCount、page、pageSize；无匹配返回空列表和 0，越界页返回空列表及真实授权总数。只返回资源基础字段，不返回 settings、签名 URL 或其他对象绑定。分页为实时查询，不提供跨请求快照。
 *
 * @param request ListPersonalSourcesByObjectRequest
 * @return ListPersonalSourcesByObjectResponse
 */
ListPersonalSourcesByObjectResponse Client::listPersonalSourcesByObject(const ListPersonalSourcesByObjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPersonalSourcesByObjectWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the list of system built-in roles.
 *
 * @description Queries the list of system built-in roles.
 *     Business logic:
 *     1. Constructs an AuthContext from the identity.
 *     2. Delegates to UserManagementAuthorizedService.list_system_roles to perform permission verification (PLATFORM_USER_VIEW).
 *     3. Renders role names and descriptions based on the request Accept-Language header.
 *     4. Returns a fixed set of 7 system built-in roles.
 *     The returned roleCode field can be directly used as the roleCodes parameter for createUser or updateUser.
 *
 * @param request ListRolesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRolesWithOptions(const ListRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRoles"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listRoles")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRolesResponse>();
}

/**
 * @summary Queries the list of system built-in roles.
 *
 * @description Queries the list of system built-in roles.
 *     Business logic:
 *     1. Constructs an AuthContext from the identity.
 *     2. Delegates to UserManagementAuthorizedService.list_system_roles to perform permission verification (PLATFORM_USER_VIEW).
 *     3. Renders role names and descriptions based on the request Accept-Language header.
 *     4. Returns a fixed set of 7 system built-in roles.
 *     The returned roleCode field can be directly used as the roleCodes parameter for createUser or updateUser.
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
 * @summary Retrieves a list of scheduled tasks.
 *
 * @description ## Request description
 * - This API is used to upload files to the enterprise knowledge base.
 * - The DEVELOPMENT_KB_MANAGE feature permission is required to call this API.
 * - The OSS persistence URL (filePath) of the file must be provided during file upload.
 * - Optional parameters include the public access URL and original file name of the file to enhance the completeness of file information.
 * - If directoryId is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, it is bound to the default root directory of the current digital employee by default.
 * - Tags can be added to resources through sourceTags to facilitate subsequent management and retrieval.
 * - This operation generates a bill (UNSTRUCTURED_PARSE). Ensure that your account balance is sufficient.
 *
 * @param tmpReq ListScheduledTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScheduledTasksResponse
 */
ListScheduledTasksResponse Client::listScheduledTasksWithOptions(const ListScheduledTasksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListScheduledTasksShrinkRequest request = ListScheduledTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVisibilities()) {
    request.setVisibilitiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVisibilities(), "visibilities", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasCollaborationGroupId()) {
    query["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasCreatorOnly()) {
    query["creatorOnly"] = request.getCreatorOnly();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  if (!!request.hasVisibilitiesShrink()) {
    query["visibilities"] = request.getVisibilitiesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScheduledTasks"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listScheduledTasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScheduledTasksResponse>();
}

/**
 * @summary Retrieves a list of scheduled tasks.
 *
 * @description ## Request description
 * - This API is used to upload files to the enterprise knowledge base.
 * - The DEVELOPMENT_KB_MANAGE feature permission is required to call this API.
 * - The OSS persistence URL (filePath) of the file must be provided during file upload.
 * - Optional parameters include the public access URL and original file name of the file to enhance the completeness of file information.
 * - If directoryId is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, it is bound to the default root directory of the current digital employee by default.
 * - Tags can be added to resources through sourceTags to facilitate subsequent management and retrieval.
 * - This operation generates a bill (UNSTRUCTURED_PARSE). Ensure that your account balance is sufficient.
 *
 * @param request ListScheduledTasksRequest
 * @return ListScheduledTasksResponse
 */
ListScheduledTasksResponse Client::listScheduledTasks(const ListScheduledTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listScheduledTasksWithOptions(request, headers, runtime);
}

/**
 * @summary Lists the skills visible to the current tenant.
 *
 * @description ## Request description
 * Retrieves a list of all skills visible to the current tenant. Supports filtering by digital employee bindings, skill sources, tags, and keywords, and supports pagination.
 * ### Request parameters
 * - **TenantId**: Optional. Common parameter. Passed through to the backend header by the gateway. If not specified, the default tenant of the current caller is used.
 * - **FilterType**: Optional. The skill filtering dimension. Valid values: `ALL` (all published skills), `BUILTIN` (published built-in skills), `CUSTOM` (published custom skills), and `DRAFT` (drafts, including published skills with unpublished modifications). Default value: `ALL`.
 * - **Tags**: Optional. Filters by tags. A match occurs if any tag in the array is hit.
 * - **Keyword**: Optional. Performs a fuzzy match by skill name or description.
 * - **Page**: Optional. The page number. Minimum value: 1. Default value: 1.
 * - **PageSize**: Optional. The number of entries per page. Valid values: 1 to 100. Default value: 20.
 * - **OperatingObjectName**: Optional. The name of the digital employee. If specified, filters by binding relationship. Must be used together with `BindStatus`.
 * - **BindStatus**: Optional. The binding status. Valid values: `BOUND` (bound) and `UNBOUND` (unbound global skills).
 * ### Response parameters
 * The response includes the skill list `items`, the total count `total`, the current page number `page`, and the number of entries per page `pageSize`.
 *
 * @param tmpReq ListSkillsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkillsWithOptions(const ListSkillsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSkillsShrinkRequest request = ListSkillsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "tags", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasBindStatus()) {
    body["bindStatus"] = request.getBindStatus();
  }

  if (!!request.hasFilterType()) {
    body["filterType"] = request.getFilterType();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasTagsShrink()) {
    body["tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListSkills"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listSkills")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillsResponse>();
}

/**
 * @summary Lists the skills visible to the current tenant.
 *
 * @description ## Request description
 * Retrieves a list of all skills visible to the current tenant. Supports filtering by digital employee bindings, skill sources, tags, and keywords, and supports pagination.
 * ### Request parameters
 * - **TenantId**: Optional. Common parameter. Passed through to the backend header by the gateway. If not specified, the default tenant of the current caller is used.
 * - **FilterType**: Optional. The skill filtering dimension. Valid values: `ALL` (all published skills), `BUILTIN` (published built-in skills), `CUSTOM` (published custom skills), and `DRAFT` (drafts, including published skills with unpublished modifications). Default value: `ALL`.
 * - **Tags**: Optional. Filters by tags. A match occurs if any tag in the array is hit.
 * - **Keyword**: Optional. Performs a fuzzy match by skill name or description.
 * - **Page**: Optional. The page number. Minimum value: 1. Default value: 1.
 * - **PageSize**: Optional. The number of entries per page. Valid values: 1 to 100. Default value: 20.
 * - **OperatingObjectName**: Optional. The name of the digital employee. If specified, filters by binding relationship. Must be used together with `BindStatus`.
 * - **BindStatus**: Optional. The binding status. Valid values: `BOUND` (bound) and `UNBOUND` (unbound global skills).
 * ### Response parameters
 * The response includes the skill list `items`, the total count `total`, the current page number `page`, and the number of entries per page `pageSize`.
 *
 * @param request ListSkillsRequest
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkills(const ListSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSkillsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves sources and usage statistics through paged query and paging.
 *
 * @description Performs a paged query with paging to retrieve sources and usage statistics. Returns only the data for the current query purpose without other report sections. For enterprises, only knowledge base super administrators are allowed. For a single workspace, storage management administrators or the SUPER_ADMIN of the current tenant platform are allowed. For all workspaces, only the platform SUPER_ADMIN is allowed. This feature is not available for individual users, and group credentials cannot be used across workspaces. The time refers to the reporting and ingestion time, which is left-closed and right-open, with a maximum span of 366 days. Knowledge bases are filtered based on the current attach. The three API operations do not guarantee the same snapshot across requests.
 *
 * @param tmpReq ListSourceUsageStatisticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSourceUsageStatisticsResponse
 */
ListSourceUsageStatisticsResponse Client::listSourceUsageStatisticsWithOptions(const ListSourceUsageStatisticsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSourceUsageStatisticsShrinkRequest request = ListSourceUsageStatisticsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasKnowledgeBaseIds()) {
    request.setKnowledgeBaseIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKnowledgeBaseIds(), "knowledgeBaseIds", "json"));
  }

  if (!!tmpReq.hasSourceIds()) {
    request.setSourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceIds(), "sourceIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasEndTime()) {
    body["endTime"] = request.getEndTime();
  }

  if (!!request.hasEventType()) {
    body["eventType"] = request.getEventType();
  }

  if (!!request.hasKnowledgeBaseIdsShrink()) {
    body["knowledgeBaseIds"] = request.getKnowledgeBaseIdsShrink();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasScopeType()) {
    body["scopeType"] = request.getScopeType();
  }

  if (!!request.hasSortBy()) {
    body["sortBy"] = request.getSortBy();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  if (!!request.hasSourceIdsShrink()) {
    body["sourceIds"] = request.getSourceIdsShrink();
  }

  if (!!request.hasSourceName()) {
    body["sourceName"] = request.getSourceName();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListSourceUsageStatistics"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listSourceUsageStatistics")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSourceUsageStatisticsResponse>();
}

/**
 * @summary Retrieves sources and usage statistics through paged query and paging.
 *
 * @description Performs a paged query with paging to retrieve sources and usage statistics. Returns only the data for the current query purpose without other report sections. For enterprises, only knowledge base super administrators are allowed. For a single workspace, storage management administrators or the SUPER_ADMIN of the current tenant platform are allowed. For all workspaces, only the platform SUPER_ADMIN is allowed. This feature is not available for individual users, and group credentials cannot be used across workspaces. The time refers to the reporting and ingestion time, which is left-closed and right-open, with a maximum span of 366 days. Knowledge bases are filtered based on the current attach. The three API operations do not guarantee the same snapshot across requests.
 *
 * @param request ListSourceUsageStatisticsRequest
 * @return ListSourceUsageStatisticsResponse
 */
ListSourceUsageStatisticsResponse Client::listSourceUsageStatistics(const ListSourceUsageStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSourceUsageStatisticsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of knowledge bases.
 *
 * @description ## Request description
 * - This API performs a paging query of folder contents and resources in an enterprise knowledge base.
 * - It supports filtering and sorting by various parameters, such as directoryId, page, pageSize, sortField, and sortOrder.
 * - The sourceTypes parameter allows you to filter by resource type. Separate multiple types with commas.
 * - If directoryId is not specified or is set to root, the root folder list of the knowledge base is queried by default.
 * - The default sort field is name, and the default sort order is ascending (asc).
 *
 * @param request ListTenantDirectoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTenantDirectoryResponse
 */
ListTenantDirectoryResponse Client::listTenantDirectoryWithOptions(const ListTenantDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSortField()) {
    body["sortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  if (!!request.hasSourceTypes()) {
    body["sourceTypes"] = request.getSourceTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTenantDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listTenantDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTenantDirectoryResponse>();
}

/**
 * @summary Retrieves a list of knowledge bases.
 *
 * @description ## Request description
 * - This API performs a paging query of folder contents and resources in an enterprise knowledge base.
 * - It supports filtering and sorting by various parameters, such as directoryId, page, pageSize, sortField, and sortOrder.
 * - The sourceTypes parameter allows you to filter by resource type. Separate multiple types with commas.
 * - If directoryId is not specified or is set to root, the root folder list of the knowledge base is queried by default.
 * - The default sort field is name, and the default sort order is ascending (asc).
 *
 * @param request ListTenantDirectoryRequest
 * @return ListTenantDirectoryResponse
 */
ListTenantDirectoryResponse Client::listTenantDirectory(const ListTenantDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTenantDirectoryWithOptions(request, headers, runtime);
}

/**
 * @summary Performs a paging query for the to-do list.
 *
 * @description Performs a paging query for the to-do list of the current user. Filters within a group use union, and filters across groups use intersection. If no filters are specified, all items are returned.
 *
 * @param tmpReq ListTodosRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTodosResponse
 */
ListTodosResponse Client::listTodosWithOptions(const ListTodosRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTodosShrinkRequest request = ListTodosShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPriorities()) {
    request.setPrioritiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPriorities(), "priorities", "json"));
  }

  if (!!tmpReq.hasReadStatus()) {
    request.setReadStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReadStatus(), "readStatus", "json"));
  }

  if (!!tmpReq.hasSourceTypes()) {
    request.setSourceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceTypes(), "sourceTypes", "json"));
  }

  if (!!tmpReq.hasStatuses()) {
    request.setStatusesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatuses(), "statuses", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPrioritiesShrink()) {
    body["priorities"] = request.getPrioritiesShrink();
  }

  if (!!request.hasReadStatusShrink()) {
    body["readStatus"] = request.getReadStatusShrink();
  }

  if (!!request.hasSortBy()) {
    body["sortBy"] = request.getSortBy();
  }

  if (!!request.hasSourceTypesShrink()) {
    body["sourceTypes"] = request.getSourceTypesShrink();
  }

  if (!!request.hasStatusesShrink()) {
    body["statuses"] = request.getStatusesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTodos"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listTodos")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTodosResponse>();
}

/**
 * @summary Performs a paging query for the to-do list.
 *
 * @description Performs a paging query for the to-do list of the current user. Filters within a group use union, and filters across groups use intersection. If no filters are specified, all items are returned.
 *
 * @param request ListTodosRequest
 * @return ListTodosResponse
 */
ListTodosResponse Client::listTodos(const ListTodosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTodosWithOptions(request, headers, runtime);
}

/**
 * @summary Returns the multi-level user group tree for the current tenant.
 *
 * @description ## Request description
 * This API is used to query the complete user group hierarchy under a specified tenant, including the basic information of each user group and its direct child user group list. Use the `tenantId` parameter to specify the tenant ID to query. If this parameter is not provided, the caller\\"s tenant ID is used by default.
 * ### Precautions
 * - This operation returns only the direct member count and direct child user group count. It does not include information about indirect members or child groups.
 * - The external synchronization status field is empty when data is normal. It is populated with relevant information only when data is out of sync between an external system (such as WeCom) and the internal system.
 *
 * @param request ListUserGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserGroupsResponse
 */
ListUserGroupsResponse Client::listUserGroupsWithOptions(const ListUserGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserGroups"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listUserGroups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserGroupsResponse>();
}

/**
 * @summary Returns the multi-level user group tree for the current tenant.
 *
 * @description ## Request description
 * This API is used to query the complete user group hierarchy under a specified tenant, including the basic information of each user group and its direct child user group list. Use the `tenantId` parameter to specify the tenant ID to query. If this parameter is not provided, the caller\\"s tenant ID is used by default.
 * ### Precautions
 * - This operation returns only the direct member count and direct child user group count. It does not include information about indirect members or child groups.
 * - The external synchronization status field is empty when data is normal. It is populated with relevant information only when data is out of sync between an external system (such as WeCom) and the internal system.
 *
 * @param request ListUserGroupsRequest
 * @return ListUserGroupsResponse
 */
ListUserGroupsResponse Client::listUserGroups(const ListUserGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the content of the knowledge base directory visible to the current OpenAPI user.
 *
 * @description ## Request description
 * - This operation returns the subdirectories and READY resources of a specified directory based on the frontend specifications of the enterprise knowledge base.
 * - The user identity and directory visibility scope are derived from the OpenAPI authentication context.
 * - If `sourceTypes` is specified, only resources are returned. The `keyword` parameter only searches the current directory level.
 *
 * @param request ListUserVisibleKnowledgeBaseContentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserVisibleKnowledgeBaseContentsResponse
 */
ListUserVisibleKnowledgeBaseContentsResponse Client::listUserVisibleKnowledgeBaseContentsWithOptions(const ListUserVisibleKnowledgeBaseContentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSortField()) {
    body["sortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  if (!!request.hasSourceTypes()) {
    body["sourceTypes"] = request.getSourceTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListUserVisibleKnowledgeBaseContents"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listUserVisibleKnowledgeBaseContents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserVisibleKnowledgeBaseContentsResponse>();
}

/**
 * @summary Queries the content of the knowledge base directory visible to the current OpenAPI user.
 *
 * @description ## Request description
 * - This operation returns the subdirectories and READY resources of a specified directory based on the frontend specifications of the enterprise knowledge base.
 * - The user identity and directory visibility scope are derived from the OpenAPI authentication context.
 * - If `sourceTypes` is specified, only resources are returned. The `keyword` parameter only searches the current directory level.
 *
 * @param request ListUserVisibleKnowledgeBaseContentsRequest
 * @return ListUserVisibleKnowledgeBaseContentsResponse
 */
ListUserVisibleKnowledgeBaseContentsResponse Client::listUserVisibleKnowledgeBaseContents(const ListUserVisibleKnowledgeBaseContentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserVisibleKnowledgeBaseContentsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the list of enterprise knowledge bases visible to the current OpenAPI user.
 *
 * @description ## Request description
 * - This operation queries the visible enterprise knowledge bases for the platform user mapped by the OpenAPI authentication identity.
 * - Both the tenant and user identities are determined by the authentication context. Callers cannot expand the visibility scope through business parameters.
 * - `tenantId` is an optional common parameter. `keyword` can be used to filter by knowledge base name or description.
 *
 * @param request ListUserVisibleKnowledgeBasesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserVisibleKnowledgeBasesResponse
 */
ListUserVisibleKnowledgeBasesResponse Client::listUserVisibleKnowledgeBasesWithOptions(const ListUserVisibleKnowledgeBasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListUserVisibleKnowledgeBases"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listUserVisibleKnowledgeBases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserVisibleKnowledgeBasesResponse>();
}

/**
 * @summary Queries the list of enterprise knowledge bases visible to the current OpenAPI user.
 *
 * @description ## Request description
 * - This operation queries the visible enterprise knowledge bases for the platform user mapped by the OpenAPI authentication identity.
 * - Both the tenant and user identities are determined by the authentication context. Callers cannot expand the visibility scope through business parameters.
 * - `tenantId` is an optional common parameter. `keyword` can be used to filter by knowledge base name or description.
 *
 * @param request ListUserVisibleKnowledgeBasesRequest
 * @return ListUserVisibleKnowledgeBasesResponse
 */
ListUserVisibleKnowledgeBasesResponse Client::listUserVisibleKnowledgeBases(const ListUserVisibleKnowledgeBasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserVisibleKnowledgeBasesWithOptions(request, headers, runtime);
}

/**
 * @summary Performs a paged query for the tenant member list.
 *
 * @description Performs a paged query for the tenant member list by using OpenAPI.
 *     Business orchestration:
 *     1. Parse the filter conditions (roleCodes to role_ids).
 *     2. Invoke UserTenantMappingRepository.query_paged_tenant_members to perform a paged query.
 *     3. Convert role_id in the result to roleCode and assemble the response.
 *     Error codes:
 *     - A fault is thrown when an invalid roleCode parameter is provided.
 *
 * @param tmpReq ListUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListUsersShrinkRequest request = ListUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccountIds()) {
    request.setAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAccountIds(), "accountIds", "json"));
  }

  if (!!tmpReq.hasRoleCodes()) {
    request.setRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRoleCodes(), "roleCodes", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAccountIdsShrink()) {
    body["accountIds"] = request.getAccountIdsShrink();
  }

  if (!!request.hasIsActive()) {
    body["isActive"] = request.getIsActive();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRoleCodesShrink()) {
    body["roleCodes"] = request.getRoleCodesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listUsers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary Performs a paged query for the tenant member list.
 *
 * @description Performs a paged query for the tenant member list by using OpenAPI.
 *     Business orchestration:
 *     1. Parse the filter conditions (roleCodes to role_ids).
 *     2. Invoke UserTenantMappingRepository.query_paged_tenant_members to perform a paged query.
 *     3. Convert role_id in the result to roleCode and assemble the response.
 *     Error codes:
 *     - A fault is thrown when an invalid roleCode parameter is provided.
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
 * @summary Drills down to query subdirectories and resources under a specified knowledge base directory visible to a specified digital employee.
 *
 * @description ## Operation description
 * - This operation queries all subdirectories and resources under a specified knowledge base directory for a specific digital employee.
 * - The user must have the USE permission on the target digital employee, and the digital employee must have access to the directory and its subdirectories specified in the request.
 * - You must provide the digital employee name (`operatingObjectName`) and the directory ID (`directoryId`) to query. Other parameters such as pagination information and sorting method are optional.
 * - The response includes the list of subdirectories and resources under the directory, and supports pagination.
 * - The `sourceStatus` field filters only resources in the `READY` state.
 * - For security purposes, `tenant_id` and `user_id` are obtained only from the authenticated identity. Values passed in the request body by the caller are ignored.
 *
 * @param tmpReq ListVisibleKnowledgeBaseContentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVisibleKnowledgeBaseContentsResponse
 */
ListVisibleKnowledgeBaseContentsResponse Client::listVisibleKnowledgeBaseContentsWithOptions(const ListVisibleKnowledgeBaseContentsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListVisibleKnowledgeBaseContentsShrinkRequest request = ListVisibleKnowledgeBaseContentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSourceTypes()) {
    request.setSourceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceTypes(), "sourceTypes", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSortField()) {
    body["sortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  if (!!request.hasSourceTypesShrink()) {
    body["sourceTypes"] = request.getSourceTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListVisibleKnowledgeBaseContents"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listVisibleKnowledgeBaseContents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVisibleKnowledgeBaseContentsResponse>();
}

/**
 * @summary Drills down to query subdirectories and resources under a specified knowledge base directory visible to a specified digital employee.
 *
 * @description ## Operation description
 * - This operation queries all subdirectories and resources under a specified knowledge base directory for a specific digital employee.
 * - The user must have the USE permission on the target digital employee, and the digital employee must have access to the directory and its subdirectories specified in the request.
 * - You must provide the digital employee name (`operatingObjectName`) and the directory ID (`directoryId`) to query. Other parameters such as pagination information and sorting method are optional.
 * - The response includes the list of subdirectories and resources under the directory, and supports pagination.
 * - The `sourceStatus` field filters only resources in the `READY` state.
 * - For security purposes, `tenant_id` and `user_id` are obtained only from the authenticated identity. Values passed in the request body by the caller are ignored.
 *
 * @param request ListVisibleKnowledgeBaseContentsRequest
 * @return ListVisibleKnowledgeBaseContentsResponse
 */
ListVisibleKnowledgeBaseContentsResponse Client::listVisibleKnowledgeBaseContents(const ListVisibleKnowledgeBaseContentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVisibleKnowledgeBaseContentsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the top-level directories of enterprise knowledge bases accessible to a digital employee.
 *
 * @description ## Request description
 * - This API operation retrieves the list of top-level knowledge base directories visible to a specified digital employee (operating object) within the enterprise.
 *
 * @param request ListVisibleKnowledgeBasesRequest
 * @param headers ListVisibleKnowledgeBasesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVisibleKnowledgeBasesResponse
 */
ListVisibleKnowledgeBasesResponse Client::listVisibleKnowledgeBasesWithOptions(const ListVisibleKnowledgeBasesRequest &request, const ListVisibleKnowledgeBasesHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasRequestId()) {
    realHeaders["requestId"] = Darabonba::Convert::stringVal(headers.getRequestId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListVisibleKnowledgeBases"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listVisibleKnowledgeBases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVisibleKnowledgeBasesResponse>();
}

/**
 * @summary Queries the top-level directories of enterprise knowledge bases accessible to a digital employee.
 *
 * @description ## Request description
 * - This API operation retrieves the list of top-level knowledge base directories visible to a specified digital employee (operating object) within the enterprise.
 *
 * @param request ListVisibleKnowledgeBasesRequest
 * @return ListVisibleKnowledgeBasesResponse
 */
ListVisibleKnowledgeBasesResponse Client::listVisibleKnowledgeBases(const ListVisibleKnowledgeBasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListVisibleKnowledgeBasesHeaders headers = ListVisibleKnowledgeBasesHeaders();
  return listVisibleKnowledgeBasesWithOptions(request, headers, runtime);
}

/**
 * @summary Lists all historical artifacts of a work item accessible to authorized members.
 *
 * @description Lists all historical artifacts of a work item accessible to authorized members.
 *
 * @param request ListWorkItemArtifactsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkItemArtifactsResponse
 */
ListWorkItemArtifactsResponse Client::listWorkItemArtifactsWithOptions(const ListWorkItemArtifactsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListWorkItemArtifacts"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listWorkItemArtifacts")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkItemArtifactsResponse>();
}

/**
 * @summary Lists all historical artifacts of a work item accessible to authorized members.
 *
 * @description Lists all historical artifacts of a work item accessible to authorized members.
 *
 * @param request ListWorkItemArtifactsRequest
 * @return ListWorkItemArtifactsResponse
 */
ListWorkItemArtifactsResponse Client::listWorkItemArtifacts(const ListWorkItemArtifactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkItemArtifactsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries work items visible to valid members in the current workspace with pagination. Both page/pageSize and nextToken/maxResults are supported, but tokens take precedence.
 *
 * @description Queries work items visible to valid members in the current workspace with pagination. Both page/pageSize and nextToken/maxResults are supported, but tokens take precedence.
 *
 * @param tmpReq ListWorkItemsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkItemsResponse
 */
ListWorkItemsResponse Client::listWorkItemsWithOptions(const ListWorkItemsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListWorkItemsShrinkRequest request = ListWorkItemsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBusinessStatuses()) {
    request.setBusinessStatusesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBusinessStatuses(), "businessStatuses", "json"));
  }

  if (!!tmpReq.hasItemTypes()) {
    request.setItemTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getItemTypes(), "itemTypes", "json"));
  }

  if (!!tmpReq.hasPriorities()) {
    request.setPrioritiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPriorities(), "priorities", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasBusinessStatusesShrink()) {
    body["businessStatuses"] = request.getBusinessStatusesShrink();
  }

  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasItemTypesShrink()) {
    body["itemTypes"] = request.getItemTypesShrink();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPrioritiesShrink()) {
    body["priorities"] = request.getPrioritiesShrink();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.getScope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListWorkItems"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listWorkItems")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkItemsResponse>();
}

/**
 * @summary Queries work items visible to valid members in the current workspace with pagination. Both page/pageSize and nextToken/maxResults are supported, but tokens take precedence.
 *
 * @description Queries work items visible to valid members in the current workspace with pagination. Both page/pageSize and nextToken/maxResults are supported, but tokens take precedence.
 *
 * @param request ListWorkItemsRequest
 * @return ListWorkItemsResponse
 */
ListWorkItemsResponse Client::listWorkItems(const ListWorkItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkItemsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries workflow instances visible to the current invoker in a specified collaboration space through a paged query, and supports paging and filtering by status, external requirement ID, initiator, keyword, and sorting conditions.
 *
 * @description Reuses detail projections to avoid mixing work item lists with instance statuses.
 *
 * @param request ListWorkflowInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkflowInstancesResponse
 */
ListWorkflowInstancesResponse Client::listWorkflowInstancesWithOptions(const ListWorkflowInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasBusinessId()) {
    body["businessId"] = request.getBusinessId();
  }

  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasInitiator()) {
    body["initiator"] = request.getInitiator();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    body["sortBy"] = request.getSortBy();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListWorkflowInstances"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listWorkflowInstances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkflowInstancesResponse>();
}

/**
 * @summary Queries workflow instances visible to the current invoker in a specified collaboration space through a paged query, and supports paging and filtering by status, external requirement ID, initiator, keyword, and sorting conditions.
 *
 * @description Reuses detail projections to avoid mixing work item lists with instance statuses.
 *
 * @param request ListWorkflowInstancesRequest
 * @return ListWorkflowInstancesResponse
 */
ListWorkflowInstancesResponse Client::listWorkflowInstances(const ListWorkflowInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkflowInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the versions of a workflow template.
 *
 * @description Queries all versions of a workflow template for active members. Returns draft and submitted versions in descending order by version number, and marks the unique effective version.
 *
 * @param request ListWorkflowTemplateVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkflowTemplateVersionsResponse
 */
ListWorkflowTemplateVersionsResponse Client::listWorkflowTemplateVersionsWithOptions(const ListWorkflowTemplateVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasTemplateId()) {
    body["templateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListWorkflowTemplateVersions"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listWorkflowTemplateVersions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkflowTemplateVersionsResponse>();
}

/**
 * @summary Queries the versions of a workflow template.
 *
 * @description Queries all versions of a workflow template for active members. Returns draft and submitted versions in descending order by version number, and marks the unique effective version.
 *
 * @param request ListWorkflowTemplateVersionsRequest
 * @return ListWorkflowTemplateVersionsResponse
 */
ListWorkflowTemplateVersionsResponse Client::listWorkflowTemplateVersions(const ListWorkflowTemplateVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkflowTemplateVersionsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists valid templates in the current collaboration space with pagination. Both page/pageSize and nextToken/maxResults are supported, and tokens take precedence.
 *
 * @description Searches for valid templates in the current collaboration workspace with pagination for valid members. Both page/pageSize and nextToken/maxResults are supported, but the token takes precedence.
 *
 * @param request ListWorkflowTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkflowTemplatesResponse
 */
ListWorkflowTemplatesResponse Client::listWorkflowTemplatesWithOptions(const ListWorkflowTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListWorkflowTemplates"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listWorkflowTemplates")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkflowTemplatesResponse>();
}

/**
 * @summary Lists valid templates in the current collaboration space with pagination. Both page/pageSize and nextToken/maxResults are supported, and tokens take precedence.
 *
 * @description Searches for valid templates in the current collaboration workspace with pagination for valid members. Both page/pageSize and nextToken/maxResults are supported, but the token takes precedence.
 *
 * @param request ListWorkflowTemplatesRequest
 * @return ListWorkflowTemplatesResponse
 */
ListWorkflowTemplatesResponse Client::listWorkflowTemplates(const ListWorkflowTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkflowTemplatesWithOptions(request, headers, runtime);
}

/**
 * @summary Marks to-do items as read.
 *
 * @description Marks to-do items as read for the current user. The markAllRead parameter takes precedence over todoIds. If both are empty, no error is returned.
 *
 * @param tmpReq MarkTodosReadRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return MarkTodosReadResponse
 */
MarkTodosReadResponse Client::markTodosReadWithOptions(const MarkTodosReadRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  MarkTodosReadShrinkRequest request = MarkTodosReadShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTodoIds()) {
    request.setTodoIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTodoIds(), "todoIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasMarkAllRead()) {
    body["markAllRead"] = request.getMarkAllRead();
  }

  if (!!request.hasTodoIdsShrink()) {
    body["todoIds"] = request.getTodoIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MarkTodosRead"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/markTodosRead")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MarkTodosReadResponse>();
}

/**
 * @summary Marks to-do items as read.
 *
 * @description Marks to-do items as read for the current user. The markAllRead parameter takes precedence over todoIds. If both are empty, no error is returned.
 *
 * @param request MarkTodosReadRequest
 * @return MarkTodosReadResponse
 */
MarkTodosReadResponse Client::markTodosRead(const MarkTodosReadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return markTodosReadWithOptions(request, headers, runtime);
}

/**
 * @summary Moves a resource within a collaboration space.
 *
 * @description Only valid members who are the resource creator or a space administrator can move a resource within the same physical folder tree of a space. The source and target must be real and different folder IDs, and the resource must be in the source folder. Referenced resources are read-only. The sourceId is preserved and not re-parsed. A successful local attach does not guarantee that the downstream path has been synchronized. Duplicate requests may report that the resource is not in the source folder. Query the location first.
 *
 * @param request MoveGroupResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveGroupResourceResponse
 */
MoveGroupResourceResponse Client::moveGroupResourceWithOptions(const MoveGroupResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasSourceDirectoryId()) {
    body["sourceDirectoryId"] = request.getSourceDirectoryId();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  if (!!request.hasTargetDirectoryId()) {
    body["targetDirectoryId"] = request.getTargetDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MoveGroupResource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/moveGroupResource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveGroupResourceResponse>();
}

/**
 * @summary Moves a resource within a collaboration space.
 *
 * @description Only valid members who are the resource creator or a space administrator can move a resource within the same physical folder tree of a space. The source and target must be real and different folder IDs, and the resource must be in the source folder. Referenced resources are read-only. The sourceId is preserved and not re-parsed. A successful local attach does not guarantee that the downstream path has been synchronized. Duplicate requests may report that the resource is not in the source folder. Query the location first.
 *
 * @param request MoveGroupResourceRequest
 * @return MoveGroupResourceResponse
 */
MoveGroupResourceResponse Client::moveGroupResource(const MoveGroupResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return moveGroupResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Moves a specified resource between enterprise knowledge base directories. Management permissions are required.
 *
 * @description ## Operation description
 * - **Authentication flow**:
 *   1. Basic authentication is performed by the root router (`request.state.openapi_identity`).
 *   2. This handler checks the `DEVELOPMENT_KB_MANAGE` feature permission.
 * - **Procedure**:
 *   1. Check that the source directory and target directory are not the same.
 *   2. Confirm that the target directory exists.
 *   3. Verify that the resource to be moved is in the source directory.
 *   4. Update the directory binding of the resource.
 *   5. Best-effort update of `source.settings["knowledge_id"]` to the target knowledge base ID.
 *   6. Best-effort notification to DocumentAgent to sync `knowledge_id` and `update_time`.
 * - **Security constraints**:
 *   - `tenant_id` and `user_id` must come from the authenticated identity.
 *   - The caller must have KB management permissions.
 *
 * @param request MoveKnowledgeBaseResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveKnowledgeBaseResourceResponse
 */
MoveKnowledgeBaseResourceResponse Client::moveKnowledgeBaseResourceWithOptions(const MoveKnowledgeBaseResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasKnowledgeId()) {
    body["knowledgeId"] = request.getKnowledgeId();
  }

  if (!!request.hasSourceDirectoryId()) {
    body["sourceDirectoryId"] = request.getSourceDirectoryId();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  if (!!request.hasTargetDirectoryId()) {
    body["targetDirectoryId"] = request.getTargetDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MoveKnowledgeBaseResource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/moveKnowledgeBaseResource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveKnowledgeBaseResourceResponse>();
}

/**
 * @summary Moves a specified resource between enterprise knowledge base directories. Management permissions are required.
 *
 * @description ## Operation description
 * - **Authentication flow**:
 *   1. Basic authentication is performed by the root router (`request.state.openapi_identity`).
 *   2. This handler checks the `DEVELOPMENT_KB_MANAGE` feature permission.
 * - **Procedure**:
 *   1. Check that the source directory and target directory are not the same.
 *   2. Confirm that the target directory exists.
 *   3. Verify that the resource to be moved is in the source directory.
 *   4. Update the directory binding of the resource.
 *   5. Best-effort update of `source.settings["knowledge_id"]` to the target knowledge base ID.
 *   6. Best-effort notification to DocumentAgent to sync `knowledge_id` and `update_time`.
 * - **Security constraints**:
 *   - `tenant_id` and `user_id` must come from the authenticated identity.
 *   - The caller must have KB management permissions.
 *
 * @param request MoveKnowledgeBaseResourceRequest
 * @return MoveKnowledgeBaseResourceResponse
 */
MoveKnowledgeBaseResourceResponse Client::moveKnowledgeBaseResource(const MoveKnowledgeBaseResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return moveKnowledgeBaseResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Moves a specified resource between personal directories of a user.
 *
 * @description ## Request description
 * - **The source directory and target directory cannot be the same**. Otherwise, the `ERR.Robject.UserDirectory.InvalidOperation` error is returned.
 * - **The target directory must exist**. If it does not exist, the `ERR.Robject.UserDirectory.DirectoryNotFound` error is returned.
 * - **The resource to be moved must exist in the source directory**. If it is not in the source directory, the `ERR.Robject.UserDirectory.ResourceNotInDirectory` error is returned.
 * - After a successful move, the system attempts to notify DocumentAgent to update the new path (`source_path`) of the resource. This step is best-effort. Even if it fails, the overall operation success status is not affected. Only an error log is recorded.
 * - For security purposes, the value of `tenant_id` can only be derived from the authenticated identity information.
 *
 * @param request MoveResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceResponse
 */
MoveResourceResponse Client::moveResourceWithOptions(const MoveResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasSourceDirectoryId()) {
    body["sourceDirectoryId"] = request.getSourceDirectoryId();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  if (!!request.hasTargetDirectoryId()) {
    body["targetDirectoryId"] = request.getTargetDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MoveResource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/moveResource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourceResponse>();
}

/**
 * @summary Moves a specified resource between personal directories of a user.
 *
 * @description ## Request description
 * - **The source directory and target directory cannot be the same**. Otherwise, the `ERR.Robject.UserDirectory.InvalidOperation` error is returned.
 * - **The target directory must exist**. If it does not exist, the `ERR.Robject.UserDirectory.DirectoryNotFound` error is returned.
 * - **The resource to be moved must exist in the source directory**. If it is not in the source directory, the `ERR.Robject.UserDirectory.ResourceNotInDirectory` error is returned.
 * - After a successful move, the system attempts to notify DocumentAgent to update the new path (`source_path`) of the resource. This step is best-effort. Even if it fails, the overall operation success status is not affected. Only an error log is recorded.
 * - For security purposes, the value of `tenant_id` can only be derived from the authenticated identity information.
 *
 * @param request MoveResourceRequest
 * @return MoveResourceResponse
 */
MoveResourceResponse Client::moveResource(const MoveResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return moveResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Takes a service notice offline.
 *
 * @description ## Operation description
 * Idempotently takes a platform announcement offline by announcement ID. Returns `changed=true` when a PUBLISHED announcement is taken offline for the first time. Returns `changed=false` when the announcement is already offline or expired.
 * The caller must belong to the system operations tenant and have announcement management permissions.
 *
 * @param request OfflineAnnouncementRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineAnnouncementResponse
 */
OfflineAnnouncementResponse Client::offlineAnnouncementWithOptions(const OfflineAnnouncementRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAnnouncementId()) {
    body["announcementId"] = request.getAnnouncementId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OfflineAnnouncement"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/offlineAnnouncement")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineAnnouncementResponse>();
}

/**
 * @summary Takes a service notice offline.
 *
 * @description ## Operation description
 * Idempotently takes a platform announcement offline by announcement ID. Returns `changed=true` when a PUBLISHED announcement is taken offline for the first time. Returns `changed=false` when the announcement is already offline or expired.
 * The caller must belong to the system operations tenant and have announcement management permissions.
 *
 * @param request OfflineAnnouncementRequest
 * @return OfflineAnnouncementResponse
 */
OfflineAnnouncementResponse Client::offlineAnnouncement(const OfflineAnnouncementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return offlineAnnouncementWithOptions(request, headers, runtime);
}

/**
 * @summary Pauses the entire workflow bound to a work item for active members.
 *
 * @description Pauses the entire workflow bound to a work item for active members.
 *
 * @param request PauseWorkItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseWorkItemResponse
 */
PauseWorkItemResponse Client::pauseWorkItemWithOptions(const PauseWorkItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PauseWorkItem"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/pauseWorkItem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseWorkItemResponse>();
}

/**
 * @summary Pauses the entire workflow bound to a work item for active members.
 *
 * @description Pauses the entire workflow bound to a work item for active members.
 *
 * @param request PauseWorkItemRequest
 * @return PauseWorkItemResponse
 */
PauseWorkItemResponse Client::pauseWorkItem(const PauseWorkItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pauseWorkItemWithOptions(request, headers, runtime);
}

/**
 * @summary Previews a resource in a collaborative workspace.
 *
 * @description Active members can preview physical or referenced resources in a specified workspace. Requests to read resources that are cross-workspace, de-referenced, or invisible are rejected.
 *
 * @param request PreviewGroupSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewGroupSourceResponse
 */
PreviewGroupSourceResponse Client::previewGroupSourceWithOptions(const PreviewGroupSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PreviewGroupSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/previewGroupSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewGroupSourceResponse>();
}

/**
 * @summary Previews a resource in a collaborative workspace.
 *
 * @description Active members can preview physical or referenced resources in a specified workspace. Requests to read resources that are cross-workspace, de-referenced, or invisible are rejected.
 *
 * @param request PreviewGroupSourceRequest
 * @return PreviewGroupSourceResponse
 */
PreviewGroupSourceResponse Client::previewGroupSource(const PreviewGroupSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return previewGroupSourceWithOptions(request, headers, runtime);
}

/**
 * @summary Previews the knowledge content in a specified enterprise knowledge base.
 *
 * @description ## Operation description
 * - This operation previews the content of a specified knowledge entry in an enterprise knowledge base.
 * - The `DEVELOPMENT_KB_VIEW` permission is required to call this API.
 * - `sourceId` is a required parameter that identifies the knowledge entry to preview.
 * - The optional parameter `tenantId` specifies the tenant ID. If not provided, the default tenant ID of the caller is used.
 * - Multiple preview types are supported, including but not limited to images, audio, video, and text.
 *
 * @param request PreviewKnowledgeBaseSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewKnowledgeBaseSourceResponse
 */
PreviewKnowledgeBaseSourceResponse Client::previewKnowledgeBaseSourceWithOptions(const PreviewKnowledgeBaseSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PreviewKnowledgeBaseSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/previewKnowledgeBaseSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewKnowledgeBaseSourceResponse>();
}

/**
 * @summary Previews the knowledge content in a specified enterprise knowledge base.
 *
 * @description ## Operation description
 * - This operation previews the content of a specified knowledge entry in an enterprise knowledge base.
 * - The `DEVELOPMENT_KB_VIEW` permission is required to call this API.
 * - `sourceId` is a required parameter that identifies the knowledge entry to preview.
 * - The optional parameter `tenantId` specifies the tenant ID. If not provided, the default tenant ID of the caller is used.
 * - Multiple preview types are supported, including but not limited to images, audio, video, and text.
 *
 * @param request PreviewKnowledgeBaseSourceRequest
 * @return PreviewKnowledgeBaseSourceResponse
 */
PreviewKnowledgeBaseSourceResponse Client::previewKnowledgeBaseSource(const PreviewKnowledgeBaseSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return previewKnowledgeBaseSourceWithOptions(request, headers, runtime);
}

/**
 * @summary Previews an output file or a non-file output.
 *
 * @description Previews the output that the current calling user has permission to access based on the output item ID. This operation supports managed versions, archived history, unversioned history, and non-file outputs such as emails and slide decks. If a short-term preview or download URL is returned, you must call the operation again after the URL expires.
 *
 * @param request PreviewOutputFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewOutputFileResponse
 */
PreviewOutputFileResponse Client::previewOutputFileWithOptions(const PreviewOutputFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasOutputItemId()) {
    body["outputItemId"] = request.getOutputItemId();
  }

  if (!!request.hasVersionId()) {
    body["versionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PreviewOutputFile"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/previewOutputFile")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewOutputFileResponse>();
}

/**
 * @summary Previews an output file or a non-file output.
 *
 * @description Previews the output that the current calling user has permission to access based on the output item ID. This operation supports managed versions, archived history, unversioned history, and non-file outputs such as emails and slide decks. If a short-term preview or download URL is returned, you must call the operation again after the URL expires.
 *
 * @param request PreviewOutputFileRequest
 * @return PreviewOutputFileResponse
 */
PreviewOutputFileResponse Client::previewOutputFile(const PreviewOutputFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return previewOutputFileWithOptions(request, headers, runtime);
}

/**
 * @summary Allows a user to preview specified knowledge content in their personal directory.
 *
 * @description ## Request description
 * - This operation only allows a user to preview resources in their own personal directory.
 * - The authentication process includes basic authentication and data source ownership verification to ensure that the requester can only access knowledge in their personal directory.
 * - You must provide the unique identifier `sourceId` of the knowledge content in the request. The system queries and returns the corresponding preview information based on this ID and the user\\"s tenant information.
 * - Multiple preview types are supported, such as image, audio, and video. The system returns the corresponding preview URL or direct content display based on the type.
 *
 * @param request PreviewPersonalSourceRequest
 * @param headers PreviewPersonalSourceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewPersonalSourceResponse
 */
PreviewPersonalSourceResponse Client::previewPersonalSourceWithOptions(const PreviewPersonalSourceRequest &request, const PreviewPersonalSourceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasRequestId()) {
    realHeaders["requestId"] = Darabonba::Convert::stringVal(headers.getRequestId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PreviewPersonalSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/previewPersonalSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewPersonalSourceResponse>();
}

/**
 * @summary Allows a user to preview specified knowledge content in their personal directory.
 *
 * @description ## Request description
 * - This operation only allows a user to preview resources in their own personal directory.
 * - The authentication process includes basic authentication and data source ownership verification to ensure that the requester can only access knowledge in their personal directory.
 * - You must provide the unique identifier `sourceId` of the knowledge content in the request. The system queries and returns the corresponding preview information based on this ID and the user\\"s tenant information.
 * - Multiple preview types are supported, such as image, audio, and video. The system returns the corresponding preview URL or direct content display based on the type.
 *
 * @param request PreviewPersonalSourceRequest
 * @return PreviewPersonalSourceResponse
 */
PreviewPersonalSourceResponse Client::previewPersonalSource(const PreviewPersonalSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PreviewPersonalSourceHeaders headers = PreviewPersonalSourceHeaders();
  return previewPersonalSourceWithOptions(request, headers, runtime);
}

/**
 * @summary Queries primary object data with paging by operating object name, with support for filtering and search.
 *
 * @description ## Operation description
 * - This API operation queries primary object data with paging by a specified operating object name (such as `customer_1`).
 * - You can search by keyword and specify whether to return only objects marked as favorites.
 * - You can use complex filter conditions to further narrow results, including but not limited to operators such as equal to, not equal to, greater than, and less than.
 * - If no primary object type is configured, an empty result set is returned.
 * - The data in the request is subject to authentication and filtering to ensure security and accuracy.
 *
 * @param request QueryPrimaryObjectDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPrimaryObjectDataResponse
 */
QueryPrimaryObjectDataResponse Client::queryPrimaryObjectDataWithOptions(const QueryPrimaryObjectDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasOnlyFavorites()) {
    body["onlyFavorites"] = request.getOnlyFavorites();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryPrimaryObjectData"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/queryPrimaryObjectData")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPrimaryObjectDataResponse>();
}

/**
 * @summary Queries primary object data with paging by operating object name, with support for filtering and search.
 *
 * @description ## Operation description
 * - This API operation queries primary object data with paging by a specified operating object name (such as `customer_1`).
 * - You can search by keyword and specify whether to return only objects marked as favorites.
 * - You can use complex filter conditions to further narrow results, including but not limited to operators such as equal to, not equal to, greater than, and less than.
 * - If no primary object type is configured, an empty result set is returned.
 * - The data in the request is subject to authentication and filtering to ensure security and accuracy.
 *
 * @param request QueryPrimaryObjectDataRequest
 * @return QueryPrimaryObjectDataResponse
 */
QueryPrimaryObjectDataResponse Client::queryPrimaryObjectData(const QueryPrimaryObjectDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryPrimaryObjectDataWithOptions(request, headers, runtime);
}

/**
 * @summary Queries semantic knowledge related to a user question.
 *
 * @description Exposes only the schema_knowledge semantic recall capability of smart-query.
 *     CLI mapping: ``winnexo semantic query``. ``tenantId`` is passed through common parameters. ``userId``
 *     is read only from the Token identity and cannot be overridden by the request body. The service validates
 *     the ownership of ``graphName + agentName``, active graph status, digital human enablement status, and
 *     the current user\\"s USE permission. A cross-graph agent with the same name will fail and be closed.
 *     Then ``outputs=[schema_knowledge]`` is fixed.
 *
 * @param request QuerySemanticKnowledgeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySemanticKnowledgeResponse
 */
QuerySemanticKnowledgeResponse Client::querySemanticKnowledgeWithOptions(const QuerySemanticKnowledgeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAgentName()) {
    body["agentName"] = request.getAgentName();
  }

  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QuerySemanticKnowledge"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/querySemanticKnowledge")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySemanticKnowledgeResponse>();
}

/**
 * @summary Queries semantic knowledge related to a user question.
 *
 * @description Exposes only the schema_knowledge semantic recall capability of smart-query.
 *     CLI mapping: ``winnexo semantic query``. ``tenantId`` is passed through common parameters. ``userId``
 *     is read only from the Token identity and cannot be overridden by the request body. The service validates
 *     the ownership of ``graphName + agentName``, active graph status, digital human enablement status, and
 *     the current user\\"s USE permission. A cross-graph agent with the same name will fail and be closed.
 *     Then ``outputs=[schema_knowledge]`` is fixed.
 *
 * @param request QuerySemanticKnowledgeRequest
 * @return QuerySemanticKnowledgeResponse
 */
QuerySemanticKnowledgeResponse Client::querySemanticKnowledge(const QuerySemanticKnowledgeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return querySemanticKnowledgeWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the overview of source retrieval and usage.
 *
 * @description Queries the overview of source retrieve and usage. Returns only the data for the current query purpose without other report sections. For enterprises, only knowledge base super administrators are allowed. For a single workspace, workspace administrators responsible for storage management or the SUPER_ADMIN of the current tenant platform are allowed. For all workspaces, only the platform SUPER_ADMIN is allowed. This feature is not available for individual users, and group credentials cannot be used across workspaces. The time range is based on the ingestion time, inclusive of the start time and exclusive of the end time, with a maximum span of 366 days. Knowledge bases are filtered based on the current attach. The three API operations do not guarantee the same snapshot across requests.
 *
 * @param tmpReq QuerySourceUsageSummaryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySourceUsageSummaryResponse
 */
QuerySourceUsageSummaryResponse Client::querySourceUsageSummaryWithOptions(const QuerySourceUsageSummaryRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QuerySourceUsageSummaryShrinkRequest request = QuerySourceUsageSummaryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasKnowledgeBaseIds()) {
    request.setKnowledgeBaseIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKnowledgeBaseIds(), "knowledgeBaseIds", "json"));
  }

  if (!!tmpReq.hasSourceIds()) {
    request.setSourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceIds(), "sourceIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasEndTime()) {
    body["endTime"] = request.getEndTime();
  }

  if (!!request.hasEventType()) {
    body["eventType"] = request.getEventType();
  }

  if (!!request.hasKnowledgeBaseIdsShrink()) {
    body["knowledgeBaseIds"] = request.getKnowledgeBaseIdsShrink();
  }

  if (!!request.hasScopeType()) {
    body["scopeType"] = request.getScopeType();
  }

  if (!!request.hasSourceIdsShrink()) {
    body["sourceIds"] = request.getSourceIdsShrink();
  }

  if (!!request.hasSourceName()) {
    body["sourceName"] = request.getSourceName();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QuerySourceUsageSummary"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/querySourceUsageSummary")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySourceUsageSummaryResponse>();
}

/**
 * @summary Queries the overview of source retrieval and usage.
 *
 * @description Queries the overview of source retrieve and usage. Returns only the data for the current query purpose without other report sections. For enterprises, only knowledge base super administrators are allowed. For a single workspace, workspace administrators responsible for storage management or the SUPER_ADMIN of the current tenant platform are allowed. For all workspaces, only the platform SUPER_ADMIN is allowed. This feature is not available for individual users, and group credentials cannot be used across workspaces. The time range is based on the ingestion time, inclusive of the start time and exclusive of the end time, with a maximum span of 366 days. Knowledge bases are filtered based on the current attach. The three API operations do not guarantee the same snapshot across requests.
 *
 * @param request QuerySourceUsageSummaryRequest
 * @return QuerySourceUsageSummaryResponse
 */
QuerySourceUsageSummaryResponse Client::querySourceUsageSummary(const QuerySourceUsageSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return querySourceUsageSummaryWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the retrieval and usage trends of sources over time.
 *
 * @description Queries the retrieve and usage trends of sources over time. Returns only the data for the current query purpose without attaching other report sections. For enterprises, only the knowledge base super administrator is allowed. For a single workspace, the storage management administrator or the SUPER_ADMIN of the current tenant platform is allowed. For all workspaces, only the platform SUPER_ADMIN is allowed. This feature is not available for individual users, and group credentials cannot be used across workspaces. The time refers to the reporting and ingestion time, using a left-closed and right-open interval, with a maximum span of 366 days. Knowledge bases are filtered based on current bindings. The three API operations do not guarantee the same snapshot across requests.
 *
 * @param tmpReq QuerySourceUsageTrendRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySourceUsageTrendResponse
 */
QuerySourceUsageTrendResponse Client::querySourceUsageTrendWithOptions(const QuerySourceUsageTrendRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QuerySourceUsageTrendShrinkRequest request = QuerySourceUsageTrendShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasKnowledgeBaseIds()) {
    request.setKnowledgeBaseIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKnowledgeBaseIds(), "knowledgeBaseIds", "json"));
  }

  if (!!tmpReq.hasSourceIds()) {
    request.setSourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceIds(), "sourceIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasEndTime()) {
    body["endTime"] = request.getEndTime();
  }

  if (!!request.hasEventType()) {
    body["eventType"] = request.getEventType();
  }

  if (!!request.hasGranularity()) {
    body["granularity"] = request.getGranularity();
  }

  if (!!request.hasKnowledgeBaseIdsShrink()) {
    body["knowledgeBaseIds"] = request.getKnowledgeBaseIdsShrink();
  }

  if (!!request.hasScopeType()) {
    body["scopeType"] = request.getScopeType();
  }

  if (!!request.hasSourceIdsShrink()) {
    body["sourceIds"] = request.getSourceIdsShrink();
  }

  if (!!request.hasSourceName()) {
    body["sourceName"] = request.getSourceName();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.getStartTime();
  }

  if (!!request.hasTimeZone()) {
    body["timeZone"] = request.getTimeZone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QuerySourceUsageTrend"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/querySourceUsageTrend")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySourceUsageTrendResponse>();
}

/**
 * @summary Queries the retrieval and usage trends of sources over time.
 *
 * @description Queries the retrieve and usage trends of sources over time. Returns only the data for the current query purpose without attaching other report sections. For enterprises, only the knowledge base super administrator is allowed. For a single workspace, the storage management administrator or the SUPER_ADMIN of the current tenant platform is allowed. For all workspaces, only the platform SUPER_ADMIN is allowed. This feature is not available for individual users, and group credentials cannot be used across workspaces. The time refers to the reporting and ingestion time, using a left-closed and right-open interval, with a maximum span of 366 days. Knowledge bases are filtered based on current bindings. The three API operations do not guarantee the same snapshot across requests.
 *
 * @param request QuerySourceUsageTrendRequest
 * @return QuerySourceUsageTrendResponse
 */
QuerySourceUsageTrendResponse Client::querySourceUsageTrend(const QuerySourceUsageTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return querySourceUsageTrendWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the result of an organization synchronization task.
 *
 * @description Queries the execution status and result of an organization synchronization task based on the task ID.
 *     Task status transitions: PENDING → RUNNING → COMPLETED / FAILED / TIMEOUT / CANCELED
 *     Recommended client polling interval: 3 to 5 seconds.
 *
 * @param request QuerySyncResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySyncResultResponse
 */
QuerySyncResultResponse Client::querySyncResultWithOptions(const QuerySyncResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QuerySyncResult"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/querySyncResult")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySyncResultResponse>();
}

/**
 * @summary Queries the result of an organization synchronization task.
 *
 * @description Queries the execution status and result of an organization synchronization task based on the task ID.
 *     Task status transitions: PENDING → RUNNING → COMPLETED / FAILED / TIMEOUT / CANCELED
 *     Recommended client polling interval: 3 to 5 seconds.
 *
 * @param request QuerySyncResultRequest
 * @return QuerySyncResultResponse
 */
QuerySyncResultResponse Client::querySyncResult(const QuerySyncResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return querySyncResultWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the grouped view of the work item feed for active members with server-side cursor pagination.
 *
 * @description Queries the grouped view of the work item feed for active members with server-side cursor pagination.
 *
 * @param tmpReq QueryWorkItemFeedRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryWorkItemFeedResponse
 */
QueryWorkItemFeedResponse Client::queryWorkItemFeedWithOptions(const QueryWorkItemFeedRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryWorkItemFeedShrinkRequest request = QueryWorkItemFeedShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBusinessStatuses()) {
    request.setBusinessStatusesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBusinessStatuses(), "businessStatuses", "json"));
  }

  if (!!tmpReq.hasItemTypes()) {
    request.setItemTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getItemTypes(), "itemTypes", "json"));
  }

  if (!!tmpReq.hasPriorities()) {
    request.setPrioritiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPriorities(), "priorities", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasBusinessStatusesShrink()) {
    body["businessStatuses"] = request.getBusinessStatusesShrink();
  }

  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasCursor()) {
    body["cursor"] = request.getCursor();
  }

  if (!!request.hasItemTypesShrink()) {
    body["itemTypes"] = request.getItemTypesShrink();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPrioritiesShrink()) {
    body["priorities"] = request.getPrioritiesShrink();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.getScope();
  }

  if (!!request.hasSourceTaskId()) {
    body["sourceTaskId"] = request.getSourceTaskId();
  }

  if (!!request.hasView()) {
    body["view"] = request.getView();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryWorkItemFeed"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/queryWorkItemFeed")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryWorkItemFeedResponse>();
}

/**
 * @summary Queries the grouped view of the work item feed for active members with server-side cursor pagination.
 *
 * @description Queries the grouped view of the work item feed for active members with server-side cursor pagination.
 *
 * @param request QueryWorkItemFeedRequest
 * @return QueryWorkItemFeedResponse
 */
QueryWorkItemFeedResponse Client::queryWorkItemFeed(const QueryWorkItemFeedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryWorkItemFeedWithOptions(request, headers, runtime);
}

/**
 * @summary Generates next-step recommendations for a session.
 *
 * @description ## Request description
 * Based on the most recent N messages in a session and the skills attached to the agent, invokes an LLM to generate 0 to 3 next-step recommendations (follow-up questions or recommended skills to execute).
 * - `sessionId`: The session ID. Required. Only sessions that the currently authenticated user has permission to access are allowed.
 * - `recentMessageCount`: The number of recent messages used to assemble the contextual information. Valid values: 1 to 30. Default value: 10 (approximately 5 rounds of user+assistant conversation).
 * - `customPrompt`: A custom recommendation instruction (up to 10,000 characters). This instruction is injected into the default recommendation template before the output format constraints. The output is still subject to the JSON format and type constraints of the template.
 * - `outputType`: Filters the output type. followUpOnly = follow-up question recommendations only (default). skillOnly = skill recommendations only. both = generates both types.
 * Unlike internal endpoints, API calls are not restricted by the next-step recommendation toggle in user personal settings and always perform recommendation generation.
 *
 * @param request RecommendNextActionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecommendNextActionsResponse
 */
RecommendNextActionsResponse Client::recommendNextActionsWithOptions(const RecommendNextActionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCustomPrompt()) {
    body["customPrompt"] = request.getCustomPrompt();
  }

  if (!!request.hasOutputType()) {
    body["outputType"] = request.getOutputType();
  }

  if (!!request.hasRecentMessageCount()) {
    body["recentMessageCount"] = request.getRecentMessageCount();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RecommendNextActions"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/recommendNextActions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecommendNextActionsResponse>();
}

/**
 * @summary Generates next-step recommendations for a session.
 *
 * @description ## Request description
 * Based on the most recent N messages in a session and the skills attached to the agent, invokes an LLM to generate 0 to 3 next-step recommendations (follow-up questions or recommended skills to execute).
 * - `sessionId`: The session ID. Required. Only sessions that the currently authenticated user has permission to access are allowed.
 * - `recentMessageCount`: The number of recent messages used to assemble the contextual information. Valid values: 1 to 30. Default value: 10 (approximately 5 rounds of user+assistant conversation).
 * - `customPrompt`: A custom recommendation instruction (up to 10,000 characters). This instruction is injected into the default recommendation template before the output format constraints. The output is still subject to the JSON format and type constraints of the template.
 * - `outputType`: Filters the output type. followUpOnly = follow-up question recommendations only (default). skillOnly = skill recommendations only. both = generates both types.
 * Unlike internal endpoints, API calls are not restricted by the next-step recommendation toggle in user personal settings and always perform recommendation generation.
 *
 * @param request RecommendNextActionsRequest
 * @return RecommendNextActionsResponse
 */
RecommendNextActionsResponse Client::recommendNextActions(const RecommendNextActionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return recommendNextActionsWithOptions(request, headers, runtime);
}

/**
 * @summary Registers permissions for in-app resources in batches.
 *
 * @description Checks the MANAGE permissions for all applications and then performs an atomic batch registration.
 *
 * @param tmpReq RegisterAppResourcePermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterAppResourcePermissionsResponse
 */
RegisterAppResourcePermissionsResponse Client::registerAppResourcePermissionsWithOptions(const RegisterAppResourcePermissionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RegisterAppResourcePermissionsShrinkRequest request = RegisterAppResourcePermissionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasItems()) {
    request.setItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getItems(), "items", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasItemsShrink()) {
    body["items"] = request.getItemsShrink();
  }

  if (!!request.hasResourceTenantId()) {
    body["resourceTenantId"] = request.getResourceTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RegisterAppResourcePermissions"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/registerAppResourcePermissions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterAppResourcePermissionsResponse>();
}

/**
 * @summary Registers permissions for in-app resources in batches.
 *
 * @description Checks the MANAGE permissions for all applications and then performs an atomic batch registration.
 *
 * @param request RegisterAppResourcePermissionsRequest
 * @return RegisterAppResourcePermissionsResponse
 */
RegisterAppResourcePermissionsResponse Client::registerAppResourcePermissions(const RegisterAppResourcePermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return registerAppResourcePermissionsWithOptions(request, headers, runtime);
}

/**
 * @summary Removes a user from a tenant.
 *
 * @description Removes a user from a tenant.
 *     Business orchestration:
 *     1. Obtains tenant_id from identity.
 *     2. Calls delete_user_from_tenant (includes last admin protection).
 *     3. Returns success.
 *     This operation:
 *     - Removes all role associations of the user under the tenant.
 *     - Removes all user group associations of the user under the tenant.
 *     - Revokes all digital employee usage authorizations of the user under the tenant.
 *     - Deletes the user-tenant mapping.
 *
 * @param request RemoveUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserResponse
 */
RemoveUserResponse Client::removeUserWithOptions(const RemoveUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  if (!!request.hasWnUserId()) {
    query["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUser"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/removeUser")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUserResponse>();
}

/**
 * @summary Removes a user from a tenant.
 *
 * @description Removes a user from a tenant.
 *     Business orchestration:
 *     1. Obtains tenant_id from identity.
 *     2. Calls delete_user_from_tenant (includes last admin protection).
 *     3. Returns success.
 *     This operation:
 *     - Removes all role associations of the user under the tenant.
 *     - Removes all user group associations of the user under the tenant.
 *     - Revokes all digital employee usage authorizations of the user under the tenant.
 *     - Deletes the user-tenant mapping.
 *
 * @param request RemoveUserRequest
 * @return RemoveUserResponse
 */
RemoveUserResponse Client::removeUser(const RemoveUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeUserWithOptions(request, headers, runtime);
}

/**
 * @summary Removes direct member relationships in bulk from a specified user group.
 *
 * @description ## Request description
 * - This operation supports batch removal of direct member relationships between users and a specified user group by providing the user group ID and one or more user IDs.
 * - The `userIds` parameter accepts an integer array that represents the list of platform user IDs to be removed.
 * - If a user you attempt to remove is not a direct member of the user group, the final result count is not affected.
 * - After a successful call, the response returns information such as the number of members actually removed and the number of members before the request was processed.
 * - This operation requires appropriate permission authentication and is recorded in operation logs.
 *
 * @param tmpReq RemoveUserGroupMembersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserGroupMembersResponse
 */
RemoveUserGroupMembersResponse Client::removeUserGroupMembersWithOptions(const RemoveUserGroupMembersRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveUserGroupMembersShrinkRequest request = RemoveUserGroupMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserIds()) {
    request.setUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserIds(), "userIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasUserGroupId()) {
    body["userGroupId"] = request.getUserGroupId();
  }

  if (!!request.hasUserIdsShrink()) {
    body["userIds"] = request.getUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveUserGroupMembers"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/removeUserGroupMembers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUserGroupMembersResponse>();
}

/**
 * @summary Removes direct member relationships in bulk from a specified user group.
 *
 * @description ## Request description
 * - This operation supports batch removal of direct member relationships between users and a specified user group by providing the user group ID and one or more user IDs.
 * - The `userIds` parameter accepts an integer array that represents the list of platform user IDs to be removed.
 * - If a user you attempt to remove is not a direct member of the user group, the final result count is not affected.
 * - After a successful call, the response returns information such as the number of members actually removed and the number of members before the request was processed.
 * - This operation requires appropriate permission authentication and is recorded in operation logs.
 *
 * @param request RemoveUserGroupMembersRequest
 * @return RemoveUserGroupMembersResponse
 */
RemoveUserGroupMembersResponse Client::removeUserGroupMembers(const RemoveUserGroupMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeUserGroupMembersWithOptions(request, headers, runtime);
}

/**
 * @summary Renames a data source in a specified enterprise knowledge base.
 *
 * @description ## Request description
 * - This operation allows users with the required permissions to modify the name of a specific data source in an enterprise knowledge base.
 * - You must provide the ID of the data source to be renamed (sourceId) and the new name (newName).
 * - The rename operation only updates the name field of the data source and does not trigger other processing flows.
 * - After successful execution, the system publishes a `SOURCE_CHANGED` event for frontend display refresh and attempts to notify DocumentAgent to synchronize the latest source_name information. However, if this step fails, it does not affect the completion status of the main flow.
 * - If the specified sourceId does not exist, the error code `ERR.Robject.Source.NotFound` is returned.
 * - To invoke this API, you must have the `DEVELOPMENT_KB_MANAGE` feature permission.
 * - Identity verification is supported through AccessKey, BearerToken, or APP methods to authenticate requests.
 *
 * @param request RenameKnowledgeBaseSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenameKnowledgeBaseSourceResponse
 */
RenameKnowledgeBaseSourceResponse Client::renameKnowledgeBaseSourceWithOptions(const RenameKnowledgeBaseSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasNewName()) {
    body["newName"] = request.getNewName();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RenameKnowledgeBaseSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/renameKnowledgeBaseSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenameKnowledgeBaseSourceResponse>();
}

/**
 * @summary Renames a data source in a specified enterprise knowledge base.
 *
 * @description ## Request description
 * - This operation allows users with the required permissions to modify the name of a specific data source in an enterprise knowledge base.
 * - You must provide the ID of the data source to be renamed (sourceId) and the new name (newName).
 * - The rename operation only updates the name field of the data source and does not trigger other processing flows.
 * - After successful execution, the system publishes a `SOURCE_CHANGED` event for frontend display refresh and attempts to notify DocumentAgent to synchronize the latest source_name information. However, if this step fails, it does not affect the completion status of the main flow.
 * - If the specified sourceId does not exist, the error code `ERR.Robject.Source.NotFound` is returned.
 * - To invoke this API, you must have the `DEVELOPMENT_KB_MANAGE` feature permission.
 * - Identity verification is supported through AccessKey, BearerToken, or APP methods to authenticate requests.
 *
 * @param request RenameKnowledgeBaseSourceRequest
 * @return RenameKnowledgeBaseSourceResponse
 */
RenameKnowledgeBaseSourceResponse Client::renameKnowledgeBaseSource(const RenameKnowledgeBaseSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renameKnowledgeBaseSourceWithOptions(request, headers, runtime);
}

/**
 * @summary Renames a specified data source. This is a lightweight operation.
 *
 * @description ## Operation description
 * - This API updates only the `name` field of the data source and does not trigger `process_source`.
 * - After a successful update, a `SOURCE_CHANGED` event is published for the frontend to refresh the display.
 * - The system makes a best-effort attempt to notify DocumentAgent to sync the new `source_name`. Even if the sync fails, the main process is not blocked.
 * - If the specified data source does not exist, the `ERR.Robject.Source.NotFound` error is returned. The global middleware converts this error into a POP error code.
 * - Security constraint: `tenant_id` and `user_id` must be derived from the authenticated identity.
 *
 * @param request RenameSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenameSourceResponse
 */
RenameSourceResponse Client::renameSourceWithOptions(const RenameSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasNewName()) {
    body["newName"] = request.getNewName();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RenameSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/renameSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenameSourceResponse>();
}

/**
 * @summary Renames a specified data source. This is a lightweight operation.
 *
 * @description ## Operation description
 * - This API updates only the `name` field of the data source and does not trigger `process_source`.
 * - After a successful update, a `SOURCE_CHANGED` event is published for the frontend to refresh the display.
 * - The system makes a best-effort attempt to notify DocumentAgent to sync the new `source_name`. Even if the sync fails, the main process is not blocked.
 * - If the specified data source does not exist, the `ERR.Robject.Source.NotFound` error is returned. The global middleware converts this error into a POP error code.
 * - Security constraint: `tenant_id` and `user_id` must be derived from the authenticated identity.
 *
 * @param request RenameSourceRequest
 * @return RenameSourceResponse
 */
RenameSourceResponse Client::renameSource(const RenameSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renameSourceWithOptions(request, headers, runtime);
}

/**
 * @summary Re-parses a resource in a collaborative workspace.
 *
 * @description Valid members who are creators or storage management administrators can re-parse physical resources. Referenced resources are read-only. The operation is asynchronous by default. The forceSync parameter only waits for completion and does not force a re-fetch. If an online document has not changed, the operation may return immediately.
 *
 * @param request ReparseGroupSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReparseGroupSourceResponse
 */
ReparseGroupSourceResponse Client::reparseGroupSourceWithOptions(const ReparseGroupSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasForceSync()) {
    body["forceSync"] = request.getForceSync();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReparseGroupSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/reparseGroupSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReparseGroupSourceResponse>();
}

/**
 * @summary Re-parses a resource in a collaborative workspace.
 *
 * @description Valid members who are creators or storage management administrators can re-parse physical resources. Referenced resources are read-only. The operation is asynchronous by default. The forceSync parameter only waits for completion and does not force a re-fetch. If an online document has not changed, the operation may return immediately.
 *
 * @param request ReparseGroupSourceRequest
 * @return ReparseGroupSourceResponse
 */
ReparseGroupSourceResponse Client::reparseGroupSource(const ReparseGroupSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reparseGroupSourceWithOptions(request, headers, runtime);
}

/**
 * @summary Re-parses a resource.
 *
 * @description ## Operation description
 * This API operation re-parses a specified data source. You can choose synchronous or asynchronous execution. You must provide the data source ID in the request. You can optionally specify whether to synchronously wait for parsing to complete. By default, the request is processed asynchronously by being added to a queue. You can also use the `tenantId` parameter to specify a tenant ID, but this parameter is optional.
 * - **forceSync**: If set to `true`, the operation synchronously waits for the re-parsing to complete. Default value: `false`, which indicates that the request is processed asynchronously.
 * - When the service returns `None`, it is converted to a `SourceNotFound` exception. Other exceptions are handled by the OpenAPI global exception chain.
 *
 * @param request ReparseSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReparseSourceResponse
 */
ReparseSourceResponse Client::reparseSourceWithOptions(const ReparseSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasForceSync()) {
    body["forceSync"] = request.getForceSync();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReparseSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/reparseSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReparseSourceResponse>();
}

/**
 * @summary Re-parses a resource.
 *
 * @description ## Operation description
 * This API operation re-parses a specified data source. You can choose synchronous or asynchronous execution. You must provide the data source ID in the request. You can optionally specify whether to synchronously wait for parsing to complete. By default, the request is processed asynchronously by being added to a queue. You can also use the `tenantId` parameter to specify a tenant ID, but this parameter is optional.
 * - **forceSync**: If set to `true`, the operation synchronously waits for the re-parsing to complete. Default value: `false`, which indicates that the request is processed asynchronously.
 * - When the service returns `None`, it is converted to a `SourceNotFound` exception. Other exceptions are handled by the OpenAPI global exception chain.
 *
 * @param request ReparseSourceRequest
 * @return ReparseSourceResponse
 */
ReparseSourceResponse Client::reparseSource(const ReparseSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reparseSourceWithOptions(request, headers, runtime);
}

/**
 * @summary Replaces a file in the workspace resources.
 *
 * @description Valid members who are creators or storage management administrators can replace physical GROUP resources. References are read-only. Upload the new file first and then commit the upload result. Only FILE type is supported. The SourceID is retained and parse is triggered, which is asynchronous by default. A no-op result may occur after a write operation, returning an execute error instead of a not-found error.
 *
 * @param request ReplaceGroupSourceFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceGroupSourceFileResponse
 */
ReplaceGroupSourceFileResponse Client::replaceGroupSourceFileWithOptions(const ReplaceGroupSourceFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasFileName()) {
    body["fileName"] = request.getFileName();
  }

  if (!!request.hasFilePath()) {
    body["filePath"] = request.getFilePath();
  }

  if (!!request.hasFilePublicUrl()) {
    body["filePublicUrl"] = request.getFilePublicUrl();
  }

  if (!!request.hasFileRecordId()) {
    body["fileRecordId"] = request.getFileRecordId();
  }

  if (!!request.hasForceSync()) {
    body["forceSync"] = request.getForceSync();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReplaceGroupSourceFile"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/replaceGroupSourceFile")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceGroupSourceFileResponse>();
}

/**
 * @summary Replaces a file in the workspace resources.
 *
 * @description Valid members who are creators or storage management administrators can replace physical GROUP resources. References are read-only. Upload the new file first and then commit the upload result. Only FILE type is supported. The SourceID is retained and parse is triggered, which is asynchronous by default. A no-op result may occur after a write operation, returning an execute error instead of a not-found error.
 *
 * @param request ReplaceGroupSourceFileRequest
 * @return ReplaceGroupSourceFileResponse
 */
ReplaceGroupSourceFileResponse Client::replaceGroupSourceFile(const ReplaceGroupSourceFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return replaceGroupSourceFileWithOptions(request, headers, runtime);
}

/**
 * @summary 设置企业知识库单库管理员
 *
 * @description 全量替换知识库的可变用户和用户组管理员。省略或传空数组会清空对应可变主体；普通企业知识库创建者保留。仅支持知识库根目录；帮助库配置只允许平台超级管理员或知识库超级管理员。
 *
 * @param tmpReq ReplaceKnowledgeBaseAdminsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceKnowledgeBaseAdminsResponse
 */
ReplaceKnowledgeBaseAdminsResponse Client::replaceKnowledgeBaseAdminsWithOptions(const ReplaceKnowledgeBaseAdminsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReplaceKnowledgeBaseAdminsShrinkRequest request = ReplaceKnowledgeBaseAdminsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserGroupIds()) {
    request.setUserGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserGroupIds(), "userGroupIds", "json"));
  }

  if (!!tmpReq.hasUserIds()) {
    request.setUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserIds(), "userIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasUserGroupIdsShrink()) {
    body["userGroupIds"] = request.getUserGroupIdsShrink();
  }

  if (!!request.hasUserIdsShrink()) {
    body["userIds"] = request.getUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReplaceKnowledgeBaseAdmins"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/replaceKnowledgeBaseAdmins")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceKnowledgeBaseAdminsResponse>();
}

/**
 * @summary 设置企业知识库单库管理员
 *
 * @description 全量替换知识库的可变用户和用户组管理员。省略或传空数组会清空对应可变主体；普通企业知识库创建者保留。仅支持知识库根目录；帮助库配置只允许平台超级管理员或知识库超级管理员。
 *
 * @param request ReplaceKnowledgeBaseAdminsRequest
 * @return ReplaceKnowledgeBaseAdminsResponse
 */
ReplaceKnowledgeBaseAdminsResponse Client::replaceKnowledgeBaseAdmins(const ReplaceKnowledgeBaseAdminsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return replaceKnowledgeBaseAdminsWithOptions(request, headers, runtime);
}

/**
 * @summary Replaces a FILE resource in a specified enterprise knowledge base and triggers re-parsing.
 *
 * @description ## Request description
 * This API allows you to update a specific FILE-type data source in a self-built enterprise knowledge base and trigger the system to re-parse the data source by providing a new file path and public access URL. Operations can be performed in synchronous or asynchronous mode. In synchronous mode, the client waits until the parsing process is complete.
 * - The **forceSync** parameter controls whether the request is processed synchronously. The default value is `false`, which indicates asynchronous processing.
 * - If **fileName** is not provided or its value is empty, the newly uploaded file retains the original file name.
 * - Ensure that the provided **filePath** and **filePublicUrl** are valid and point to the same file entity.
 *
 * @param request ReplaceKnowledgeBaseSourceFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceKnowledgeBaseSourceFileResponse
 */
ReplaceKnowledgeBaseSourceFileResponse Client::replaceKnowledgeBaseSourceFileWithOptions(const ReplaceKnowledgeBaseSourceFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasFileName()) {
    body["fileName"] = request.getFileName();
  }

  if (!!request.hasFilePath()) {
    body["filePath"] = request.getFilePath();
  }

  if (!!request.hasFilePublicUrl()) {
    body["filePublicUrl"] = request.getFilePublicUrl();
  }

  if (!!request.hasFileRecordId()) {
    body["fileRecordId"] = request.getFileRecordId();
  }

  if (!!request.hasForceSync()) {
    body["forceSync"] = request.getForceSync();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReplaceKnowledgeBaseSourceFile"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/replaceKnowledgeBaseSourceFile")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceKnowledgeBaseSourceFileResponse>();
}

/**
 * @summary Replaces a FILE resource in a specified enterprise knowledge base and triggers re-parsing.
 *
 * @description ## Request description
 * This API allows you to update a specific FILE-type data source in a self-built enterprise knowledge base and trigger the system to re-parse the data source by providing a new file path and public access URL. Operations can be performed in synchronous or asynchronous mode. In synchronous mode, the client waits until the parsing process is complete.
 * - The **forceSync** parameter controls whether the request is processed synchronously. The default value is `false`, which indicates asynchronous processing.
 * - If **fileName** is not provided or its value is empty, the newly uploaded file retains the original file name.
 * - Ensure that the provided **filePath** and **filePublicUrl** are valid and point to the same file entity.
 *
 * @param request ReplaceKnowledgeBaseSourceFileRequest
 * @return ReplaceKnowledgeBaseSourceFileResponse
 */
ReplaceKnowledgeBaseSourceFileResponse Client::replaceKnowledgeBaseSourceFile(const ReplaceKnowledgeBaseSourceFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return replaceKnowledgeBaseSourceFileWithOptions(request, headers, runtime);
}

/**
 * @summary Replaces all object bindings for enterprise knowledge base resources.
 *
 * @description Only TENANT resources can be modified: the current user must have administrative ACLs for all enterprise knowledge bases that are actually bound to the resource. Write permissions cannot be obtained by verifying only a single knowledge base.
 * The identity is obtained from the unified authentication chain. Users, tenants, or scopes in the request body are not accepted. The resource must be within the current tenant. This operation does not support GROUP, mixed personal and enterprise directory bindings, broken-link directories, or internal assets of system or external knowledge bases.
 * The objectBindings parameter performs a full replacement and supports up to 20 items. An empty array clears all bindings, and the clear operation also checks the write permissions of the resource. A non-empty list verifies the object type, object existence, and the current user\\"s object row read permissions grouped by graphName. Multiple graphs are supported, and normalized object bindings are returned.
 * The local binding replacement is completed in the same transaction, and then DocumentAgent is synchronously notified to update semantics.object_bindings. The gateway timeout is 300,000 milliseconds. If the synchronization fails, an error is returned, and the local bindings may have already been committed. You can retry with the same binding list. This operation does not provide cross-service transactions.
 *
 * @param tmpReq ReplaceKnowledgeBaseSourceObjectBindingsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceKnowledgeBaseSourceObjectBindingsResponse
 */
ReplaceKnowledgeBaseSourceObjectBindingsResponse Client::replaceKnowledgeBaseSourceObjectBindingsWithOptions(const ReplaceKnowledgeBaseSourceObjectBindingsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReplaceKnowledgeBaseSourceObjectBindingsShrinkRequest request = ReplaceKnowledgeBaseSourceObjectBindingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectBindings()) {
    request.setObjectBindingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectBindings(), "objectBindings", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasObjectBindingsShrink()) {
    body["objectBindings"] = request.getObjectBindingsShrink();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReplaceKnowledgeBaseSourceObjectBindings"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/replaceKnowledgeBaseSourceObjectBindings")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceKnowledgeBaseSourceObjectBindingsResponse>();
}

/**
 * @summary Replaces all object bindings for enterprise knowledge base resources.
 *
 * @description Only TENANT resources can be modified: the current user must have administrative ACLs for all enterprise knowledge bases that are actually bound to the resource. Write permissions cannot be obtained by verifying only a single knowledge base.
 * The identity is obtained from the unified authentication chain. Users, tenants, or scopes in the request body are not accepted. The resource must be within the current tenant. This operation does not support GROUP, mixed personal and enterprise directory bindings, broken-link directories, or internal assets of system or external knowledge bases.
 * The objectBindings parameter performs a full replacement and supports up to 20 items. An empty array clears all bindings, and the clear operation also checks the write permissions of the resource. A non-empty list verifies the object type, object existence, and the current user\\"s object row read permissions grouped by graphName. Multiple graphs are supported, and normalized object bindings are returned.
 * The local binding replacement is completed in the same transaction, and then DocumentAgent is synchronously notified to update semantics.object_bindings. The gateway timeout is 300,000 milliseconds. If the synchronization fails, an error is returned, and the local bindings may have already been committed. You can retry with the same binding list. This operation does not provide cross-service transactions.
 *
 * @param request ReplaceKnowledgeBaseSourceObjectBindingsRequest
 * @return ReplaceKnowledgeBaseSourceObjectBindingsResponse
 */
ReplaceKnowledgeBaseSourceObjectBindingsResponse Client::replaceKnowledgeBaseSourceObjectBindings(const ReplaceKnowledgeBaseSourceObjectBindingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return replaceKnowledgeBaseSourceObjectBindingsWithOptions(request, headers, runtime);
}

/**
 * @summary Overwrites or clears manual memory.
 *
 * @description Manages personal or specified writing workspace memory based on the authenticated user. In workspace mode, the permissions of active members are inherited.
 *
 * @param request ReplaceManualMemoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceManualMemoryResponse
 */
ReplaceManualMemoryResponse Client::replaceManualMemoryWithOptions(const ReplaceManualMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerType()) {
    body["ownerType"] = request.getOwnerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReplaceManualMemory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/replaceManualMemory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceManualMemoryResponse>();
}

/**
 * @summary Overwrites or clears manual memory.
 *
 * @description Manages personal or specified writing workspace memory based on the authenticated user. In workspace mode, the permissions of active members are inherited.
 *
 * @param request ReplaceManualMemoryRequest
 * @return ReplaceManualMemoryResponse
 */
ReplaceManualMemoryResponse Client::replaceManualMemory(const ReplaceManualMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return replaceManualMemoryWithOptions(request, headers, runtime);
}

/**
 * @deprecated OpenAPI ReplaceObjectBindings is deprecated
 *
 * @summary Replaces all object bindings for a specified data source.
 *
 * @description ## Request description
 * This API operation replaces all object bindings for a specific data source by deleting existing bindings and inserting new ones. If an empty list is passed, all bindings are cleared.
 * - **Security constraints**: The `tenant_id` and `user_id` must be derived from the authenticated identity.
 * - **Error handling**: If the specified data source does not exist, an `ERR.Robject.InvalidParameter` error is thrown and converted to a POP error code by the global middleware.
 * - **Synchronous notification**: After a successful replacement, a best-effort synchronous notification is sent to DocumentAgent to update `semantics.object_bindings`. However, failures are only logged and do not block the main process.
 *
 * @param tmpReq ReplaceObjectBindingsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceObjectBindingsResponse
 */
ReplaceObjectBindingsResponse Client::replaceObjectBindingsWithOptions(const ReplaceObjectBindingsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReplaceObjectBindingsShrinkRequest request = ReplaceObjectBindingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectBindings()) {
    request.setObjectBindingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectBindings(), "objectBindings", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasObjectBindingsShrink()) {
    body["objectBindings"] = request.getObjectBindingsShrink();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReplaceObjectBindings"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/replaceObjectBindings")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceObjectBindingsResponse>();
}

/**
 * @deprecated OpenAPI ReplaceObjectBindings is deprecated
 *
 * @summary Replaces all object bindings for a specified data source.
 *
 * @description ## Request description
 * This API operation replaces all object bindings for a specific data source by deleting existing bindings and inserting new ones. If an empty list is passed, all bindings are cleared.
 * - **Security constraints**: The `tenant_id` and `user_id` must be derived from the authenticated identity.
 * - **Error handling**: If the specified data source does not exist, an `ERR.Robject.InvalidParameter` error is thrown and converted to a POP error code by the global middleware.
 * - **Synchronous notification**: After a successful replacement, a best-effort synchronous notification is sent to DocumentAgent to update `semantics.object_bindings`. However, failures are only logged and do not block the main process.
 *
 * @param request ReplaceObjectBindingsRequest
 * @return ReplaceObjectBindingsResponse
 */
ReplaceObjectBindingsResponse Client::replaceObjectBindings(const ReplaceObjectBindingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return replaceObjectBindingsWithOptions(request, headers, runtime);
}

/**
 * @summary Replaces all object bindings for a personal resource.
 *
 * @description Only PERSONAL resources can be modified. The current user must be both the creator of the resource and the owner of all actual bound directories, and the directory ownership must match the resource scope. Identity is obtained from the unified authentication chain. Users, tenants, or scopes in the request body are not accepted. The resource must be within the current tenant. This operation does not support GROUP, mixed personal and enterprise directory bindings, broken-link directories, or internal assets of system or external knowledge bases. The objectBindings parameter performs a full replacement and supports up to 20 items. An empty array clears all bindings, and the clear operation also checks the write permissions of the resource. A non-empty list validates the object type, object existence, and the current user\\"s object row read permissions grouped by graphName. Multiple graphs are supported, and normalized object bindings are returned. Local binding replacement is completed in the same transaction, followed by a synchronous notification to DocumentAgent to update semantics.object_bindings. The gateway timeout is 300,000 milliseconds. If the synchronization fails, an error is returned, and the local bindings may have already been committed. You can retry with the same binding list. This operation does not provide cross-service transactions.
 *
 * @param tmpReq ReplacePersonalSourceObjectBindingsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplacePersonalSourceObjectBindingsResponse
 */
ReplacePersonalSourceObjectBindingsResponse Client::replacePersonalSourceObjectBindingsWithOptions(const ReplacePersonalSourceObjectBindingsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReplacePersonalSourceObjectBindingsShrinkRequest request = ReplacePersonalSourceObjectBindingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectBindings()) {
    request.setObjectBindingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectBindings(), "objectBindings", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasObjectBindingsShrink()) {
    body["objectBindings"] = request.getObjectBindingsShrink();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReplacePersonalSourceObjectBindings"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/replacePersonalSourceObjectBindings")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplacePersonalSourceObjectBindingsResponse>();
}

/**
 * @summary Replaces all object bindings for a personal resource.
 *
 * @description Only PERSONAL resources can be modified. The current user must be both the creator of the resource and the owner of all actual bound directories, and the directory ownership must match the resource scope. Identity is obtained from the unified authentication chain. Users, tenants, or scopes in the request body are not accepted. The resource must be within the current tenant. This operation does not support GROUP, mixed personal and enterprise directory bindings, broken-link directories, or internal assets of system or external knowledge bases. The objectBindings parameter performs a full replacement and supports up to 20 items. An empty array clears all bindings, and the clear operation also checks the write permissions of the resource. A non-empty list validates the object type, object existence, and the current user\\"s object row read permissions grouped by graphName. Multiple graphs are supported, and normalized object bindings are returned. Local binding replacement is completed in the same transaction, followed by a synchronous notification to DocumentAgent to update semantics.object_bindings. The gateway timeout is 300,000 milliseconds. If the synchronization fails, an error is returned, and the local bindings may have already been committed. You can retry with the same binding list. This operation does not provide cross-service transactions.
 *
 * @param request ReplacePersonalSourceObjectBindingsRequest
 * @return ReplacePersonalSourceObjectBindingsResponse
 */
ReplacePersonalSourceObjectBindingsResponse Client::replacePersonalSourceObjectBindings(const ReplacePersonalSourceObjectBindingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return replacePersonalSourceObjectBindingsWithOptions(request, headers, runtime);
}

/**
 * @summary Allows a user to replace a personal file resource that they created and triggers the system to re-parse the file.
 *
 * @description ## Operation description
 * - This API operation replaces a personal FILE resource created by the current platform user and triggers the system to re-parse the file.
 * - The `tenant_id`, operator, and creator constraints are read only from the authenticated identity. Requests without a platform user are rejected to prevent bypassing ownership verification.
 * - If the server returns `None`, it is converted to a `NotFound` exception. Other exceptions are handled by the OpenAPI global exception chain.
 * - This operation supports synchronous or asynchronous waiting for re-parsing to complete. The default behavior is asynchronous queuing (controlled by the `forceSync` parameter).
 *
 * @param request ReplaceSourceFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceSourceFileResponse
 */
ReplaceSourceFileResponse Client::replaceSourceFileWithOptions(const ReplaceSourceFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasFileName()) {
    body["fileName"] = request.getFileName();
  }

  if (!!request.hasFilePath()) {
    body["filePath"] = request.getFilePath();
  }

  if (!!request.hasFilePublicUrl()) {
    body["filePublicUrl"] = request.getFilePublicUrl();
  }

  if (!!request.hasFileRecordId()) {
    body["fileRecordId"] = request.getFileRecordId();
  }

  if (!!request.hasForceSync()) {
    body["forceSync"] = request.getForceSync();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReplaceSourceFile"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/replaceSourceFile")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceSourceFileResponse>();
}

/**
 * @summary Allows a user to replace a personal file resource that they created and triggers the system to re-parse the file.
 *
 * @description ## Operation description
 * - This API operation replaces a personal FILE resource created by the current platform user and triggers the system to re-parse the file.
 * - The `tenant_id`, operator, and creator constraints are read only from the authenticated identity. Requests without a platform user are rejected to prevent bypassing ownership verification.
 * - If the server returns `None`, it is converted to a `NotFound` exception. Other exceptions are handled by the OpenAPI global exception chain.
 * - This operation supports synchronous or asynchronous waiting for re-parsing to complete. The default behavior is asynchronous queuing (controlled by the `forceSync` parameter).
 *
 * @param request ReplaceSourceFileRequest
 * @return ReplaceSourceFileResponse
 */
ReplaceSourceFileResponse Client::replaceSourceFile(const ReplaceSourceFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return replaceSourceFileWithOptions(request, headers, runtime);
}

/**
 * @summary Reruns a workflow node.
 *
 * @description Reruns a failed workflow node.
 *
 * @param request RerunNodeAIRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RerunNodeAIResponse
 */
RerunNodeAIResponse Client::rerunNodeAIWithOptions(const RerunNodeAIRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasInstanceId()) {
    body["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    body["nodeId"] = request.getNodeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RerunNodeAI"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/rerunNodeAI")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RerunNodeAIResponse>();
}

/**
 * @summary Reruns a workflow node.
 *
 * @description Reruns a failed workflow node.
 *
 * @param request RerunNodeAIRequest
 * @return RerunNodeAIResponse
 */
RerunNodeAIResponse Client::rerunNodeAI(const RerunNodeAIRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rerunNodeAIWithOptions(request, headers, runtime);
}

/**
 * @summary Reruns a workflow starting from a specified node of a work item.
 *
 * @description Reruns a workflow starting from a specified node of a work item. This operation retains business permissions and status checks. Acceptance of the command does not indicate that the asynchronous execution is complete.
 *
 * @param request RerunWorkflowNodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RerunWorkflowNodeResponse
 */
RerunWorkflowNodeResponse Client::rerunWorkflowNodeWithOptions(const RerunWorkflowNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasNodeKey()) {
    body["nodeKey"] = request.getNodeKey();
  }

  if (!!request.hasPlanId()) {
    body["planId"] = request.getPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RerunWorkflowNode"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/rerunWorkflowNode")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RerunWorkflowNodeResponse>();
}

/**
 * @summary Reruns a workflow starting from a specified node of a work item.
 *
 * @description Reruns a workflow starting from a specified node of a work item. This operation retains business permissions and status checks. Acceptance of the command does not indicate that the asynchronous execution is complete.
 *
 * @param request RerunWorkflowNodeRequest
 * @return RerunWorkflowNodeResponse
 */
RerunWorkflowNodeResponse Client::rerunWorkflowNode(const RerunWorkflowNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rerunWorkflowNodeWithOptions(request, headers, runtime);
}

/**
 * @summary Resets a user password.
 *
 * @description Resets a user password through OpenAPI.
 *     Business orchestration:
 *     1. Call UserManagementService.reset_member_password and pass in password_encrypted (required).
 *        -> The service internally performs RSA decryption, complexity check, bcrypt hashing, and data writing.
 *     2. Return the reset result.
 *     Error codes:
 *     - ERR.User.NotFound: The user does not exist.
 *     - ERR.User.NotInTenant: The user is not in the current tenant.
 *     - ERR.User.WinnexoPasswordRequired: The user has no password credentials (not of the WINNEXO type).
 *
 * @param request ResetPasswordRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetPasswordResponse
 */
ResetPasswordResponse Client::resetPasswordWithOptions(const ResetPasswordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasPasswordEncrypted()) {
    body["passwordEncrypted"] = request.getPasswordEncrypted();
  }

  if (!!request.hasWnUserId()) {
    body["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ResetPassword"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/resetPassword")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetPasswordResponse>();
}

/**
 * @summary Resets a user password.
 *
 * @description Resets a user password through OpenAPI.
 *     Business orchestration:
 *     1. Call UserManagementService.reset_member_password and pass in password_encrypted (required).
 *        -> The service internally performs RSA decryption, complexity check, bcrypt hashing, and data writing.
 *     2. Return the reset result.
 *     Error codes:
 *     - ERR.User.NotFound: The user does not exist.
 *     - ERR.User.NotInTenant: The user is not in the current tenant.
 *     - ERR.User.WinnexoPasswordRequired: The user has no password credentials (not of the WINNEXO type).
 *
 * @param request ResetPasswordRequest
 * @return ResetPasswordResponse
 */
ResetPasswordResponse Client::resetPassword(const ResetPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resetPasswordWithOptions(request, headers, runtime);
}

/**
 * @summary Resets an API token.
 *
 * @description Resets the token of a user.
 *     Business logic:
 *     1. Retrieves user_id from identity (caller_type=user is required).
 *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
 *     3. Calls reset_token:
 *        - Changes the old ACTIVE token to RESET (permanently invalidated).
 *        - Generates a new ACTIVE token.
 *     4. Returns the new token in plaintext and the masked value.
 *     Note: After the reset, the old token is permanently invalidated and cannot be recovered. The new token in plaintext is returned only in this response.
 *
 * @param request ResetTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetTokenResponse
 */
ResetTokenResponse Client::resetTokenWithOptions(const ResetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasWnUserId()) {
    body["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ResetToken"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/resetToken")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetTokenResponse>();
}

/**
 * @summary Resets an API token.
 *
 * @description Resets the token of a user.
 *     Business logic:
 *     1. Retrieves user_id from identity (caller_type=user is required).
 *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
 *     3. Calls reset_token:
 *        - Changes the old ACTIVE token to RESET (permanently invalidated).
 *        - Generates a new ACTIVE token.
 *     4. Returns the new token in plaintext and the masked value.
 *     Note: After the reset, the old token is permanently invalidated and cannot be recovered. The new token in plaintext is returned only in this response.
 *
 * @param request ResetTokenRequest
 * @return ResetTokenResponse
 */
ResetTokenResponse Client::resetToken(const ResetTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resetTokenWithOptions(request, headers, runtime);
}

/**
 * @summary Resets the workflow node configuration to the default values.
 *
 * @description Resets the workflow node configuration to the default values.
 *
 * @param request ResetWorkflowNodeConfigurationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetWorkflowNodeConfigurationResponse
 */
ResetWorkflowNodeConfigurationResponse Client::resetWorkflowNodeConfigurationWithOptions(const ResetWorkflowNodeConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasExpectedVersion()) {
    body["expectedVersion"] = request.getExpectedVersion();
  }

  if (!!request.hasInstanceId()) {
    body["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    body["nodeId"] = request.getNodeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ResetWorkflowNodeConfiguration"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/resetWorkflowNodeConfiguration")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetWorkflowNodeConfigurationResponse>();
}

/**
 * @summary Resets the workflow node configuration to the default values.
 *
 * @description Resets the workflow node configuration to the default values.
 *
 * @param request ResetWorkflowNodeConfigurationRequest
 * @return ResetWorkflowNodeConfigurationResponse
 */
ResetWorkflowNodeConfigurationResponse Client::resetWorkflowNodeConfiguration(const ResetWorkflowNodeConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resetWorkflowNodeConfigurationWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the short-term signed download URL for a work item artifact.
 *
 * @description Retrieves the short-term signed download URL for a work item artifact.
 *
 * @param request ResolveWorkItemArtifactAccessRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResolveWorkItemArtifactAccessResponse
 */
ResolveWorkItemArtifactAccessResponse Client::resolveWorkItemArtifactAccessWithOptions(const ResolveWorkItemArtifactAccessRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasArtifactId()) {
    body["artifactId"] = request.getArtifactId();
  }

  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ResolveWorkItemArtifactAccess"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/resolveWorkItemArtifactAccess")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResolveWorkItemArtifactAccessResponse>();
}

/**
 * @summary Retrieves the short-term signed download URL for a work item artifact.
 *
 * @description Retrieves the short-term signed download URL for a work item artifact.
 *
 * @param request ResolveWorkItemArtifactAccessRequest
 * @return ResolveWorkItemArtifactAccessResponse
 */
ResolveWorkItemArtifactAccessResponse Client::resolveWorkItemArtifactAccess(const ResolveWorkItemArtifactAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resolveWorkItemArtifactAccessWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the short-term preview URL for an input attachment of a valid member parsing work item.
 *
 * @description Retrieves the short-term preview URL for an input attachment of a valid member parsing work item.
 *
 * @param request ResolveWorkItemAttachmentAccessRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResolveWorkItemAttachmentAccessResponse
 */
ResolveWorkItemAttachmentAccessResponse Client::resolveWorkItemAttachmentAccessWithOptions(const ResolveWorkItemAttachmentAccessRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAttachmentId()) {
    body["attachmentId"] = request.getAttachmentId();
  }

  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ResolveWorkItemAttachmentAccess"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/resolveWorkItemAttachmentAccess")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResolveWorkItemAttachmentAccessResponse>();
}

/**
 * @summary Retrieves the short-term preview URL for an input attachment of a valid member parsing work item.
 *
 * @description Retrieves the short-term preview URL for an input attachment of a valid member parsing work item.
 *
 * @param request ResolveWorkItemAttachmentAccessRequest
 * @return ResolveWorkItemAttachmentAccessResponse
 */
ResolveWorkItemAttachmentAccessResponse Client::resolveWorkItemAttachmentAccess(const ResolveWorkItemAttachmentAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resolveWorkItemAttachmentAccessWithOptions(request, headers, runtime);
}

/**
 * @summary Resumes work items from the current plan pause point as an effective member.
 *
 * @description Resumes work items from the current plan pause point as an effective member.
 *
 * @param request ResumeWorkItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeWorkItemResponse
 */
ResumeWorkItemResponse Client::resumeWorkItemWithOptions(const ResumeWorkItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ResumeWorkItem"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/resumeWorkItem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeWorkItemResponse>();
}

/**
 * @summary Resumes work items from the current plan pause point as an effective member.
 *
 * @description Resumes work items from the current plan pause point as an effective member.
 *
 * @param request ResumeWorkItemRequest
 * @return ResumeWorkItemResponse
 */
ResumeWorkItemResponse Client::resumeWorkItem(const ResumeWorkItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeWorkItemWithOptions(request, headers, runtime);
}

/**
 * @summary Retries all failed data sources in a specified folder and its subfolders in batch.
 *
 * @description ## Request description
 * This API retrieves and retries data sources with a FAILED status in the specified personal folder of a user (including all subfolders). The request returns immediately, and the actual retry tasks are executed asynchronously in the background. Only resources that the current logged-in user has access to and that were created by the user can be retried.
 * ### Security and permissions
 * - This operation requires appropriate RAM permissions.
 * - You can only operate on resources within the tenant to which the current user belongs.
 * - Ensure that `tenantId` and `userId` come from verified identity information.
 * ### Precautions
 * - `directoryId` is a required parameter that specifies the target folder in which to check and retry failed data sources.
 * - If `tenantId` is not provided, the caller\\"s tenant ID is used by default.
 * - The API supports multiple authentication methods, including AccessKey, BearerToken, and APP authentication.
 *
 * @param request RetryDirectoryFailedSourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryDirectoryFailedSourcesResponse
 */
RetryDirectoryFailedSourcesResponse Client::retryDirectoryFailedSourcesWithOptions(const RetryDirectoryFailedSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RetryDirectoryFailedSources"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/retryDirectoryFailedSources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryDirectoryFailedSourcesResponse>();
}

/**
 * @summary Retries all failed data sources in a specified folder and its subfolders in batch.
 *
 * @description ## Request description
 * This API retrieves and retries data sources with a FAILED status in the specified personal folder of a user (including all subfolders). The request returns immediately, and the actual retry tasks are executed asynchronously in the background. Only resources that the current logged-in user has access to and that were created by the user can be retried.
 * ### Security and permissions
 * - This operation requires appropriate RAM permissions.
 * - You can only operate on resources within the tenant to which the current user belongs.
 * - Ensure that `tenantId` and `userId` come from verified identity information.
 * ### Precautions
 * - `directoryId` is a required parameter that specifies the target folder in which to check and retry failed data sources.
 * - If `tenantId` is not provided, the caller\\"s tenant ID is used by default.
 * - The API supports multiple authentication methods, including AccessKey, BearerToken, and APP authentication.
 *
 * @param request RetryDirectoryFailedSourcesRequest
 * @return RetryDirectoryFailedSourcesResponse
 */
RetryDirectoryFailedSourcesResponse Client::retryDirectoryFailedSources(const RetryDirectoryFailedSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retryDirectoryFailedSourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Retries all data sources in failed status under a specified directory in batch.
 *
 * @description ## Operation description
 * This API retrieves and retries all data sources in FAILED status under a specified enterprise knowledge base directory (including its subdirectories). The request returns immediately, and the actual retry operations are executed asynchronously in the background.
 * - **Authentication**: In addition to basic authentication, the DEVELOPMENT_KB_MANAGE permission is required.
 * - **Security constraints**: Only callers with the corresponding tenant and user identity are allowed access, and KB management permission is required. Administrators can initiate retries for failed resources of any user.
 * - **Parameters**:
 *   - `directoryId` (required): The ID of the enterprise knowledge base directory for which to check and retry failed data sources.
 *   - `tenantId` (optional): The tenant ID. The default tenant of the caller is used if this parameter is not specified.
 * - **Response**: On success, the response includes the number of data sources enqueued for retry and their details.
 *
 * @param request RetryKnowledgeBaseFailedSourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryKnowledgeBaseFailedSourcesResponse
 */
RetryKnowledgeBaseFailedSourcesResponse Client::retryKnowledgeBaseFailedSourcesWithOptions(const RetryKnowledgeBaseFailedSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RetryKnowledgeBaseFailedSources"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/retryKnowledgeBaseFailedSources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryKnowledgeBaseFailedSourcesResponse>();
}

/**
 * @summary Retries all data sources in failed status under a specified directory in batch.
 *
 * @description ## Operation description
 * This API retrieves and retries all data sources in FAILED status under a specified enterprise knowledge base directory (including its subdirectories). The request returns immediately, and the actual retry operations are executed asynchronously in the background.
 * - **Authentication**: In addition to basic authentication, the DEVELOPMENT_KB_MANAGE permission is required.
 * - **Security constraints**: Only callers with the corresponding tenant and user identity are allowed access, and KB management permission is required. Administrators can initiate retries for failed resources of any user.
 * - **Parameters**:
 *   - `directoryId` (required): The ID of the enterprise knowledge base directory for which to check and retry failed data sources.
 *   - `tenantId` (optional): The tenant ID. The default tenant of the caller is used if this parameter is not specified.
 * - **Response**: On success, the response includes the number of data sources enqueued for retry and their details.
 *
 * @param request RetryKnowledgeBaseFailedSourcesRequest
 * @return RetryKnowledgeBaseFailedSourcesResponse
 */
RetryKnowledgeBaseFailedSourcesResponse Client::retryKnowledgeBaseFailedSources(const RetryKnowledgeBaseFailedSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retryKnowledgeBaseFailedSourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Revokes a single semantic resource draft.
 *
 * @description Revokes a single semantic resource draft via OpenAPI (personal token only).
 *     Business orchestration:
 *     1. Draft domain identity verification (personal token only. Deploy/system-level tokens are rejected)
 *        and semantic management permission verification.
 *     2. When graphName is provided, verifies draft ownership consistency (prevents accidental cross-knowledge-graph deletion).
 *        If the draft no longer exists, returns reverted=false (idempotent semantics, no error is reported).
 *     Error codes:
 *     - ERR.User.TokenUserOnly: Personal drafts support only user tokens.
 *     - ERR.Robject.Global.InvalidParameter: draftChangeId does not belong to the specified knowledge graph.
 *
 * @param request RevertGraphDraftResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevertGraphDraftResourceResponse
 */
RevertGraphDraftResourceResponse Client::revertGraphDraftResourceWithOptions(const RevertGraphDraftResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDraftChangeId()) {
    body["draftChangeId"] = request.getDraftChangeId();
  }

  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RevertGraphDraftResource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/revertGraphDraftResource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevertGraphDraftResourceResponse>();
}

/**
 * @summary Revokes a single semantic resource draft.
 *
 * @description Revokes a single semantic resource draft via OpenAPI (personal token only).
 *     Business orchestration:
 *     1. Draft domain identity verification (personal token only. Deploy/system-level tokens are rejected)
 *        and semantic management permission verification.
 *     2. When graphName is provided, verifies draft ownership consistency (prevents accidental cross-knowledge-graph deletion).
 *        If the draft no longer exists, returns reverted=false (idempotent semantics, no error is reported).
 *     Error codes:
 *     - ERR.User.TokenUserOnly: Personal drafts support only user tokens.
 *     - ERR.Robject.Global.InvalidParameter: draftChangeId does not belong to the specified knowledge graph.
 *
 * @param request RevertGraphDraftResourceRequest
 * @return RevertGraphDraftResourceResponse
 */
RevertGraphDraftResourceResponse Client::revertGraphDraftResource(const RevertGraphDraftResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return revertGraphDraftResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Revokes the usage permissions of a user or user group on a digital human.
 *
 * @description Revokes the usage permissions of a user or user group on a specified digital human.
 *     Business logic:
 *     1. Constructs an AuthContext from identity.
 *     2. Performs mutual exclusion validation on the request body: either userIds or userGroupIds must be specified.
 *     3. Delegates to AgentAuthorizationAuthorizedService.revoke_authorization for execution.
 *     4. Pre-validation: MANAGE permission + agent existence check (performed by the AuthorizedService layer, which authenticates before exposing existence).
 *     5. After direct user authorization is revoked, the user may still have access through user group authorization.
 *
 * @param tmpReq RevokeAgentUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeAgentUsersResponse
 */
RevokeAgentUsersResponse Client::revokeAgentUsersWithOptions(const RevokeAgentUsersRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RevokeAgentUsersShrinkRequest request = RevokeAgentUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserGroupIds()) {
    request.setUserGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserGroupIds(), "userGroupIds", "json"));
  }

  if (!!tmpReq.hasUserIds()) {
    request.setUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserIds(), "userIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasUserGroupIdsShrink()) {
    body["userGroupIds"] = request.getUserGroupIdsShrink();
  }

  if (!!request.hasUserIdsShrink()) {
    body["userIds"] = request.getUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RevokeAgentUsers"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/revokeAgentUsers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeAgentUsersResponse>();
}

/**
 * @summary Revokes the usage permissions of a user or user group on a digital human.
 *
 * @description Revokes the usage permissions of a user or user group on a specified digital human.
 *     Business logic:
 *     1. Constructs an AuthContext from identity.
 *     2. Performs mutual exclusion validation on the request body: either userIds or userGroupIds must be specified.
 *     3. Delegates to AgentAuthorizationAuthorizedService.revoke_authorization for execution.
 *     4. Pre-validation: MANAGE permission + agent existence check (performed by the AuthorizedService layer, which authenticates before exposing existence).
 *     5. After direct user authorization is revoked, the user may still have access through user group authorization.
 *
 * @param request RevokeAgentUsersRequest
 * @return RevokeAgentUsersResponse
 */
RevokeAgentUsersResponse Client::revokeAgentUsers(const RevokeAgentUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return revokeAgentUsersWithOptions(request, headers, runtime);
}

/**
 * @summary Asynchronously triggers skill execution and immediately returns a RunId.
 *
 * @description ## Request description
 * This operation supports only asynchronous mode. After submission, the operation immediately returns a `RunId` and `Status=Running`. The client polls for the final result by calling `GetSkillRun`.
 * - **TenantId**: An optional common parameter that the gateway passes through to the backend header.
 * - **SkillCode** / **SkillName**: Specify one of the two parameters. SkillCode takes priority. If SkillName is not unique, `ERR.SkillHub.SkillNameAmbiguous` is returned.
 * - **Arguments**: Required. The skill input parameter object. The structure is described by the inputConfig returned by `GetSkill`.
 * - **ClientToken**: An optional idempotency key. In the current version, this value is only recorded in the task metadata and is not used for strict idempotency deduplication.
 * Note: Synchronous mode (Async=false), Stream, and CallbackUrl are not supported in the first release and will be available in later versions.
 *
 * @param tmpReq RunSkillRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunSkillResponse
 */
RunSkillResponse Client::runSkillWithOptions(const RunSkillRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunSkillShrinkRequest request = RunSkillShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasArguments()) {
    request.setArgumentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getArguments(), "arguments", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasArgumentsShrink()) {
    body["arguments"] = request.getArgumentsShrink();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSkillCode()) {
    body["skillCode"] = request.getSkillCode();
  }

  if (!!request.hasSkillName()) {
    body["skillName"] = request.getSkillName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunSkill"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/runSkill")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunSkillResponse>();
}

/**
 * @summary Asynchronously triggers skill execution and immediately returns a RunId.
 *
 * @description ## Request description
 * This operation supports only asynchronous mode. After submission, the operation immediately returns a `RunId` and `Status=Running`. The client polls for the final result by calling `GetSkillRun`.
 * - **TenantId**: An optional common parameter that the gateway passes through to the backend header.
 * - **SkillCode** / **SkillName**: Specify one of the two parameters. SkillCode takes priority. If SkillName is not unique, `ERR.SkillHub.SkillNameAmbiguous` is returned.
 * - **Arguments**: Required. The skill input parameter object. The structure is described by the inputConfig returned by `GetSkill`.
 * - **ClientToken**: An optional idempotency key. In the current version, this value is only recorded in the task metadata and is not used for strict idempotency deduplication.
 * Note: Synchronous mode (Async=false), Stream, and CallbackUrl are not supported in the first release and will be available in later versions.
 *
 * @param request RunSkillRequest
 * @return RunSkillResponse
 */
RunSkillResponse Client::runSkill(const RunSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runSkillWithOptions(request, headers, runtime);
}

/**
 * @summary Batch saves personal semantic drafts.
 *
 * @description Batch saves personal semantic drafts through OpenAPI (personal token only).
 *     Business orchestration:
 *     1. Draft domain identity verification (personal token only; deployment/system-level tokens are rejected)
 *        and semantic management permission verification.
 *     2. saveMode dispatch: FULL_YAML (default) performs full-graph YAML differential save,
 *        including invalidated draft discard and order collection write permission verification.
 *        PARTIAL_YAML performs partial YAML save scoped by draftChangeIds.
 *     3. The diff baseline is always read from the online active version by the backend (the base input parameter is not trusted).
 *     Error codes:
 *     - ERR.User.TokenUserOnly: Personal drafts support only user tokens.
 *     - ERR.Robject.Global.InvalidParameter: Invalid saveMode / draftChangeIds not provided for PARTIAL_YAML.
 *     - ERR.GraphSchema.*: Graph does not exist / YAML structure validation failed / Custom physical table contract is invalid.
 *     - ERR.Robject.Global.BusinessStateConflict: Related resources are being published.
 *     - ERR.Robject.Permission.*: Order collection write permission verification failed.
 *
 * @param tmpReq SaveGraphDraftBatchDefineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveGraphDraftBatchDefineResponse
 */
SaveGraphDraftBatchDefineResponse Client::saveGraphDraftBatchDefineWithOptions(const SaveGraphDraftBatchDefineRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveGraphDraftBatchDefineShrinkRequest request = SaveGraphDraftBatchDefineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDraftChangeIds()) {
    request.setDraftChangeIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDraftChangeIds(), "draftChangeIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDraftChangeIdsShrink()) {
    body["draftChangeIds"] = request.getDraftChangeIdsShrink();
  }

  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  if (!!request.hasSaveMode()) {
    body["saveMode"] = request.getSaveMode();
  }

  if (!!request.hasYamlEdit()) {
    body["yamlEdit"] = request.getYamlEdit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveGraphDraftBatchDefine"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/saveGraphDraftBatchDefine")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveGraphDraftBatchDefineResponse>();
}

/**
 * @summary Batch saves personal semantic drafts.
 *
 * @description Batch saves personal semantic drafts through OpenAPI (personal token only).
 *     Business orchestration:
 *     1. Draft domain identity verification (personal token only; deployment/system-level tokens are rejected)
 *        and semantic management permission verification.
 *     2. saveMode dispatch: FULL_YAML (default) performs full-graph YAML differential save,
 *        including invalidated draft discard and order collection write permission verification.
 *        PARTIAL_YAML performs partial YAML save scoped by draftChangeIds.
 *     3. The diff baseline is always read from the online active version by the backend (the base input parameter is not trusted).
 *     Error codes:
 *     - ERR.User.TokenUserOnly: Personal drafts support only user tokens.
 *     - ERR.Robject.Global.InvalidParameter: Invalid saveMode / draftChangeIds not provided for PARTIAL_YAML.
 *     - ERR.GraphSchema.*: Graph does not exist / YAML structure validation failed / Custom physical table contract is invalid.
 *     - ERR.Robject.Global.BusinessStateConflict: Related resources are being published.
 *     - ERR.Robject.Permission.*: Order collection write permission verification failed.
 *
 * @param request SaveGraphDraftBatchDefineRequest
 * @return SaveGraphDraftBatchDefineResponse
 */
SaveGraphDraftBatchDefineResponse Client::saveGraphDraftBatchDefine(const SaveGraphDraftBatchDefineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return saveGraphDraftBatchDefineWithOptions(request, headers, runtime);
}

/**
 * @summary Saves a single semantic resource draft.
 *
 * @description Saves a single semantic resource draft through OpenAPI (personal token only).
 *     Business orchestration:
 *     1. Draft domain identity verification (personal token only; deployment/system-level tokens are rejected)
 *        and semantic management permission verification.
 *     2. Delegates to the personal draft service for saving (source is fixed YAML). The underlying layer includes resource-level write permission verification.
 *        If the content is identical to the online version, the database write is skipped and the summary field returns null.
 *     Error codes:
 *     - ERR.User.TokenUserOnly: Personal drafts support only user tokens.
 *     - ERR.Robject.Global.InvalidParameter: The resourceType/elementType combination is invalid.
 *     - ERR.GraphSchema.*: The graph does not exist, or resource naming and ownership verification failed.
 *     - ERR.Robject.Global.ResourceNotFound: The resource does not exist or other underlying verification failed.
 *
 * @param request SaveGraphDraftResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveGraphDraftResourceResponse
 */
SaveGraphDraftResourceResponse Client::saveGraphDraftResourceWithOptions(const SaveGraphDraftResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasElementType()) {
    body["elementType"] = request.getElementType();
  }

  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  if (!!request.hasResourceName()) {
    body["resourceName"] = request.getResourceName();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
  }

  if (!!request.hasYamlEdit()) {
    body["yamlEdit"] = request.getYamlEdit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveGraphDraftResource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/saveGraphDraftResource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveGraphDraftResourceResponse>();
}

/**
 * @summary Saves a single semantic resource draft.
 *
 * @description Saves a single semantic resource draft through OpenAPI (personal token only).
 *     Business orchestration:
 *     1. Draft domain identity verification (personal token only; deployment/system-level tokens are rejected)
 *        and semantic management permission verification.
 *     2. Delegates to the personal draft service for saving (source is fixed YAML). The underlying layer includes resource-level write permission verification.
 *        If the content is identical to the online version, the database write is skipped and the summary field returns null.
 *     Error codes:
 *     - ERR.User.TokenUserOnly: Personal drafts support only user tokens.
 *     - ERR.Robject.Global.InvalidParameter: The resourceType/elementType combination is invalid.
 *     - ERR.GraphSchema.*: The graph does not exist, or resource naming and ownership verification failed.
 *     - ERR.Robject.Global.ResourceNotFound: The resource does not exist or other underlying verification failed.
 *
 * @param request SaveGraphDraftResourceRequest
 * @return SaveGraphDraftResourceResponse
 */
SaveGraphDraftResourceResponse Client::saveGraphDraftResource(const SaveGraphDraftResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return saveGraphDraftResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Saves group outputs in batches to the collaboration group repository.
 *
 * @description ## Request description
 * - Saves specified group outputs to the repository directory of the same collaboration group.
 * - Supports two modes: `link` (maintains output association) and `copy` (creates an independent snapshot).
 * - The caller must be a platform user and a member of the target group. The caller can archive group outputs visible to them, including outputs created by other members.
 * - If `directoryId` is not specified, the default repository directory of the target group is used.
 * - A maximum of 50 outputs can be processed per batch. All entries are validated before saving. If any entry does not exist, is not visible, or cannot be operated on, the entire batch fails.
 * - After unified validation passes, entries are saved one by one. The response results maintain the same order as `itemIds`. A failure of a single entry does not affect other entries.
 *
 * @param tmpReq SaveGroupOutputFileToGroupResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveGroupOutputFileToGroupResourceResponse
 */
SaveGroupOutputFileToGroupResourceResponse Client::saveGroupOutputFileToGroupResourceWithOptions(const SaveGroupOutputFileToGroupResourceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveGroupOutputFileToGroupResourceShrinkRequest request = SaveGroupOutputFileToGroupResourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasItemIds()) {
    request.setItemIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getItemIds(), "itemIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasItemIdsShrink()) {
    body["itemIds"] = request.getItemIdsShrink();
  }

  if (!!request.hasMode()) {
    body["mode"] = request.getMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveGroupOutputFileToGroupResource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/saveGroupOutputFileToGroupResource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveGroupOutputFileToGroupResourceResponse>();
}

/**
 * @summary Saves group outputs in batches to the collaboration group repository.
 *
 * @description ## Request description
 * - Saves specified group outputs to the repository directory of the same collaboration group.
 * - Supports two modes: `link` (maintains output association) and `copy` (creates an independent snapshot).
 * - The caller must be a platform user and a member of the target group. The caller can archive group outputs visible to them, including outputs created by other members.
 * - If `directoryId` is not specified, the default repository directory of the target group is used.
 * - A maximum of 50 outputs can be processed per batch. All entries are validated before saving. If any entry does not exist, is not visible, or cannot be operated on, the entire batch fails.
 * - After unified validation passes, entries are saved one by one. The response results maintain the same order as `itemIds`. A failure of a single entry does not affect other entries.
 *
 * @param request SaveGroupOutputFileToGroupResourceRequest
 * @return SaveGroupOutputFileToGroupResourceResponse
 */
SaveGroupOutputFileToGroupResourceResponse Client::saveGroupOutputFileToGroupResource(const SaveGroupOutputFileToGroupResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return saveGroupOutputFileToGroupResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Batch saves group outputs to the personal knowledge base of the current operator.
 *
 * @description ## Operation description
 * - Saves specified group outputs to the personal knowledge base of the current operator.
 * - Two modes are supported: `link` (maintains the association with the output) and `copy` (creates an independent snapshot).
 * - The caller must be a member of the target group who is associated with a platform user. Regular members can archive only outputs they created. Group administrators can archive visible outputs of other members. The personal ownership is always derived from the gateway authentication identity.
 * - If `directoryId` is not specified, the default personal directory of the current operator is used.
 * - A maximum of 50 outputs can be processed per batch. All entries are validated before saving. If any entry does not exist, is not visible, or cannot be operated on, the entire batch fails.
 * - After unified validation passes, entries are saved one by one. The response results maintain the same order as `itemIds`. A failure to save a single entry does not affect other entries.
 *
 * @param tmpReq SaveGroupOutputFileToPersonalResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveGroupOutputFileToPersonalResourceResponse
 */
SaveGroupOutputFileToPersonalResourceResponse Client::saveGroupOutputFileToPersonalResourceWithOptions(const SaveGroupOutputFileToPersonalResourceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveGroupOutputFileToPersonalResourceShrinkRequest request = SaveGroupOutputFileToPersonalResourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasItemIds()) {
    request.setItemIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getItemIds(), "itemIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasItemIdsShrink()) {
    body["itemIds"] = request.getItemIdsShrink();
  }

  if (!!request.hasMode()) {
    body["mode"] = request.getMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveGroupOutputFileToPersonalResource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/saveGroupOutputFileToPersonalResource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveGroupOutputFileToPersonalResourceResponse>();
}

/**
 * @summary Batch saves group outputs to the personal knowledge base of the current operator.
 *
 * @description ## Operation description
 * - Saves specified group outputs to the personal knowledge base of the current operator.
 * - Two modes are supported: `link` (maintains the association with the output) and `copy` (creates an independent snapshot).
 * - The caller must be a member of the target group who is associated with a platform user. Regular members can archive only outputs they created. Group administrators can archive visible outputs of other members. The personal ownership is always derived from the gateway authentication identity.
 * - If `directoryId` is not specified, the default personal directory of the current operator is used.
 * - A maximum of 50 outputs can be processed per batch. All entries are validated before saving. If any entry does not exist, is not visible, or cannot be operated on, the entire batch fails.
 * - After unified validation passes, entries are saved one by one. The response results maintain the same order as `itemIds`. A failure to save a single entry does not affect other entries.
 *
 * @param request SaveGroupOutputFileToPersonalResourceRequest
 * @return SaveGroupOutputFileToPersonalResourceResponse
 */
SaveGroupOutputFileToPersonalResourceResponse Client::saveGroupOutputFileToPersonalResource(const SaveGroupOutputFileToPersonalResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return saveGroupOutputFileToPersonalResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Saves output details in batches as personal resources. Supports link or copy mode.
 *
 * @description ## Operation description
 * - This API saves a batch of output details as personal resources for a user.
 * - Two save modes are supported: `link` and `copy`. When `link` is selected, edits to the output are synchronized to the resource. When `copy` is selected, a snapshot is created with no limit on the number of copies.
 * - `tenant_id` and `user_id` are derived only from the authenticated identity.
 * - If the `operating_object` values within the batch are inconsistent and `directoryId` is not specified, the entire batch fails with a pre-check error.
 * - The processing result of a single record does not affect other records. Failure information for individual records is returned in the response.
 * - A maximum of 50 records are supported per batch operation.
 * - Batch-level pre-check failures are returned in a POP-compatible error format by the global exception middleware.
 *
 * @param tmpReq SaveOutputFileToResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveOutputFileToResourceResponse
 */
SaveOutputFileToResourceResponse Client::saveOutputFileToResourceWithOptions(const SaveOutputFileToResourceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveOutputFileToResourceShrinkRequest request = SaveOutputFileToResourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasItemIds()) {
    request.setItemIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getItemIds(), "itemIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasItemIdsShrink()) {
    body["itemIds"] = request.getItemIdsShrink();
  }

  if (!!request.hasMode()) {
    body["mode"] = request.getMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveOutputFileToResource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/saveOutputFileToResource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveOutputFileToResourceResponse>();
}

/**
 * @summary Saves output details in batches as personal resources. Supports link or copy mode.
 *
 * @description ## Operation description
 * - This API saves a batch of output details as personal resources for a user.
 * - Two save modes are supported: `link` and `copy`. When `link` is selected, edits to the output are synchronized to the resource. When `copy` is selected, a snapshot is created with no limit on the number of copies.
 * - `tenant_id` and `user_id` are derived only from the authenticated identity.
 * - If the `operating_object` values within the batch are inconsistent and `directoryId` is not specified, the entire batch fails with a pre-check error.
 * - The processing result of a single record does not affect other records. Failure information for individual records is returned in the response.
 * - A maximum of 50 records are supported per batch operation.
 * - Batch-level pre-check failures are returned in a POP-compatible error format by the global exception middleware.
 *
 * @param request SaveOutputFileToResourceRequest
 * @return SaveOutputFileToResourceResponse
 */
SaveOutputFileToResourceResponse Client::saveOutputFileToResource(const SaveOutputFileToResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return saveOutputFileToResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Idempotently schedules work items for valid members and materializes a fixed plan.
 *
 * @description Idempotently schedules work items for valid members and materializes a fixed plan.
 *
 * @param request ScheduleWorkItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScheduleWorkItemResponse
 */
ScheduleWorkItemResponse Client::scheduleWorkItemWithOptions(const ScheduleWorkItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasIdempotencyKey()) {
    body["idempotencyKey"] = request.getIdempotencyKey();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ScheduleWorkItem"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/scheduleWorkItem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScheduleWorkItemResponse>();
}

/**
 * @summary Idempotently schedules work items for valid members and materializes a fixed plan.
 *
 * @description Idempotently schedules work items for valid members and materializes a fixed plan.
 *
 * @param request ScheduleWorkItemRequest
 * @return ScheduleWorkItemResponse
 */
ScheduleWorkItemResponse Client::scheduleWorkItem(const ScheduleWorkItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return scheduleWorkItemWithOptions(request, headers, runtime);
}

/**
 * @summary Searches for DingTalk group chats in the Winnexo lightweight workspace.
 *
 * @description ## Request description
 * - Available only for the Winnexo lightweight workspace.
 * - Searches for DingTalk group chats visible to the current platform user by keyword in a paginated manner.
 * - The response does not include DWS raw objects.
 *
 * @param request SearchAliDingGroupChatsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchAliDingGroupChatsResponse
 */
SearchAliDingGroupChatsResponse Client::searchAliDingGroupChatsWithOptions(const SearchAliDingGroupChatsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCursor()) {
    body["cursor"] = request.getCursor();
  }

  if (!!request.hasExcludeMuted()) {
    body["excludeMuted"] = request.getExcludeMuted();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchAliDingGroupChats"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/searchAliDingGroupChats")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchAliDingGroupChatsResponse>();
}

/**
 * @summary Searches for DingTalk group chats in the Winnexo lightweight workspace.
 *
 * @description ## Request description
 * - Available only for the Winnexo lightweight workspace.
 * - Searches for DingTalk group chats visible to the current platform user by keyword in a paginated manner.
 * - The response does not include DWS raw objects.
 *
 * @param request SearchAliDingGroupChatsRequest
 * @return SearchAliDingGroupChatsResponse
 */
SearchAliDingGroupChatsResponse Client::searchAliDingGroupChats(const SearchAliDingGroupChatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchAliDingGroupChatsWithOptions(request, headers, runtime);
}

/**
 * @summary Asynchronously sends a session message.
 *
 * @description Asynchronously sends a session message.
 *
 * @param tmpReq SendAsyncChatMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendAsyncChatMessageResponse
 */
SendAsyncChatMessageResponse Client::sendAsyncChatMessageWithOptions(const SendAsyncChatMessageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendAsyncChatMessageShrinkRequest request = SendAsyncChatMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContextItems()) {
    request.setContextItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContextItems(), "contextItems", "json"));
  }

  if (!!tmpReq.hasDigitalEmployeeName()) {
    request.setDigitalEmployeeNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDigitalEmployeeName(), "digitalEmployeeName", "json"));
  }

  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "files", "json"));
  }

  if (!!tmpReq.hasSegments()) {
    request.setSegmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSegments(), "segments", "json"));
  }

  if (!!tmpReq.hasTaskExecution()) {
    request.setTaskExecutionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskExecution(), "taskExecution", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAutoPreference()) {
    body["autoPreference"] = request.getAutoPreference();
  }

  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasContentType()) {
    body["contentType"] = request.getContentType();
  }

  if (!!request.hasContextItemsShrink()) {
    body["contextItems"] = request.getContextItemsShrink();
  }

  if (!!request.hasDigitalEmployeeNameShrink()) {
    body["digitalEmployeeName"] = request.getDigitalEmployeeNameShrink();
  }

  if (!!request.hasDirectChat()) {
    body["directChat"] = request.getDirectChat();
  }

  if (!!request.hasDirectMaxHistoryRounds()) {
    body["directMaxHistoryRounds"] = request.getDirectMaxHistoryRounds();
  }

  if (!!request.hasEnableWebSearch()) {
    body["enableWebSearch"] = request.getEnableWebSearch();
  }

  if (!!request.hasFilesShrink()) {
    body["files"] = request.getFilesShrink();
  }

  if (!!request.hasLocale()) {
    body["locale"] = request.getLocale();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasReuseLastSession()) {
    body["reuseLastSession"] = request.getReuseLastSession();
  }

  if (!!request.hasSegmentsShrink()) {
    body["segments"] = request.getSegmentsShrink();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasTaskExecutionShrink()) {
    body["taskExecution"] = request.getTaskExecutionShrink();
  }

  if (!!request.hasThinkingEnabled()) {
    body["thinkingEnabled"] = request.getThinkingEnabled();
  }

  if (!!request.hasThinkingLevel()) {
    body["thinkingLevel"] = request.getThinkingLevel();
  }

  if (!!request.hasWorkMode()) {
    body["workMode"] = request.getWorkMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendAsyncChatMessage"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/sendAsyncChatMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendAsyncChatMessageResponse>();
}

/**
 * @summary Asynchronously sends a session message.
 *
 * @description Asynchronously sends a session message.
 *
 * @param request SendAsyncChatMessageRequest
 * @return SendAsyncChatMessageResponse
 */
SendAsyncChatMessageResponse Client::sendAsyncChatMessage(const SendAsyncChatMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendAsyncChatMessageWithOptions(request, headers, runtime);
}

/**
 * @summary Sends a message.
 *
 * @description ## Request description
 * - This API operation uploads a file to the My Resources section of a specified digital employee.
 * - source_type is fixed to FILE, scope is fixed to PERSONAL, and platform is fixed to LOCAL.
 * - The file must be provided with an OSS persistence address (filePath). Other information, such as the public access URL and original file name, is optional.
 * - If the destination folder ID (directoryId) is not specified, the system will automatically attach the file to the default root folder of the current digital employee. If it is specified, ensure that the folder belongs to the personal folder of the user who will invoke the API.
 * - Multiple authentication methods, such as AK, BearerToken, and APP, are supported to authenticate and perform security authentication.
 * - The operation type is write, and operation logs are recorded for subsequent auditing.
 *
 * @param tmpReq SendChatMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendChatMessageResponse
 */
FutureGenerator<SendChatMessageResponse> Client::sendChatMessageWithSSE(const SendChatMessageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendChatMessageShrinkRequest request = SendChatMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContextItems()) {
    request.setContextItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContextItems(), "contextItems", "json"));
  }

  if (!!tmpReq.hasDigitalEmployeeName()) {
    request.setDigitalEmployeeNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDigitalEmployeeName(), "digitalEmployeeName", "json"));
  }

  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "files", "json"));
  }

  if (!!tmpReq.hasSegments()) {
    request.setSegmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSegments(), "segments", "json"));
  }

  if (!!tmpReq.hasTaskExecution()) {
    request.setTaskExecutionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskExecution(), "taskExecution", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAutoPreference()) {
    body["autoPreference"] = request.getAutoPreference();
  }

  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasContentType()) {
    body["contentType"] = request.getContentType();
  }

  if (!!request.hasContextItemsShrink()) {
    body["contextItems"] = request.getContextItemsShrink();
  }

  if (!!request.hasDigitalEmployeeNameShrink()) {
    body["digitalEmployeeName"] = request.getDigitalEmployeeNameShrink();
  }

  if (!!request.hasDirectChat()) {
    body["directChat"] = request.getDirectChat();
  }

  if (!!request.hasDirectMaxHistoryRounds()) {
    body["directMaxHistoryRounds"] = request.getDirectMaxHistoryRounds();
  }

  if (!!request.hasEnableWebSearch()) {
    body["enableWebSearch"] = request.getEnableWebSearch();
  }

  if (!!request.hasFilesShrink()) {
    body["files"] = request.getFilesShrink();
  }

  if (!!request.hasLocale()) {
    body["locale"] = request.getLocale();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasReuseLastSession()) {
    body["reuseLastSession"] = request.getReuseLastSession();
  }

  if (!!request.hasSegmentsShrink()) {
    body["segments"] = request.getSegmentsShrink();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasTaskExecutionShrink()) {
    body["taskExecution"] = request.getTaskExecutionShrink();
  }

  if (!!request.hasThinkingEnabled()) {
    body["thinkingEnabled"] = request.getThinkingEnabled();
  }

  if (!!request.hasThinkingLevel()) {
    body["thinkingLevel"] = request.getThinkingLevel();
  }

  if (!!request.hasWorkMode()) {
    body["workMode"] = request.getWorkMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendChatMessage"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/sendChatMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<SendChatMessageResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Sends a message.
 *
 * @description ## Request description
 * - This API operation uploads a file to the My Resources section of a specified digital employee.
 * - source_type is fixed to FILE, scope is fixed to PERSONAL, and platform is fixed to LOCAL.
 * - The file must be provided with an OSS persistence address (filePath). Other information, such as the public access URL and original file name, is optional.
 * - If the destination folder ID (directoryId) is not specified, the system will automatically attach the file to the default root folder of the current digital employee. If it is specified, ensure that the folder belongs to the personal folder of the user who will invoke the API.
 * - Multiple authentication methods, such as AK, BearerToken, and APP, are supported to authenticate and perform security authentication.
 * - The operation type is write, and operation logs are recorded for subsequent auditing.
 *
 * @param tmpReq SendChatMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendChatMessageResponse
 */
SendChatMessageResponse Client::sendChatMessageWithOptions(const SendChatMessageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendChatMessageShrinkRequest request = SendChatMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContextItems()) {
    request.setContextItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContextItems(), "contextItems", "json"));
  }

  if (!!tmpReq.hasDigitalEmployeeName()) {
    request.setDigitalEmployeeNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDigitalEmployeeName(), "digitalEmployeeName", "json"));
  }

  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "files", "json"));
  }

  if (!!tmpReq.hasSegments()) {
    request.setSegmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSegments(), "segments", "json"));
  }

  if (!!tmpReq.hasTaskExecution()) {
    request.setTaskExecutionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskExecution(), "taskExecution", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAutoPreference()) {
    body["autoPreference"] = request.getAutoPreference();
  }

  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasContentType()) {
    body["contentType"] = request.getContentType();
  }

  if (!!request.hasContextItemsShrink()) {
    body["contextItems"] = request.getContextItemsShrink();
  }

  if (!!request.hasDigitalEmployeeNameShrink()) {
    body["digitalEmployeeName"] = request.getDigitalEmployeeNameShrink();
  }

  if (!!request.hasDirectChat()) {
    body["directChat"] = request.getDirectChat();
  }

  if (!!request.hasDirectMaxHistoryRounds()) {
    body["directMaxHistoryRounds"] = request.getDirectMaxHistoryRounds();
  }

  if (!!request.hasEnableWebSearch()) {
    body["enableWebSearch"] = request.getEnableWebSearch();
  }

  if (!!request.hasFilesShrink()) {
    body["files"] = request.getFilesShrink();
  }

  if (!!request.hasLocale()) {
    body["locale"] = request.getLocale();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasReuseLastSession()) {
    body["reuseLastSession"] = request.getReuseLastSession();
  }

  if (!!request.hasSegmentsShrink()) {
    body["segments"] = request.getSegmentsShrink();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasTaskExecutionShrink()) {
    body["taskExecution"] = request.getTaskExecutionShrink();
  }

  if (!!request.hasThinkingEnabled()) {
    body["thinkingEnabled"] = request.getThinkingEnabled();
  }

  if (!!request.hasThinkingLevel()) {
    body["thinkingLevel"] = request.getThinkingLevel();
  }

  if (!!request.hasWorkMode()) {
    body["workMode"] = request.getWorkMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendChatMessage"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/sendChatMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendChatMessageResponse>();
}

/**
 * @summary Sends a message.
 *
 * @description ## Request description
 * - This API operation uploads a file to the My Resources section of a specified digital employee.
 * - source_type is fixed to FILE, scope is fixed to PERSONAL, and platform is fixed to LOCAL.
 * - The file must be provided with an OSS persistence address (filePath). Other information, such as the public access URL and original file name, is optional.
 * - If the destination folder ID (directoryId) is not specified, the system will automatically attach the file to the default root folder of the current digital employee. If it is specified, ensure that the folder belongs to the personal folder of the user who will invoke the API.
 * - Multiple authentication methods, such as AK, BearerToken, and APP, are supported to authenticate and perform security authentication.
 * - The operation type is write, and operation logs are recorded for subsequent auditing.
 *
 * @param request SendChatMessageRequest
 * @return SendChatMessageResponse
 */
SendChatMessageResponse Client::sendChatMessage(const SendChatMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendChatMessageWithOptions(request, headers, runtime);
}

/**
 * @summary Sends a user message to a work item topic.
 *
 * @description Sends a text message to an existing free exploration session within the current tenant and specified collaboration space. Returns a message submission receipt immediately, and the AI reply is generated asynchronously in the background. The caller must be associated with a platform user and have the permission to send messages to topics. You must specify at least one of workItemId and conversationId. If both are specified, they must point to the same session. This operation does not create a new session and does not support workflow node topics or Master topics.
 *
 * @param request SendWorkItemMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendWorkItemMessageResponse
 */
SendWorkItemMessageResponse Client::sendWorkItemMessageWithOptions(const SendWorkItemMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasConversationId()) {
    body["conversationId"] = request.getConversationId();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendWorkItemMessage"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/sendWorkItemMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendWorkItemMessageResponse>();
}

/**
 * @summary Sends a user message to a work item topic.
 *
 * @description Sends a text message to an existing free exploration session within the current tenant and specified collaboration space. Returns a message submission receipt immediately, and the AI reply is generated asynchronously in the background. The caller must be associated with a platform user and have the permission to send messages to topics. You must specify at least one of workItemId and conversationId. If both are specified, they must point to the same session. This operation does not create a new session and does not support workflow node topics or Master topics.
 *
 * @param request SendWorkItemMessageRequest
 * @return SendWorkItemMessageResponse
 */
SendWorkItemMessageResponse Client::sendWorkItemMessage(const SendWorkItemMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendWorkItemMessageWithOptions(request, headers, runtime);
}

/**
 * @summary Sets the visibility scope of an enterprise knowledge base.
 *
 * @description Configures the Settings for the read access scope of a knowledge base, folder, or resource. To invoke this operation, you must have knowledge base management permissions on the target knowledge base, because knowledge base management permissions do not automatically grant read access to the content.
 *
 * @param tmpReq SetKnowledgeBaseVisibilityRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetKnowledgeBaseVisibilityResponse
 */
SetKnowledgeBaseVisibilityResponse Client::setKnowledgeBaseVisibilityWithOptions(const SetKnowledgeBaseVisibilityRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetKnowledgeBaseVisibilityShrinkRequest request = SetKnowledgeBaseVisibilityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserGroupIds()) {
    request.setUserGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserGroupIds(), "userGroupIds", "json"));
  }

  if (!!tmpReq.hasUserIds()) {
    request.setUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserIds(), "userIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCascadeMode()) {
    body["cascadeMode"] = request.getCascadeMode();
  }

  if (!!request.hasTargetId()) {
    body["targetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    body["targetType"] = request.getTargetType();
  }

  if (!!request.hasUserGroupIdsShrink()) {
    body["userGroupIds"] = request.getUserGroupIdsShrink();
  }

  if (!!request.hasUserIdsShrink()) {
    body["userIds"] = request.getUserIdsShrink();
  }

  if (!!request.hasVisibilityMode()) {
    body["visibilityMode"] = request.getVisibilityMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetKnowledgeBaseVisibility"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/setKnowledgeBaseVisibility")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetKnowledgeBaseVisibilityResponse>();
}

/**
 * @summary Sets the visibility scope of an enterprise knowledge base.
 *
 * @description Configures the Settings for the read access scope of a knowledge base, folder, or resource. To invoke this operation, you must have knowledge base management permissions on the target knowledge base, because knowledge base management permissions do not automatically grant read access to the content.
 *
 * @param request SetKnowledgeBaseVisibilityRequest
 * @return SetKnowledgeBaseVisibilityResponse
 */
SetKnowledgeBaseVisibilityResponse Client::setKnowledgeBaseVisibility(const SetKnowledgeBaseVisibilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return setKnowledgeBaseVisibilityWithOptions(request, headers, runtime);
}

/**
 * @summary Sets the personal pin status of a work item for a member.
 *
 * @description Sets the personal pin status of a work item for a member.
 *
 * @param request SetWorkItemPinnedRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetWorkItemPinnedResponse
 */
SetWorkItemPinnedResponse Client::setWorkItemPinnedWithOptions(const SetWorkItemPinnedRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasPinned()) {
    body["pinned"] = request.getPinned();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetWorkItemPinned"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/setWorkItemPinned")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetWorkItemPinnedResponse>();
}

/**
 * @summary Sets the personal pin status of a work item for a member.
 *
 * @description Sets the personal pin status of a work item for a member.
 *
 * @param request SetWorkItemPinnedRequest
 * @return SetWorkItemPinnedResponse
 */
SetWorkItemPinnedResponse Client::setWorkItemPinned(const SetWorkItemPinnedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return setWorkItemPinnedWithOptions(request, headers, runtime);
}

/**
 * @summary The storage management administrator updates the Settings for the effective version of a workflow template. Only versions that you commit are allowed, and each template can have only one effective version. Before taking effect, the version is revalidated against the current workspace members, digital employees, and capabilities. Existing work items use their own snapshots to execute and remain unaffected.
 *
 * @description The storage management administrator updates the Settings for the effective version of a workflow template. Only versions that you commit are allowed, and each template can have only one effective version. Before taking effect, the version is revalidated against the current workspace members, digital employees, and capabilities. Existing work items use their own snapshots to execute and remain unaffected.
 *
 * @param request SetWorkflowTemplateEffectiveVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetWorkflowTemplateEffectiveVersionResponse
 */
SetWorkflowTemplateEffectiveVersionResponse Client::setWorkflowTemplateEffectiveVersionWithOptions(const SetWorkflowTemplateEffectiveVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasTemplateId()) {
    body["templateId"] = request.getTemplateId();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetWorkflowTemplateEffectiveVersion"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/setWorkflowTemplateEffectiveVersion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetWorkflowTemplateEffectiveVersionResponse>();
}

/**
 * @summary The storage management administrator updates the Settings for the effective version of a workflow template. Only versions that you commit are allowed, and each template can have only one effective version. Before taking effect, the version is revalidated against the current workspace members, digital employees, and capabilities. Existing work items use their own snapshots to execute and remain unaffected.
 *
 * @description The storage management administrator updates the Settings for the effective version of a workflow template. Only versions that you commit are allowed, and each template can have only one effective version. Before taking effect, the version is revalidated against the current workspace members, digital employees, and capabilities. Existing work items use their own snapshots to execute and remain unaffected.
 *
 * @param request SetWorkflowTemplateEffectiveVersionRequest
 * @return SetWorkflowTemplateEffectiveVersionResponse
 */
SetWorkflowTemplateEffectiveVersionResponse Client::setWorkflowTemplateEffectiveVersion(const SetWorkflowTemplateEffectiveVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return setWorkflowTemplateEffectiveVersionWithOptions(request, headers, runtime);
}

/**
 * @summary Stops conversation generation.
 *
 * @param request StopChatMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopChatMessageResponse
 */
StopChatMessageResponse Client::stopChatMessageWithOptions(const StopChatMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopChatMessage"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/stopChatMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopChatMessageResponse>();
}

/**
 * @summary Stops conversation generation.
 *
 * @param request StopChatMessageRequest
 * @return StopChatMessageResponse
 */
StopChatMessageResponse Client::stopChatMessage(const StopChatMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopChatMessageWithOptions(request, headers, runtime);
}

/**
 * @summary Subscribes to a conversation message stream.
 *
 * @description Subscribes to a conversation message stream.
 *
 * @param request StreamChatMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StreamChatMessageResponse
 */
FutureGenerator<StreamChatMessageResponse> Client::streamChatMessageWithSSE(const string &messageId, const StreamChatMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasLastEventId()) {
    query["lastEventId"] = request.getLastEventId();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StreamChatMessage"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/streamChatMessage/" , Darabonba::Encode::Encoder::percentEncode(messageId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<StreamChatMessageResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Subscribes to a conversation message stream.
 *
 * @description Subscribes to a conversation message stream.
 *
 * @param request StreamChatMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StreamChatMessageResponse
 */
StreamChatMessageResponse Client::streamChatMessageWithOptions(const string &messageId, const StreamChatMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasLastEventId()) {
    query["lastEventId"] = request.getLastEventId();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StreamChatMessage"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/streamChatMessage/" , Darabonba::Encode::Encoder::percentEncode(messageId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StreamChatMessageResponse>();
}

/**
 * @summary Subscribes to a conversation message stream.
 *
 * @description Subscribes to a conversation message stream.
 *
 * @param request StreamChatMessageRequest
 * @return StreamChatMessageResponse
 */
StreamChatMessageResponse Client::streamChatMessage(const string &messageId, const StreamChatMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return streamChatMessageWithOptions(messageId, request, headers, runtime);
}

/**
 * @summary Submits the answers for a to-do task.
 *
 * @description Submits the answers for a to-do task. If the same user submits the answers repeatedly, the operation is idempotent and returns the first result. If another user completes the task first, a 409 AlreadyCompleted error is returned.
 *
 * @param tmpReq SubmitTodoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTodoResponse
 */
SubmitTodoResponse Client::submitTodoWithOptions(const SubmitTodoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitTodoShrinkRequest request = SubmitTodoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAnswers()) {
    request.setAnswersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAnswers(), "answers", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAnswersShrink()) {
    body["answers"] = request.getAnswersShrink();
  }

  if (!!request.hasTodoId()) {
    body["todoId"] = request.getTodoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitTodo"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/submitTodo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitTodoResponse>();
}

/**
 * @summary Submits the answers for a to-do task.
 *
 * @description Submits the answers for a to-do task. If the same user submits the answers repeatedly, the operation is idempotent and returns the first result. If another user completes the task first, a 409 AlreadyCompleted error is returned.
 *
 * @param request SubmitTodoRequest
 * @return SubmitTodoResponse
 */
SubmitTodoResponse Client::submitTodo(const SubmitTodoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitTodoWithOptions(request, headers, runtime);
}

/**
 * @summary Pushes organizational structure synchronization.
 *
 * @description Accepts a department tree and member relationships pushed from the client and creates an asynchronous synchronization task.
 *     Processing flow:
 *     1. Validates platformType (only saml, oauth2, or custom are allowed).
 *     2. Validates data volume limits (departments + members <= 50000).
 *     3. Validates the compatibility between syncMembers and platformType.
 *     4. SAML/OAuth2 scenario: Parses or automatically derives ssoSettingsId.
 *     5. Custom scenario: Validates that corpId has been registered through createCustomOrg.
 *     6. Delegates to OrgSyncAuthorizedService to create the task (which includes permission verification).
 *     7. Returns taskId for polling.
 *
 * @param tmpReq SyncOrgStructureRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncOrgStructureResponse
 */
SyncOrgStructureResponse Client::syncOrgStructureWithOptions(const SyncOrgStructureRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SyncOrgStructureShrinkRequest request = SyncOrgStructureShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDepartments()) {
    request.setDepartmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepartments(), "departments", "json"));
  }

  if (!!tmpReq.hasMembers()) {
    request.setMembersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMembers(), "members", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCorpId()) {
    body["corpId"] = request.getCorpId();
  }

  if (!!request.hasDepartmentsShrink()) {
    body["departments"] = request.getDepartmentsShrink();
  }

  if (!!request.hasMembersShrink()) {
    body["members"] = request.getMembersShrink();
  }

  if (!!request.hasPlatformType()) {
    body["platformType"] = request.getPlatformType();
  }

  if (!!request.hasSsoSettingsId()) {
    body["ssoSettingsId"] = request.getSsoSettingsId();
  }

  if (!!request.hasSyncMembers()) {
    body["syncMembers"] = request.getSyncMembers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SyncOrgStructure"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/syncOrgStructure")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncOrgStructureResponse>();
}

/**
 * @summary Pushes organizational structure synchronization.
 *
 * @description Accepts a department tree and member relationships pushed from the client and creates an asynchronous synchronization task.
 *     Processing flow:
 *     1. Validates platformType (only saml, oauth2, or custom are allowed).
 *     2. Validates data volume limits (departments + members <= 50000).
 *     3. Validates the compatibility between syncMembers and platformType.
 *     4. SAML/OAuth2 scenario: Parses or automatically derives ssoSettingsId.
 *     5. Custom scenario: Validates that corpId has been registered through createCustomOrg.
 *     6. Delegates to OrgSyncAuthorizedService to create the task (which includes permission verification).
 *     7. Returns taskId for polling.
 *
 * @param request SyncOrgStructureRequest
 * @return SyncOrgStructureResponse
 */
SyncOrgStructureResponse Client::syncOrgStructure(const SyncOrgStructureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return syncOrgStructureWithOptions(request, headers, runtime);
}

/**
 * @summary Terminates a workflow instance.
 *
 * @description Terminates the current workflow instance.
 *
 * @param request TerminateInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TerminateInstanceResponse
 */
TerminateInstanceResponse Client::terminateInstanceWithOptions(const TerminateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasInstanceId()) {
    body["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasReason()) {
    body["reason"] = request.getReason();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TerminateInstance"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/terminateInstance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TerminateInstanceResponse>();
}

/**
 * @summary Terminates a workflow instance.
 *
 * @description Terminates the current workflow instance.
 *
 * @param request TerminateInstanceRequest
 * @return TerminateInstanceResponse
 */
TerminateInstanceResponse Client::terminateInstance(const TerminateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return terminateInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary Follows or unfollows a specified primary object.
 *
 * @description ## Request description
 * - **Precheck**:
 *   1. When adding a follow: The system checks whether the primary object is already followed to prevent duplicates, and authenticates that the primary object exists.
 *   2. When unfollowing: This is an idempotent operation. Regardless of whether the user has previously followed the object, `success=true` is returned.
 * - **Security**: Three authentication methods are supported: AK, BearerToken, and APP.
 * - **Request frequency limit**: A maximum of 100 requests can be send per second.
 * - **Response log**: The response log record feature is enabled.
 * - **Tenant relevance**: This API is associated with a specific tenant. The tenant ID of the invoker is used by default.
 * - **Operation type**: Write operation.
 * - **Backend service**: Requests are forwarded to an internal service for processing. The timeout period is 3 seconds.
 *
 * @param tmpReq TogglePrimaryObjectFavoriteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TogglePrimaryObjectFavoriteResponse
 */
TogglePrimaryObjectFavoriteResponse Client::togglePrimaryObjectFavoriteWithOptions(const TogglePrimaryObjectFavoriteRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TogglePrimaryObjectFavoriteShrinkRequest request = TogglePrimaryObjectFavoriteShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectIds()) {
    request.setObjectIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectIds(), "objectIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.getAction();
  }

  if (!!request.hasObjectIdsShrink()) {
    body["objectIds"] = request.getObjectIdsShrink();
  }

  if (!!request.hasObjectType()) {
    body["objectType"] = request.getObjectType();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TogglePrimaryObjectFavorite"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/togglePrimaryObjectFavorite")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TogglePrimaryObjectFavoriteResponse>();
}

/**
 * @summary Follows or unfollows a specified primary object.
 *
 * @description ## Request description
 * - **Precheck**:
 *   1. When adding a follow: The system checks whether the primary object is already followed to prevent duplicates, and authenticates that the primary object exists.
 *   2. When unfollowing: This is an idempotent operation. Regardless of whether the user has previously followed the object, `success=true` is returned.
 * - **Security**: Three authentication methods are supported: AK, BearerToken, and APP.
 * - **Request frequency limit**: A maximum of 100 requests can be send per second.
 * - **Response log**: The response log record feature is enabled.
 * - **Tenant relevance**: This API is associated with a specific tenant. The tenant ID of the invoker is used by default.
 * - **Operation type**: Write operation.
 * - **Backend service**: Requests are forwarded to an internal service for processing. The timeout period is 3 seconds.
 *
 * @param request TogglePrimaryObjectFavoriteRequest
 * @return TogglePrimaryObjectFavoriteResponse
 */
TogglePrimaryObjectFavoriteResponse Client::togglePrimaryObjectFavorite(const TogglePrimaryObjectFavoriteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return togglePrimaryObjectFavoriteWithOptions(request, headers, runtime);
}

/**
 * @summary Transcribes speech to text.
 *
 * @description ## Request description
 * This API performs automatic speech recognition (ASR) and uses the **file transfer upload** mode (`fileTransfer`). Audio files are not transmitted in the request body. Instead, they are first uploaded to Object Storage Service (OSS). The OSS URL is then passed to the backend through the `FileUrl` request parameter. The backend retrieves the audio bytes from the URL and calls the ASR model to transcribe the audio into text.
 * ### Call methods
 * - **Recommended**: Use the `TranscribeChatVoiceAdvance` method generated by the SDK and pass in the local audio file stream. The SDK automatically completes the transfer upload and populates the `FileUrl` parameter.
 * - **Direct upload**: Upload the audio file to an OSS URL that is accessible by the server. Then, call this API directly and pass in the `FileUrl` parameter.
 * ### Request parameters
 * - **FileUrl**: Required. The OSS URL of the audio file. If you use the Advance method, the SDK automatically populates this parameter. You do not need to manually assign a value.
 * - **FileName**: Required. The original file name, including the extension, such as `meeting.mp3`. The OSS URL generated during the transfer does not contain the original file name. The backend determines the audio format based on this parameter. Therefore, you must explicitly pass it.
 * - **ContentType**: Optional. The MIME type of the audio, such as `audio/mpeg`. If you do not pass this parameter, the format is determined based on the file name extension.
 * - Supported audio formats: MP3, WAV, M4A, MP4, WebM, OGG, OGA, Opus, FLAC, and AMR. Maximum size: 25 MB.
 * ### Response parameters
 * Returns the recognized text content in the `text` field.
 * ### Prerequisites
 * The tenant must have configured a speech recognition model (model_audio_flash). If the model is not configured, the `ERR.Robject.Chat.VoiceAudioNotConfigured` error is returned.
 *
 * @param request TranscribeChatVoiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TranscribeChatVoiceResponse
 */
TranscribeChatVoiceResponse Client::transcribeChatVoiceWithOptions(const TranscribeChatVoiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContentType()) {
    body["contentType"] = request.getContentType();
  }

  if (!!request.hasFileContentBase64()) {
    body["fileContentBase64"] = request.getFileContentBase64();
  }

  if (!!request.hasFileName()) {
    body["fileName"] = request.getFileName();
  }

  if (!!request.hasFileUrl()) {
    body["fileUrl"] = request.getFileUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TranscribeChatVoice"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/transcribeChatVoice")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TranscribeChatVoiceResponse>();
}

/**
 * @summary Transcribes speech to text.
 *
 * @description ## Request description
 * This API performs automatic speech recognition (ASR) and uses the **file transfer upload** mode (`fileTransfer`). Audio files are not transmitted in the request body. Instead, they are first uploaded to Object Storage Service (OSS). The OSS URL is then passed to the backend through the `FileUrl` request parameter. The backend retrieves the audio bytes from the URL and calls the ASR model to transcribe the audio into text.
 * ### Call methods
 * - **Recommended**: Use the `TranscribeChatVoiceAdvance` method generated by the SDK and pass in the local audio file stream. The SDK automatically completes the transfer upload and populates the `FileUrl` parameter.
 * - **Direct upload**: Upload the audio file to an OSS URL that is accessible by the server. Then, call this API directly and pass in the `FileUrl` parameter.
 * ### Request parameters
 * - **FileUrl**: Required. The OSS URL of the audio file. If you use the Advance method, the SDK automatically populates this parameter. You do not need to manually assign a value.
 * - **FileName**: Required. The original file name, including the extension, such as `meeting.mp3`. The OSS URL generated during the transfer does not contain the original file name. The backend determines the audio format based on this parameter. Therefore, you must explicitly pass it.
 * - **ContentType**: Optional. The MIME type of the audio, such as `audio/mpeg`. If you do not pass this parameter, the format is determined based on the file name extension.
 * - Supported audio formats: MP3, WAV, M4A, MP4, WebM, OGG, OGA, Opus, FLAC, and AMR. Maximum size: 25 MB.
 * ### Response parameters
 * Returns the recognized text content in the `text` field.
 * ### Prerequisites
 * The tenant must have configured a speech recognition model (model_audio_flash). If the model is not configured, the `ERR.Robject.Chat.VoiceAudioNotConfigured` error is returned.
 *
 * @param request TranscribeChatVoiceRequest
 * @return TranscribeChatVoiceResponse
 */
TranscribeChatVoiceResponse Client::transcribeChatVoice(const TranscribeChatVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return transcribeChatVoiceWithOptions(request, headers, runtime);
}

TranscribeChatVoiceResponse Client::transcribeChatVoiceAdvance(const TranscribeChatVoiceAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.getAccessKeyId();
  string accessKeySecret = credentialModel.getAccessKeySecret();
  string securityToken = credentialModel.getSecurityToken();
  string credentialType = credentialModel.getType();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "WinNexo"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  TranscribeChatVoiceRequest transcribeChatVoiceReq = TranscribeChatVoiceRequest();
  Utils::Utils::convert(request, transcribeChatVoiceReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getFileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType)},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    transcribeChatVoiceReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  TranscribeChatVoiceResponse transcribeChatVoiceResp = transcribeChatVoiceWithOptions(transcribeChatVoiceReq, headers, runtime);
  return transcribeChatVoiceResp;
}

/**
 * @summary Transfers a to-do item.
 *
 * @description Transfers a to-do item to specified users, excludes the operator from the targets, and performs atomic validation for the entire task.
 *
 * @param tmpReq TransferTodoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferTodoResponse
 */
TransferTodoResponse Client::transferTodoWithOptions(const TransferTodoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TransferTodoShrinkRequest request = TransferTodoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTargetUserIds()) {
    request.setTargetUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTargetUserIds(), "targetUserIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasComment()) {
    body["comment"] = request.getComment();
  }

  if (!!request.hasTargetUserIdsShrink()) {
    body["targetUserIds"] = request.getTargetUserIdsShrink();
  }

  if (!!request.hasTodoId()) {
    body["todoId"] = request.getTodoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TransferTodo"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/transferTodo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferTodoResponse>();
}

/**
 * @summary Transfers a to-do item.
 *
 * @description Transfers a to-do item to specified users, excludes the operator from the targets, and performs atomic validation for the entire task.
 *
 * @param request TransferTodoRequest
 * @return TransferTodoResponse
 */
TransferTodoResponse Client::transferTodo(const TransferTodoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return transferTodoWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the authorization mode of usage permissions for a digital employee.
 *
 * @description Switches the authorization mode of usage permissions for a digital employee.
 * Business logic:
 * 1. Constructs an AuthContext from the identity.
 * 2. Delegates the execution to AgentAuthorizationAuthorizedService.update_auth_mode.
 * 3. Pre-checks: MANAGE permission and agent existence. This is executed by the AuthorizedService layer, which performs authentication before exposing the existence of the agent.
 * 4. SPECIFIED_USERS: Explicit authorization is required for usage.
 * 5. ALL_USERS: All users can use the digital employee without authorization. Management permissions remain unaffected.
 *
 * @param request UpdateAgentAuthModeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentAuthModeResponse
 */
UpdateAgentAuthModeResponse Client::updateAgentAuthModeWithOptions(const UpdateAgentAuthModeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAuthMode()) {
    body["authMode"] = request.getAuthMode();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAgentAuthMode"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateAgentAuthMode")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentAuthModeResponse>();
}

/**
 * @summary Updates the authorization mode of usage permissions for a digital employee.
 *
 * @description Switches the authorization mode of usage permissions for a digital employee.
 * Business logic:
 * 1. Constructs an AuthContext from the identity.
 * 2. Delegates the execution to AgentAuthorizationAuthorizedService.update_auth_mode.
 * 3. Pre-checks: MANAGE permission and agent existence. This is executed by the AuthorizedService layer, which performs authentication before exposing the existence of the agent.
 * 4. SPECIFIED_USERS: Explicit authorization is required for usage.
 * 5. ALL_USERS: All users can use the digital employee without authorization. Management permissions remain unaffected.
 *
 * @param request UpdateAgentAuthModeRequest
 * @return UpdateAgentAuthModeResponse
 */
UpdateAgentAuthModeResponse Client::updateAgentAuthMode(const UpdateAgentAuthModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAgentAuthModeWithOptions(request, headers, runtime);
}

/**
 * @summary Updates a session.
 *
 * @description Updates a session.
 *
 * @param request UpdateChatSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateChatSessionResponse
 */
UpdateChatSessionResponse Client::updateChatSessionWithOptions(const UpdateChatSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateChatSession"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateChatSession")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateChatSessionResponse>();
}

/**
 * @summary Updates a session.
 *
 * @description Updates a session.
 *
 * @param request UpdateChatSessionRequest
 * @return UpdateChatSessionResponse
 */
UpdateChatSessionResponse Client::updateChatSession(const UpdateChatSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateChatSessionWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the basic information of a user\\"s personal directory.
 *
 * @description ## Operation description
 * This API operation updates the personal directory information of a specified user, including the name, description, and parent directory. Ensure that the directory corresponding to the provided `directoryId` exists and belongs to the current user. If the `name` or `path` of the directory is changed, the system automatically and recursively updates the paths of all subdirectories to maintain consistency. When adjusting the parent directory, ensure the validity of the new parent directory (that is, it is not the directory itself and does not cause a circular dependency).
 * - **Security constraints**: `tenant_id` and `user_id` must be derived from the authenticated identity.
 * - **Permission requirements**: Corresponding RAM permissions are required to perform this operation.
 * - **Input parameters**:
 *   - `directoryId`: Required. The unique identifier of the directory to update.
 *   - `name`: Optional. The new directory name.
 *   - `description`: Optional. The new directory description.
 *   - `parentId`: Optional. The ID of the new parent directory.
 *   - `path`: Optional. When specified, the system cascades the update to the paths of the current directory and all its subdirectories.
 *
 * @param request UpdateDirectoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDirectoryResponse
 */
UpdateDirectoryResponse Client::updateDirectoryWithOptions(const UpdateDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasParentId()) {
    body["parentId"] = request.getParentId();
  }

  if (!!request.hasPath()) {
    body["path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDirectoryResponse>();
}

/**
 * @summary Updates the basic information of a user\\"s personal directory.
 *
 * @description ## Operation description
 * This API operation updates the personal directory information of a specified user, including the name, description, and parent directory. Ensure that the directory corresponding to the provided `directoryId` exists and belongs to the current user. If the `name` or `path` of the directory is changed, the system automatically and recursively updates the paths of all subdirectories to maintain consistency. When adjusting the parent directory, ensure the validity of the new parent directory (that is, it is not the directory itself and does not cause a circular dependency).
 * - **Security constraints**: `tenant_id` and `user_id` must be derived from the authenticated identity.
 * - **Permission requirements**: Corresponding RAM permissions are required to perform this operation.
 * - **Input parameters**:
 *   - `directoryId`: Required. The unique identifier of the directory to update.
 *   - `name`: Optional. The new directory name.
 *   - `description`: Optional. The new directory description.
 *   - `parentId`: Optional. The ID of the new parent directory.
 *   - `path`: Optional. When specified, the system cascades the update to the paths of the current directory and all its subdirectories.
 *
 * @param request UpdateDirectoryRequest
 * @return UpdateDirectoryResponse
 */
UpdateDirectoryResponse Client::updateDirectory(const UpdateDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDirectoryWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the basic information of a semantic graph.
 *
 * @description Quickly updates the metadata (displayName or businessProfile) of a graph and synchronously updates the active record.
 *     You must specify at least one of displayName and businessProfile. Otherwise, the ERR.GraphSchema.QuickUpdateNoFieldsToUpdate error is returned.
 *     Error codes:
 *     - ERR.GraphSchema.QuickUpdateNoFieldsToUpdate: No updatable fields are specified.
 *     - ERR.GraphSchema.GraphNameInvalid: The graph name is invalid.
 *     - ERR.GraphSchema.GraphSchemaNotFound: The graph does not exist.
 *     - ERR.GraphSchema.DisplayNameInvalid: The display name is invalid or duplicate.
 *
 * @param request UpdateGraphInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGraphInfoResponse
 */
UpdateGraphInfoResponse Client::updateGraphInfoWithOptions(const UpdateGraphInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasBusinessProfile()) {
    body["businessProfile"] = request.getBusinessProfile();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateGraphInfo"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateGraphInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGraphInfoResponse>();
}

/**
 * @summary Updates the basic information of a semantic graph.
 *
 * @description Quickly updates the metadata (displayName or businessProfile) of a graph and synchronously updates the active record.
 *     You must specify at least one of displayName and businessProfile. Otherwise, the ERR.GraphSchema.QuickUpdateNoFieldsToUpdate error is returned.
 *     Error codes:
 *     - ERR.GraphSchema.QuickUpdateNoFieldsToUpdate: No updatable fields are specified.
 *     - ERR.GraphSchema.GraphNameInvalid: The graph name is invalid.
 *     - ERR.GraphSchema.GraphSchemaNotFound: The graph does not exist.
 *     - ERR.GraphSchema.DisplayNameInvalid: The display name is invalid or duplicate.
 *
 * @param request UpdateGraphInfoRequest
 * @return UpdateGraphInfoResponse
 */
UpdateGraphInfoResponse Client::updateGraphInfo(const UpdateGraphInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateGraphInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies a material directory in a collaboration workspace.
 *
 * @description Only the folder creator or a workspace administrator with storage management permissions who is an active member can modify the folder. Internal root folders and referenced folders cannot be modified. An empty character string clears the description, while null or an omitted value leaves it unchanged. At least one of the name or description parameters must be non-null.
 *
 * @param request UpdateGroupDirectoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGroupDirectoryResponse
 */
UpdateGroupDirectoryResponse Client::updateGroupDirectoryWithOptions(const UpdateGroupDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateGroupDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateGroupDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGroupDirectoryResponse>();
}

/**
 * @summary Modifies a material directory in a collaboration workspace.
 *
 * @description Only the folder creator or a workspace administrator with storage management permissions who is an active member can modify the folder. Internal root folders and referenced folders cannot be modified. An empty character string clears the description, while null or an omitted value leaves it unchanged. At least one of the name or description parameters must be non-null.
 *
 * @param request UpdateGroupDirectoryRequest
 * @return UpdateGroupDirectoryResponse
 */
UpdateGroupDirectoryResponse Client::updateGroupDirectory(const UpdateGroupDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateGroupDirectoryWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies the body of a collaboration workspace material.
 *
 * @description Valid members who are the creator or workspace administrators with storage management permissions can edit physical materials. References are read-only. TEXT and local txt/md formats are generally supported. Leading and trailing whitespaces are removed from TEXT. Existing materials with skip_parse continue to follow the parsing exemption and local file name extension rules.
 *
 * @param request UpdateGroupSourceContentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGroupSourceContentResponse
 */
UpdateGroupSourceContentResponse Client::updateGroupSourceContentWithOptions(const UpdateGroupSourceContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasForceSync()) {
    body["forceSync"] = request.getForceSync();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateGroupSourceContent"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateGroupSourceContent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGroupSourceContentResponse>();
}

/**
 * @summary Modifies the body of a collaboration workspace material.
 *
 * @description Valid members who are the creator or workspace administrators with storage management permissions can edit physical materials. References are read-only. TEXT and local txt/md formats are generally supported. Leading and trailing whitespaces are removed from TEXT. Existing materials with skip_parse continue to follow the parsing exemption and local file name extension rules.
 *
 * @param request UpdateGroupSourceContentRequest
 * @return UpdateGroupSourceContentResponse
 */
UpdateGroupSourceContentResponse Client::updateGroupSourceContent(const UpdateGroupSourceContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateGroupSourceContentWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the information of a specified enterprise knowledge base directory, including the name, description, and parent directory.
 *
 * @description ## Operation description
 * - This operation modifies a directory in the enterprise knowledge base.
 * - You must have the `DEVELOPMENT_KB_MANAGE` permission to call this operation.
 * - The tenantId parameter is optional. If you do not specify this parameter, the tenant ID of the caller is used by default.
 * - You must specify the directoryId of the directory to be modified. The name, description, and parentDirectoryId parameters are optional. If you do not specify these parameters, the corresponding fields remain unchanged.
 * - If you specify a new parentDirectoryId, the system checks whether the new parent directory belongs to the current tenant and whether the change causes circular references.
 * - For security, this operation supports multiple authentication methods, such as AK, BearerToken, and APP. It also supports Resource Access Management (RAM) permission control and operation auditing.
 *
 * @param request UpdateKnowledgeBaseDirectoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKnowledgeBaseDirectoryResponse
 */
UpdateKnowledgeBaseDirectoryResponse Client::updateKnowledgeBaseDirectoryWithOptions(const UpdateKnowledgeBaseDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasParentDirectoryId()) {
    body["parentDirectoryId"] = request.getParentDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKnowledgeBaseDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateKnowledgeBaseDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKnowledgeBaseDirectoryResponse>();
}

/**
 * @summary Updates the information of a specified enterprise knowledge base directory, including the name, description, and parent directory.
 *
 * @description ## Operation description
 * - This operation modifies a directory in the enterprise knowledge base.
 * - You must have the `DEVELOPMENT_KB_MANAGE` permission to call this operation.
 * - The tenantId parameter is optional. If you do not specify this parameter, the tenant ID of the caller is used by default.
 * - You must specify the directoryId of the directory to be modified. The name, description, and parentDirectoryId parameters are optional. If you do not specify these parameters, the corresponding fields remain unchanged.
 * - If you specify a new parentDirectoryId, the system checks whether the new parent directory belongs to the current tenant and whether the change causes circular references.
 * - For security, this operation supports multiple authentication methods, such as AK, BearerToken, and APP. It also supports Resource Access Management (RAM) permission control and operation auditing.
 *
 * @param request UpdateKnowledgeBaseDirectoryRequest
 * @return UpdateKnowledgeBaseDirectoryResponse
 */
UpdateKnowledgeBaseDirectoryResponse Client::updateKnowledgeBaseDirectory(const UpdateKnowledgeBaseDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKnowledgeBaseDirectoryWithOptions(request, headers, runtime);
}

/**
 * @summary Saves the LLM Wiki (OKF) switch and automatic execution schedule for a standard enterprise knowledge base, and returns the saved configuration and task status.
 *
 * @description Requires an active member identity in the current tenant and knowledge base management permissions for the target knowledge base. Invoke GetKnowledgeBaseSmartIndexConfiguration first to obtain the revision, and use expectedRevision to prevent concurrent overwrites. This operation performs a full save. Omitting cronExpression changes the schedule to manual. To retain the original schedule, you must commit both cronExpression and timezone. Switching from disabled to enabled creates a new artifact directory, an asynchronous full build task, and a bill. If the quota pre-check fails, the system will deny the enabling request. Keeping it enabled only updates the schedule and does not proactively trigger new builds. You cannot toggle the switch when you execute the task. If artifacts exist when disabled, asynchronous cleanup is initiated, and you cannot re-enable it until cleanup is complete. A successful save does not indicate that the build or billing is complete. The revision increments by 1 after each successful save. In case of a timeout, read the actual result first and do not blindly replay requests with old versions.
 *
 * @param request UpdateKnowledgeBaseSmartIndexConfigurationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKnowledgeBaseSmartIndexConfigurationResponse
 */
UpdateKnowledgeBaseSmartIndexConfigurationResponse Client::updateKnowledgeBaseSmartIndexConfigurationWithOptions(const UpdateKnowledgeBaseSmartIndexConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCronExpression()) {
    body["cronExpression"] = request.getCronExpression();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasEnabled()) {
    body["enabled"] = request.getEnabled();
  }

  if (!!request.hasExpectedRevision()) {
    body["expectedRevision"] = request.getExpectedRevision();
  }

  if (!!request.hasTimezone()) {
    body["timezone"] = request.getTimezone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKnowledgeBaseSmartIndexConfiguration"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateKnowledgeBaseSmartIndexConfiguration")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKnowledgeBaseSmartIndexConfigurationResponse>();
}

/**
 * @summary Saves the LLM Wiki (OKF) switch and automatic execution schedule for a standard enterprise knowledge base, and returns the saved configuration and task status.
 *
 * @description Requires an active member identity in the current tenant and knowledge base management permissions for the target knowledge base. Invoke GetKnowledgeBaseSmartIndexConfiguration first to obtain the revision, and use expectedRevision to prevent concurrent overwrites. This operation performs a full save. Omitting cronExpression changes the schedule to manual. To retain the original schedule, you must commit both cronExpression and timezone. Switching from disabled to enabled creates a new artifact directory, an asynchronous full build task, and a bill. If the quota pre-check fails, the system will deny the enabling request. Keeping it enabled only updates the schedule and does not proactively trigger new builds. You cannot toggle the switch when you execute the task. If artifacts exist when disabled, asynchronous cleanup is initiated, and you cannot re-enable it until cleanup is complete. A successful save does not indicate that the build or billing is complete. The revision increments by 1 after each successful save. In case of a timeout, read the actual result first and do not blindly replay requests with old versions.
 *
 * @param request UpdateKnowledgeBaseSmartIndexConfigurationRequest
 * @return UpdateKnowledgeBaseSmartIndexConfigurationResponse
 */
UpdateKnowledgeBaseSmartIndexConfigurationResponse Client::updateKnowledgeBaseSmartIndexConfiguration(const UpdateKnowledgeBaseSmartIndexConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKnowledgeBaseSmartIndexConfigurationWithOptions(request, headers, runtime);
}

/**
 * @summary Edits the body content of a resource in an enterprise self-built knowledge base and triggers re-parsing.
 *
 * @description ## Request description
 * This operation allows you to update the body content of a specified enterprise knowledge base data source and optionally wait synchronously for parsing to complete. By setting the `forceSync` parameter, you can control whether the parsing process is executed synchronously or asynchronously. The default is asynchronous processing.
 * - **Note**: When the `content` field is an empty string, the original content is cleared.
 * - **Permission requirement**: Calling this operation requires the corresponding RAM action permission (`winnexo:UpdateKnowledgeBaseSourceContent`).
 *
 * @param request UpdateKnowledgeBaseSourceContentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKnowledgeBaseSourceContentResponse
 */
UpdateKnowledgeBaseSourceContentResponse Client::updateKnowledgeBaseSourceContentWithOptions(const UpdateKnowledgeBaseSourceContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasForceSync()) {
    body["forceSync"] = request.getForceSync();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKnowledgeBaseSourceContent"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateKnowledgeBaseSourceContent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKnowledgeBaseSourceContentResponse>();
}

/**
 * @summary Edits the body content of a resource in an enterprise self-built knowledge base and triggers re-parsing.
 *
 * @description ## Request description
 * This operation allows you to update the body content of a specified enterprise knowledge base data source and optionally wait synchronously for parsing to complete. By setting the `forceSync` parameter, you can control whether the parsing process is executed synchronously or asynchronously. The default is asynchronous processing.
 * - **Note**: When the `content` field is an empty string, the original content is cleared.
 * - **Permission requirement**: Calling this operation requires the corresponding RAM action permission (`winnexo:UpdateKnowledgeBaseSourceContent`).
 *
 * @param request UpdateKnowledgeBaseSourceContentRequest
 * @return UpdateKnowledgeBaseSourceContentResponse
 */
UpdateKnowledgeBaseSourceContentResponse Client::updateKnowledgeBaseSourceContent(const UpdateKnowledgeBaseSourceContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKnowledgeBaseSourceContentWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the resource tags of a specified data source in an enterprise knowledge base.
 *
 * @description ## Request description
 * - This operation updates the labels of a specific data source in an enterprise knowledge base.
 * - You must have knowledge base management permissions to invoke this operation.
 * - The `sourceTags` parameter accepts a JSON character string list, such as `["tagA", "tagB"]`. If you set this parameter to `null`, all existing labels are cleared.
 * - The update operation affects only the `sourceTags` and `gmt_modified` fields and does not trigger the `process_source` workflow.
 * - If the specified data source does not exist, the `ERR.Robject.Source.NotFound` fault is returned.
 * - This operation supports authentication through AccessKey, BearerToken, or APP methods.
 * - When you invoke this operation, make sure that `tenant_id` and `user_id` are from valid authentication identity information.
 *
 * @param request UpdateKnowledgeBaseSourceTagsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKnowledgeBaseSourceTagsResponse
 */
UpdateKnowledgeBaseSourceTagsResponse Client::updateKnowledgeBaseSourceTagsWithOptions(const UpdateKnowledgeBaseSourceTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKnowledgeBaseSourceTags"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateKnowledgeBaseSourceTags")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKnowledgeBaseSourceTagsResponse>();
}

/**
 * @summary Updates the resource tags of a specified data source in an enterprise knowledge base.
 *
 * @description ## Request description
 * - This operation updates the labels of a specific data source in an enterprise knowledge base.
 * - You must have knowledge base management permissions to invoke this operation.
 * - The `sourceTags` parameter accepts a JSON character string list, such as `["tagA", "tagB"]`. If you set this parameter to `null`, all existing labels are cleared.
 * - The update operation affects only the `sourceTags` and `gmt_modified` fields and does not trigger the `process_source` workflow.
 * - If the specified data source does not exist, the `ERR.Robject.Source.NotFound` fault is returned.
 * - This operation supports authentication through AccessKey, BearerToken, or APP methods.
 * - When you invoke this operation, make sure that `tenant_id` and `user_id` are from valid authentication identity information.
 *
 * @param request UpdateKnowledgeBaseSourceTagsRequest
 * @return UpdateKnowledgeBaseSourceTagsResponse
 */
UpdateKnowledgeBaseSourceTagsResponse Client::updateKnowledgeBaseSourceTags(const UpdateKnowledgeBaseSourceTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKnowledgeBaseSourceTagsWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the automatic memory collection switch.
 *
 * @description Manages personal or specified writing collaboration workspace memory based on the authenticated user. The workspace mode inherits the permissions of active members.
 *
 * @param request UpdateMemoryAutoExtractionSwitchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMemoryAutoExtractionSwitchResponse
 */
UpdateMemoryAutoExtractionSwitchResponse Client::updateMemoryAutoExtractionSwitchWithOptions(const UpdateMemoryAutoExtractionSwitchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasClearExisting()) {
    body["clearExisting"] = request.getClearExisting();
  }

  if (!!request.hasEnabled()) {
    body["enabled"] = request.getEnabled();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerType()) {
    body["ownerType"] = request.getOwnerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMemoryAutoExtractionSwitch"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateMemoryAutoExtractionSwitch")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMemoryAutoExtractionSwitchResponse>();
}

/**
 * @summary Updates the automatic memory collection switch.
 *
 * @description Manages personal or specified writing collaboration workspace memory based on the authenticated user. The workspace mode inherits the permissions of active members.
 *
 * @param request UpdateMemoryAutoExtractionSwitchRequest
 * @return UpdateMemoryAutoExtractionSwitchResponse
 */
UpdateMemoryAutoExtractionSwitchResponse Client::updateMemoryAutoExtractionSwitch(const UpdateMemoryAutoExtractionSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMemoryAutoExtractionSwitchWithOptions(request, headers, runtime);
}

/**
 * @summary Updates a scheduled task.
 *
 * @description Updates a scheduled task.
 *
 * @param tmpReq UpdateScheduledTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateScheduledTaskResponse
 */
UpdateScheduledTaskResponse Client::updateScheduledTaskWithOptions(const UpdateScheduledTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateScheduledTaskShrinkRequest request = UpdateScheduledTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDescription()) {
    request.setDescriptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDescription(), "description", "json"));
  }

  if (!!tmpReq.hasDigitalEmployeeName()) {
    request.setDigitalEmployeeNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDigitalEmployeeName(), "digitalEmployeeName", "json"));
  }

  if (!!tmpReq.hasSegments()) {
    request.setSegmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSegments(), "segments", "json"));
  }

  if (!!tmpReq.hasTaskDetail()) {
    request.setTaskDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskDetail(), "taskDetail", "json"));
  }

  if (!!tmpReq.hasTriggerConfig()) {
    request.setTriggerConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTriggerConfig(), "triggerConfig", "json"));
  }

  if (!!tmpReq.hasVisibleMemberUserIds()) {
    request.setVisibleMemberUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVisibleMemberUserIds(), "visibleMemberUserIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAutoPreference()) {
    body["autoPreference"] = request.getAutoPreference();
  }

  if (!!request.hasDescriptionShrink()) {
    body["description"] = request.getDescriptionShrink();
  }

  if (!!request.hasDigitalEmployeeNameShrink()) {
    body["digitalEmployeeName"] = request.getDigitalEmployeeNameShrink();
  }

  if (!!request.hasIsOpen()) {
    body["isOpen"] = request.getIsOpen();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOutputMode()) {
    body["outputMode"] = request.getOutputMode();
  }

  if (!!request.hasSegmentsShrink()) {
    body["segments"] = request.getSegmentsShrink();
  }

  if (!!request.hasTaskDetailShrink()) {
    body["taskDetail"] = request.getTaskDetailShrink();
  }

  if (!!request.hasTaskId()) {
    body["taskId"] = request.getTaskId();
  }

  if (!!request.hasTriggerConfigShrink()) {
    body["triggerConfig"] = request.getTriggerConfigShrink();
  }

  if (!!request.hasVisibility()) {
    body["visibility"] = request.getVisibility();
  }

  if (!!request.hasVisibleMemberUserIdsShrink()) {
    body["visibleMemberUserIds"] = request.getVisibleMemberUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateScheduledTask"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateScheduledTask")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateScheduledTaskResponse>();
}

/**
 * @summary Updates a scheduled task.
 *
 * @description Updates a scheduled task.
 *
 * @param request UpdateScheduledTaskRequest
 * @return UpdateScheduledTaskResponse
 */
UpdateScheduledTaskResponse Client::updateScheduledTask(const UpdateScheduledTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateScheduledTaskWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the sharing status, scope, or output link.
 *
 * @description Updates the sharing status and scope of a session or output item. Only output items support refreshing the sharing link. For session targets, use sessionId. For output targets, use outputItemId or a combination of sessionId and outputItemName.
 *
 * @param tmpReq UpdateShareRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateShareResponse
 */
UpdateShareResponse Client::updateShareWithOptions(const UpdateShareRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateShareShrinkRequest request = UpdateShareShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasShareUserGroupIds()) {
    request.setShareUserGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getShareUserGroupIds(), "shareUserGroupIds", "json"));
  }

  if (!!tmpReq.hasShareUserIds()) {
    request.setShareUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getShareUserIds(), "shareUserIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasOutputItemId()) {
    body["outputItemId"] = request.getOutputItemId();
  }

  if (!!request.hasOutputItemName()) {
    body["outputItemName"] = request.getOutputItemName();
  }

  if (!!request.hasRefreshShareLink()) {
    body["refreshShareLink"] = request.getRefreshShareLink();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasShareAccessType()) {
    body["shareAccessType"] = request.getShareAccessType();
  }

  if (!!request.hasShareEnabled()) {
    body["shareEnabled"] = request.getShareEnabled();
  }

  if (!!request.hasShareUserGroupIdsShrink()) {
    body["shareUserGroupIds"] = request.getShareUserGroupIdsShrink();
  }

  if (!!request.hasShareUserIdsShrink()) {
    body["shareUserIds"] = request.getShareUserIdsShrink();
  }

  if (!!request.hasTargetType()) {
    body["targetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateShare"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateShare")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateShareResponse>();
}

/**
 * @summary Updates the sharing status, scope, or output link.
 *
 * @description Updates the sharing status and scope of a session or output item. Only output items support refreshing the sharing link. For session targets, use sessionId. For output targets, use outputItemId or a combination of sessionId and outputItemName.
 *
 * @param request UpdateShareRequest
 * @return UpdateShareResponse
 */
UpdateShareResponse Client::updateShare(const UpdateShareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateShareWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the content of an editable data source within a tenant and triggers re-parsing.
 *
 * @description ## Operation description
 * - This API operation updates the content of a data source within a specified tenant and triggers synchronous or asynchronous re-parsing of the data source as needed.
 * - `tenant_id` and `user_id` are used only for authentication and are not involved in actual business logic processing.
 * - When the provided content is an empty string, the system performs the operation according to the existing service contract.
 * - If the specified data source does not exist, a standard NotFound error is returned. Other exceptions are handled by the global exception chain.
 * - Set the `forceSync` parameter to determine whether to wait for the parsing process to complete. The default behavior is asynchronous queuing.
 *
 * @param request UpdateSourceContentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSourceContentResponse
 */
UpdateSourceContentResponse Client::updateSourceContentWithOptions(const UpdateSourceContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasForceSync()) {
    body["forceSync"] = request.getForceSync();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSourceContent"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateSourceContent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSourceContentResponse>();
}

/**
 * @summary Updates the content of an editable data source within a tenant and triggers re-parsing.
 *
 * @description ## Operation description
 * - This API operation updates the content of a data source within a specified tenant and triggers synchronous or asynchronous re-parsing of the data source as needed.
 * - `tenant_id` and `user_id` are used only for authentication and are not involved in actual business logic processing.
 * - When the provided content is an empty string, the system performs the operation according to the existing service contract.
 * - If the specified data source does not exist, a standard NotFound error is returned. Other exceptions are handled by the global exception chain.
 * - Set the `forceSync` parameter to determine whether to wait for the parsing process to complete. The default behavior is asynchronous queuing.
 *
 * @param request UpdateSourceContentRequest
 * @return UpdateSourceContentResponse
 */
UpdateSourceContentResponse Client::updateSourceContent(const UpdateSourceContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSourceContentWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the directory information of an enterprise knowledge base and modifies the digital employee association and AI version summary configuration for a standard enterprise root.
 *
 * @description Requires management permissions for the target knowledge base. For a standard enterprise root, directory information, digital employee associations, and version summaries can be saved simultaneously. If validation or writing fails, the entire operation is rolled back. When modifying the configuration, you cannot pass a non-null parentId to move it to a subdirectory at the same time. Omitted or null configuration fields retain their original values, while false and empty arrays are explicit configuration values. Smart indexes are saved separately through UpdateKnowledgeBaseSmartIndexConfiguration, and the two calls do not constitute a cross-API transaction.
 *
 * @param tmpReq UpdateTenantDirectoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTenantDirectoryResponse
 */
UpdateTenantDirectoryResponse Client::updateTenantDirectoryWithOptions(const UpdateTenantDirectoryRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTenantDirectoryShrinkRequest request = UpdateTenantDirectoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOperatingObjectNames()) {
    request.setOperatingObjectNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOperatingObjectNames(), "operatingObjectNames", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasChangeRecordEnabled()) {
    body["changeRecordEnabled"] = request.getChangeRecordEnabled();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOoVisibilityMode()) {
    body["ooVisibilityMode"] = request.getOoVisibilityMode();
  }

  if (!!request.hasOperatingObjectNamesShrink()) {
    body["operatingObjectNames"] = request.getOperatingObjectNamesShrink();
  }

  if (!!request.hasParentId()) {
    body["parentId"] = request.getParentId();
  }

  if (!!request.hasPath()) {
    body["path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTenantDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateTenantDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTenantDirectoryResponse>();
}

/**
 * @summary Updates the directory information of an enterprise knowledge base and modifies the digital employee association and AI version summary configuration for a standard enterprise root.
 *
 * @description Requires management permissions for the target knowledge base. For a standard enterprise root, directory information, digital employee associations, and version summaries can be saved simultaneously. If validation or writing fails, the entire operation is rolled back. When modifying the configuration, you cannot pass a non-null parentId to move it to a subdirectory at the same time. Omitted or null configuration fields retain their original values, while false and empty arrays are explicit configuration values. Smart indexes are saved separately through UpdateKnowledgeBaseSmartIndexConfiguration, and the two calls do not constitute a cross-API transaction.
 *
 * @param request UpdateTenantDirectoryRequest
 * @return UpdateTenantDirectoryResponse
 */
UpdateTenantDirectoryResponse Client::updateTenantDirectory(const UpdateTenantDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTenantDirectoryWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies user information, including enabling or disabling the user.
 *
 * @description Modifies user information.
 *     Workflow:
 *     1. Parse roleCodes into role_ids.
 *     2. If isActive changes, switch the status first, including protection for the last super administrator.
 *     3. Call update_tenant_member to modify other fields such as displayName, roleCodes, and userGroupIds.
 *     4. Return HTTP 200 if all steps succeed.
 *     Execution sequence:
 *     - The isActive status change is written before other fields. The two steps are not in the same transaction.
 *     - If validation fails, such as protection for the last super administrator, an exception is thrown and subsequent steps are not executed.
 *     - If the isActive change is persisted to the database but a subsequent step throws an exception, the isActive change is not rolled back.
 *
 * @param tmpReq UpdateUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateUserShrinkRequest request = UpdateUserShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoleCodes()) {
    request.setRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRoleCodes(), "roleCodes", "json"));
  }

  if (!!tmpReq.hasUserGroupIds()) {
    request.setUserGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserGroupIds(), "userGroupIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasIsActive()) {
    body["isActive"] = request.getIsActive();
  }

  if (!!request.hasRoleCodesShrink()) {
    body["roleCodes"] = request.getRoleCodesShrink();
  }

  if (!!request.hasUserGroupIdsShrink()) {
    body["userGroupIds"] = request.getUserGroupIdsShrink();
  }

  if (!!request.hasWnUserId()) {
    body["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUser"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateUser")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserResponse>();
}

/**
 * @summary Modifies user information, including enabling or disabling the user.
 *
 * @description Modifies user information.
 *     Workflow:
 *     1. Parse roleCodes into role_ids.
 *     2. If isActive changes, switch the status first, including protection for the last super administrator.
 *     3. Call update_tenant_member to modify other fields such as displayName, roleCodes, and userGroupIds.
 *     4. Return HTTP 200 if all steps succeed.
 *     Execution sequence:
 *     - The isActive status change is written before other fields. The two steps are not in the same transaction.
 *     - If validation fails, such as protection for the last super administrator, an exception is thrown and subsequent steps are not executed.
 *     - If the isActive change is persisted to the database but a subsequent step throws an exception, the isActive change is not rolled back.
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateUserWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the name, description, and parent relationship of a specified user group.
 *
 * @description ## Request description
 * This operation atomically updates the information of a user group, including but not limited to the user group name, description, and its position in the organizational structure (by setting a new parent user group ID or moving it to the root node). Note that when attempting to move a user group to the root node, you must not provide a non-null `parentId` value at the same time. Additionally, if you do not want to modify certain fields such as `userGroupName` or `description`, you can omit these parameters.
 *
 * @param request UpdateUserGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserGroupResponse
 */
UpdateUserGroupResponse Client::updateUserGroupWithOptions(const UpdateUserGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasMoveToRoot()) {
    body["moveToRoot"] = request.getMoveToRoot();
  }

  if (!!request.hasParentId()) {
    body["parentId"] = request.getParentId();
  }

  if (!!request.hasUserGroupId()) {
    body["userGroupId"] = request.getUserGroupId();
  }

  if (!!request.hasUserGroupName()) {
    body["userGroupName"] = request.getUserGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUserGroup"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateUserGroup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserGroupResponse>();
}

/**
 * @summary Updates the name, description, and parent relationship of a specified user group.
 *
 * @description ## Request description
 * This operation atomically updates the information of a user group, including but not limited to the user group name, description, and its position in the organizational structure (by setting a new parent user group ID or moving it to the root node). Note that when attempting to move a user group to the root node, you must not provide a non-null `parentId` value at the same time. Additionally, if you do not want to modify certain fields such as `userGroupName` or `description`, you can omit these parameters.
 *
 * @param request UpdateUserGroupRequest
 * @return UpdateUserGroupResponse
 */
UpdateUserGroupResponse Client::updateUserGroup(const UpdateUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateUserGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Updates partial fields of the current user information and returns the complete user information.
 *
 * @description ## Operation description
 * - This API allows the caller to update some or all optional fields of a specified user. Fields that are not provided retain their original values.
 * - Use the `tenantId` parameter to specify a tenant ID. If omitted, the default tenant of the caller is used.
 * - After a successful update, the response body contains the complete user information object.
 * - This operation requires authentication and supports three security schemes: AK, BearerToken, and APP.
 * - The request content type is JSON, and the operation is available only over HTTPS.
 * - Note: The `profileRoleInfo` field is valid only when the user role is set to Others. It describes the specific role information of the user.
 *
 * @param request UpdateUserInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserInfoResponse
 */
UpdateUserInfoResponse Client::updateUserInfoWithOptions(const UpdateUserInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAvatar()) {
    body["avatar"] = request.getAvatar();
  }

  if (!!request.hasLanguagePreference()) {
    body["languagePreference"] = request.getLanguagePreference();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOffering()) {
    body["offering"] = request.getOffering();
  }

  if (!!request.hasProfileRoleInfo()) {
    body["profileRoleInfo"] = request.getProfileRoleInfo();
  }

  if (!!request.hasSelfIntroduction()) {
    body["selfIntroduction"] = request.getSelfIntroduction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUserInfo"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateUserInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserInfoResponse>();
}

/**
 * @summary Updates partial fields of the current user information and returns the complete user information.
 *
 * @description ## Operation description
 * - This API allows the caller to update some or all optional fields of a specified user. Fields that are not provided retain their original values.
 * - Use the `tenantId` parameter to specify a tenant ID. If omitted, the default tenant of the caller is used.
 * - After a successful update, the response body contains the complete user information object.
 * - This operation requires authentication and supports three security schemes: AK, BearerToken, and APP.
 * - The request content type is JSON, and the operation is available only over HTTPS.
 * - Note: The `profileRoleInfo` field is valid only when the user role is set to Others. It describes the specific role information of the user.
 *
 * @param request UpdateUserInfoRequest
 * @return UpdateUserInfoResponse
 */
UpdateUserInfoResponse Client::updateUserInfo(const UpdateUserInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateUserInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Updates a work item using optimistic locking. If workflowTemplateIds is not specified, the existing bindings are retained.
 *
 * @description Updates a work item using optimistic locking. If workflowTemplateIds is not specified, the existing bindings are retained.
 *
 * @param tmpReq UpdateWorkItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkItemResponse
 */
UpdateWorkItemResponse Client::updateWorkItemWithOptions(const UpdateWorkItemRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWorkItemShrinkRequest request = UpdateWorkItemShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAttachments()) {
    request.setAttachmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAttachments(), "attachments", "json"));
  }

  if (!!tmpReq.hasCollaboratorUserIds()) {
    request.setCollaboratorUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCollaboratorUserIds(), "collaboratorUserIds", "json"));
  }

  if (!!tmpReq.hasWorkflowTemplateIds()) {
    request.setWorkflowTemplateIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWorkflowTemplateIds(), "workflowTemplateIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAcceptanceCriteria()) {
    body["acceptanceCriteria"] = request.getAcceptanceCriteria();
  }

  if (!!request.hasAttachmentsShrink()) {
    body["attachments"] = request.getAttachmentsShrink();
  }

  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasCollaboratorUserIdsShrink()) {
    body["collaboratorUserIds"] = request.getCollaboratorUserIdsShrink();
  }

  if (!!request.hasConversationId()) {
    body["conversationId"] = request.getConversationId();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasExpectedVersion()) {
    body["expectedVersion"] = request.getExpectedVersion();
  }

  if (!!request.hasOwnerUserId()) {
    body["ownerUserId"] = request.getOwnerUserId();
  }

  if (!!request.hasPriority()) {
    body["priority"] = request.getPriority();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  if (!!request.hasWorkItemId()) {
    body["workItemId"] = request.getWorkItemId();
  }

  if (!!request.hasWorkflowTemplateIdsShrink()) {
    body["workflowTemplateIds"] = request.getWorkflowTemplateIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkItem"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateWorkItem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkItemResponse>();
}

/**
 * @summary Updates a work item using optimistic locking. If workflowTemplateIds is not specified, the existing bindings are retained.
 *
 * @description Updates a work item using optimistic locking. If workflowTemplateIds is not specified, the existing bindings are retained.
 *
 * @param request UpdateWorkItemRequest
 * @return UpdateWorkItemResponse
 */
UpdateWorkItemResponse Client::updateWorkItem(const UpdateWorkItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWorkItemWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the executor and model configurations of a workflow node.
 *
 * @param tmpReq UpdateWorkflowNodeConfigurationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkflowNodeConfigurationResponse
 */
UpdateWorkflowNodeConfigurationResponse Client::updateWorkflowNodeConfigurationWithOptions(const UpdateWorkflowNodeConfigurationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWorkflowNodeConfigurationShrinkRequest request = UpdateWorkflowNodeConfigurationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExecutor()) {
    request.setExecutorShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExecutor(), "executor", "json"));
  }

  if (!!tmpReq.hasResponsibleUserIds()) {
    request.setResponsibleUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResponsibleUserIds(), "responsibleUserIds", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasExecutorShrink()) {
    body["executor"] = request.getExecutorShrink();
  }

  if (!!request.hasExpectedVersion()) {
    body["expectedVersion"] = request.getExpectedVersion();
  }

  if (!!request.hasInstanceId()) {
    body["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasNodeId()) {
    body["nodeId"] = request.getNodeId();
  }

  if (!!request.hasResponsibleUserIdsShrink()) {
    body["responsibleUserIds"] = request.getResponsibleUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkflowNodeConfiguration"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateWorkflowNodeConfiguration")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkflowNodeConfigurationResponse>();
}

/**
 * @summary Updates the executor and model configurations of a workflow node.
 *
 * @param request UpdateWorkflowNodeConfigurationRequest
 * @return UpdateWorkflowNodeConfigurationResponse
 */
UpdateWorkflowNodeConfigurationResponse Client::updateWorkflowNodeConfiguration(const UpdateWorkflowNodeConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWorkflowNodeConfigurationWithOptions(request, headers, runtime);
}

/**
 * @summary Overwrites and updates a workflow template for active members. The last save takes effect.
 *
 * @description Overwrites and updates a workflow template for active members. The last save takes effect.
 *
 * @param tmpReq UpdateWorkflowTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkflowTemplateResponse
 */
UpdateWorkflowTemplateResponse Client::updateWorkflowTemplateWithOptions(const UpdateWorkflowTemplateRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWorkflowTemplateShrinkRequest request = UpdateWorkflowTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDefinition()) {
    request.setDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDefinition(), "definition", "json"));
  }

  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.getAction();
  }

  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasDefinitionShrink()) {
    body["definition"] = request.getDefinitionShrink();
  }

  if (!!request.hasSourceVersion()) {
    body["sourceVersion"] = request.getSourceVersion();
  }

  if (!!request.hasTemplateId()) {
    body["templateId"] = request.getTemplateId();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  if (!!request.hasVersionDescription()) {
    body["versionDescription"] = request.getVersionDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkflowTemplate"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateWorkflowTemplate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkflowTemplateResponse>();
}

/**
 * @summary Overwrites and updates a workflow template for active members. The last save takes effect.
 *
 * @description Overwrites and updates a workflow template for active members. The last save takes effect.
 *
 * @param request UpdateWorkflowTemplateRequest
 * @return UpdateWorkflowTemplateResponse
 */
UpdateWorkflowTemplateResponse Client::updateWorkflowTemplate(const UpdateWorkflowTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWorkflowTemplateWithOptions(request, headers, runtime);
}

/**
 * @deprecated OpenAPI UploadChatFile is deprecated
 *
 * @summary Uploads a local file for a session.
 *
 * @description ## Operation description
 * This API operation uploads a temporary temporary file by using the **file transfer upload** mode (`fileTransfer`). The file binary data is not transmitted in the request body of this API operation. Instead, the file is first uploaded to Object Storage Service (OSS), and then the OSS address is passed to the backend through the `FileUrl` parameter. The backend retrieves the bytes from that address, writes them to its own OSS bucket, and creates a temporary temporary file record.
 * ### How to call
 * - **Recommended**: Use the `UploadChatFileAdvance` method generated by the SDK. Pass in the local file stream, and the SDK automatically completes the transfer upload and populates the `FileUrl` parameter.
 * - **Direct upload**: Upload the file to an OSS address accessible by the server, and then call this API operation directly with the `FileUrl` parameter.
 * ### Request parameters
 * - **FileUrl**: Required. The OSS address of the file. When you use the Advance method, the SDK automatically populates this parameter. You do not need to manually set it.
 * - **FileName**: Required. The original file name including the extension, such as `report.pdf`. The OSS address generated during the transfer does not carry the original file name. The backend uses this parameter to determine the file extension and display name. Therefore, you must explicitly pass in this parameter.
 * - **ContentType**: Optional. The MIME type of the file. If this parameter is not specified, `application/octet-stream` is used.
 * - **OperatingObjectName**: Optional. The agent namespace identifier that determines the file storage path.
 * ### Response parameters
 * The response includes the OSS object path `objectName`, the storage address `fileUrl`, the publicly accessible address `filePublicUrl` (valid for 1 hour), and the file record ID `fileRecordId`. The `uploadSignatureUrl` parameter is always empty in this mode.
 *
 * @param request UploadChatFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadChatFileResponse
 */
UploadChatFileResponse Client::uploadChatFileWithOptions(const UploadChatFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContentType()) {
    body["contentType"] = request.getContentType();
  }

  if (!!request.hasFileName()) {
    body["fileName"] = request.getFileName();
  }

  if (!!request.hasFileUrl()) {
    body["fileUrl"] = request.getFileUrl();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadChatFile"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/uploadChatFile")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadChatFileResponse>();
}

/**
 * @deprecated OpenAPI UploadChatFile is deprecated
 *
 * @summary Uploads a local file for a session.
 *
 * @description ## Operation description
 * This API operation uploads a temporary temporary file by using the **file transfer upload** mode (`fileTransfer`). The file binary data is not transmitted in the request body of this API operation. Instead, the file is first uploaded to Object Storage Service (OSS), and then the OSS address is passed to the backend through the `FileUrl` parameter. The backend retrieves the bytes from that address, writes them to its own OSS bucket, and creates a temporary temporary file record.
 * ### How to call
 * - **Recommended**: Use the `UploadChatFileAdvance` method generated by the SDK. Pass in the local file stream, and the SDK automatically completes the transfer upload and populates the `FileUrl` parameter.
 * - **Direct upload**: Upload the file to an OSS address accessible by the server, and then call this API operation directly with the `FileUrl` parameter.
 * ### Request parameters
 * - **FileUrl**: Required. The OSS address of the file. When you use the Advance method, the SDK automatically populates this parameter. You do not need to manually set it.
 * - **FileName**: Required. The original file name including the extension, such as `report.pdf`. The OSS address generated during the transfer does not carry the original file name. The backend uses this parameter to determine the file extension and display name. Therefore, you must explicitly pass in this parameter.
 * - **ContentType**: Optional. The MIME type of the file. If this parameter is not specified, `application/octet-stream` is used.
 * - **OperatingObjectName**: Optional. The agent namespace identifier that determines the file storage path.
 * ### Response parameters
 * The response includes the OSS object path `objectName`, the storage address `fileUrl`, the publicly accessible address `filePublicUrl` (valid for 1 hour), and the file record ID `fileRecordId`. The `uploadSignatureUrl` parameter is always empty in this mode.
 *
 * @param request UploadChatFileRequest
 * @return UploadChatFileResponse
 */
UploadChatFileResponse Client::uploadChatFile(const UploadChatFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uploadChatFileWithOptions(request, headers, runtime);
}

UploadChatFileResponse Client::uploadChatFileAdvance(const UploadChatFileAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.getAccessKeyId();
  string accessKeySecret = credentialModel.getAccessKeySecret();
  string securityToken = credentialModel.getSecurityToken();
  string credentialType = credentialModel.getType();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "WinNexo"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  UploadChatFileRequest uploadChatFileReq = UploadChatFileRequest();
  Utils::Utils::convert(request, uploadChatFileReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getFileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType)},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    uploadChatFileReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  UploadChatFileResponse uploadChatFileResp = uploadChatFileWithOptions(uploadChatFileReq, headers, runtime);
  return uploadChatFileResp;
}

/**
 * @summary Uploads a session file in Base64 format.
 *
 * @description Submits a local attachment by using standard Base64 encoding (the maximum decoding limit on the application side is 50 MiB) and returns the session file record ID.
 *
 * @param request UploadChatFileByBase64Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadChatFileByBase64Response
 */
UploadChatFileByBase64Response Client::uploadChatFileByBase64WithOptions(const UploadChatFileByBase64Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppToken()) {
    query["appToken"] = request.getAppToken();
  }

  if (!!request.hasOpsUserCode()) {
    query["opsUserCode"] = request.getOpsUserCode();
  }

  if (!!request.hasOpsUserId()) {
    query["opsUserId"] = request.getOpsUserId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContentType()) {
    body["contentType"] = request.getContentType();
  }

  if (!!request.hasFileContentBase64()) {
    body["fileContentBase64"] = request.getFileContentBase64();
  }

  if (!!request.hasFileName()) {
    body["fileName"] = request.getFileName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadChatFileByBase64"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/uploadChatFileByBase64")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadChatFileByBase64Response>();
}

/**
 * @summary Uploads a session file in Base64 format.
 *
 * @description Submits a local attachment by using standard Base64 encoding (the maximum decoding limit on the application side is 50 MiB) and returns the session file record ID.
 *
 * @param request UploadChatFileByBase64Request
 * @return UploadChatFileByBase64Response
 */
UploadChatFileByBase64Response Client::uploadChatFileByBase64(const UploadChatFileByBase64Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uploadChatFileByBase64WithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace WinNexo20260512