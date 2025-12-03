#include <darabonba/Core.hpp>
#include <alibabacloud/Eais20190624.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Eais20190624::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Eais20190624
{

AlibabaCloud::Eais20190624::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "eais.aliyuncs.com"},
    {"ap-northeast-2-pop" , "eais.aliyuncs.com"},
    {"ap-south-1" , "eais.aliyuncs.com"},
    {"ap-southeast-1" , "eais.aliyuncs.com"},
    {"ap-southeast-2" , "eais.aliyuncs.com"},
    {"ap-southeast-3" , "eais.aliyuncs.com"},
    {"ap-southeast-5" , "eais.aliyuncs.com"},
    {"cn-beijing-finance-1" , "eais.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "eais.aliyuncs.com"},
    {"cn-beijing-gov-1" , "eais.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "eais.aliyuncs.com"},
    {"cn-edge-1" , "eais.aliyuncs.com"},
    {"cn-fujian" , "eais.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "eais.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "eais.aliyuncs.com"},
    {"cn-hangzhou-finance" , "eais.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "eais.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "eais.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "eais.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "eais.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "eais.aliyuncs.com"},
    {"cn-hongkong" , "eais.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "eais.aliyuncs.com"},
    {"cn-huhehaote" , "eais.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "eais.aliyuncs.com"},
    {"cn-north-2-gov-1" , "eais.aliyuncs.com"},
    {"cn-qingdao" , "eais.aliyuncs.com"},
    {"cn-qingdao-nebula" , "eais.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "eais.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "eais.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "eais.aliyuncs.com"},
    {"cn-shanghai-inner" , "eais.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "eais.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "eais.aliyuncs.com"},
    {"cn-shenzhen-inner" , "eais.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "eais.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "eais.aliyuncs.com"},
    {"cn-wuhan" , "eais.aliyuncs.com"},
    {"cn-wulanchabu" , "eais.aliyuncs.com"},
    {"cn-yushanfang" , "eais.aliyuncs.com"},
    {"cn-zhangbei" , "eais.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "eais.aliyuncs.com"},
    {"cn-zhangjiakou" , "eais.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "eais.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "eais.aliyuncs.com"},
    {"eu-central-1" , "eais.aliyuncs.com"},
    {"eu-west-1" , "eais.aliyuncs.com"},
    {"eu-west-1-oxs" , "eais.aliyuncs.com"},
    {"me-east-1" , "eais.aliyuncs.com"},
    {"rus-west-1-pop" , "eais.aliyuncs.com"},
    {"us-east-1" , "eais.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("eais", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 将弹性加速计算实例挂载到ECS实例上
 *
 * @param request AttachEaiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachEaiResponse
 */
AttachEaiResponse Client::attachEaiWithOptions(const AttachEaiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientInstanceId()) {
    query["ClientInstanceId"] = request.clientInstanceId();
  }

  if (!!request.hasElasticAcceleratedInstanceId()) {
    query["ElasticAcceleratedInstanceId"] = request.elasticAcceleratedInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachEai"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachEaiResponse>();
}

/**
 * @summary 将弹性加速计算实例挂载到ECS实例上
 *
 * @param request AttachEaiRequest
 * @return AttachEaiResponse
 */
AttachEaiResponse Client::attachEai(const AttachEaiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachEaiWithOptions(request, runtime);
}

/**
 * @summary 将EI绑定到ECS或ECI实例上
 *
 * @param request AttachEaisEiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachEaisEiResponse
 */
AttachEaisEiResponse Client::attachEaisEiWithOptions(const AttachEaisEiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientInstanceId()) {
    query["ClientInstanceId"] = request.clientInstanceId();
  }

  if (!!request.hasEiInstanceId()) {
    query["EiInstanceId"] = request.eiInstanceId();
  }

  if (!!request.hasEiInstanceType()) {
    query["EiInstanceType"] = request.eiInstanceType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachEaisEi"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachEaisEiResponse>();
}

/**
 * @summary 将EI绑定到ECS或ECI实例上
 *
 * @param request AttachEaisEiRequest
 * @return AttachEaisEiResponse
 */
AttachEaisEiResponse Client::attachEaisEi(const AttachEaisEiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachEaisEiWithOptions(request, runtime);
}

/**
 * @summary 资源转组
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary 资源转组
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary 创建一个弹性加速计算实例
 *
 * @param request CreateEaiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEaiResponse
 */
CreateEaiResponse Client::createEaiWithOptions(const CreateEaiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasImage()) {
    query["Image"] = request.image();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEai"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEaiResponse>();
}

/**
 * @summary 创建一个弹性加速计算实例
 *
 * @param request CreateEaiRequest
 * @return CreateEaiResponse
 */
CreateEaiResponse Client::createEai(const CreateEaiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEaiWithOptions(request, runtime);
}

/**
 * @summary 创建一个EAIS实例和ECI实例并绑定
 *
 * @param tmpReq CreateEaiEciRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEaiEciResponse
 */
CreateEaiEciResponse Client::createEaiEciWithOptions(const CreateEaiEciRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEaiEciShrinkRequest request = CreateEaiEciShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEci()) {
    request.setEciShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.eci(), "Eci", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasEaisName()) {
    query["EaisName"] = request.eaisName();
  }

  if (!!request.hasEaisType()) {
    query["EaisType"] = request.eaisType();
  }

  if (!!request.hasEciShrink()) {
    query["Eci"] = request.eciShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEaiEci"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEaiEciResponse>();
}

/**
 * @summary 创建一个EAIS实例和ECI实例并绑定
 *
 * @param request CreateEaiEciRequest
 * @return CreateEaiEciResponse
 */
CreateEaiEciResponse Client::createEaiEci(const CreateEaiEciRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEaiEciWithOptions(request, runtime);
}

/**
 * @summary 创建一个EAIS实例和ECS实例并绑定
 *
 * @param tmpReq CreateEaiEcsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEaiEcsResponse
 */
CreateEaiEcsResponse Client::createEaiEcsWithOptions(const CreateEaiEcsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEaiEcsShrinkRequest request = CreateEaiEcsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEcs()) {
    request.setEcsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ecs(), "Ecs", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasEaisName()) {
    query["EaisName"] = request.eaisName();
  }

  if (!!request.hasEaisType()) {
    query["EaisType"] = request.eaisType();
  }

  if (!!request.hasEcsShrink()) {
    query["Ecs"] = request.ecsShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEaiEcs"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEaiEcsResponse>();
}

/**
 * @summary 创建一个EAIS实例和ECS实例并绑定
 *
 * @param request CreateEaiEcsRequest
 * @return CreateEaiEcsResponse
 */
CreateEaiEcsResponse Client::createEaiEcs(const CreateEaiEcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEaiEcsWithOptions(request, runtime);
}

/**
 * @summary 创建一个EAIS Jupyter环境
 *
 * @param tmpReq CreateEaiJupyterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEaiJupyterResponse
 */
CreateEaiJupyterResponse Client::createEaiJupyterWithOptions(const CreateEaiJupyterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEaiJupyterShrinkRequest request = CreateEaiJupyterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEnvironmentVar()) {
    request.setEnvironmentVarShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.environmentVar(), "EnvironmentVar", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasEaisName()) {
    query["EaisName"] = request.eaisName();
  }

  if (!!request.hasEaisType()) {
    query["EaisType"] = request.eaisType();
  }

  if (!!request.hasEnvironmentVarShrink()) {
    query["EnvironmentVar"] = request.environmentVarShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEaiJupyter"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEaiJupyterResponse>();
}

/**
 * @summary 创建一个EAIS Jupyter环境
 *
 * @param request CreateEaiJupyterRequest
 * @return CreateEaiJupyterResponse
 */
CreateEaiJupyterResponse Client::createEaiJupyter(const CreateEaiJupyterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEaiJupyterWithOptions(request, runtime);
}

/**
 * @summary 创建一个弹性加速计算实例
 *
 * @param request CreateEaisEiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEaisEiResponse
 */
CreateEaisEiResponse Client::createEaisEiWithOptions(const CreateEaisEiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEaisEi"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEaisEiResponse>();
}

/**
 * @summary 创建一个弹性加速计算实例
 *
 * @param request CreateEaisEiRequest
 * @return CreateEaisEiResponse
 */
CreateEaisEiResponse Client::createEaisEi(const CreateEaisEiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEaisEiWithOptions(request, runtime);
}

/**
 * @summary 释放一个弹性加速计算实例
 *
 * @param request DeleteEaiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEaiResponse
 */
DeleteEaiResponse Client::deleteEaiWithOptions(const DeleteEaiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasElasticAcceleratedInstanceId()) {
    query["ElasticAcceleratedInstanceId"] = request.elasticAcceleratedInstanceId();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEai"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEaiResponse>();
}

/**
 * @summary 释放一个弹性加速计算实例
 *
 * @param request DeleteEaiRequest
 * @return DeleteEaiResponse
 */
DeleteEaiResponse Client::deleteEai(const DeleteEaiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEaiWithOptions(request, runtime);
}

/**
 * @summary 释放一个弹性加速计算实例以及与其绑定的ECS或ECI实例
 *
 * @param request DeleteEaiAllRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEaiAllResponse
 */
DeleteEaiAllResponse Client::deleteEaiAllWithOptions(const DeleteEaiAllRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientInstanceId()) {
    query["ClientInstanceId"] = request.clientInstanceId();
  }

  if (!!request.hasElasticAcceleratedInstanceId()) {
    query["ElasticAcceleratedInstanceId"] = request.elasticAcceleratedInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEaiAll"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEaiAllResponse>();
}

/**
 * @summary 释放一个弹性加速计算实例以及与其绑定的ECS或ECI实例
 *
 * @param request DeleteEaiAllRequest
 * @return DeleteEaiAllResponse
 */
DeleteEaiAllResponse Client::deleteEaiAll(const DeleteEaiAllRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEaiAllWithOptions(request, runtime);
}

/**
 * @summary 释放弹性加速计算实例
 *
 * @param request DeleteEaisEiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEaisEiResponse
 */
DeleteEaisEiResponse Client::deleteEaisEiWithOptions(const DeleteEaisEiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEiInstanceId()) {
    query["EiInstanceId"] = request.eiInstanceId();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEaisEi"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEaisEiResponse>();
}

/**
 * @summary 释放弹性加速计算实例
 *
 * @param request DeleteEaisEiRequest
 * @return DeleteEaisEiResponse
 */
DeleteEaisEiResponse Client::deleteEaisEi(const DeleteEaisEiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEaisEiWithOptions(request, runtime);
}

/**
 * @summary 查询一个或多个弹性加速计算实例的详细信息
 *
 * @param request DescribeEaisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEaisResponse
 */
DescribeEaisResponse Client::describeEaisWithOptions(const DescribeEaisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientInstanceId()) {
    query["ClientInstanceId"] = request.clientInstanceId();
  }

  if (!!request.hasElasticAcceleratedInstanceIds()) {
    query["ElasticAcceleratedInstanceIds"] = request.elasticAcceleratedInstanceIds();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEais"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEaisResponse>();
}

/**
 * @summary 查询一个或多个弹性加速计算实例的详细信息
 *
 * @param request DescribeEaisRequest
 * @return DescribeEaisResponse
 */
DescribeEaisResponse Client::describeEais(const DescribeEaisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEaisWithOptions(request, runtime);
}

/**
 * @summary 查询您可以使用的阿里云地域
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary 查询您可以使用的阿里云地域
 *
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(runtime);
}

/**
 * @summary 从ECS实例上卸载弹性加速计算实例
 *
 * @param request DetachEaiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachEaiResponse
 */
DetachEaiResponse Client::detachEaiWithOptions(const DetachEaiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasElasticAcceleratedInstanceId()) {
    query["ElasticAcceleratedInstanceId"] = request.elasticAcceleratedInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachEai"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachEaiResponse>();
}

/**
 * @summary 从ECS实例上卸载弹性加速计算实例
 *
 * @param request DetachEaiRequest
 * @return DetachEaiResponse
 */
DetachEaiResponse Client::detachEai(const DetachEaiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachEaiWithOptions(request, runtime);
}

/**
 * @summary 将EI实例与ECS或ECI实例解绑
 *
 * @param request DetachEaisEiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachEaisEiResponse
 */
DetachEaisEiResponse Client::detachEaisEiWithOptions(const DetachEaisEiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEiInstanceId()) {
    query["EiInstanceId"] = request.eiInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachEaisEi"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachEaisEiResponse>();
}

/**
 * @summary 将EI实例与ECS或ECI实例解绑
 *
 * @param request DetachEaisEiRequest
 * @return DetachEaisEiResponse
 */
DetachEaisEiResponse Client::detachEaisEi(const DetachEaisEiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachEaisEiWithOptions(request, runtime);
}

/**
 * @summary 获取EAIS实例级别的监控数据
 *
 * @param request GetInstanceMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceMetricsResponse
 */
GetInstanceMetricsResponse Client::getInstanceMetricsWithOptions(const GetInstanceMetricsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.metricType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTimeStep()) {
    query["TimeStep"] = request.timeStep();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceMetrics"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceMetricsResponse>();
}

/**
 * @summary 获取EAIS实例级别的监控数据
 *
 * @param request GetInstanceMetricsRequest
 * @return GetInstanceMetricsResponse
 */
GetInstanceMetricsResponse Client::getInstanceMetrics(const GetInstanceMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceMetricsWithOptions(request, runtime);
}

/**
 * @summary 查询标签列表
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary 查询标签列表
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary 启动一个部署了notebook的弹性加速计算实例
 *
 * @param request StartEaiJupyterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartEaiJupyterResponse
 */
StartEaiJupyterResponse Client::startEaiJupyterWithOptions(const StartEaiJupyterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartEaiJupyter"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartEaiJupyterResponse>();
}

/**
 * @summary 启动一个部署了notebook的弹性加速计算实例
 *
 * @param request StartEaiJupyterRequest
 * @return StartEaiJupyterResponse
 */
StartEaiJupyterResponse Client::startEaiJupyter(const StartEaiJupyterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startEaiJupyterWithOptions(request, runtime);
}

/**
 * @summary 启动一个弹性加速计算实例
 *
 * @param request StartEaisEiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartEaisEiResponse
 */
StartEaisEiResponse Client::startEaisEiWithOptions(const StartEaisEiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEiInstanceId()) {
    query["EiInstanceId"] = request.eiInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartEaisEi"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartEaisEiResponse>();
}

/**
 * @summary 启动一个弹性加速计算实例
 *
 * @param request StartEaisEiRequest
 * @return StartEaisEiResponse
 */
StartEaisEiResponse Client::startEaisEi(const StartEaisEiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startEaisEiWithOptions(request, runtime);
}

/**
 * @summary 停止一个部署了notebook的弹性加速计算实例
 *
 * @param request StopEaiJupyterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopEaiJupyterResponse
 */
StopEaiJupyterResponse Client::stopEaiJupyterWithOptions(const StopEaiJupyterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopEaiJupyter"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopEaiJupyterResponse>();
}

/**
 * @summary 停止一个部署了notebook的弹性加速计算实例
 *
 * @param request StopEaiJupyterRequest
 * @return StopEaiJupyterResponse
 */
StopEaiJupyterResponse Client::stopEaiJupyter(const StopEaiJupyterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopEaiJupyterWithOptions(request, runtime);
}

/**
 * @summary 停止一个弹性加速计算实例
 *
 * @param request StopEaisEiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopEaisEiResponse
 */
StopEaisEiResponse Client::stopEaisEiWithOptions(const StopEaisEiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEiInstanceId()) {
    query["EiInstanceId"] = request.eiInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopEaisEi"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopEaisEiResponse>();
}

/**
 * @summary 停止一个弹性加速计算实例
 *
 * @param request StopEaisEiRequest
 * @return StopEaisEiResponse
 */
StopEaisEiResponse Client::stopEaisEi(const StopEaisEiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopEaisEiWithOptions(request, runtime);
}

/**
 * @summary 为弹性加速计算实例创建并绑定标签
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary 为弹性加速计算实例创建并绑定标签
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary 解绑并删除标签
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2019-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary 解绑并删除标签
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Eais20190624