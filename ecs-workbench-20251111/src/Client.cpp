#include <darabonba/Core.hpp>
#include <alibabacloud/EcsWorkbench20251111.hpp>
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
using namespace AlibabaCloud::EcsWorkbench20251111::Models;
namespace AlibabaCloud
{
namespace EcsWorkbench20251111
{

AlibabaCloud::EcsWorkbench20251111::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("ecs-workbench", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 查询Workbench终端配置
 *
 * @description 查询Workbench终端配置
 *
 * @param request DescribeTerminalSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTerminalSettingsResponse
 */
DescribeTerminalSettingsResponse Client::describeTerminalSettingsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeTerminalSettings"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTerminalSettingsResponse>();
}

/**
 * @summary 查询Workbench终端配置
 *
 * @description 查询Workbench终端配置
 *
 * @return DescribeTerminalSettingsResponse
 */
DescribeTerminalSettingsResponse Client::describeTerminalSettings() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTerminalSettingsWithOptions(runtime);
}

/**
 * @summary 修改Workbench终端配置
 *
 * @description 修改Workbench终端配置
 *
 * @param tmpReq ModifyTerminalSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTerminalSettingsResponse
 */
ModifyTerminalSettingsResponse Client::modifyTerminalSettingsWithOptions(const ModifyTerminalSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyTerminalSettingsShrinkRequest request = ModifyTerminalSettingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPasswordlessLoginConfig()) {
    request.setPasswordlessLoginConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.passwordlessLoginConfig(), "PasswordlessLoginConfig", "json"));
  }

  json query = {};
  if (!!request.hasPasswordlessLoginConfigShrink()) {
    query["PasswordlessLoginConfig"] = request.passwordlessLoginConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTerminalSettings"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTerminalSettingsResponse>();
}

/**
 * @summary 修改Workbench终端配置
 *
 * @description 修改Workbench终端配置
 *
 * @param request ModifyTerminalSettingsRequest
 * @return ModifyTerminalSettingsResponse
 */
ModifyTerminalSettingsResponse Client::modifyTerminalSettings(const ModifyTerminalSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTerminalSettingsWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace EcsWorkbench20251111