#include <darabonba/Core.hpp>
#include <alibabacloud/Sophonsoar20250903.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Sophonsoar20250903::Models;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{

AlibabaCloud::Sophonsoar20250903::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("sophonsoar", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Create Component Asset.
 *
 * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., Threat Analysis and Response Log Ingress Traffic) before using this interface.
 *
 * @param request CreateComponentAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComponentAssetResponse
 */
CreateComponentAssetResponse Client::createComponentAssetWithOptions(const CreateComponentAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComponentAssetName()) {
    body["ComponentAssetName"] = request.componentAssetName();
  }

  json bodyFlat = {};
  if (!!request.hasComponentAssetValues()) {
    bodyFlat["ComponentAssetValues"] = request.componentAssetValues();
  }

  if (!!request.hasComponentName()) {
    body["ComponentName"] = request.componentName();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.lang();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateComponentAsset"},
    {"version" , "2025-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComponentAssetResponse>();
}

/**
 * @summary Create Component Asset.
 *
 * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., Threat Analysis and Response Log Ingress Traffic) before using this interface.
 *
 * @param request CreateComponentAssetRequest
 * @return CreateComponentAssetResponse
 */
CreateComponentAssetResponse Client::createComponentAsset(const CreateComponentAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createComponentAssetWithOptions(request, runtime);
}

/**
 * @summary Create Playbook.
 *
 * @param request CreatePlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePlaybookResponse
 */
CreatePlaybookResponse Client::createPlaybookWithOptions(const CreatePlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.lang();
  }

  if (!!request.hasPlaybookDescription()) {
    body["PlaybookDescription"] = request.playbookDescription();
  }

  json bodyFlat = {};
  if (!!request.hasPlaybookInputConfigs()) {
    bodyFlat["PlaybookInputConfigs"] = request.playbookInputConfigs();
  }

  if (!!request.hasPlaybookName()) {
    body["PlaybookName"] = request.playbookName();
  }

  if (!!request.hasPlaybookOutputConfigs()) {
    bodyFlat["PlaybookOutputConfigs"] = request.playbookOutputConfigs();
  }

  if (!!request.hasPlaybookParamType()) {
    body["PlaybookParamType"] = request.playbookParamType();
  }

  if (!!request.hasPlaybookTaskFlow()) {
    body["PlaybookTaskFlow"] = request.playbookTaskFlow();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasSrcPlaybookUuid()) {
    body["SrcPlaybookUuid"] = request.srcPlaybookUuid();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreatePlaybook"},
    {"version" , "2025-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePlaybookResponse>();
}

/**
 * @summary Create Playbook.
 *
 * @param request CreatePlaybookRequest
 * @return CreatePlaybookResponse
 */
CreatePlaybookResponse Client::createPlaybook(const CreatePlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPlaybookWithOptions(request, runtime);
}

/**
 * @summary Delete Component Asset.
 *
 * @description Please ensure that before using this interface, you have fully understood the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., Threat Analysis and Response Log Access Traffic).
 *
 * @param request DeleteComponentAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComponentAssetResponse
 */
DeleteComponentAssetResponse Client::deleteComponentAssetWithOptions(const DeleteComponentAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComponentAssetUuid()) {
    body["ComponentAssetUuid"] = request.componentAssetUuid();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.lang();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteComponentAsset"},
    {"version" , "2025-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteComponentAssetResponse>();
}

/**
 * @summary Delete Component Asset.
 *
 * @description Please ensure that before using this interface, you have fully understood the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., Threat Analysis and Response Log Access Traffic).
 *
 * @param request DeleteComponentAssetRequest
 * @return DeleteComponentAssetResponse
 */
DeleteComponentAssetResponse Client::deleteComponentAsset(const DeleteComponentAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteComponentAssetWithOptions(request, runtime);
}

/**
 * @summary Delete Playbook.
 *
 * @param request DeletePlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePlaybookResponse
 */
DeletePlaybookResponse Client::deletePlaybookWithOptions(const DeletePlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.lang();
  }

  if (!!request.hasPlaybookUuid()) {
    body["PlaybookUuid"] = request.playbookUuid();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeletePlaybook"},
    {"version" , "2025-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePlaybookResponse>();
}

/**
 * @summary Delete Playbook.
 *
 * @param request DeletePlaybookRequest
 * @return DeletePlaybookResponse
 */
DeletePlaybookResponse Client::deletePlaybook(const DeletePlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePlaybookWithOptions(request, runtime);
}

/**
 * @summary Get playbook details.
 *
 * @param request GetPlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPlaybookResponse
 */
GetPlaybookResponse Client::getPlaybookWithOptions(const GetPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.lang();
  }

  if (!!request.hasPlaybookUuid()) {
    body["PlaybookUuid"] = request.playbookUuid();
  }

  if (!!request.hasPlaybookVersion()) {
    body["PlaybookVersion"] = request.playbookVersion();
  }

  if (!!request.hasPlaybookVersionType()) {
    body["PlaybookVersionType"] = request.playbookVersionType();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetPlaybook"},
    {"version" , "2025-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPlaybookResponse>();
}

/**
 * @summary Get playbook details.
 *
 * @param request GetPlaybookRequest
 * @return GetPlaybookResponse
 */
GetPlaybookResponse Client::getPlaybook(const GetPlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPlaybookWithOptions(request, runtime);
}

/**
 * @summary Get the list of assets configured for a component.
 *
 * @param request ListComponentAssetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComponentAssetsResponse
 */
ListComponentAssetsResponse Client::listComponentAssetsWithOptions(const ListComponentAssetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComponentAssetUuid()) {
    body["ComponentAssetUuid"] = request.componentAssetUuid();
  }

  if (!!request.hasComponentName()) {
    body["ComponentName"] = request.componentName();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.lang();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListComponentAssets"},
    {"version" , "2025-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComponentAssetsResponse>();
}

/**
 * @summary Get the list of assets configured for a component.
 *
 * @param request ListComponentAssetsRequest
 * @return ListComponentAssetsResponse
 */
ListComponentAssetsResponse Client::listComponentAssets(const ListComponentAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listComponentAssetsWithOptions(request, runtime);
}

/**
 * @summary Get Component List.
 *
 * @param request ListComponentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComponentsResponse
 */
ListComponentsResponse Client::listComponentsWithOptions(const ListComponentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComponentName()) {
    body["ComponentName"] = request.componentName();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.lang();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListComponents"},
    {"version" , "2025-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComponentsResponse>();
}

/**
 * @summary Get Component List.
 *
 * @param request ListComponentsRequest
 * @return ListComponentsResponse
 */
ListComponentsResponse Client::listComponents(const ListComponentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listComponentsWithOptions(request, runtime);
}

/**
 * @summary Get Playbook List.
 *
 * @param tmpReq ListPlaybooksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPlaybooksResponse
 */
ListPlaybooksResponse Client::listPlaybooksWithOptions(const ListPlaybooksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPlaybooksShrinkRequest request = ListPlaybooksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPlaybookParamTypes()) {
    request.setPlaybookParamTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.playbookParamTypes(), "PlaybookParamTypes", "simple"));
  }

  if (!!tmpReq.hasPlaybookUuids()) {
    request.setPlaybookUuidsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.playbookUuids(), "PlaybookUuids", "simple"));
  }

  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.lang();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrder()) {
    body["Order"] = request.order();
  }

  if (!!request.hasOrderField()) {
    body["OrderField"] = request.orderField();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasPlaybookExecutionEndTime()) {
    body["PlaybookExecutionEndTime"] = request.playbookExecutionEndTime();
  }

  if (!!request.hasPlaybookExecutionStartTime()) {
    body["PlaybookExecutionStartTime"] = request.playbookExecutionStartTime();
  }

  if (!!request.hasPlaybookName()) {
    body["PlaybookName"] = request.playbookName();
  }

  if (!!request.hasPlaybookParamTypesShrink()) {
    body["PlaybookParamTypes"] = request.playbookParamTypesShrink();
  }

  if (!!request.hasPlaybookStatus()) {
    body["PlaybookStatus"] = request.playbookStatus();
  }

  if (!!request.hasPlaybookType()) {
    body["PlaybookType"] = request.playbookType();
  }

  if (!!request.hasPlaybookUuidsShrink()) {
    body["PlaybookUuids"] = request.playbookUuidsShrink();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListPlaybooks"},
    {"version" , "2025-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPlaybooksResponse>();
}

/**
 * @summary Get Playbook List.
 *
 * @param request ListPlaybooksRequest
 * @return ListPlaybooksResponse
 */
ListPlaybooksResponse Client::listPlaybooks(const ListPlaybooksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPlaybooksWithOptions(request, runtime);
}

/**
 * @summary Update Component Asset.
 *
 * @param request UpdateComponentAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComponentAssetResponse
 */
UpdateComponentAssetResponse Client::updateComponentAssetWithOptions(const UpdateComponentAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComponentAssetName()) {
    body["ComponentAssetName"] = request.componentAssetName();
  }

  if (!!request.hasComponentAssetUuid()) {
    body["ComponentAssetUuid"] = request.componentAssetUuid();
  }

  json bodyFlat = {};
  if (!!request.hasComponentAssetValues()) {
    bodyFlat["ComponentAssetValues"] = request.componentAssetValues();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.lang();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateComponentAsset"},
    {"version" , "2025-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComponentAssetResponse>();
}

/**
 * @summary Update Component Asset.
 *
 * @param request UpdateComponentAssetRequest
 * @return UpdateComponentAssetResponse
 */
UpdateComponentAssetResponse Client::updateComponentAsset(const UpdateComponentAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateComponentAssetWithOptions(request, runtime);
}

/**
 * @summary Update Playbook.
 *
 * @param tmpReq UpdatePlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePlaybookResponse
 */
UpdatePlaybookResponse Client::updatePlaybookWithOptions(const UpdatePlaybookRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePlaybookShrinkRequest request = UpdatePlaybookShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPlaybookInputConfigs()) {
    request.setPlaybookInputConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.playbookInputConfigs(), "PlaybookInputConfigs", "json"));
  }

  if (!!tmpReq.hasPlaybookOutputConfigs()) {
    request.setPlaybookOutputConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.playbookOutputConfigs(), "PlaybookOutputConfigs", "json"));
  }

  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.lang();
  }

  if (!!request.hasPlaybookDescription()) {
    body["PlaybookDescription"] = request.playbookDescription();
  }

  if (!!request.hasPlaybookInputConfigsShrink()) {
    body["PlaybookInputConfigs"] = request.playbookInputConfigsShrink();
  }

  if (!!request.hasPlaybookName()) {
    body["PlaybookName"] = request.playbookName();
  }

  if (!!request.hasPlaybookOutputConfigsShrink()) {
    body["PlaybookOutputConfigs"] = request.playbookOutputConfigsShrink();
  }

  if (!!request.hasPlaybookParamType()) {
    body["PlaybookParamType"] = request.playbookParamType();
  }

  if (!!request.hasPlaybookTaskFlow()) {
    body["PlaybookTaskFlow"] = request.playbookTaskFlow();
  }

  if (!!request.hasPlaybookUuid()) {
    body["PlaybookUuid"] = request.playbookUuid();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdatePlaybook"},
    {"version" , "2025-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePlaybookResponse>();
}

/**
 * @summary Update Playbook.
 *
 * @param request UpdatePlaybookRequest
 * @return UpdatePlaybookResponse
 */
UpdatePlaybookResponse Client::updatePlaybook(const UpdatePlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePlaybookWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903