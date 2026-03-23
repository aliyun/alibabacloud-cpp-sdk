#include <darabonba/Core.hpp>
#include <alibabacloud/CloudwifiPop20191118.hpp>
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
using namespace AlibabaCloud::CloudwifiPop20191118::Models;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{

AlibabaCloud::CloudwifiPop20191118::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "cloudwf.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("cloudwifi-pop", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param tmpReq AddApListToApgroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddApListToApgroupResponse
 */
AddApListToApgroupResponse Client::addApListToApgroupWithOptions(const AddApListToApgroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddApListToApgroupShrinkRequest request = AddApListToApgroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApMacList()) {
    request.setApMacListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApMacList(), "ApMacList", "json"));
  }

  json query = {};
  if (!!request.hasApGroupId()) {
    query["ApGroupId"] = request.getApGroupId();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  json body = {};
  if (!!request.hasApMacListShrink()) {
    body["ApMacList"] = request.getApMacListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddApListToApgroup"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddApListToApgroupResponse>();
}

/**
 * @param request AddApListToApgroupRequest
 * @return AddApListToApgroupResponse
 */
AddApListToApgroupResponse Client::addApListToApgroup(const AddApListToApgroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addApListToApgroupWithOptions(request, runtime);
}

/**
 * @summary 删除设备的三方app
 *
 * @param request DelApThirdAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DelApThirdAppResponse
 */
DelApThirdAppResponse Client::delApThirdAppWithOptions(const DelApThirdAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApAssetId()) {
    query["ApAssetId"] = request.getApAssetId();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMac()) {
    query["Mac"] = request.getMac();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DelApThirdApp"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DelApThirdAppResponse>();
}

/**
 * @summary 删除设备的三方app
 *
 * @param request DelApThirdAppRequest
 * @return DelApThirdAppResponse
 */
DelApThirdAppResponse Client::delApThirdApp(const DelApThirdAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return delApThirdAppWithOptions(request, runtime);
}

/**
 * @param request DeleteApSsidConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApSsidConfigResponse
 */
DeleteApSsidConfigResponse Client::deleteApSsidConfigWithOptions(const DeleteApSsidConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApMac()) {
    query["ApMac"] = request.getApMac();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasRadioIndex()) {
    query["RadioIndex"] = request.getRadioIndex();
  }

  if (!!request.hasSsid()) {
    query["Ssid"] = request.getSsid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApSsidConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApSsidConfigResponse>();
}

/**
 * @param request DeleteApSsidConfigRequest
 * @return DeleteApSsidConfigResponse
 */
DeleteApSsidConfigResponse Client::deleteApSsidConfig(const DeleteApSsidConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApSsidConfigWithOptions(request, runtime);
}

/**
 * @param request DeleteApgroupConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApgroupConfigResponse
 */
DeleteApgroupConfigResponse Client::deleteApgroupConfigWithOptions(const DeleteApgroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApGroupUUId()) {
    query["ApGroupUUId"] = request.getApGroupUUId();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApgroupConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApgroupConfigResponse>();
}

/**
 * @param request DeleteApgroupConfigRequest
 * @return DeleteApgroupConfigResponse
 */
DeleteApgroupConfigResponse Client::deleteApgroupConfig(const DeleteApgroupConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApgroupConfigWithOptions(request, runtime);
}

/**
 * @summary 删除AP组上的SSID
 *
 * @param request DeleteApgroupSsidConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApgroupSsidConfigResponse
 */
DeleteApgroupSsidConfigResponse Client::deleteApgroupSsidConfigWithOptions(const DeleteApgroupSsidConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApgroupId()) {
    query["ApgroupId"] = request.getApgroupId();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApgroupSsidConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApgroupSsidConfigResponse>();
}

/**
 * @summary 删除AP组上的SSID
 *
 * @param request DeleteApgroupSsidConfigRequest
 * @return DeleteApgroupSsidConfigResponse
 */
DeleteApgroupSsidConfigResponse Client::deleteApgroupSsidConfig(const DeleteApgroupSsidConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApgroupSsidConfigWithOptions(request, runtime);
}

/**
 * @summary 删除设备组的三方app
 *
 * @param request DeleteApgroupThirdAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApgroupThirdAppResponse
 */
DeleteApgroupThirdAppResponse Client::deleteApgroupThirdAppWithOptions(const DeleteApgroupThirdAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApgroupThirdApp"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApgroupThirdAppResponse>();
}

/**
 * @summary 删除设备组的三方app
 *
 * @param request DeleteApgroupThirdAppRequest
 * @return DeleteApgroupThirdAppResponse
 */
DeleteApgroupThirdAppResponse Client::deleteApgroupThirdApp(const DeleteApgroupThirdAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApgroupThirdAppWithOptions(request, runtime);
}

/**
 * @param request DeleteNetDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetDeviceInfoResponse
 */
DeleteNetDeviceInfoResponse Client::deleteNetDeviceInfoWithOptions(const DeleteNetDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNetDeviceInfo"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetDeviceInfoResponse>();
}

/**
 * @param request DeleteNetDeviceInfoRequest
 * @return DeleteNetDeviceInfoResponse
 */
DeleteNetDeviceInfoResponse Client::deleteNetDeviceInfo(const DeleteNetDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetDeviceInfoWithOptions(request, runtime);
}

/**
 * @summary 配置设备组的三方app
 *
 * @param request EditApgroupThirdAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditApgroupThirdAppResponse
 */
EditApgroupThirdAppResponse Client::editApgroupThirdAppWithOptions(const EditApgroupThirdAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApgroupId()) {
    query["ApgroupId"] = request.getApgroupId();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppData()) {
    query["AppData"] = request.getAppData();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasApplyToSubGroup()) {
    query["ApplyToSubGroup"] = request.getApplyToSubGroup();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasConfigType()) {
    query["ConfigType"] = request.getConfigType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInheritParentGroup()) {
    query["InheritParentGroup"] = request.getInheritParentGroup();
  }

  if (!!request.hasThirdAppName()) {
    query["ThirdAppName"] = request.getThirdAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EditApgroupThirdApp"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditApgroupThirdAppResponse>();
}

/**
 * @summary 配置设备组的三方app
 *
 * @param request EditApgroupThirdAppRequest
 * @return EditApgroupThirdAppResponse
 */
EditApgroupThirdAppResponse Client::editApgroupThirdApp(const EditApgroupThirdAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editApgroupThirdAppWithOptions(request, runtime);
}

/**
 * @param request EffectApConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EffectApConfigResponse
 */
EffectApConfigResponse Client::effectApConfigWithOptions(const EffectApConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApMac()) {
    query["ApMac"] = request.getApMac();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EffectApConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EffectApConfigResponse>();
}

/**
 * @param request EffectApConfigRequest
 * @return EffectApConfigResponse
 */
EffectApConfigResponse Client::effectApConfig(const EffectApConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return effectApConfigWithOptions(request, runtime);
}

/**
 * @param request EffectApgroupConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EffectApgroupConfigResponse
 */
EffectApgroupConfigResponse Client::effectApgroupConfigWithOptions(const EffectApgroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApGroupUUId()) {
    query["ApGroupUUId"] = request.getApGroupUUId();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EffectApgroupConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EffectApgroupConfigResponse>();
}

/**
 * @param request EffectApgroupConfigRequest
 * @return EffectApgroupConfigResponse
 */
EffectApgroupConfigResponse Client::effectApgroupConfig(const EffectApgroupConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return effectApgroupConfigWithOptions(request, runtime);
}

/**
 * @summary 查询蚂蚁环境终端状态
 *
 * @param request GetAntStaStatusByMacRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAntStaStatusByMacResponse
 */
GetAntStaStatusByMacResponse Client::getAntStaStatusByMacWithOptions(const GetAntStaStatusByMacRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasStaMac()) {
    query["StaMac"] = request.getStaMac();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAntStaStatusByMac"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAntStaStatusByMacResponse>();
}

/**
 * @summary 查询蚂蚁环境终端状态
 *
 * @param request GetAntStaStatusByMacRequest
 * @return GetAntStaStatusByMacResponse
 */
GetAntStaStatusByMacResponse Client::getAntStaStatusByMac(const GetAntStaStatusByMacRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAntStaStatusByMacWithOptions(request, runtime);
}

/**
 * @param request GetApAddressByMacRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApAddressByMacResponse
 */
GetApAddressByMacResponse Client::getApAddressByMacWithOptions(const GetApAddressByMacRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasMac()) {
    query["Mac"] = request.getMac();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApAddressByMac"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApAddressByMacResponse>();
}

/**
 * @param request GetApAddressByMacRequest
 * @return GetApAddressByMacResponse
 */
GetApAddressByMacResponse Client::getApAddressByMac(const GetApAddressByMacRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApAddressByMacWithOptions(request, runtime);
}

/**
 * @param request GetApAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApAssetResponse
 */
GetApAssetResponse Client::getApAssetWithOptions(const GetApAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApMac()) {
    query["ApMac"] = request.getApMac();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApAsset"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApAssetResponse>();
}

/**
 * @param request GetApAssetRequest
 * @return GetApAssetResponse
 */
GetApAssetResponse Client::getApAsset(const GetApAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApAssetWithOptions(request, runtime);
}

/**
 * @param request GetApDetailStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApDetailStatusResponse
 */
GetApDetailStatusResponse Client::getApDetailStatusWithOptions(const GetApDetailStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasMac()) {
    query["Mac"] = request.getMac();
  }

  if (!!request.hasNeedApgroupInfo()) {
    query["NeedApgroupInfo"] = request.getNeedApgroupInfo();
  }

  if (!!request.hasNeedRadioStatus()) {
    query["NeedRadioStatus"] = request.getNeedRadioStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApDetailStatus"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApDetailStatusResponse>();
}

/**
 * @param request GetApDetailStatusRequest
 * @return GetApDetailStatusResponse
 */
GetApDetailStatusResponse Client::getApDetailStatus(const GetApDetailStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApDetailStatusWithOptions(request, runtime);
}

/**
 * @param request GetApDetailedConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApDetailedConfigResponse
 */
GetApDetailedConfigResponse Client::getApDetailedConfigWithOptions(const GetApDetailedConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApMac()) {
    query["ApMac"] = request.getApMac();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApDetailedConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApDetailedConfigResponse>();
}

/**
 * @param request GetApDetailedConfigRequest
 * @return GetApDetailedConfigResponse
 */
GetApDetailedConfigResponse Client::getApDetailedConfig(const GetApDetailedConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApDetailedConfigWithOptions(request, runtime);
}

/**
 * @param request GetApInfoFromPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApInfoFromPoolResponse
 */
GetApInfoFromPoolResponse Client::getApInfoFromPoolWithOptions(const GetApInfoFromPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApMac()) {
    query["ApMac"] = request.getApMac();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApInfoFromPool"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApInfoFromPoolResponse>();
}

/**
 * @param request GetApInfoFromPoolRequest
 * @return GetApInfoFromPoolResponse
 */
GetApInfoFromPoolResponse Client::getApInfoFromPool(const GetApInfoFromPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApInfoFromPoolWithOptions(request, runtime);
}

/**
 * @param request GetApRunHistoryTimeSerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApRunHistoryTimeSerResponse
 */
GetApRunHistoryTimeSerResponse Client::getApRunHistoryTimeSerWithOptions(const GetApRunHistoryTimeSerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApMac()) {
    query["ApMac"] = request.getApMac();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasEnd()) {
    query["End"] = request.getEnd();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApRunHistoryTimeSer"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApRunHistoryTimeSerResponse>();
}

/**
 * @param request GetApRunHistoryTimeSerRequest
 * @return GetApRunHistoryTimeSerResponse
 */
GetApRunHistoryTimeSerResponse Client::getApRunHistoryTimeSer(const GetApRunHistoryTimeSerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApRunHistoryTimeSerWithOptions(request, runtime);
}

/**
 * @param request GetApStatusByGroupIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApStatusByGroupIdResponse
 */
GetApStatusByGroupIdResponse Client::getApStatusByGroupIdWithOptions(const GetApStatusByGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApgroupId()) {
    query["ApgroupId"] = request.getApgroupId();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasCursor()) {
    query["Cursor"] = request.getCursor();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApStatusByGroupId"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApStatusByGroupIdResponse>();
}

/**
 * @param request GetApStatusByGroupIdRequest
 * @return GetApStatusByGroupIdResponse
 */
GetApStatusByGroupIdResponse Client::getApStatusByGroupId(const GetApStatusByGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApStatusByGroupIdWithOptions(request, runtime);
}

/**
 * @summary 根据组id查组的基本信息（名称之类）
 *
 * @param request GetApgroupConfigByIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApgroupConfigByIdentityResponse
 */
GetApgroupConfigByIdentityResponse Client::getApgroupConfigByIdentityWithOptions(const GetApgroupConfigByIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApgroupId()) {
    query["ApgroupId"] = request.getApgroupId();
  }

  if (!!request.hasApgroupUuid()) {
    query["ApgroupUuid"] = request.getApgroupUuid();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApgroupConfigByIdentity"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApgroupConfigByIdentityResponse>();
}

/**
 * @summary 根据组id查组的基本信息（名称之类）
 *
 * @param request GetApgroupConfigByIdentityRequest
 * @return GetApgroupConfigByIdentityResponse
 */
GetApgroupConfigByIdentityResponse Client::getApgroupConfigByIdentity(const GetApgroupConfigByIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApgroupConfigByIdentityWithOptions(request, runtime);
}

/**
 * @summary 查询设备组的完整配置(含ssid、portal等）
 *
 * @param request GetApgroupDetailedConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApgroupDetailedConfigResponse
 */
GetApgroupDetailedConfigResponse Client::getApgroupDetailedConfigWithOptions(const GetApgroupDetailedConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApgroupId()) {
    query["ApgroupId"] = request.getApgroupId();
  }

  if (!!request.hasApgroupUuid()) {
    query["ApgroupUuid"] = request.getApgroupUuid();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApgroupDetailedConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApgroupDetailedConfigResponse>();
}

/**
 * @summary 查询设备组的完整配置(含ssid、portal等）
 *
 * @param request GetApgroupDetailedConfigRequest
 * @return GetApgroupDetailedConfigResponse
 */
GetApgroupDetailedConfigResponse Client::getApgroupDetailedConfig(const GetApgroupDetailedConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApgroupDetailedConfigWithOptions(request, runtime);
}

/**
 * @param request GetApgroupIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApgroupIdResponse
 */
GetApgroupIdResponse Client::getApgroupIdWithOptions(const GetApgroupIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApMac()) {
    query["ApMac"] = request.getApMac();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApgroupId"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApgroupIdResponse>();
}

/**
 * @param request GetApgroupIdRequest
 * @return GetApgroupIdResponse
 */
GetApgroupIdResponse Client::getApgroupId(const GetApgroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApgroupIdWithOptions(request, runtime);
}

/**
 * @param request GetApgroupSsidConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApgroupSsidConfigResponse
 */
GetApgroupSsidConfigResponse Client::getApgroupSsidConfigWithOptions(const GetApgroupSsidConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApGroupUUId()) {
    query["ApGroupUUId"] = request.getApGroupUUId();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApgroupSsidConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApgroupSsidConfigResponse>();
}

/**
 * @param request GetApgroupSsidConfigRequest
 * @return GetApgroupSsidConfigResponse
 */
GetApgroupSsidConfigResponse Client::getApgroupSsidConfig(const GetApgroupSsidConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApgroupSsidConfigWithOptions(request, runtime);
}

/**
 * @summary 查询批量任务的执行进度
 *
 * @param request GetBatchTaskProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBatchTaskProgressResponse
 */
GetBatchTaskProgressResponse Client::getBatchTaskProgressWithOptions(const GetBatchTaskProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBatchTaskProgress"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBatchTaskProgressResponse>();
}

/**
 * @summary 查询批量任务的执行进度
 *
 * @param request GetBatchTaskProgressRequest
 * @return GetBatchTaskProgressResponse
 */
GetBatchTaskProgressResponse Client::getBatchTaskProgress(const GetBatchTaskProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBatchTaskProgressWithOptions(request, runtime);
}

/**
 * @param request GetGroupMiscAggTimeSerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupMiscAggTimeSerResponse
 */
GetGroupMiscAggTimeSerResponse Client::getGroupMiscAggTimeSerWithOptions(const GetGroupMiscAggTimeSerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApgroupUuid()) {
    query["ApgroupUuid"] = request.getApgroupUuid();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasEnd()) {
    query["End"] = request.getEnd();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGroupMiscAggTimeSer"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGroupMiscAggTimeSerResponse>();
}

/**
 * @param request GetGroupMiscAggTimeSerRequest
 * @return GetGroupMiscAggTimeSerResponse
 */
GetGroupMiscAggTimeSerResponse Client::getGroupMiscAggTimeSer(const GetGroupMiscAggTimeSerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGroupMiscAggTimeSerWithOptions(request, runtime);
}

/**
 * @param request GetNetDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNetDeviceInfoResponse
 */
GetNetDeviceInfoResponse Client::getNetDeviceInfoWithOptions(const GetNetDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasCursor()) {
    query["Cursor"] = request.getCursor();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIdc()) {
    query["Idc"] = request.getIdc();
  }

  if (!!request.hasLogicNetPod()) {
    query["LogicNetPod"] = request.getLogicNetPod();
  }

  if (!!request.hasManufacturer()) {
    query["Manufacturer"] = request.getManufacturer();
  }

  if (!!request.hasMgnIp()) {
    query["MgnIp"] = request.getMgnIp();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasNetPod()) {
    query["NetPod"] = request.getNetPod();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  if (!!request.hasServiceTag()) {
    query["ServiceTag"] = request.getServiceTag();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNetDeviceInfo"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNetDeviceInfoResponse>();
}

/**
 * @param request GetNetDeviceInfoRequest
 * @return GetNetDeviceInfoResponse
 */
GetNetDeviceInfoResponse Client::getNetDeviceInfo(const GetNetDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetDeviceInfoWithOptions(request, runtime);
}

/**
 * @param request GetNetDeviceInfoWithSizeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNetDeviceInfoWithSizeResponse
 */
GetNetDeviceInfoWithSizeResponse Client::getNetDeviceInfoWithSizeWithOptions(const GetNetDeviceInfoWithSizeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasCursor()) {
    query["Cursor"] = request.getCursor();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIdc()) {
    query["Idc"] = request.getIdc();
  }

  if (!!request.hasLogicNetPod()) {
    query["LogicNetPod"] = request.getLogicNetPod();
  }

  if (!!request.hasManufacturer()) {
    query["Manufacturer"] = request.getManufacturer();
  }

  if (!!request.hasMgnIp()) {
    query["MgnIp"] = request.getMgnIp();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasNetPod()) {
    query["NetPod"] = request.getNetPod();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  if (!!request.hasServiceTag()) {
    query["ServiceTag"] = request.getServiceTag();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNetDeviceInfoWithSize"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNetDeviceInfoWithSizeResponse>();
}

/**
 * @param request GetNetDeviceInfoWithSizeRequest
 * @return GetNetDeviceInfoWithSizeResponse
 */
GetNetDeviceInfoWithSizeResponse Client::getNetDeviceInfoWithSize(const GetNetDeviceInfoWithSizeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetDeviceInfoWithSizeWithOptions(request, runtime);
}

/**
 * @summary 获取体验加PV/UV信息
 *
 * @param request GetPageVisitDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPageVisitDataResponse
 */
GetPageVisitDataResponse Client::getPageVisitDataWithOptions(const GetPageVisitDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPageVisitData"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPageVisitDataResponse>();
}

/**
 * @summary 获取体验加PV/UV信息
 *
 * @param request GetPageVisitDataRequest
 * @return GetPageVisitDataResponse
 */
GetPageVisitDataResponse Client::getPageVisitData(const GetPageVisitDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPageVisitDataWithOptions(request, runtime);
}

/**
 * @param request GetRadioRunHistoryTimeSerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRadioRunHistoryTimeSerResponse
 */
GetRadioRunHistoryTimeSerResponse Client::getRadioRunHistoryTimeSerWithOptions(const GetRadioRunHistoryTimeSerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApMac()) {
    query["ApMac"] = request.getApMac();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasEnd()) {
    query["End"] = request.getEnd();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRadioRunHistoryTimeSer"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRadioRunHistoryTimeSerResponse>();
}

/**
 * @param request GetRadioRunHistoryTimeSerRequest
 * @return GetRadioRunHistoryTimeSerResponse
 */
GetRadioRunHistoryTimeSerResponse Client::getRadioRunHistoryTimeSer(const GetRadioRunHistoryTimeSerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRadioRunHistoryTimeSerWithOptions(request, runtime);
}

/**
 * @summary 查询终端设备的详细状态
 *
 * @param request GetStaDetailedStatusByMacRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStaDetailedStatusByMacResponse
 */
GetStaDetailedStatusByMacResponse Client::getStaDetailedStatusByMacWithOptions(const GetStaDetailedStatusByMacRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasStaMac()) {
    query["StaMac"] = request.getStaMac();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStaDetailedStatusByMac"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStaDetailedStatusByMacResponse>();
}

/**
 * @summary 查询终端设备的详细状态
 *
 * @param request GetStaDetailedStatusByMacRequest
 * @return GetStaDetailedStatusByMacResponse
 */
GetStaDetailedStatusByMacResponse Client::getStaDetailedStatusByMac(const GetStaDetailedStatusByMacRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStaDetailedStatusByMacWithOptions(request, runtime);
}

/**
 * @param request GetStaStatusListByApRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStaStatusListByApResponse
 */
GetStaStatusListByApResponse Client::getStaStatusListByApWithOptions(const GetStaStatusListByApRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApMac()) {
    query["ApMac"] = request.getApMac();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasCursor()) {
    query["Cursor"] = request.getCursor();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStaStatusListByAp"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStaStatusListByApResponse>();
}

/**
 * @param request GetStaStatusListByApRequest
 * @return GetStaStatusListByApResponse
 */
GetStaStatusListByApResponse Client::getStaStatusListByAp(const GetStaStatusListByApRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStaStatusListByApWithOptions(request, runtime);
}

/**
 * @summary 判断是否刑天的业务
 *
 * @param request JudgeXingTianBusinessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return JudgeXingTianBusinessResponse
 */
JudgeXingTianBusinessResponse Client::judgeXingTianBusinessWithOptions(const JudgeXingTianBusinessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasRealmId()) {
    query["RealmId"] = request.getRealmId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "JudgeXingTianBusiness"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<JudgeXingTianBusinessResponse>();
}

/**
 * @summary 判断是否刑天的业务
 *
 * @param request JudgeXingTianBusinessRequest
 * @return JudgeXingTianBusinessResponse
 */
JudgeXingTianBusinessResponse Client::judgeXingTianBusiness(const JudgeXingTianBusinessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return judgeXingTianBusinessWithOptions(request, runtime);
}

/**
 * @summary 踢除蚂蚁环境的终端
 *
 * @param request KickAntStaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KickAntStaResponse
 */
KickAntStaResponse Client::kickAntStaWithOptions(const KickAntStaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasStaMac()) {
    query["StaMac"] = request.getStaMac();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "KickAntSta"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KickAntStaResponse>();
}

/**
 * @summary 踢除蚂蚁环境的终端
 *
 * @param request KickAntStaRequest
 * @return KickAntStaResponse
 */
KickAntStaResponse Client::kickAntSta(const KickAntStaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return kickAntStaWithOptions(request, runtime);
}

/**
 * @param request KickStaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KickStaResponse
 */
KickStaResponse Client::kickStaWithOptions(const KickStaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasStaMac()) {
    query["StaMac"] = request.getStaMac();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "KickSta"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KickStaResponse>();
}

/**
 * @param request KickStaRequest
 * @return KickStaResponse
 */
KickStaResponse Client::kickSta(const KickStaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return kickStaWithOptions(request, runtime);
}

/**
 * @summary 根据组id查组内第一级子组
 *
 * @param request ListApgroupDescendantRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApgroupDescendantResponse
 */
ListApgroupDescendantResponse Client::listApgroupDescendantWithOptions(const ListApgroupDescendantRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApgroupId()) {
    query["ApgroupId"] = request.getApgroupId();
  }

  if (!!request.hasApgroupUuid()) {
    query["ApgroupUuid"] = request.getApgroupUuid();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasCursor()) {
    query["Cursor"] = request.getCursor();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApgroupDescendant"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApgroupDescendantResponse>();
}

/**
 * @summary 根据组id查组内第一级子组
 *
 * @param request ListApgroupDescendantRequest
 * @return ListApgroupDescendantResponse
 */
ListApgroupDescendantResponse Client::listApgroupDescendant(const ListApgroupDescendantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApgroupDescendantWithOptions(request, runtime);
}

/**
 * @param request ListJobOrdersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobOrdersResponse
 */
ListJobOrdersResponse Client::listJobOrdersWithOptions(const ListJobOrdersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasChangingType()) {
    query["ChangingType"] = request.getChangingType();
  }

  if (!!request.hasClientSystem()) {
    query["ClientSystem"] = request.getClientSystem();
  }

  if (!!request.hasClientUniqueId()) {
    query["ClientUniqueId"] = request.getClientUniqueId();
  }

  if (!!request.hasCursor()) {
    query["Cursor"] = request.getCursor();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasHandler()) {
    query["Handler"] = request.getHandler();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOrderStatus()) {
    query["OrderStatus"] = request.getOrderStatus();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobOrders"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobOrdersResponse>();
}

/**
 * @param request ListJobOrdersRequest
 * @return ListJobOrdersResponse
 */
ListJobOrdersResponse Client::listJobOrders(const ListJobOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobOrdersWithOptions(request, runtime);
}

/**
 * @param request ListJobOrdersWithSizeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobOrdersWithSizeResponse
 */
ListJobOrdersWithSizeResponse Client::listJobOrdersWithSizeWithOptions(const ListJobOrdersWithSizeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasChangingType()) {
    query["ChangingType"] = request.getChangingType();
  }

  if (!!request.hasClientSystem()) {
    query["ClientSystem"] = request.getClientSystem();
  }

  if (!!request.hasClientUniqueId()) {
    query["ClientUniqueId"] = request.getClientUniqueId();
  }

  if (!!request.hasCursor()) {
    query["Cursor"] = request.getCursor();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasHandler()) {
    query["Handler"] = request.getHandler();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOrderStatus()) {
    query["OrderStatus"] = request.getOrderStatus();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobOrdersWithSize"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobOrdersWithSizeResponse>();
}

/**
 * @param request ListJobOrdersWithSizeRequest
 * @return ListJobOrdersWithSizeResponse
 */
ListJobOrdersWithSizeResponse Client::listJobOrdersWithSize(const ListJobOrdersWithSizeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobOrdersWithSizeWithOptions(request, runtime);
}

/**
 * @param request NewApgroupConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return NewApgroupConfigResponse
 */
NewApgroupConfigResponse Client::newApgroupConfigWithOptions(const NewApgroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasParentApgroupId()) {
    query["ParentApgroupId"] = request.getParentApgroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "NewApgroupConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<NewApgroupConfigResponse>();
}

/**
 * @param request NewApgroupConfigRequest
 * @return NewApgroupConfigResponse
 */
NewApgroupConfigResponse Client::newApgroupConfig(const NewApgroupConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return newApgroupConfigWithOptions(request, runtime);
}

/**
 * @param tmpReq NewJobOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return NewJobOrderResponse
 */
NewJobOrderResponse Client::newJobOrderWithOptions(const NewJobOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  NewJobOrderShrinkRequest request = NewJobOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.getCallbackUrl();
  }

  if (!!request.hasChangeType()) {
    query["ChangeType"] = request.getChangeType();
  }

  if (!!request.hasClientSystem()) {
    query["ClientSystem"] = request.getClientSystem();
  }

  if (!!request.hasClientUniqueId()) {
    query["ClientUniqueId"] = request.getClientUniqueId();
  }

  if (!!request.hasCreator()) {
    query["Creator"] = request.getCreator();
  }

  if (!!request.hasReferUrl()) {
    query["ReferUrl"] = request.getReferUrl();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  json body = {};
  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "NewJobOrder"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<NewJobOrderResponse>();
}

/**
 * @param request NewJobOrderRequest
 * @return NewJobOrderResponse
 */
NewJobOrderResponse Client::newJobOrder(const NewJobOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return newJobOrderWithOptions(request, runtime);
}

/**
 * @param request NewNetDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return NewNetDeviceInfoResponse
 */
NewNetDeviceInfoResponse Client::newNetDeviceInfoWithOptions(const NewNetDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  json body = {};
  if (!!request.hasDevices()) {
    body["Devices"] = request.getDevices();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "NewNetDeviceInfo"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<NewNetDeviceInfoResponse>();
}

/**
 * @param request NewNetDeviceInfoRequest
 * @return NewNetDeviceInfoResponse
 */
NewNetDeviceInfoResponse Client::newNetDeviceInfo(const NewNetDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return newNetDeviceInfoWithOptions(request, runtime);
}

/**
 * @param request PutAppConfigAndSaveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutAppConfigAndSaveResponse
 */
PutAppConfigAndSaveResponse Client::putAppConfigAndSaveWithOptions(const PutAppConfigAndSaveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApMac()) {
    query["ApMac"] = request.getApMac();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasConfigureType()) {
    query["ConfigureType"] = request.getConfigureType();
  }

  if (!!request.hasCurrentTime()) {
    query["CurrentTime"] = request.getCurrentTime();
  }

  if (!!request.hasData()) {
    query["Data"] = request.getData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutAppConfigAndSave"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutAppConfigAndSaveResponse>();
}

/**
 * @param request PutAppConfigAndSaveRequest
 * @return PutAppConfigAndSaveResponse
 */
PutAppConfigAndSaveResponse Client::putAppConfigAndSave(const PutAppConfigAndSaveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putAppConfigAndSaveWithOptions(request, runtime);
}

/**
 * @param request QueryJobOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryJobOrderResponse
 */
QueryJobOrderResponse Client::queryJobOrderWithOptions(const QueryJobOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryJobOrder"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryJobOrderResponse>();
}

/**
 * @param request QueryJobOrderRequest
 * @return QueryJobOrderResponse
 */
QueryJobOrderResponse Client::queryJobOrder(const QueryJobOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryJobOrderWithOptions(request, runtime);
}

/**
 * @param request RebootApRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootApResponse
 */
RebootApResponse Client::rebootApWithOptions(const RebootApRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApMac()) {
    query["ApMac"] = request.getApMac();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebootAp"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootApResponse>();
}

/**
 * @param request RebootApRequest
 * @return RebootApResponse
 */
RebootApResponse Client::rebootAp(const RebootApRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootApWithOptions(request, runtime);
}

/**
 * @param request RegisterApAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterApAssetResponse
 */
RegisterApAssetResponse Client::registerApAssetWithOptions(const RegisterApAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApGroupUUId()) {
    query["ApGroupUUId"] = request.getApGroupUUId();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMac()) {
    query["Mac"] = request.getMac();
  }

  if (!!request.hasSerialNo()) {
    query["SerialNo"] = request.getSerialNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterApAsset"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterApAssetResponse>();
}

/**
 * @param request RegisterApAssetRequest
 * @return RegisterApAssetResponse
 */
RegisterApAssetResponse Client::registerApAsset(const RegisterApAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerApAssetWithOptions(request, runtime);
}

/**
 * @param request RepairApRadioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RepairApRadioResponse
 */
RepairApRadioResponse Client::repairApRadioWithOptions(const RepairApRadioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApMac()) {
    query["ApMac"] = request.getApMac();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasRadioIndex()) {
    query["RadioIndex"] = request.getRadioIndex();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RepairApRadio"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RepairApRadioResponse>();
}

/**
 * @param request RepairApRadioRequest
 * @return RepairApRadioResponse
 */
RepairApRadioResponse Client::repairApRadio(const RepairApRadioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return repairApRadioWithOptions(request, runtime);
}

/**
 * @summary 保存设备的基本配置
 *
 * @param request SaveApBasicConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveApBasicConfigResponse
 */
SaveApBasicConfigResponse Client::saveApBasicConfigWithOptions(const SaveApBasicConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasDai()) {
    query["Dai"] = request.getDai();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEchoInt()) {
    query["EchoInt"] = request.getEchoInt();
  }

  if (!!request.hasFailover()) {
    query["Failover"] = request.getFailover();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInsecureAllowed()) {
    query["InsecureAllowed"] = request.getInsecureAllowed();
  }

  if (!!request.hasLanIp()) {
    query["LanIp"] = request.getLanIp();
  }

  if (!!request.hasLanMask()) {
    query["LanMask"] = request.getLanMask();
  }

  if (!!request.hasLanStatus()) {
    query["LanStatus"] = request.getLanStatus();
  }

  if (!!request.hasLogIp()) {
    query["LogIp"] = request.getLogIp();
  }

  if (!!request.hasLogLevel()) {
    query["LogLevel"] = request.getLogLevel();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPasswd()) {
    query["Passwd"] = request.getPasswd();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRoute()) {
    query["Route"] = request.getRoute();
  }

  if (!!request.hasScan()) {
    query["Scan"] = request.getScan();
  }

  if (!!request.hasTokenServer()) {
    query["TokenServer"] = request.getTokenServer();
  }

  if (!!request.hasVpn()) {
    query["Vpn"] = request.getVpn();
  }

  if (!!request.hasWorkMode()) {
    query["WorkMode"] = request.getWorkMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveApBasicConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveApBasicConfigResponse>();
}

/**
 * @summary 保存设备的基本配置
 *
 * @param request SaveApBasicConfigRequest
 * @return SaveApBasicConfigResponse
 */
SaveApBasicConfigResponse Client::saveApBasicConfig(const SaveApBasicConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveApBasicConfigWithOptions(request, runtime);
}

/**
 * @summary 配置设备的portal
 *
 * @param tmpReq SaveApPortalConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveApPortalConfigResponse
 */
SaveApPortalConfigResponse Client::saveApPortalConfigWithOptions(const SaveApPortalConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveApPortalConfigShrinkRequest request = SaveApPortalConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPortalTypes()) {
    request.setPortalTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPortalTypes(), "PortalTypes", "simple"));
  }

  json query = {};
  if (!!request.hasApConfigId()) {
    query["ApConfigId"] = request.getApConfigId();
  }

  if (!!request.hasAppAuthUrl()) {
    query["AppAuthUrl"] = request.getAppAuthUrl();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAuthKey()) {
    query["AuthKey"] = request.getAuthKey();
  }

  if (!!request.hasAuthSecret()) {
    query["AuthSecret"] = request.getAuthSecret();
  }

  if (!!request.hasCheckUrl()) {
    query["CheckUrl"] = request.getCheckUrl();
  }

  if (!!request.hasClientDownload()) {
    query["ClientDownload"] = request.getClientDownload();
  }

  if (!!request.hasClientUpload()) {
    query["ClientUpload"] = request.getClientUpload();
  }

  if (!!request.hasCountdown()) {
    query["Countdown"] = request.getCountdown();
  }

  if (!!request.hasNetwork()) {
    query["Network"] = request.getNetwork();
  }

  if (!!request.hasPortalTypesShrink()) {
    query["PortalTypes"] = request.getPortalTypesShrink();
  }

  if (!!request.hasPortalUrl()) {
    query["PortalUrl"] = request.getPortalUrl();
  }

  if (!!request.hasTimeStamp()) {
    query["TimeStamp"] = request.getTimeStamp();
  }

  if (!!request.hasTotalDownload()) {
    query["TotalDownload"] = request.getTotalDownload();
  }

  if (!!request.hasTotalUpload()) {
    query["TotalUpload"] = request.getTotalUpload();
  }

  if (!!request.hasWebAuthUrl()) {
    query["WebAuthUrl"] = request.getWebAuthUrl();
  }

  if (!!request.hasWhitelist()) {
    query["Whitelist"] = request.getWhitelist();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveApPortalConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveApPortalConfigResponse>();
}

/**
 * @summary 配置设备的portal
 *
 * @param request SaveApPortalConfigRequest
 * @return SaveApPortalConfigResponse
 */
SaveApPortalConfigResponse Client::saveApPortalConfig(const SaveApPortalConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveApPortalConfigWithOptions(request, runtime);
}

/**
 * @param request SaveApRadioConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveApRadioConfigResponse
 */
SaveApRadioConfigResponse Client::saveApRadioConfigWithOptions(const SaveApRadioConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasBcastRate()) {
    query["BcastRate"] = request.getBcastRate();
  }

  if (!!request.hasBeaconInt()) {
    query["BeaconInt"] = request.getBeaconInt();
  }

  if (!!request.hasChannel()) {
    query["Channel"] = request.getChannel();
  }

  if (!!request.hasDisabled()) {
    query["Disabled"] = request.getDisabled();
  }

  if (!!request.hasFrag()) {
    query["Frag"] = request.getFrag();
  }

  if (!!request.hasHtmode()) {
    query["Htmode"] = request.getHtmode();
  }

  if (!!request.hasHwmode()) {
    query["Hwmode"] = request.getHwmode();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMcastRate()) {
    query["McastRate"] = request.getMcastRate();
  }

  if (!!request.hasMgmtRate()) {
    query["MgmtRate"] = request.getMgmtRate();
  }

  if (!!request.hasMinrate()) {
    query["Minrate"] = request.getMinrate();
  }

  if (!!request.hasNoscan()) {
    query["Noscan"] = request.getNoscan();
  }

  if (!!request.hasProbereq()) {
    query["Probereq"] = request.getProbereq();
  }

  if (!!request.hasRequireMode()) {
    query["RequireMode"] = request.getRequireMode();
  }

  if (!!request.hasRts()) {
    query["Rts"] = request.getRts();
  }

  if (!!request.hasShortgi()) {
    query["Shortgi"] = request.getShortgi();
  }

  if (!!request.hasTxpower()) {
    query["Txpower"] = request.getTxpower();
  }

  if (!!request.hasUapsd()) {
    query["Uapsd"] = request.getUapsd();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveApRadioConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveApRadioConfigResponse>();
}

/**
 * @param request SaveApRadioConfigRequest
 * @return SaveApRadioConfigResponse
 */
SaveApRadioConfigResponse Client::saveApRadioConfig(const SaveApRadioConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveApRadioConfigWithOptions(request, runtime);
}

/**
 * @param request SaveApSsidConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveApSsidConfigResponse
 */
SaveApSsidConfigResponse Client::saveApSsidConfigWithOptions(const SaveApSsidConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcctPort()) {
    query["AcctPort"] = request.getAcctPort();
  }

  if (!!request.hasAcctSecret()) {
    query["AcctSecret"] = request.getAcctSecret();
  }

  if (!!request.hasAcctServer()) {
    query["AcctServer"] = request.getAcctServer();
  }

  if (!!request.hasAcctStatusServerWork()) {
    query["AcctStatusServerWork"] = request.getAcctStatusServerWork();
  }

  if (!!request.hasApAssetId()) {
    query["ApAssetId"] = request.getApAssetId();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasArpProxyEnable()) {
    query["ArpProxyEnable"] = request.getArpProxyEnable();
  }

  if (!!request.hasAuthCache()) {
    query["AuthCache"] = request.getAuthCache();
  }

  if (!!request.hasAuthPort()) {
    query["AuthPort"] = request.getAuthPort();
  }

  if (!!request.hasAuthSecret()) {
    query["AuthSecret"] = request.getAuthSecret();
  }

  if (!!request.hasAuthServer()) {
    query["AuthServer"] = request.getAuthServer();
  }

  if (!!request.hasAuthStatusServerWork()) {
    query["AuthStatusServerWork"] = request.getAuthStatusServerWork();
  }

  if (!!request.hasCir()) {
    query["Cir"] = request.getCir();
  }

  if (!!request.hasCirStep()) {
    query["CirStep"] = request.getCirStep();
  }

  if (!!request.hasCirType()) {
    query["CirType"] = request.getCirType();
  }

  if (!!request.hasCirUl()) {
    query["CirUl"] = request.getCirUl();
  }

  if (!!request.hasDaeClient()) {
    query["DaeClient"] = request.getDaeClient();
  }

  if (!!request.hasDaePort()) {
    query["DaePort"] = request.getDaePort();
  }

  if (!!request.hasDaeSecret()) {
    query["DaeSecret"] = request.getDaeSecret();
  }

  if (!!request.hasDisabled()) {
    query["Disabled"] = request.getDisabled();
  }

  if (!!request.hasDisassocLowAck()) {
    query["DisassocLowAck"] = request.getDisassocLowAck();
  }

  if (!!request.hasDisassocWeakRssi()) {
    query["DisassocWeakRssi"] = request.getDisassocWeakRssi();
  }

  if (!!request.hasDynamicVlan()) {
    query["DynamicVlan"] = request.getDynamicVlan();
  }

  if (!!request.hasEncKey()) {
    query["EncKey"] = request.getEncKey();
  }

  if (!!request.hasEncryption()) {
    query["Encryption"] = request.getEncryption();
  }

  if (!!request.hasFourthAuthPort()) {
    query["FourthAuthPort"] = request.getFourthAuthPort();
  }

  if (!!request.hasFourthAuthSecret()) {
    query["FourthAuthSecret"] = request.getFourthAuthSecret();
  }

  if (!!request.hasFourthAuthServer()) {
    query["FourthAuthServer"] = request.getFourthAuthServer();
  }

  if (!!request.hasFtOverDs()) {
    query["FtOverDs"] = request.getFtOverDs();
  }

  if (!!request.hasHidden()) {
    query["Hidden"] = request.getHidden();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIeee80211r()) {
    query["Ieee80211r"] = request.getIeee80211r();
  }

  if (!!request.hasIeee80211w()) {
    query["Ieee80211w"] = request.getIeee80211w();
  }

  if (!!request.hasIgnoreWeakProbe()) {
    query["IgnoreWeakProbe"] = request.getIgnoreWeakProbe();
  }

  if (!!request.hasIsolate()) {
    query["Isolate"] = request.getIsolate();
  }

  if (!!request.hasLiteEffect()) {
    query["LiteEffect"] = request.getLiteEffect();
  }

  if (!!request.hasMac()) {
    query["Mac"] = request.getMac();
  }

  if (!!request.hasMaxInactivity()) {
    query["MaxInactivity"] = request.getMaxInactivity();
  }

  if (!!request.hasMaxassoc()) {
    query["Maxassoc"] = request.getMaxassoc();
  }

  if (!!request.hasMobilityDomain()) {
    query["MobilityDomain"] = request.getMobilityDomain();
  }

  if (!!request.hasMulticastForward()) {
    query["MulticastForward"] = request.getMulticastForward();
  }

  if (!!request.hasNasid()) {
    query["Nasid"] = request.getNasid();
  }

  if (!!request.hasNdProxyWork()) {
    query["NdProxyWork"] = request.getNdProxyWork();
  }

  if (!!request.hasNetwork()) {
    query["Network"] = request.getNetwork();
  }

  if (!!request.hasOwnip()) {
    query["Ownip"] = request.getOwnip();
  }

  if (!!request.hasRadioIndex()) {
    query["RadioIndex"] = request.getRadioIndex();
  }

  if (!!request.hasSecondaryAcctPort()) {
    query["SecondaryAcctPort"] = request.getSecondaryAcctPort();
  }

  if (!!request.hasSecondaryAcctSecret()) {
    query["SecondaryAcctSecret"] = request.getSecondaryAcctSecret();
  }

  if (!!request.hasSecondaryAcctServer()) {
    query["SecondaryAcctServer"] = request.getSecondaryAcctServer();
  }

  if (!!request.hasSecondaryAuthPort()) {
    query["SecondaryAuthPort"] = request.getSecondaryAuthPort();
  }

  if (!!request.hasSecondaryAuthSecret()) {
    query["SecondaryAuthSecret"] = request.getSecondaryAuthSecret();
  }

  if (!!request.hasSecondaryAuthServer()) {
    query["SecondaryAuthServer"] = request.getSecondaryAuthServer();
  }

  if (!!request.hasSendConfigToAp()) {
    query["SendConfigToAp"] = request.getSendConfigToAp();
  }

  if (!!request.hasShortPreamble()) {
    query["ShortPreamble"] = request.getShortPreamble();
  }

  if (!!request.hasSsid()) {
    query["Ssid"] = request.getSsid();
  }

  if (!!request.hasSsidLb()) {
    query["SsidLb"] = request.getSsidLb();
  }

  if (!!request.hasThirdAuthPort()) {
    query["ThirdAuthPort"] = request.getThirdAuthPort();
  }

  if (!!request.hasThirdAuthSecret()) {
    query["ThirdAuthSecret"] = request.getThirdAuthSecret();
  }

  if (!!request.hasThirdAuthServer()) {
    query["ThirdAuthServer"] = request.getThirdAuthServer();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasVlanDhcp()) {
    query["VlanDhcp"] = request.getVlanDhcp();
  }

  if (!!request.hasWmm()) {
    query["Wmm"] = request.getWmm();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveApSsidConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveApSsidConfigResponse>();
}

/**
 * @param request SaveApSsidConfigRequest
 * @return SaveApSsidConfigResponse
 */
SaveApSsidConfigResponse Client::saveApSsidConfig(const SaveApSsidConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveApSsidConfigWithOptions(request, runtime);
}

/**
 * @summary 配置设备的三方app
 *
 * @param request SaveApThirdAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveApThirdAppResponse
 */
SaveApThirdAppResponse Client::saveApThirdAppWithOptions(const SaveApThirdAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddStyle()) {
    query["AddStyle"] = request.getAddStyle();
  }

  if (!!request.hasApAssetId()) {
    query["ApAssetId"] = request.getApAssetId();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppData()) {
    query["AppData"] = request.getAppData();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMac()) {
    query["Mac"] = request.getMac();
  }

  if (!!request.hasThirdAppName()) {
    query["ThirdAppName"] = request.getThirdAppName();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveApThirdApp"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveApThirdAppResponse>();
}

/**
 * @summary 配置设备的三方app
 *
 * @param request SaveApThirdAppRequest
 * @return SaveApThirdAppResponse
 */
SaveApThirdAppResponse Client::saveApThirdApp(const SaveApThirdAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveApThirdAppWithOptions(request, runtime);
}

/**
 * @summary 保存设备组的基本配置
 *
 * @param request SaveApgroupBasicConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveApgroupBasicConfigResponse
 */
SaveApgroupBasicConfigResponse Client::saveApgroupBasicConfigWithOptions(const SaveApgroupBasicConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasDai()) {
    query["Dai"] = request.getDai();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEchoInt()) {
    query["EchoInt"] = request.getEchoInt();
  }

  if (!!request.hasFailover()) {
    query["Failover"] = request.getFailover();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInsecureAllowed()) {
    query["InsecureAllowed"] = request.getInsecureAllowed();
  }

  if (!!request.hasIsConfigStrongConsistency()) {
    query["IsConfigStrongConsistency"] = request.getIsConfigStrongConsistency();
  }

  if (!!request.hasLanIp()) {
    query["LanIp"] = request.getLanIp();
  }

  if (!!request.hasLanMask()) {
    query["LanMask"] = request.getLanMask();
  }

  if (!!request.hasLanStatus()) {
    query["LanStatus"] = request.getLanStatus();
  }

  if (!!request.hasLogIp()) {
    query["LogIp"] = request.getLogIp();
  }

  if (!!request.hasLogLevel()) {
    query["LogLevel"] = request.getLogLevel();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasParentApgroupId()) {
    query["ParentApgroupId"] = request.getParentApgroupId();
  }

  if (!!request.hasPasswd()) {
    query["Passwd"] = request.getPasswd();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRoute()) {
    query["Route"] = request.getRoute();
  }

  if (!!request.hasScan()) {
    query["Scan"] = request.getScan();
  }

  if (!!request.hasTokenServer()) {
    query["TokenServer"] = request.getTokenServer();
  }

  if (!!request.hasVpn()) {
    query["Vpn"] = request.getVpn();
  }

  if (!!request.hasWorkMode()) {
    query["WorkMode"] = request.getWorkMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveApgroupBasicConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveApgroupBasicConfigResponse>();
}

/**
 * @summary 保存设备组的基本配置
 *
 * @param request SaveApgroupBasicConfigRequest
 * @return SaveApgroupBasicConfigResponse
 */
SaveApgroupBasicConfigResponse Client::saveApgroupBasicConfig(const SaveApgroupBasicConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveApgroupBasicConfigWithOptions(request, runtime);
}

/**
 * @summary 配置设备组的portal
 *
 * @param tmpReq SaveApgroupPortalConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveApgroupPortalConfigResponse
 */
SaveApgroupPortalConfigResponse Client::saveApgroupPortalConfigWithOptions(const SaveApgroupPortalConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveApgroupPortalConfigShrinkRequest request = SaveApgroupPortalConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPortalTypes()) {
    request.setPortalTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPortalTypes(), "PortalTypes", "simple"));
  }

  json query = {};
  if (!!request.hasApgroupId()) {
    query["ApgroupId"] = request.getApgroupId();
  }

  if (!!request.hasAppAuthUrl()) {
    query["AppAuthUrl"] = request.getAppAuthUrl();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAuthKey()) {
    query["AuthKey"] = request.getAuthKey();
  }

  if (!!request.hasAuthSecret()) {
    query["AuthSecret"] = request.getAuthSecret();
  }

  if (!!request.hasCheckUrl()) {
    query["CheckUrl"] = request.getCheckUrl();
  }

  if (!!request.hasClientDownload()) {
    query["ClientDownload"] = request.getClientDownload();
  }

  if (!!request.hasClientUpload()) {
    query["ClientUpload"] = request.getClientUpload();
  }

  if (!!request.hasCountdown()) {
    query["Countdown"] = request.getCountdown();
  }

  if (!!request.hasNetwork()) {
    query["Network"] = request.getNetwork();
  }

  if (!!request.hasPortalTypesShrink()) {
    query["PortalTypes"] = request.getPortalTypesShrink();
  }

  if (!!request.hasPortalUrl()) {
    query["PortalUrl"] = request.getPortalUrl();
  }

  if (!!request.hasTimeStamp()) {
    query["TimeStamp"] = request.getTimeStamp();
  }

  if (!!request.hasTotalDownload()) {
    query["TotalDownload"] = request.getTotalDownload();
  }

  if (!!request.hasTotalUpload()) {
    query["TotalUpload"] = request.getTotalUpload();
  }

  if (!!request.hasWebAuthUrl()) {
    query["WebAuthUrl"] = request.getWebAuthUrl();
  }

  if (!!request.hasWhitelist()) {
    query["Whitelist"] = request.getWhitelist();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveApgroupPortalConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveApgroupPortalConfigResponse>();
}

/**
 * @summary 配置设备组的portal
 *
 * @param request SaveApgroupPortalConfigRequest
 * @return SaveApgroupPortalConfigResponse
 */
SaveApgroupPortalConfigResponse Client::saveApgroupPortalConfig(const SaveApgroupPortalConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveApgroupPortalConfigWithOptions(request, runtime);
}

/**
 * @param request SaveApgroupSsidConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveApgroupSsidConfigResponse
 */
SaveApgroupSsidConfigResponse Client::saveApgroupSsidConfigWithOptions(const SaveApgroupSsidConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcctPort()) {
    query["AcctPort"] = request.getAcctPort();
  }

  if (!!request.hasAcctSecret()) {
    query["AcctSecret"] = request.getAcctSecret();
  }

  if (!!request.hasAcctServer()) {
    query["AcctServer"] = request.getAcctServer();
  }

  if (!!request.hasApgroupId()) {
    query["ApgroupId"] = request.getApgroupId();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAuthCache()) {
    query["AuthCache"] = request.getAuthCache();
  }

  if (!!request.hasAuthPort()) {
    query["AuthPort"] = request.getAuthPort();
  }

  if (!!request.hasAuthSecret()) {
    query["AuthSecret"] = request.getAuthSecret();
  }

  if (!!request.hasAuthServer()) {
    query["AuthServer"] = request.getAuthServer();
  }

  if (!!request.hasBinding()) {
    query["Binding"] = request.getBinding();
  }

  if (!!request.hasCir()) {
    query["Cir"] = request.getCir();
  }

  if (!!request.hasDaeClient()) {
    query["DaeClient"] = request.getDaeClient();
  }

  if (!!request.hasDaePort()) {
    query["DaePort"] = request.getDaePort();
  }

  if (!!request.hasDaeSecret()) {
    query["DaeSecret"] = request.getDaeSecret();
  }

  if (!!request.hasDisabled()) {
    query["Disabled"] = request.getDisabled();
  }

  if (!!request.hasDisassocLowAck()) {
    query["DisassocLowAck"] = request.getDisassocLowAck();
  }

  if (!!request.hasDisassocWeakRssi()) {
    query["DisassocWeakRssi"] = request.getDisassocWeakRssi();
  }

  if (!!request.hasDynamicVlan()) {
    query["DynamicVlan"] = request.getDynamicVlan();
  }

  if (!!request.hasEffect()) {
    query["Effect"] = request.getEffect();
  }

  if (!!request.hasEncKey()) {
    query["EncKey"] = request.getEncKey();
  }

  if (!!request.hasEncryption()) {
    query["Encryption"] = request.getEncryption();
  }

  if (!!request.hasHidden()) {
    query["Hidden"] = request.getHidden();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIeee80211w()) {
    query["Ieee80211w"] = request.getIeee80211w();
  }

  if (!!request.hasIgnoreWeakProbe()) {
    query["IgnoreWeakProbe"] = request.getIgnoreWeakProbe();
  }

  if (!!request.hasIsolate()) {
    query["Isolate"] = request.getIsolate();
  }

  if (!!request.hasLiteEffect()) {
    query["LiteEffect"] = request.getLiteEffect();
  }

  if (!!request.hasMaxInactivity()) {
    query["MaxInactivity"] = request.getMaxInactivity();
  }

  if (!!request.hasMaxassoc()) {
    query["Maxassoc"] = request.getMaxassoc();
  }

  if (!!request.hasMulticastForward()) {
    query["MulticastForward"] = request.getMulticastForward();
  }

  if (!!request.hasNasid()) {
    query["Nasid"] = request.getNasid();
  }

  if (!!request.hasNetwork()) {
    query["Network"] = request.getNetwork();
  }

  if (!!request.hasNewSsid()) {
    query["NewSsid"] = request.getNewSsid();
  }

  if (!!request.hasOwnip()) {
    query["Ownip"] = request.getOwnip();
  }

  if (!!request.hasSecondaryAcctPort()) {
    query["SecondaryAcctPort"] = request.getSecondaryAcctPort();
  }

  if (!!request.hasSecondaryAcctSecret()) {
    query["SecondaryAcctSecret"] = request.getSecondaryAcctSecret();
  }

  if (!!request.hasSecondaryAcctServer()) {
    query["SecondaryAcctServer"] = request.getSecondaryAcctServer();
  }

  if (!!request.hasSecondaryAuthPort()) {
    query["SecondaryAuthPort"] = request.getSecondaryAuthPort();
  }

  if (!!request.hasSecondaryAuthSecret()) {
    query["SecondaryAuthSecret"] = request.getSecondaryAuthSecret();
  }

  if (!!request.hasSecondaryAuthServer()) {
    query["SecondaryAuthServer"] = request.getSecondaryAuthServer();
  }

  if (!!request.hasShortPreamble()) {
    query["ShortPreamble"] = request.getShortPreamble();
  }

  if (!!request.hasSsid()) {
    query["Ssid"] = request.getSsid();
  }

  if (!!request.hasSsidLb()) {
    query["SsidLb"] = request.getSsidLb();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasVlanDhcp()) {
    query["VlanDhcp"] = request.getVlanDhcp();
  }

  if (!!request.hasWmm()) {
    query["Wmm"] = request.getWmm();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveApgroupSsidConfig"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveApgroupSsidConfigResponse>();
}

/**
 * @param request SaveApgroupSsidConfigRequest
 * @return SaveApgroupSsidConfigResponse
 */
SaveApgroupSsidConfigResponse Client::saveApgroupSsidConfig(const SaveApgroupSsidConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveApgroupSsidConfigWithOptions(request, runtime);
}

/**
 * @param request SetApAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetApAddressResponse
 */
SetApAddressResponse Client::setApAddressWithOptions(const SetApAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApAreaName()) {
    query["ApAreaName"] = request.getApAreaName();
  }

  if (!!request.hasApBuildingName()) {
    query["ApBuildingName"] = request.getApBuildingName();
  }

  if (!!request.hasApCampusName()) {
    query["ApCampusName"] = request.getApCampusName();
  }

  if (!!request.hasApCityName()) {
    query["ApCityName"] = request.getApCityName();
  }

  if (!!request.hasApFloor()) {
    query["ApFloor"] = request.getApFloor();
  }

  if (!!request.hasApGroup()) {
    query["ApGroup"] = request.getApGroup();
  }

  if (!!request.hasApName()) {
    query["ApName"] = request.getApName();
  }

  if (!!request.hasApNationName()) {
    query["ApNationName"] = request.getApNationName();
  }

  if (!!request.hasApProvinceName()) {
    query["ApProvinceName"] = request.getApProvinceName();
  }

  if (!!request.hasApUnitId()) {
    query["ApUnitId"] = request.getApUnitId();
  }

  if (!!request.hasApUnitName()) {
    query["ApUnitName"] = request.getApUnitName();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasLat()) {
    query["Lat"] = request.getLat();
  }

  if (!!request.hasLng()) {
    query["Lng"] = request.getLng();
  }

  if (!!request.hasMac()) {
    query["Mac"] = request.getMac();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetApAddress"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetApAddressResponse>();
}

/**
 * @param request SetApAddressRequest
 * @return SetApAddressResponse
 */
SetApAddressResponse Client::setApAddress(const SetApAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setApAddressWithOptions(request, runtime);
}

/**
 * @param request SetApNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetApNameResponse
 */
SetApNameResponse Client::setApNameWithOptions(const SetApNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApMac()) {
    query["ApMac"] = request.getApMac();
  }

  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetApName"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetApNameResponse>();
}

/**
 * @param request SetApNameRequest
 * @return SetApNameResponse
 */
SetApNameResponse Client::setApName(const SetApNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setApNameWithOptions(request, runtime);
}

/**
 * @summary 注销AP设备
 *
 * @param request UnRegisterApAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnRegisterApAssetResponse
 */
UnRegisterApAssetResponse Client::unRegisterApAssetWithOptions(const UnRegisterApAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAssetApgroupId()) {
    query["AssetApgroupId"] = request.getAssetApgroupId();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMac()) {
    query["Mac"] = request.getMac();
  }

  if (!!request.hasSerialNo()) {
    query["SerialNo"] = request.getSerialNo();
  }

  if (!!request.hasUseFor()) {
    query["UseFor"] = request.getUseFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnRegisterApAsset"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnRegisterApAssetResponse>();
}

/**
 * @summary 注销AP设备
 *
 * @param request UnRegisterApAssetRequest
 * @return UnRegisterApAssetResponse
 */
UnRegisterApAssetResponse Client::unRegisterApAsset(const UnRegisterApAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unRegisterApAssetWithOptions(request, runtime);
}

/**
 * @param request UpdateNetDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNetDeviceInfoResponse
 */
UpdateNetDeviceInfoResponse Client::updateNetDeviceInfoWithOptions(const UpdateNetDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  json body = {};
  if (!!request.hasDevices()) {
    body["Devices"] = request.getDevices();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateNetDeviceInfo"},
    {"version" , "2019-11-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNetDeviceInfoResponse>();
}

/**
 * @param request UpdateNetDeviceInfoRequest
 * @return UpdateNetDeviceInfoResponse
 */
UpdateNetDeviceInfoResponse Client::updateNetDeviceInfo(const UpdateNetDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNetDeviceInfoWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118