#include <darabonba/Core.hpp>
#include <alibabacloud/CloudAPI20160714.hpp>
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
using namespace AlibabaCloud::CloudAPI20160714::Models;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{

AlibabaCloud::CloudAPI20160714::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "apigateway.cn-qingdao.aliyuncs.com"},
    {"cn-beijing" , "apigateway.cn-beijing.aliyuncs.com"},
    {"cn-zhangjiakou" , "apigateway.cn-zhangjiakou.aliyuncs.com"},
    {"cn-huhehaote" , "apigateway.cn-huhehaote.aliyuncs.com"},
    {"cn-wulanchabu" , "apigateway.cn-wulanchabu.aliyuncs.com"},
    {"cn-hangzhou" , "apigateway.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai" , "apigateway.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen" , "apigateway.cn-shenzhen.aliyuncs.com"},
    {"cn-heyuan" , "apigateway.cn-heyuan.aliyuncs.com"},
    {"cn-guangzhou" , "apigateway.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu" , "apigateway.cn-chengdu.aliyuncs.com"},
    {"cn-hongkong" , "apigateway.cn-hongkong.aliyuncs.com"},
    {"ap-northeast-1" , "apigateway.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-1" , "apigateway.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "apigateway.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3" , "apigateway.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5" , "apigateway.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-6" , "apigateway.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-7" , "apigateway.ap-southeast-7.aliyuncs.com"},
    {"us-east-1" , "apigateway.us-east-1.aliyuncs.com"},
    {"us-west-1" , "apigateway.us-west-1.aliyuncs.com"},
    {"eu-west-1" , "apigateway.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "apigateway.eu-central-1.aliyuncs.com"},
    {"ap-south-1" , "apigateway.ap-south-1.aliyuncs.com"},
    {"me-east-1" , "apigateway.me-east-1.aliyuncs.com"},
    {"me-central-1" , "apigateway.me-central-1.aliyuncs.com"},
    {"cn-hangzhou-finance" , "apigateway.cn-hangzhou-finance.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "apigateway.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "apigateway.cn-shenzhen-finance-1.aliyuncs.com"},
    {"cn-north-2-gov-1" , "apigateway.cn-north-2-gov-1.aliyuncs.com"},
    {"ap-northeast-2-pop" , "apigateway.aliyuncs.com"},
    {"cn-beijing-finance-1" , "apigateway.cn-beijing-finance-1.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "apigateway.aliyuncs.com"},
    {"cn-beijing-gov-1" , "apigateway.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "apigateway.aliyuncs.com"},
    {"cn-edge-1" , "apigateway.aliyuncs.com"},
    {"cn-fujian" , "apigateway.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "apigateway.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "apigateway.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "apigateway.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "apigateway.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "apigateway.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "apigateway.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "apigateway.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "apigateway.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "apigateway.aliyuncs.com"},
    {"cn-qingdao-nebula" , "apigateway.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "apigateway.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "apigateway.aliyuncs.com"},
    {"cn-shanghai-inner" , "apigateway.cn-shanghai-inner.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "apigateway.aliyuncs.com"},
    {"cn-shenzhen-inner" , "apigateway.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "apigateway.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "apigateway.aliyuncs.com"},
    {"cn-wuhan" , "apigateway.aliyuncs.com"},
    {"cn-yushanfang" , "apigateway.aliyuncs.com"},
    {"cn-zhangbei" , "apigateway.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "apigateway.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "apigateway.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "apigateway.aliyuncs.com"},
    {"eu-west-1-oxs" , "apigateway.aliyuncs.com"},
    {"rus-west-1-pop" , "apigateway.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("cloudapi", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Unpublishes a specified API from a specified runtime environment.
 *
 * @description *   This operation is intended for API providers and is the opposite of DeployApi.
 * *   An API can be unpublished from a specified runtime environment in under 5 seconds.
 * *   An unpublished API cannot be called in the specified runtime environment.
 *
 * @param request AbolishApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AbolishApiResponse
 */
AbolishApiResponse Client::abolishApiWithOptions(const AbolishApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AbolishApi"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AbolishApiResponse>();
}

/**
 * @summary Unpublishes a specified API from a specified runtime environment.
 *
 * @description *   This operation is intended for API providers and is the opposite of DeployApi.
 * *   An API can be unpublished from a specified runtime environment in under 5 seconds.
 * *   An unpublished API cannot be called in the specified runtime environment.
 *
 * @param request AbolishApiRequest
 * @return AbolishApiResponse
 */
AbolishApiResponse Client::abolishApi(const AbolishApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return abolishApiWithOptions(request, runtime);
}

/**
 * @summary This feature provides instance-level access control capabilities for dedicated instances. Adds an IP address entry to the access control polocy of an instance.
 *
 * @param request AddAccessControlListEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAccessControlListEntryResponse
 */
AddAccessControlListEntryResponse Client::addAccessControlListEntryWithOptions(const AddAccessControlListEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclEntrys()) {
    query["AclEntrys"] = request.getAclEntrys();
  }

  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAccessControlListEntry"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAccessControlListEntryResponse>();
}

/**
 * @summary This feature provides instance-level access control capabilities for dedicated instances. Adds an IP address entry to the access control polocy of an instance.
 *
 * @param request AddAccessControlListEntryRequest
 * @return AddAccessControlListEntryResponse
 */
AddAccessControlListEntryResponse Client::addAccessControlListEntry(const AddAccessControlListEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAccessControlListEntryWithOptions(request, runtime);
}

/**
 * @summary Adds a policy to an existing ACL.
 *
 * @description When you call this operation, note that:
 * *   This operation is intended for API providers.
 * *   An added policy immediately takes effect on all APIs that are bound to the access control list (ACL).
 * *   A maximum of 100 policies can be added to an ACL.
 *
 * @param request AddIpControlPolicyItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddIpControlPolicyItemResponse
 */
AddIpControlPolicyItemResponse Client::addIpControlPolicyItemWithOptions(const AddIpControlPolicyItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasCidrIp()) {
    query["CidrIp"] = request.getCidrIp();
  }

  if (!!request.hasIpControlId()) {
    query["IpControlId"] = request.getIpControlId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddIpControlPolicyItem"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddIpControlPolicyItemResponse>();
}

/**
 * @summary Adds a policy to an existing ACL.
 *
 * @description When you call this operation, note that:
 * *   This operation is intended for API providers.
 * *   An added policy immediately takes effect on all APIs that are bound to the access control list (ACL).
 * *   A maximum of 100 policies can be added to an ACL.
 *
 * @param request AddIpControlPolicyItemRequest
 * @return AddIpControlPolicyItemResponse
 */
AddIpControlPolicyItemResponse Client::addIpControlPolicyItem(const AddIpControlPolicyItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addIpControlPolicyItemWithOptions(request, runtime);
}

/**
 * @summary Adds a custom special policy to a specified throttling policy.
 *
 * @description *   This API is intended for API providers.
 * *   If the input SpecialKey already exists, the previous configuration is overwritten. Use caution when calling this operation.
 * *   Special throttling policies must be added to an existing throttling policy, and can take effect on all the APIs to which the throttling policy is bound.
 *
 * @param request AddTrafficSpecialControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTrafficSpecialControlResponse
 */
AddTrafficSpecialControlResponse Client::addTrafficSpecialControlWithOptions(const AddTrafficSpecialControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSpecialKey()) {
    query["SpecialKey"] = request.getSpecialKey();
  }

  if (!!request.hasSpecialType()) {
    query["SpecialType"] = request.getSpecialType();
  }

  if (!!request.hasTrafficControlId()) {
    query["TrafficControlId"] = request.getTrafficControlId();
  }

  if (!!request.hasTrafficValue()) {
    query["TrafficValue"] = request.getTrafficValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddTrafficSpecialControl"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTrafficSpecialControlResponse>();
}

/**
 * @summary Adds a custom special policy to a specified throttling policy.
 *
 * @description *   This API is intended for API providers.
 * *   If the input SpecialKey already exists, the previous configuration is overwritten. Use caution when calling this operation.
 * *   Special throttling policies must be added to an existing throttling policy, and can take effect on all the APIs to which the throttling policy is bound.
 *
 * @param request AddTrafficSpecialControlRequest
 * @return AddTrafficSpecialControlResponse
 */
AddTrafficSpecialControlResponse Client::addTrafficSpecialControl(const AddTrafficSpecialControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTrafficSpecialControlWithOptions(request, runtime);
}

/**
 * @summary Associates an internal domain name resolution with a dedicated instance.
 *
 * @description An internal domain name resolution can be associated only with a dedicated instance, not with a shared instance or shared instance cluster.
 *
 * @param tmpReq AssociateInstanceWithPrivateDNSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateInstanceWithPrivateDNSResponse
 */
AssociateInstanceWithPrivateDNSResponse Client::associateInstanceWithPrivateDNSWithOptions(const AssociateInstanceWithPrivateDNSRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AssociateInstanceWithPrivateDNSShrinkRequest request = AssociateInstanceWithPrivateDNSShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIntranetDomains()) {
    request.setIntranetDomainsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIntranetDomains(), "IntranetDomains", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  json body = {};
  if (!!request.hasIntranetDomainsShrink()) {
    body["IntranetDomains"] = request.getIntranetDomainsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AssociateInstanceWithPrivateDNS"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateInstanceWithPrivateDNSResponse>();
}

/**
 * @summary Associates an internal domain name resolution with a dedicated instance.
 *
 * @description An internal domain name resolution can be associated only with a dedicated instance, not with a shared instance or shared instance cluster.
 *
 * @param request AssociateInstanceWithPrivateDNSRequest
 * @return AssociateInstanceWithPrivateDNSResponse
 */
AssociateInstanceWithPrivateDNSResponse Client::associateInstanceWithPrivateDNS(const AssociateInstanceWithPrivateDNSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateInstanceWithPrivateDNSWithOptions(request, runtime);
}

/**
 * @summary Attaches APIs to an API product. If the API product does not exist, the system automatically creates the API product.
 *
 * @param request AttachApiProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachApiProductResponse
 */
AttachApiProductResponse Client::attachApiProductWithOptions(const AttachApiProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiProductId()) {
    query["ApiProductId"] = request.getApiProductId();
  }

  if (!!request.hasApis()) {
    query["Apis"] = request.getApis();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachApiProduct"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachApiProductResponse>();
}

/**
 * @summary Attaches APIs to an API product. If the API product does not exist, the system automatically creates the API product.
 *
 * @param request AttachApiProductRequest
 * @return AttachApiProductResponse
 */
AttachApiProductResponse Client::attachApiProduct(const AttachApiProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachApiProductWithOptions(request, runtime);
}

/**
 * @summary Attach plugin to API group.
 *
 * @param request AttachGroupPluginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachGroupPluginResponse
 */
AttachGroupPluginResponse Client::attachGroupPluginWithOptions(const AttachGroupPluginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachGroupPlugin"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachGroupPluginResponse>();
}

/**
 * @summary Attach plugin to API group.
 *
 * @param request AttachGroupPluginRequest
 * @return AttachGroupPluginResponse
 */
AttachGroupPluginResponse Client::attachGroupPlugin(const AttachGroupPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachGroupPluginWithOptions(request, runtime);
}

/**
 * @summary Binds a plug-in to an API.
 *
 * @description *   This operation is intended for API providers.
 * *   You can only bind plug-ins to published APIs.
 * *   The plug-in takes effect immediately after it is bound to an API.
 * *   If you bind a different plug-in to an API, this plug-in takes effect immediately.
 *
 * @param request AttachPluginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachPluginResponse
 */
AttachPluginResponse Client::attachPluginWithOptions(const AttachPluginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasApiIds()) {
    query["ApiIds"] = request.getApiIds();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachPlugin"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachPluginResponse>();
}

/**
 * @summary Binds a plug-in to an API.
 *
 * @description *   This operation is intended for API providers.
 * *   You can only bind plug-ins to published APIs.
 * *   The plug-in takes effect immediately after it is bound to an API.
 * *   If you bind a different plug-in to an API, this plug-in takes effect immediately.
 *
 * @param request AttachPluginRequest
 * @return AttachPluginResponse
 */
AttachPluginResponse Client::attachPlugin(const AttachPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachPluginWithOptions(request, runtime);
}

/**
 * @summary Unpublishes multiple published APIs at a time.
 *
 * @param request BatchAbolishApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchAbolishApisResponse
 */
BatchAbolishApisResponse Client::batchAbolishApisWithOptions(const BatchAbolishApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApi()) {
    query["Api"] = request.getApi();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchAbolishApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchAbolishApisResponse>();
}

/**
 * @summary Unpublishes multiple published APIs at a time.
 *
 * @param request BatchAbolishApisRequest
 * @return BatchAbolishApisResponse
 */
BatchAbolishApisResponse Client::batchAbolishApis(const BatchAbolishApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchAbolishApisWithOptions(request, runtime);
}

/**
 * @summary Publishes multiple APIs at a time.
 *
 * @param request BatchDeployApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeployApisResponse
 */
BatchDeployApisResponse Client::batchDeployApisWithOptions(const BatchDeployApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApi()) {
    query["Api"] = request.getApi();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchDeployApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeployApisResponse>();
}

/**
 * @summary Publishes multiple APIs at a time.
 *
 * @param request BatchDeployApisRequest
 * @return BatchDeployApisResponse
 */
BatchDeployApisResponse Client::batchDeployApis(const BatchDeployApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeployApisWithOptions(request, runtime);
}

/**
 * @summary This feature provides instance-level access control capabilities for dedicated instances. Creates an Access Control List (ACL). Each user is allowed to create five ACLs in each region.
 *
 * @param request CreateAccessControlListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccessControlListResponse
 */
CreateAccessControlListResponse Client::createAccessControlListWithOptions(const CreateAccessControlListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclName()) {
    query["AclName"] = request.getAclName();
  }

  if (!!request.hasAddressIPVersion()) {
    query["AddressIPVersion"] = request.getAddressIPVersion();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccessControlList"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccessControlListResponse>();
}

/**
 * @summary This feature provides instance-level access control capabilities for dedicated instances. Creates an Access Control List (ACL). Each user is allowed to create five ACLs in each region.
 *
 * @param request CreateAccessControlListRequest
 * @return CreateAccessControlListResponse
 */
CreateAccessControlListResponse Client::createAccessControlList(const CreateAccessControlListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccessControlListWithOptions(request, runtime);
}

/**
 * @summary Creates an API.
 *
 * @description *   This operation is intended for API providers.
 * *   The name of an API must be unique within an API group.
 * *   A request path must be unique within an API group.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request CreateApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApiResponse
 */
CreateApiResponse Client::createApiWithOptions(const CreateApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowSignatureMethod()) {
    query["AllowSignatureMethod"] = request.getAllowSignatureMethod();
  }

  if (!!request.hasApiName()) {
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasAppCodeAuthType()) {
    query["AppCodeAuthType"] = request.getAppCodeAuthType();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasBackendEnable()) {
    query["BackendEnable"] = request.getBackendEnable();
  }

  if (!!request.hasBackendId()) {
    query["BackendId"] = request.getBackendId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDisableInternet()) {
    query["DisableInternet"] = request.getDisableInternet();
  }

  if (!!request.hasForceNonceCheck()) {
    query["ForceNonceCheck"] = request.getForceNonceCheck();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOpenIdConnectConfig()) {
    query["OpenIdConnectConfig"] = request.getOpenIdConnectConfig();
  }

  if (!!request.hasRequestConfig()) {
    query["RequestConfig"] = request.getRequestConfig();
  }

  if (!!request.hasResultBodyModel()) {
    query["ResultBodyModel"] = request.getResultBodyModel();
  }

  if (!!request.hasResultType()) {
    query["ResultType"] = request.getResultType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasServiceConfig()) {
    query["ServiceConfig"] = request.getServiceConfig();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVisibility()) {
    query["Visibility"] = request.getVisibility();
  }

  if (!!request.hasWebSocketApiType()) {
    query["WebSocketApiType"] = request.getWebSocketApiType();
  }

  json body = {};
  if (!!request.hasConstantParameters()) {
    body["ConstantParameters"] = request.getConstantParameters();
  }

  if (!!request.hasErrorCodeSamples()) {
    body["ErrorCodeSamples"] = request.getErrorCodeSamples();
  }

  if (!!request.hasFailResultSample()) {
    body["FailResultSample"] = request.getFailResultSample();
  }

  if (!!request.hasRequestParameters()) {
    body["RequestParameters"] = request.getRequestParameters();
  }

  if (!!request.hasResultDescriptions()) {
    body["ResultDescriptions"] = request.getResultDescriptions();
  }

  if (!!request.hasResultSample()) {
    body["ResultSample"] = request.getResultSample();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  if (!!request.hasServiceParametersMap()) {
    body["ServiceParametersMap"] = request.getServiceParametersMap();
  }

  if (!!request.hasSystemParameters()) {
    body["SystemParameters"] = request.getSystemParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateApi"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApiResponse>();
}

/**
 * @summary Creates an API.
 *
 * @description *   This operation is intended for API providers.
 * *   The name of an API must be unique within an API group.
 * *   A request path must be unique within an API group.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request CreateApiRequest
 * @return CreateApiResponse
 */
CreateApiResponse Client::createApi(const CreateApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApiWithOptions(request, runtime);
}

/**
 * @summary 创建API分组
 *
 * @param request CreateApiGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApiGroupResponse
 */
CreateApiGroupResponse Client::createApiGroupWithOptions(const CreateApiGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBasePath()) {
    query["BasePath"] = request.getBasePath();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApiGroup"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApiGroupResponse>();
}

/**
 * @summary 创建API分组
 *
 * @param request CreateApiGroupRequest
 * @return CreateApiGroupResponse
 */
CreateApiGroupResponse Client::createApiGroup(const CreateApiGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApiGroupWithOptions(request, runtime);
}

/**
 * @summary Adds a variable to an environment.
 *
 * @description *   This operation is intended for API providers.
 *
 * @param request CreateApiStageVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApiStageVariableResponse
 */
CreateApiStageVariableResponse Client::createApiStageVariableWithOptions(const CreateApiStageVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageId()) {
    query["StageId"] = request.getStageId();
  }

  if (!!request.hasStageRouteModel()) {
    query["StageRouteModel"] = request.getStageRouteModel();
  }

  if (!!request.hasSupportRoute()) {
    query["SupportRoute"] = request.getSupportRoute();
  }

  if (!!request.hasVariableName()) {
    query["VariableName"] = request.getVariableName();
  }

  if (!!request.hasVariableValue()) {
    query["VariableValue"] = request.getVariableValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApiStageVariable"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApiStageVariableResponse>();
}

/**
 * @summary Adds a variable to an environment.
 *
 * @description *   This operation is intended for API providers.
 *
 * @param request CreateApiStageVariableRequest
 * @return CreateApiStageVariableResponse
 */
CreateApiStageVariableResponse Client::createApiStageVariable(const CreateApiStageVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApiStageVariableWithOptions(request, runtime);
}

/**
 * @summary Creates an application for calling APIs in API Gateway.
 *
 * @description *   This operation is intended for API callers.
 * *   Each application has a key-value pair which is used for identity verification when you call an API.
 * *   An application must be authorized to call an API.
 * *   Each application has only one key-value pair, which can be reset if the pair is leaked.
 * *   A maximum of 1,000 applications can be created for each Alibaba Cloud account.
 * *   You can call this operation up to 50 times per second per account.
 *
 * @param request CreateAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppResponse
 */
CreateAppResponse Client::createAppWithOptions(const CreateAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAppSecret()) {
    query["AppSecret"] = request.getAppSecret();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApp"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppResponse>();
}

/**
 * @summary Creates an application for calling APIs in API Gateway.
 *
 * @description *   This operation is intended for API callers.
 * *   Each application has a key-value pair which is used for identity verification when you call an API.
 * *   An application must be authorized to call an API.
 * *   Each application has only one key-value pair, which can be reset if the pair is leaked.
 * *   A maximum of 1,000 applications can be created for each Alibaba Cloud account.
 * *   You can call this operation up to 50 times per second per account.
 *
 * @param request CreateAppRequest
 * @return CreateAppResponse
 */
CreateAppResponse Client::createApp(const CreateAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppWithOptions(request, runtime);
}

/**
 * @summary Adds an AppCode to an application.
 *
 * @param request CreateAppCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppCodeResponse
 */
CreateAppCodeResponse Client::createAppCodeWithOptions(const CreateAppCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppCode"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppCodeResponse>();
}

/**
 * @summary Adds an AppCode to an application.
 *
 * @param request CreateAppCodeRequest
 * @return CreateAppCodeResponse
 */
CreateAppCodeResponse Client::createAppCode(const CreateAppCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppCodeWithOptions(request, runtime);
}

/**
 * @summary Adds an AppKey and AppSecret pair to an application.
 *
 * @param request CreateAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppKeyResponse
 */
CreateAppKeyResponse Client::createAppKeyWithOptions(const CreateAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasAppSecret()) {
    query["AppSecret"] = request.getAppSecret();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppKey"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppKeyResponse>();
}

/**
 * @summary Adds an AppKey and AppSecret pair to an application.
 *
 * @param request CreateAppKeyRequest
 * @return CreateAppKeyResponse
 */
CreateAppKeyResponse Client::createAppKey(const CreateAppKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppKeyWithOptions(request, runtime);
}

/**
 * @summary Creates a backend service in API Gateway.
 *
 * @param request CreateBackendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackendResponse
 */
CreateBackendResponse Client::createBackendWithOptions(const CreateBackendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendName()) {
    query["BackendName"] = request.getBackendName();
  }

  if (!!request.hasBackendType()) {
    query["BackendType"] = request.getBackendType();
  }

  if (!!request.hasCreateEventBridgeServiceLinkedRole()) {
    query["CreateEventBridgeServiceLinkedRole"] = request.getCreateEventBridgeServiceLinkedRole();
  }

  if (!!request.hasCreateSlr()) {
    query["CreateSlr"] = request.getCreateSlr();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBackend"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBackendResponse>();
}

/**
 * @summary Creates a backend service in API Gateway.
 *
 * @param request CreateBackendRequest
 * @return CreateBackendResponse
 */
CreateBackendResponse Client::createBackend(const CreateBackendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackendWithOptions(request, runtime);
}

/**
 * @summary 创建后端服务在环境上的配置
 *
 * @param request CreateBackendModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackendModelResponse
 */
CreateBackendModelResponse Client::createBackendModelWithOptions(const CreateBackendModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendId()) {
    query["BackendId"] = request.getBackendId();
  }

  if (!!request.hasBackendModelData()) {
    query["BackendModelData"] = request.getBackendModelData();
  }

  if (!!request.hasBackendType()) {
    query["BackendType"] = request.getBackendType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBackendModel"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBackendModelResponse>();
}

/**
 * @summary 创建后端服务在环境上的配置
 *
 * @param request CreateBackendModelRequest
 * @return CreateBackendModelResponse
 */
CreateBackendModelResponse Client::createBackendModel(const CreateBackendModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackendModelWithOptions(request, runtime);
}

/**
 * @summary Creates a custom dataset.
 *
 * @param request CreateDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDatasetWithOptions(const CreateDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDatasetType()) {
    query["DatasetType"] = request.getDatasetType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataset"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetResponse>();
}

/**
 * @summary Creates a custom dataset.
 *
 * @param request CreateDatasetRequest
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDataset(const CreateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatasetWithOptions(request, runtime);
}

/**
 * @summary 创建自定义数据集条目
 *
 * @param request CreateDatasetItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetItemResponse
 */
CreateDatasetItemResponse Client::createDatasetItemWithOptions(const CreateDatasetItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExpiredTime()) {
    query["ExpiredTime"] = request.getExpiredTime();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDatasetItem"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetItemResponse>();
}

/**
 * @summary 创建自定义数据集条目
 *
 * @param request CreateDatasetItemRequest
 * @return CreateDatasetItemResponse
 */
CreateDatasetItemResponse Client::createDatasetItem(const CreateDatasetItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatasetItemWithOptions(request, runtime);
}

/**
 * @summary Creates an API Gateway instance.
 *
 * @param request CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasHttpsPolicy()) {
    query["HttpsPolicy"] = request.getHttpsPolicy();
  }

  if (!!request.hasInstanceCidr()) {
    query["InstanceCidr"] = request.getInstanceCidr();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceSpec()) {
    query["InstanceSpec"] = request.getInstanceSpec();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasUserVpcId()) {
    query["UserVpcId"] = request.getUserVpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  if (!!request.hasZoneVSwitchSecurityGroup()) {
    query["ZoneVSwitchSecurityGroup"] = request.getZoneVSwitchSecurityGroup();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Creates an API Gateway instance.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建内网域名
 *
 * @param request CreateIntranetDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIntranetDomainResponse
 */
CreateIntranetDomainResponse Client::createIntranetDomainWithOptions(const CreateIntranetDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIntranetDomain"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIntranetDomainResponse>();
}

/**
 * @summary 创建内网域名
 *
 * @param request CreateIntranetDomainRequest
 * @return CreateIntranetDomainResponse
 */
CreateIntranetDomainResponse Client::createIntranetDomain(const CreateIntranetDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIntranetDomainWithOptions(request, runtime);
}

/**
 * @summary Creates an access control list (ACL) in a region.
 *
 * @description *   This operation is intended for API providers.
 * *   An ACL must be bound to an API to take effect. After an ACL is bound to an API, the ACL takes effect on the API immediately.
 * *   You can add policies to an ACL when you create the ACL.
 * *   If an ACL does not have any policy, the ACL is ineffective.
 *
 * @param request CreateIpControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIpControlResponse
 */
CreateIpControlResponse Client::createIpControlWithOptions(const CreateIpControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasIpControlName()) {
    query["IpControlName"] = request.getIpControlName();
  }

  if (!!request.hasIpControlPolicys()) {
    query["IpControlPolicys"] = request.getIpControlPolicys();
  }

  if (!!request.hasIpControlType()) {
    query["IpControlType"] = request.getIpControlType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIpControl"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIpControlResponse>();
}

/**
 * @summary Creates an access control list (ACL) in a region.
 *
 * @description *   This operation is intended for API providers.
 * *   An ACL must be bound to an API to take effect. After an ACL is bound to an API, the ACL takes effect on the API immediately.
 * *   You can add policies to an ACL when you create the ACL.
 * *   If an ACL does not have any policy, the ACL is ineffective.
 *
 * @param request CreateIpControlRequest
 * @return CreateIpControlResponse
 */
CreateIpControlResponse Client::createIpControl(const CreateIpControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIpControlWithOptions(request, runtime);
}

/**
 * @summary Creates a Simple Log Service configuration for an API.
 *
 * @param request CreateLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLogConfigResponse
 */
CreateLogConfigResponse Client::createLogConfigWithOptions(const CreateLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateSlr()) {
    query["CreateSlr"] = request.getCreateSlr();
  }

  if (!!request.hasLogType()) {
    query["LogType"] = request.getLogType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSlsLogStore()) {
    query["SlsLogStore"] = request.getSlsLogStore();
  }

  if (!!request.hasSlsProject()) {
    query["SlsProject"] = request.getSlsProject();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLogConfig"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLogConfigResponse>();
}

/**
 * @summary Creates a Simple Log Service configuration for an API.
 *
 * @param request CreateLogConfigRequest
 * @return CreateLogConfigResponse
 */
CreateLogConfigResponse Client::createLogConfig(const CreateLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLogConfigWithOptions(request, runtime);
}

/**
 * @summary Creates a model for an API group.
 *
 * @description *   For more information about the model definition, see [JSON Schema Draft 4](https://tools.ietf.org/html/draft-zyp-json-schema-04?spm=a2c4g.11186623.2.10.2e977ff7p4BpQd).
 * *   JSON Schema supports only element attributes of the Object type.
 *
 * @param request CreateModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelResponse
 */
CreateModelResponse Client::createModelWithOptions(const CreateModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasSchema()) {
    query["Schema"] = request.getSchema();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateModel"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelResponse>();
}

/**
 * @summary Creates a model for an API group.
 *
 * @description *   For more information about the model definition, see [JSON Schema Draft 4](https://tools.ietf.org/html/draft-zyp-json-schema-04?spm=a2c4g.11186623.2.10.2e977ff7p4BpQd).
 * *   JSON Schema supports only element attributes of the Object type.
 *
 * @param request CreateModelRequest
 * @return CreateModelResponse
 */
CreateModelResponse Client::createModel(const CreateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createModelWithOptions(request, runtime);
}

/**
 * @summary Enables CloudMonitor alerting for a specified API group.
 *
 * @param request CreateMonitorGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorGroupResponse
 */
CreateMonitorGroupResponse Client::createMonitorGroupWithOptions(const CreateMonitorGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuth()) {
    query["Auth"] = request.getAuth();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasRawMonitorGroupId()) {
    query["RawMonitorGroupId"] = request.getRawMonitorGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMonitorGroup"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorGroupResponse>();
}

/**
 * @summary Enables CloudMonitor alerting for a specified API group.
 *
 * @param request CreateMonitorGroupRequest
 * @return CreateMonitorGroupResponse
 */
CreateMonitorGroupResponse Client::createMonitorGroup(const CreateMonitorGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMonitorGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a plug-in.
 *
 * @description *   This operation is intended for API providers.
 * *   The number of plug-ins of the same type that each user can create is limited. Different limits apply to different plug-in types.
 * *   The plug-in definitions for advanced features are restricted.
 * *   Plug-ins must be bound to APIs to take effect. After a plug-in is bound, it takes effect on that API immediately.
 *
 * @param request CreatePluginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePluginResponse
 */
CreatePluginResponse Client::createPluginWithOptions(const CreatePluginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasPluginData()) {
    query["PluginData"] = request.getPluginData();
  }

  if (!!request.hasPluginName()) {
    query["PluginName"] = request.getPluginName();
  }

  if (!!request.hasPluginType()) {
    query["PluginType"] = request.getPluginType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePlugin"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePluginResponse>();
}

/**
 * @summary Creates a plug-in.
 *
 * @description *   This operation is intended for API providers.
 * *   The number of plug-ins of the same type that each user can create is limited. Different limits apply to different plug-in types.
 * *   The plug-in definitions for advanced features are restricted.
 * *   Plug-ins must be bound to APIs to take effect. After a plug-in is bound, it takes effect on that API immediately.
 *
 * @param request CreatePluginRequest
 * @return CreatePluginResponse
 */
CreatePluginResponse Client::createPlugin(const CreatePluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPluginWithOptions(request, runtime);
}

/**
 * @summary Creates an internal domain name resolution and adds a resolution record.
 *
 * @description An internal domain name resolution of the virtual private cloud (VPC) type can be bound only to traditional dedicated instances. An internal domain name resolution of the A type can be bound only to VPC integration dedicated instances.
 *
 * @param tmpReq CreatePrivateDNSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrivateDNSResponse
 */
CreatePrivateDNSResponse Client::createPrivateDNSWithOptions(const CreatePrivateDNSRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePrivateDNSShrinkRequest request = CreatePrivateDNSShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRecords()) {
    request.setRecordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRecords(), "Records", "json"));
  }

  json query = {};
  if (!!request.hasIntranetDomain()) {
    query["IntranetDomain"] = request.getIntranetDomain();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  json body = {};
  if (!!request.hasRecordsShrink()) {
    body["Records"] = request.getRecordsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePrivateDNS"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrivateDNSResponse>();
}

/**
 * @summary Creates an internal domain name resolution and adds a resolution record.
 *
 * @description An internal domain name resolution of the virtual private cloud (VPC) type can be bound only to traditional dedicated instances. An internal domain name resolution of the A type can be bound only to VPC integration dedicated instances.
 *
 * @param request CreatePrivateDNSRequest
 * @return CreatePrivateDNSResponse
 */
CreatePrivateDNSResponse Client::createPrivateDNS(const CreatePrivateDNSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPrivateDNSWithOptions(request, runtime);
}

/**
 * @summary Creates a backend signature key.
 *
 * @description *   This API is intended for API providers.
 * *   The API operation only creates a key policy. You must call the binding operation to bind the key to an API.
 * *   After the key is bound to the API, requests sent from API Gateway to the backend service contain signature strings. You can specify whether your backend service verifies these signature strings.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request CreateSignatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSignatureResponse
 */
CreateSignatureResponse Client::createSignatureWithOptions(const CreateSignatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSignatureKey()) {
    query["SignatureKey"] = request.getSignatureKey();
  }

  if (!!request.hasSignatureName()) {
    query["SignatureName"] = request.getSignatureName();
  }

  if (!!request.hasSignatureSecret()) {
    query["SignatureSecret"] = request.getSignatureSecret();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSignature"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSignatureResponse>();
}

/**
 * @summary Creates a backend signature key.
 *
 * @description *   This API is intended for API providers.
 * *   The API operation only creates a key policy. You must call the binding operation to bind the key to an API.
 * *   After the key is bound to the API, requests sent from API Gateway to the backend service contain signature strings. You can specify whether your backend service verifies these signature strings.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request CreateSignatureRequest
 * @return CreateSignatureResponse
 */
CreateSignatureResponse Client::createSignature(const CreateSignatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSignatureWithOptions(request, runtime);
}

/**
 * @summary Creates a custom throttling policy.
 *
 * @description *   This API is intended for API providers.
 * *   Throttling policies must be bound to APIs to take effect. After a policy is bound to an API, it goes into effect on that API immediately.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request CreateTrafficControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTrafficControlResponse
 */
CreateTrafficControlResponse Client::createTrafficControlWithOptions(const CreateTrafficControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiDefault()) {
    query["ApiDefault"] = request.getApiDefault();
  }

  if (!!request.hasAppDefault()) {
    query["AppDefault"] = request.getAppDefault();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTrafficControlName()) {
    query["TrafficControlName"] = request.getTrafficControlName();
  }

  if (!!request.hasTrafficControlUnit()) {
    query["TrafficControlUnit"] = request.getTrafficControlUnit();
  }

  if (!!request.hasUserDefault()) {
    query["UserDefault"] = request.getUserDefault();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTrafficControl"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTrafficControlResponse>();
}

/**
 * @summary Creates a custom throttling policy.
 *
 * @description *   This API is intended for API providers.
 * *   Throttling policies must be bound to APIs to take effect. After a policy is bound to an API, it goes into effect on that API immediately.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request CreateTrafficControlRequest
 * @return CreateTrafficControlResponse
 */
CreateTrafficControlResponse Client::createTrafficControl(const CreateTrafficControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTrafficControlWithOptions(request, runtime);
}

/**
 * @summary This feature provides instance-level access control capabilities for dedicated instances. Deletes an access control policy.
 *
 * @param request DeleteAccessControlListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessControlListResponse
 */
DeleteAccessControlListResponse Client::deleteAccessControlListWithOptions(const DeleteAccessControlListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccessControlList"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccessControlListResponse>();
}

/**
 * @summary This feature provides instance-level access control capabilities for dedicated instances. Deletes an access control policy.
 *
 * @param request DeleteAccessControlListRequest
 * @return DeleteAccessControlListResponse
 */
DeleteAccessControlListResponse Client::deleteAccessControlList(const DeleteAccessControlListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessControlListWithOptions(request, runtime);
}

/**
 * @summary Deletes all custom special policies of a specified throttling policy.
 *
 * @description *   This API is intended for API providers.
 *
 * @param request DeleteAllTrafficSpecialControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAllTrafficSpecialControlResponse
 */
DeleteAllTrafficSpecialControlResponse Client::deleteAllTrafficSpecialControlWithOptions(const DeleteAllTrafficSpecialControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTrafficControlId()) {
    query["TrafficControlId"] = request.getTrafficControlId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAllTrafficSpecialControl"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAllTrafficSpecialControlResponse>();
}

/**
 * @summary Deletes all custom special policies of a specified throttling policy.
 *
 * @description *   This API is intended for API providers.
 *
 * @param request DeleteAllTrafficSpecialControlRequest
 * @return DeleteAllTrafficSpecialControlResponse
 */
DeleteAllTrafficSpecialControlResponse Client::deleteAllTrafficSpecialControl(const DeleteAllTrafficSpecialControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAllTrafficSpecialControlWithOptions(request, runtime);
}

/**
 * @summary Deletes the definition of a specified API.
 *
 * @description *   This operation is intended for API providers and cannot be undone after it is complete.
 * *   An API that is running in the runtime environment must be unpublished before you can delete the API.****
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request DeleteApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApiResponse
 */
DeleteApiResponse Client::deleteApiWithOptions(const DeleteApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApi"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApiResponse>();
}

/**
 * @summary Deletes the definition of a specified API.
 *
 * @description *   This operation is intended for API providers and cannot be undone after it is complete.
 * *   An API that is running in the runtime environment must be unpublished before you can delete the API.****
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request DeleteApiRequest
 * @return DeleteApiResponse
 */
DeleteApiResponse Client::deleteApi(const DeleteApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApiWithOptions(request, runtime);
}

/**
 * @summary Deletes an API group.
 *
 * @description *   This operation is intended for API providers.
 * *   An API group that contains APIs cannot be deleted. To delete the API group, you must first delete its APIs.
 * *   After an API group is deleted, the second-level domain name bound to the API group is automatically invalidated.
 * *   If the specified API group does not exist, a success response is returned.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request DeleteApiGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApiGroupResponse
 */
DeleteApiGroupResponse Client::deleteApiGroupWithOptions(const DeleteApiGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApiGroup"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApiGroupResponse>();
}

/**
 * @summary Deletes an API group.
 *
 * @description *   This operation is intended for API providers.
 * *   An API group that contains APIs cannot be deleted. To delete the API group, you must first delete its APIs.
 * *   After an API group is deleted, the second-level domain name bound to the API group is automatically invalidated.
 * *   If the specified API group does not exist, a success response is returned.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request DeleteApiGroupRequest
 * @return DeleteApiGroupResponse
 */
DeleteApiGroupResponse Client::deleteApiGroup(const DeleteApiGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApiGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes an API product. Deleting an API product causes the association between APIs and the deleted API product to be deleted as well. Exercise caution when you delete an API product. If any API in the API product is associated with an application, the API product fails to be deleted.
 *
 * @param request DeleteApiProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApiProductResponse
 */
DeleteApiProductResponse Client::deleteApiProductWithOptions(const DeleteApiProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiProductId()) {
    query["ApiProductId"] = request.getApiProductId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApiProduct"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApiProductResponse>();
}

/**
 * @summary Deletes an API product. Deleting an API product causes the association between APIs and the deleted API product to be deleted as well. Exercise caution when you delete an API product. If any API in the API product is associated with an application, the API product fails to be deleted.
 *
 * @param request DeleteApiProductRequest
 * @return DeleteApiProductResponse
 */
DeleteApiProductResponse Client::deleteApiProduct(const DeleteApiProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApiProductWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified variable in a specified environment.
 *
 * @description *   This operation is intended for API providers.
 *
 * @param request DeleteApiStageVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApiStageVariableResponse
 */
DeleteApiStageVariableResponse Client::deleteApiStageVariableWithOptions(const DeleteApiStageVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageId()) {
    query["StageId"] = request.getStageId();
  }

  if (!!request.hasVariableName()) {
    query["VariableName"] = request.getVariableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApiStageVariable"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApiStageVariableResponse>();
}

/**
 * @summary Deletes a specified variable in a specified environment.
 *
 * @description *   This operation is intended for API providers.
 *
 * @param request DeleteApiStageVariableRequest
 * @return DeleteApiStageVariableResponse
 */
DeleteApiStageVariableResponse Client::deleteApiStageVariable(const DeleteApiStageVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApiStageVariableWithOptions(request, runtime);
}

/**
 * @summary Deletes an application.
 *
 * @description *   This operation is intended for API callers.
 * *   After an application is deleted, the application and its API authorization cannot be restored.
 * *   You can call this operation up to 50 times per second per account.
 *
 * @param request DeleteAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppResponse
 */
DeleteAppResponse Client::deleteAppWithOptions(const DeleteAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApp"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppResponse>();
}

/**
 * @summary Deletes an application.
 *
 * @description *   This operation is intended for API callers.
 * *   After an application is deleted, the application and its API authorization cannot be restored.
 * *   You can call this operation up to 50 times per second per account.
 *
 * @param request DeleteAppRequest
 * @return DeleteAppResponse
 */
DeleteAppResponse Client::deleteApp(const DeleteAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppWithOptions(request, runtime);
}

/**
 * @summary Deletes the AppCode of an application.
 *
 * @param request DeleteAppCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppCodeResponse
 */
DeleteAppCodeResponse Client::deleteAppCodeWithOptions(const DeleteAppCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppCode"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppCodeResponse>();
}

/**
 * @summary Deletes the AppCode of an application.
 *
 * @param request DeleteAppCodeRequest
 * @return DeleteAppCodeResponse
 */
DeleteAppCodeResponse Client::deleteAppCode(const DeleteAppCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppCodeWithOptions(request, runtime);
}

/**
 * @summary Deletes the AppKey and AppSecret of an application.
 *
 * @param request DeleteAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppKeyResponse
 */
DeleteAppKeyResponse Client::deleteAppKeyWithOptions(const DeleteAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppKey"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppKeyResponse>();
}

/**
 * @summary Deletes the AppKey and AppSecret of an application.
 *
 * @param request DeleteAppKeyRequest
 * @return DeleteAppKeyResponse
 */
DeleteAppKeyResponse Client::deleteAppKey(const DeleteAppKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppKeyWithOptions(request, runtime);
}

/**
 * @summary Deletes a backend service.
 *
 * @param request DeleteBackendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackendResponse
 */
DeleteBackendResponse Client::deleteBackendWithOptions(const DeleteBackendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendId()) {
    query["BackendId"] = request.getBackendId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackend"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackendResponse>();
}

/**
 * @summary Deletes a backend service.
 *
 * @param request DeleteBackendRequest
 * @return DeleteBackendResponse
 */
DeleteBackendResponse Client::deleteBackend(const DeleteBackendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackendWithOptions(request, runtime);
}

/**
 * @summary Deletes the definition of a backend service in an environment. After the definition is deleted, the API that uses the backend service and is published to this environment will be unpublished.
 *
 * @param request DeleteBackendModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackendModelResponse
 */
DeleteBackendModelResponse Client::deleteBackendModelWithOptions(const DeleteBackendModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendId()) {
    query["BackendId"] = request.getBackendId();
  }

  if (!!request.hasBackendModelId()) {
    query["BackendModelId"] = request.getBackendModelId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackendModel"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackendModelResponse>();
}

/**
 * @summary Deletes the definition of a backend service in an environment. After the definition is deleted, the API that uses the backend service and is published to this environment will be unpublished.
 *
 * @param request DeleteBackendModelRequest
 * @return DeleteBackendModelResponse
 */
DeleteBackendModelResponse Client::deleteBackendModel(const DeleteBackendModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackendModelWithOptions(request, runtime);
}

/**
 * @summary 删除自定义数据集
 *
 * @param request DeleteDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDatasetWithOptions(const DeleteDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataset"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetResponse>();
}

/**
 * @summary 删除自定义数据集
 *
 * @param request DeleteDatasetRequest
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDataset(const DeleteDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatasetWithOptions(request, runtime);
}

/**
 * @summary Deletes a data entry from a custom dataset.
 *
 * @param request DeleteDatasetItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetItemResponse
 */
DeleteDatasetItemResponse Client::deleteDatasetItemWithOptions(const DeleteDatasetItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetItemId()) {
    query["DatasetItemId"] = request.getDatasetItemId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatasetItem"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetItemResponse>();
}

/**
 * @summary Deletes a data entry from a custom dataset.
 *
 * @param request DeleteDatasetItemRequest
 * @return DeleteDatasetItemResponse
 */
DeleteDatasetItemResponse Client::deleteDatasetItem(const DeleteDatasetItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatasetItemWithOptions(request, runtime);
}

/**
 * @summary Unbinds a custom domain name from an API group.
 *
 * @description *   This operation is intended for API providers.
 * *   If the specified domain name does not exist, a successful response will still appear.
 * *   Unbinding a domain name from an API group will affect access to the APIs in the group. Exercise caution when using this operation.
 *
 * @param request DeleteDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomainWithOptions(const DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDomain"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDomainResponse>();
}

/**
 * @summary Unbinds a custom domain name from an API group.
 *
 * @description *   This operation is intended for API providers.
 * *   If the specified domain name does not exist, a successful response will still appear.
 * *   Unbinding a domain name from an API group will affect access to the APIs in the group. Exercise caution when using this operation.
 *
 * @param request DeleteDomainRequest
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomain(const DeleteDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainWithOptions(request, runtime);
}

/**
 * @summary Deletes the SSL certificate of a specified domain name. This operation is intended for API providers. If the SSL certificate does not exist, a success response is still returned. If the specified API group does not exist, the InvalidGroupId.NotFound error is returned. Access over HTTPS is not supported after the SSL certificate is deleted. Exercise caution when using this API operation.
 *
 * @param request DeleteDomainCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainCertificateResponse
 */
DeleteDomainCertificateResponse Client::deleteDomainCertificateWithOptions(const DeleteDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertificateId()) {
    query["CertificateId"] = request.getCertificateId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDomainCertificate"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDomainCertificateResponse>();
}

/**
 * @summary Deletes the SSL certificate of a specified domain name. This operation is intended for API providers. If the SSL certificate does not exist, a success response is still returned. If the specified API group does not exist, the InvalidGroupId.NotFound error is returned. Access over HTTPS is not supported after the SSL certificate is deleted. Exercise caution when using this API operation.
 *
 * @param request DeleteDomainCertificateRequest
 * @return DeleteDomainCertificateResponse
 */
DeleteDomainCertificateResponse Client::deleteDomainCertificate(const DeleteDomainCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainCertificateWithOptions(request, runtime);
}

/**
 * @summary Deletes an API Gateway instance.
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Deletes an API Gateway instance.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes an access control list (ACL).
 *
 * @description *   This operation is intended for API providers.
 * *   If the ACL is bound to an API, you must unbind the ACL from the API before you can delete the ACL. Otherwise, an error is returned.
 * *   If you call this operation on an ACL that does not exist, a success message is returned.
 *
 * @param request DeleteIpControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpControlResponse
 */
DeleteIpControlResponse Client::deleteIpControlWithOptions(const DeleteIpControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpControlId()) {
    query["IpControlId"] = request.getIpControlId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIpControl"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIpControlResponse>();
}

/**
 * @summary Deletes an access control list (ACL).
 *
 * @description *   This operation is intended for API providers.
 * *   If the ACL is bound to an API, you must unbind the ACL from the API before you can delete the ACL. Otherwise, an error is returned.
 * *   If you call this operation on an ACL that does not exist, a success message is returned.
 *
 * @param request DeleteIpControlRequest
 * @return DeleteIpControlResponse
 */
DeleteIpControlResponse Client::deleteIpControl(const DeleteIpControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpControlWithOptions(request, runtime);
}

/**
 * @summary Delete the specified log configuration.
 *
 * @param request DeleteLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLogConfigResponse
 */
DeleteLogConfigResponse Client::deleteLogConfigWithOptions(const DeleteLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogType()) {
    query["LogType"] = request.getLogType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLogConfig"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLogConfigResponse>();
}

/**
 * @summary Delete the specified log configuration.
 *
 * @param request DeleteLogConfigRequest
 * @return DeleteLogConfigResponse
 */
DeleteLogConfigResponse Client::deleteLogConfig(const DeleteLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLogConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes a model.
 *
 * @param request DeleteModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelResponse
 */
DeleteModelResponse Client::deleteModelWithOptions(const DeleteModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModel"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelResponse>();
}

/**
 * @summary Deletes a model.
 *
 * @param request DeleteModelRequest
 * @return DeleteModelResponse
 */
DeleteModelResponse Client::deleteModel(const DeleteModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteModelWithOptions(request, runtime);
}

/**
 * @summary Deletes a CloudMonitor application group corresponding to an API group.
 *
 * @param request DeleteMonitorGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMonitorGroupResponse
 */
DeleteMonitorGroupResponse Client::deleteMonitorGroupWithOptions(const DeleteMonitorGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasRawMonitorGroupId()) {
    query["RawMonitorGroupId"] = request.getRawMonitorGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMonitorGroup"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMonitorGroupResponse>();
}

/**
 * @summary Deletes a CloudMonitor application group corresponding to an API group.
 *
 * @param request DeleteMonitorGroupRequest
 * @return DeleteMonitorGroupResponse
 */
DeleteMonitorGroupResponse Client::deleteMonitorGroup(const DeleteMonitorGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMonitorGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a plug-in.
 *
 * @description *   This operation is intended for API providers.
 * *   You must first unbind the plug-in from the API. Otherwise, an error is reported when you delete the plug-in.
 *
 * @param request DeletePluginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePluginResponse
 */
DeletePluginResponse Client::deletePluginWithOptions(const DeletePluginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePlugin"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePluginResponse>();
}

/**
 * @summary Deletes a plug-in.
 *
 * @description *   This operation is intended for API providers.
 * *   You must first unbind the plug-in from the API. Otherwise, an error is reported when you delete the plug-in.
 *
 * @param request DeletePluginRequest
 * @return DeletePluginResponse
 */
DeletePluginResponse Client::deletePlugin(const DeletePluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePluginWithOptions(request, runtime);
}

/**
 * @summary Deletes an internal domain name resolution.
 *
 * @param request DeletePrivateDNSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivateDNSResponse
 */
DeletePrivateDNSResponse Client::deletePrivateDNSWithOptions(const DeletePrivateDNSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasIntranetDomain()) {
    query["IntranetDomain"] = request.getIntranetDomain();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrivateDNS"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrivateDNSResponse>();
}

/**
 * @summary Deletes an internal domain name resolution.
 *
 * @param request DeletePrivateDNSRequest
 * @return DeletePrivateDNSResponse
 */
DeletePrivateDNSResponse Client::deletePrivateDNS(const DeletePrivateDNSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrivateDNSWithOptions(request, runtime);
}

/**
 * @summary Deletes a backend signature key.
 *
 * @description *   This API is intended for API providers.
 * *   This API operation deletes an existing backend signature key.
 * *   You cannot delete a key that is bound to an API. To delete the key, you must unbind it first.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request DeleteSignatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSignatureResponse
 */
DeleteSignatureResponse Client::deleteSignatureWithOptions(const DeleteSignatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSignatureId()) {
    query["SignatureId"] = request.getSignatureId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSignature"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSignatureResponse>();
}

/**
 * @summary Deletes a backend signature key.
 *
 * @description *   This API is intended for API providers.
 * *   This API operation deletes an existing backend signature key.
 * *   You cannot delete a key that is bound to an API. To delete the key, you must unbind it first.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request DeleteSignatureRequest
 * @return DeleteSignatureResponse
 */
DeleteSignatureResponse Client::deleteSignature(const DeleteSignatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSignatureWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom throttling policy and the special throttling rules in the policy.
 *
 * @description *   This API is intended for API providers.
 * *   If the throttling policy you want to delete is bound to APIs, you need to unbind the policy first. Otherwise, an error is reported when you delete the policy.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request DeleteTrafficControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTrafficControlResponse
 */
DeleteTrafficControlResponse Client::deleteTrafficControlWithOptions(const DeleteTrafficControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTrafficControlId()) {
    query["TrafficControlId"] = request.getTrafficControlId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTrafficControl"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTrafficControlResponse>();
}

/**
 * @summary Deletes a custom throttling policy and the special throttling rules in the policy.
 *
 * @description *   This API is intended for API providers.
 * *   If the throttling policy you want to delete is bound to APIs, you need to unbind the policy first. Otherwise, an error is reported when you delete the policy.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request DeleteTrafficControlRequest
 * @return DeleteTrafficControlResponse
 */
DeleteTrafficControlResponse Client::deleteTrafficControl(const DeleteTrafficControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTrafficControlWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom special throttling policy.
 *
 * @description *   This API is intended for API providers.
 * *   You can obtain the input parameters required in this operation by calling other APIs.
 *
 * @param request DeleteTrafficSpecialControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTrafficSpecialControlResponse
 */
DeleteTrafficSpecialControlResponse Client::deleteTrafficSpecialControlWithOptions(const DeleteTrafficSpecialControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSpecialKey()) {
    query["SpecialKey"] = request.getSpecialKey();
  }

  if (!!request.hasSpecialType()) {
    query["SpecialType"] = request.getSpecialType();
  }

  if (!!request.hasTrafficControlId()) {
    query["TrafficControlId"] = request.getTrafficControlId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTrafficSpecialControl"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTrafficSpecialControlResponse>();
}

/**
 * @summary Deletes a custom special throttling policy.
 *
 * @description *   This API is intended for API providers.
 * *   You can obtain the input parameters required in this operation by calling other APIs.
 *
 * @param request DeleteTrafficSpecialControlRequest
 * @return DeleteTrafficSpecialControlResponse
 */
DeleteTrafficSpecialControlResponse Client::deleteTrafficSpecialControl(const DeleteTrafficSpecialControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTrafficSpecialControlWithOptions(request, runtime);
}

/**
 * @summary Publishes an API to an environment.
 *
 * @description *   This operation is intended for API providers. Only the API that you have defined and published to a runtime environment can be called.
 * *   An API is published to a cluster in under 5 seconds.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request DeployApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployApiResponse
 */
DeployApiResponse Client::deployApiWithOptions(const DeployApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeployApi"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployApiResponse>();
}

/**
 * @summary Publishes an API to an environment.
 *
 * @description *   This operation is intended for API providers. Only the API that you have defined and published to a runtime environment can be called.
 * *   An API is published to a cluster in under 5 seconds.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request DeployApiRequest
 * @return DeployApiResponse
 */
DeployApiResponse Client::deployApi(const DeployApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deployApiWithOptions(request, runtime);
}

/**
 * @summary 查询批量下线API任务
 *
 * @param request DescribeAbolishApiTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAbolishApiTaskResponse
 */
DescribeAbolishApiTaskResponse Client::describeAbolishApiTaskWithOptions(const DescribeAbolishApiTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOperationUid()) {
    query["OperationUid"] = request.getOperationUid();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAbolishApiTask"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAbolishApiTaskResponse>();
}

/**
 * @summary 查询批量下线API任务
 *
 * @param request DescribeAbolishApiTaskRequest
 * @return DescribeAbolishApiTaskResponse
 */
DescribeAbolishApiTaskResponse Client::describeAbolishApiTask(const DescribeAbolishApiTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAbolishApiTaskWithOptions(request, runtime);
}

/**
 * @summary This feature provides instance-level access control for dedicated instances. Queries the details of an access control policy.
 *
 * @param request DescribeAccessControlListAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessControlListAttributeResponse
 */
DescribeAccessControlListAttributeResponse Client::describeAccessControlListAttributeWithOptions(const DescribeAccessControlListAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessControlListAttribute"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccessControlListAttributeResponse>();
}

/**
 * @summary This feature provides instance-level access control for dedicated instances. Queries the details of an access control policy.
 *
 * @param request DescribeAccessControlListAttributeRequest
 * @return DescribeAccessControlListAttributeResponse
 */
DescribeAccessControlListAttributeResponse Client::describeAccessControlListAttribute(const DescribeAccessControlListAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessControlListAttributeWithOptions(request, runtime);
}

/**
 * @summary This feature provides instance-level access control for dedicated instances. Queries access control policies.
 *
 * @param request DescribeAccessControlListsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessControlListsResponse
 */
DescribeAccessControlListsResponse Client::describeAccessControlListsWithOptions(const DescribeAccessControlListsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclName()) {
    query["AclName"] = request.getAclName();
  }

  if (!!request.hasAddressIPVersion()) {
    query["AddressIPVersion"] = request.getAddressIPVersion();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessControlLists"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccessControlListsResponse>();
}

/**
 * @summary This feature provides instance-level access control for dedicated instances. Queries access control policies.
 *
 * @param request DescribeAccessControlListsRequest
 * @return DescribeAccessControlListsResponse
 */
DescribeAccessControlListsResponse Client::describeAccessControlLists(const DescribeAccessControlListsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessControlListsWithOptions(request, runtime);
}

/**
 * @summary Queries the definition of an API.
 *
 * @description *   This operation is intended for API providers.
 *
 * @param request DescribeApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiResponse
 */
DescribeApiResponse Client::describeApiWithOptions(const DescribeApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApi"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiResponse>();
}

/**
 * @summary Queries the definition of an API.
 *
 * @description *   This operation is intended for API providers.
 *
 * @param request DescribeApiRequest
 * @return DescribeApiResponse
 */
DescribeApiResponse Client::describeApi(const DescribeApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiWithOptions(request, runtime);
}

/**
 * @summary Queries the documentation of an API.
 *
 * @description *   For API callers, the specified API must be a public or authorized private API that has been published to a runtime environment.
 * *   When you call this operation as an API caller, the service information, parameter definitions, and other details of the API you specify are returned.
 * *   When you call this operation as an API provider, the definition of the specified API running in the specified runtime environment is returned. The returned definition takes effect in the runtime environment, and may be different from the definition of the API you modify.
 * *   Before you call this operation as an API provider, ensure that the API to be queried is a public one or that your application has been authorized to call the API, because authentication on API callers is required.
 *
 * @param request DescribeApiDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiDocResponse
 */
DescribeApiDocResponse Client::describeApiDocWithOptions(const DescribeApiDocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiDoc"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiDocResponse>();
}

/**
 * @summary Queries the documentation of an API.
 *
 * @description *   For API callers, the specified API must be a public or authorized private API that has been published to a runtime environment.
 * *   When you call this operation as an API caller, the service information, parameter definitions, and other details of the API you specify are returned.
 * *   When you call this operation as an API provider, the definition of the specified API running in the specified runtime environment is returned. The returned definition takes effect in the runtime environment, and may be different from the definition of the API you modify.
 * *   Before you call this operation as an API provider, ensure that the API to be queried is a public one or that your application has been authorized to call the API, because authentication on API callers is required.
 *
 * @param request DescribeApiDocRequest
 * @return DescribeApiDocResponse
 */
DescribeApiDocResponse Client::describeApiDoc(const DescribeApiDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiDocWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to query details about an API group, including the automatically assigned second-level domain name, custom domain name, and SSL certificate.
 *
 * @description *   This operation is intended for API providers.
 *
 * @param request DescribeApiGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiGroupResponse
 */
DescribeApiGroupResponse Client::describeApiGroupWithOptions(const DescribeApiGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiGroup"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiGroupResponse>();
}

/**
 * @summary You can call this operation to query details about an API group, including the automatically assigned second-level domain name, custom domain name, and SSL certificate.
 *
 * @description *   This operation is intended for API providers.
 *
 * @param request DescribeApiGroupRequest
 * @return DescribeApiGroupResponse
 */
DescribeApiGroupResponse Client::describeApiGroup(const DescribeApiGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the VPC whitelist that is allowed to access an API group.
 *
 * @param request DescribeApiGroupVpcWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiGroupVpcWhitelistResponse
 */
DescribeApiGroupVpcWhitelistResponse Client::describeApiGroupVpcWhitelistWithOptions(const DescribeApiGroupVpcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiGroupVpcWhitelist"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiGroupVpcWhitelistResponse>();
}

/**
 * @summary Queries the VPC whitelist that is allowed to access an API group.
 *
 * @param request DescribeApiGroupVpcWhitelistRequest
 * @return DescribeApiGroupVpcWhitelistResponse
 */
DescribeApiGroupVpcWhitelistResponse Client::describeApiGroupVpcWhitelist(const DescribeApiGroupVpcWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiGroupVpcWhitelistWithOptions(request, runtime);
}

/**
 * @summary Queries existing API groups and their basic information.
 *
 * @description *   This operation is intended for API providers.
 *
 * @param request DescribeApiGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiGroupsResponse
 */
DescribeApiGroupsResponse Client::describeApiGroupsWithOptions(const DescribeApiGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBasePath()) {
    query["BasePath"] = request.getBasePath();
  }

  if (!!request.hasEnableTagAuth()) {
    query["EnableTagAuth"] = request.getEnableTagAuth();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiGroups"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiGroupsResponse>();
}

/**
 * @summary Queries existing API groups and their basic information.
 *
 * @description *   This operation is intended for API providers.
 *
 * @param request DescribeApiGroupsRequest
 * @return DescribeApiGroupsResponse
 */
DescribeApiGroupsResponse Client::describeApiGroups(const DescribeApiGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the historical versions of a specified API.
 *
 * @description *   This operation is intended for API providers. Only APIs that have been published have historical version records.
 * *   This operation allows you to obtain the historical versions of an API. This operation is always called by other operations.
 *
 * @param request DescribeApiHistoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiHistoriesResponse
 */
DescribeApiHistoriesResponse Client::describeApiHistoriesWithOptions(const DescribeApiHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasApiName()) {
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiHistories"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiHistoriesResponse>();
}

/**
 * @summary Queries the historical versions of a specified API.
 *
 * @description *   This operation is intended for API providers. Only APIs that have been published have historical version records.
 * *   This operation allows you to obtain the historical versions of an API. This operation is always called by other operations.
 *
 * @param request DescribeApiHistoriesRequest
 * @return DescribeApiHistoriesResponse
 */
DescribeApiHistoriesResponse Client::describeApiHistories(const DescribeApiHistoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiHistoriesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified historical version of a specified API definition.
 *
 * @description Queries the details of a specified historical version of a specified API definition.
 * *   This API is intended for API providers.
 * *   API Gateway records the time and definition of an API every time the API is published. You can use the version number obtained from other operations to query definition details at a certain publication.
 *
 * @param request DescribeApiHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiHistoryResponse
 */
DescribeApiHistoryResponse Client::describeApiHistoryWithOptions(const DescribeApiHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasHistoryVersion()) {
    query["HistoryVersion"] = request.getHistoryVersion();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiHistory"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiHistoryResponse>();
}

/**
 * @summary Queries the details of a specified historical version of a specified API definition.
 *
 * @description Queries the details of a specified historical version of a specified API definition.
 * *   This API is intended for API providers.
 * *   API Gateway records the time and definition of an API every time the API is published. You can use the version number obtained from other operations to query definition details at a certain publication.
 *
 * @param request DescribeApiHistoryRequest
 * @return DescribeApiHistoryResponse
 */
DescribeApiHistoryResponse Client::describeApiHistory(const DescribeApiHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the access control lists (ACLs) that are bound to all the APIs in an API group in a specified environment.
 *
 * @description *   This operation is intended for API callers.
 * *   If an optional parameter is not specified, all results are returned on separate pages.
 * ·
 *
 * @param request DescribeApiIpControlsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiIpControlsResponse
 */
DescribeApiIpControlsResponse Client::describeApiIpControlsWithOptions(const DescribeApiIpControlsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiIds()) {
    query["ApiIds"] = request.getApiIds();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiIpControls"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiIpControlsResponse>();
}

/**
 * @summary Queries the access control lists (ACLs) that are bound to all the APIs in an API group in a specified environment.
 *
 * @description *   This operation is intended for API callers.
 * *   If an optional parameter is not specified, all results are returned on separate pages.
 * ·
 *
 * @param request DescribeApiIpControlsRequest
 * @return DescribeApiIpControlsResponse
 */
DescribeApiIpControlsResponse Client::describeApiIpControls(const DescribeApiIpControlsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiIpControlsWithOptions(request, runtime);
}

/**
 * @summary Queries the response time statistics of an API.
 *
 * @description You can call this operation to query the latency metrics in milliseconds for a specified API.
 * *   This API is intended for API providers.
 * *   Only statistics for API calls made in the release environment are collected by default.
 *
 * @param request DescribeApiLatencyDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiLatencyDataResponse
 */
DescribeApiLatencyDataResponse Client::describeApiLatencyDataWithOptions(const DescribeApiLatencyDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiLatencyData"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiLatencyDataResponse>();
}

/**
 * @summary Queries the response time statistics of an API.
 *
 * @description You can call this operation to query the latency metrics in milliseconds for a specified API.
 * *   This API is intended for API providers.
 * *   Only statistics for API calls made in the release environment are collected by default.
 *
 * @param request DescribeApiLatencyDataRequest
 * @return DescribeApiLatencyDataResponse
 */
DescribeApiLatencyDataResponse Client::describeApiLatencyData(const DescribeApiLatencyDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiLatencyDataWithOptions(request, runtime);
}

/**
 * @summary Queries the Alibaba Cloud Marketplace attributes of an API.
 *
 * @param request DescribeApiMarketAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiMarketAttributesResponse
 */
DescribeApiMarketAttributesResponse Client::describeApiMarketAttributesWithOptions(const DescribeApiMarketAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiMarketAttributes"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiMarketAttributesResponse>();
}

/**
 * @summary Queries the Alibaba Cloud Marketplace attributes of an API.
 *
 * @param request DescribeApiMarketAttributesRequest
 * @return DescribeApiMarketAttributesResponse
 */
DescribeApiMarketAttributesResponse Client::describeApiMarketAttributes(const DescribeApiMarketAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiMarketAttributesWithOptions(request, runtime);
}

/**
 * @summary Queries the attached APIs of an API product.
 *
 * @param request DescribeApiProductApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiProductApisResponse
 */
DescribeApiProductApisResponse Client::describeApiProductApisWithOptions(const DescribeApiProductApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiProductId()) {
    query["ApiProductId"] = request.getApiProductId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiProductApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiProductApisResponse>();
}

/**
 * @summary Queries the attached APIs of an API product.
 *
 * @param request DescribeApiProductApisRequest
 * @return DescribeApiProductApisResponse
 */
DescribeApiProductApisResponse Client::describeApiProductApis(const DescribeApiProductApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiProductApisWithOptions(request, runtime);
}

/**
 * @summary Queries API products by application.
 *
 * @param request DescribeApiProductsByAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiProductsByAppResponse
 */
DescribeApiProductsByAppResponse Client::describeApiProductsByAppWithOptions(const DescribeApiProductsByAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiProductsByApp"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiProductsByAppResponse>();
}

/**
 * @summary Queries API products by application.
 *
 * @param request DescribeApiProductsByAppRequest
 * @return DescribeApiProductsByAppResponse
 */
DescribeApiProductsByAppResponse Client::describeApiProductsByApp(const DescribeApiProductsByAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiProductsByAppWithOptions(request, runtime);
}

/**
 * @summary Queries the QPS statistics of an API.
 *
 * @description *   This API is intended for API providers.
 * *   Only statistics for API calls made in the release environment are collected by default.
 *
 * @param request DescribeApiQpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiQpsDataResponse
 */
DescribeApiQpsDataResponse Client::describeApiQpsDataWithOptions(const DescribeApiQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiQpsData"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiQpsDataResponse>();
}

/**
 * @summary Queries the QPS statistics of an API.
 *
 * @description *   This API is intended for API providers.
 * *   Only statistics for API calls made in the release environment are collected by default.
 *
 * @param request DescribeApiQpsDataRequest
 * @return DescribeApiQpsDataResponse
 */
DescribeApiQpsDataResponse Client::describeApiQpsData(const DescribeApiQpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiQpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the backend signature keys that are bound to the APIs of a specified API group in a specified environment.
 *
 * @description *   This API is intended for API providers.
 * *   The ApiIds parameter is optional. If this parameter is not specified, all results in the specified environment of an API group are returned.
 *
 * @param request DescribeApiSignaturesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiSignaturesResponse
 */
DescribeApiSignaturesResponse Client::describeApiSignaturesWithOptions(const DescribeApiSignaturesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiIds()) {
    query["ApiIds"] = request.getApiIds();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiSignatures"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiSignaturesResponse>();
}

/**
 * @summary Queries the backend signature keys that are bound to the APIs of a specified API group in a specified environment.
 *
 * @description *   This API is intended for API providers.
 * *   The ApiIds parameter is optional. If this parameter is not specified, all results in the specified environment of an API group are returned.
 *
 * @param request DescribeApiSignaturesRequest
 * @return DescribeApiSignaturesResponse
 */
DescribeApiSignaturesResponse Client::describeApiSignatures(const DescribeApiSignaturesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiSignaturesWithOptions(request, runtime);
}

/**
 * @summary Queries the throttling policies bound to all members of an API group in a specified environment.
 *
 * @description *   This API is intended for API providers.
 * *   The ApiIds parameter is optional. If this parameter is not specified, all results in the specified environment of an API group are returned.
 *
 * @param request DescribeApiTrafficControlsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiTrafficControlsResponse
 */
DescribeApiTrafficControlsResponse Client::describeApiTrafficControlsWithOptions(const DescribeApiTrafficControlsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiIds()) {
    query["ApiIds"] = request.getApiIds();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiTrafficControls"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiTrafficControlsResponse>();
}

/**
 * @summary Queries the throttling policies bound to all members of an API group in a specified environment.
 *
 * @description *   This API is intended for API providers.
 * *   The ApiIds parameter is optional. If this parameter is not specified, all results in the specified environment of an API group are returned.
 *
 * @param request DescribeApiTrafficControlsRequest
 * @return DescribeApiTrafficControlsResponse
 */
DescribeApiTrafficControlsResponse Client::describeApiTrafficControls(const DescribeApiTrafficControlsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiTrafficControlsWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on the traffic of an API.
 *
 * @description *   This API is intended for API providers.
 * *   Only statistics for API calls made in the release environment are collected by default.
 *
 * @param request DescribeApiTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiTrafficDataResponse
 */
DescribeApiTrafficDataResponse Client::describeApiTrafficDataWithOptions(const DescribeApiTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiTrafficData"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiTrafficDataResponse>();
}

/**
 * @summary Queries the statistics on the traffic of an API.
 *
 * @description *   This API is intended for API providers.
 * *   Only statistics for API calls made in the release environment are collected by default.
 *
 * @param request DescribeApiTrafficDataRequest
 * @return DescribeApiTrafficDataResponse
 */
DescribeApiTrafficDataResponse Client::describeApiTrafficData(const DescribeApiTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries a list of APIs that are being defined.
 *
 * @description *   This operation is intended for API callers.
 * *   This operation returns a list of all APIs that are being defined. The basic information about these APIs is also returned in the list.
 * *   This operation returns all APIs that are being edited, regardless of their environments. The returned definitions may be different from the definitions in the environments.
 *
 * @param request DescribeApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisResponse
 */
DescribeApisResponse Client::describeApisWithOptions(const DescribeApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasApiMethod()) {
    query["ApiMethod"] = request.getApiMethod();
  }

  if (!!request.hasApiName()) {
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasApiPath()) {
    query["ApiPath"] = request.getApiPath();
  }

  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.getCatalogId();
  }

  if (!!request.hasEnableTagAuth()) {
    query["EnableTagAuth"] = request.getEnableTagAuth();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasUnDeployed()) {
    query["UnDeployed"] = request.getUnDeployed();
  }

  if (!!request.hasVisibility()) {
    query["Visibility"] = request.getVisibility();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisResponse>();
}

/**
 * @summary Queries a list of APIs that are being defined.
 *
 * @description *   This operation is intended for API callers.
 * *   This operation returns a list of all APIs that are being defined. The basic information about these APIs is also returned in the list.
 * *   This operation returns all APIs that are being edited, regardless of their environments. The returned definitions may be different from the definitions in the environments.
 *
 * @param request DescribeApisRequest
 * @return DescribeApisResponse
 */
DescribeApisResponse Client::describeApis(const DescribeApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisWithOptions(request, runtime);
}

/**
 * @summary Queries the APIs with which an application is associated.
 *
 * @param request DescribeApisByAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisByAppResponse
 */
DescribeApisByAppResponse Client::describeApisByAppWithOptions(const DescribeApisByAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasApiUid()) {
    query["ApiUid"] = request.getApiUid();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasMethod()) {
    query["Method"] = request.getMethod();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisByApp"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisByAppResponse>();
}

/**
 * @summary Queries the APIs with which an application is associated.
 *
 * @param request DescribeApisByAppRequest
 * @return DescribeApisByAppResponse
 */
DescribeApisByAppResponse Client::describeApisByApp(const DescribeApisByAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisByAppWithOptions(request, runtime);
}

/**
 * @summary Queries APIs in the draft or published state that are created by using a specified backend service.
 *
 * @param request DescribeApisByBackendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisByBackendResponse
 */
DescribeApisByBackendResponse Client::describeApisByBackendWithOptions(const DescribeApisByBackendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendId()) {
    query["BackendId"] = request.getBackendId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisByBackend"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisByBackendResponse>();
}

/**
 * @summary Queries APIs in the draft or published state that are created by using a specified backend service.
 *
 * @param request DescribeApisByBackendRequest
 * @return DescribeApisByBackendResponse
 */
DescribeApisByBackendResponse Client::describeApisByBackend(const DescribeApisByBackendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisByBackendWithOptions(request, runtime);
}

/**
 * @summary Queries the APIs that are bound to an access control list (ACL).
 *
 * @description *   This operation is intended for API callers.
 * *   You can specify PageNumber to obtain the result on the specified page.
 *
 * @param request DescribeApisByIpControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisByIpControlResponse
 */
DescribeApisByIpControlResponse Client::describeApisByIpControlWithOptions(const DescribeApisByIpControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpControlId()) {
    query["IpControlId"] = request.getIpControlId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisByIpControl"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisByIpControlResponse>();
}

/**
 * @summary Queries the APIs that are bound to an access control list (ACL).
 *
 * @description *   This operation is intended for API callers.
 * *   You can specify PageNumber to obtain the result on the specified page.
 *
 * @param request DescribeApisByIpControlRequest
 * @return DescribeApisByIpControlResponse
 */
DescribeApisByIpControlResponse Client::describeApisByIpControl(const DescribeApisByIpControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisByIpControlWithOptions(request, runtime);
}

/**
 * @summary Queries the APIs to which a specified backend signature key is bound.
 *
 * @description *   This API is intended for API providers.
 * *   The results are returned on separate pages. You can specify PageNumber to obtain the result on the specified page.
 *
 * @param request DescribeApisBySignatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisBySignatureResponse
 */
DescribeApisBySignatureResponse Client::describeApisBySignatureWithOptions(const DescribeApisBySignatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSignatureId()) {
    query["SignatureId"] = request.getSignatureId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisBySignature"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisBySignatureResponse>();
}

/**
 * @summary Queries the APIs to which a specified backend signature key is bound.
 *
 * @description *   This API is intended for API providers.
 * *   The results are returned on separate pages. You can specify PageNumber to obtain the result on the specified page.
 *
 * @param request DescribeApisBySignatureRequest
 * @return DescribeApisBySignatureResponse
 */
DescribeApisBySignatureResponse Client::describeApisBySignature(const DescribeApisBySignatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisBySignatureWithOptions(request, runtime);
}

/**
 * @summary Queries the APIs to which a specified throttling policy is bound.
 *
 * @description *   This API is intended for API providers.
 * *   You can specify PageNumber to obtain the result on the specified page.
 *
 * @param request DescribeApisByTrafficControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisByTrafficControlResponse
 */
DescribeApisByTrafficControlResponse Client::describeApisByTrafficControlWithOptions(const DescribeApisByTrafficControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTrafficControlId()) {
    query["TrafficControlId"] = request.getTrafficControlId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisByTrafficControl"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisByTrafficControlResponse>();
}

/**
 * @summary Queries the APIs to which a specified throttling policy is bound.
 *
 * @description *   This API is intended for API providers.
 * *   You can specify PageNumber to obtain the result on the specified page.
 *
 * @param request DescribeApisByTrafficControlRequest
 * @return DescribeApisByTrafficControlResponse
 */
DescribeApisByTrafficControlResponse Client::describeApisByTrafficControl(const DescribeApisByTrafficControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisByTrafficControlWithOptions(request, runtime);
}

/**
 * @summary Queries the APIs that are associated with a virtual private cloud (VPC) access authorization in a region.
 *
 * @param request DescribeApisByVpcAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisByVpcAccessResponse
 */
DescribeApisByVpcAccessResponse Client::describeApisByVpcAccessWithOptions(const DescribeApisByVpcAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasVpcName()) {
    query["VpcName"] = request.getVpcName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisByVpcAccess"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisByVpcAccessResponse>();
}

/**
 * @summary Queries the APIs that are associated with a virtual private cloud (VPC) access authorization in a region.
 *
 * @param request DescribeApisByVpcAccessRequest
 * @return DescribeApisByVpcAccessResponse
 */
DescribeApisByVpcAccessResponse Client::describeApisByVpcAccess(const DescribeApisByVpcAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisByVpcAccessWithOptions(request, runtime);
}

/**
 * @summary Queries APIs by application. The environment information is also returned.
 *
 * @param request DescribeApisWithStageNameIntegratedByAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisWithStageNameIntegratedByAppResponse
 */
DescribeApisWithStageNameIntegratedByAppResponse Client::describeApisWithStageNameIntegratedByAppWithOptions(const DescribeApisWithStageNameIntegratedByAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasApiUid()) {
    query["ApiUid"] = request.getApiUid();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasMethod()) {
    query["Method"] = request.getMethod();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisWithStageNameIntegratedByApp"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisWithStageNameIntegratedByAppResponse>();
}

/**
 * @summary Queries APIs by application. The environment information is also returned.
 *
 * @param request DescribeApisWithStageNameIntegratedByAppRequest
 * @return DescribeApisWithStageNameIntegratedByAppResponse
 */
DescribeApisWithStageNameIntegratedByAppResponse Client::describeApisWithStageNameIntegratedByApp(const DescribeApisWithStageNameIntegratedByAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisWithStageNameIntegratedByAppWithOptions(request, runtime);
}

/**
 * @summary Queries the apps that can be authorized.
 *
 * @param request DescribeAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppResponse
 */
DescribeAppResponse Client::describeAppWithOptions(const DescribeAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApp"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppResponse>();
}

/**
 * @summary Queries the apps that can be authorized.
 *
 * @param request DescribeAppRequest
 * @return DescribeAppResponse
 */
DescribeAppResponse Client::describeApp(const DescribeAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppWithOptions(request, runtime);
}

/**
 * @summary Queries apps and their basic information.
 *
 * @description *   This operation is intended for API callers.
 * *   AppId is optional.
 *
 * @param request DescribeAppAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppAttributesResponse
 */
DescribeAppAttributesResponse Client::describeAppAttributesWithOptions(const DescribeAppAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasEnableTagAuth()) {
    query["EnableTagAuth"] = request.getEnableTagAuth();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppAttributes"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppAttributesResponse>();
}

/**
 * @summary Queries apps and their basic information.
 *
 * @description *   This operation is intended for API callers.
 * *   AppId is optional.
 *
 * @param request DescribeAppAttributesRequest
 * @return DescribeAppAttributesResponse
 */
DescribeAppAttributesResponse Client::describeAppAttributes(const DescribeAppAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppAttributesWithOptions(request, runtime);
}

/**
 * @summary Queries the key-related information of an application.
 *
 * @param request DescribeAppSecuritiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppSecuritiesResponse
 */
DescribeAppSecuritiesResponse Client::describeAppSecuritiesWithOptions(const DescribeAppSecuritiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppSecurities"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppSecuritiesResponse>();
}

/**
 * @summary Queries the key-related information of an application.
 *
 * @param request DescribeAppSecuritiesRequest
 * @return DescribeAppSecuritiesResponse
 */
DescribeAppSecuritiesResponse Client::describeAppSecurities(const DescribeAppSecuritiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppSecuritiesWithOptions(request, runtime);
}

/**
 * @summary This key is used for authentication when an API call is made.
 *
 * @description *   This operation is intended for API callers.
 *
 * @param request DescribeAppSecurityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppSecurityResponse
 */
DescribeAppSecurityResponse Client::describeAppSecurityWithOptions(const DescribeAppSecurityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppSecurity"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppSecurityResponse>();
}

/**
 * @summary This key is used for authentication when an API call is made.
 *
 * @description *   This operation is intended for API callers.
 *
 * @param request DescribeAppSecurityRequest
 * @return DescribeAppSecurityResponse
 */
DescribeAppSecurityResponse Client::describeAppSecurity(const DescribeAppSecurityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppSecurityWithOptions(request, runtime);
}

/**
 * @summary Queries the apps of a user. App information is returned only to the app owner.
 *
 * @description *   This API is intended for API providers.
 * *   API providers can use the app IDs or their Alibaba Cloud accounts to query app information.
 * *   Each provider can call this operation for a maximum of 200 times every day in a region.
 *
 * @param request DescribeAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppsResponse
 */
DescribeAppsResponse Client::describeAppsWithOptions(const DescribeAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppOwner()) {
    query["AppOwner"] = request.getAppOwner();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApps"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppsResponse>();
}

/**
 * @summary Queries the apps of a user. App information is returned only to the app owner.
 *
 * @description *   This API is intended for API providers.
 * *   API providers can use the app IDs or their Alibaba Cloud accounts to query app information.
 * *   Each provider can call this operation for a maximum of 200 times every day in a region.
 *
 * @param request DescribeAppsRequest
 * @return DescribeAppsResponse
 */
DescribeAppsResponse Client::describeApps(const DescribeAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppsWithOptions(request, runtime);
}

/**
 * @summary Queries authorized applications by API product.
 *
 * @param request DescribeAppsByApiProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppsByApiProductResponse
 */
DescribeAppsByApiProductResponse Client::describeAppsByApiProductWithOptions(const DescribeAppsByApiProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiProductId()) {
    query["ApiProductId"] = request.getApiProductId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppsByApiProduct"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppsByApiProductResponse>();
}

/**
 * @summary Queries authorized applications by API product.
 *
 * @param request DescribeAppsByApiProductRequest
 * @return DescribeAppsByApiProductResponse
 */
DescribeAppsByApiProductResponse Client::describeAppsByApiProduct(const DescribeAppsByApiProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppsByApiProductWithOptions(request, runtime);
}

/**
 * @summary Queries the authorized APIs of a specified APP.
 *
 * @description *   This operation is intended for API callers.
 * *   The specified application can call all APIs included in the responses.
 *
 * @param request DescribeAuthorizedApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuthorizedApisResponse
 */
DescribeAuthorizedApisResponse Client::describeAuthorizedApisWithOptions(const DescribeAuthorizedApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuthorizedApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuthorizedApisResponse>();
}

/**
 * @summary Queries the authorized APIs of a specified APP.
 *
 * @description *   This operation is intended for API callers.
 * *   The specified application can call all APIs included in the responses.
 *
 * @param request DescribeAuthorizedApisRequest
 * @return DescribeAuthorizedApisResponse
 */
DescribeAuthorizedApisResponse Client::describeAuthorizedApis(const DescribeAuthorizedApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuthorizedApisWithOptions(request, runtime);
}

/**
 * @summary Queries the current apps.
 *
 * @description *   This operation is intended for API providers.
 * *   All applications included in the responses have access to the specified API.
 *
 * @param request DescribeAuthorizedAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuthorizedAppsResponse
 */
DescribeAuthorizedAppsResponse Client::describeAuthorizedAppsWithOptions(const DescribeAuthorizedAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAppOwnerId()) {
    query["AppOwnerId"] = request.getAppOwnerId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuthorizedApps"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuthorizedAppsResponse>();
}

/**
 * @summary Queries the current apps.
 *
 * @description *   This operation is intended for API providers.
 * *   All applications included in the responses have access to the specified API.
 *
 * @param request DescribeAuthorizedAppsRequest
 * @return DescribeAuthorizedAppsResponse
 */
DescribeAuthorizedAppsResponse Client::describeAuthorizedApps(const DescribeAuthorizedAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuthorizedAppsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a backend service and its URL configured for each environment.
 *
 * @param request DescribeBackendInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackendInfoResponse
 */
DescribeBackendInfoResponse Client::describeBackendInfoWithOptions(const DescribeBackendInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendId()) {
    query["BackendId"] = request.getBackendId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackendInfo"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackendInfoResponse>();
}

/**
 * @summary Queries the information about a backend service and its URL configured for each environment.
 *
 * @param request DescribeBackendInfoRequest
 * @return DescribeBackendInfoResponse
 */
DescribeBackendInfoResponse Client::describeBackendInfo(const DescribeBackendInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackendInfoWithOptions(request, runtime);
}

/**
 * @summary Queries backend services. You can filter backend services by backend service name and backend service type.
 *
 * @param request DescribeBackendListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackendListResponse
 */
DescribeBackendListResponse Client::describeBackendListWithOptions(const DescribeBackendListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendName()) {
    query["BackendName"] = request.getBackendName();
  }

  if (!!request.hasBackendType()) {
    query["BackendType"] = request.getBackendType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackendList"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackendListResponse>();
}

/**
 * @summary Queries backend services. You can filter backend services by backend service name and backend service type.
 *
 * @param request DescribeBackendListRequest
 * @return DescribeBackendListResponse
 */
DescribeBackendListResponse Client::describeBackendList(const DescribeBackendListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackendListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a single dataset.
 *
 * @param request DescribeDatasetInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDatasetInfoResponse
 */
DescribeDatasetInfoResponse Client::describeDatasetInfoWithOptions(const DescribeDatasetInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDatasetInfo"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDatasetInfoResponse>();
}

/**
 * @summary Queries the information about a single dataset.
 *
 * @param request DescribeDatasetInfoRequest
 * @return DescribeDatasetInfoResponse
 */
DescribeDatasetInfoResponse Client::describeDatasetInfo(const DescribeDatasetInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDatasetInfoWithOptions(request, runtime);
}

/**
 * @summary Queries a data entry in a custom dataset.
 *
 * @param request DescribeDatasetItemInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDatasetItemInfoResponse
 */
DescribeDatasetItemInfoResponse Client::describeDatasetItemInfoWithOptions(const DescribeDatasetItemInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetItemId()) {
    query["DatasetItemId"] = request.getDatasetItemId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDatasetItemInfo"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDatasetItemInfoResponse>();
}

/**
 * @summary Queries a data entry in a custom dataset.
 *
 * @param request DescribeDatasetItemInfoRequest
 * @return DescribeDatasetItemInfoResponse
 */
DescribeDatasetItemInfoResponse Client::describeDatasetItemInfo(const DescribeDatasetItemInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDatasetItemInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the data entries of a custom dataset.
 *
 * @param request DescribeDatasetItemListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDatasetItemListResponse
 */
DescribeDatasetItemListResponse Client::describeDatasetItemListWithOptions(const DescribeDatasetItemListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetItemIds()) {
    query["DatasetItemIds"] = request.getDatasetItemIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDatasetItemList"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDatasetItemListResponse>();
}

/**
 * @summary Queries the data entries of a custom dataset.
 *
 * @param request DescribeDatasetItemListRequest
 * @return DescribeDatasetItemListResponse
 */
DescribeDatasetItemListResponse Client::describeDatasetItemList(const DescribeDatasetItemListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDatasetItemListWithOptions(request, runtime);
}

/**
 * @summary Queries custom datasets.
 *
 * @param request DescribeDatasetListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDatasetListResponse
 */
DescribeDatasetListResponse Client::describeDatasetListWithOptions(const DescribeDatasetListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetIds()) {
    query["DatasetIds"] = request.getDatasetIds();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDatasetList"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDatasetListResponse>();
}

/**
 * @summary Queries custom datasets.
 *
 * @param request DescribeDatasetListRequest
 * @return DescribeDatasetListResponse
 */
DescribeDatasetListResponse Client::describeDatasetList(const DescribeDatasetListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDatasetListWithOptions(request, runtime);
}

/**
 * @summary Queries the progress of an asynchronous API publishing task.
 *
 * @param request DescribeDeployApiTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeployApiTaskResponse
 */
DescribeDeployApiTaskResponse Client::describeDeployApiTaskWithOptions(const DescribeDeployApiTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOperationUid()) {
    query["OperationUid"] = request.getOperationUid();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDeployApiTask"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeployApiTaskResponse>();
}

/**
 * @summary Queries the progress of an asynchronous API publishing task.
 *
 * @param request DescribeDeployApiTaskRequest
 * @return DescribeDeployApiTaskResponse
 */
DescribeDeployApiTaskResponse Client::describeDeployApiTask(const DescribeDeployApiTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeployApiTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the definition of an API that takes effect in an environment. The definition may differ from the definition being edited.
 *
 * @param request DescribeDeployedApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeployedApiResponse
 */
DescribeDeployedApiResponse Client::describeDeployedApiWithOptions(const DescribeDeployedApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDeployedApi"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeployedApiResponse>();
}

/**
 * @summary Queries the definition of an API that takes effect in an environment. The definition may differ from the definition being edited.
 *
 * @param request DescribeDeployedApiRequest
 * @return DescribeDeployedApiResponse
 */
DescribeDeployedApiResponse Client::describeDeployedApi(const DescribeDeployedApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeployedApiWithOptions(request, runtime);
}

/**
 * @summary Queries the APIs that have been published to a specified environment.
 *
 * @description *   This API is intended for API providers.
 *
 * @param request DescribeDeployedApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeployedApisResponse
 */
DescribeDeployedApisResponse Client::describeDeployedApisWithOptions(const DescribeDeployedApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasApiMethod()) {
    query["ApiMethod"] = request.getApiMethod();
  }

  if (!!request.hasApiName()) {
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasApiPath()) {
    query["ApiPath"] = request.getApiPath();
  }

  if (!!request.hasEnableTagAuth()) {
    query["EnableTagAuth"] = request.getEnableTagAuth();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDeployedApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeployedApisResponse>();
}

/**
 * @summary Queries the APIs that have been published to a specified environment.
 *
 * @description *   This API is intended for API providers.
 *
 * @param request DescribeDeployedApisRequest
 * @return DescribeDeployedApisResponse
 */
DescribeDeployedApisResponse Client::describeDeployedApis(const DescribeDeployedApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeployedApisWithOptions(request, runtime);
}

/**
 * @summary Queries details about a bound custom domain name, including the automatically assigned second-level domain name, custom domain name, and SSL certificate.
 *
 * @param request DescribeDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainResponse
 */
DescribeDomainResponse Client::describeDomainWithOptions(const DescribeDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomain"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainResponse>();
}

/**
 * @summary Queries details about a bound custom domain name, including the automatically assigned second-level domain name, custom domain name, and SSL certificate.
 *
 * @param request DescribeDomainRequest
 * @return DescribeDomainResponse
 */
DescribeDomainResponse Client::describeDomain(const DescribeDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainWithOptions(request, runtime);
}

/**
 * @summary Queries the average latency of an API group in an environment.
 *
 * @param request DescribeGroupLatencyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupLatencyResponse
 */
DescribeGroupLatencyResponse Client::describeGroupLatencyWithOptions(const DescribeGroupLatencyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupLatency"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupLatencyResponse>();
}

/**
 * @summary Queries the average latency of an API group in an environment.
 *
 * @param request DescribeGroupLatencyRequest
 * @return DescribeGroupLatencyResponse
 */
DescribeGroupLatencyResponse Client::describeGroupLatency(const DescribeGroupLatencyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupLatencyWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on the number of requests directed to an API group within a period of time.
 *
 * @param request DescribeGroupQpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupQpsResponse
 */
DescribeGroupQpsResponse Client::describeGroupQpsWithOptions(const DescribeGroupQpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupQps"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupQpsResponse>();
}

/**
 * @summary Queries the statistics on the number of requests directed to an API group within a period of time.
 *
 * @param request DescribeGroupQpsRequest
 * @return DescribeGroupQpsResponse
 */
DescribeGroupQpsResponse Client::describeGroupQps(const DescribeGroupQpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupQpsWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic of an API group.
 *
 * @param request DescribeGroupTrafficRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupTrafficResponse
 */
DescribeGroupTrafficResponse Client::describeGroupTrafficWithOptions(const DescribeGroupTrafficRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupTraffic"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupTrafficResponse>();
}

/**
 * @summary Queries the traffic of an API group.
 *
 * @param request DescribeGroupTrafficRequest
 * @return DescribeGroupTrafficResponse
 */
DescribeGroupTrafficResponse Client::describeGroupTraffic(const DescribeGroupTrafficRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupTrafficWithOptions(request, runtime);
}

/**
 * @summary Queries the historical versions of an API.
 *
 * @param request DescribeHistoryApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHistoryApisResponse
 */
DescribeHistoryApisResponse Client::describeHistoryApisWithOptions(const DescribeHistoryApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasApiName()) {
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHistoryApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHistoryApisResponse>();
}

/**
 * @summary Queries the historical versions of an API.
 *
 * @param request DescribeHistoryApisRequest
 * @return DescribeHistoryApisResponse
 */
DescribeHistoryApisResponse Client::describeHistoryApis(const DescribeHistoryApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryApisWithOptions(request, runtime);
}

/**
 * @summary Queries the result of an OAS API import task.
 *
 * @param request DescribeImportOASTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImportOASTaskResponse
 */
DescribeImportOASTaskResponse Client::describeImportOASTaskWithOptions(const DescribeImportOASTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOperationId()) {
    query["OperationId"] = request.getOperationId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeImportOASTask"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeImportOASTaskResponse>();
}

/**
 * @summary Queries the result of an OAS API import task.
 *
 * @param request DescribeImportOASTaskRequest
 * @return DescribeImportOASTaskResponse
 */
DescribeImportOASTaskResponse Client::describeImportOASTask(const DescribeImportOASTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImportOASTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a dedicated instance cluster.
 *
 * @param request DescribeInstanceClusterInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceClusterInfoResponse
 */
DescribeInstanceClusterInfoResponse Client::describeInstanceClusterInfoWithOptions(const DescribeInstanceClusterInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceClusterName()) {
    query["InstanceClusterName"] = request.getInstanceClusterName();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceClusterInfo"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceClusterInfoResponse>();
}

/**
 * @summary Queries the information about a dedicated instance cluster.
 *
 * @param request DescribeInstanceClusterInfoRequest
 * @return DescribeInstanceClusterInfoResponse
 */
DescribeInstanceClusterInfoResponse Client::describeInstanceClusterInfo(const DescribeInstanceClusterInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceClusterInfoWithOptions(request, runtime);
}

/**
 * @summary Queries dedicated instance clusters.
 *
 * @param request DescribeInstanceClusterListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceClusterListResponse
 */
DescribeInstanceClusterListResponse Client::describeInstanceClusterListWithOptions(const DescribeInstanceClusterListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceClusterId()) {
    query["InstanceClusterId"] = request.getInstanceClusterId();
  }

  if (!!request.hasInstanceClusterName()) {
    query["InstanceClusterName"] = request.getInstanceClusterName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceClusterList"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceClusterListResponse>();
}

/**
 * @summary Queries dedicated instance clusters.
 *
 * @param request DescribeInstanceClusterListRequest
 * @return DescribeInstanceClusterListResponse
 */
DescribeInstanceClusterListResponse Client::describeInstanceClusterList(const DescribeInstanceClusterListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceClusterListWithOptions(request, runtime);
}

/**
 * @summary Queries the number of lost connections to a dedicated instance within a period of time.
 *
 * @param request DescribeInstanceDropConnectionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceDropConnectionsResponse
 */
DescribeInstanceDropConnectionsResponse Client::describeInstanceDropConnectionsWithOptions(const DescribeInstanceDropConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSbcName()) {
    query["SbcName"] = request.getSbcName();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceDropConnections"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceDropConnectionsResponse>();
}

/**
 * @summary Queries the number of lost connections to a dedicated instance within a period of time.
 *
 * @param request DescribeInstanceDropConnectionsRequest
 * @return DescribeInstanceDropConnectionsResponse
 */
DescribeInstanceDropConnectionsResponse Client::describeInstanceDropConnections(const DescribeInstanceDropConnectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceDropConnectionsWithOptions(request, runtime);
}

/**
 * @summary Queries the number of dropped packets within a period of time.
 *
 * @param request DescribeInstanceDropPacketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceDropPacketResponse
 */
DescribeInstanceDropPacketResponse Client::describeInstanceDropPacketWithOptions(const DescribeInstanceDropPacketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSbcName()) {
    query["SbcName"] = request.getSbcName();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceDropPacket"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceDropPacketResponse>();
}

/**
 * @summary Queries the number of dropped packets within a period of time.
 *
 * @param request DescribeInstanceDropPacketRequest
 * @return DescribeInstanceDropPacketResponse
 */
DescribeInstanceDropPacketResponse Client::describeInstanceDropPacket(const DescribeInstanceDropPacketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceDropPacketWithOptions(request, runtime);
}

/**
 * @summary Queries the distribution of HTTP status codes of requests to a dedicated instance within a period of time.
 *
 * @param request DescribeInstanceHttpCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceHttpCodeResponse
 */
DescribeInstanceHttpCodeResponse Client::describeInstanceHttpCodeWithOptions(const DescribeInstanceHttpCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceHttpCode"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceHttpCodeResponse>();
}

/**
 * @summary Queries the distribution of HTTP status codes of requests to a dedicated instance within a period of time.
 *
 * @param request DescribeInstanceHttpCodeRequest
 * @return DescribeInstanceHttpCodeResponse
 */
DescribeInstanceHttpCodeResponse Client::describeInstanceHttpCode(const DescribeInstanceHttpCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceHttpCodeWithOptions(request, runtime);
}

/**
 * @summary Queries the average latency of a dedicated instance over a period of time.
 *
 * @param request DescribeInstanceLatencyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceLatencyResponse
 */
DescribeInstanceLatencyResponse Client::describeInstanceLatencyWithOptions(const DescribeInstanceLatencyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceLatency"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceLatencyResponse>();
}

/**
 * @summary Queries the average latency of a dedicated instance over a period of time.
 *
 * @param request DescribeInstanceLatencyRequest
 * @return DescribeInstanceLatencyResponse
 */
DescribeInstanceLatencyResponse Client::describeInstanceLatency(const DescribeInstanceLatencyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceLatencyWithOptions(request, runtime);
}

/**
 * @summary Queries the number of new connections to a dedicated instance within a period of time.
 *
 * @param request DescribeInstanceNewConnectionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceNewConnectionsResponse
 */
DescribeInstanceNewConnectionsResponse Client::describeInstanceNewConnectionsWithOptions(const DescribeInstanceNewConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSbcName()) {
    query["SbcName"] = request.getSbcName();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceNewConnections"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceNewConnectionsResponse>();
}

/**
 * @summary Queries the number of new connections to a dedicated instance within a period of time.
 *
 * @param request DescribeInstanceNewConnectionsRequest
 * @return DescribeInstanceNewConnectionsResponse
 */
DescribeInstanceNewConnectionsResponse Client::describeInstanceNewConnections(const DescribeInstanceNewConnectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceNewConnectionsWithOptions(request, runtime);
}

/**
 * @summary Queries the numbers of inbound and outbound packets of a dedicated instance within a period of time.
 *
 * @param request DescribeInstancePacketsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancePacketsResponse
 */
DescribeInstancePacketsResponse Client::describeInstancePacketsWithOptions(const DescribeInstancePacketsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSbcName()) {
    query["SbcName"] = request.getSbcName();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstancePackets"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstancePacketsResponse>();
}

/**
 * @summary Queries the numbers of inbound and outbound packets of a dedicated instance within a period of time.
 *
 * @param request DescribeInstancePacketsRequest
 * @return DescribeInstancePacketsResponse
 */
DescribeInstancePacketsResponse Client::describeInstancePackets(const DescribeInstancePacketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancePacketsWithOptions(request, runtime);
}

/**
 * @summary Queries the number of requests to a dedicated instance within a period of time.
 *
 * @param request DescribeInstanceQpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceQpsResponse
 */
DescribeInstanceQpsResponse Client::describeInstanceQpsWithOptions(const DescribeInstanceQpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceQps"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceQpsResponse>();
}

/**
 * @summary Queries the number of requests to a dedicated instance within a period of time.
 *
 * @param request DescribeInstanceQpsRequest
 * @return DescribeInstanceQpsResponse
 */
DescribeInstanceQpsResponse Client::describeInstanceQps(const DescribeInstanceQpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceQpsWithOptions(request, runtime);
}

/**
 * @summary Queries the number of concurrent connections to a dedicated instance within a period of time.
 *
 * @param request DescribeInstanceSlbConnectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceSlbConnectResponse
 */
DescribeInstanceSlbConnectResponse Client::describeInstanceSlbConnectWithOptions(const DescribeInstanceSlbConnectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSbcName()) {
    query["SbcName"] = request.getSbcName();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceSlbConnect"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceSlbConnectResponse>();
}

/**
 * @summary Queries the number of concurrent connections to a dedicated instance within a period of time.
 *
 * @param request DescribeInstanceSlbConnectRequest
 * @return DescribeInstanceSlbConnectResponse
 */
DescribeInstanceSlbConnectResponse Client::describeInstanceSlbConnect(const DescribeInstanceSlbConnectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceSlbConnectWithOptions(request, runtime);
}

/**
 * @summary Queries the request traffic and response traffic of a dedicated instance within a period of time.
 *
 * @param request DescribeInstanceTrafficRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceTrafficResponse
 */
DescribeInstanceTrafficResponse Client::describeInstanceTrafficWithOptions(const DescribeInstanceTrafficRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceTraffic"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceTrafficResponse>();
}

/**
 * @summary Queries the request traffic and response traffic of a dedicated instance within a period of time.
 *
 * @param request DescribeInstanceTrafficRequest
 * @return DescribeInstanceTrafficResponse
 */
DescribeInstanceTrafficResponse Client::describeInstanceTraffic(const DescribeInstanceTrafficRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceTrafficWithOptions(request, runtime);
}

/**
 * @summary Queries the details of instances in a region. The instances include shared instances and dedicated instances.
 *
 * @param request DescribeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableTagAuthorization()) {
    query["EnableTagAuthorization"] = request.getEnableTagAuthorization();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstances"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstancesResponse>();
}

/**
 * @summary Queries the details of instances in a region. The instances include shared instances and dedicated instances.
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the rule entries of an IP address-based traffic control policy.
 *
 * @description *   This operation is intended for API providers.
 * *   You can filter the query results by policy ID.
 *
 * @param request DescribeIpControlPolicyItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIpControlPolicyItemsResponse
 */
DescribeIpControlPolicyItemsResponse Client::describeIpControlPolicyItemsWithOptions(const DescribeIpControlPolicyItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpControlId()) {
    query["IpControlId"] = request.getIpControlId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyItemId()) {
    query["PolicyItemId"] = request.getPolicyItemId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIpControlPolicyItems"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIpControlPolicyItemsResponse>();
}

/**
 * @summary Queries the rule entries of an IP address-based traffic control policy.
 *
 * @description *   This operation is intended for API providers.
 * *   You can filter the query results by policy ID.
 *
 * @param request DescribeIpControlPolicyItemsRequest
 * @return DescribeIpControlPolicyItemsResponse
 */
DescribeIpControlPolicyItemsResponse Client::describeIpControlPolicyItems(const DescribeIpControlPolicyItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIpControlPolicyItemsWithOptions(request, runtime);
}

/**
 * @summary Queries custom access control lists (ACLs) on separate pages.
 *
 * @description *   This operation is intended for API providers.
 * *   This operation is used to query the ACLs in a region. Region is a system parameter.
 * *   You can filter the query results by ACL ID, name, or type.
 * *   This operation cannot be used to query specific policies. If you want to query specific policies, call the [DescribeIpControlPolicyItems](~~DescribeIpControlPolicyItems~~) operation.
 *
 * @param request DescribeIpControlsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIpControlsResponse
 */
DescribeIpControlsResponse Client::describeIpControlsWithOptions(const DescribeIpControlsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpControlId()) {
    query["IpControlId"] = request.getIpControlId();
  }

  if (!!request.hasIpControlName()) {
    query["IpControlName"] = request.getIpControlName();
  }

  if (!!request.hasIpControlType()) {
    query["IpControlType"] = request.getIpControlType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIpControls"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIpControlsResponse>();
}

/**
 * @summary Queries custom access control lists (ACLs) on separate pages.
 *
 * @description *   This operation is intended for API providers.
 * *   This operation is used to query the ACLs in a region. Region is a system parameter.
 * *   You can filter the query results by ACL ID, name, or type.
 * *   This operation cannot be used to query specific policies. If you want to query specific policies, call the [DescribeIpControlPolicyItems](~~DescribeIpControlPolicyItems~~) operation.
 *
 * @param request DescribeIpControlsRequest
 * @return DescribeIpControlsResponse
 */
DescribeIpControlsResponse Client::describeIpControls(const DescribeIpControlsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIpControlsWithOptions(request, runtime);
}

/**
 * @summary 查询日志配置
 *
 * @param request DescribeLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogConfigResponse
 */
DescribeLogConfigResponse Client::describeLogConfigWithOptions(const DescribeLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogType()) {
    query["LogType"] = request.getLogType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLogConfig"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogConfigResponse>();
}

/**
 * @summary 查询日志配置
 *
 * @param request DescribeLogConfigRequest
 * @return DescribeLogConfigResponse
 */
DescribeLogConfigResponse Client::describeLogConfig(const DescribeLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the number of remaining ordered relationships for a purchaser.
 *
 * @param request DescribeMarketRemainsQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMarketRemainsQuotaResponse
 */
DescribeMarketRemainsQuotaResponse Client::describeMarketRemainsQuotaWithOptions(const DescribeMarketRemainsQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMarketRemainsQuota"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMarketRemainsQuotaResponse>();
}

/**
 * @summary Queries the number of remaining ordered relationships for a purchaser.
 *
 * @param request DescribeMarketRemainsQuotaRequest
 * @return DescribeMarketRemainsQuotaResponse
 */
DescribeMarketRemainsQuotaResponse Client::describeMarketRemainsQuota(const DescribeMarketRemainsQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMarketRemainsQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the created models of an API group.
 *
 * @description *   Fuzzy queries are supported.
 *
 * @param request DescribeModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModelsResponse
 */
DescribeModelsResponse Client::describeModelsWithOptions(const DescribeModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasModelId()) {
    query["ModelId"] = request.getModelId();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModels"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModelsResponse>();
}

/**
 * @summary Queries the created models of an API group.
 *
 * @description *   Fuzzy queries are supported.
 *
 * @param request DescribeModelsRequest
 * @return DescribeModelsResponse
 */
DescribeModelsResponse Client::describeModels(const DescribeModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModelsWithOptions(request, runtime);
}

/**
 * @summary Queries the APIs to which a specified plug-in is bound.
 *
 * @param request DescribePluginApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePluginApisResponse
 */
DescribePluginApisResponse Client::describePluginApisWithOptions(const DescribePluginApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasApiName()) {
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMethod()) {
    query["Method"] = request.getMethod();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePluginApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePluginApisResponse>();
}

/**
 * @summary Queries the APIs to which a specified plug-in is bound.
 *
 * @param request DescribePluginApisRequest
 * @return DescribePluginApisResponse
 */
DescribePluginApisResponse Client::describePluginApis(const DescribePluginApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePluginApisWithOptions(request, runtime);
}

/**
 * @summary Query the list of groups bound to a plugin based on the plugin ID
 *
 * @param request DescribePluginGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePluginGroupsResponse
 */
DescribePluginGroupsResponse Client::describePluginGroupsWithOptions(const DescribePluginGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePluginGroups"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePluginGroupsResponse>();
}

/**
 * @summary Query the list of groups bound to a plugin based on the plugin ID
 *
 * @param request DescribePluginGroupsRequest
 * @return DescribePluginGroupsResponse
 */
DescribePluginGroupsResponse Client::describePluginGroups(const DescribePluginGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePluginGroupsWithOptions(request, runtime);
}

/**
 * @summary 查询插件列表
 *
 * @param request DescribePluginSchemasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePluginSchemasResponse
 */
DescribePluginSchemasResponse Client::describePluginSchemasWithOptions(const DescribePluginSchemasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePluginSchemas"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePluginSchemasResponse>();
}

/**
 * @summary 查询插件列表
 *
 * @param request DescribePluginSchemasRequest
 * @return DescribePluginSchemasResponse
 */
DescribePluginSchemasResponse Client::describePluginSchemas(const DescribePluginSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePluginSchemasWithOptions(request, runtime);
}

/**
 * @summary 查询插件模板
 *
 * @param request DescribePluginTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePluginTemplatesResponse
 */
DescribePluginTemplatesResponse Client::describePluginTemplatesWithOptions(const DescribePluginTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPluginName()) {
    query["PluginName"] = request.getPluginName();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePluginTemplates"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePluginTemplatesResponse>();
}

/**
 * @summary 查询插件模板
 *
 * @param request DescribePluginTemplatesRequest
 * @return DescribePluginTemplatesResponse
 */
DescribePluginTemplatesResponse Client::describePluginTemplates(const DescribePluginTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePluginTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries API Gateway plug-ins and the details of the plug-ins.
 *
 * @description *   This operation supports pagination.
 * *   This operation allows you to query plug-ins by business type.
 * *   This operation allows you to query plug-ins by ID.
 * *   This operation allows you to query plug-ins by name.
 *
 * @param request DescribePluginsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePluginsResponse
 */
DescribePluginsResponse Client::describePluginsWithOptions(const DescribePluginsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasPluginName()) {
    query["PluginName"] = request.getPluginName();
  }

  if (!!request.hasPluginType()) {
    query["PluginType"] = request.getPluginType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePlugins"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePluginsResponse>();
}

/**
 * @summary Queries API Gateway plug-ins and the details of the plug-ins.
 *
 * @description *   This operation supports pagination.
 * *   This operation allows you to query plug-ins by business type.
 * *   This operation allows you to query plug-ins by ID.
 * *   This operation allows you to query plug-ins by name.
 *
 * @param request DescribePluginsRequest
 * @return DescribePluginsResponse
 */
DescribePluginsResponse Client::describePlugins(const DescribePluginsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePluginsWithOptions(request, runtime);
}

/**
 * @summary Queries the plug-ins that are bound to a running API in an environment.
 *
 * @description *   This operation is intended for API callers.
 * *   This operation supports pagination.
 *
 * @param request DescribePluginsByApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePluginsByApiResponse
 */
DescribePluginsByApiResponse Client::describePluginsByApiWithOptions(const DescribePluginsByApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePluginsByApi"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePluginsByApiResponse>();
}

/**
 * @summary Queries the plug-ins that are bound to a running API in an environment.
 *
 * @description *   This operation is intended for API callers.
 * *   This operation supports pagination.
 *
 * @param request DescribePluginsByApiRequest
 * @return DescribePluginsByApiResponse
 */
DescribePluginsByApiResponse Client::describePluginsByApi(const DescribePluginsByApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePluginsByApiWithOptions(request, runtime);
}

/**
 * @summary Query Plugins Bound to API Group
 *
 * @param request DescribePluginsByGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePluginsByGroupResponse
 */
DescribePluginsByGroupResponse Client::describePluginsByGroupWithOptions(const DescribePluginsByGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePluginsByGroup"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePluginsByGroupResponse>();
}

/**
 * @summary Query Plugins Bound to API Group
 *
 * @param request DescribePluginsByGroupRequest
 * @return DescribePluginsByGroupResponse
 */
DescribePluginsByGroupResponse Client::describePluginsByGroup(const DescribePluginsByGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePluginsByGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the details about an API group purchased from Alibaba Cloud Marketplace.
 *
 * @param request DescribePurchasedApiGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePurchasedApiGroupResponse
 */
DescribePurchasedApiGroupResponse Client::describePurchasedApiGroupWithOptions(const DescribePurchasedApiGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePurchasedApiGroup"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePurchasedApiGroupResponse>();
}

/**
 * @summary Queries the details about an API group purchased from Alibaba Cloud Marketplace.
 *
 * @param request DescribePurchasedApiGroupRequest
 * @return DescribePurchasedApiGroupResponse
 */
DescribePurchasedApiGroupResponse Client::describePurchasedApiGroup(const DescribePurchasedApiGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePurchasedApiGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the API groups purchased from Alibaba Cloud Marketplace.
 *
 * @param request DescribePurchasedApiGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePurchasedApiGroupsResponse
 */
DescribePurchasedApiGroupsResponse Client::describePurchasedApiGroupsWithOptions(const DescribePurchasedApiGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePurchasedApiGroups"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePurchasedApiGroupsResponse>();
}

/**
 * @summary Queries the API groups purchased from Alibaba Cloud Marketplace.
 *
 * @param request DescribePurchasedApiGroupsRequest
 * @return DescribePurchasedApiGroupsResponse
 */
DescribePurchasedApiGroupsResponse Client::describePurchasedApiGroups(const DescribePurchasedApiGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePurchasedApiGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries APIs that are purchased from Alibaba Cloud Marketplace.
 *
 * @param request DescribePurchasedApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePurchasedApisResponse
 */
DescribePurchasedApisResponse Client::describePurchasedApisWithOptions(const DescribePurchasedApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasApiName()) {
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasVisibility()) {
    query["Visibility"] = request.getVisibility();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePurchasedApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePurchasedApisResponse>();
}

/**
 * @summary Queries APIs that are purchased from Alibaba Cloud Marketplace.
 *
 * @param request DescribePurchasedApisRequest
 * @return DescribePurchasedApisResponse
 */
DescribePurchasedApisResponse Client::describePurchasedApis(const DescribePurchasedApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePurchasedApisWithOptions(request, runtime);
}

/**
 * @summary Queries the Alibaba Cloud regions that are supported by API Gateway.
 *
 * @description This operation queries regions in which API Gateway is available.
 * *   This operation is intended for API providers and callers.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2016-07-14"},
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
 * @summary Queries the Alibaba Cloud regions that are supported by API Gateway.
 *
 * @description This operation queries regions in which API Gateway is available.
 * *   This operation is intended for API providers and callers.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries backend signature keys.
 *
 * @description *   This API is intended for API providers.
 * *   This operation is used to query the backend signature keys in a Region. Region is a system parameter.
 *
 * @param request DescribeSignaturesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSignaturesResponse
 */
DescribeSignaturesResponse Client::describeSignaturesWithOptions(const DescribeSignaturesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSignatureId()) {
    query["SignatureId"] = request.getSignatureId();
  }

  if (!!request.hasSignatureName()) {
    query["SignatureName"] = request.getSignatureName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSignatures"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSignaturesResponse>();
}

/**
 * @summary Queries backend signature keys.
 *
 * @description *   This API is intended for API providers.
 * *   This operation is used to query the backend signature keys in a Region. Region is a system parameter.
 *
 * @param request DescribeSignaturesRequest
 * @return DescribeSignaturesResponse
 */
DescribeSignaturesResponse Client::describeSignatures(const DescribeSignaturesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSignaturesWithOptions(request, runtime);
}

/**
 * @summary Queries the backend signature keys that are bound to a specified API.
 *
 * @description *   This API is intended for API providers.
 *
 * @param request DescribeSignaturesByApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSignaturesByApiResponse
 */
DescribeSignaturesByApiResponse Client::describeSignaturesByApiWithOptions(const DescribeSignaturesByApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSignaturesByApi"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSignaturesByApiResponse>();
}

/**
 * @summary Queries the backend signature keys that are bound to a specified API.
 *
 * @description *   This API is intended for API providers.
 *
 * @param request DescribeSignaturesByApiRequest
 * @return DescribeSignaturesByApiResponse
 */
DescribeSignaturesByApiResponse Client::describeSignaturesByApi(const DescribeSignaturesByApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSignaturesByApiWithOptions(request, runtime);
}

/**
 * @summary Queries the number of API Gateway resources in a region.
 *
 * @param request DescribeSummaryDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSummaryDataResponse
 */
DescribeSummaryDataResponse Client::describeSummaryDataWithOptions(const DescribeSummaryDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSummaryData"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSummaryDataResponse>();
}

/**
 * @summary Queries the number of API Gateway resources in a region.
 *
 * @param request DescribeSummaryDataRequest
 * @return DescribeSummaryDataResponse
 */
DescribeSummaryDataResponse Client::describeSummaryData(const DescribeSummaryDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSummaryDataWithOptions(request, runtime);
}

/**
 * @summary Queries the common parameters supported by the system.
 *
 * @description *   This API is intended for API callers.
 * *   The response of this API contains the system parameters that are optional in API definitions.
 *
 * @param request DescribeSystemParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSystemParametersResponse
 */
DescribeSystemParametersResponse Client::describeSystemParametersWithOptions(const DescribeSystemParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSystemParameters"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSystemParametersResponse>();
}

/**
 * @summary Queries the common parameters supported by the system.
 *
 * @description *   This API is intended for API callers.
 * *   The response of this API contains the system parameters that are optional in API definitions.
 *
 * @param request DescribeSystemParametersRequest
 * @return DescribeSystemParametersResponse
 */
DescribeSystemParametersResponse Client::describeSystemParameters(const DescribeSystemParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSystemParametersWithOptions(request, runtime);
}

/**
 * @summary Queries custom throttling policies and their details. Conditional queries are supported.
 *
 * @description *   This API is intended for API providers.
 * *   This API can be used to query all existing throttling policies (including special throttling policies) and their details.
 * *   You can specify query conditions. For example, you can query the throttling policies bound to a specified API or in a specified environment.
 *
 * @param request DescribeTrafficControlsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTrafficControlsResponse
 */
DescribeTrafficControlsResponse Client::describeTrafficControlsWithOptions(const DescribeTrafficControlsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasTrafficControlId()) {
    query["TrafficControlId"] = request.getTrafficControlId();
  }

  if (!!request.hasTrafficControlName()) {
    query["TrafficControlName"] = request.getTrafficControlName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTrafficControls"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTrafficControlsResponse>();
}

/**
 * @summary Queries custom throttling policies and their details. Conditional queries are supported.
 *
 * @description *   This API is intended for API providers.
 * *   This API can be used to query all existing throttling policies (including special throttling policies) and their details.
 * *   You can specify query conditions. For example, you can query the throttling policies bound to a specified API or in a specified environment.
 *
 * @param request DescribeTrafficControlsRequest
 * @return DescribeTrafficControlsResponse
 */
DescribeTrafficControlsResponse Client::describeTrafficControls(const DescribeTrafficControlsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrafficControlsWithOptions(request, runtime);
}

/**
 * @summary Queries the throttling policy that is bound to a specific API.
 *
 * @description *   This API is intended for API providers.
 *
 * @param request DescribeTrafficControlsByApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTrafficControlsByApiResponse
 */
DescribeTrafficControlsByApiResponse Client::describeTrafficControlsByApiWithOptions(const DescribeTrafficControlsByApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTrafficControlsByApi"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTrafficControlsByApiResponse>();
}

/**
 * @summary Queries the throttling policy that is bound to a specific API.
 *
 * @description *   This API is intended for API providers.
 *
 * @param request DescribeTrafficControlsByApiRequest
 * @return DescribeTrafficControlsByApiResponse
 */
DescribeTrafficControlsByApiResponse Client::describeTrafficControlsByApi(const DescribeTrafficControlsByApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrafficControlsByApiWithOptions(request, runtime);
}

/**
 * @summary 查询批量更新API后端元定结果
 *
 * @param request DescribeUpdateBackendTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUpdateBackendTaskResponse
 */
DescribeUpdateBackendTaskResponse Client::describeUpdateBackendTaskWithOptions(const DescribeUpdateBackendTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOperationUid()) {
    query["OperationUid"] = request.getOperationUid();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUpdateBackendTask"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUpdateBackendTaskResponse>();
}

/**
 * @summary 查询批量更新API后端元定结果
 *
 * @param request DescribeUpdateBackendTaskRequest
 * @return DescribeUpdateBackendTaskResponse
 */
DescribeUpdateBackendTaskResponse Client::describeUpdateBackendTask(const DescribeUpdateBackendTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUpdateBackendTaskWithOptions(request, runtime);
}

/**
 * @summary 查询更新VPC授权的任务
 *
 * @param request DescribeUpdateVpcInfoTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUpdateVpcInfoTaskResponse
 */
DescribeUpdateVpcInfoTaskResponse Client::describeUpdateVpcInfoTaskWithOptions(const DescribeUpdateVpcInfoTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOperationUid()) {
    query["OperationUid"] = request.getOperationUid();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUpdateVpcInfoTask"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUpdateVpcInfoTaskResponse>();
}

/**
 * @summary 查询更新VPC授权的任务
 *
 * @param request DescribeUpdateVpcInfoTaskRequest
 * @return DescribeUpdateVpcInfoTaskResponse
 */
DescribeUpdateVpcInfoTaskResponse Client::describeUpdateVpcInfoTask(const DescribeUpdateVpcInfoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUpdateVpcInfoTaskWithOptions(request, runtime);
}

/**
 * @summary Queries VPC access authorizations.
 *
 * @param request DescribeVpcAccessesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcAccessesResponse
 */
DescribeVpcAccessesResponse Client::describeVpcAccessesWithOptions(const DescribeVpcAccessesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccurateQuery()) {
    query["AccurateQuery"] = request.getAccurateQuery();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVpcAccessId()) {
    query["VpcAccessId"] = request.getVpcAccessId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcAccesses"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcAccessesResponse>();
}

/**
 * @summary Queries VPC access authorizations.
 *
 * @param request DescribeVpcAccessesRequest
 * @return DescribeVpcAccessesResponse
 */
DescribeVpcAccessesResponse Client::describeVpcAccesses(const DescribeVpcAccessesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcAccessesWithOptions(request, runtime);
}

/**
 * @summary Queries zones in a region.
 *
 * @param request DescribeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZonesWithOptions(const DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZones"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeZonesResponse>();
}

/**
 * @summary Queries zones in a region.
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Detaches APIs from an API product.
 *
 * @param request DetachApiProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachApiProductResponse
 */
DetachApiProductResponse Client::detachApiProductWithOptions(const DetachApiProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiProductId()) {
    query["ApiProductId"] = request.getApiProductId();
  }

  if (!!request.hasApis()) {
    query["Apis"] = request.getApis();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachApiProduct"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachApiProductResponse>();
}

/**
 * @summary Detaches APIs from an API product.
 *
 * @param request DetachApiProductRequest
 * @return DetachApiProductResponse
 */
DetachApiProductResponse Client::detachApiProduct(const DetachApiProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachApiProductWithOptions(request, runtime);
}

/**
 * @summary Unbind group plugin
 *
 * @param request DetachGroupPluginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachGroupPluginResponse
 */
DetachGroupPluginResponse Client::detachGroupPluginWithOptions(const DetachGroupPluginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachGroupPlugin"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachGroupPluginResponse>();
}

/**
 * @summary Unbind group plugin
 *
 * @param request DetachGroupPluginRequest
 * @return DetachGroupPluginResponse
 */
DetachGroupPluginResponse Client::detachGroupPlugin(const DetachGroupPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachGroupPluginWithOptions(request, runtime);
}

/**
 * @summary 解绑插件
 *
 * @param request DetachPluginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachPluginResponse
 */
DetachPluginResponse Client::detachPluginWithOptions(const DetachPluginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachPlugin"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachPluginResponse>();
}

/**
 * @summary 解绑插件
 *
 * @param request DetachPluginRequest
 * @return DetachPluginResponse
 */
DetachPluginResponse Client::detachPlugin(const DetachPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachPluginWithOptions(request, runtime);
}

/**
 * @summary This feature provides instance-level access control capabilities for dedicated API Gateway instances. Disables access control on an instance.
 *
 * @param request DisableInstanceAccessControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableInstanceAccessControlResponse
 */
DisableInstanceAccessControlResponse Client::disableInstanceAccessControlWithOptions(const DisableInstanceAccessControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasAddressIPVersion()) {
    query["AddressIPVersion"] = request.getAddressIPVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableInstanceAccessControl"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableInstanceAccessControlResponse>();
}

/**
 * @summary This feature provides instance-level access control capabilities for dedicated API Gateway instances. Disables access control on an instance.
 *
 * @param request DisableInstanceAccessControlRequest
 * @return DisableInstanceAccessControlResponse
 */
DisableInstanceAccessControlResponse Client::disableInstanceAccessControl(const DisableInstanceAccessControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableInstanceAccessControlWithOptions(request, runtime);
}

/**
 * @summary Disassociates an internal domain name resolution from a dedicated instance.
 *
 * @param tmpReq DissociateInstanceWithPrivateDNSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateInstanceWithPrivateDNSResponse
 */
DissociateInstanceWithPrivateDNSResponse Client::dissociateInstanceWithPrivateDNSWithOptions(const DissociateInstanceWithPrivateDNSRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DissociateInstanceWithPrivateDNSShrinkRequest request = DissociateInstanceWithPrivateDNSShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIntranetDomains()) {
    request.setIntranetDomainsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIntranetDomains(), "IntranetDomains", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  json body = {};
  if (!!request.hasIntranetDomainsShrink()) {
    body["IntranetDomains"] = request.getIntranetDomainsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DissociateInstanceWithPrivateDNS"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DissociateInstanceWithPrivateDNSResponse>();
}

/**
 * @summary Disassociates an internal domain name resolution from a dedicated instance.
 *
 * @param request DissociateInstanceWithPrivateDNSRequest
 * @return DissociateInstanceWithPrivateDNSResponse
 */
DissociateInstanceWithPrivateDNSResponse Client::dissociateInstanceWithPrivateDNS(const DissociateInstanceWithPrivateDNSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dissociateInstanceWithPrivateDNSWithOptions(request, runtime);
}

/**
 * @summary Checks the syntax before Swagger-compliant data is imported.
 *
 * @param tmpReq DryRunSwaggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DryRunSwaggerResponse
 */
DryRunSwaggerResponse Client::dryRunSwaggerWithOptions(const DryRunSwaggerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DryRunSwaggerShrinkRequest request = DryRunSwaggerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGlobalCondition()) {
    request.setGlobalConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGlobalCondition(), "GlobalCondition", "json"));
  }

  json query = {};
  if (!!request.hasDataFormat()) {
    query["DataFormat"] = request.getDataFormat();
  }

  if (!!request.hasGlobalConditionShrink()) {
    query["GlobalCondition"] = request.getGlobalConditionShrink();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOverwrite()) {
    query["Overwrite"] = request.getOverwrite();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  json body = {};
  if (!!request.hasData()) {
    body["Data"] = request.getData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DryRunSwagger"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DryRunSwaggerResponse>();
}

/**
 * @summary Checks the syntax before Swagger-compliant data is imported.
 *
 * @param request DryRunSwaggerRequest
 * @return DryRunSwaggerResponse
 */
DryRunSwaggerResponse Client::dryRunSwagger(const DryRunSwaggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dryRunSwaggerWithOptions(request, runtime);
}

/**
 * @summary This feature provides instance-level access control capabilities for dedicated API Gateway instances. Specifies the access control policy of an instance.
 *
 * @param request EnableInstanceAccessControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableInstanceAccessControlResponse
 */
EnableInstanceAccessControlResponse Client::enableInstanceAccessControlWithOptions(const EnableInstanceAccessControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasAclType()) {
    query["AclType"] = request.getAclType();
  }

  if (!!request.hasAddressIPVersion()) {
    query["AddressIPVersion"] = request.getAddressIPVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableInstanceAccessControl"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableInstanceAccessControlResponse>();
}

/**
 * @summary This feature provides instance-level access control capabilities for dedicated API Gateway instances. Specifies the access control policy of an instance.
 *
 * @param request EnableInstanceAccessControlRequest
 * @return EnableInstanceAccessControlResponse
 */
EnableInstanceAccessControlResponse Client::enableInstanceAccessControl(const EnableInstanceAccessControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableInstanceAccessControlWithOptions(request, runtime);
}

/**
 * @summary 导出OAS
 *
 * @param tmpReq ExportOASRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportOASResponse
 */
ExportOASResponse Client::exportOASWithOptions(const ExportOASRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExportOASShrinkRequest request = ExportOASShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApiIdList()) {
    request.setApiIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApiIdList(), "ApiIdList", "json"));
  }

  json query = {};
  if (!!request.hasApiIdListShrink()) {
    query["ApiIdList"] = request.getApiIdListShrink();
  }

  if (!!request.hasDataFormat()) {
    query["DataFormat"] = request.getDataFormat();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOasVersion()) {
    query["OasVersion"] = request.getOasVersion();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasWithXExtensions()) {
    query["WithXExtensions"] = request.getWithXExtensions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportOAS"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportOASResponse>();
}

/**
 * @summary 导出OAS
 *
 * @param request ExportOASRequest
 * @return ExportOASResponse
 */
ExportOASResponse Client::exportOAS(const ExportOASRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportOASWithOptions(request, runtime);
}

/**
 * @summary Imports APIs based on the OAS standard.
 *
 * @param request ImportOASRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportOASResponse
 */
ImportOASResponse Client::importOASWithOptions(const ImportOASRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasBackendName()) {
    query["BackendName"] = request.getBackendName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasIgnoreWarning()) {
    query["IgnoreWarning"] = request.getIgnoreWarning();
  }

  if (!!request.hasOASVersion()) {
    query["OASVersion"] = request.getOASVersion();
  }

  if (!!request.hasOverwrite()) {
    query["Overwrite"] = request.getOverwrite();
  }

  if (!!request.hasRequestMode()) {
    query["RequestMode"] = request.getRequestMode();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSkipDryRun()) {
    query["SkipDryRun"] = request.getSkipDryRun();
  }

  json body = {};
  if (!!request.hasData()) {
    body["Data"] = request.getData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ImportOAS"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportOASResponse>();
}

/**
 * @summary Imports APIs based on the OAS standard.
 *
 * @param request ImportOASRequest
 * @return ImportOASResponse
 */
ImportOASResponse Client::importOAS(const ImportOASRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importOASWithOptions(request, runtime);
}

/**
 * @summary Creates an API by importing Swagger-compliant data.
 *
 * @description *   Alibaba Cloud supports extensions based on Swagger 2.0.
 * *   Alibaba Cloud supports Swagger configuration files in JSON and YAML formats.
 *
 * @param tmpReq ImportSwaggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportSwaggerResponse
 */
ImportSwaggerResponse Client::importSwaggerWithOptions(const ImportSwaggerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ImportSwaggerShrinkRequest request = ImportSwaggerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGlobalCondition()) {
    request.setGlobalConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGlobalCondition(), "GlobalCondition", "json"));
  }

  json query = {};
  if (!!request.hasDataFormat()) {
    query["DataFormat"] = request.getDataFormat();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasGlobalConditionShrink()) {
    query["GlobalCondition"] = request.getGlobalConditionShrink();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOverwrite()) {
    query["Overwrite"] = request.getOverwrite();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  json body = {};
  if (!!request.hasData()) {
    body["Data"] = request.getData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ImportSwagger"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportSwaggerResponse>();
}

/**
 * @summary Creates an API by importing Swagger-compliant data.
 *
 * @description *   Alibaba Cloud supports extensions based on Swagger 2.0.
 * *   Alibaba Cloud supports Swagger configuration files in JSON and YAML formats.
 *
 * @param request ImportSwaggerRequest
 * @return ImportSwaggerResponse
 */
ImportSwaggerResponse Client::importSwagger(const ImportSwaggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importSwaggerWithOptions(request, runtime);
}

/**
 * @summary Queries internal domain name resolutions by domain name or resolution type.
 *
 * @param request ListPrivateDNSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrivateDNSResponse
 */
ListPrivateDNSResponse Client::listPrivateDNSWithOptions(const ListPrivateDNSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIntranetDomain()) {
    query["IntranetDomain"] = request.getIntranetDomain();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrivateDNS"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrivateDNSResponse>();
}

/**
 * @summary Queries internal domain name resolutions by domain name or resolution type.
 *
 * @param request ListPrivateDNSRequest
 * @return ListPrivateDNSResponse
 */
ListPrivateDNSResponse Client::listPrivateDNS(const ListPrivateDNSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrivateDNSWithOptions(request, runtime);
}

/**
 * @summary Queries the visible resource tags.
 *
 * @description *   The Tag.N.Key and Tag.N.Value parameters constitute a key-value pair.
 * *   ResourceId.N must meet all the key-value pairs that are entered. If you enter multiple key-value pairs, resources that contain the specified key-value pairs are returned.
 * *   This operation is used to query resource tags based on conditions. If no relationship matches the conditions, an empty list is returned.
 * *   You can query both user tags and visible system tags.
 * *   In addition to the required parameters, you can also specify ResourceId.N to query the visible resource tags of a specified resource in a region.
 * *   You can also specify Tag.N.Key to query the visible keys of a specified key in a region.
 * *   At least one of ResourceId.N, Tag.N.Key, and Tag.N.Value exists.
 * *   You can query tags of the same type or different types in a single operation.
 * *   You can query all your user types and visible system tags.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2016-07-14"},
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
 * @summary Queries the visible resource tags.
 *
 * @description *   The Tag.N.Key and Tag.N.Value parameters constitute a key-value pair.
 * *   ResourceId.N must meet all the key-value pairs that are entered. If you enter multiple key-value pairs, resources that contain the specified key-value pairs are returned.
 * *   This operation is used to query resource tags based on conditions. If no relationship matches the conditions, an empty list is returned.
 * *   You can query both user tags and visible system tags.
 * *   In addition to the required parameters, you can also specify ResourceId.N to query the visible resource tags of a specified resource in a region.
 * *   You can also specify Tag.N.Key to query the visible keys of a specified key in a region.
 * *   At least one of ResourceId.N, Tag.N.Key, and Tag.N.Value exists.
 * *   You can query tags of the same type or different types in a single operation.
 * *   You can query all your user types and visible system tags.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the definition of an API.
 *
 * @description **This operation is intended for API providers.**
 * *   This API operation requires a full update. Updates of partial parameters are not supported.
 * *   When you modify an API name, make sure that the name of each API within the same group is unique.
 * *   When you modify the request path, make sure that each request path within the same group is unique.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request ModifyApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApiResponse
 */
ModifyApiResponse Client::modifyApiWithOptions(const ModifyApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowSignatureMethod()) {
    query["AllowSignatureMethod"] = request.getAllowSignatureMethod();
  }

  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasApiName()) {
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasAppCodeAuthType()) {
    query["AppCodeAuthType"] = request.getAppCodeAuthType();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasBackendEnable()) {
    query["BackendEnable"] = request.getBackendEnable();
  }

  if (!!request.hasBackendId()) {
    query["BackendId"] = request.getBackendId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDisableInternet()) {
    query["DisableInternet"] = request.getDisableInternet();
  }

  if (!!request.hasForceNonceCheck()) {
    query["ForceNonceCheck"] = request.getForceNonceCheck();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOpenIdConnectConfig()) {
    query["OpenIdConnectConfig"] = request.getOpenIdConnectConfig();
  }

  if (!!request.hasRequestConfig()) {
    query["RequestConfig"] = request.getRequestConfig();
  }

  if (!!request.hasResultBodyModel()) {
    query["ResultBodyModel"] = request.getResultBodyModel();
  }

  if (!!request.hasResultType()) {
    query["ResultType"] = request.getResultType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasServiceConfig()) {
    query["ServiceConfig"] = request.getServiceConfig();
  }

  if (!!request.hasVisibility()) {
    query["Visibility"] = request.getVisibility();
  }

  if (!!request.hasWebSocketApiType()) {
    query["WebSocketApiType"] = request.getWebSocketApiType();
  }

  json body = {};
  if (!!request.hasConstantParameters()) {
    body["ConstantParameters"] = request.getConstantParameters();
  }

  if (!!request.hasErrorCodeSamples()) {
    body["ErrorCodeSamples"] = request.getErrorCodeSamples();
  }

  if (!!request.hasFailResultSample()) {
    body["FailResultSample"] = request.getFailResultSample();
  }

  if (!!request.hasRequestParameters()) {
    body["RequestParameters"] = request.getRequestParameters();
  }

  if (!!request.hasResultDescriptions()) {
    body["ResultDescriptions"] = request.getResultDescriptions();
  }

  if (!!request.hasResultSample()) {
    body["ResultSample"] = request.getResultSample();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  if (!!request.hasServiceParametersMap()) {
    body["ServiceParametersMap"] = request.getServiceParametersMap();
  }

  if (!!request.hasSystemParameters()) {
    body["SystemParameters"] = request.getSystemParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyApi"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApiResponse>();
}

/**
 * @summary Modifies the definition of an API.
 *
 * @description **This operation is intended for API providers.**
 * *   This API operation requires a full update. Updates of partial parameters are not supported.
 * *   When you modify an API name, make sure that the name of each API within the same group is unique.
 * *   When you modify the request path, make sure that each request path within the same group is unique.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request ModifyApiRequest
 * @return ModifyApiResponse
 */
ModifyApiResponse Client::modifyApi(const ModifyApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApiWithOptions(request, runtime);
}

/**
 * @summary Modifies the draft definition of an API. This operation is different from the ModifyApi operation. This operation does not require all information about the API. You need to only specify the parameters that you want to modify. For example, if you want to change the authentication method of the API from Anonymous to APP, you specify APP as the value of AuthType and do not need to configure other parameters.
 *
 * @param request ModifyApiConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApiConfigurationResponse
 */
ModifyApiConfigurationResponse Client::modifyApiConfigurationWithOptions(const ModifyApiConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowSignatureMethod()) {
    query["AllowSignatureMethod"] = request.getAllowSignatureMethod();
  }

  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasApiName()) {
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasAppCodeAuthType()) {
    query["AppCodeAuthType"] = request.getAppCodeAuthType();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasBackendName()) {
    query["BackendName"] = request.getBackendName();
  }

  if (!!request.hasBodyFormat()) {
    query["BodyFormat"] = request.getBodyFormat();
  }

  if (!!request.hasBodyModel()) {
    query["BodyModel"] = request.getBodyModel();
  }

  if (!!request.hasContentTypeCategory()) {
    query["ContentTypeCategory"] = request.getContentTypeCategory();
  }

  if (!!request.hasContentTypeValue()) {
    query["ContentTypeValue"] = request.getContentTypeValue();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDisableInternet()) {
    query["DisableInternet"] = request.getDisableInternet();
  }

  if (!!request.hasErrorCodeSamples()) {
    query["ErrorCodeSamples"] = request.getErrorCodeSamples();
  }

  if (!!request.hasFailResultSample()) {
    query["FailResultSample"] = request.getFailResultSample();
  }

  if (!!request.hasForceNonceCheck()) {
    query["ForceNonceCheck"] = request.getForceNonceCheck();
  }

  if (!!request.hasFunctionComputeConfig()) {
    query["FunctionComputeConfig"] = request.getFunctionComputeConfig();
  }

  if (!!request.hasHttpConfig()) {
    query["HttpConfig"] = request.getHttpConfig();
  }

  if (!!request.hasMockConfig()) {
    query["MockConfig"] = request.getMockConfig();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasOssConfig()) {
    query["OssConfig"] = request.getOssConfig();
  }

  if (!!request.hasPostBodyDescription()) {
    query["PostBodyDescription"] = request.getPostBodyDescription();
  }

  if (!!request.hasRequestHttpMethod()) {
    query["RequestHttpMethod"] = request.getRequestHttpMethod();
  }

  if (!!request.hasRequestMode()) {
    query["RequestMode"] = request.getRequestMode();
  }

  if (!!request.hasRequestParameters()) {
    query["RequestParameters"] = request.getRequestParameters();
  }

  if (!!request.hasRequestPath()) {
    query["RequestPath"] = request.getRequestPath();
  }

  if (!!request.hasRequestProtocol()) {
    query["RequestProtocol"] = request.getRequestProtocol();
  }

  if (!!request.hasResultSample()) {
    query["ResultSample"] = request.getResultSample();
  }

  if (!!request.hasResultType()) {
    query["ResultType"] = request.getResultType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasServiceParameters()) {
    query["ServiceParameters"] = request.getServiceParameters();
  }

  if (!!request.hasServiceParametersMap()) {
    query["ServiceParametersMap"] = request.getServiceParametersMap();
  }

  if (!!request.hasServiceProtocol()) {
    query["ServiceProtocol"] = request.getServiceProtocol();
  }

  if (!!request.hasServiceTimeout()) {
    query["ServiceTimeout"] = request.getServiceTimeout();
  }

  if (!!request.hasUseBackendService()) {
    query["UseBackendService"] = request.getUseBackendService();
  }

  if (!!request.hasVisibility()) {
    query["Visibility"] = request.getVisibility();
  }

  if (!!request.hasVpcConfig()) {
    query["VpcConfig"] = request.getVpcConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApiConfiguration"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApiConfigurationResponse>();
}

/**
 * @summary Modifies the draft definition of an API. This operation is different from the ModifyApi operation. This operation does not require all information about the API. You need to only specify the parameters that you want to modify. For example, if you want to change the authentication method of the API from Anonymous to APP, you specify APP as the value of AuthType and do not need to configure other parameters.
 *
 * @param request ModifyApiConfigurationRequest
 * @return ModifyApiConfigurationResponse
 */
ModifyApiConfigurationResponse Client::modifyApiConfiguration(const ModifyApiConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApiConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modifies the name, description, or basepath of an existing API group.
 *
 * @description *   This operation is intended for API providers.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request ModifyApiGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApiGroupResponse
 */
ModifyApiGroupResponse Client::modifyApiGroupWithOptions(const ModifyApiGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBasePath()) {
    query["BasePath"] = request.getBasePath();
  }

  if (!!request.hasCompatibleFlags()) {
    query["CompatibleFlags"] = request.getCompatibleFlags();
  }

  if (!!request.hasCustomAppCodeConfig()) {
    query["CustomAppCodeConfig"] = request.getCustomAppCodeConfig();
  }

  if (!!request.hasCustomTraceConfig()) {
    query["CustomTraceConfig"] = request.getCustomTraceConfig();
  }

  if (!!request.hasCustomerConfigs()) {
    query["CustomerConfigs"] = request.getCustomerConfigs();
  }

  if (!!request.hasDefaultDomain()) {
    query["DefaultDomain"] = request.getDefaultDomain();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFilterAppCodeForBackend()) {
    query["FilterAppCodeForBackend"] = request.getFilterAppCodeForBackend();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasPassthroughHeaders()) {
    query["PassthroughHeaders"] = request.getPassthroughHeaders();
  }

  if (!!request.hasRpcPattern()) {
    query["RpcPattern"] = request.getRpcPattern();
  }

  if (!!request.hasRpsLimitForServerless()) {
    query["RpsLimitForServerless"] = request.getRpsLimitForServerless();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSupportSSE()) {
    query["SupportSSE"] = request.getSupportSSE();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasUserLogConfig()) {
    query["UserLogConfig"] = request.getUserLogConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApiGroup"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApiGroupResponse>();
}

/**
 * @summary Modifies the name, description, or basepath of an existing API group.
 *
 * @description *   This operation is intended for API providers.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request ModifyApiGroupRequest
 * @return ModifyApiGroupResponse
 */
ModifyApiGroupResponse Client::modifyApiGroup(const ModifyApiGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApiGroupWithOptions(request, runtime);
}

/**
 * @summary 变更分组实例
 *
 * @param request ModifyApiGroupInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApiGroupInstanceResponse
 */
ModifyApiGroupInstanceResponse Client::modifyApiGroupInstanceWithOptions(const ModifyApiGroupInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTargetInstanceId()) {
    query["TargetInstanceId"] = request.getTargetInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApiGroupInstance"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApiGroupInstanceResponse>();
}

/**
 * @summary 变更分组实例
 *
 * @param request ModifyApiGroupInstanceRequest
 * @return ModifyApiGroupInstanceResponse
 */
ModifyApiGroupInstanceResponse Client::modifyApiGroupInstance(const ModifyApiGroupInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApiGroupInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies the network policy of an API group.
 *
 * @param request ModifyApiGroupNetworkPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApiGroupNetworkPolicyResponse
 */
ModifyApiGroupNetworkPolicyResponse Client::modifyApiGroupNetworkPolicyWithOptions(const ModifyApiGroupNetworkPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasHttpsPolicy()) {
    query["HttpsPolicy"] = request.getHttpsPolicy();
  }

  if (!!request.hasInnerDomainEnable()) {
    query["InnerDomainEnable"] = request.getInnerDomainEnable();
  }

  if (!!request.hasInternetEnable()) {
    query["InternetEnable"] = request.getInternetEnable();
  }

  if (!!request.hasInternetIPV6Enable()) {
    query["InternetIPV6Enable"] = request.getInternetIPV6Enable();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasVpcIntranetEnable()) {
    query["VpcIntranetEnable"] = request.getVpcIntranetEnable();
  }

  if (!!request.hasVpcSlbIntranetEnable()) {
    query["VpcSlbIntranetEnable"] = request.getVpcSlbIntranetEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApiGroupNetworkPolicy"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApiGroupNetworkPolicyResponse>();
}

/**
 * @summary Modifies the network policy of an API group.
 *
 * @param request ModifyApiGroupNetworkPolicyRequest
 * @return ModifyApiGroupNetworkPolicyResponse
 */
ModifyApiGroupNetworkPolicyResponse Client::modifyApiGroupNetworkPolicy(const ModifyApiGroupNetworkPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApiGroupNetworkPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the VPC whitelist of an API group.
 *
 * @param request ModifyApiGroupVpcWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApiGroupVpcWhitelistResponse
 */
ModifyApiGroupVpcWhitelistResponse Client::modifyApiGroupVpcWhitelistWithOptions(const ModifyApiGroupVpcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasVpcIds()) {
    query["VpcIds"] = request.getVpcIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApiGroupVpcWhitelist"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApiGroupVpcWhitelistResponse>();
}

/**
 * @summary Modifies the VPC whitelist of an API group.
 *
 * @param request ModifyApiGroupVpcWhitelistRequest
 * @return ModifyApiGroupVpcWhitelistResponse
 */
ModifyApiGroupVpcWhitelistResponse Client::modifyApiGroupVpcWhitelist(const ModifyApiGroupVpcWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApiGroupVpcWhitelistWithOptions(request, runtime);
}

/**
 * @summary Modifies a specified app.
 *
 * @description *   This operation is intended for API callers.
 * *   AppName or Description can be modified. If these parameters are not specified, no modifications are made and the operation will directly return a successful response.********
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request ModifyAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppResponse
 */
ModifyAppResponse Client::modifyAppWithOptions(const ModifyAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDisabled()) {
    query["Disabled"] = request.getDisabled();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApp"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppResponse>();
}

/**
 * @summary Modifies a specified app.
 *
 * @description *   This operation is intended for API callers.
 * *   AppName or Description can be modified. If these parameters are not specified, no modifications are made and the operation will directly return a successful response.********
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request ModifyAppRequest
 * @return ModifyAppResponse
 */
ModifyAppResponse Client::modifyApp(const ModifyAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppWithOptions(request, runtime);
}

/**
 * @summary 修改后端服务
 *
 * @param request ModifyBackendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackendResponse
 */
ModifyBackendResponse Client::modifyBackendWithOptions(const ModifyBackendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendId()) {
    query["BackendId"] = request.getBackendId();
  }

  if (!!request.hasBackendName()) {
    query["BackendName"] = request.getBackendName();
  }

  if (!!request.hasBackendType()) {
    query["BackendType"] = request.getBackendType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackend"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBackendResponse>();
}

/**
 * @summary 修改后端服务
 *
 * @param request ModifyBackendRequest
 * @return ModifyBackendResponse
 */
ModifyBackendResponse Client::modifyBackend(const ModifyBackendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackendWithOptions(request, runtime);
}

/**
 * @summary 修改后端服务在环境上的定义
 *
 * @param request ModifyBackendModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackendModelResponse
 */
ModifyBackendModelResponse Client::modifyBackendModelWithOptions(const ModifyBackendModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendId()) {
    query["BackendId"] = request.getBackendId();
  }

  if (!!request.hasBackendModelData()) {
    query["BackendModelData"] = request.getBackendModelData();
  }

  if (!!request.hasBackendModelId()) {
    query["BackendModelId"] = request.getBackendModelId();
  }

  if (!!request.hasBackendType()) {
    query["BackendType"] = request.getBackendType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackendModel"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBackendModelResponse>();
}

/**
 * @summary 修改后端服务在环境上的定义
 *
 * @param request ModifyBackendModelRequest
 * @return ModifyBackendModelResponse
 */
ModifyBackendModelResponse Client::modifyBackendModel(const ModifyBackendModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackendModelWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a custom dataset.
 *
 * @param request ModifyDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDatasetResponse
 */
ModifyDatasetResponse Client::modifyDatasetWithOptions(const ModifyDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDataset"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDatasetResponse>();
}

/**
 * @summary Modifies the name of a custom dataset.
 *
 * @param request ModifyDatasetRequest
 * @return ModifyDatasetResponse
 */
ModifyDatasetResponse Client::modifyDataset(const ModifyDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDatasetWithOptions(request, runtime);
}

/**
 * @summary Modifies the expiration time and description of a data entry in a custom dataset.
 *
 * @param request ModifyDatasetItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDatasetItemResponse
 */
ModifyDatasetItemResponse Client::modifyDatasetItemWithOptions(const ModifyDatasetItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetItemId()) {
    query["DatasetItemId"] = request.getDatasetItemId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExpiredTime()) {
    query["ExpiredTime"] = request.getExpiredTime();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDatasetItem"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDatasetItemResponse>();
}

/**
 * @summary Modifies the expiration time and description of a data entry in a custom dataset.
 *
 * @param request ModifyDatasetItemRequest
 * @return ModifyDatasetItemResponse
 */
ModifyDatasetItemResponse Client::modifyDatasetItem(const ModifyDatasetItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDatasetItemWithOptions(request, runtime);
}

/**
 * @summary Modifies the properties of an API Gateway instance.
 *
 * @param tmpReq ModifyInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceAttributeResponse
 */
ModifyInstanceAttributeResponse Client::modifyInstanceAttributeWithOptions(const ModifyInstanceAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyInstanceAttributeShrinkRequest request = ModifyInstanceAttributeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasToConnectVpcIpBlock()) {
    request.setToConnectVpcIpBlockShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getToConnectVpcIpBlock(), "ToConnectVpcIpBlock", "json"));
  }

  json query = {};
  if (!!request.hasDeleteVpcIpBlock()) {
    query["DeleteVpcIpBlock"] = request.getDeleteVpcIpBlock();
  }

  if (!!request.hasEgressIpv6Enable()) {
    query["EgressIpv6Enable"] = request.getEgressIpv6Enable();
  }

  if (!!request.hasHttpsPolicy()) {
    query["HttpsPolicy"] = request.getHttpsPolicy();
  }

  if (!!request.hasIPV6Enabled()) {
    query["IPV6Enabled"] = request.getIPV6Enabled();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasIntranetSegments()) {
    query["IntranetSegments"] = request.getIntranetSegments();
  }

  if (!!request.hasMaintainEndTime()) {
    query["MaintainEndTime"] = request.getMaintainEndTime();
  }

  if (!!request.hasMaintainStartTime()) {
    query["MaintainStartTime"] = request.getMaintainStartTime();
  }

  if (!!request.hasToConnectVpcIpBlockShrink()) {
    query["ToConnectVpcIpBlock"] = request.getToConnectVpcIpBlockShrink();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasVpcSlbIntranetEnable()) {
    query["VpcSlbIntranetEnable"] = request.getVpcSlbIntranetEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceAttribute"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceAttributeResponse>();
}

/**
 * @summary Modifies the properties of an API Gateway instance.
 *
 * @param request ModifyInstanceAttributeRequest
 * @return ModifyInstanceAttributeResponse
 */
ModifyInstanceAttributeResponse Client::modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Upgrades or downgrades the configurations of an API Gateway instance.
 *
 * @param request ModifyInstanceSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceSpecResponse
 */
ModifyInstanceSpecResponse Client::modifyInstanceSpecWithOptions(const ModifyInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceSpec()) {
    query["InstanceSpec"] = request.getInstanceSpec();
  }

  if (!!request.hasModifyAction()) {
    query["ModifyAction"] = request.getModifyAction();
  }

  if (!!request.hasSkipWaitSwitch()) {
    query["SkipWaitSwitch"] = request.getSkipWaitSwitch();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceSpec"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceSpecResponse>();
}

/**
 * @summary Upgrades or downgrades the configurations of an API Gateway instance.
 *
 * @param request ModifyInstanceSpecRequest
 * @return ModifyInstanceSpecResponse
 */
ModifyInstanceSpecResponse Client::modifyInstanceSpec(const ModifyInstanceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceSpecWithOptions(request, runtime);
}

/**
 * @summary Modify instance client VPC config.
 *
 * @param request ModifyInstanceVpcAttributeForConsoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceVpcAttributeForConsoleResponse
 */
ModifyInstanceVpcAttributeForConsoleResponse Client::modifyInstanceVpcAttributeForConsoleWithOptions(const ModifyInstanceVpcAttributeForConsoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteVpcAccess()) {
    query["DeleteVpcAccess"] = request.getDeleteVpcAccess();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVpcOwnerId()) {
    query["VpcOwnerId"] = request.getVpcOwnerId();
  }

  if (!!request.hasVswitchId()) {
    query["VswitchId"] = request.getVswitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceVpcAttributeForConsole"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceVpcAttributeForConsoleResponse>();
}

/**
 * @summary Modify instance client VPC config.
 *
 * @param request ModifyInstanceVpcAttributeForConsoleRequest
 * @return ModifyInstanceVpcAttributeForConsoleResponse
 */
ModifyInstanceVpcAttributeForConsoleResponse Client::modifyInstanceVpcAttributeForConsole(const ModifyInstanceVpcAttributeForConsoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceVpcAttributeForConsoleWithOptions(request, runtime);
}

/**
 * @summary Modifies the VPC domain name policy of an API group.
 *
 * @param request ModifyIntranetDomainPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyIntranetDomainPolicyResponse
 */
ModifyIntranetDomainPolicyResponse Client::modifyIntranetDomainPolicyWithOptions(const ModifyIntranetDomainPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasVpcIntranetEnable()) {
    query["VpcIntranetEnable"] = request.getVpcIntranetEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyIntranetDomainPolicy"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyIntranetDomainPolicyResponse>();
}

/**
 * @summary Modifies the VPC domain name policy of an API group.
 *
 * @param request ModifyIntranetDomainPolicyRequest
 * @return ModifyIntranetDomainPolicyResponse
 */
ModifyIntranetDomainPolicyResponse Client::modifyIntranetDomainPolicy(const ModifyIntranetDomainPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyIntranetDomainPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies an access control list (ACL).
 *
 * @description *   This operation is intended for API providers.
 * *   This operation allows you to modify only the name and description of an ACL. You cannot modify the type of the ACL.
 *
 * @param request ModifyIpControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyIpControlResponse
 */
ModifyIpControlResponse Client::modifyIpControlWithOptions(const ModifyIpControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasIpControlId()) {
    query["IpControlId"] = request.getIpControlId();
  }

  if (!!request.hasIpControlName()) {
    query["IpControlName"] = request.getIpControlName();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyIpControl"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyIpControlResponse>();
}

/**
 * @summary Modifies an access control list (ACL).
 *
 * @description *   This operation is intended for API providers.
 * *   This operation allows you to modify only the name and description of an ACL. You cannot modify the type of the ACL.
 *
 * @param request ModifyIpControlRequest
 * @return ModifyIpControlResponse
 */
ModifyIpControlResponse Client::modifyIpControl(const ModifyIpControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyIpControlWithOptions(request, runtime);
}

/**
 * @summary Modifies a policy in an access control list (ACL).
 *
 * @description *   This operation is intended for API providers.
 * *   The modification immediately takes effect on all the APIs that are bound to the policy.
 * *   This operation causes a full modification of the content of a policy.
 *
 * @param request ModifyIpControlPolicyItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyIpControlPolicyItemResponse
 */
ModifyIpControlPolicyItemResponse Client::modifyIpControlPolicyItemWithOptions(const ModifyIpControlPolicyItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasCidrIp()) {
    query["CidrIp"] = request.getCidrIp();
  }

  if (!!request.hasIpControlId()) {
    query["IpControlId"] = request.getIpControlId();
  }

  if (!!request.hasPolicyItemId()) {
    query["PolicyItemId"] = request.getPolicyItemId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyIpControlPolicyItem"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyIpControlPolicyItemResponse>();
}

/**
 * @summary Modifies a policy in an access control list (ACL).
 *
 * @description *   This operation is intended for API providers.
 * *   The modification immediately takes effect on all the APIs that are bound to the policy.
 * *   This operation causes a full modification of the content of a policy.
 *
 * @param request ModifyIpControlPolicyItemRequest
 * @return ModifyIpControlPolicyItemResponse
 */
ModifyIpControlPolicyItemResponse Client::modifyIpControlPolicyItem(const ModifyIpControlPolicyItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyIpControlPolicyItemWithOptions(request, runtime);
}

/**
 * @summary 修改日志配置
 *
 * @param request ModifyLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLogConfigResponse
 */
ModifyLogConfigResponse Client::modifyLogConfigWithOptions(const ModifyLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogType()) {
    query["LogType"] = request.getLogType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSlsLogStore()) {
    query["SlsLogStore"] = request.getSlsLogStore();
  }

  if (!!request.hasSlsProject()) {
    query["SlsProject"] = request.getSlsProject();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLogConfig"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLogConfigResponse>();
}

/**
 * @summary 修改日志配置
 *
 * @param request ModifyLogConfigRequest
 * @return ModifyLogConfigResponse
 */
ModifyLogConfigResponse Client::modifyLogConfig(const ModifyLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLogConfigWithOptions(request, runtime);
}

/**
 * @summary Updates the model of an API group.
 *
 * @param request ModifyModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyModelResponse
 */
ModifyModelResponse Client::modifyModelWithOptions(const ModifyModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasNewModelName()) {
    query["NewModelName"] = request.getNewModelName();
  }

  if (!!request.hasSchema()) {
    query["Schema"] = request.getSchema();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyModel"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyModelResponse>();
}

/**
 * @summary Updates the model of an API group.
 *
 * @param request ModifyModelRequest
 * @return ModifyModelResponse
 */
ModifyModelResponse Client::modifyModel(const ModifyModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyModelWithOptions(request, runtime);
}

/**
 * @summary Modifies the information of a plug-in.
 *
 * @description *   This operation is intended for API providers.
 * *   The name of the plug-in must be unique.
 *
 * @param request ModifyPluginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPluginResponse
 */
ModifyPluginResponse Client::modifyPluginWithOptions(const ModifyPluginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasPluginData()) {
    query["PluginData"] = request.getPluginData();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasPluginName()) {
    query["PluginName"] = request.getPluginName();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPlugin"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPluginResponse>();
}

/**
 * @summary Modifies the information of a plug-in.
 *
 * @description *   This operation is intended for API providers.
 * *   The name of the plug-in must be unique.
 *
 * @param request ModifyPluginRequest
 * @return ModifyPluginResponse
 */
ModifyPluginResponse Client::modifyPlugin(const ModifyPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPluginWithOptions(request, runtime);
}

/**
 * @summary Modifies a backend signature key.
 *
 * @description *   This API is intended for API providers.
 * *   This API operation modifies the name, Key value, and Secret value of an existing signature key.
 * *   Note that the modification takes effect immediately. If the key has been bound to an API, you must adjust the backend signature verification based on the new key accordingly.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request ModifySignatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySignatureResponse
 */
ModifySignatureResponse Client::modifySignatureWithOptions(const ModifySignatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSignatureId()) {
    query["SignatureId"] = request.getSignatureId();
  }

  if (!!request.hasSignatureKey()) {
    query["SignatureKey"] = request.getSignatureKey();
  }

  if (!!request.hasSignatureName()) {
    query["SignatureName"] = request.getSignatureName();
  }

  if (!!request.hasSignatureSecret()) {
    query["SignatureSecret"] = request.getSignatureSecret();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySignature"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySignatureResponse>();
}

/**
 * @summary Modifies a backend signature key.
 *
 * @description *   This API is intended for API providers.
 * *   This API operation modifies the name, Key value, and Secret value of an existing signature key.
 * *   Note that the modification takes effect immediately. If the key has been bound to an API, you must adjust the backend signature verification based on the new key accordingly.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request ModifySignatureRequest
 * @return ModifySignatureResponse
 */
ModifySignatureResponse Client::modifySignature(const ModifySignatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySignatureWithOptions(request, runtime);
}

/**
 * @summary Modifies the settings of a custom throttling policy.
 *
 * @description *   This API is intended for API providers.
 * *   The modifications take effect on the bound APIs instantly.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request ModifyTrafficControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTrafficControlResponse
 */
ModifyTrafficControlResponse Client::modifyTrafficControlWithOptions(const ModifyTrafficControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiDefault()) {
    query["ApiDefault"] = request.getApiDefault();
  }

  if (!!request.hasAppDefault()) {
    query["AppDefault"] = request.getAppDefault();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTrafficControlId()) {
    query["TrafficControlId"] = request.getTrafficControlId();
  }

  if (!!request.hasTrafficControlName()) {
    query["TrafficControlName"] = request.getTrafficControlName();
  }

  if (!!request.hasTrafficControlUnit()) {
    query["TrafficControlUnit"] = request.getTrafficControlUnit();
  }

  if (!!request.hasUserDefault()) {
    query["UserDefault"] = request.getUserDefault();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTrafficControl"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTrafficControlResponse>();
}

/**
 * @summary Modifies the settings of a custom throttling policy.
 *
 * @description *   This API is intended for API providers.
 * *   The modifications take effect on the bound APIs instantly.
 * *   The QPS limit on this operation is 50 per user.
 *
 * @param request ModifyTrafficControlRequest
 * @return ModifyTrafficControlResponse
 */
ModifyTrafficControlResponse Client::modifyTrafficControl(const ModifyTrafficControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTrafficControlWithOptions(request, runtime);
}

/**
 * @summary Modifies a virtual private cloud (VPC) authorization and updates the metadata of the API associated with the VPC authorization.
 *
 * @param request ModifyVpcAccessAndUpdateApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcAccessAndUpdateApisResponse
 */
ModifyVpcAccessAndUpdateApisResponse Client::modifyVpcAccessAndUpdateApisWithOptions(const ModifyVpcAccessAndUpdateApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNeedBatchWork()) {
    query["NeedBatchWork"] = request.getNeedBatchWork();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRefresh()) {
    query["Refresh"] = request.getRefresh();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVpcTargetHostName()) {
    query["VpcTargetHostName"] = request.getVpcTargetHostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyVpcAccessAndUpdateApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyVpcAccessAndUpdateApisResponse>();
}

/**
 * @summary Modifies a virtual private cloud (VPC) authorization and updates the metadata of the API associated with the VPC authorization.
 *
 * @param request ModifyVpcAccessAndUpdateApisRequest
 * @return ModifyVpcAccessAndUpdateApisResponse
 */
ModifyVpcAccessAndUpdateApisResponse Client::modifyVpcAccessAndUpdateApis(const ModifyVpcAccessAndUpdateApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcAccessAndUpdateApisWithOptions(request, runtime);
}

/**
 * @summary 开通API网关服务
 *
 * @param request OpenApiGatewayServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenApiGatewayServiceResponse
 */
OpenApiGatewayServiceResponse Client::openApiGatewayServiceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "OpenApiGatewayService"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenApiGatewayServiceResponse>();
}

/**
 * @summary 开通API网关服务
 *
 * @return OpenApiGatewayServiceResponse
 */
OpenApiGatewayServiceResponse Client::openApiGatewayService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openApiGatewayServiceWithOptions(runtime);
}

/**
 * @summary Queries the request logs of a user.
 *
 * @param request QueryRequestLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRequestLogsResponse
 */
QueryRequestLogsResponse Client::queryRequestLogsWithOptions(const QueryRequestLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRequestLogId()) {
    query["RequestLogId"] = request.getRequestLogId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRequestLogs"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRequestLogsResponse>();
}

/**
 * @summary Queries the request logs of a user.
 *
 * @param request QueryRequestLogsRequest
 * @return QueryRequestLogsResponse
 */
QueryRequestLogsResponse Client::queryRequestLogs(const QueryRequestLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRequestLogsWithOptions(request, runtime);
}

/**
 * @summary Reactivates a custom domain name whose validity status is Abnormal.
 *
 * @description *   This operation is intended for API providers.
 * *   You must solve the problem that is mentioned in the domain name exception prompt before you can reactivate the domain name.
 * *   A typical reason why a custom domain name becomes abnormal is that the domain name does not have an ICP filing or the domain name is included in a blacklist by the administration. When a custom domain name is abnormal, users cannot use it to call APIs.
 * *   You can call this operation to reactivate the domain name to resume normal access.
 *
 * @param request ReactivateDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReactivateDomainResponse
 */
ReactivateDomainResponse Client::reactivateDomainWithOptions(const ReactivateDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReactivateDomain"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReactivateDomainResponse>();
}

/**
 * @summary Reactivates a custom domain name whose validity status is Abnormal.
 *
 * @description *   This operation is intended for API providers.
 * *   You must solve the problem that is mentioned in the domain name exception prompt before you can reactivate the domain name.
 * *   A typical reason why a custom domain name becomes abnormal is that the domain name does not have an ICP filing or the domain name is included in a blacklist by the administration. When a custom domain name is abnormal, users cannot use it to call APIs.
 * *   You can call this operation to reactivate the domain name to resume normal access.
 *
 * @param request ReactivateDomainRequest
 * @return ReactivateDomainResponse
 */
ReactivateDomainResponse Client::reactivateDomain(const ReactivateDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reactivateDomainWithOptions(request, runtime);
}

/**
 * @summary 删除访问控制策略中IP条目
 *
 * @param request RemoveAccessControlListEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveAccessControlListEntryResponse
 */
RemoveAccessControlListEntryResponse Client::removeAccessControlListEntryWithOptions(const RemoveAccessControlListEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclEntrys()) {
    query["AclEntrys"] = request.getAclEntrys();
  }

  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveAccessControlListEntry"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveAccessControlListEntryResponse>();
}

/**
 * @summary 删除访问控制策略中IP条目
 *
 * @param request RemoveAccessControlListEntryRequest
 * @return RemoveAccessControlListEntryResponse
 */
RemoveAccessControlListEntryResponse Client::removeAccessControlListEntry(const RemoveAccessControlListEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeAccessControlListEntryWithOptions(request, runtime);
}

/**
 * @summary Revokes permissions on API products from an application.
 *
 * @param tmpReq RemoveApiProductsAuthoritiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveApiProductsAuthoritiesResponse
 */
RemoveApiProductsAuthoritiesResponse Client::removeApiProductsAuthoritiesWithOptions(const RemoveApiProductsAuthoritiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveApiProductsAuthoritiesShrinkRequest request = RemoveApiProductsAuthoritiesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApiProductIds()) {
    request.setApiProductIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApiProductIds(), "ApiProductIds", "simple"));
  }

  json query = {};
  if (!!request.hasApiProductIdsShrink()) {
    query["ApiProductIds"] = request.getApiProductIdsShrink();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveApiProductsAuthorities"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveApiProductsAuthoritiesResponse>();
}

/**
 * @summary Revokes permissions on API products from an application.
 *
 * @param request RemoveApiProductsAuthoritiesRequest
 * @return RemoveApiProductsAuthoritiesResponse
 */
RemoveApiProductsAuthoritiesResponse Client::removeApiProductsAuthorities(const RemoveApiProductsAuthoritiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeApiProductsAuthoritiesWithOptions(request, runtime);
}

/**
 * @summary Revokes the access permissions on multiple APIs from a specified application.
 *
 * @description *   This operation is intended for API providers and callers.
 * *   Before you revoke access permissions, check by whom the permissions were granted. API providers can only revoke permissions granted by a Provider, and API callers can only revoke permissions granted by a Consumer.
 *
 * @param request RemoveApisAuthoritiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveApisAuthoritiesResponse
 */
RemoveApisAuthoritiesResponse Client::removeApisAuthoritiesWithOptions(const RemoveApisAuthoritiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiIds()) {
    query["ApiIds"] = request.getApiIds();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveApisAuthorities"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveApisAuthoritiesResponse>();
}

/**
 * @summary Revokes the access permissions on multiple APIs from a specified application.
 *
 * @description *   This operation is intended for API providers and callers.
 * *   Before you revoke access permissions, check by whom the permissions were granted. API providers can only revoke permissions granted by a Provider, and API callers can only revoke permissions granted by a Consumer.
 *
 * @param request RemoveApisAuthoritiesRequest
 * @return RemoveApisAuthoritiesResponse
 */
RemoveApisAuthoritiesResponse Client::removeApisAuthorities(const RemoveApisAuthoritiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeApisAuthoritiesWithOptions(request, runtime);
}

/**
 * @summary Revokes the access permissions on a specified API from multiple applications. In this case, multiple applications map to a single API.
 *
 * @description *   This operation is intended for API providers and callers.
 * *   Before you revoke access permissions, check by whom the permissions were granted. API providers can only revoke permissions granted by a Provider, and API callers can only revoke permissions granted by a Consumer.
 *
 * @param request RemoveAppsAuthoritiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveAppsAuthoritiesResponse
 */
RemoveAppsAuthoritiesResponse Client::removeAppsAuthoritiesWithOptions(const RemoveAppsAuthoritiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasAppIds()) {
    query["AppIds"] = request.getAppIds();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveAppsAuthorities"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveAppsAuthoritiesResponse>();
}

/**
 * @summary Revokes the access permissions on a specified API from multiple applications. In this case, multiple applications map to a single API.
 *
 * @description *   This operation is intended for API providers and callers.
 * *   Before you revoke access permissions, check by whom the permissions were granted. API providers can only revoke permissions granted by a Provider, and API callers can only revoke permissions granted by a Consumer.
 *
 * @param request RemoveAppsAuthoritiesRequest
 * @return RemoveAppsAuthoritiesResponse
 */
RemoveAppsAuthoritiesResponse Client::removeAppsAuthorities(const RemoveAppsAuthoritiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeAppsAuthoritiesWithOptions(request, runtime);
}

/**
 * @summary Unbinds an API from an access control list (ACL).
 *
 * @description *   This operation is intended for API callers.
 * *   The unbinding takes effect immediately. After the API is unbound from the ACL, the corresponding environment does not have any IP address access control in place for the API.
 *
 * @param request RemoveIpControlApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveIpControlApisResponse
 */
RemoveIpControlApisResponse Client::removeIpControlApisWithOptions(const RemoveIpControlApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiIds()) {
    query["ApiIds"] = request.getApiIds();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasIpControlId()) {
    query["IpControlId"] = request.getIpControlId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveIpControlApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveIpControlApisResponse>();
}

/**
 * @summary Unbinds an API from an access control list (ACL).
 *
 * @description *   This operation is intended for API callers.
 * *   The unbinding takes effect immediately. After the API is unbound from the ACL, the corresponding environment does not have any IP address access control in place for the API.
 *
 * @param request RemoveIpControlApisRequest
 * @return RemoveIpControlApisResponse
 */
RemoveIpControlApisResponse Client::removeIpControlApis(const RemoveIpControlApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeIpControlApisWithOptions(request, runtime);
}

/**
 * @summary Removes one or more policies from an access control list (ACL).
 *
 * @description *   This operation is intended for API providers.
 *
 * @param request RemoveIpControlPolicyItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveIpControlPolicyItemResponse
 */
RemoveIpControlPolicyItemResponse Client::removeIpControlPolicyItemWithOptions(const RemoveIpControlPolicyItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpControlId()) {
    query["IpControlId"] = request.getIpControlId();
  }

  if (!!request.hasPolicyItemIds()) {
    query["PolicyItemIds"] = request.getPolicyItemIds();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveIpControlPolicyItem"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveIpControlPolicyItemResponse>();
}

/**
 * @summary Removes one or more policies from an access control list (ACL).
 *
 * @description *   This operation is intended for API providers.
 *
 * @param request RemoveIpControlPolicyItemRequest
 * @return RemoveIpControlPolicyItemResponse
 */
RemoveIpControlPolicyItemResponse Client::removeIpControlPolicyItem(const RemoveIpControlPolicyItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeIpControlPolicyItemWithOptions(request, runtime);
}

/**
 * @summary Unbinds a backend signature key from APIs.
 *
 * @description *   This API is intended for API providers.
 * *   The operation takes effect immediately. The request sent from API Gateway to the backend service does not contain the signature string. The corresponding verification step can be removed from the backend.
 *
 * @param request RemoveSignatureApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveSignatureApisResponse
 */
RemoveSignatureApisResponse Client::removeSignatureApisWithOptions(const RemoveSignatureApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiIds()) {
    query["ApiIds"] = request.getApiIds();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSignatureId()) {
    query["SignatureId"] = request.getSignatureId();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveSignatureApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveSignatureApisResponse>();
}

/**
 * @summary Unbinds a backend signature key from APIs.
 *
 * @description *   This API is intended for API providers.
 * *   The operation takes effect immediately. The request sent from API Gateway to the backend service does not contain the signature string. The corresponding verification step can be removed from the backend.
 *
 * @param request RemoveSignatureApisRequest
 * @return RemoveSignatureApisResponse
 */
RemoveSignatureApisResponse Client::removeSignatureApis(const RemoveSignatureApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeSignatureApisWithOptions(request, runtime);
}

/**
 * @summary Unbinds a specified throttling policy from APIs.
 *
 * @description *   This API is intended for API providers.
 * *   This API allows you to unbind a specified throttling policy from up to 100 APIs at a time.
 *
 * @param request RemoveTrafficControlApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveTrafficControlApisResponse
 */
RemoveTrafficControlApisResponse Client::removeTrafficControlApisWithOptions(const RemoveTrafficControlApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiIds()) {
    query["ApiIds"] = request.getApiIds();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasTrafficControlId()) {
    query["TrafficControlId"] = request.getTrafficControlId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveTrafficControlApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveTrafficControlApisResponse>();
}

/**
 * @summary Unbinds a specified throttling policy from APIs.
 *
 * @description *   This API is intended for API providers.
 * *   This API allows you to unbind a specified throttling policy from up to 100 APIs at a time.
 *
 * @param request RemoveTrafficControlApisRequest
 * @return RemoveTrafficControlApisResponse
 */
RemoveTrafficControlApisResponse Client::removeTrafficControlApis(const RemoveTrafficControlApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeTrafficControlApisWithOptions(request, runtime);
}

/**
 * @summary Deletes a VPC authorization without unpublishing the associated APIs.
 *
 * @description *   This API is intended for API providers.
 * *   Revokes the permissions of API Gateway to access your VPC instance.
 * >  Deleting an authorization affects the associated API. Before you delete the authorization, make sure that it is not used by the API.
 *
 * @param request RemoveVpcAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveVpcAccessResponse
 */
RemoveVpcAccessResponse Client::removeVpcAccessWithOptions(const RemoveVpcAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNeedBatchWork()) {
    query["NeedBatchWork"] = request.getNeedBatchWork();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveVpcAccess"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveVpcAccessResponse>();
}

/**
 * @summary Deletes a VPC authorization without unpublishing the associated APIs.
 *
 * @description *   This API is intended for API providers.
 * *   Revokes the permissions of API Gateway to access your VPC instance.
 * >  Deleting an authorization affects the associated API. Before you delete the authorization, make sure that it is not used by the API.
 *
 * @param request RemoveVpcAccessRequest
 * @return RemoveVpcAccessResponse
 */
RemoveVpcAccessResponse Client::removeVpcAccess(const RemoveVpcAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeVpcAccessWithOptions(request, runtime);
}

/**
 * @summary 删除VPC授权并下线关联API
 *
 * @param request RemoveVpcAccessAndAbolishApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveVpcAccessAndAbolishApisResponse
 */
RemoveVpcAccessAndAbolishApisResponse Client::removeVpcAccessAndAbolishApisWithOptions(const RemoveVpcAccessAndAbolishApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNeedBatchWork()) {
    query["NeedBatchWork"] = request.getNeedBatchWork();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveVpcAccessAndAbolishApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveVpcAccessAndAbolishApisResponse>();
}

/**
 * @summary 删除VPC授权并下线关联API
 *
 * @param request RemoveVpcAccessAndAbolishApisRequest
 * @return RemoveVpcAccessAndAbolishApisResponse
 */
RemoveVpcAccessAndAbolishApisResponse Client::removeVpcAccessAndAbolishApis(const RemoveVpcAccessAndAbolishApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeVpcAccessAndAbolishApisWithOptions(request, runtime);
}

/**
 * @summary Resets the AppCode of an application. You can call this operation only once per minute.
 *
 * @param request ResetAppCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAppCodeResponse
 */
ResetAppCodeResponse Client::resetAppCodeWithOptions(const ResetAppCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.getAppCode();
  }

  if (!!request.hasNewAppCode()) {
    query["NewAppCode"] = request.getNewAppCode();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAppCode"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetAppCodeResponse>();
}

/**
 * @summary Resets the AppCode of an application. You can call this operation only once per minute.
 *
 * @param request ResetAppCodeRequest
 * @return ResetAppCodeResponse
 */
ResetAppCodeResponse Client::resetAppCode(const ResetAppCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAppCodeWithOptions(request, runtime);
}

/**
 * @summary Resets the key of an application.
 *
 * @description *   This operation is intended for API callers.
 * *   A new secret is automatically generated after you have called this operation. This secret cannot be customized.
 * *   The results returned by this operation do not contain the application secret. You can obtain the secret by calling DescribeAppSecurity.
 *
 * @param request ResetAppSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAppSecretResponse
 */
ResetAppSecretResponse Client::resetAppSecretWithOptions(const ResetAppSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasNewAppKey()) {
    query["NewAppKey"] = request.getNewAppKey();
  }

  if (!!request.hasNewAppSecret()) {
    query["NewAppSecret"] = request.getNewAppSecret();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAppSecret"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetAppSecretResponse>();
}

/**
 * @summary Resets the key of an application.
 *
 * @description *   This operation is intended for API callers.
 * *   A new secret is automatically generated after you have called this operation. This secret cannot be customized.
 * *   The results returned by this operation do not contain the application secret. You can obtain the secret by calling DescribeAppSecurity.
 *
 * @param request ResetAppSecretRequest
 * @return ResetAppSecretResponse
 */
ResetAppSecretResponse Client::resetAppSecret(const ResetAppSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAppSecretWithOptions(request, runtime);
}

/**
 * @summary 根据APP生成SDK
 *
 * @param request SdkGenerateByAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SdkGenerateByAppResponse
 */
SdkGenerateByAppResponse Client::sdkGenerateByAppWithOptions(const SdkGenerateByAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SdkGenerateByApp"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SdkGenerateByAppResponse>();
}

/**
 * @summary 根据APP生成SDK
 *
 * @param request SdkGenerateByAppRequest
 * @return SdkGenerateByAppResponse
 */
SdkGenerateByAppResponse Client::sdkGenerateByApp(const SdkGenerateByAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sdkGenerateByAppWithOptions(request, runtime);
}

/**
 * @summary 生成与App关联的API的SDK
 *
 * @param request SdkGenerateByAppForRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SdkGenerateByAppForRegionResponse
 */
SdkGenerateByAppForRegionResponse Client::sdkGenerateByAppForRegionWithOptions(const SdkGenerateByAppForRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SdkGenerateByAppForRegion"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SdkGenerateByAppForRegionResponse>();
}

/**
 * @summary 生成与App关联的API的SDK
 *
 * @param request SdkGenerateByAppForRegionRequest
 * @return SdkGenerateByAppForRegionResponse
 */
SdkGenerateByAppForRegionResponse Client::sdkGenerateByAppForRegion(const SdkGenerateByAppForRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sdkGenerateByAppForRegionWithOptions(request, runtime);
}

/**
 * @summary 根据分组生成SDK
 *
 * @param request SdkGenerateByGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SdkGenerateByGroupResponse
 */
SdkGenerateByGroupResponse Client::sdkGenerateByGroupWithOptions(const SdkGenerateByGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SdkGenerateByGroup"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SdkGenerateByGroupResponse>();
}

/**
 * @summary 根据分组生成SDK
 *
 * @param request SdkGenerateByGroupRequest
 * @return SdkGenerateByGroupResponse
 */
SdkGenerateByGroupResponse Client::sdkGenerateByGroup(const SdkGenerateByGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sdkGenerateByGroupWithOptions(request, runtime);
}

/**
 * @summary 修改访问控制策略的名称
 *
 * @param request SetAccessControlListAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAccessControlListAttributeResponse
 */
SetAccessControlListAttributeResponse Client::setAccessControlListAttributeWithOptions(const SetAccessControlListAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasAclName()) {
    query["AclName"] = request.getAclName();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAccessControlListAttribute"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAccessControlListAttributeResponse>();
}

/**
 * @summary 修改访问控制策略的名称
 *
 * @param request SetAccessControlListAttributeRequest
 * @return SetAccessControlListAttributeResponse
 */
SetAccessControlListAttributeResponse Client::setAccessControlListAttribute(const SetAccessControlListAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAccessControlListAttributeWithOptions(request, runtime);
}

/**
 * @summary Grants permissions on API products to an application.
 *
 * @param tmpReq SetApiProductsAuthoritiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetApiProductsAuthoritiesResponse
 */
SetApiProductsAuthoritiesResponse Client::setApiProductsAuthoritiesWithOptions(const SetApiProductsAuthoritiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetApiProductsAuthoritiesShrinkRequest request = SetApiProductsAuthoritiesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApiProductIds()) {
    request.setApiProductIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApiProductIds(), "ApiProductIds", "simple"));
  }

  json query = {};
  if (!!request.hasApiProductIdsShrink()) {
    query["ApiProductIds"] = request.getApiProductIdsShrink();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAuthValidTime()) {
    query["AuthValidTime"] = request.getAuthValidTime();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetApiProductsAuthorities"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetApiProductsAuthoritiesResponse>();
}

/**
 * @summary Grants permissions on API products to an application.
 *
 * @param request SetApiProductsAuthoritiesRequest
 * @return SetApiProductsAuthoritiesResponse
 */
SetApiProductsAuthoritiesResponse Client::setApiProductsAuthorities(const SetApiProductsAuthoritiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setApiProductsAuthoritiesWithOptions(request, runtime);
}

/**
 * @summary Authorizes a specified application to call multiple APIs.
 *
 * @description *   This operation is intended for API providers and callers.
 * *   API providers can authorize all applications to call their APIs.
 * *   API callers can authorize their own applications to call the APIs that they have purchased.
 *
 * @param request SetApisAuthoritiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetApisAuthoritiesResponse
 */
SetApisAuthoritiesResponse Client::setApisAuthoritiesWithOptions(const SetApisAuthoritiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiIds()) {
    query["ApiIds"] = request.getApiIds();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAuthValidTime()) {
    query["AuthValidTime"] = request.getAuthValidTime();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetApisAuthorities"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetApisAuthoritiesResponse>();
}

/**
 * @summary Authorizes a specified application to call multiple APIs.
 *
 * @description *   This operation is intended for API providers and callers.
 * *   API providers can authorize all applications to call their APIs.
 * *   API callers can authorize their own applications to call the APIs that they have purchased.
 *
 * @param request SetApisAuthoritiesRequest
 * @return SetApisAuthoritiesResponse
 */
SetApisAuthoritiesResponse Client::setApisAuthorities(const SetApisAuthoritiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setApisAuthoritiesWithOptions(request, runtime);
}

/**
 * @summary Authorizes multiple applications to call APIs in an API product.
 *
 * @param request SetAppsAuthToApiProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAppsAuthToApiProductResponse
 */
SetAppsAuthToApiProductResponse Client::setAppsAuthToApiProductWithOptions(const SetAppsAuthToApiProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiProductId()) {
    query["ApiProductId"] = request.getApiProductId();
  }

  if (!!request.hasAppIds()) {
    query["AppIds"] = request.getAppIds();
  }

  if (!!request.hasAuthValidTime()) {
    query["AuthValidTime"] = request.getAuthValidTime();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAppsAuthToApiProduct"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAppsAuthToApiProductResponse>();
}

/**
 * @summary Authorizes multiple applications to call APIs in an API product.
 *
 * @param request SetAppsAuthToApiProductRequest
 * @return SetAppsAuthToApiProductResponse
 */
SetAppsAuthToApiProductResponse Client::setAppsAuthToApiProduct(const SetAppsAuthToApiProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAppsAuthToApiProductWithOptions(request, runtime);
}

/**
 * @summary Grants access permissions on a specified API to multiple applications.
 *
 * @description *   This operation is intended for API providers and callers.
 * *   API providers can authorize all applications to call their APIs.
 * *   API callers can authorize their own applications to call the APIs that they have purchased.
 *
 * @param request SetAppsAuthoritiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAppsAuthoritiesResponse
 */
SetAppsAuthoritiesResponse Client::setAppsAuthoritiesWithOptions(const SetAppsAuthoritiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasAppIds()) {
    query["AppIds"] = request.getAppIds();
  }

  if (!!request.hasAuthValidTime()) {
    query["AuthValidTime"] = request.getAuthValidTime();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAppsAuthorities"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAppsAuthoritiesResponse>();
}

/**
 * @summary Grants access permissions on a specified API to multiple applications.
 *
 * @description *   This operation is intended for API providers and callers.
 * *   API providers can authorize all applications to call their APIs.
 * *   API callers can authorize their own applications to call the APIs that they have purchased.
 *
 * @param request SetAppsAuthoritiesRequest
 * @return SetAppsAuthoritiesResponse
 */
SetAppsAuthoritiesResponse Client::setAppsAuthorities(const SetAppsAuthoritiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAppsAuthoritiesWithOptions(request, runtime);
}

/**
 * @summary Binds a custom domain name to a specified API group.
 *
 * @param request SetDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDomainResponse
 */
SetDomainResponse Client::setDomainWithOptions(const SetDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBindStageName()) {
    query["BindStageName"] = request.getBindStageName();
  }

  if (!!request.hasCustomDomainType()) {
    query["CustomDomainType"] = request.getCustomDomainType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasIsForce()) {
    query["IsForce"] = request.getIsForce();
  }

  if (!!request.hasIsHttpRedirectToHttps()) {
    query["IsHttpRedirectToHttps"] = request.getIsHttpRedirectToHttps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDomain"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDomainResponse>();
}

/**
 * @summary Binds a custom domain name to a specified API group.
 *
 * @param request SetDomainRequest
 * @return SetDomainResponse
 */
SetDomainResponse Client::setDomain(const SetDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDomainWithOptions(request, runtime);
}

/**
 * @summary Uploads an SSL certificate for a specified custom domain name.
 *
 * @description *   This operation is intended for API providers.
 * *   The SSL certificate must match the custom domain name.
 * *   After the SSL certificate is bound, HTTPS-based API services become available.
 *
 * @param request SetDomainCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDomainCertificateResponse
 */
SetDomainCertificateResponse Client::setDomainCertificateWithOptions(const SetDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaCertificateBody()) {
    query["CaCertificateBody"] = request.getCaCertificateBody();
  }

  if (!!request.hasCertificateBody()) {
    query["CertificateBody"] = request.getCertificateBody();
  }

  if (!!request.hasCertificateName()) {
    query["CertificateName"] = request.getCertificateName();
  }

  if (!!request.hasCertificatePrivateKey()) {
    query["CertificatePrivateKey"] = request.getCertificatePrivateKey();
  }

  if (!!request.hasClientCertSDnPassThrough()) {
    query["ClientCertSDnPassThrough"] = request.getClientCertSDnPassThrough();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSslOcspCacheEnable()) {
    query["SslOcspCacheEnable"] = request.getSslOcspCacheEnable();
  }

  if (!!request.hasSslOcspEnable()) {
    query["SslOcspEnable"] = request.getSslOcspEnable();
  }

  if (!!request.hasSslVerifyDepth()) {
    query["SslVerifyDepth"] = request.getSslVerifyDepth();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDomainCertificate"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDomainCertificateResponse>();
}

/**
 * @summary Uploads an SSL certificate for a specified custom domain name.
 *
 * @description *   This operation is intended for API providers.
 * *   The SSL certificate must match the custom domain name.
 * *   After the SSL certificate is bound, HTTPS-based API services become available.
 *
 * @param request SetDomainCertificateRequest
 * @return SetDomainCertificateResponse
 */
SetDomainCertificateResponse Client::setDomainCertificate(const SetDomainCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDomainCertificateWithOptions(request, runtime);
}

/**
 * @summary Enables or disables WebSocket for a custom domain name.
 *
 * @param request SetDomainWebSocketStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDomainWebSocketStatusResponse
 */
SetDomainWebSocketStatusResponse Client::setDomainWebSocketStatusWithOptions(const SetDomainWebSocketStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionValue()) {
    query["ActionValue"] = request.getActionValue();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasWSSEnable()) {
    query["WSSEnable"] = request.getWSSEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDomainWebSocketStatus"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDomainWebSocketStatusResponse>();
}

/**
 * @summary Enables or disables WebSocket for a custom domain name.
 *
 * @param request SetDomainWebSocketStatusRequest
 * @return SetDomainWebSocketStatusResponse
 */
SetDomainWebSocketStatusResponse Client::setDomainWebSocketStatus(const SetDomainWebSocketStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDomainWebSocketStatusWithOptions(request, runtime);
}

/**
 * @summary 设置分组授权AppCode
 *
 * @param request SetGroupAuthAppCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetGroupAuthAppCodeResponse
 */
SetGroupAuthAppCodeResponse Client::setGroupAuthAppCodeWithOptions(const SetGroupAuthAppCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthAppCode()) {
    query["AuthAppCode"] = request.getAuthAppCode();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetGroupAuthAppCode"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetGroupAuthAppCodeResponse>();
}

/**
 * @summary 设置分组授权AppCode
 *
 * @param request SetGroupAuthAppCodeRequest
 * @return SetGroupAuthAppCodeResponse
 */
SetGroupAuthAppCodeResponse Client::setGroupAuthAppCode(const SetGroupAuthAppCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setGroupAuthAppCodeWithOptions(request, runtime);
}

/**
 * @summary Creates a binding relationship between specified access control lists (ACLs) and APIs.
 *
 * @description *   This operation is intended for API callers.
 * *   A maximum of 100 APIs can be bound at a time.
 *
 * @param request SetIpControlApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetIpControlApisResponse
 */
SetIpControlApisResponse Client::setIpControlApisWithOptions(const SetIpControlApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiIds()) {
    query["ApiIds"] = request.getApiIds();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasIpControlId()) {
    query["IpControlId"] = request.getIpControlId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetIpControlApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetIpControlApisResponse>();
}

/**
 * @summary Creates a binding relationship between specified access control lists (ACLs) and APIs.
 *
 * @description *   This operation is intended for API callers.
 * *   A maximum of 100 APIs can be bound at a time.
 *
 * @param request SetIpControlApisRequest
 * @return SetIpControlApisResponse
 */
SetIpControlApisResponse Client::setIpControlApis(const SetIpControlApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setIpControlApisWithOptions(request, runtime);
}

/**
 * @summary Binds a signature key to APIs.
 *
 * @param request SetSignatureApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetSignatureApisResponse
 */
SetSignatureApisResponse Client::setSignatureApisWithOptions(const SetSignatureApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiIds()) {
    query["ApiIds"] = request.getApiIds();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSignatureId()) {
    query["SignatureId"] = request.getSignatureId();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetSignatureApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetSignatureApisResponse>();
}

/**
 * @summary Binds a signature key to APIs.
 *
 * @param request SetSignatureApisRequest
 * @return SetSignatureApisResponse
 */
SetSignatureApisResponse Client::setSignatureApis(const SetSignatureApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSignatureApisWithOptions(request, runtime);
}

/**
 * @summary Binds a throttling policy to APIs.
 *
 * @description *   This API is intended for API providers.
 * *   This API allows you to bind a specific throttling policy to up to 100 APIs at a time.
 *
 * @param request SetTrafficControlApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetTrafficControlApisResponse
 */
SetTrafficControlApisResponse Client::setTrafficControlApisWithOptions(const SetTrafficControlApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiIds()) {
    query["ApiIds"] = request.getApiIds();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  if (!!request.hasTrafficControlId()) {
    query["TrafficControlId"] = request.getTrafficControlId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetTrafficControlApis"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetTrafficControlApisResponse>();
}

/**
 * @summary Binds a throttling policy to APIs.
 *
 * @description *   This API is intended for API providers.
 * *   This API allows you to bind a specific throttling policy to up to 100 APIs at a time.
 *
 * @param request SetTrafficControlApisRequest
 * @return SetTrafficControlApisResponse
 */
SetTrafficControlApisResponse Client::setTrafficControlApis(const SetTrafficControlApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setTrafficControlApisWithOptions(request, runtime);
}

/**
 * @summary Creates a virtual private cloud (VPC) access authorization and enables reverse access.
 *
 * @description * This operation is intended for API providers.
 * * This operation is used to authorize API Gateway to access your VPC instance.
 *
 * @param request SetVpcAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetVpcAccessResponse
 */
SetVpcAccessResponse Client::setVpcAccessWithOptions(const SetVpcAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVpcTargetHostName()) {
    query["VpcTargetHostName"] = request.getVpcTargetHostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetVpcAccess"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetVpcAccessResponse>();
}

/**
 * @summary Creates a virtual private cloud (VPC) access authorization and enables reverse access.
 *
 * @description * This operation is intended for API providers.
 * * This operation is used to authorize API Gateway to access your VPC instance.
 *
 * @param request SetVpcAccessRequest
 * @return SetVpcAccessResponse
 */
SetVpcAccessResponse Client::setVpcAccess(const SetVpcAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setVpcAccessWithOptions(request, runtime);
}

/**
 * @summary Specifies a wildcard domain name template for a bound custom domain name.
 *
 * @param request SetWildcardDomainPatternsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetWildcardDomainPatternsResponse
 */
SetWildcardDomainPatternsResponse Client::setWildcardDomainPatternsWithOptions(const SetWildcardDomainPatternsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasWildcardDomainPatterns()) {
    query["WildcardDomainPatterns"] = request.getWildcardDomainPatterns();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetWildcardDomainPatterns"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetWildcardDomainPatternsResponse>();
}

/**
 * @summary Specifies a wildcard domain name template for a bound custom domain name.
 *
 * @param request SetWildcardDomainPatternsRequest
 * @return SetWildcardDomainPatternsResponse
 */
SetWildcardDomainPatternsResponse Client::setWildcardDomainPatterns(const SetWildcardDomainPatternsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setWildcardDomainPatternsWithOptions(request, runtime);
}

/**
 * @summary Switches the definition of an API in a specified runtime environment to a historical version.
 *
 * @param request SwitchApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchApiResponse
 */
SwitchApiResponse Client::switchApiWithOptions(const SwitchApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasHistoryVersion()) {
    query["HistoryVersion"] = request.getHistoryVersion();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStageName()) {
    query["StageName"] = request.getStageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchApi"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchApiResponse>();
}

/**
 * @summary Switches the definition of an API in a specified runtime environment to a historical version.
 *
 * @param request SwitchApiRequest
 * @return SwitchApiResponse
 */
SwitchApiResponse Client::switchApi(const SwitchApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchApiWithOptions(request, runtime);
}

/**
 * @summary Creates a tag-resource relationship.
 *
 * @description *   All tags (key-value pairs) are applied to all resources of a specified ResourceId, with each resource specified as ResourceId.N.
 * *   Tag.N is a resource tag consisting of a key-value pair: Tag.N.Key and Tag.N.Value.
 * *   If you call this operation to tag multiple resources simultaneously, either all or none of the resources will be tagged.
 * *   If you specify Tag.1.Value in addition to required parameters, you must also specify Tag.1.Key. Otherwise, an InvalidParameter.TagKey error is reported. A tag that has a value must have the corresponding key, but the key can be an empty string.
 * *   If a tag with the same key has been bound to a resource, the new tag will overwrite the existing one.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2016-07-14"},
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
 * @summary Creates a tag-resource relationship.
 *
 * @description *   All tags (key-value pairs) are applied to all resources of a specified ResourceId, with each resource specified as ResourceId.N.
 * *   Tag.N is a resource tag consisting of a key-value pair: Tag.N.Key and Tag.N.Value.
 * *   If you call this operation to tag multiple resources simultaneously, either all or none of the resources will be tagged.
 * *   If you specify Tag.1.Value in addition to required parameters, you must also specify Tag.1.Key. Otherwise, an InvalidParameter.TagKey error is reported. A tag that has a value must have the corresponding key, but the key can be an empty string.
 * *   If a tag with the same key has been bound to a resource, the new tag will overwrite the existing one.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from resources.
 *
 * @description *   If you call this operation to untag multiple resources simultaneously, either all or none of the resources will be untagged.
 * *   If you specify resource IDs without specifying tag keys and set the All parameter to true, all tags bound to the specified resources will be deleted. If a resource does not have any tags, the request is not processed but a success is returned.
 * *   If you specify resource IDs without specifying tag keys and set the All parameter to false, the request is not processed but a success is returned.
 * *   When tag keys are specified, the All parameter is invalid.
 * *   When multiple resources and key-value pairs are specified, the specified tags bound to the resources are deleted.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2016-07-14"},
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
 * @summary Removes tags from resources.
 *
 * @description *   If you call this operation to untag multiple resources simultaneously, either all or none of the resources will be untagged.
 * *   If you specify resource IDs without specifying tag keys and set the All parameter to true, all tags bound to the specified resources will be deleted. If a resource does not have any tags, the request is not processed but a success is returned.
 * *   If you specify resource IDs without specifying tag keys and set the All parameter to false, the request is not processed but a success is returned.
 * *   When tag keys are specified, the All parameter is invalid.
 * *   When multiple resources and key-value pairs are specified, the specified tags bound to the resources are deleted.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies an internal domain name resolution.
 *
 * @param tmpReq UpdatePrivateDNSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrivateDNSResponse
 */
UpdatePrivateDNSResponse Client::updatePrivateDNSWithOptions(const UpdatePrivateDNSRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePrivateDNSShrinkRequest request = UpdatePrivateDNSShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRecords()) {
    request.setRecordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRecords(), "Records", "json"));
  }

  json query = {};
  if (!!request.hasIntranetDomain()) {
    query["IntranetDomain"] = request.getIntranetDomain();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  json body = {};
  if (!!request.hasRecordsShrink()) {
    body["Records"] = request.getRecordsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePrivateDNS"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrivateDNSResponse>();
}

/**
 * @summary Modifies an internal domain name resolution.
 *
 * @param request UpdatePrivateDNSRequest
 * @return UpdatePrivateDNSResponse
 */
UpdatePrivateDNSResponse Client::updatePrivateDNS(const UpdatePrivateDNSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePrivateDNSWithOptions(request, runtime);
}

/**
 * @summary Tests the network connectivity between an API Gateway instance and a port on an Elastic Compute Service (ECS) or Server Load Balance (SLB) instance in a virtual private cloud (VPC) access authorization.
 *
 * @param request ValidateVpcConnectivityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateVpcConnectivityResponse
 */
ValidateVpcConnectivityResponse Client::validateVpcConnectivityWithOptions(const ValidateVpcConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasVpcAccessId()) {
    query["VpcAccessId"] = request.getVpcAccessId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ValidateVpcConnectivity"},
    {"version" , "2016-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateVpcConnectivityResponse>();
}

/**
 * @summary Tests the network connectivity between an API Gateway instance and a port on an Elastic Compute Service (ECS) or Server Load Balance (SLB) instance in a virtual private cloud (VPC) access authorization.
 *
 * @param request ValidateVpcConnectivityRequest
 * @return ValidateVpcConnectivityResponse
 */
ValidateVpcConnectivityResponse Client::validateVpcConnectivity(const ValidateVpcConnectivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateVpcConnectivityWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace CloudAPI20160714