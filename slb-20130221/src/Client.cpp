#include <darabonba/Core.hpp>
#include <alibabacloud/Slb20130221.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Slb20130221::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Slb20130221
{

AlibabaCloud::Slb20130221::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "slb.aliyuncs.com"},
    {"cn-beijing" , "slb.aliyuncs.com"},
    {"cn-hangzhou" , "slb.aliyuncs.com"},
    {"cn-shanghai" , "slb.aliyuncs.com"},
    {"cn-shenzhen" , "slb.aliyuncs.com"},
    {"cn-hongkong" , "slb.aliyuncs.com"},
    {"ap-southeast-1" , "slb.aliyuncs.com"},
    {"us-east-1" , "slb.aliyuncs.com"},
    {"us-west-1" , "slb.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "slb.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "slb.aliyuncs.com"},
    {"cn-north-2-gov-1" , "slb.aliyuncs.com"},
    {"ap-northeast-2-pop" , "slb.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "slb.aliyuncs.com"},
    {"cn-beijing-gov-1" , "slb.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "slb.aliyuncs.com"},
    {"cn-edge-1" , "slb.aliyuncs.com"},
    {"cn-fujian" , "slb.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "slb.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "slb.aliyuncs.com"},
    {"cn-hangzhou-finance" , "slb.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "slb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "slb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "slb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "slb.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "slb.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "slb.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "slb-api.cn-qingdao-nebula.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "slb.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "slb.aliyuncs.com"},
    {"cn-shanghai-inner" , "slb.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "slb.aliyuncs.com"},
    {"cn-shenzhen-inner" , "slb.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "slb.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "slb.aliyuncs.com"},
    {"cn-wuhan" , "slb.aliyuncs.com"},
    {"cn-yushanfang" , "slb.aliyuncs.com"},
    {"cn-zhangbei" , "slb.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "slb.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "slb.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "slb.aliyuncs.com"},
    {"eu-west-1-oxs" , "slb.aliyuncs.com"},
    {"rus-west-1-pop" , "slb.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("slb", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 添加后端服务器
 *
 * @param request AddBackendServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddBackendServersResponse
 */
AddBackendServersResponse Client::addBackendServersWithOptions(const AddBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServers()) {
    query["BackendServers"] = request.getBackendServers();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasAccessKeyId()) {
    query["access_key_id"] = request.getAccessKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddBackendServers"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddBackendServersResponse>();
}

/**
 * @summary 添加后端服务器
 *
 * @param request AddBackendServersRequest
 * @return AddBackendServersResponse
 */
AddBackendServersResponse Client::addBackendServers(const AddBackendServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addBackendServersWithOptions(request, runtime);
}

/**
 * @summary 创建实例
 *
 * @param request CreateLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerResponse
 */
CreateLoadBalancerResponse Client::createLoadBalancerWithOptions(const CreateLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasIsPublicAddress()) {
    query["IsPublicAddress"] = request.getIsPublicAddress();
  }

  if (!!request.hasLoadBalancerMode()) {
    query["LoadBalancerMode"] = request.getLoadBalancerMode();
  }

  if (!!request.hasLoadBalancerName()) {
    query["LoadBalancerName"] = request.getLoadBalancerName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancer"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadBalancerResponse>();
}

/**
 * @summary 创建实例
 *
 * @param request CreateLoadBalancerRequest
 * @return CreateLoadBalancerResponse
 */
CreateLoadBalancerResponse Client::createLoadBalancer(const CreateLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary 创建HTTP监听
 *
 * @param request CreateLoadBalancerHTTPListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerHTTPListenerResponse
 */
CreateLoadBalancerHTTPListenerResponse Client::createLoadBalancerHTTPListenerWithOptions(const CreateLoadBalancerHTTPListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServerPort()) {
    query["BackendServerPort"] = request.getBackendServerPort();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasCookie()) {
    query["Cookie"] = request.getCookie();
  }

  if (!!request.hasCookieTimeout()) {
    query["CookieTimeout"] = request.getCookieTimeout();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasHealthCheck()) {
    query["HealthCheck"] = request.getHealthCheck();
  }

  if (!!request.hasHealthCheckTimeout()) {
    query["HealthCheckTimeout"] = request.getHealthCheckTimeout();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.getHealthyThreshold();
  }

  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasListenerStatus()) {
    query["ListenerStatus"] = request.getListenerStatus();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasStickySession()) {
    query["StickySession"] = request.getStickySession();
  }

  if (!!request.hasStickySessionType()) {
    query["StickySessionType"] = request.getStickySessionType();
  }

  if (!!request.hasURI()) {
    query["URI"] = request.getURI();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.getUnhealthyThreshold();
  }

  if (!!request.hasXForwardedFor()) {
    query["XForwardedFor"] = request.getXForwardedFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancerHTTPListener"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadBalancerHTTPListenerResponse>();
}

/**
 * @summary 创建HTTP监听
 *
 * @param request CreateLoadBalancerHTTPListenerRequest
 * @return CreateLoadBalancerHTTPListenerResponse
 */
CreateLoadBalancerHTTPListenerResponse Client::createLoadBalancerHTTPListener(const CreateLoadBalancerHTTPListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerHTTPListenerWithOptions(request, runtime);
}

/**
 * @summary 创建TCP监听
 *
 * @param request CreateLoadBalancerTCPListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerTCPListenerResponse
 */
CreateLoadBalancerTCPListenerResponse Client::createLoadBalancerTCPListenerWithOptions(const CreateLoadBalancerTCPListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServerPort()) {
    query["BackendServerPort"] = request.getBackendServerPort();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasConnectPort()) {
    query["ConnectPort"] = request.getConnectPort();
  }

  if (!!request.hasConnectTimeout()) {
    query["ConnectTimeout"] = request.getConnectTimeout();
  }

  if (!!request.hasEstablishedTimeout()) {
    query["EstablishedTimeout"] = request.getEstablishedTimeout();
  }

  if (!!request.hasHealthCheck()) {
    query["HealthCheck"] = request.getHealthCheck();
  }

  if (!!request.hasHealthCheckDomain()) {
    query["HealthCheckDomain"] = request.getHealthCheckDomain();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    query["HealthCheckHttpCode"] = request.getHealthCheckHttpCode();
  }

  if (!!request.hasHealthCheckType()) {
    query["HealthCheckType"] = request.getHealthCheckType();
  }

  if (!!request.hasHealthCheckURI()) {
    query["HealthCheckURI"] = request.getHealthCheckURI();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.getHealthyThreshold();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasListenerStatus()) {
    query["ListenerStatus"] = request.getListenerStatus();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasMasterSlaveServerGroupId()) {
    query["MasterSlaveServerGroupId"] = request.getMasterSlaveServerGroupId();
  }

  if (!!request.hasMaxConnection()) {
    query["MaxConnection"] = request.getMaxConnection();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPersistenceTimeout()) {
    query["PersistenceTimeout"] = request.getPersistenceTimeout();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.getUnhealthyThreshold();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.getVServerGroupId();
  }

  if (!!request.hasAccessKeyId()) {
    query["access_key_id"] = request.getAccessKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancerTCPListener"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadBalancerTCPListenerResponse>();
}

/**
 * @summary 创建TCP监听
 *
 * @param request CreateLoadBalancerTCPListenerRequest
 * @return CreateLoadBalancerTCPListenerResponse
 */
CreateLoadBalancerTCPListenerResponse Client::createLoadBalancerTCPListener(const CreateLoadBalancerTCPListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerTCPListenerWithOptions(request, runtime);
}

/**
 * @summary 删除实例
 *
 * @param request DeleteLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLoadBalancerResponse
 */
DeleteLoadBalancerResponse Client::deleteLoadBalancerWithOptions(const DeleteLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasAccessKeyId()) {
    query["access_key_id"] = request.getAccessKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLoadBalancer"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLoadBalancerResponse>();
}

/**
 * @summary 删除实例
 *
 * @param request DeleteLoadBalancerRequest
 * @return DeleteLoadBalancerResponse
 */
DeleteLoadBalancerResponse Client::deleteLoadBalancer(const DeleteLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary 删除监听
 *
 * @param request DeleteLoadBalancerListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLoadBalancerListenerResponse
 */
DeleteLoadBalancerListenerResponse Client::deleteLoadBalancerListenerWithOptions(const DeleteLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasAccessKeyId()) {
    query["access_key_id"] = request.getAccessKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLoadBalancerListener"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLoadBalancerListenerResponse>();
}

/**
 * @summary 删除监听
 *
 * @param request DeleteLoadBalancerListenerRequest
 * @return DeleteLoadBalancerListenerResponse
 */
DeleteLoadBalancerListenerResponse Client::deleteLoadBalancerListener(const DeleteLoadBalancerListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLoadBalancerListenerWithOptions(request, runtime);
}

/**
 * @summary 查询后端服务器
 *
 * @param request DescribeBackendServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackendServersResponse
 */
DescribeBackendServersResponse Client::describeBackendServersWithOptions(const DescribeBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasAccessKeyId()) {
    query["access_key_id"] = request.getAccessKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackendServers"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackendServersResponse>();
}

/**
 * @summary 查询后端服务器
 *
 * @param request DescribeBackendServersRequest
 * @return DescribeBackendServersResponse
 */
DescribeBackendServersResponse Client::describeBackendServers(const DescribeBackendServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackendServersWithOptions(request, runtime);
}

/**
 * @summary 查询实例信息
 *
 * @param request DescribeLoadBalancerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerAttributeResponse
 */
DescribeLoadBalancerAttributeResponse Client::describeLoadBalancerAttributeWithOptions(const DescribeLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasAccessKeyId()) {
    query["access_key_id"] = request.getAccessKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerAttribute"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerAttributeResponse>();
}

/**
 * @summary 查询实例信息
 *
 * @param request DescribeLoadBalancerAttributeRequest
 * @return DescribeLoadBalancerAttributeResponse
 */
DescribeLoadBalancerAttributeResponse Client::describeLoadBalancerAttribute(const DescribeLoadBalancerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询HTTP监听配置
 *
 * @param request DescribeLoadBalancerHTTPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerHTTPListenerAttributeResponse
 */
DescribeLoadBalancerHTTPListenerAttributeResponse Client::describeLoadBalancerHTTPListenerAttributeWithOptions(const DescribeLoadBalancerHTTPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasAccessKeyId()) {
    query["access_key_id"] = request.getAccessKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerHTTPListenerAttribute"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerHTTPListenerAttributeResponse>();
}

/**
 * @summary 查询HTTP监听配置
 *
 * @param request DescribeLoadBalancerHTTPListenerAttributeRequest
 * @return DescribeLoadBalancerHTTPListenerAttributeResponse
 */
DescribeLoadBalancerHTTPListenerAttributeResponse Client::describeLoadBalancerHTTPListenerAttribute(const DescribeLoadBalancerHTTPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerHTTPListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询TCP监听配置
 *
 * @param request DescribeLoadBalancerTCPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerTCPListenerAttributeResponse
 */
DescribeLoadBalancerTCPListenerAttributeResponse Client::describeLoadBalancerTCPListenerAttributeWithOptions(const DescribeLoadBalancerTCPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasAccessKeyId()) {
    query["access_key_id"] = request.getAccessKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerTCPListenerAttribute"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerTCPListenerAttributeResponse>();
}

/**
 * @summary 查询TCP监听配置
 *
 * @param request DescribeLoadBalancerTCPListenerAttributeRequest
 * @return DescribeLoadBalancerTCPListenerAttributeResponse
 */
DescribeLoadBalancerTCPListenerAttributeResponse Client::describeLoadBalancerTCPListenerAttribute(const DescribeLoadBalancerTCPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerTCPListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary slb实例批量查询
 *
 * @param request DescribeLoadBalancersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancersResponse
 */
DescribeLoadBalancersResponse Client::describeLoadBalancersWithOptions(const DescribeLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasAddressType()) {
    query["AddressType"] = request.getAddressType();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.getInternetChargeType();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasLoadBalancerName()) {
    query["LoadBalancerName"] = request.getLoadBalancerName();
  }

  if (!!request.hasMasterZoneId()) {
    query["MasterZoneId"] = request.getMasterZoneId();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasServerId()) {
    query["ServerId"] = request.getServerId();
  }

  if (!!request.hasServerIntranetAddress()) {
    query["ServerIntranetAddress"] = request.getServerIntranetAddress();
  }

  if (!!request.hasSlaveZoneId()) {
    query["SlaveZoneId"] = request.getSlaveZoneId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasAccessKeyId()) {
    query["access_key_id"] = request.getAccessKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancers"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancersResponse>();
}

/**
 * @summary slb实例批量查询
 *
 * @param request DescribeLoadBalancersRequest
 * @return DescribeLoadBalancersResponse
 */
DescribeLoadBalancersResponse Client::describeLoadBalancers(const DescribeLoadBalancersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancersWithOptions(request, runtime);
}

/**
 * @summary 查询可用地域
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasAccessKeyId()) {
    query["access_key_id"] = request.getAccessKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2013-02-21"},
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
 * @summary 查询可用地域
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary 删除默认服务器组的后端服务器
 *
 * @param request RemoveBackendServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveBackendServersResponse
 */
RemoveBackendServersResponse Client::removeBackendServersWithOptions(const RemoveBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServers()) {
    query["BackendServers"] = request.getBackendServers();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasAccessKeyId()) {
    query["access_key_id"] = request.getAccessKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveBackendServers"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveBackendServersResponse>();
}

/**
 * @summary 删除默认服务器组的后端服务器
 *
 * @param request RemoveBackendServersRequest
 * @return RemoveBackendServersResponse
 */
RemoveBackendServersResponse Client::removeBackendServers(const RemoveBackendServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeBackendServersWithOptions(request, runtime);
}

/**
 * @summary 更新http监听
 *
 * @param request SetLoadBalancerHTTPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerHTTPListenerAttributeResponse
 */
SetLoadBalancerHTTPListenerAttributeResponse Client::setLoadBalancerHTTPListenerAttributeWithOptions(const SetLoadBalancerHTTPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCookie()) {
    query["Cookie"] = request.getCookie();
  }

  if (!!request.hasCookieTimeout()) {
    query["CookieTimeout"] = request.getCookieTimeout();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasHealthCheck()) {
    query["HealthCheck"] = request.getHealthCheck();
  }

  if (!!request.hasHealthCheckTimeout()) {
    query["HealthCheckTimeout"] = request.getHealthCheckTimeout();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.getHealthyThreshold();
  }

  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasStickySession()) {
    query["StickySession"] = request.getStickySession();
  }

  if (!!request.hasStickySessionType()) {
    query["StickySessionType"] = request.getStickySessionType();
  }

  if (!!request.hasURI()) {
    query["URI"] = request.getURI();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.getUnhealthyThreshold();
  }

  if (!!request.hasXForwardedFor()) {
    query["XForwardedFor"] = request.getXForwardedFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerHTTPListenerAttribute"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerHTTPListenerAttributeResponse>();
}

/**
 * @summary 更新http监听
 *
 * @param request SetLoadBalancerHTTPListenerAttributeRequest
 * @return SetLoadBalancerHTTPListenerAttributeResponse
 */
SetLoadBalancerHTTPListenerAttributeResponse Client::setLoadBalancerHTTPListenerAttribute(const SetLoadBalancerHTTPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerHTTPListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary 修改监听状态
 *
 * @param request SetLoadBalancerListenerStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerListenerStatusResponse
 */
SetLoadBalancerListenerStatusResponse Client::setLoadBalancerListenerStatusWithOptions(const SetLoadBalancerListenerStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasListenerStatus()) {
    query["ListenerStatus"] = request.getListenerStatus();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerListenerStatus"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerListenerStatusResponse>();
}

/**
 * @summary 修改监听状态
 *
 * @param request SetLoadBalancerListenerStatusRequest
 * @return SetLoadBalancerListenerStatusResponse
 */
SetLoadBalancerListenerStatusResponse Client::setLoadBalancerListenerStatus(const SetLoadBalancerListenerStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerListenerStatusWithOptions(request, runtime);
}

/**
 * @summary 修改实例名称
 *
 * @param request SetLoadBalancerNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerNameResponse
 */
SetLoadBalancerNameResponse Client::setLoadBalancerNameWithOptions(const SetLoadBalancerNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasLoadBalancerName()) {
    query["LoadBalancerName"] = request.getLoadBalancerName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasAccessKeyId()) {
    query["access_key_id"] = request.getAccessKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerName"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerNameResponse>();
}

/**
 * @summary 修改实例名称
 *
 * @param request SetLoadBalancerNameRequest
 * @return SetLoadBalancerNameResponse
 */
SetLoadBalancerNameResponse Client::setLoadBalancerName(const SetLoadBalancerNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerNameWithOptions(request, runtime);
}

/**
 * @summary 修改实例状态
 *
 * @param request SetLoadBalancerStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerStatusResponse
 */
SetLoadBalancerStatusResponse Client::setLoadBalancerStatusWithOptions(const SetLoadBalancerStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasLoadBalancerStatus()) {
    query["LoadBalancerStatus"] = request.getLoadBalancerStatus();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasAccessKeyId()) {
    query["access_key_id"] = request.getAccessKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerStatus"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerStatusResponse>();
}

/**
 * @summary 修改实例状态
 *
 * @param request SetLoadBalancerStatusRequest
 * @return SetLoadBalancerStatusResponse
 */
SetLoadBalancerStatusResponse Client::setLoadBalancerStatus(const SetLoadBalancerStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerStatusWithOptions(request, runtime);
}

/**
 * @summary 更新tcp监听
 *
 * @param request SetLoadBalancerTCPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerTCPListenerAttributeResponse
 */
SetLoadBalancerTCPListenerAttributeResponse Client::setLoadBalancerTCPListenerAttributeWithOptions(const SetLoadBalancerTCPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectPort()) {
    query["ConnectPort"] = request.getConnectPort();
  }

  if (!!request.hasConnectTimeout()) {
    query["ConnectTimeout"] = request.getConnectTimeout();
  }

  if (!!request.hasHealthCheck()) {
    query["HealthCheck"] = request.getHealthCheck();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.getHealthyThreshold();
  }

  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPersistenceTimeout()) {
    query["PersistenceTimeout"] = request.getPersistenceTimeout();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.getUnhealthyThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerTCPListenerAttribute"},
    {"version" , "2013-02-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerTCPListenerAttributeResponse>();
}

/**
 * @summary 更新tcp监听
 *
 * @param request SetLoadBalancerTCPListenerAttributeRequest
 * @return SetLoadBalancerTCPListenerAttributeResponse
 */
SetLoadBalancerTCPListenerAttributeResponse Client::setLoadBalancerTCPListenerAttribute(const SetLoadBalancerTCPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerTCPListenerAttributeWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Slb20130221