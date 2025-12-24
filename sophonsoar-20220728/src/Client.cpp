#include <darabonba/Core.hpp>
#include <alibabacloud/Sophonsoar20220728.hpp>
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
using namespace AlibabaCloud::Sophonsoar20220728::Models;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{

AlibabaCloud::Sophonsoar20220728::Client::Client(Config &config): OpenApiClient(config){
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
 * @summary Compares configurations between two versions of a published playbook.
 *
 * @param request ComparePlaybooksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ComparePlaybooksResponse
 */
ComparePlaybooksResponse Client::comparePlaybooksWithOptions(const ComparePlaybooksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNewPlaybookReleaseId()) {
    query["NewPlaybookReleaseId"] = request.newPlaybookReleaseId();
  }

  if (!!request.hasOldPlaybookReleaseId()) {
    query["OldPlaybookReleaseId"] = request.oldPlaybookReleaseId();
  }

  if (!!request.hasPlaybookUuid()) {
    query["PlaybookUuid"] = request.playbookUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ComparePlaybooks"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ComparePlaybooksResponse>();
}

/**
 * @summary Compares configurations between two versions of a published playbook.
 *
 * @param request ComparePlaybooksRequest
 * @return ComparePlaybooksResponse
 */
ComparePlaybooksResponse Client::comparePlaybooks(const ComparePlaybooksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return comparePlaybooksWithOptions(request, runtime);
}

/**
 * @summary Convert XML configuration.
 *
 * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the orchestration product before using this interface.
 *
 * @param request ConvertPlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertPlaybookResponse
 */
ConvertPlaybookResponse Client::convertPlaybookWithOptions(const ConvertPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRoleFor()) {
    query["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    query["RoleType"] = request.roleType();
  }

  json body = {};
  if (!!request.hasTaskflow()) {
    body["Taskflow"] = request.taskflow();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ConvertPlaybook"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConvertPlaybookResponse>();
}

/**
 * @summary Convert XML configuration.
 *
 * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the orchestration product before using this interface.
 *
 * @param request ConvertPlaybookRequest
 * @return ConvertPlaybookResponse
 */
ConvertPlaybookResponse Client::convertPlaybook(const ConvertPlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertPlaybookWithOptions(request, runtime);
}

/**
 * @summary Copies a playbook.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request CopyPlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyPlaybookResponse
 */
CopyPlaybookResponse Client::copyPlaybookWithOptions(const CopyPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRoleFor()) {
    query["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    query["RoleType"] = request.roleType();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.displayName();
  }

  if (!!request.hasReleaseVersion()) {
    body["ReleaseVersion"] = request.releaseVersion();
  }

  if (!!request.hasSourcePlaybookUuid()) {
    body["SourcePlaybookUuid"] = request.sourcePlaybookUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CopyPlaybook"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyPlaybookResponse>();
}

/**
 * @summary Copies a playbook.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request CopyPlaybookRequest
 * @return CopyPlaybookResponse
 */
CopyPlaybookResponse Client::copyPlaybook(const CopyPlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyPlaybookWithOptions(request, runtime);
}

/**
 * @summary New Playbook.
 *
 * @description Create Playbook.
 *
 * @param request CreatePlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePlaybookResponse
 */
CreatePlaybookResponse Client::createPlaybookWithOptions(const CreatePlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.displayName();
  }

  if (!!request.hasInputParams()) {
    body["InputParams"] = request.inputParams();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.lang();
  }

  if (!!request.hasOutputParams()) {
    body["OutputParams"] = request.outputParams();
  }

  if (!!request.hasTaskflowType()) {
    body["TaskflowType"] = request.taskflowType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreatePlaybook"},
    {"version" , "2022-07-28"},
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
 * @summary New Playbook.
 *
 * @description Create Playbook.
 *
 * @param request CreatePlaybookRequest
 * @return CreatePlaybookResponse
 */
CreatePlaybookResponse Client::createPlaybook(const CreatePlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPlaybookWithOptions(request, runtime);
}

/**
 * @summary Debugs a playbook.
 *
 * @param request DebugPlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DebugPlaybookResponse
 */
DebugPlaybookResponse Client::debugPlaybookWithOptions(const DebugPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.lang();
  }

  if (!!request.hasPlaybookUuid()) {
    body["PlaybookUuid"] = request.playbookUuid();
  }

  if (!!request.hasRecord()) {
    body["Record"] = request.record();
  }

  if (!!request.hasTaskflow()) {
    body["Taskflow"] = request.taskflow();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DebugPlaybook"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DebugPlaybookResponse>();
}

/**
 * @summary Debugs a playbook.
 *
 * @param request DebugPlaybookRequest
 * @return DebugPlaybookResponse
 */
DebugPlaybookResponse Client::debugPlaybook(const DebugPlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return debugPlaybookWithOptions(request, runtime);
}

/**
 * @summary Deletes the assets in a component.
 *
 * @param request DeleteComponentAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComponentAssetResponse
 */
DeleteComponentAssetResponse Client::deleteComponentAssetWithOptions(const DeleteComponentAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetId()) {
    query["AssetId"] = request.assetId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteComponentAsset"},
    {"version" , "2022-07-28"},
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
 * @summary Deletes the assets in a component.
 *
 * @param request DeleteComponentAssetRequest
 * @return DeleteComponentAssetResponse
 */
DeleteComponentAssetResponse Client::deleteComponentAsset(const DeleteComponentAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteComponentAssetWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom playbook.
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

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeletePlaybook"},
    {"version" , "2022-07-28"},
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
 * @summary Deletes a custom playbook.
 *
 * @param request DeletePlaybookRequest
 * @return DeletePlaybookResponse
 */
DeletePlaybookResponse Client::deletePlaybook(const DeletePlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePlaybookWithOptions(request, runtime);
}

/**
 * @summary Queries the metadata of assets in a component. The metadata of an asset refers to the fields that describe the asset.
 *
 * @param request DescribeComponentAssetFormRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComponentAssetFormResponse
 */
DescribeComponentAssetFormResponse Client::describeComponentAssetFormWithOptions(const DescribeComponentAssetFormRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComponentAssetForm"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComponentAssetFormResponse>();
}

/**
 * @summary Queries the metadata of assets in a component. The metadata of an asset refers to the fields that describe the asset.
 *
 * @param request DescribeComponentAssetFormRequest
 * @return DescribeComponentAssetFormResponse
 */
DescribeComponentAssetFormResponse Client::describeComponentAssetForm(const DescribeComponentAssetFormRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComponentAssetFormWithOptions(request, runtime);
}

/**
 * @summary Queries a list of assets in a component.
 *
 * @param request DescribeComponentAssetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComponentAssetsResponse
 */
DescribeComponentAssetsResponse Client::describeComponentAssetsWithOptions(const DescribeComponentAssetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComponentAssets"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComponentAssetsResponse>();
}

/**
 * @summary Queries a list of assets in a component.
 *
 * @param request DescribeComponentAssetsRequest
 * @return DescribeComponentAssetsResponse
 */
DescribeComponentAssetsResponse Client::describeComponentAssets(const DescribeComponentAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComponentAssetsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of common components that are available.
 *
 * @param request DescribeComponentListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComponentListResponse
 */
DescribeComponentListResponse Client::describeComponentListWithOptions(const DescribeComponentListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComponentList"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComponentListResponse>();
}

/**
 * @summary Queries a list of common components that are available.
 *
 * @param request DescribeComponentListRequest
 * @return DescribeComponentListResponse
 */
DescribeComponentListResponse Client::describeComponentList(const DescribeComponentListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComponentListWithOptions(request, runtime);
}

/**
 * @summary Queries a list of predefined components that are available.
 *
 * @param request DescribeComponentPlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComponentPlaybookResponse
 */
DescribeComponentPlaybookResponse Client::describeComponentPlaybookWithOptions(const DescribeComponentPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComponentPlaybook"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComponentPlaybookResponse>();
}

/**
 * @summary Queries a list of predefined components that are available.
 *
 * @param request DescribeComponentPlaybookRequest
 * @return DescribeComponentPlaybookResponse
 */
DescribeComponentPlaybookResponse Client::describeComponentPlaybook(const DescribeComponentPlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComponentPlaybookWithOptions(request, runtime);
}

/**
 * @summary Queries the JavaScript file of a component. The component uses the returned JavaScript file for page rendering.
 *
 * @param request DescribeComponentsJsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComponentsJsResponse
 */
DescribeComponentsJsResponse Client::describeComponentsJsWithOptions(const DescribeComponentsJsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComponentsJs"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComponentsJsResponse>();
}

/**
 * @summary Queries the JavaScript file of a component. The component uses the returned JavaScript file for page rendering.
 *
 * @param request DescribeComponentsJsRequest
 * @return DescribeComponentsJsResponse
 */
DescribeComponentsJsResponse Client::describeComponentsJs(const DescribeComponentsJsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComponentsJsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the published versions of a playbook after deduplication.
 *
 * @param request DescribeDistinctReleasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDistinctReleasesResponse
 */
DescribeDistinctReleasesResponse Client::describeDistinctReleasesWithOptions(const DescribeDistinctReleasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDistinctReleases"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDistinctReleasesResponse>();
}

/**
 * @summary Queries the information about the published versions of a playbook after deduplication.
 *
 * @param request DescribeDistinctReleasesRequest
 * @return DescribeDistinctReleasesResponse
 */
DescribeDistinctReleasesResponse Client::describeDistinctReleases(const DescribeDistinctReleasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDistinctReleasesWithOptions(request, runtime);
}

/**
 * @summary Queries enumeration items that are required by a cloud service.
 *
 * @param request DescribeEnumItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnumItemsResponse
 */
DescribeEnumItemsResponse Client::describeEnumItemsWithOptions(const DescribeEnumItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnumItems"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnumItemsResponse>();
}

/**
 * @summary Queries enumeration items that are required by a cloud service.
 *
 * @param request DescribeEnumItemsRequest
 * @return DescribeEnumItemsResponse
 */
DescribeEnumItemsResponse Client::describeEnumItems(const DescribeEnumItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnumItemsWithOptions(request, runtime);
}

/**
 * @summary Queries the playbooks that are available for an automatic response plan.
 *
 * @param request DescribeExecutePlaybooksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExecutePlaybooksResponse
 */
DescribeExecutePlaybooksResponse Client::describeExecutePlaybooksWithOptions(const DescribeExecutePlaybooksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExecutePlaybooks"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExecutePlaybooksResponse>();
}

/**
 * @summary Queries the playbooks that are available for an automatic response plan.
 *
 * @param request DescribeExecutePlaybooksRequest
 * @return DescribeExecutePlaybooksResponse
 */
DescribeExecutePlaybooksResponse Client::describeExecutePlaybooks(const DescribeExecutePlaybooksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExecutePlaybooksWithOptions(request, runtime);
}

/**
 * @summary Queries the global configuration information about a cloud service.
 *
 * @param request DescribeFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFieldResponse
 */
DescribeFieldResponse Client::describeFieldWithOptions(const DescribeFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeField"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFieldResponse>();
}

/**
 * @summary Queries the global configuration information about a cloud service.
 *
 * @param request DescribeFieldRequest
 * @return DescribeFieldResponse
 */
DescribeFieldResponse Client::describeField(const DescribeFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFieldWithOptions(request, runtime);
}

/**
 * @summary Queries groups of Alibaba Cloud services.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request DescribeGroupProductionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupProductionsResponse
 */
DescribeGroupProductionsResponse Client::describeGroupProductionsWithOptions(const DescribeGroupProductionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupProductions"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupProductionsResponse>();
}

/**
 * @summary Queries groups of Alibaba Cloud services.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request DescribeGroupProductionsRequest
 * @return DescribeGroupProductionsResponse
 */
DescribeGroupProductionsResponse Client::describeGroupProductions(const DescribeGroupProductionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupProductionsWithOptions(request, runtime);
}

/**
 * @summary Queries the output structure information of each node in a playbook based on the most recent running record of the playbook.
 *
 * @param request DescribeLatestRecordSchemaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLatestRecordSchemaResponse
 */
DescribeLatestRecordSchemaResponse Client::describeLatestRecordSchemaWithOptions(const DescribeLatestRecordSchemaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLatestRecordSchema"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLatestRecordSchemaResponse>();
}

/**
 * @summary Queries the output structure information of each node in a playbook based on the most recent running record of the playbook.
 *
 * @param request DescribeLatestRecordSchemaRequest
 * @return DescribeLatestRecordSchemaResponse
 */
DescribeLatestRecordSchemaResponse Client::describeLatestRecordSchema(const DescribeLatestRecordSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLatestRecordSchemaWithOptions(request, runtime);
}

/**
 * @summary Queries recommended dynamic input parameters of a component for playbook orchestration.
 *
 * @param request DescribeNodeParamTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNodeParamTagsResponse
 */
DescribeNodeParamTagsResponse Client::describeNodeParamTagsWithOptions(const DescribeNodeParamTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNodeParamTags"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNodeParamTagsResponse>();
}

/**
 * @summary Queries recommended dynamic input parameters of a component for playbook orchestration.
 *
 * @param request DescribeNodeParamTagsRequest
 * @return DescribeNodeParamTagsResponse
 */
DescribeNodeParamTagsResponse Client::describeNodeParamTags(const DescribeNodeParamTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNodeParamTagsWithOptions(request, runtime);
}

/**
 * @summary Queries notification templates.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request DescribeNotifyTemplateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNotifyTemplateListResponse
 */
DescribeNotifyTemplateListResponse Client::describeNotifyTemplateListWithOptions(const DescribeNotifyTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNotifyTemplateList"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNotifyTemplateListResponse>();
}

/**
 * @summary Queries notification templates.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request DescribeNotifyTemplateListRequest
 * @return DescribeNotifyTemplateListResponse
 */
DescribeNotifyTemplateListResponse Client::describeNotifyTemplateList(const DescribeNotifyTemplateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNotifyTemplateListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an API operation.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request DescribeOpenApiInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOpenApiInfoResponse
 */
DescribeOpenApiInfoResponse Client::describeOpenApiInfoWithOptions(const DescribeOpenApiInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOpenApiInfo"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOpenApiInfoResponse>();
}

/**
 * @summary Queries the details of an API operation.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request DescribeOpenApiInfoRequest
 * @return DescribeOpenApiInfoResponse
 */
DescribeOpenApiInfoResponse Client::describeOpenApiInfo(const DescribeOpenApiInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOpenApiInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the API operations of an Alibaba Cloud service.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or the pricing for log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request DescribeOpenApiListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOpenApiListResponse
 */
DescribeOpenApiListResponse Client::describeOpenApiListWithOptions(const DescribeOpenApiListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOpenApiList"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOpenApiListResponse>();
}

/**
 * @summary Queries the API operations of an Alibaba Cloud service.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or the pricing for log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request DescribeOpenApiListRequest
 * @return DescribeOpenApiListResponse
 */
DescribeOpenApiListResponse Client::describeOpenApiList(const DescribeOpenApiListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOpenApiListWithOptions(request, runtime);
}

/**
 * @summary Queries the XML configuration of a playbook.
 *
 * @param request DescribePlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlaybookResponse
 */
DescribePlaybookResponse Client::describePlaybookWithOptions(const DescribePlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePlaybook"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePlaybookResponse>();
}

/**
 * @summary Queries the XML configuration of a playbook.
 *
 * @param request DescribePlaybookRequest
 * @return DescribePlaybookResponse
 */
DescribePlaybookResponse Client::describePlaybook(const DescribePlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlaybookWithOptions(request, runtime);
}

/**
 * @summary Queries the input and output parameter configurations of a playbook.
 *
 * @param request DescribePlaybookInputOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlaybookInputOutputResponse
 */
DescribePlaybookInputOutputResponse Client::describePlaybookInputOutputWithOptions(const DescribePlaybookInputOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePlaybookInputOutput"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePlaybookInputOutputResponse>();
}

/**
 * @summary Queries the input and output parameter configurations of a playbook.
 *
 * @param request DescribePlaybookInputOutputRequest
 * @return DescribePlaybookInputOutputResponse
 */
DescribePlaybookInputOutputResponse Client::describePlaybookInputOutput(const DescribePlaybookInputOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlaybookInputOutputWithOptions(request, runtime);
}

/**
 * @summary Queries the metrics of a playbook. The metrics include the playbook name, playbook description, the number of times that the playbook is run, and the failure rate of the playbook.
 *
 * @param request DescribePlaybookMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlaybookMetricsResponse
 */
DescribePlaybookMetricsResponse Client::describePlaybookMetricsWithOptions(const DescribePlaybookMetricsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePlaybookMetrics"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePlaybookMetricsResponse>();
}

/**
 * @summary Queries the metrics of a playbook. The metrics include the playbook name, playbook description, the number of times that the playbook is run, and the failure rate of the playbook.
 *
 * @param request DescribePlaybookMetricsRequest
 * @return DescribePlaybookMetricsResponse
 */
DescribePlaybookMetricsResponse Client::describePlaybookMetrics(const DescribePlaybookMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlaybookMetricsWithOptions(request, runtime);
}

/**
 * @summary Queries the historical output data of a component node.
 *
 * @param request DescribePlaybookNodesOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlaybookNodesOutputResponse
 */
DescribePlaybookNodesOutputResponse Client::describePlaybookNodesOutputWithOptions(const DescribePlaybookNodesOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePlaybookNodesOutput"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePlaybookNodesOutputResponse>();
}

/**
 * @summary Queries the historical output data of a component node.
 *
 * @param request DescribePlaybookNodesOutputRequest
 * @return DescribePlaybookNodesOutputResponse
 */
DescribePlaybookNodesOutputResponse Client::describePlaybookNodesOutput(const DescribePlaybookNodesOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlaybookNodesOutputWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics of Security Orchestration Automation Response (SOAR), such as the numbers of created and enabled playbooks.
 *
 * @param request DescribePlaybookNumberMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlaybookNumberMetricsResponse
 */
DescribePlaybookNumberMetricsResponse Client::describePlaybookNumberMetricsWithOptions(const DescribePlaybookNumberMetricsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePlaybookNumberMetrics"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePlaybookNumberMetricsResponse>();
}

/**
 * @summary Queries the statistics of Security Orchestration Automation Response (SOAR), such as the numbers of created and enabled playbooks.
 *
 * @param request DescribePlaybookNumberMetricsRequest
 * @return DescribePlaybookNumberMetricsResponse
 */
DescribePlaybookNumberMetricsResponse Client::describePlaybookNumberMetrics(const DescribePlaybookNumberMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlaybookNumberMetricsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the published versions of a playbook.
 *
 * @param request DescribePlaybookReleasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlaybookReleasesResponse
 */
DescribePlaybookReleasesResponse Client::describePlaybookReleasesWithOptions(const DescribePlaybookReleasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePlaybookReleases"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePlaybookReleasesResponse>();
}

/**
 * @summary Queries the information about the published versions of a playbook.
 *
 * @param request DescribePlaybookReleasesRequest
 * @return DescribePlaybookReleasesResponse
 */
DescribePlaybookReleasesResponse Client::describePlaybookReleases(const DescribePlaybookReleasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlaybookReleasesWithOptions(request, runtime);
}

/**
 * @summary Retrieve the list of playbooks.
 *
 * @param request DescribePlaybooksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlaybooksResponse
 */
DescribePlaybooksResponse Client::describePlaybooksWithOptions(const DescribePlaybooksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePlaybooks"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePlaybooksResponse>();
}

/**
 * @summary Retrieve the list of playbooks.
 *
 * @param request DescribePlaybooksRequest
 * @return DescribePlaybooksResponse
 */
DescribePlaybooksResponse Client::describePlaybooks(const DescribePlaybooksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlaybooksWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an API operation.
 *
 * @param request DescribePopApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePopApiResponse
 */
DescribePopApiResponse Client::describePopApiWithOptions(const DescribePopApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePopApi"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePopApiResponse>();
}

/**
 * @summary Queries the details of an API operation.
 *
 * @param request DescribePopApiRequest
 * @return DescribePopApiResponse
 */
DescribePopApiResponse Client::describePopApi(const DescribePopApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePopApiWithOptions(request, runtime);
}

/**
 * @summary Queries statistics.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request DescribeProcessStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProcessStatisticsResponse
 */
DescribeProcessStatisticsResponse Client::describeProcessStatisticsWithOptions(const DescribeProcessStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProcessStatistics"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProcessStatisticsResponse>();
}

/**
 * @summary Queries statistics.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request DescribeProcessStatisticsRequest
 * @return DescribeProcessStatisticsResponse
 */
DescribeProcessStatisticsResponse Client::describeProcessStatistics(const DescribeProcessStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProcessStatisticsWithOptions(request, runtime);
}

/**
 * @summary Query the number of associated disposal tasks based on the entity UUID.
 *
 * @param request DescribeProcessTaskCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProcessTaskCountResponse
 */
DescribeProcessTaskCountResponse Client::describeProcessTaskCountWithOptions(const DescribeProcessTaskCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProcessTaskCount"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProcessTaskCountResponse>();
}

/**
 * @summary Query the number of associated disposal tasks based on the entity UUID.
 *
 * @param request DescribeProcessTaskCountRequest
 * @return DescribeProcessTaskCountResponse
 */
DescribeProcessTaskCountResponse Client::describeProcessTaskCount(const DescribeProcessTaskCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProcessTaskCountWithOptions(request, runtime);
}

/**
 * @summary Queries the information about handling tasks. When you use Security Orchestration Automation Response (SOAR) to handle events, handling tasks are generated in the handling center.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request DescribeProcessTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProcessTasksResponse
 */
DescribeProcessTasksResponse Client::describeProcessTasksWithOptions(const DescribeProcessTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasEntityName()) {
    query["EntityName"] = request.entityName();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.entityType();
  }

  if (!!request.hasEntityUuid()) {
    query["EntityUuid"] = request.entityUuid();
  }

  if (!!request.hasEventUuid()) {
    query["EventUuid"] = request.eventUuid();
  }

  if (!!request.hasOrderField()) {
    query["OrderField"] = request.orderField();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParamContent()) {
    query["ParamContent"] = request.paramContent();
  }

  if (!!request.hasProcessActionEnd()) {
    query["ProcessActionEnd"] = request.processActionEnd();
  }

  if (!!request.hasProcessActionStart()) {
    query["ProcessActionStart"] = request.processActionStart();
  }

  if (!!request.hasProcessRemoveEnd()) {
    query["ProcessRemoveEnd"] = request.processRemoveEnd();
  }

  if (!!request.hasProcessRemoveStart()) {
    query["ProcessRemoveStart"] = request.processRemoveStart();
  }

  if (!!request.hasProcessStrategyUuid()) {
    query["ProcessStrategyUuid"] = request.processStrategyUuid();
  }

  if (!!request.hasReqUuid()) {
    query["ReqUuid"] = request.reqUuid();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.sceneCode();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskStatus()) {
    query["TaskStatus"] = request.taskStatus();
  }

  if (!!request.hasTriggerSource()) {
    query["TriggerSource"] = request.triggerSource();
  }

  if (!!request.hasYunCode()) {
    query["YunCode"] = request.yunCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProcessTasks"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProcessTasksResponse>();
}

/**
 * @summary Queries the information about handling tasks. When you use Security Orchestration Automation Response (SOAR) to handle events, handling tasks are generated in the handling center.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request DescribeProcessTasksRequest
 * @return DescribeProcessTasksResponse
 */
DescribeProcessTasksResponse Client::describeProcessTasks(const DescribeProcessTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProcessTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the data that is returned when a component initiates an action in a playbook task.
 *
 * @param request DescribeSoarRecordActionOutputListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSoarRecordActionOutputListResponse
 */
DescribeSoarRecordActionOutputListResponse Client::describeSoarRecordActionOutputListWithOptions(const DescribeSoarRecordActionOutputListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSoarRecordActionOutputList"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSoarRecordActionOutputListResponse>();
}

/**
 * @summary Queries the data that is returned when a component initiates an action in a playbook task.
 *
 * @param request DescribeSoarRecordActionOutputListRequest
 * @return DescribeSoarRecordActionOutputListResponse
 */
DescribeSoarRecordActionOutputListResponse Client::describeSoarRecordActionOutputList(const DescribeSoarRecordActionOutputListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSoarRecordActionOutputListWithOptions(request, runtime);
}

/**
 * @summary Queries the input and output data of a component action. You can call this operation after a playbook is run.
 *
 * @param request DescribeSoarRecordInOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSoarRecordInOutputResponse
 */
DescribeSoarRecordInOutputResponse Client::describeSoarRecordInOutputWithOptions(const DescribeSoarRecordInOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSoarRecordInOutput"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSoarRecordInOutputResponse>();
}

/**
 * @summary Queries the input and output data of a component action. You can call this operation after a playbook is run.
 *
 * @param request DescribeSoarRecordInOutputRequest
 * @return DescribeSoarRecordInOutputResponse
 */
DescribeSoarRecordInOutputResponse Client::describeSoarRecordInOutput(const DescribeSoarRecordInOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSoarRecordInOutputWithOptions(request, runtime);
}

/**
 * @summary Get the execution records of a playbook.
 *
 * @param request DescribeSoarRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSoarRecordsResponse
 */
DescribeSoarRecordsResponse Client::describeSoarRecordsWithOptions(const DescribeSoarRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSoarRecords"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSoarRecordsResponse>();
}

/**
 * @summary Get the execution records of a playbook.
 *
 * @param request DescribeSoarRecordsRequest
 * @return DescribeSoarRecordsResponse
 */
DescribeSoarRecordsResponse Client::describeSoarRecords(const DescribeSoarRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSoarRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the execution records of a component during the running of a playbook.
 *
 * @param request DescribeSoarTaskAndActionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSoarTaskAndActionsResponse
 */
DescribeSoarTaskAndActionsResponse Client::describeSoarTaskAndActionsWithOptions(const DescribeSoarTaskAndActionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSoarTaskAndActions"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSoarTaskAndActionsResponse>();
}

/**
 * @summary Queries the execution records of a component during the running of a playbook.
 *
 * @param request DescribeSoarTaskAndActionsRequest
 * @return DescribeSoarTaskAndActionsResponse
 */
DescribeSoarTaskAndActionsResponse Client::describeSoarTaskAndActions(const DescribeSoarTaskAndActionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSoarTaskAndActionsWithOptions(request, runtime);
}

/**
 * @summary Queries the commands that can be run to obtain objects.
 *
 * @param request DescribeSophonCommandsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSophonCommandsResponse
 */
DescribeSophonCommandsResponse Client::describeSophonCommandsWithOptions(const DescribeSophonCommandsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSophonCommands"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSophonCommandsResponse>();
}

/**
 * @summary Queries the commands that can be run to obtain objects.
 *
 * @param request DescribeSophonCommandsRequest
 * @return DescribeSophonCommandsResponse
 */
DescribeSophonCommandsResponse Client::describeSophonCommands(const DescribeSophonCommandsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSophonCommandsWithOptions(request, runtime);
}

/**
 * @summary Query OpenApi List of Cloud Vendors.
 *
 * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., threat analysis and response log access traffic) before using this interface.
 *
 * @param request DescribeVendorApiListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVendorApiListResponse
 */
DescribeVendorApiListResponse Client::describeVendorApiListWithOptions(const DescribeVendorApiListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.apiName();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasVendorCode()) {
    query["VendorCode"] = request.vendorCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVendorApiList"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVendorApiListResponse>();
}

/**
 * @summary Query OpenApi List of Cloud Vendors.
 *
 * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., threat analysis and response log access traffic) before using this interface.
 *
 * @param request DescribeVendorApiListRequest
 * @return DescribeVendorApiListResponse
 */
DescribeVendorApiListResponse Client::describeVendorApiList(const DescribeVendorApiListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVendorApiListWithOptions(request, runtime);
}

/**
 * @summary Queries the operational logs of a Python3 script by using the UUID that is returned when the script is run. The UUID is specified by requestUuid.
 *
 * @param request DescriberPython3ScriptLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescriberPython3ScriptLogsResponse
 */
DescriberPython3ScriptLogsResponse Client::describerPython3ScriptLogsWithOptions(const DescriberPython3ScriptLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescriberPython3ScriptLogs"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescriberPython3ScriptLogsResponse>();
}

/**
 * @summary Queries the operational logs of a Python3 script by using the UUID that is returned when the script is run. The UUID is specified by requestUuid.
 *
 * @param request DescriberPython3ScriptLogsRequest
 * @return DescriberPython3ScriptLogsResponse
 */
DescriberPython3ScriptLogsResponse Client::describerPython3ScriptLogs(const DescriberPython3ScriptLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describerPython3ScriptLogsWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about the asset that is configured for a component.
 *
 * @param request ModifyComponentAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyComponentAssetResponse
 */
ModifyComponentAssetResponse Client::modifyComponentAssetWithOptions(const ModifyComponentAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetConfig()) {
    query["AssetConfig"] = request.assetConfig();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyComponentAsset"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyComponentAssetResponse>();
}

/**
 * @summary Modifies the information about the asset that is configured for a component.
 *
 * @param request ModifyComponentAssetRequest
 * @return ModifyComponentAssetResponse
 */
ModifyComponentAssetResponse Client::modifyComponentAsset(const ModifyComponentAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyComponentAssetWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a playbook.
 *
 * @param request ModifyPlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPlaybookResponse
 */
ModifyPlaybookResponse Client::modifyPlaybookWithOptions(const ModifyPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.displayName();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.lang();
  }

  if (!!request.hasPlaybookUuid()) {
    body["PlaybookUuid"] = request.playbookUuid();
  }

  if (!!request.hasTaskflow()) {
    body["Taskflow"] = request.taskflow();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyPlaybook"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPlaybookResponse>();
}

/**
 * @summary Modifies the configuration of a playbook.
 *
 * @param request ModifyPlaybookRequest
 * @return ModifyPlaybookResponse
 */
ModifyPlaybookResponse Client::modifyPlaybook(const ModifyPlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPlaybookWithOptions(request, runtime);
}

/**
 * @summary Modifies the input and output parameters of a playbook.
 *
 * @param request ModifyPlaybookInputOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPlaybookInputOutputResponse
 */
ModifyPlaybookInputOutputResponse Client::modifyPlaybookInputOutputWithOptions(const ModifyPlaybookInputOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExeConfig()) {
    body["ExeConfig"] = request.exeConfig();
  }

  if (!!request.hasInputParams()) {
    body["InputParams"] = request.inputParams();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.lang();
  }

  if (!!request.hasOutputParams()) {
    body["OutputParams"] = request.outputParams();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.paramType();
  }

  if (!!request.hasPlaybookUuid()) {
    body["PlaybookUuid"] = request.playbookUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyPlaybookInputOutput"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPlaybookInputOutputResponse>();
}

/**
 * @summary Modifies the input and output parameters of a playbook.
 *
 * @param request ModifyPlaybookInputOutputRequest
 * @return ModifyPlaybookInputOutputResponse
 */
ModifyPlaybookInputOutputResponse Client::modifyPlaybookInputOutput(const ModifyPlaybookInputOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPlaybookInputOutputWithOptions(request, runtime);
}

/**
 * @summary Publishes the playbook. After the playbook is published, the playbook runs based on the new logic.
 *
 * @param request PublishPlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishPlaybookResponse
 */
PublishPlaybookResponse Client::publishPlaybookWithOptions(const PublishPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasPlaybookUuid()) {
    body["PlaybookUuid"] = request.playbookUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PublishPlaybook"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishPlaybookResponse>();
}

/**
 * @summary Publishes the playbook. After the playbook is published, the playbook runs based on the new logic.
 *
 * @param request PublishPlaybookRequest
 * @return PublishPlaybookResponse
 */
PublishPlaybookResponse Client::publishPlaybook(const PublishPlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishPlaybookWithOptions(request, runtime);
}

/**
 * @summary Queries all playbooks at a time.
 *
 * @param request QueryTreeDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTreeDataResponse
 */
QueryTreeDataResponse Client::queryTreeDataWithOptions(const QueryTreeDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTreeData"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTreeDataResponse>();
}

/**
 * @summary Queries all playbooks at a time.
 *
 * @param request QueryTreeDataRequest
 * @return QueryTreeDataResponse
 */
QueryTreeDataResponse Client::queryTreeData(const QueryTreeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTreeDataWithOptions(request, runtime);
}

/**
 * @summary Rolls back a playbook to a specific version. You can determine whether to publish the new playbook version during the rollback.
 *
 * @param request RevertPlaybookReleaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevertPlaybookReleaseResponse
 */
RevertPlaybookReleaseResponse Client::revertPlaybookReleaseWithOptions(const RevertPlaybookReleaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIsPublish()) {
    body["IsPublish"] = request.isPublish();
  }

  if (!!request.hasPlayReleaseId()) {
    body["PlayReleaseId"] = request.playReleaseId();
  }

  if (!!request.hasPlaybookUuid()) {
    body["PlaybookUuid"] = request.playbookUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RevertPlaybookRelease"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevertPlaybookReleaseResponse>();
}

/**
 * @summary Rolls back a playbook to a specific version. You can determine whether to publish the new playbook version during the rollback.
 *
 * @param request RevertPlaybookReleaseRequest
 * @return RevertPlaybookReleaseResponse
 */
RevertPlaybookReleaseResponse Client::revertPlaybookRelease(const RevertPlaybookReleaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revertPlaybookReleaseWithOptions(request, runtime);
}

/**
 * @summary Runs the email notification component to send messages.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request RunNotifyComponentWithEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunNotifyComponentWithEmailResponse
 */
RunNotifyComponentWithEmailResponse Client::runNotifyComponentWithEmailWithOptions(const RunNotifyComponentWithEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionName()) {
    query["ActionName"] = request.actionName();
  }

  if (!!request.hasAssetId()) {
    query["AssetId"] = request.assetId();
  }

  if (!!request.hasComponentName()) {
    query["ComponentName"] = request.componentName();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNodeName()) {
    query["NodeName"] = request.nodeName();
  }

  if (!!request.hasPlaybookUuid()) {
    query["PlaybookUuid"] = request.playbookUuid();
  }

  if (!!request.hasReceivers()) {
    query["Receivers"] = request.receivers();
  }

  if (!!request.hasRoleFor()) {
    query["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    query["RoleType"] = request.roleType();
  }

  if (!!request.hasSubject()) {
    query["Subject"] = request.subject();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunNotifyComponentWithEmail"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunNotifyComponentWithEmailResponse>();
}

/**
 * @summary Runs the email notification component to send messages.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request RunNotifyComponentWithEmailRequest
 * @return RunNotifyComponentWithEmailResponse
 */
RunNotifyComponentWithEmailResponse Client::runNotifyComponentWithEmail(const RunNotifyComponentWithEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runNotifyComponentWithEmailWithOptions(request, runtime);
}

/**
 * @summary Execute Notification Component - Send Message via Message Center.
 *
 * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., Threat Analysis and Response Log Access Traffic) before using this interface.
 *
 * @param request RunNotifyComponentWithMessageCenterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunNotifyComponentWithMessageCenterResponse
 */
RunNotifyComponentWithMessageCenterResponse Client::runNotifyComponentWithMessageCenterWithOptions(const RunNotifyComponentWithMessageCenterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionName()) {
    query["ActionName"] = request.actionName();
  }

  if (!!request.hasAliuid()) {
    query["Aliuid"] = request.aliuid();
  }

  if (!!request.hasAssetId()) {
    query["AssetId"] = request.assetId();
  }

  if (!!request.hasChannelTypeList()) {
    query["ChannelTypeList"] = request.channelTypeList();
  }

  if (!!request.hasComponentName()) {
    query["ComponentName"] = request.componentName();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.eventId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNodeName()) {
    query["NodeName"] = request.nodeName();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasPlaybookUuid()) {
    query["PlaybookUuid"] = request.playbookUuid();
  }

  if (!!request.hasRoleFor()) {
    query["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    query["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunNotifyComponentWithMessageCenter"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunNotifyComponentWithMessageCenterResponse>();
}

/**
 * @summary Execute Notification Component - Send Message via Message Center.
 *
 * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., Threat Analysis and Response Log Access Traffic) before using this interface.
 *
 * @param request RunNotifyComponentWithMessageCenterRequest
 * @return RunNotifyComponentWithMessageCenterResponse
 */
RunNotifyComponentWithMessageCenterResponse Client::runNotifyComponentWithMessageCenter(const RunNotifyComponentWithMessageCenterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runNotifyComponentWithMessageCenterWithOptions(request, runtime);
}

/**
 * @summary Runs the webhook notification component to send messages.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request RunNotifyComponentWithWebhookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunNotifyComponentWithWebhookResponse
 */
RunNotifyComponentWithWebhookResponse Client::runNotifyComponentWithWebhookWithOptions(const RunNotifyComponentWithWebhookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionName()) {
    query["ActionName"] = request.actionName();
  }

  if (!!request.hasAssetId()) {
    query["AssetId"] = request.assetId();
  }

  if (!!request.hasComponentName()) {
    query["ComponentName"] = request.componentName();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMsgType()) {
    query["MsgType"] = request.msgType();
  }

  if (!!request.hasNodeName()) {
    query["NodeName"] = request.nodeName();
  }

  if (!!request.hasPlaybookUuid()) {
    query["PlaybookUuid"] = request.playbookUuid();
  }

  if (!!request.hasRoleFor()) {
    query["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    query["RoleType"] = request.roleType();
  }

  if (!!request.hasSecret()) {
    query["Secret"] = request.secret();
  }

  if (!!request.hasWebhook()) {
    query["Webhook"] = request.webhook();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunNotifyComponentWithWebhook"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunNotifyComponentWithWebhookResponse>();
}

/**
 * @summary Runs the webhook notification component to send messages.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR) or pricing for the log data added to the Cloud Threat Detection and Response (CTDR) feature. For more information, see [Pricing](https://www.aliyun.com/price/product#/sas/detail/sas).
 *
 * @param request RunNotifyComponentWithWebhookRequest
 * @return RunNotifyComponentWithWebhookResponse
 */
RunNotifyComponentWithWebhookResponse Client::runNotifyComponentWithWebhook(const RunNotifyComponentWithWebhookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runNotifyComponentWithWebhookWithOptions(request, runtime);
}

/**
 * @summary Submits and runs a Python3 script. You can call this operation only for data processing.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.alibabacloud.com/en/pricing-calculator?_p_lc=1&spm=openapi-amp.newDocPublishment.0.0.4c41281fWhbdPa#/commodity/vm_intl).
 *
 * @param request RunPython3ScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunPython3ScriptResponse
 */
RunPython3ScriptResponse Client::runPython3ScriptWithOptions(const RunPython3ScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPythonVersion()) {
    query["PythonVersion"] = request.pythonVersion();
  }

  json body = {};
  if (!!request.hasNodeName()) {
    body["NodeName"] = request.nodeName();
  }

  if (!!request.hasParams()) {
    body["Params"] = request.params();
  }

  if (!!request.hasPlaybookUuid()) {
    body["PlaybookUuid"] = request.playbookUuid();
  }

  if (!!request.hasPythonScript()) {
    body["PythonScript"] = request.pythonScript();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunPython3Script"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunPython3ScriptResponse>();
}

/**
 * @summary Submits and runs a Python3 script. You can call this operation only for data processing.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.alibabacloud.com/en/pricing-calculator?_p_lc=1&spm=openapi-amp.newDocPublishment.0.0.4c41281fWhbdPa#/commodity/vm_intl).
 *
 * @param request RunPython3ScriptRequest
 * @return RunPython3ScriptResponse
 */
RunPython3ScriptResponse Client::runPython3Script(const RunPython3ScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runPython3ScriptWithOptions(request, runtime);
}

/**
 * @summary Triggers an enabled custom playbook or a predefined playbook.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.alibabacloud.com/en/pricing-calculator?_p_lc=1&spm=a2796.7960336.3034855210.1.7adab91arMeIx2#/commodity/vm_intl).
 *
 * @param request TriggerPlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TriggerPlaybookResponse
 */
TriggerPlaybookResponse Client::triggerPlaybookWithOptions(const TriggerPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInputParam()) {
    body["InputParam"] = request.inputParam();
  }

  if (!!request.hasPlaybookUuid()) {
    body["PlaybookUuid"] = request.playbookUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TriggerPlaybook"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TriggerPlaybookResponse>();
}

/**
 * @summary Triggers an enabled custom playbook or a predefined playbook.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.alibabacloud.com/en/pricing-calculator?_p_lc=1&spm=a2796.7960336.3034855210.1.7adab91arMeIx2#/commodity/vm_intl).
 *
 * @param request TriggerPlaybookRequest
 * @return TriggerPlaybookResponse
 */
TriggerPlaybookResponse Client::triggerPlaybook(const TriggerPlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return triggerPlaybookWithOptions(request, runtime);
}

/**
 * @summary Performs an action on a handling task that is generated by the handling center when an event is handled by using Security Orchestration Automation Response (SOAR). For example, you can call this operation to cancel blocking or isolation, or retry blocking.
 *
 * @param request TriggerProcessTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TriggerProcessTaskResponse
 */
TriggerProcessTaskResponse Client::triggerProcessTaskWithOptions(const TriggerProcessTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionType()) {
    query["ActionType"] = request.actionType();
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TriggerProcessTask"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TriggerProcessTaskResponse>();
}

/**
 * @summary Performs an action on a handling task that is generated by the handling center when an event is handled by using Security Orchestration Automation Response (SOAR). For example, you can call this operation to cancel blocking or isolation, or retry blocking.
 *
 * @param request TriggerProcessTaskRequest
 * @return TriggerProcessTaskResponse
 */
TriggerProcessTaskResponse Client::triggerProcessTask(const TriggerProcessTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return triggerProcessTaskWithOptions(request, runtime);
}

/**
 * @summary Triggers a playbook or a command.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.alibabacloud.com/en/pricing-calculator?_p_lc=1&spm=a2796.7960336.3034855210.1.7adab91arMeIx2#/commodity/vm_intl).
 *
 * @param request TriggerSophonPlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TriggerSophonPlaybookResponse
 */
TriggerSophonPlaybookResponse Client::triggerSophonPlaybookWithOptions(const TriggerSophonPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommandName()) {
    query["CommandName"] = request.commandName();
  }

  if (!!request.hasInputParams()) {
    query["InputParams"] = request.inputParams();
  }

  if (!!request.hasSophonTaskId()) {
    query["SophonTaskId"] = request.sophonTaskId();
  }

  if (!!request.hasTriggerType()) {
    query["TriggerType"] = request.triggerType();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TriggerSophonPlaybook"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TriggerSophonPlaybookResponse>();
}

/**
 * @summary Triggers a playbook or a command.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and pricing of Security Orchestration Automation Response (SOAR). For more information, see [Pricing](https://www.alibabacloud.com/en/pricing-calculator?_p_lc=1&spm=a2796.7960336.3034855210.1.7adab91arMeIx2#/commodity/vm_intl).
 *
 * @param request TriggerSophonPlaybookRequest
 * @return TriggerSophonPlaybookResponse
 */
TriggerSophonPlaybookResponse Client::triggerSophonPlaybook(const TriggerSophonPlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return triggerSophonPlaybookWithOptions(request, runtime);
}

/**
 * @summary Checks whether the configuration of the playbook is correct and whether the logic of the orchestration is reasonable.
 *
 * @param request VerifyPlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyPlaybookResponse
 */
VerifyPlaybookResponse Client::verifyPlaybookWithOptions(const VerifyPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPlaybookUuid()) {
    body["PlaybookUuid"] = request.playbookUuid();
  }

  if (!!request.hasTaskFlow()) {
    body["TaskFlow"] = request.taskFlow();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "VerifyPlaybook"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyPlaybookResponse>();
}

/**
 * @summary Checks whether the configuration of the playbook is correct and whether the logic of the orchestration is reasonable.
 *
 * @param request VerifyPlaybookRequest
 * @return VerifyPlaybookResponse
 */
VerifyPlaybookResponse Client::verifyPlaybook(const VerifyPlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyPlaybookWithOptions(request, runtime);
}

/**
 * @summary Checks whether the syntax of a Python code snippet is correct.
 *
 * @param request VerifyPythonFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyPythonFileResponse
 */
VerifyPythonFileResponse Client::verifyPythonFileWithOptions(const VerifyPythonFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "VerifyPythonFile"},
    {"version" , "2022-07-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyPythonFileResponse>();
}

/**
 * @summary Checks whether the syntax of a Python code snippet is correct.
 *
 * @param request VerifyPythonFileRequest
 * @return VerifyPythonFileResponse
 */
VerifyPythonFileResponse Client::verifyPythonFile(const VerifyPythonFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyPythonFileWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728