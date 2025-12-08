#include <darabonba/Core.hpp>
#include <alibabacloud/WafOpenapi20211001.hpp>
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
using namespace AlibabaCloud::WafOpenapi20211001::Models;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{

AlibabaCloud::WafOpenapi20211001::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing" , "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-chengdu" , "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-zhangjiakou" , "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-huhehaote" , "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-hangzhou" , "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai" , "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen" , "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-heyuan" , "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-wulanchabu" , "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-hongkong" , "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-1" , "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3" , "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1" , "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"us-west-1" , "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"us-east-1" , "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"eu-central-1" , "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"me-east-1" , "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-north-2-gov-1" , "wafopenapi.cn-hangzhou.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("waf-openapi", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Changes the resource group to which a protected object belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2021-10-01"},
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
 * @summary Changes the resource group to which a protected object belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Clears an IP address blacklist for major event protection.
 *
 * @param request ClearMajorProtectionBlackIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearMajorProtectionBlackIpResponse
 */
ClearMajorProtectionBlackIpResponse Client::clearMajorProtectionBlackIpWithOptions(const ClearMajorProtectionBlackIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClearMajorProtectionBlackIp"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearMajorProtectionBlackIpResponse>();
}

/**
 * @summary Clears an IP address blacklist for major event protection.
 *
 * @param request ClearMajorProtectionBlackIpRequest
 * @return ClearMajorProtectionBlackIpResponse
 */
ClearMajorProtectionBlackIpResponse Client::clearMajorProtectionBlackIp(const ClearMajorProtectionBlackIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clearMajorProtectionBlackIpWithOptions(request, runtime);
}

/**
 * @summary Creates a new protection template from the copy.
 *
 * @param request CopyDefenseTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyDefenseTemplateResponse
 */
CopyDefenseTemplateResponse Client::copyDefenseTemplateWithOptions(const CopyDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CopyDefenseTemplate"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyDefenseTemplateResponse>();
}

/**
 * @summary Creates a new protection template from the copy.
 *
 * @param request CopyDefenseTemplateRequest
 * @return CopyDefenseTemplateResponse
 */
CopyDefenseTemplateResponse Client::copyDefenseTemplate(const CopyDefenseTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyDefenseTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a data export task in the API security module.
 *
 * @param request CreateApiExportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApiExportResponse
 */
CreateApiExportResponse Client::createApiExportWithOptions(const CreateApiExportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasParam()) {
    query["Param"] = request.param();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApiExport"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApiExportResponse>();
}

/**
 * @summary Creates a data export task in the API security module.
 *
 * @param request CreateApiExportRequest
 * @return CreateApiExportResponse
 */
CreateApiExportResponse Client::createApiExport(const CreateApiExportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApiExportWithOptions(request, runtime);
}

/**
 * @summary Uploads a certificate that uses an internationally accepted algorithm for a domain name added to Web Application Firewall (WAF) in CNAME record mode.
 *
 * @param request CreateCertsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCertsResponse
 */
CreateCertsResponse Client::createCertsWithOptions(const CreateCertsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertContent()) {
    query["CertContent"] = request.certContent();
  }

  if (!!request.hasCertKey()) {
    query["CertKey"] = request.certKey();
  }

  if (!!request.hasCertName()) {
    query["CertName"] = request.certName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCerts"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCertsResponse>();
}

/**
 * @summary Uploads a certificate that uses an internationally accepted algorithm for a domain name added to Web Application Firewall (WAF) in CNAME record mode.
 *
 * @param request CreateCertsRequest
 * @return CreateCertsResponse
 */
CreateCertsResponse Client::createCerts(const CreateCertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCertsWithOptions(request, runtime);
}

/**
 * @summary Adds a service to Web Application Firewall (WAF). This operation is supported for only the Elastic Compute Service (ECS) and Classic Load Balancer (CLB) services.
 *
 * @param tmpReq CreateCloudResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudResourceResponse
 */
CreateCloudResourceResponse Client::createCloudResourceWithOptions(const CreateCloudResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCloudResourceShrinkRequest request = CreateCloudResourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListen()) {
    request.setListenShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.listen(), "Listen", "json"));
  }

  if (!!tmpReq.hasRedirect()) {
    request.setRedirectShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.redirect(), "Redirect", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasListenShrink()) {
    query["Listen"] = request.listenShrink();
  }

  if (!!request.hasOwnerUserId()) {
    query["OwnerUserId"] = request.ownerUserId();
  }

  if (!!request.hasRedirectShrink()) {
    query["Redirect"] = request.redirectShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudResource"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudResourceResponse>();
}

/**
 * @summary Adds a service to Web Application Firewall (WAF). This operation is supported for only the Elastic Compute Service (ECS) and Classic Load Balancer (CLB) services.
 *
 * @param request CreateCloudResourceRequest
 * @return CreateCloudResourceResponse
 */
CreateCloudResourceResponse Client::createCloudResource(const CreateCloudResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudResourceWithOptions(request, runtime);
}

/**
 * @summary 创建防护对象
 *
 * @param tmpReq CreateDefenseResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDefenseResourceResponse
 */
CreateDefenseResourceResponse Client::createDefenseResourceWithOptions(const CreateDefenseResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDefenseResourceShrinkRequest request = CreateDefenseResourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomHeaders()) {
    request.setCustomHeadersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customHeaders(), "CustomHeaders", "json"));
  }

  json query = {};
  if (!!request.hasCustomHeadersShrink()) {
    query["CustomHeaders"] = request.customHeadersShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDetail()) {
    query["Detail"] = request.detail();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerUserId()) {
    query["OwnerUserId"] = request.ownerUserId();
  }

  if (!!request.hasPattern()) {
    query["Pattern"] = request.pattern();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceGroup()) {
    query["ResourceGroup"] = request.resourceGroup();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResourceOrigin()) {
    query["ResourceOrigin"] = request.resourceOrigin();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasXffStatus()) {
    query["XffStatus"] = request.xffStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDefenseResource"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDefenseResourceResponse>();
}

/**
 * @summary 创建防护对象
 *
 * @param request CreateDefenseResourceRequest
 * @return CreateDefenseResourceResponse
 */
CreateDefenseResourceResponse Client::createDefenseResource(const CreateDefenseResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDefenseResourceWithOptions(request, runtime);
}

/**
 * @summary Creates a protected object group.
 *
 * @param request CreateDefenseResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDefenseResourceGroupResponse
 */
CreateDefenseResourceGroupResponse Client::createDefenseResourceGroupWithOptions(const CreateDefenseResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddList()) {
    query["AddList"] = request.addList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDefenseResourceGroup"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDefenseResourceGroupResponse>();
}

/**
 * @summary Creates a protected object group.
 *
 * @param request CreateDefenseResourceGroupRequest
 * @return CreateDefenseResourceGroupResponse
 */
CreateDefenseResourceGroupResponse Client::createDefenseResourceGroup(const CreateDefenseResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDefenseResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a protection rule.
 *
 * @param request CreateDefenseRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDefenseRuleResponse
 */
CreateDefenseRuleResponse Client::createDefenseRuleWithOptions(const CreateDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.defenseScene();
  }

  if (!!request.hasDefenseType()) {
    query["DefenseType"] = request.defenseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  json body = {};
  if (!!request.hasRules()) {
    body["Rules"] = request.rules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDefenseRule"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDefenseRuleResponse>();
}

/**
 * @summary Creates a protection rule.
 *
 * @param request CreateDefenseRuleRequest
 * @return CreateDefenseRuleResponse
 */
CreateDefenseRuleResponse Client::createDefenseRule(const CreateDefenseRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDefenseRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a protection rule template.
 *
 * @param request CreateDefenseTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDefenseTemplateResponse
 */
CreateDefenseTemplateResponse Client::createDefenseTemplateWithOptions(const CreateDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.defenseScene();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateOrigin()) {
    query["TemplateOrigin"] = request.templateOrigin();
  }

  if (!!request.hasTemplateStatus()) {
    query["TemplateStatus"] = request.templateStatus();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  if (!!request.hasUnbindResourceGroups()) {
    query["UnbindResourceGroups"] = request.unbindResourceGroups();
  }

  if (!!request.hasUnbindResources()) {
    query["UnbindResources"] = request.unbindResources();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDefenseTemplate"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDefenseTemplateResponse>();
}

/**
 * @summary Creates a protection rule template.
 *
 * @param request CreateDefenseTemplateRequest
 * @return CreateDefenseTemplateResponse
 */
CreateDefenseTemplateResponse Client::createDefenseTemplate(const CreateDefenseTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDefenseTemplateWithOptions(request, runtime);
}

/**
 * @summary Adds a domain name to Web Application Firewall (WAF).
 *
 * @param tmpReq CreateDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDomainResponse
 */
CreateDomainResponse Client::createDomainWithOptions(const CreateDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDomainShrinkRequest request = CreateDomainShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListen()) {
    request.setListenShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.listen(), "Listen", "json"));
  }

  if (!!tmpReq.hasRedirect()) {
    request.setRedirectShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.redirect(), "Redirect", "json"));
  }

  json query = {};
  if (!!request.hasAccessType()) {
    query["AccessType"] = request.accessType();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasListenShrink()) {
    query["Listen"] = request.listenShrink();
  }

  if (!!request.hasRedirectShrink()) {
    query["Redirect"] = request.redirectShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDomain"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDomainResponse>();
}

/**
 * @summary Adds a domain name to Web Application Firewall (WAF).
 *
 * @param request CreateDomainRequest
 * @return CreateDomainResponse
 */
CreateDomainResponse Client::createDomain(const CreateDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDomainWithOptions(request, runtime);
}

/**
 * @summary Creates a hybrid cloud cluster.
 *
 * @param request CreateHybridCloudClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHybridCloudClusterResponse
 */
CreateHybridCloudClusterResponse Client::createHybridCloudClusterWithOptions(const CreateHybridCloudClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessMode()) {
    query["AccessMode"] = request.accessMode();
  }

  if (!!request.hasAccessRegion()) {
    query["AccessRegion"] = request.accessRegion();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasHttpPorts()) {
    query["HttpPorts"] = request.httpPorts();
  }

  if (!!request.hasHttpsPorts()) {
    query["HttpsPorts"] = request.httpsPorts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLogFieldsNotReturned()) {
    query["LogFieldsNotReturned"] = request.logFieldsNotReturned();
  }

  if (!!request.hasProtectionServerCount()) {
    query["ProtectionServerCount"] = request.protectionServerCount();
  }

  if (!!request.hasProxyStatus()) {
    query["ProxyStatus"] = request.proxyStatus();
  }

  if (!!request.hasProxyType()) {
    query["ProxyType"] = request.proxyType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleConfig()) {
    query["RuleConfig"] = request.ruleConfig();
  }

  if (!!request.hasRuleStatus()) {
    query["RuleStatus"] = request.ruleStatus();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHybridCloudCluster"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHybridCloudClusterResponse>();
}

/**
 * @summary Creates a hybrid cloud cluster.
 *
 * @param request CreateHybridCloudClusterRequest
 * @return CreateHybridCloudClusterResponse
 */
CreateHybridCloudClusterResponse Client::createHybridCloudCluster(const CreateHybridCloudClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHybridCloudClusterWithOptions(request, runtime);
}

/**
 * @summary 新增集群规则信息
 *
 * @param request CreateHybridCloudClusterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHybridCloudClusterRuleResponse
 */
CreateHybridCloudClusterRuleResponse Client::createHybridCloudClusterRuleWithOptions(const CreateHybridCloudClusterRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleConfig()) {
    query["RuleConfig"] = request.ruleConfig();
  }

  if (!!request.hasRuleStatus()) {
    query["RuleStatus"] = request.ruleStatus();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHybridCloudClusterRule"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHybridCloudClusterRuleResponse>();
}

/**
 * @summary 新增集群规则信息
 *
 * @param request CreateHybridCloudClusterRuleRequest
 * @return CreateHybridCloudClusterRuleResponse
 */
CreateHybridCloudClusterRuleResponse Client::createHybridCloudClusterRule(const CreateHybridCloudClusterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHybridCloudClusterRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a node group for a hybrid cloud cluster.
 *
 * @param request CreateHybridCloudGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHybridCloudGroupResponse
 */
CreateHybridCloudGroupResponse Client::createHybridCloudGroupWithOptions(const CreateHybridCloudGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackSourceMark()) {
    query["BackSourceMark"] = request.backSourceMark();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.groupType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLoadBalanceIp()) {
    query["LoadBalanceIp"] = request.loadBalanceIp();
  }

  if (!!request.hasLocationCode()) {
    query["LocationCode"] = request.locationCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHybridCloudGroup"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHybridCloudGroupResponse>();
}

/**
 * @summary Creates a node group for a hybrid cloud cluster.
 *
 * @param request CreateHybridCloudGroupRequest
 * @return CreateHybridCloudGroupResponse
 */
CreateHybridCloudGroupResponse Client::createHybridCloudGroup(const CreateHybridCloudGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHybridCloudGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a hybrid cloud log delivery configuration.
 *
 * @param request CreateLogDeliveryConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLogDeliveryConfigResponse
 */
CreateLogDeliveryConfigResponse Client::createLogDeliveryConfigWithOptions(const CreateLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryDetail()) {
    query["DeliveryDetail"] = request.deliveryDetail();
  }

  if (!!request.hasDeliveryName()) {
    query["DeliveryName"] = request.deliveryName();
  }

  if (!!request.hasDeliveryType()) {
    query["DeliveryType"] = request.deliveryType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLogDeliveryConfig"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLogDeliveryConfigResponse>();
}

/**
 * @summary Creates a hybrid cloud log delivery configuration.
 *
 * @param request CreateLogDeliveryConfigRequest
 * @return CreateLogDeliveryConfigResponse
 */
CreateLogDeliveryConfigResponse Client::createLogDeliveryConfig(const CreateLogDeliveryConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLogDeliveryConfigWithOptions(request, runtime);
}

/**
 * @summary Creates an IP address blacklist for major event protection.
 *
 * @description This operation is available only on the China site (aliyun.com).
 *
 * @param request CreateMajorProtectionBlackIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMajorProtectionBlackIpResponse
 */
CreateMajorProtectionBlackIpResponse Client::createMajorProtectionBlackIpWithOptions(const CreateMajorProtectionBlackIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasExpiredTime()) {
    query["ExpiredTime"] = request.expiredTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIpList()) {
    query["IpList"] = request.ipList();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMajorProtectionBlackIp"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMajorProtectionBlackIpResponse>();
}

/**
 * @summary Creates an IP address blacklist for major event protection.
 *
 * @description This operation is available only on the China site (aliyun.com).
 *
 * @param request CreateMajorProtectionBlackIpRequest
 * @return CreateMajorProtectionBlackIpResponse
 */
CreateMajorProtectionBlackIpResponse Client::createMajorProtectionBlackIp(const CreateMajorProtectionBlackIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMajorProtectionBlackIpWithOptions(request, runtime);
}

/**
 * @summary Adds members to use the multi-account management feature of Web Application Firewall (WAF).
 *
 * @param request CreateMemberAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMemberAccountsResponse
 */
CreateMemberAccountsResponse Client::createMemberAccountsWithOptions(const CreateMemberAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMemberAccountIds()) {
    query["MemberAccountIds"] = request.memberAccountIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMemberAccounts"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMemberAccountsResponse>();
}

/**
 * @summary Adds members to use the multi-account management feature of Web Application Firewall (WAF).
 *
 * @param request CreateMemberAccountsRequest
 * @return CreateMemberAccountsResponse
 */
CreateMemberAccountsResponse Client::createMemberAccounts(const CreateMemberAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMemberAccountsWithOptions(request, runtime);
}

/**
 * @summary 开启防护功能POC
 *
 * @param request CreatePocFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePocFunctionResponse
 */
CreatePocFunctionResponse Client::createPocFunctionWithOptions(const CreatePocFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePocFunction"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePocFunctionResponse>();
}

/**
 * @summary 开启防护功能POC
 *
 * @param request CreatePocFunctionRequest
 * @return CreatePocFunctionResponse
 */
CreatePocFunctionResponse Client::createPocFunction(const CreatePocFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPocFunctionWithOptions(request, runtime);
}

/**
 * @summary Creates a pay-as-you-go Web Application Firewall (WAF) 3.0 instance.
 *
 * @param request CreatePostpaidInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePostpaidInstanceResponse
 */
CreatePostpaidInstanceResponse Client::createPostpaidInstanceWithOptions(const CreatePostpaidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePostpaidInstance"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePostpaidInstanceResponse>();
}

/**
 * @summary Creates a pay-as-you-go Web Application Firewall (WAF) 3.0 instance.
 *
 * @param request CreatePostpaidInstanceRequest
 * @return CreatePostpaidInstanceResponse
 */
CreatePostpaidInstanceResponse Client::createPostpaidInstance(const CreatePostpaidInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPostpaidInstanceWithOptions(request, runtime);
}

/**
 * @summary Uploads a ShangMi (SM) certificate for a domain name that is added to Web Application Firewall (WAF) in CNAME record mode.
 *
 * @param request CreateSM2CertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSM2CertResponse
 */
CreateSM2CertResponse Client::createSM2CertWithOptions(const CreateSM2CertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertName()) {
    query["CertName"] = request.certName();
  }

  if (!!request.hasEncryptCertificate()) {
    query["EncryptCertificate"] = request.encryptCertificate();
  }

  if (!!request.hasEncryptPrivateKey()) {
    query["EncryptPrivateKey"] = request.encryptPrivateKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasSignCertificate()) {
    query["SignCertificate"] = request.signCertificate();
  }

  if (!!request.hasSignPrivateKey()) {
    query["SignPrivateKey"] = request.signPrivateKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSM2Cert"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSM2CertResponse>();
}

/**
 * @summary Uploads a ShangMi (SM) certificate for a domain name that is added to Web Application Firewall (WAF) in CNAME record mode.
 *
 * @param request CreateSM2CertRequest
 * @return CreateSM2CertResponse
 */
CreateSM2CertResponse Client::createSM2Cert(const CreateSM2CertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSM2CertWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple risks detected by the API security module at a time.
 *
 * @param request DeleteApisecAbnormalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApisecAbnormalsResponse
 */
DeleteApisecAbnormalsResponse Client::deleteApisecAbnormalsWithOptions(const DeleteApisecAbnormalsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbnormalIds()) {
    query["AbnormalIds"] = request.abnormalIds();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApisecAbnormals"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApisecAbnormalsResponse>();
}

/**
 * @summary Deletes multiple risks detected by the API security module at a time.
 *
 * @param request DeleteApisecAbnormalsRequest
 * @return DeleteApisecAbnormalsResponse
 */
DeleteApisecAbnormalsResponse Client::deleteApisecAbnormals(const DeleteApisecAbnormalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApisecAbnormalsWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple security events detected by the API security module at a time.
 *
 * @param request DeleteApisecEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApisecEventsResponse
 */
DeleteApisecEventsResponse Client::deleteApisecEventsWithOptions(const DeleteApisecEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEventIds()) {
    query["EventIds"] = request.eventIds();
  }

  if (!!request.hasEventScope()) {
    query["EventScope"] = request.eventScope();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApisecEvents"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApisecEventsResponse>();
}

/**
 * @summary Deletes multiple security events detected by the API security module at a time.
 *
 * @param request DeleteApisecEventsRequest
 * @return DeleteApisecEventsResponse
 */
DeleteApisecEventsResponse Client::deleteApisecEvents(const DeleteApisecEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApisecEventsWithOptions(request, runtime);
}

/**
 * @summary Removes a service from Web Application Firewall (WAF). This operation is supported for only the Elastic Compute Service (ECS) and Classic Load Balancer (CLB) services.
 *
 * @param request DeleteCloudResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudResourceResponse
 */
DeleteCloudResourceResponse Client::deleteCloudResourceWithOptions(const DeleteCloudResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudResourceId()) {
    query["CloudResourceId"] = request.cloudResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.resourceInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.resourceProduct();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCloudResource"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudResourceResponse>();
}

/**
 * @summary Removes a service from Web Application Firewall (WAF). This operation is supported for only the Elastic Compute Service (ECS) and Classic Load Balancer (CLB) services.
 *
 * @param request DeleteCloudResourceRequest
 * @return DeleteCloudResourceResponse
 */
DeleteCloudResourceResponse Client::deleteCloudResource(const DeleteCloudResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudResourceWithOptions(request, runtime);
}

/**
 * @summary 删除单个防护对象
 *
 * @param request DeleteDefenseResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDefenseResourceResponse
 */
DeleteDefenseResourceResponse Client::deleteDefenseResourceWithOptions(const DeleteDefenseResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDefenseResource"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDefenseResourceResponse>();
}

/**
 * @summary 删除单个防护对象
 *
 * @param request DeleteDefenseResourceRequest
 * @return DeleteDefenseResourceResponse
 */
DeleteDefenseResourceResponse Client::deleteDefenseResource(const DeleteDefenseResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDefenseResourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a protected object group.
 *
 * @param request DeleteDefenseResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDefenseResourceGroupResponse
 */
DeleteDefenseResourceGroupResponse Client::deleteDefenseResourceGroupWithOptions(const DeleteDefenseResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDefenseResourceGroup"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDefenseResourceGroupResponse>();
}

/**
 * @summary Deletes a protected object group.
 *
 * @param request DeleteDefenseResourceGroupRequest
 * @return DeleteDefenseResourceGroupResponse
 */
DeleteDefenseResourceGroupResponse Client::deleteDefenseResourceGroup(const DeleteDefenseResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDefenseResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a protection rule.
 *
 * @param request DeleteDefenseRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDefenseRuleResponse
 */
DeleteDefenseRuleResponse Client::deleteDefenseRuleWithOptions(const DeleteDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseType()) {
    query["DefenseType"] = request.defenseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleIds()) {
    query["RuleIds"] = request.ruleIds();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDefenseRule"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDefenseRuleResponse>();
}

/**
 * @summary Deletes a protection rule.
 *
 * @param request DeleteDefenseRuleRequest
 * @return DeleteDefenseRuleResponse
 */
DeleteDefenseRuleResponse Client::deleteDefenseRule(const DeleteDefenseRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDefenseRuleWithOptions(request, runtime);
}

/**
 * @summary 更新防护规则封禁Ip
 *
 * @param request DeleteDefenseRuleBlockIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDefenseRuleBlockIpResponse
 */
DeleteDefenseRuleBlockIpResponse Client::deleteDefenseRuleBlockIpWithOptions(const DeleteDefenseRuleBlockIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDefenseRuleBlockIp"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDefenseRuleBlockIpResponse>();
}

/**
 * @summary 更新防护规则封禁Ip
 *
 * @param request DeleteDefenseRuleBlockIpRequest
 * @return DeleteDefenseRuleBlockIpResponse
 */
DeleteDefenseRuleBlockIpResponse Client::deleteDefenseRuleBlockIp(const DeleteDefenseRuleBlockIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDefenseRuleBlockIpWithOptions(request, runtime);
}

/**
 * @summary Deletes a protection rule template.
 *
 * @param request DeleteDefenseTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDefenseTemplateResponse
 */
DeleteDefenseTemplateResponse Client::deleteDefenseTemplateWithOptions(const DeleteDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDefenseTemplate"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDefenseTemplateResponse>();
}

/**
 * @summary Deletes a protection rule template.
 *
 * @param request DeleteDefenseTemplateRequest
 * @return DeleteDefenseTemplateResponse
 */
DeleteDefenseTemplateResponse Client::deleteDefenseTemplate(const DeleteDefenseTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDefenseTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a domain name that is added to Web Application Firewall (WAF).
 *
 * @param request DeleteDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomainWithOptions(const DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessType()) {
    query["AccessType"] = request.accessType();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

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
    {"action" , "DeleteDomain"},
    {"version" , "2021-10-01"},
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
 * @summary Deletes a domain name that is added to Web Application Firewall (WAF).
 *
 * @param request DeleteDomainRequest
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomain(const DeleteDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainWithOptions(request, runtime);
}

/**
 * @summary 删除集群规则信息
 *
 * @param request DeleteHybridCloudClusterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHybridCloudClusterRuleResponse
 */
DeleteHybridCloudClusterRuleResponse Client::deleteHybridCloudClusterRuleWithOptions(const DeleteHybridCloudClusterRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterRuleResourceId()) {
    query["ClusterRuleResourceId"] = request.clusterRuleResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHybridCloudClusterRule"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHybridCloudClusterRuleResponse>();
}

/**
 * @summary 删除集群规则信息
 *
 * @param request DeleteHybridCloudClusterRuleRequest
 * @return DeleteHybridCloudClusterRuleResponse
 */
DeleteHybridCloudClusterRuleResponse Client::deleteHybridCloudClusterRule(const DeleteHybridCloudClusterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHybridCloudClusterRuleWithOptions(request, runtime);
}

/**
 * @summary 删除组信息
 *
 * @param request DeleteHybridCloudGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHybridCloudGroupResponse
 */
DeleteHybridCloudGroupResponse Client::deleteHybridCloudGroupWithOptions(const DeleteHybridCloudGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHybridCloudGroup"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHybridCloudGroupResponse>();
}

/**
 * @summary 删除组信息
 *
 * @param request DeleteHybridCloudGroupRequest
 * @return DeleteHybridCloudGroupResponse
 */
DeleteHybridCloudGroupResponse Client::deleteHybridCloudGroup(const DeleteHybridCloudGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHybridCloudGroupWithOptions(request, runtime);
}

/**
 * @summary 删除日志外发配置
 *
 * @param request DeleteLogDeliveryConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLogDeliveryConfigResponse
 */
DeleteLogDeliveryConfigResponse Client::deleteLogDeliveryConfigWithOptions(const DeleteLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryName()) {
    query["DeliveryName"] = request.deliveryName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLogDeliveryConfig"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLogDeliveryConfigResponse>();
}

/**
 * @summary 删除日志外发配置
 *
 * @param request DeleteLogDeliveryConfigRequest
 * @return DeleteLogDeliveryConfigResponse
 */
DeleteLogDeliveryConfigResponse Client::deleteLogDeliveryConfig(const DeleteLogDeliveryConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLogDeliveryConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes an IP address blacklist for major event protection.
 *
 * @param request DeleteMajorProtectionBlackIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMajorProtectionBlackIpResponse
 */
DeleteMajorProtectionBlackIpResponse Client::deleteMajorProtectionBlackIpWithOptions(const DeleteMajorProtectionBlackIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIpList()) {
    query["IpList"] = request.ipList();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMajorProtectionBlackIp"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMajorProtectionBlackIpResponse>();
}

/**
 * @summary Deletes an IP address blacklist for major event protection.
 *
 * @param request DeleteMajorProtectionBlackIpRequest
 * @return DeleteMajorProtectionBlackIpResponse
 */
DeleteMajorProtectionBlackIpResponse Client::deleteMajorProtectionBlackIp(const DeleteMajorProtectionBlackIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMajorProtectionBlackIpWithOptions(request, runtime);
}

/**
 * @summary Removes the members that are added for multi-account management in Web Application Firewall (WAF).
 *
 * @param request DeleteMemberAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMemberAccountResponse
 */
DeleteMemberAccountResponse Client::deleteMemberAccountWithOptions(const DeleteMemberAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMemberAccountId()) {
    query["MemberAccountId"] = request.memberAccountId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMemberAccount"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMemberAccountResponse>();
}

/**
 * @summary Removes the members that are added for multi-account management in Web Application Firewall (WAF).
 *
 * @param request DeleteMemberAccountRequest
 * @return DeleteMemberAccountResponse
 */
DeleteMemberAccountResponse Client::deleteMemberAccount(const DeleteMemberAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMemberAccountWithOptions(request, runtime);
}

/**
 * @summary 查询异常的云产品接入资源
 *
 * @param request DescribeAbnormalCloudResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAbnormalCloudResourcesResponse
 */
DescribeAbnormalCloudResourcesResponse Client::describeAbnormalCloudResourcesWithOptions(const DescribeAbnormalCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAbnormalCloudResources"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAbnormalCloudResourcesResponse>();
}

/**
 * @summary 查询异常的云产品接入资源
 *
 * @param request DescribeAbnormalCloudResourcesRequest
 * @return DescribeAbnormalCloudResourcesResponse
 */
DescribeAbnormalCloudResourcesResponse Client::describeAbnormalCloudResources(const DescribeAbnormalCloudResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAbnormalCloudResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries whether an Alibaba Cloud account is the delegated administrator account of a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeAccountDelegatedStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountDelegatedStatusResponse
 */
DescribeAccountDelegatedStatusResponse Client::describeAccountDelegatedStatusWithOptions(const DescribeAccountDelegatedStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccountDelegatedStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccountDelegatedStatusResponse>();
}

/**
 * @summary Queries whether an Alibaba Cloud account is the delegated administrator account of a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeAccountDelegatedStatusRequest
 * @return DescribeAccountDelegatedStatusResponse
 */
DescribeAccountDelegatedStatusResponse Client::describeAccountDelegatedStatus(const DescribeAccountDelegatedStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountDelegatedStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the list of data export tasks in the API security module.
 *
 * @param request DescribeApiExportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiExportsResponse
 */
DescribeApiExportsResponse Client::describeApiExportsWithOptions(const DescribeApiExportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiExports"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiExportsResponse>();
}

/**
 * @summary Queries the list of data export tasks in the API security module.
 *
 * @param request DescribeApiExportsRequest
 * @return DescribeApiExportsResponse
 */
DescribeApiExportsResponse Client::describeApiExports(const DescribeApiExportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiExportsWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on domain names on which risks are detected by the API security module.
 *
 * @param request DescribeApisecAbnormalDomainStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecAbnormalDomainStatisticResponse
 */
DescribeApisecAbnormalDomainStatisticResponse Client::describeApisecAbnormalDomainStatisticWithOptions(const DescribeApisecAbnormalDomainStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrderWay()) {
    query["OrderWay"] = request.orderWay();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecAbnormalDomainStatistic"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecAbnormalDomainStatisticResponse>();
}

/**
 * @summary Queries the statistics on domain names on which risks are detected by the API security module.
 *
 * @param request DescribeApisecAbnormalDomainStatisticRequest
 * @return DescribeApisecAbnormalDomainStatisticResponse
 */
DescribeApisecAbnormalDomainStatisticResponse Client::describeApisecAbnormalDomainStatistic(const DescribeApisecAbnormalDomainStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecAbnormalDomainStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the list of API security risks.
 *
 * @param request DescribeApisecAbnormalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecAbnormalsResponse
 */
DescribeApisecAbnormalsResponse Client::describeApisecAbnormalsWithOptions(const DescribeApisecAbnormalsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbnormalId()) {
    query["AbnormalId"] = request.abnormalId();
  }

  if (!!request.hasAbnormalLevel()) {
    query["AbnormalLevel"] = request.abnormalLevel();
  }

  if (!!request.hasAbnormalTag()) {
    query["AbnormalTag"] = request.abnormalTag();
  }

  if (!!request.hasApiFormat()) {
    query["ApiFormat"] = request.apiFormat();
  }

  if (!!request.hasApiId()) {
    query["ApiId"] = request.apiId();
  }

  if (!!request.hasApiTag()) {
    query["ApiTag"] = request.apiTag();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMatchedHost()) {
    query["MatchedHost"] = request.matchedHost();
  }

  if (!!request.hasOrderKey()) {
    query["OrderKey"] = request.orderKey();
  }

  if (!!request.hasOrderWay()) {
    query["OrderWay"] = request.orderWay();
  }

  if (!!request.hasOrigin()) {
    query["Origin"] = request.origin();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUserStatus()) {
    query["UserStatus"] = request.userStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecAbnormals"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecAbnormalsResponse>();
}

/**
 * @summary Queries the list of API security risks.
 *
 * @param request DescribeApisecAbnormalsRequest
 * @return DescribeApisecAbnormalsResponse
 */
DescribeApisecAbnormalsResponse Client::describeApisecAbnormals(const DescribeApisecAbnormalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecAbnormalsWithOptions(request, runtime);
}

/**
 * @summary Queries API assets in the API security module.
 *
 * @param request DescribeApisecApiResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecApiResourcesResponse
 */
DescribeApisecApiResourcesResponse Client::describeApisecApiResourcesWithOptions(const DescribeApisecApiResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiFormat()) {
    query["ApiFormat"] = request.apiFormat();
  }

  if (!!request.hasApiId()) {
    query["ApiId"] = request.apiId();
  }

  if (!!request.hasApiMethod()) {
    query["ApiMethod"] = request.apiMethod();
  }

  if (!!request.hasApiStatus()) {
    query["ApiStatus"] = request.apiStatus();
  }

  if (!!request.hasApiTag()) {
    query["ApiTag"] = request.apiTag();
  }

  if (!!request.hasApiType()) {
    query["ApiType"] = request.apiType();
  }

  if (!!request.hasAuthFlag()) {
    query["AuthFlag"] = request.authFlag();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasFollow()) {
    query["Follow"] = request.follow();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMatchedHost()) {
    query["MatchedHost"] = request.matchedHost();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.note();
  }

  if (!!request.hasOrderKey()) {
    query["OrderKey"] = request.orderKey();
  }

  if (!!request.hasOrderWay()) {
    query["OrderWay"] = request.orderWay();
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

  if (!!request.hasRequestSensitiveType()) {
    query["RequestSensitiveType"] = request.requestSensitiveType();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasSensitiveLevel()) {
    query["SensitiveLevel"] = request.sensitiveLevel();
  }

  if (!!request.hasSensitiveType()) {
    query["SensitiveType"] = request.sensitiveType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecApiResources"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecApiResourcesResponse>();
}

/**
 * @summary Queries API assets in the API security module.
 *
 * @param request DescribeApisecApiResourcesRequest
 * @return DescribeApisecApiResourcesResponse
 */
DescribeApisecApiResourcesResponse Client::describeApisecApiResources(const DescribeApisecApiResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecApiResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the asset trends in the API security module.
 *
 * @param request DescribeApisecAssetTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecAssetTrendResponse
 */
DescribeApisecAssetTrendResponse Client::describeApisecAssetTrendWithOptions(const DescribeApisecAssetTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecAssetTrend"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecAssetTrendResponse>();
}

/**
 * @summary Queries the asset trends in the API security module.
 *
 * @param request DescribeApisecAssetTrendRequest
 * @return DescribeApisecAssetTrendResponse
 */
DescribeApisecAssetTrendResponse Client::describeApisecAssetTrend(const DescribeApisecAssetTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecAssetTrendWithOptions(request, runtime);
}

/**
 * @summary 查询安全事件详情
 *
 * @param request DescribeApisecEventDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecEventDetailResponse
 */
DescribeApisecEventDetailResponse Client::describeApisecEventDetailWithOptions(const DescribeApisecEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDetailType()) {
    query["DetailType"] = request.detailType();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.eventId();
  }

  if (!!request.hasEventScope()) {
    query["EventScope"] = request.eventScope();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecEventDetail"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecEventDetailResponse>();
}

/**
 * @summary 查询安全事件详情
 *
 * @param request DescribeApisecEventDetailRequest
 * @return DescribeApisecEventDetailResponse
 */
DescribeApisecEventDetailResponse Client::describeApisecEventDetail(const DescribeApisecEventDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecEventDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on domain names on which security events are detected by the API security module.
 *
 * @param request DescribeApisecEventDomainStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecEventDomainStatisticResponse
 */
DescribeApisecEventDomainStatisticResponse Client::describeApisecEventDomainStatisticWithOptions(const DescribeApisecEventDomainStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrderWay()) {
    query["OrderWay"] = request.orderWay();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecEventDomainStatistic"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecEventDomainStatisticResponse>();
}

/**
 * @summary Queries the statistics on domain names on which security events are detected by the API security module.
 *
 * @param request DescribeApisecEventDomainStatisticRequest
 * @return DescribeApisecEventDomainStatisticResponse
 */
DescribeApisecEventDomainStatisticResponse Client::describeApisecEventDomainStatistic(const DescribeApisecEventDomainStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecEventDomainStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries API security events.
 *
 * @param request DescribeApisecEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecEventsResponse
 */
DescribeApisecEventsResponse Client::describeApisecEventsWithOptions(const DescribeApisecEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.account();
  }

  if (!!request.hasApiFormat()) {
    query["ApiFormat"] = request.apiFormat();
  }

  if (!!request.hasApiId()) {
    query["ApiId"] = request.apiId();
  }

  if (!!request.hasApiTag()) {
    query["ApiTag"] = request.apiTag();
  }

  if (!!request.hasAttackIp()) {
    query["AttackIp"] = request.attackIp();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTs()) {
    query["EndTs"] = request.endTs();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.eventId();
  }

  if (!!request.hasEventLevel()) {
    query["EventLevel"] = request.eventLevel();
  }

  if (!!request.hasEventScope()) {
    query["EventScope"] = request.eventScope();
  }

  if (!!request.hasEventTag()) {
    query["EventTag"] = request.eventTag();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMatchedHost()) {
    query["MatchedHost"] = request.matchedHost();
  }

  if (!!request.hasOrderKey()) {
    query["OrderKey"] = request.orderKey();
  }

  if (!!request.hasOrderWay()) {
    query["OrderWay"] = request.orderWay();
  }

  if (!!request.hasOrigin()) {
    query["Origin"] = request.origin();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.startTs();
  }

  if (!!request.hasUserStatus()) {
    query["UserStatus"] = request.userStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecEvents"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecEventsResponse>();
}

/**
 * @summary Queries API security events.
 *
 * @param request DescribeApisecEventsRequest
 * @return DescribeApisecEventsResponse
 */
DescribeApisecEventsResponse Client::describeApisecEvents(const DescribeApisecEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of API security log subscription.
 *
 * @param request DescribeApisecLogDeliveriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecLogDeliveriesResponse
 */
DescribeApisecLogDeliveriesResponse Client::describeApisecLogDeliveriesWithOptions(const DescribeApisecLogDeliveriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecLogDeliveries"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecLogDeliveriesResponse>();
}

/**
 * @summary Queries the configurations of API security log subscription.
 *
 * @param request DescribeApisecLogDeliveriesRequest
 * @return DescribeApisecLogDeliveriesResponse
 */
DescribeApisecLogDeliveriesResponse Client::describeApisecLogDeliveries(const DescribeApisecLogDeliveriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecLogDeliveriesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of domain names detected in the API security module.
 *
 * @param request DescribeApisecMatchedHostsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecMatchedHostsResponse
 */
DescribeApisecMatchedHostsResponse Client::describeApisecMatchedHostsWithOptions(const DescribeApisecMatchedHostsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMatchedHost()) {
    query["MatchedHost"] = request.matchedHost();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecMatchedHosts"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecMatchedHostsResponse>();
}

/**
 * @summary Queries the list of domain names detected in the API security module.
 *
 * @param request DescribeApisecMatchedHostsRequest
 * @return DescribeApisecMatchedHostsResponse
 */
DescribeApisecMatchedHostsResponse Client::describeApisecMatchedHosts(const DescribeApisecMatchedHostsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecMatchedHostsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of protected object groups to which API security policies are applied.
 *
 * @param request DescribeApisecProtectionGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecProtectionGroupsResponse
 */
DescribeApisecProtectionGroupsResponse Client::describeApisecProtectionGroupsWithOptions(const DescribeApisecProtectionGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApisecStatus()) {
    query["ApisecStatus"] = request.apisecStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResourceGroup()) {
    query["ResourceGroup"] = request.resourceGroup();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecProtectionGroups"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecProtectionGroupsResponse>();
}

/**
 * @summary Queries the list of protected object groups to which API security policies are applied.
 *
 * @param request DescribeApisecProtectionGroupsRequest
 * @return DescribeApisecProtectionGroupsResponse
 */
DescribeApisecProtectionGroupsResponse Client::describeApisecProtectionGroups(const DescribeApisecProtectionGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecProtectionGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of protected objects to which API security policies are applied.
 *
 * @param request DescribeApisecProtectionResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecProtectionResourcesResponse
 */
DescribeApisecProtectionResourcesResponse Client::describeApisecProtectionResourcesWithOptions(const DescribeApisecProtectionResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApisecStatus()) {
    query["ApisecStatus"] = request.apisecStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecProtectionResources"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecProtectionResourcesResponse>();
}

/**
 * @summary Queries the list of protected objects to which API security policies are applied.
 *
 * @param request DescribeApisecProtectionResourcesRequest
 * @return DescribeApisecProtectionResourcesResponse
 */
DescribeApisecProtectionResourcesResponse Client::describeApisecProtectionResources(const DescribeApisecProtectionResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecProtectionResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the policies configured in the API security module.
 *
 * @param request DescribeApisecRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecRulesResponse
 */
DescribeApisecRulesResponse Client::describeApisecRulesWithOptions(const DescribeApisecRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOrigin()) {
    query["Origin"] = request.origin();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecRules"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecRulesResponse>();
}

/**
 * @summary Queries the policies configured in the API security module.
 *
 * @param request DescribeApisecRulesRequest
 * @return DescribeApisecRulesResponse
 */
DescribeApisecRulesResponse Client::describeApisecRules(const DescribeApisecRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on domain names on which sensitive data is detected by the API security module.
 *
 * @param request DescribeApisecSensitiveDomainStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecSensitiveDomainStatisticResponse
 */
DescribeApisecSensitiveDomainStatisticResponse Client::describeApisecSensitiveDomainStatisticWithOptions(const DescribeApisecSensitiveDomainStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrderWay()) {
    query["OrderWay"] = request.orderWay();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecSensitiveDomainStatistic"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecSensitiveDomainStatisticResponse>();
}

/**
 * @summary Queries the statistics on domain names on which sensitive data is detected by the API security module.
 *
 * @param request DescribeApisecSensitiveDomainStatisticRequest
 * @return DescribeApisecSensitiveDomainStatisticResponse
 */
DescribeApisecSensitiveDomainStatisticResponse Client::describeApisecSensitiveDomainStatistic(const DescribeApisecSensitiveDomainStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecSensitiveDomainStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the Logstores whose names start with apisec- in Simple Log Service.
 *
 * @param request DescribeApisecSlsLogStoresRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecSlsLogStoresResponse
 */
DescribeApisecSlsLogStoresResponse Client::describeApisecSlsLogStoresWithOptions(const DescribeApisecSlsLogStoresRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLogRegionId()) {
    query["LogRegionId"] = request.logRegionId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecSlsLogStores"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecSlsLogStoresResponse>();
}

/**
 * @summary Queries the Logstores whose names start with apisec- in Simple Log Service.
 *
 * @param request DescribeApisecSlsLogStoresRequest
 * @return DescribeApisecSlsLogStoresResponse
 */
DescribeApisecSlsLogStoresResponse Client::describeApisecSlsLogStores(const DescribeApisecSlsLogStoresRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecSlsLogStoresWithOptions(request, runtime);
}

/**
 * @summary Queries the projects whose names start with apisec- in Simple Log Service.
 *
 * @param request DescribeApisecSlsProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecSlsProjectsResponse
 */
DescribeApisecSlsProjectsResponse Client::describeApisecSlsProjectsWithOptions(const DescribeApisecSlsProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLogRegionId()) {
    query["LogRegionId"] = request.logRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecSlsProjects"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecSlsProjectsResponse>();
}

/**
 * @summary Queries the projects whose names start with apisec- in Simple Log Service.
 *
 * @param request DescribeApisecSlsProjectsRequest
 * @return DescribeApisecSlsProjectsResponse
 */
DescribeApisecSlsProjectsResponse Client::describeApisecSlsProjects(const DescribeApisecSlsProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecSlsProjectsWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics of API security-related risks and events.
 *
 * @param request DescribeApisecStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecStatisticsResponse
 */
DescribeApisecStatisticsResponse Client::describeApisecStatisticsWithOptions(const DescribeApisecStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUserStatusList()) {
    query["UserStatusList"] = request.userStatusList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecStatistics"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecStatisticsResponse>();
}

/**
 * @summary Queries the statistics of API security-related risks and events.
 *
 * @param request DescribeApisecStatisticsRequest
 * @return DescribeApisecStatisticsResponse
 */
DescribeApisecStatisticsResponse Client::describeApisecStatistics(const DescribeApisecStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the protection suggestions for APIs.
 *
 * @param request DescribeApisecSuggestionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecSuggestionsResponse
 */
DescribeApisecSuggestionsResponse Client::describeApisecSuggestionsWithOptions(const DescribeApisecSuggestionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.apiId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecSuggestions"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecSuggestionsResponse>();
}

/**
 * @summary Queries the protection suggestions for APIs.
 *
 * @param request DescribeApisecSuggestionsRequest
 * @return DescribeApisecSuggestionsResponse
 */
DescribeApisecSuggestionsResponse Client::describeApisecSuggestions(const DescribeApisecSuggestionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecSuggestionsWithOptions(request, runtime);
}

/**
 * @summary Queries user operation records in the API security module.
 *
 * @param request DescribeApisecUserOperationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecUserOperationsResponse
 */
DescribeApisecUserOperationsResponse Client::describeApisecUserOperationsWithOptions(const DescribeApisecUserOperationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.objectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecUserOperations"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecUserOperationsResponse>();
}

/**
 * @summary Queries user operation records in the API security module.
 *
 * @param request DescribeApisecUserOperationsRequest
 * @return DescribeApisecUserOperationsResponse
 */
DescribeApisecUserOperationsResponse Client::describeApisecUserOperations(const DescribeApisecUserOperationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecUserOperationsWithOptions(request, runtime);
}

/**
 * @summary 查询基础防护系统规则集
 *
 * @param request DescribeBaseSystemRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBaseSystemRulesResponse
 */
DescribeBaseSystemRulesResponse Client::describeBaseSystemRulesWithOptions(const DescribeBaseSystemRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDetectType()) {
    query["DetectType"] = request.detectType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.riskLevel();
  }

  if (!!request.hasRuleAction()) {
    query["RuleAction"] = request.ruleAction();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasRuleStatus()) {
    query["RuleStatus"] = request.ruleStatus();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBaseSystemRules"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBaseSystemRulesResponse>();
}

/**
 * @summary 查询基础防护系统规则集
 *
 * @param request DescribeBaseSystemRulesRequest
 * @return DescribeBaseSystemRulesResponse
 */
DescribeBaseSystemRulesResponse Client::describeBaseSystemRules(const DescribeBaseSystemRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBaseSystemRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a certificate, such as the certificate name, expiration time, issuance time, and associated domain name.
 *
 * @param request DescribeCertDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCertDetailResponse
 */
DescribeCertDetailResponse Client::describeCertDetailWithOptions(const DescribeCertDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.certIdentifier();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCertDetail"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCertDetailResponse>();
}

/**
 * @summary Queries the details of a certificate, such as the certificate name, expiration time, issuance time, and associated domain name.
 *
 * @param request DescribeCertDetailRequest
 * @return DescribeCertDetailResponse
 */
DescribeCertDetailResponse Client::describeCertDetail(const DescribeCertDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCertDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the certificates issued for your domain names that are added to Web Application Firewall (WAF).
 *
 * @param request DescribeCertsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCertsResponse
 */
DescribeCertsResponse Client::describeCertsWithOptions(const DescribeCertsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCerts"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCertsResponse>();
}

/**
 * @summary Queries the certificates issued for your domain names that are added to Web Application Firewall (WAF).
 *
 * @param request DescribeCertsRequest
 * @return DescribeCertsResponse
 */
DescribeCertsResponse Client::describeCerts(const DescribeCertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCertsWithOptions(request, runtime);
}

/**
 * @summary 查询WAF计价模块信息
 *
 * @param request DescribeChargeModuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChargeModuleResponse
 */
DescribeChargeModuleResponse Client::describeChargeModuleWithOptions(const DescribeChargeModuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChargeModule"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChargeModuleResponse>();
}

/**
 * @summary 查询WAF计价模块信息
 *
 * @param request DescribeChargeModuleRequest
 * @return DescribeChargeModuleResponse
 */
DescribeChargeModuleResponse Client::describeChargeModule(const DescribeChargeModuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChargeModuleWithOptions(request, runtime);
}

/**
 * @summary 查询WAF计价模块的计价结果
 *
 * @param request DescribeChargeResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChargeResultResponse
 */
DescribeChargeResultResponse Client::describeChargeResultWithOptions(const DescribeChargeResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChargeCycle()) {
    query["ChargeCycle"] = request.chargeCycle();
  }

  if (!!request.hasChargeModules()) {
    query["ChargeModules"] = request.chargeModules();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChargeResult"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChargeResultResponse>();
}

/**
 * @summary 查询WAF计价模块的计价结果
 *
 * @param request DescribeChargeResultRequest
 * @return DescribeChargeResultResponse
 */
DescribeChargeResultResponse Client::describeChargeResult(const DescribeChargeResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChargeResultWithOptions(request, runtime);
}

/**
 * @summary Queries a port of the cloud service that is added to Web Application Firewall (WAF). This operation is supported for only Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
 *
 * @param request DescribeCloudResourceAccessPortDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudResourceAccessPortDetailsResponse
 */
DescribeCloudResourceAccessPortDetailsResponse Client::describeCloudResourceAccessPortDetailsWithOptions(const DescribeCloudResourceAccessPortDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.protocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.resourceInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.resourceProduct();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudResourceAccessPortDetails"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudResourceAccessPortDetailsResponse>();
}

/**
 * @summary Queries a port of the cloud service that is added to Web Application Firewall (WAF). This operation is supported for only Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
 *
 * @param request DescribeCloudResourceAccessPortDetailsRequest
 * @return DescribeCloudResourceAccessPortDetailsResponse
 */
DescribeCloudResourceAccessPortDetailsResponse Client::describeCloudResourceAccessPortDetails(const DescribeCloudResourceAccessPortDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudResourceAccessPortDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries the ports of the cloud service that is added to Web Application Firewall (WAF). This operation is supported for only Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
 *
 * @param request DescribeCloudResourceAccessedPortsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudResourceAccessedPortsResponse
 */
DescribeCloudResourceAccessedPortsResponse Client::describeCloudResourceAccessedPortsWithOptions(const DescribeCloudResourceAccessedPortsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.resourceInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudResourceAccessedPorts"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudResourceAccessedPortsResponse>();
}

/**
 * @summary Queries the ports of the cloud service that is added to Web Application Firewall (WAF). This operation is supported for only Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
 *
 * @param request DescribeCloudResourceAccessedPortsRequest
 * @return DescribeCloudResourceAccessedPortsResponse
 */
DescribeCloudResourceAccessedPortsResponse Client::describeCloudResourceAccessedPorts(const DescribeCloudResourceAccessedPortsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudResourceAccessedPortsWithOptions(request, runtime);
}

/**
 * @summary Queries cloud service resources that are added to Web Application Firewall (WAF).
 *
 * @param request DescribeCloudResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudResourcesResponse
 */
DescribeCloudResourcesResponse Client::describeCloudResourcesWithOptions(const DescribeCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerUserId()) {
    query["OwnerUserId"] = request.ownerUserId();
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

  if (!!request.hasResourceDomain()) {
    query["ResourceDomain"] = request.resourceDomain();
  }

  if (!!request.hasResourceFunction()) {
    query["ResourceFunction"] = request.resourceFunction();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.resourceInstanceId();
  }

  if (!!request.hasResourceInstanceName()) {
    query["ResourceInstanceName"] = request.resourceInstanceName();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.resourceName();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.resourceProduct();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  if (!!request.hasResourceRouteName()) {
    query["ResourceRouteName"] = request.resourceRouteName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudResources"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudResourcesResponse>();
}

/**
 * @summary Queries cloud service resources that are added to Web Application Firewall (WAF).
 *
 * @param request DescribeCloudResourcesRequest
 * @return DescribeCloudResourcesResponse
 */
DescribeCloudResourcesResponse Client::describeCloudResources(const DescribeCloudResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the total number of domain names that are added to Web Application Firewall (WAF) in CNAME record mode and hybrid cloud reverse proxy mode.
 *
 * @param request DescribeCnameCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCnameCountResponse
 */
DescribeCnameCountResponse Client::describeCnameCountWithOptions(const DescribeCnameCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCnameCount"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCnameCountResponse>();
}

/**
 * @summary Queries the total number of domain names that are added to Web Application Firewall (WAF) in CNAME record mode and hybrid cloud reverse proxy mode.
 *
 * @param request DescribeCnameCountRequest
 * @return DescribeCnameCountResponse
 */
DescribeCnameCountResponse Client::describeCnameCount(const DescribeCnameCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCnameCountWithOptions(request, runtime);
}

/**
 * @summary 查询日志服务支持的所有字段
 *
 * @param tmpReq DescribeCommonLogFieldsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCommonLogFieldsResponse
 */
DescribeCommonLogFieldsResponse Client::describeCommonLogFieldsWithOptions(const DescribeCommonLogFieldsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeCommonLogFieldsShrinkRequest request = DescribeCommonLogFieldsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLogKeyList()) {
    request.setLogKeyListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.logKeyList(), "LogKeyList", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIsDefault()) {
    query["IsDefault"] = request.isDefault();
  }

  if (!!request.hasIsRequired()) {
    query["IsRequired"] = request.isRequired();
  }

  if (!!request.hasLogKeyListShrink()) {
    query["LogKeyList"] = request.logKeyListShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCommonLogFields"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCommonLogFieldsResponse>();
}

/**
 * @summary 查询日志服务支持的所有字段
 *
 * @param request DescribeCommonLogFieldsRequest
 * @return DescribeCommonLogFieldsResponse
 */
DescribeCommonLogFieldsResponse Client::describeCommonLogFields(const DescribeCommonLogFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCommonLogFieldsWithOptions(request, runtime);
}

/**
 * @summary 查询自定义正则规则编译结果
 *
 * @param request DescribeCustomBaseRuleCompileResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomBaseRuleCompileResultResponse
 */
DescribeCustomBaseRuleCompileResultResponse Client::describeCustomBaseRuleCompileResultWithOptions(const DescribeCustomBaseRuleCompileResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomBaseRuleCompileResult"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomBaseRuleCompileResultResponse>();
}

/**
 * @summary 查询自定义正则规则编译结果
 *
 * @param request DescribeCustomBaseRuleCompileResultRequest
 * @return DescribeCustomBaseRuleCompileResultResponse
 */
DescribeCustomBaseRuleCompileResultResponse Client::describeCustomBaseRuleCompileResult(const DescribeCustomBaseRuleCompileResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomBaseRuleCompileResultWithOptions(request, runtime);
}

/**
 * @summary Checks whether DDoS attacks occur on specific domain names protected by a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeDDoSStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDoSStatusResponse
 */
DescribeDDoSStatusResponse Client::describeDDoSStatusWithOptions(const DescribeDDoSStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDoSStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDDoSStatusResponse>();
}

/**
 * @summary Checks whether DDoS attacks occur on specific domain names protected by a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeDDoSStatusRequest
 * @return DescribeDDoSStatusResponse
 */
DescribeDDoSStatusResponse Client::describeDDoSStatus(const DescribeDDoSStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDoSStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the default SSL and Transport Layer Security (TLS) settings.
 *
 * @param request DescribeDefaultHttpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefaultHttpsResponse
 */
DescribeDefaultHttpsResponse Client::describeDefaultHttpsWithOptions(const DescribeDefaultHttpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefaultHttps"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefaultHttpsResponse>();
}

/**
 * @summary Queries the default SSL and Transport Layer Security (TLS) settings.
 *
 * @param request DescribeDefaultHttpsRequest
 * @return DescribeDefaultHttpsResponse
 */
DescribeDefaultHttpsResponse Client::describeDefaultHttps(const DescribeDefaultHttpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefaultHttpsWithOptions(request, runtime);
}

/**
 * @summary 分页查询可以被防护组绑定的防护对象列表
 *
 * @param request DescribeDefenseGroupValidResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseGroupValidResourcesResponse
 */
DescribeDefenseGroupValidResourcesResponse Client::describeDefenseGroupValidResourcesWithOptions(const DescribeDefenseGroupValidResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseGroupValidResources"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseGroupValidResourcesResponse>();
}

/**
 * @summary 分页查询可以被防护组绑定的防护对象列表
 *
 * @param request DescribeDefenseGroupValidResourcesRequest
 * @return DescribeDefenseGroupValidResourcesResponse
 */
DescribeDefenseGroupValidResourcesResponse Client::describeDefenseGroupValidResources(const DescribeDefenseGroupValidResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseGroupValidResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a protected object.
 *
 * @param request DescribeDefenseResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseResourceResponse
 */
DescribeDefenseResourceResponse Client::describeDefenseResourceWithOptions(const DescribeDefenseResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseResource"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseResourceResponse>();
}

/**
 * @summary Queries the information about a protected object.
 *
 * @param request DescribeDefenseResourceRequest
 * @return DescribeDefenseResourceResponse
 */
DescribeDefenseResourceResponse Client::describeDefenseResource(const DescribeDefenseResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a protected object group.
 *
 * @param request DescribeDefenseResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseResourceGroupResponse
 */
DescribeDefenseResourceGroupResponse Client::describeDefenseResourceGroupWithOptions(const DescribeDefenseResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseResourceGroup"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseResourceGroupResponse>();
}

/**
 * @summary Queries the information about a protected object group.
 *
 * @param request DescribeDefenseResourceGroupRequest
 * @return DescribeDefenseResourceGroupResponse
 */
DescribeDefenseResourceGroupResponse Client::describeDefenseResourceGroup(const DescribeDefenseResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the names of protected object groups.
 *
 * @param request DescribeDefenseResourceGroupNamesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseResourceGroupNamesResponse
 */
DescribeDefenseResourceGroupNamesResponse Client::describeDefenseResourceGroupNamesWithOptions(const DescribeDefenseResourceGroupNamesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupNameLike()) {
    query["GroupNameLike"] = request.groupNameLike();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseResourceGroupNames"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseResourceGroupNamesResponse>();
}

/**
 * @summary Queries the names of protected object groups.
 *
 * @param request DescribeDefenseResourceGroupNamesRequest
 * @return DescribeDefenseResourceGroupNamesResponse
 */
DescribeDefenseResourceGroupNamesResponse Client::describeDefenseResourceGroupNames(const DescribeDefenseResourceGroupNamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseResourceGroupNamesWithOptions(request, runtime);
}

/**
 * @summary Performs a pagination query to retrieve the information about protected object groups.
 *
 * @param request DescribeDefenseResourceGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseResourceGroupsResponse
 */
DescribeDefenseResourceGroupsResponse Client::describeDefenseResourceGroupsWithOptions(const DescribeDefenseResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupNameLike()) {
    query["GroupNameLike"] = request.groupNameLike();
  }

  if (!!request.hasGroupNames()) {
    query["GroupNames"] = request.groupNames();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseResourceGroups"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseResourceGroupsResponse>();
}

/**
 * @summary Performs a pagination query to retrieve the information about protected object groups.
 *
 * @param request DescribeDefenseResourceGroupsRequest
 * @return DescribeDefenseResourceGroupsResponse
 */
DescribeDefenseResourceGroupsResponse Client::describeDefenseResourceGroups(const DescribeDefenseResourceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseResourceGroupsWithOptions(request, runtime);
}

/**
 * @summary Performs a pagination query to retrieve the names of protected objects.
 *
 * @param request DescribeDefenseResourceNamesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseResourceNamesResponse
 */
DescribeDefenseResourceNamesResponse Client::describeDefenseResourceNamesWithOptions(const DescribeDefenseResourceNamesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseResourceNames"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseResourceNamesResponse>();
}

/**
 * @summary Performs a pagination query to retrieve the names of protected objects.
 *
 * @param request DescribeDefenseResourceNamesRequest
 * @return DescribeDefenseResourceNamesResponse
 */
DescribeDefenseResourceNamesResponse Client::describeDefenseResourceNames(const DescribeDefenseResourceNamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseResourceNamesWithOptions(request, runtime);
}

/**
 * @summary 查询防护对象和所属资源的关系
 *
 * @param request DescribeDefenseResourceOwnerUidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseResourceOwnerUidResponse
 */
DescribeDefenseResourceOwnerUidResponse Client::describeDefenseResourceOwnerUidWithOptions(const DescribeDefenseResourceOwnerUidRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResourceNames()) {
    query["ResourceNames"] = request.resourceNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseResourceOwnerUid"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseResourceOwnerUidResponse>();
}

/**
 * @summary 查询防护对象和所属资源的关系
 *
 * @param request DescribeDefenseResourceOwnerUidRequest
 * @return DescribeDefenseResourceOwnerUidResponse
 */
DescribeDefenseResourceOwnerUidResponse Client::describeDefenseResourceOwnerUid(const DescribeDefenseResourceOwnerUidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseResourceOwnerUidWithOptions(request, runtime);
}

/**
 * @summary Queries the protection templates that are associated with a protected object or protected object group.
 *
 * @param request DescribeDefenseResourceTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseResourceTemplatesResponse
 */
DescribeDefenseResourceTemplatesResponse Client::describeDefenseResourceTemplatesWithOptions(const DescribeDefenseResourceTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseResourceTemplates"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseResourceTemplatesResponse>();
}

/**
 * @summary Queries the protection templates that are associated with a protected object or protected object group.
 *
 * @param request DescribeDefenseResourceTemplatesRequest
 * @return DescribeDefenseResourceTemplatesResponse
 */
DescribeDefenseResourceTemplatesResponse Client::describeDefenseResourceTemplates(const DescribeDefenseResourceTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseResourceTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries protected objects by page.
 *
 * @param request DescribeDefenseResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseResourcesResponse
 */
DescribeDefenseResourcesResponse Client::describeDefenseResourcesWithOptions(const DescribeDefenseResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseResources"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseResourcesResponse>();
}

/**
 * @summary Queries protected objects by page.
 *
 * @param request DescribeDefenseResourcesRequest
 * @return DescribeDefenseResourcesResponse
 */
DescribeDefenseResourcesResponse Client::describeDefenseResources(const DescribeDefenseResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a protection rule.
 *
 * @param request DescribeDefenseRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseRuleResponse
 */
DescribeDefenseRuleResponse Client::describeDefenseRuleWithOptions(const DescribeDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseType()) {
    query["DefenseType"] = request.defenseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseRule"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseRuleResponse>();
}

/**
 * @summary Queries a protection rule.
 *
 * @param request DescribeDefenseRuleRequest
 * @return DescribeDefenseRuleResponse
 */
DescribeDefenseRuleResponse Client::describeDefenseRule(const DescribeDefenseRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseRuleWithOptions(request, runtime);
}

/**
 * @summary 查询防护规则的统计信息
 *
 * @param request DescribeDefenseRuleStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseRuleStatisticsResponse
 */
DescribeDefenseRuleStatisticsResponse Client::describeDefenseRuleStatisticsWithOptions(const DescribeDefenseRuleStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFourthKey()) {
    query["FourthKey"] = request.fourthKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPrimaryKey()) {
    query["PrimaryKey"] = request.primaryKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasSecondaryKey()) {
    query["SecondaryKey"] = request.secondaryKey();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasThirdKey()) {
    query["ThirdKey"] = request.thirdKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseRuleStatistics"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseRuleStatisticsResponse>();
}

/**
 * @summary 查询防护规则的统计信息
 *
 * @param request DescribeDefenseRuleStatisticsRequest
 * @return DescribeDefenseRuleStatisticsResponse
 */
DescribeDefenseRuleStatisticsResponse Client::describeDefenseRuleStatistics(const DescribeDefenseRuleStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseRuleStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries protection rules by page.
 *
 * @param request DescribeDefenseRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseRulesResponse
 */
DescribeDefenseRulesResponse Client::describeDefenseRulesWithOptions(const DescribeDefenseRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseType()) {
    query["DefenseType"] = request.defenseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseRules"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseRulesResponse>();
}

/**
 * @summary Queries protection rules by page.
 *
 * @param request DescribeDefenseRulesRequest
 * @return DescribeDefenseRulesResponse
 */
DescribeDefenseRulesResponse Client::describeDefenseRules(const DescribeDefenseRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseRulesWithOptions(request, runtime);
}

/**
 * @summary 查询用户防护场景的配置
 *
 * @param request DescribeDefenseSceneConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseSceneConfigResponse
 */
DescribeDefenseSceneConfigResponse Client::describeDefenseSceneConfigWithOptions(const DescribeDefenseSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigKey()) {
    query["ConfigKey"] = request.configKey();
  }

  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.defenseScene();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseSceneConfig"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseSceneConfigResponse>();
}

/**
 * @summary 查询用户防护场景的配置
 *
 * @param request DescribeDefenseSceneConfigRequest
 * @return DescribeDefenseSceneConfigResponse
 */
DescribeDefenseSceneConfigResponse Client::describeDefenseSceneConfig(const DescribeDefenseSceneConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseSceneConfigWithOptions(request, runtime);
}

/**
 * @summary Queries a protection rule template.
 *
 * @param request DescribeDefenseTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseTemplateResponse
 */
DescribeDefenseTemplateResponse Client::describeDefenseTemplateWithOptions(const DescribeDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseTemplate"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseTemplateResponse>();
}

/**
 * @summary Queries a protection rule template.
 *
 * @param request DescribeDefenseTemplateRequest
 * @return DescribeDefenseTemplateResponse
 */
DescribeDefenseTemplateResponse Client::describeDefenseTemplate(const DescribeDefenseTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the names of protected object groups for which a protection template can take effect.
 *
 * @param request DescribeDefenseTemplateValidGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseTemplateValidGroupsResponse
 */
DescribeDefenseTemplateValidGroupsResponse Client::describeDefenseTemplateValidGroupsWithOptions(const DescribeDefenseTemplateValidGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.defenseScene();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseTemplateValidGroups"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseTemplateValidGroupsResponse>();
}

/**
 * @summary Queries the names of protected object groups for which a protection template can take effect.
 *
 * @param request DescribeDefenseTemplateValidGroupsRequest
 * @return DescribeDefenseTemplateValidGroupsResponse
 */
DescribeDefenseTemplateValidGroupsResponse Client::describeDefenseTemplateValidGroups(const DescribeDefenseTemplateValidGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseTemplateValidGroupsWithOptions(request, runtime);
}

/**
 * @summary 分页查询可以被自定义模板绑定的防护对象列表
 *
 * @param request DescribeDefenseTemplateValidResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseTemplateValidResourcesResponse
 */
DescribeDefenseTemplateValidResourcesResponse Client::describeDefenseTemplateValidResourcesWithOptions(const DescribeDefenseTemplateValidResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.defenseScene();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseTemplateValidResources"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseTemplateValidResourcesResponse>();
}

/**
 * @summary 分页查询可以被自定义模板绑定的防护对象列表
 *
 * @param request DescribeDefenseTemplateValidResourcesRequest
 * @return DescribeDefenseTemplateValidResourcesResponse
 */
DescribeDefenseTemplateValidResourcesResponse Client::describeDefenseTemplateValidResources(const DescribeDefenseTemplateValidResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseTemplateValidResourcesWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query to retrieve protection templates.
 *
 * @param request DescribeDefenseTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseTemplatesResponse
 */
DescribeDefenseTemplatesResponse Client::describeDefenseTemplatesWithOptions(const DescribeDefenseTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.defenseScene();
  }

  if (!!request.hasDefenseSubScene()) {
    query["DefenseSubScene"] = request.defenseSubScene();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateIds()) {
    query["TemplateIds"] = request.templateIds();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseTemplates"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseTemplatesResponse>();
}

/**
 * @summary Performs a paging query to retrieve protection templates.
 *
 * @param request DescribeDefenseTemplatesRequest
 * @return DescribeDefenseTemplatesResponse
 */
DescribeDefenseTemplatesResponse Client::describeDefenseTemplates(const DescribeDefenseTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseTemplatesWithOptions(request, runtime);
}

/**
 * @summary Checks whether the Domain Name System (DNS) settings of a domain name are properly configured.
 *
 * @param request DescribeDomainDNSRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainDNSRecordResponse
 */
DescribeDomainDNSRecordResponse Client::describeDomainDNSRecordWithOptions(const DescribeDomainDNSRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainDNSRecord"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainDNSRecordResponse>();
}

/**
 * @summary Checks whether the Domain Name System (DNS) settings of a domain name are properly configured.
 *
 * @param request DescribeDomainDNSRecordRequest
 * @return DescribeDomainDNSRecordResponse
 */
DescribeDomainDNSRecordResponse Client::describeDomainDNSRecord(const DescribeDomainDNSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainDNSRecordWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a domain name that is added to Web Application Firewall (WAF).
 *
 * @param request DescribeDomainDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainDetailResponse
 */
DescribeDomainDetailResponse Client::describeDomainDetailWithOptions(const DescribeDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

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
    {"action" , "DescribeDomainDetail"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainDetailResponse>();
}

/**
 * @summary Queries the details of a domain name that is added to Web Application Firewall (WAF).
 *
 * @param request DescribeDomainDetailRequest
 * @return DescribeDomainDetailResponse
 */
DescribeDomainDetailResponse Client::describeDomainDetail(const DescribeDomainDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainDetailWithOptions(request, runtime);
}

/**
 * @summary 查询域名已使用的端口
 *
 * @param request DescribeDomainUsedPortsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainUsedPortsResponse
 */
DescribeDomainUsedPortsResponse Client::describeDomainUsedPortsWithOptions(const DescribeDomainUsedPortsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeDomainUsedPorts"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainUsedPortsResponse>();
}

/**
 * @summary 查询域名已使用的端口
 *
 * @param request DescribeDomainUsedPortsRequest
 * @return DescribeDomainUsedPortsResponse
 */
DescribeDomainUsedPortsResponse Client::describeDomainUsedPorts(const DescribeDomainUsedPortsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainUsedPortsWithOptions(request, runtime);
}

/**
 * @summary Queries the domain names that are added to Web Application Firewall (WAF).
 *
 * @param request DescribeDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainsResponse
 */
DescribeDomainsResponse Client::describeDomainsWithOptions(const DescribeDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackend()) {
    query["Backend"] = request.backend();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomains"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainsResponse>();
}

/**
 * @summary Queries the domain names that are added to Web Application Firewall (WAF).
 *
 * @param request DescribeDomainsRequest
 * @return DescribeDomainsResponse
 */
DescribeDomainsResponse Client::describeDomains(const DescribeDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic statistics of requests that are forwarded to Web Application Firewall (WAF).
 *
 * @param request DescribeFlowChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFlowChartResponse
 */
DescribeFlowChartResponse Client::describeFlowChartWithOptions(const DescribeFlowChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFlowChart"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFlowChartResponse>();
}

/**
 * @summary Queries the traffic statistics of requests that are forwarded to Web Application Firewall (WAF).
 *
 * @param request DescribeFlowChartRequest
 * @return DescribeFlowChartResponse
 */
DescribeFlowChartResponse Client::describeFlowChart(const DescribeFlowChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFlowChartWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 protected objects that receive requests.
 *
 * @param request DescribeFlowTopResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFlowTopResourceResponse
 */
DescribeFlowTopResourceResponse Client::describeFlowTopResourceWithOptions(const DescribeFlowTopResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFlowTopResource"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFlowTopResourceResponse>();
}

/**
 * @summary Queries the top 10 protected objects that receive requests.
 *
 * @param request DescribeFlowTopResourceRequest
 * @return DescribeFlowTopResourceResponse
 */
DescribeFlowTopResourceResponse Client::describeFlowTopResource(const DescribeFlowTopResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFlowTopResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 URLs that are used to initiate requests.
 *
 * @param request DescribeFlowTopUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFlowTopUrlResponse
 */
DescribeFlowTopUrlResponse Client::describeFlowTopUrlWithOptions(const DescribeFlowTopUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFlowTopUrl"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFlowTopUrlResponse>();
}

/**
 * @summary Queries the top 10 URLs that are used to initiate requests.
 *
 * @param request DescribeFlowTopUrlRequest
 * @return DescribeFlowTopUrlResponse
 */
DescribeFlowTopUrlResponse Client::describeFlowTopUrl(const DescribeFlowTopUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFlowTopUrlWithOptions(request, runtime);
}

/**
 * @summary Queries the asset statistics provided by basic detection in the API security module.
 *
 * @param request DescribeFreeUserAssetCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFreeUserAssetCountResponse
 */
DescribeFreeUserAssetCountResponse Client::describeFreeUserAssetCountWithOptions(const DescribeFreeUserAssetCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFreeUserAssetCount"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFreeUserAssetCountResponse>();
}

/**
 * @summary Queries the asset statistics provided by basic detection in the API security module.
 *
 * @param request DescribeFreeUserAssetCountRequest
 * @return DescribeFreeUserAssetCountResponse
 */
DescribeFreeUserAssetCountResponse Client::describeFreeUserAssetCount(const DescribeFreeUserAssetCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFreeUserAssetCountWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics of security events that are detected by using the basic detection feature of the API security module.
 *
 * @param request DescribeFreeUserEventCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFreeUserEventCountResponse
 */
DescribeFreeUserEventCountResponse Client::describeFreeUserEventCountWithOptions(const DescribeFreeUserEventCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFreeUserEventCount"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFreeUserEventCountResponse>();
}

/**
 * @summary Queries the statistics of security events that are detected by using the basic detection feature of the API security module.
 *
 * @param request DescribeFreeUserEventCountRequest
 * @return DescribeFreeUserEventCountResponse
 */
DescribeFreeUserEventCountResponse Client::describeFreeUserEventCount(const DescribeFreeUserEventCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFreeUserEventCountWithOptions(request, runtime);
}

/**
 * @summary Queries the types of security events on which basic detection is performed in the API security module.
 *
 * @param request DescribeFreeUserEventTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFreeUserEventTypesResponse
 */
DescribeFreeUserEventTypesResponse Client::describeFreeUserEventTypesWithOptions(const DescribeFreeUserEventTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFreeUserEventTypes"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFreeUserEventTypesResponse>();
}

/**
 * @summary Queries the types of security events on which basic detection is performed in the API security module.
 *
 * @param request DescribeFreeUserEventTypesRequest
 * @return DescribeFreeUserEventTypesResponse
 */
DescribeFreeUserEventTypesResponse Client::describeFreeUserEventTypes(const DescribeFreeUserEventTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFreeUserEventTypesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of security events on which basic detection is performed in the API security module.
 *
 * @param request DescribeFreeUserEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFreeUserEventsResponse
 */
DescribeFreeUserEventsResponse Client::describeFreeUserEventsWithOptions(const DescribeFreeUserEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFreeUserEvents"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFreeUserEventsResponse>();
}

/**
 * @summary Queries the list of security events on which basic detection is performed in the API security module.
 *
 * @param request DescribeFreeUserEventsRequest
 * @return DescribeFreeUserEventsResponse
 */
DescribeFreeUserEventsResponse Client::describeFreeUserEvents(const DescribeFreeUserEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFreeUserEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the system status of a node in a hybrid cloud cluster.
 *
 * @param request DescribeHybridCloudBasicMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudBasicMonitorResponse
 */
DescribeHybridCloudBasicMonitorResponse Client::describeHybridCloudBasicMonitorWithOptions(const DescribeHybridCloudBasicMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMid()) {
    query["Mid"] = request.mid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudBasicMonitor"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudBasicMonitorResponse>();
}

/**
 * @summary Queries the system status of a node in a hybrid cloud cluster.
 *
 * @param request DescribeHybridCloudBasicMonitorRequest
 * @return DescribeHybridCloudBasicMonitorResponse
 */
DescribeHybridCloudBasicMonitorResponse Client::describeHybridCloudBasicMonitor(const DescribeHybridCloudBasicMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudBasicMonitorWithOptions(request, runtime);
}

/**
 * @summary Obtains the rule information about a hybrid cloud cluster.
 *
 * @param request DescribeHybridCloudClusterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudClusterRuleResponse
 */
DescribeHybridCloudClusterRuleResponse Client::describeHybridCloudClusterRuleWithOptions(const DescribeHybridCloudClusterRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudClusterRule"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudClusterRuleResponse>();
}

/**
 * @summary Obtains the rule information about a hybrid cloud cluster.
 *
 * @param request DescribeHybridCloudClusterRuleRequest
 * @return DescribeHybridCloudClusterRuleResponse
 */
DescribeHybridCloudClusterRuleResponse Client::describeHybridCloudClusterRule(const DescribeHybridCloudClusterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudClusterRuleWithOptions(request, runtime);
}

/**
 * @summary 集群规则列表
 *
 * @param request DescribeHybridCloudClusterRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudClusterRulesResponse
 */
DescribeHybridCloudClusterRulesResponse Client::describeHybridCloudClusterRulesWithOptions(const DescribeHybridCloudClusterRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleContent()) {
    query["RuleContent"] = request.ruleContent();
  }

  if (!!request.hasRuleMatchType()) {
    query["RuleMatchType"] = request.ruleMatchType();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudClusterRules"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudClusterRulesResponse>();
}

/**
 * @summary 集群规则列表
 *
 * @param request DescribeHybridCloudClusterRulesRequest
 * @return DescribeHybridCloudClusterRulesResponse
 */
DescribeHybridCloudClusterRulesResponse Client::describeHybridCloudClusterRules(const DescribeHybridCloudClusterRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudClusterRulesWithOptions(request, runtime);
}

/**
 * @summary 集群机器列表
 *
 * @param request DescribeHybridCloudClusterServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudClusterServersResponse
 */
DescribeHybridCloudClusterServersResponse Client::describeHybridCloudClusterServersWithOptions(const DescribeHybridCloudClusterServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.groupType();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.hostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudClusterServers"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudClusterServersResponse>();
}

/**
 * @summary 集群机器列表
 *
 * @param request DescribeHybridCloudClusterServersRequest
 * @return DescribeHybridCloudClusterServersResponse
 */
DescribeHybridCloudClusterServersResponse Client::describeHybridCloudClusterServers(const DescribeHybridCloudClusterServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudClusterServersWithOptions(request, runtime);
}

/**
 * @summary Queries a list of hybrid cloud clusters.
 *
 * @param request DescribeHybridCloudClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudClustersResponse
 */
DescribeHybridCloudClustersResponse Client::describeHybridCloudClustersWithOptions(const DescribeHybridCloudClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudClusters"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudClustersResponse>();
}

/**
 * @summary Queries a list of hybrid cloud clusters.
 *
 * @param request DescribeHybridCloudClustersRequest
 * @return DescribeHybridCloudClustersResponse
 */
DescribeHybridCloudClustersResponse Client::describeHybridCloudClusters(const DescribeHybridCloudClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudClustersWithOptions(request, runtime);
}

/**
 * @summary Queries the hybrid cloud node groups that are added to Web Application Firewall (WAF).
 *
 * @param request DescribeHybridCloudGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudGroupsResponse
 */
DescribeHybridCloudGroupsResponse Client::describeHybridCloudGroupsWithOptions(const DescribeHybridCloudGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterProxyType()) {
    query["ClusterProxyType"] = request.clusterProxyType();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.groupType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudGroups"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudGroupsResponse>();
}

/**
 * @summary Queries the hybrid cloud node groups that are added to Web Application Firewall (WAF).
 *
 * @param request DescribeHybridCloudGroupsRequest
 * @return DescribeHybridCloudGroupsResponse
 */
DescribeHybridCloudGroupsResponse Client::describeHybridCloudGroups(const DescribeHybridCloudGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the status of applications running on a hybrid cloud cluster node.
 *
 * @param request DescribeHybridCloudProcessMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudProcessMonitorResponse
 */
DescribeHybridCloudProcessMonitorResponse Client::describeHybridCloudProcessMonitorWithOptions(const DescribeHybridCloudProcessMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMid()) {
    query["Mid"] = request.mid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudProcessMonitor"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudProcessMonitorResponse>();
}

/**
 * @summary Queries the status of applications running on a hybrid cloud cluster node.
 *
 * @param request DescribeHybridCloudProcessMonitorRequest
 * @return DescribeHybridCloudProcessMonitorResponse
 */
DescribeHybridCloudProcessMonitorResponse Client::describeHybridCloudProcessMonitor(const DescribeHybridCloudProcessMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudProcessMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries the number of protection nodes that can be added to a hybrid cloud cluster.
 *
 * @param request DescribeHybridCloudProtectableCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudProtectableCountResponse
 */
DescribeHybridCloudProtectableCountResponse Client::describeHybridCloudProtectableCountWithOptions(const DescribeHybridCloudProtectableCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudProtectableCount"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudProtectableCountResponse>();
}

/**
 * @summary Queries the number of protection nodes that can be added to a hybrid cloud cluster.
 *
 * @param request DescribeHybridCloudProtectableCountRequest
 * @return DescribeHybridCloudProtectableCountResponse
 */
DescribeHybridCloudProtectableCountResponse Client::describeHybridCloudProtectableCount(const DescribeHybridCloudProtectableCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudProtectableCountWithOptions(request, runtime);
}

/**
 * @summary 查询混合云域名详情
 *
 * @param request DescribeHybridCloudResourceDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudResourceDetailResponse
 */
DescribeHybridCloudResourceDetailResponse Client::describeHybridCloudResourceDetailWithOptions(const DescribeHybridCloudResourceDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackend()) {
    query["Backend"] = request.backend();
  }

  if (!!request.hasCnameEnabled()) {
    query["CnameEnabled"] = request.cnameEnabled();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudResourceDetail"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudResourceDetailResponse>();
}

/**
 * @summary 查询混合云域名详情
 *
 * @param request DescribeHybridCloudResourceDetailRequest
 * @return DescribeHybridCloudResourceDetailResponse
 */
DescribeHybridCloudResourceDetailResponse Client::describeHybridCloudResourceDetail(const DescribeHybridCloudResourceDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudResourceDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the domain names that are added to a Web Application Firewall (WAF) instance in hybrid cloud mode.
 *
 * @param request DescribeHybridCloudResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudResourcesResponse
 */
DescribeHybridCloudResourcesResponse Client::describeHybridCloudResourcesWithOptions(const DescribeHybridCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackend()) {
    query["Backend"] = request.backend();
  }

  if (!!request.hasCnameEnabled()) {
    query["CnameEnabled"] = request.cnameEnabled();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudResources"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudResourcesResponse>();
}

/**
 * @summary Queries the domain names that are added to a Web Application Firewall (WAF) instance in hybrid cloud mode.
 *
 * @param request DescribeHybridCloudResourcesRequest
 * @return DescribeHybridCloudResourcesResponse
 */
DescribeHybridCloudResourcesResponse Client::describeHybridCloudResources(const DescribeHybridCloudResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudResourcesWithOptions(request, runtime);
}

/**
 * @summary 获取SDK信息
 *
 * @param request DescribeHybridCloudSdkServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudSdkServersResponse
 */
DescribeHybridCloudSdkServersResponse Client::describeHybridCloudSdkServersWithOptions(const DescribeHybridCloudSdkServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.hostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudSdkServers"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudSdkServersResponse>();
}

/**
 * @summary 获取SDK信息
 *
 * @param request DescribeHybridCloudSdkServersRequest
 * @return DescribeHybridCloudSdkServersResponse
 */
DescribeHybridCloudSdkServersResponse Client::describeHybridCloudSdkServers(const DescribeHybridCloudSdkServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudSdkServersWithOptions(request, runtime);
}

/**
 * @summary Queries information about the regions that the hybrid cloud mode supports, such as the Internet service providers (ISPs), continents, and cities.
 *
 * @param request DescribeHybridCloudServerRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudServerRegionsResponse
 */
DescribeHybridCloudServerRegionsResponse Client::describeHybridCloudServerRegionsWithOptions(const DescribeHybridCloudServerRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.regionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionType()) {
    query["RegionType"] = request.regionType();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudServerRegions"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudServerRegionsResponse>();
}

/**
 * @summary Queries information about the regions that the hybrid cloud mode supports, such as the Internet service providers (ISPs), continents, and cities.
 *
 * @param request DescribeHybridCloudServerRegionsRequest
 * @return DescribeHybridCloudServerRegionsResponse
 */
DescribeHybridCloudServerRegionsResponse Client::describeHybridCloudServerRegions(const DescribeHybridCloudServerRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudServerRegionsWithOptions(request, runtime);
}

/**
 * @summary 查询接入区域
 *
 * @param request DescribeHybridCloudSupportRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudSupportRegionsResponse
 */
DescribeHybridCloudSupportRegionsResponse Client::describeHybridCloudSupportRegionsWithOptions(const DescribeHybridCloudSupportRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudSupportRegions"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudSupportRegionsResponse>();
}

/**
 * @summary 查询接入区域
 *
 * @param request DescribeHybridCloudSupportRegionsRequest
 * @return DescribeHybridCloudSupportRegionsResponse
 */
DescribeHybridCloudSupportRegionsResponse Client::describeHybridCloudSupportRegions(const DescribeHybridCloudSupportRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudSupportRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries servers that are not assigned to a hybrid cloud cluster.
 *
 * @param request DescribeHybridCloudUnassignedMachinesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudUnassignedMachinesResponse
 */
DescribeHybridCloudUnassignedMachinesResponse Client::describeHybridCloudUnassignedMachinesWithOptions(const DescribeHybridCloudUnassignedMachinesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.hostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudUnassignedMachines"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudUnassignedMachinesResponse>();
}

/**
 * @summary Queries servers that are not assigned to a hybrid cloud cluster.
 *
 * @param request DescribeHybridCloudUnassignedMachinesRequest
 * @return DescribeHybridCloudUnassignedMachinesResponse
 */
DescribeHybridCloudUnassignedMachinesResponse Client::describeHybridCloudUnassignedMachines(const DescribeHybridCloudUnassignedMachinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudUnassignedMachinesWithOptions(request, runtime);
}

/**
 * @summary Queries the ports that are not supported by the hybrid cloud mode.
 *
 * @param request DescribeHybridCloudUnsupportPortsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudUnsupportPortsResponse
 */
DescribeHybridCloudUnsupportPortsResponse Client::describeHybridCloudUnsupportPortsWithOptions(const DescribeHybridCloudUnsupportPortsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudUnsupportPorts"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudUnsupportPortsResponse>();
}

/**
 * @summary Queries the ports that are not supported by the hybrid cloud mode.
 *
 * @param request DescribeHybridCloudUnsupportPortsRequest
 * @return DescribeHybridCloudUnsupportPortsResponse
 */
DescribeHybridCloudUnsupportPortsResponse Client::describeHybridCloudUnsupportPorts(const DescribeHybridCloudUnsupportPortsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudUnsupportPortsWithOptions(request, runtime);
}

/**
 * @summary Queries the HTTP and HTTPS ports that you can use when you add a domain name to Web Application Firewall (WAF) in hybrid cloud mode.
 *
 * @param request DescribeHybridCloudUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudUserResponse
 */
DescribeHybridCloudUserResponse Client::describeHybridCloudUserWithOptions(const DescribeHybridCloudUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridCloudUser"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridCloudUserResponse>();
}

/**
 * @summary Queries the HTTP and HTTPS ports that you can use when you add a domain name to Web Application Firewall (WAF) in hybrid cloud mode.
 *
 * @param request DescribeHybridCloudUserRequest
 * @return DescribeHybridCloudUserResponse
 */
DescribeHybridCloudUserResponse Client::describeHybridCloudUser(const DescribeHybridCloudUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudUserWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a Web Application Firewall (WAF) instance within the current Alibaba Cloud account.
 *
 * @param request DescribeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstanceWithOptions(const DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstance"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceResponse>();
}

/**
 * @summary Queries the details of a Web Application Firewall (WAF) instance within the current Alibaba Cloud account.
 *
 * @param request DescribeInstanceRequest
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstance(const DescribeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceWithOptions(request, runtime);
}

/**
 * @summary 获取支持的海外IP区域封禁支持的国际及地域。
 *
 * @param request DescribeIpAbroadCountryInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIpAbroadCountryInfosResponse
 */
DescribeIpAbroadCountryInfosResponse Client::describeIpAbroadCountryInfosWithOptions(const DescribeIpAbroadCountryInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbroadRegion()) {
    query["AbroadRegion"] = request.abroadRegion();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.country();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIpAbroadCountryInfos"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIpAbroadCountryInfosResponse>();
}

/**
 * @summary 获取支持的海外IP区域封禁支持的国际及地域。
 *
 * @param request DescribeIpAbroadCountryInfosRequest
 * @return DescribeIpAbroadCountryInfosResponse
 */
DescribeIpAbroadCountryInfosResponse Client::describeIpAbroadCountryInfos(const DescribeIpAbroadCountryInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIpAbroadCountryInfosWithOptions(request, runtime);
}

/**
 * @summary Queries a hybrid cloud log delivery configuration.
 *
 * @param request DescribeLogDeliveryConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogDeliveryConfigResponse
 */
DescribeLogDeliveryConfigResponse Client::describeLogDeliveryConfigWithOptions(const DescribeLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryName()) {
    query["DeliveryName"] = request.deliveryName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLogDeliveryConfig"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogDeliveryConfigResponse>();
}

/**
 * @summary Queries a hybrid cloud log delivery configuration.
 *
 * @param request DescribeLogDeliveryConfigRequest
 * @return DescribeLogDeliveryConfigResponse
 */
DescribeLogDeliveryConfigResponse Client::describeLogDeliveryConfig(const DescribeLogDeliveryConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogDeliveryConfigWithOptions(request, runtime);
}

/**
 * @summary Queries all hybrid cloud log delivery configurations.
 *
 * @param request DescribeLogDeliveryConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogDeliveryConfigsResponse
 */
DescribeLogDeliveryConfigsResponse Client::describeLogDeliveryConfigsWithOptions(const DescribeLogDeliveryConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryNameLike()) {
    query["DeliveryNameLike"] = request.deliveryNameLike();
  }

  if (!!request.hasDeliveryType()) {
    query["DeliveryType"] = request.deliveryType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLogDeliveryConfigs"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogDeliveryConfigsResponse>();
}

/**
 * @summary Queries all hybrid cloud log delivery configurations.
 *
 * @param request DescribeLogDeliveryConfigsRequest
 * @return DescribeLogDeliveryConfigsResponse
 */
DescribeLogDeliveryConfigsResponse Client::describeLogDeliveryConfigs(const DescribeLogDeliveryConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogDeliveryConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries IP addresses in an IP address blacklist for major event protection by page.
 *
 * @param request DescribeMajorProtectionBlackIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMajorProtectionBlackIpsResponse
 */
DescribeMajorProtectionBlackIpsResponse Client::describeMajorProtectionBlackIpsWithOptions(const DescribeMajorProtectionBlackIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIpLike()) {
    query["IpLike"] = request.ipLike();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMajorProtectionBlackIps"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMajorProtectionBlackIpsResponse>();
}

/**
 * @summary Queries IP addresses in an IP address blacklist for major event protection by page.
 *
 * @param request DescribeMajorProtectionBlackIpsRequest
 * @return DescribeMajorProtectionBlackIpsResponse
 */
DescribeMajorProtectionBlackIpsResponse Client::describeMajorProtectionBlackIps(const DescribeMajorProtectionBlackIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMajorProtectionBlackIpsWithOptions(request, runtime);
}

/**
 * @summary Queries information about members.
 *
 * @param request DescribeMemberAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMemberAccountsResponse
 */
DescribeMemberAccountsResponse Client::describeMemberAccountsWithOptions(const DescribeMemberAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountStatus()) {
    query["AccountStatus"] = request.accountStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMemberAccounts"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMemberAccountsResponse>();
}

/**
 * @summary Queries information about members.
 *
 * @param request DescribeMemberAccountsRequest
 * @return DescribeMemberAccountsResponse
 */
DescribeMemberAccountsResponse Client::describeMemberAccounts(const DescribeMemberAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMemberAccountsWithOptions(request, runtime);
}

/**
 * @summary Retrieves time-series data for all network traffic, including both malicious and legitimate requests.
 *
 * @param tmpReq DescribeNetworkFlowTimeSeriesMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkFlowTimeSeriesMetricResponse
 */
DescribeNetworkFlowTimeSeriesMetricResponse Client::describeNetworkFlowTimeSeriesMetricWithOptions(const DescribeNetworkFlowTimeSeriesMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeNetworkFlowTimeSeriesMetricShrinkRequest request = DescribeNetworkFlowTimeSeriesMetricShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.filterShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.metric();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNetworkFlowTimeSeriesMetric"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNetworkFlowTimeSeriesMetricResponse>();
}

/**
 * @summary Retrieves time-series data for all network traffic, including both malicious and legitimate requests.
 *
 * @param request DescribeNetworkFlowTimeSeriesMetricRequest
 * @return DescribeNetworkFlowTimeSeriesMetricResponse
 */
DescribeNetworkFlowTimeSeriesMetricResponse Client::describeNetworkFlowTimeSeriesMetric(const DescribeNetworkFlowTimeSeriesMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkFlowTimeSeriesMetricWithOptions(request, runtime);
}

/**
 * @summary Retrieves top aggregated traffic statistics, sorted by various dimensions, including malicious and legitimate requests.
 *
 * @param tmpReq DescribeNetworkFlowTopNMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkFlowTopNMetricResponse
 */
DescribeNetworkFlowTopNMetricResponse Client::describeNetworkFlowTopNMetricWithOptions(const DescribeNetworkFlowTopNMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeNetworkFlowTopNMetricShrinkRequest request = DescribeNetworkFlowTopNMetricShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.filterShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.metric();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNetworkFlowTopNMetric"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNetworkFlowTopNMetricResponse>();
}

/**
 * @summary Retrieves top aggregated traffic statistics, sorted by various dimensions, including malicious and legitimate requests.
 *
 * @param request DescribeNetworkFlowTopNMetricRequest
 * @return DescribeNetworkFlowTopNMetricResponse
 */
DescribeNetworkFlowTopNMetricResponse Client::describeNetworkFlowTopNMetric(const DescribeNetworkFlowTopNMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkFlowTopNMetricWithOptions(request, runtime);
}

/**
 * @summary Queries the protection status of Web Application Firewall (WAF).
 *
 * @param request DescribePauseProtectionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePauseProtectionStatusResponse
 */
DescribePauseProtectionStatusResponse Client::describePauseProtectionStatusWithOptions(const DescribePauseProtectionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePauseProtectionStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePauseProtectionStatusResponse>();
}

/**
 * @summary Queries the protection status of Web Application Firewall (WAF).
 *
 * @param request DescribePauseProtectionStatusRequest
 * @return DescribePauseProtectionStatusResponse
 */
DescribePauseProtectionStatusResponse Client::describePauseProtectionStatus(const DescribePauseProtectionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePauseProtectionStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the queries per second (QPS) statistics of a WAF instance.
 *
 * @param request DescribePeakTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePeakTrendResponse
 */
DescribePeakTrendResponse Client::describePeakTrendWithOptions(const DescribePeakTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePeakTrend"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePeakTrendResponse>();
}

/**
 * @summary Queries the queries per second (QPS) statistics of a WAF instance.
 *
 * @param request DescribePeakTrendRequest
 * @return DescribePeakTrendResponse
 */
DescribePeakTrendResponse Client::describePeakTrend(const DescribePeakTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePeakTrendWithOptions(request, runtime);
}

/**
 * @summary 查询开启POC的功能信息
 *
 * @param request DescribePocFunctionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePocFunctionsResponse
 */
DescribePocFunctionsResponse Client::describePocFunctionsWithOptions(const DescribePocFunctionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePocFunctions"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePocFunctionsResponse>();
}

/**
 * @summary 查询开启POC的功能信息
 *
 * @param request DescribePocFunctionsRequest
 * @return DescribePocFunctionsResponse
 */
DescribePocFunctionsResponse Client::describePocFunctions(const DescribePocFunctionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePocFunctionsWithOptions(request, runtime);
}

/**
 * @summary Queries the cloud service instances to be added to Web Application Firewall (WAF) in transparent proxy mode.
 *
 * @param request DescribeProductInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductInstancesResponse
 */
DescribeProductInstancesResponse Client::describeProductInstancesWithOptions(const DescribeProductInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerUserId()) {
    query["OwnerUserId"] = request.ownerUserId();
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

  if (!!request.hasResourceInstanceAccessStatus()) {
    query["ResourceInstanceAccessStatus"] = request.resourceInstanceAccessStatus();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.resourceInstanceId();
  }

  if (!!request.hasResourceInstanceIp()) {
    query["ResourceInstanceIp"] = request.resourceInstanceIp();
  }

  if (!!request.hasResourceInstanceName()) {
    query["ResourceInstanceName"] = request.resourceInstanceName();
  }

  if (!!request.hasResourceIp()) {
    query["ResourceIp"] = request.resourceIp();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.resourceName();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.resourceProduct();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProductInstances"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProductInstancesResponse>();
}

/**
 * @summary Queries the cloud service instances to be added to Web Application Firewall (WAF) in transparent proxy mode.
 *
 * @param request DescribeProductInstancesRequest
 * @return DescribeProductInstancesResponse
 */
DescribeProductInstancesResponse Client::describeProductInstances(const DescribeProductInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProductInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of domain names that are added to Web Application Firewall (WAF) and penalized for failing to obtain an Internet Content Provider (ICP) filing.
 *
 * @param request DescribePunishedDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePunishedDomainsResponse
 */
DescribePunishedDomainsResponse Client::describePunishedDomainsWithOptions(const DescribePunishedDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.domains();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPunishType()) {
    query["PunishType"] = request.punishType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePunishedDomains"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePunishedDomainsResponse>();
}

/**
 * @summary Queries a list of domain names that are added to Web Application Firewall (WAF) and penalized for failing to obtain an Internet Content Provider (ICP) filing.
 *
 * @param request DescribePunishedDomainsRequest
 * @return DescribePunishedDomainsResponse
 */
DescribePunishedDomainsResponse Client::describePunishedDomains(const DescribePunishedDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePunishedDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the certificates that are used in cloud service instances. The certificates returned include the certificates within the delegated administrator account and the certificates within members to which specific instances belong. For example, the delegated administrator account has certificate 1, instance lb-xx-1 belongs to member B, and member B has certificate 2. If you specify instance lb-xx-1 in the request, certificate 1 and certificate 2 are returned.
 *
 * @param request DescribeResourceInstanceCertsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceInstanceCertsResponse
 */
DescribeResourceInstanceCertsResponse Client::describeResourceInstanceCertsWithOptions(const DescribeResourceInstanceCertsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.resourceInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceInstanceCerts"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceInstanceCertsResponse>();
}

/**
 * @summary Queries the certificates that are used in cloud service instances. The certificates returned include the certificates within the delegated administrator account and the certificates within members to which specific instances belong. For example, the delegated administrator account has certificate 1, instance lb-xx-1 belongs to member B, and member B has certificate 2. If you specify instance lb-xx-1 in the request, certificate 1 and certificate 2 are returned.
 *
 * @param request DescribeResourceInstanceCertsRequest
 * @return DescribeResourceInstanceCertsResponse
 */
DescribeResourceInstanceCertsResponse Client::describeResourceInstanceCerts(const DescribeResourceInstanceCertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceInstanceCertsWithOptions(request, runtime);
}

/**
 * @summary 查询防护对象日志外发状态
 *
 * @param request DescribeResourceLogDeliveryStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceLogDeliveryStatusResponse
 */
DescribeResourceLogDeliveryStatusResponse Client::describeResourceLogDeliveryStatusWithOptions(const DescribeResourceLogDeliveryStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.resources();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceLogDeliveryStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceLogDeliveryStatusResponse>();
}

/**
 * @summary 查询防护对象日志外发状态
 *
 * @param request DescribeResourceLogDeliveryStatusRequest
 * @return DescribeResourceLogDeliveryStatusResponse
 */
DescribeResourceLogDeliveryStatusResponse Client::describeResourceLogDeliveryStatus(const DescribeResourceLogDeliveryStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceLogDeliveryStatusWithOptions(request, runtime);
}

/**
 * @summary 查询防护对象日志字段配置
 *
 * @param request DescribeResourceLogFieldConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceLogFieldConfigResponse
 */
DescribeResourceLogFieldConfigResponse Client::describeResourceLogFieldConfigWithOptions(const DescribeResourceLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryType()) {
    query["DeliveryType"] = request.deliveryType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceLogFieldConfig"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceLogFieldConfigResponse>();
}

/**
 * @summary 查询防护对象日志字段配置
 *
 * @param request DescribeResourceLogFieldConfigRequest
 * @return DescribeResourceLogFieldConfigResponse
 */
DescribeResourceLogFieldConfigResponse Client::describeResourceLogFieldConfig(const DescribeResourceLogFieldConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceLogFieldConfigWithOptions(request, runtime);
}

/**
 * @summary Queries whether the log collection feature is enabled for a protected object.
 *
 * @param request DescribeResourceLogStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceLogStatusResponse
 */
DescribeResourceLogStatusResponse Client::describeResourceLogStatusWithOptions(const DescribeResourceLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.resources();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceLogStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceLogStatusResponse>();
}

/**
 * @summary Queries whether the log collection feature is enabled for a protected object.
 *
 * @param request DescribeResourceLogStatusRequest
 * @return DescribeResourceLogStatusResponse
 */
DescribeResourceLogStatusResponse Client::describeResourceLogStatus(const DescribeResourceLogStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceLogStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the ports of a cloud service instance that are added to Web Application Firewall (WAF).
 *
 * @param request DescribeResourcePortRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourcePortResponse
 */
DescribeResourcePortResponse Client::describeResourcePortWithOptions(const DescribeResourcePortRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.resourceInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourcePort"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourcePortResponse>();
}

/**
 * @summary Queries the ports of a cloud service instance that are added to Web Application Firewall (WAF).
 *
 * @param request DescribeResourcePortRequest
 * @return DescribeResourcePortResponse
 */
DescribeResourcePortResponse Client::describeResourcePort(const DescribeResourcePortRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourcePortWithOptions(request, runtime);
}

/**
 * @summary Queries the region IDs of the resources that are added to Web Application Firewall (WAF) by using the SDK integration mode. The resources refer to Application Load Balancer (ALB) and Microservices Engine (MSE) instances.
 *
 * @param request DescribeResourceRegionIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceRegionIdResponse
 */
DescribeResourceRegionIdResponse Client::describeResourceRegionIdWithOptions(const DescribeResourceRegionIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceRegionId"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceRegionIdResponse>();
}

/**
 * @summary Queries the region IDs of the resources that are added to Web Application Firewall (WAF) by using the SDK integration mode. The resources refer to Application Load Balancer (ALB) and Microservices Engine (MSE) instances.
 *
 * @param request DescribeResourceRegionIdRequest
 * @return DescribeResourceRegionIdResponse
 */
DescribeResourceRegionIdResponse Client::describeResourceRegionId(const DescribeResourceRegionIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceRegionIdWithOptions(request, runtime);
}

/**
 * @summary Queries the region IDs of the Classic Load Balancer (CLB) and Elastic Compute Service (ECS) instances that are added to Web Application Firewall (WAF) in cloud native mode.
 *
 * @param request DescribeResourceSupportRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceSupportRegionsResponse
 */
DescribeResourceSupportRegionsResponse Client::describeResourceSupportRegionsWithOptions(const DescribeResourceSupportRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.resourceProduct();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceSupportRegions"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceSupportRegionsResponse>();
}

/**
 * @summary Queries the region IDs of the Classic Load Balancer (CLB) and Elastic Compute Service (ECS) instances that are added to Web Application Firewall (WAF) in cloud native mode.
 *
 * @param request DescribeResourceSupportRegionsRequest
 * @return DescribeResourceSupportRegionsResponse
 */
DescribeResourceSupportRegionsResponse Client::describeResourceSupportRegions(const DescribeResourceSupportRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceSupportRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the trend of the number of error codes that are returned to clients or Web Application Firewall (WAF). The error codes include 302, 405, 444, 499, and 5XX.
 *
 * @param request DescribeResponseCodeTrendGraphRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResponseCodeTrendGraphResponse
 */
DescribeResponseCodeTrendGraphResponse Client::describeResponseCodeTrendGraphWithOptions(const DescribeResponseCodeTrendGraphRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResponseCodeTrendGraph"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResponseCodeTrendGraphResponse>();
}

/**
 * @summary Queries the trend of the number of error codes that are returned to clients or Web Application Firewall (WAF). The error codes include 302, 405, 444, 499, and 5XX.
 *
 * @param request DescribeResponseCodeTrendGraphRequest
 * @return DescribeResponseCodeTrendGraphResponse
 */
DescribeResponseCodeTrendGraphResponse Client::describeResponseCodeTrendGraph(const DescribeResponseCodeTrendGraphRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResponseCodeTrendGraphWithOptions(request, runtime);
}

/**
 * @summary 查询授权状态
 *
 * @param request DescribeRoleAuthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRoleAuthStatusResponse
 */
DescribeRoleAuthStatusResponse Client::describeRoleAuthStatusWithOptions(const DescribeRoleAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRoleAuthStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRoleAuthStatusResponse>();
}

/**
 * @summary 查询授权状态
 *
 * @param request DescribeRoleAuthStatusRequest
 * @return DescribeRoleAuthStatusResponse
 */
DescribeRoleAuthStatusResponse Client::describeRoleAuthStatus(const DescribeRoleAuthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRoleAuthStatusWithOptions(request, runtime);
}

/**
 * @summary Queries regular expression rule groups by page.
 *
 * @param request DescribeRuleGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleGroupsResponse
 */
DescribeRuleGroupsResponse Client::describeRuleGroupsWithOptions(const DescribeRuleGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasSearchType()) {
    query["SearchType"] = request.searchType();
  }

  if (!!request.hasSearchValue()) {
    query["SearchValue"] = request.searchValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleGroups"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleGroupsResponse>();
}

/**
 * @summary Queries regular expression rule groups by page.
 *
 * @param request DescribeRuleGroupsRequest
 * @return DescribeRuleGroupsResponse
 */
DescribeRuleGroupsResponse Client::describeRuleGroups(const DescribeRuleGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 IP addresses from which attacks are initiated.
 *
 * @param request DescribeRuleHitsTopClientIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleHitsTopClientIpResponse
 */
DescribeRuleHitsTopClientIpResponse Client::describeRuleHitsTopClientIpWithOptions(const DescribeRuleHitsTopClientIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleHitsTopClientIp"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleHitsTopClientIpResponse>();
}

/**
 * @summary Queries the top 10 IP addresses from which attacks are initiated.
 *
 * @param request DescribeRuleHitsTopClientIpRequest
 * @return DescribeRuleHitsTopClientIpResponse
 */
DescribeRuleHitsTopClientIpResponse Client::describeRuleHitsTopClientIp(const DescribeRuleHitsTopClientIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleHitsTopClientIpWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 protected objects that trigger protection rules.
 *
 * @param request DescribeRuleHitsTopResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleHitsTopResourceResponse
 */
DescribeRuleHitsTopResourceResponse Client::describeRuleHitsTopResourceWithOptions(const DescribeRuleHitsTopResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleHitsTopResource"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleHitsTopResourceResponse>();
}

/**
 * @summary Queries the top 10 protected objects that trigger protection rules.
 *
 * @param request DescribeRuleHitsTopResourceRequest
 * @return DescribeRuleHitsTopResourceResponse
 */
DescribeRuleHitsTopResourceResponse Client::describeRuleHitsTopResource(const DescribeRuleHitsTopResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleHitsTopResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the IDs of the top 10 protection rules that are matched by requests.
 *
 * @param request DescribeRuleHitsTopRuleIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleHitsTopRuleIdResponse
 */
DescribeRuleHitsTopRuleIdResponse Client::describeRuleHitsTopRuleIdWithOptions(const DescribeRuleHitsTopRuleIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIsGroupResource()) {
    query["IsGroupResource"] = request.isGroupResource();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleHitsTopRuleId"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleHitsTopRuleIdResponse>();
}

/**
 * @summary Queries the IDs of the top 10 protection rules that are matched by requests.
 *
 * @param request DescribeRuleHitsTopRuleIdRequest
 * @return DescribeRuleHitsTopRuleIdResponse
 */
DescribeRuleHitsTopRuleIdResponse Client::describeRuleHitsTopRuleId(const DescribeRuleHitsTopRuleIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleHitsTopRuleIdWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 protection modules that are matched.
 *
 * @param request DescribeRuleHitsTopTuleTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleHitsTopTuleTypeResponse
 */
DescribeRuleHitsTopTuleTypeResponse Client::describeRuleHitsTopTuleTypeWithOptions(const DescribeRuleHitsTopTuleTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleHitsTopTuleType"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleHitsTopTuleTypeResponse>();
}

/**
 * @summary Queries the top 10 protection modules that are matched.
 *
 * @param request DescribeRuleHitsTopTuleTypeRequest
 * @return DescribeRuleHitsTopTuleTypeResponse
 */
DescribeRuleHitsTopTuleTypeResponse Client::describeRuleHitsTopTuleType(const DescribeRuleHitsTopTuleTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleHitsTopTuleTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 user agents that are used to initiate attacks.
 *
 * @param request DescribeRuleHitsTopUaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleHitsTopUaResponse
 */
DescribeRuleHitsTopUaResponse Client::describeRuleHitsTopUaWithOptions(const DescribeRuleHitsTopUaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleHitsTopUa"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleHitsTopUaResponse>();
}

/**
 * @summary Queries the top 10 user agents that are used to initiate attacks.
 *
 * @param request DescribeRuleHitsTopUaRequest
 * @return DescribeRuleHitsTopUaResponse
 */
DescribeRuleHitsTopUaResponse Client::describeRuleHitsTopUa(const DescribeRuleHitsTopUaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleHitsTopUaWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 URLs that trigger protection rules.
 *
 * @param request DescribeRuleHitsTopUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleHitsTopUrlResponse
 */
DescribeRuleHitsTopUrlResponse Client::describeRuleHitsTopUrlWithOptions(const DescribeRuleHitsTopUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleHitsTopUrl"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleHitsTopUrlResponse>();
}

/**
 * @summary Queries the top 10 URLs that trigger protection rules.
 *
 * @param request DescribeRuleHitsTopUrlRequest
 * @return DescribeRuleHitsTopUrlResponse
 */
DescribeRuleHitsTopUrlResponse Client::describeRuleHitsTopUrl(const DescribeRuleHitsTopUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleHitsTopUrlWithOptions(request, runtime);
}

/**
 * @summary Queries the logs of attack traffic. Each log records the details of a request that matches protection rules.
 *
 * @description Attack traffic refers to the traffic of requests that match protection rules and are identified as risky. The following types of requests are excluded:
 * *   Requests that match the protection rules of the whitelist module.
 * *   Requests that match the protection rules of the bot management module. The actions of the protection rules are set to Add Tag.
 * *   Requests that match protection rules with actions set to Dynamic Token-based Authentication, Slider CAPTCHA, Strict Slider CAPTCHA Verification, and JavaScript Validation, pass the verifications specified by the actions, and are allowed.
 *
 * @param tmpReq DescribeSecurityEventLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityEventLogsResponse
 */
DescribeSecurityEventLogsResponse Client::describeSecurityEventLogsWithOptions(const DescribeSecurityEventLogsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeSecurityEventLogsShrinkRequest request = DescribeSecurityEventLogsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.filterShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityEventLogs"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityEventLogsResponse>();
}

/**
 * @summary Queries the logs of attack traffic. Each log records the details of a request that matches protection rules.
 *
 * @description Attack traffic refers to the traffic of requests that match protection rules and are identified as risky. The following types of requests are excluded:
 * *   Requests that match the protection rules of the whitelist module.
 * *   Requests that match the protection rules of the bot management module. The actions of the protection rules are set to Add Tag.
 * *   Requests that match protection rules with actions set to Dynamic Token-based Authentication, Slider CAPTCHA, Strict Slider CAPTCHA Verification, and JavaScript Validation, pass the verifications specified by the actions, and are allowed.
 *
 * @param request DescribeSecurityEventLogsRequest
 * @return DescribeSecurityEventLogsResponse
 */
DescribeSecurityEventLogsResponse Client::describeSecurityEventLogs(const DescribeSecurityEventLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityEventLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the time series data of attack traffic. Attack requests refer to requests that match protection rules and are identified as risky.
 *
 * @description Attack traffic refers to the traffic of requests that match protection rules and are identified as risky. The following types of requests are excluded:
 * *   Requests that match the protection rules of the whitelist module.
 * *   Requests that match the protection rules of the bot management module. The actions of the protection rules are set to Add Tag.
 * *   Requests that match protection rules with actions set to Dynamic Token-based Authentication, Slider CAPTCHA, Strict Slider CAPTCHA Verification, and JavaScript Validation, pass the verifications specified by the actions, and are allowed.
 *
 * @param tmpReq DescribeSecurityEventTimeSeriesMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityEventTimeSeriesMetricResponse
 */
DescribeSecurityEventTimeSeriesMetricResponse Client::describeSecurityEventTimeSeriesMetricWithOptions(const DescribeSecurityEventTimeSeriesMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeSecurityEventTimeSeriesMetricShrinkRequest request = DescribeSecurityEventTimeSeriesMetricShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.filterShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.metric();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityEventTimeSeriesMetric"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityEventTimeSeriesMetricResponse>();
}

/**
 * @summary Queries the time series data of attack traffic. Attack requests refer to requests that match protection rules and are identified as risky.
 *
 * @description Attack traffic refers to the traffic of requests that match protection rules and are identified as risky. The following types of requests are excluded:
 * *   Requests that match the protection rules of the whitelist module.
 * *   Requests that match the protection rules of the bot management module. The actions of the protection rules are set to Add Tag.
 * *   Requests that match protection rules with actions set to Dynamic Token-based Authentication, Slider CAPTCHA, Strict Slider CAPTCHA Verification, and JavaScript Validation, pass the verifications specified by the actions, and are allowed.
 *
 * @param request DescribeSecurityEventTimeSeriesMetricRequest
 * @return DescribeSecurityEventTimeSeriesMetricResponse
 */
DescribeSecurityEventTimeSeriesMetricResponse Client::describeSecurityEventTimeSeriesMetric(const DescribeSecurityEventTimeSeriesMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityEventTimeSeriesMetricWithOptions(request, runtime);
}

/**
 * @summary Queries top N data entries of attack traffic. The system performs statistical aggregation on attack traffic from specific dimensions and returns top N data entries.
 *
 * @description Attack traffic refers to the traffic of requests that match protection rules and are identified as risky. The following types of requests are excluded:
 * *   Requests that match the protection rules of the whitelist module.
 * *   Requests that match the protection rules of the bot management module. The actions of the protection rules are set to Add Tag.
 * *   Requests that match protection rules with actions set to Dynamic Token-based Authentication, Slider CAPTCHA, Strict Slider CAPTCHA Verification, and JavaScript Validation, pass the verifications specified by the actions, and are allowed.
 *
 * @param tmpReq DescribeSecurityEventTopNMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityEventTopNMetricResponse
 */
DescribeSecurityEventTopNMetricResponse Client::describeSecurityEventTopNMetricWithOptions(const DescribeSecurityEventTopNMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeSecurityEventTopNMetricShrinkRequest request = DescribeSecurityEventTopNMetricShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.filterShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.metric();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityEventTopNMetric"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityEventTopNMetricResponse>();
}

/**
 * @summary Queries top N data entries of attack traffic. The system performs statistical aggregation on attack traffic from specific dimensions and returns top N data entries.
 *
 * @description Attack traffic refers to the traffic of requests that match protection rules and are identified as risky. The following types of requests are excluded:
 * *   Requests that match the protection rules of the whitelist module.
 * *   Requests that match the protection rules of the bot management module. The actions of the protection rules are set to Add Tag.
 * *   Requests that match protection rules with actions set to Dynamic Token-based Authentication, Slider CAPTCHA, Strict Slider CAPTCHA Verification, and JavaScript Validation, pass the verifications specified by the actions, and are allowed.
 *
 * @param request DescribeSecurityEventTopNMetricRequest
 * @return DescribeSecurityEventTopNMetricResponse
 */
DescribeSecurityEventTopNMetricResponse Client::describeSecurityEventTopNMetric(const DescribeSecurityEventTopNMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityEventTopNMetricWithOptions(request, runtime);
}

/**
 * @summary Queries the personal information-related APIs and domain names.
 *
 * @param request DescribeSensitiveApiStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveApiStatisticResponse
 */
DescribeSensitiveApiStatisticResponse Client::describeSensitiveApiStatisticWithOptions(const DescribeSensitiveApiStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMatchedHost()) {
    query["MatchedHost"] = request.matchedHost();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSensitiveApiStatistic"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSensitiveApiStatisticResponse>();
}

/**
 * @summary Queries the personal information-related APIs and domain names.
 *
 * @param request DescribeSensitiveApiStatisticRequest
 * @return DescribeSensitiveApiStatisticResponse
 */
DescribeSensitiveApiStatisticResponse Client::describeSensitiveApiStatistic(const DescribeSensitiveApiStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveApiStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance check results of API security.
 *
 * @param request DescribeSensitiveDetectionResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveDetectionResultResponse
 */
DescribeSensitiveDetectionResultResponse Client::describeSensitiveDetectionResultWithOptions(const DescribeSensitiveDetectionResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSensitiveDetectionResult"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSensitiveDetectionResultResponse>();
}

/**
 * @summary Queries the compliance check results of API security.
 *
 * @param request DescribeSensitiveDetectionResultRequest
 * @return DescribeSensitiveDetectionResultResponse
 */
DescribeSensitiveDetectionResultResponse Client::describeSensitiveDetectionResult(const DescribeSensitiveDetectionResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveDetectionResultWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic distribution of personal information records involved in cross-border data transfer.
 *
 * @param request DescribeSensitiveOutboundDistributionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveOutboundDistributionResponse
 */
DescribeSensitiveOutboundDistributionResponse Client::describeSensitiveOutboundDistributionWithOptions(const DescribeSensitiveOutboundDistributionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSensitiveOutboundDistribution"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSensitiveOutboundDistributionResponse>();
}

/**
 * @summary Queries the traffic distribution of personal information records involved in cross-border data transfer.
 *
 * @param request DescribeSensitiveOutboundDistributionRequest
 * @return DescribeSensitiveOutboundDistributionResponse
 */
DescribeSensitiveOutboundDistributionResponse Client::describeSensitiveOutboundDistribution(const DescribeSensitiveOutboundDistributionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveOutboundDistributionWithOptions(request, runtime);
}

/**
 * @summary Queries the data types of personal information involved in cross-border data transfer.
 *
 * @param request DescribeSensitiveOutboundStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveOutboundStatisticResponse
 */
DescribeSensitiveOutboundStatisticResponse Client::describeSensitiveOutboundStatisticWithOptions(const DescribeSensitiveOutboundStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDetectionResult()) {
    query["DetectionResult"] = request.detectionResult();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrderKey()) {
    query["OrderKey"] = request.orderKey();
  }

  if (!!request.hasOrderWay()) {
    query["OrderWay"] = request.orderWay();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasSensitiveCode()) {
    query["SensitiveCode"] = request.sensitiveCode();
  }

  if (!!request.hasSensitiveLevel()) {
    query["SensitiveLevel"] = request.sensitiveLevel();
  }

  if (!!request.hasSensitiveType()) {
    query["SensitiveType"] = request.sensitiveType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSensitiveOutboundStatistic"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSensitiveOutboundStatisticResponse>();
}

/**
 * @summary Queries the data types of personal information involved in cross-border data transfer.
 *
 * @param request DescribeSensitiveOutboundStatisticRequest
 * @return DescribeSensitiveOutboundStatisticResponse
 */
DescribeSensitiveOutboundStatisticResponse Client::describeSensitiveOutboundStatistic(const DescribeSensitiveOutboundStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveOutboundStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the trends of cross-border data transfer of personal information.
 *
 * @param request DescribeSensitiveOutboundTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveOutboundTrendResponse
 */
DescribeSensitiveOutboundTrendResponse Client::describeSensitiveOutboundTrendWithOptions(const DescribeSensitiveOutboundTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSensitiveOutboundTrend"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSensitiveOutboundTrendResponse>();
}

/**
 * @summary Queries the trends of cross-border data transfer of personal information.
 *
 * @param request DescribeSensitiveOutboundTrendRequest
 * @return DescribeSensitiveOutboundTrendResponse
 */
DescribeSensitiveOutboundTrendResponse Client::describeSensitiveOutboundTrend(const DescribeSensitiveOutboundTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveOutboundTrendWithOptions(request, runtime);
}

/**
 * @summary Queries the access logs of sensitive data.
 *
 * @param request DescribeSensitiveRequestLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveRequestLogResponse
 */
DescribeSensitiveRequestLogResponse Client::describeSensitiveRequestLogWithOptions(const DescribeSensitiveRequestLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.account();
  }

  if (!!request.hasApiFormat()) {
    query["ApiFormat"] = request.apiFormat();
  }

  if (!!request.hasClientIP()) {
    query["ClientIP"] = request.clientIP();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMatchedHost()) {
    query["MatchedHost"] = request.matchedHost();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasSensitiveCode()) {
    query["SensitiveCode"] = request.sensitiveCode();
  }

  if (!!request.hasSensitiveData()) {
    query["SensitiveData"] = request.sensitiveData();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSensitiveRequestLog"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSensitiveRequestLogResponse>();
}

/**
 * @summary Queries the access logs of sensitive data.
 *
 * @param request DescribeSensitiveRequestLogRequest
 * @return DescribeSensitiveRequestLogResponse
 */
DescribeSensitiveRequestLogResponse Client::describeSensitiveRequestLog(const DescribeSensitiveRequestLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveRequestLogWithOptions(request, runtime);
}

/**
 * @summary Queries the tracing results of sensitive data.
 *
 * @param request DescribeSensitiveRequestsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveRequestsResponse
 */
DescribeSensitiveRequestsResponse Client::describeSensitiveRequestsWithOptions(const DescribeSensitiveRequestsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasSensitiveCode()) {
    query["SensitiveCode"] = request.sensitiveCode();
  }

  if (!!request.hasSensitiveData()) {
    query["SensitiveData"] = request.sensitiveData();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSensitiveRequests"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSensitiveRequestsResponse>();
}

/**
 * @summary Queries the tracing results of sensitive data.
 *
 * @param request DescribeSensitiveRequestsRequest
 * @return DescribeSensitiveRequestsResponse
 */
DescribeSensitiveRequestsResponse Client::describeSensitiveRequests(const DescribeSensitiveRequestsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveRequestsWithOptions(request, runtime);
}

/**
 * @summary Queries the sensitive data statistics of the tracing and auditing feature.
 *
 * @param request DescribeSensitiveStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveStatisticResponse
 */
DescribeSensitiveStatisticResponse Client::describeSensitiveStatisticWithOptions(const DescribeSensitiveStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatisticType()) {
    query["StatisticType"] = request.statisticType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSensitiveStatistic"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSensitiveStatisticResponse>();
}

/**
 * @summary Queries the sensitive data statistics of the tracing and auditing feature.
 *
 * @param request DescribeSensitiveStatisticRequest
 * @return DescribeSensitiveStatisticResponse
 */
DescribeSensitiveStatisticResponse Client::describeSensitiveStatistic(const DescribeSensitiveStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries whether Web Application Firewall (WAF) is authorized to access Logstores.
 *
 * @param request DescribeSlsAuthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsAuthStatusResponse
 */
DescribeSlsAuthStatusResponse Client::describeSlsAuthStatusWithOptions(const DescribeSlsAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlsAuthStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlsAuthStatusResponse>();
}

/**
 * @summary Queries whether Web Application Firewall (WAF) is authorized to access Logstores.
 *
 * @param request DescribeSlsAuthStatusRequest
 * @return DescribeSlsAuthStatusResponse
 */
DescribeSlsAuthStatusResponse Client::describeSlsAuthStatus(const DescribeSlsAuthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsAuthStatusWithOptions(request, runtime);
}

/**
 * @summary Queries information about a Logstore, such as the total capacity, storage duration, and used capacity.
 *
 * @param request DescribeSlsLogStoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsLogStoreResponse
 */
DescribeSlsLogStoreResponse Client::describeSlsLogStoreWithOptions(const DescribeSlsLogStoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlsLogStore"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlsLogStoreResponse>();
}

/**
 * @summary Queries information about a Logstore, such as the total capacity, storage duration, and used capacity.
 *
 * @param request DescribeSlsLogStoreRequest
 * @return DescribeSlsLogStoreResponse
 */
DescribeSlsLogStoreResponse Client::describeSlsLogStore(const DescribeSlsLogStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsLogStoreWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a Simple Log Service Logstore.
 *
 * @param request DescribeSlsLogStoreStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsLogStoreStatusResponse
 */
DescribeSlsLogStoreStatusResponse Client::describeSlsLogStoreStatusWithOptions(const DescribeSlsLogStoreStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlsLogStoreStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlsLogStoreStatusResponse>();
}

/**
 * @summary Queries the status of a Simple Log Service Logstore.
 *
 * @param request DescribeSlsLogStoreStatusRequest
 * @return DescribeSlsLogStoreStatusResponse
 */
DescribeSlsLogStoreStatusResponse Client::describeSlsLogStoreStatus(const DescribeSlsLogStoreStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsLogStoreStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the number of protected resources for which a protection template takes effect.
 *
 * @param request DescribeTemplateResourceCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplateResourceCountResponse
 */
DescribeTemplateResourceCountResponse Client::describeTemplateResourceCountWithOptions(const DescribeTemplateResourceCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateIds()) {
    query["TemplateIds"] = request.templateIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTemplateResourceCount"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplateResourceCountResponse>();
}

/**
 * @summary Queries the number of protected resources for which a protection template takes effect.
 *
 * @param request DescribeTemplateResourceCountRequest
 * @return DescribeTemplateResourceCountResponse
 */
DescribeTemplateResourceCountResponse Client::describeTemplateResourceCount(const DescribeTemplateResourceCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplateResourceCountWithOptions(request, runtime);
}

/**
 * @summary Queries the resources that are associated to a protection rule template.
 *
 * @param request DescribeTemplateResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplateResourcesResponse
 */
DescribeTemplateResourcesResponse Client::describeTemplateResourcesWithOptions(const DescribeTemplateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetApi()) {
    query["AssetApi"] = request.assetApi();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTemplateResources"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplateResourcesResponse>();
}

/**
 * @summary Queries the resources that are associated to a protection rule template.
 *
 * @param request DescribeTemplateResourcesRequest
 * @return DescribeTemplateResourcesResponse
 */
DescribeTemplateResourcesResponse Client::describeTemplateResources(const DescribeTemplateResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplateResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the trends of API security risks.
 *
 * @param request DescribeUserAbnormalTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserAbnormalTrendResponse
 */
DescribeUserAbnormalTrendResponse Client::describeUserAbnormalTrendWithOptions(const DescribeUserAbnormalTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserAbnormalTrend"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserAbnormalTrendResponse>();
}

/**
 * @summary Queries the trends of API security risks.
 *
 * @param request DescribeUserAbnormalTrendRequest
 * @return DescribeUserAbnormalTrendResponse
 */
DescribeUserAbnormalTrendResponse Client::describeUserAbnormalTrend(const DescribeUserAbnormalTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserAbnormalTrendWithOptions(request, runtime);
}

/**
 * @summary Queries the types and statistics of risks in the API security module.
 *
 * @param request DescribeUserAbnormalTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserAbnormalTypeResponse
 */
DescribeUserAbnormalTypeResponse Client::describeUserAbnormalTypeWithOptions(const DescribeUserAbnormalTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUserStatusList()) {
    query["UserStatusList"] = request.userStatusList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserAbnormalType"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserAbnormalTypeResponse>();
}

/**
 * @summary Queries the types and statistics of risks in the API security module.
 *
 * @param request DescribeUserAbnormalTypeRequest
 * @return DescribeUserAbnormalTypeResponse
 */
DescribeUserAbnormalTypeResponse Client::describeUserAbnormalType(const DescribeUserAbnormalTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserAbnormalTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic statistics of an API.
 *
 * @param request DescribeUserApiRequestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserApiRequestResponse
 */
DescribeUserApiRequestResponse Client::describeUserApiRequestWithOptions(const DescribeUserApiRequestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiFormat()) {
    query["ApiFormat"] = request.apiFormat();
  }

  if (!!request.hasApiId()) {
    query["ApiId"] = request.apiId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserApiRequest"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserApiRequestResponse>();
}

/**
 * @summary Queries the traffic statistics of an API.
 *
 * @param request DescribeUserApiRequestRequest
 * @return DescribeUserApiRequestResponse
 */
DescribeUserApiRequestResponse Client::describeUserApiRequest(const DescribeUserApiRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserApiRequestWithOptions(request, runtime);
}

/**
 * @summary Queries the user asset statistics in the API security module.
 *
 * @param request DescribeUserAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserAssetResponse
 */
DescribeUserAssetResponse Client::describeUserAssetWithOptions(const DescribeUserAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDataType()) {
    query["DataType"] = request.dataType();
  }

  if (!!request.hasDays()) {
    query["Days"] = request.days();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserAsset"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserAssetResponse>();
}

/**
 * @summary Queries the user asset statistics in the API security module.
 *
 * @param request DescribeUserAssetRequest
 * @return DescribeUserAssetResponse
 */
DescribeUserAssetResponse Client::describeUserAsset(const DescribeUserAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserAssetWithOptions(request, runtime);
}

/**
 * @summary Queries the trends of attacks detected by the API security module.
 *
 * @param request DescribeUserEventTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserEventTrendResponse
 */
DescribeUserEventTrendResponse Client::describeUserEventTrendWithOptions(const DescribeUserEventTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEventScope()) {
    query["EventScope"] = request.eventScope();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserEventTrend"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserEventTrendResponse>();
}

/**
 * @summary Queries the trends of attacks detected by the API security module.
 *
 * @param request DescribeUserEventTrendRequest
 * @return DescribeUserEventTrendResponse
 */
DescribeUserEventTrendResponse Client::describeUserEventTrend(const DescribeUserEventTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserEventTrendWithOptions(request, runtime);
}

/**
 * @summary Queries the types and statistics of security events in the API security module.
 *
 * @param request DescribeUserEventTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserEventTypeResponse
 */
DescribeUserEventTypeResponse Client::describeUserEventTypeWithOptions(const DescribeUserEventTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventScope()) {
    query["EventScope"] = request.eventScope();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUserStatusList()) {
    query["UserStatusList"] = request.userStatusList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserEventType"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserEventTypeResponse>();
}

/**
 * @summary Queries the types and statistics of security events in the API security module.
 *
 * @param request DescribeUserEventTypeRequest
 * @return DescribeUserEventTypeResponse
 */
DescribeUserEventTypeResponse Client::describeUserEventType(const DescribeUserEventTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserEventTypeWithOptions(request, runtime);
}

/**
 * @summary 查询用户日志配置
 *
 * @param request DescribeUserLogFieldConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserLogFieldConfigResponse
 */
DescribeUserLogFieldConfigResponse Client::describeUserLogFieldConfigWithOptions(const DescribeUserLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryType()) {
    query["DeliveryType"] = request.deliveryType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserLogFieldConfig"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserLogFieldConfigResponse>();
}

/**
 * @summary 查询用户日志配置
 *
 * @param request DescribeUserLogFieldConfigRequest
 * @return DescribeUserLogFieldConfigResponse
 */
DescribeUserLogFieldConfigResponse Client::describeUserLogFieldConfig(const DescribeUserLogFieldConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserLogFieldConfigWithOptions(request, runtime);
}

/**
 * @summary Queries available regions for log storage.
 *
 * @param request DescribeUserSlsLogRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserSlsLogRegionsResponse
 */
DescribeUserSlsLogRegionsResponse Client::describeUserSlsLogRegionsWithOptions(const DescribeUserSlsLogRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserSlsLogRegions"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserSlsLogRegionsResponse>();
}

/**
 * @summary Queries available regions for log storage.
 *
 * @param request DescribeUserSlsLogRegionsRequest
 * @return DescribeUserSlsLogRegionsResponse
 */
DescribeUserSlsLogRegionsResponse Client::describeUserSlsLogRegions(const DescribeUserSlsLogRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserSlsLogRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the status, region ID, and status modification time of Web Application Firewall (WAF) logs.
 *
 * @param request DescribeUserWafLogStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserWafLogStatusResponse
 */
DescribeUserWafLogStatusResponse Client::describeUserWafLogStatusWithOptions(const DescribeUserWafLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserWafLogStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserWafLogStatusResponse>();
}

/**
 * @summary Queries the status, region ID, and status modification time of Web Application Firewall (WAF) logs.
 *
 * @param request DescribeUserWafLogStatusRequest
 * @return DescribeUserWafLogStatusResponse
 */
DescribeUserWafLogStatusResponse Client::describeUserWafLogStatus(const DescribeUserWafLogStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserWafLogStatusWithOptions(request, runtime);
}

/**
 * @summary 查询归属校验内容
 *
 * @param request DescribeVerifyContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyContentResponse
 */
DescribeVerifyContentResponse Client::describeVerifyContentWithOptions(const DescribeVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessOrigin()) {
    query["AccessOrigin"] = request.accessOrigin();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVerifyContent"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVerifyContentResponse>();
}

/**
 * @summary 查询归属校验内容
 *
 * @param request DescribeVerifyContentRequest
 * @return DescribeVerifyContentResponse
 */
DescribeVerifyContentResponse Client::describeVerifyContent(const DescribeVerifyContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyContentWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 IP addresses from which requests are sent.
 *
 * @param request DescribeVisitTopIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVisitTopIpResponse
 */
DescribeVisitTopIpResponse Client::describeVisitTopIpWithOptions(const DescribeVisitTopIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVisitTopIp"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVisitTopIpResponse>();
}

/**
 * @summary Queries the top 10 IP addresses from which requests are sent.
 *
 * @param request DescribeVisitTopIpRequest
 * @return DescribeVisitTopIpResponse
 */
DescribeVisitTopIpResponse Client::describeVisitTopIp(const DescribeVisitTopIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVisitTopIpWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 user agents that are used to initiate requests.
 *
 * @param request DescribeVisitUasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVisitUasResponse
 */
DescribeVisitUasResponse Client::describeVisitUasWithOptions(const DescribeVisitUasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVisitUas"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVisitUasResponse>();
}

/**
 * @summary Queries the top 10 user agents that are used to initiate requests.
 *
 * @param request DescribeVisitUasRequest
 * @return DescribeVisitUasResponse
 */
DescribeVisitUasResponse Client::describeVisitUas(const DescribeVisitUasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVisitUasWithOptions(request, runtime);
}

/**
 * @summary Queries the back-to-origin CIDR blocks of a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeWafSourceIpSegmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWafSourceIpSegmentResponse
 */
DescribeWafSourceIpSegmentResponse Client::describeWafSourceIpSegmentWithOptions(const DescribeWafSourceIpSegmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWafSourceIpSegment"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWafSourceIpSegmentResponse>();
}

/**
 * @summary Queries the back-to-origin CIDR blocks of a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeWafSourceIpSegmentRequest
 * @return DescribeWafSourceIpSegmentResponse
 */
DescribeWafSourceIpSegmentResponse Client::describeWafSourceIpSegment(const DescribeWafSourceIpSegmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWafSourceIpSegmentWithOptions(request, runtime);
}

/**
 * @summary 创建WAF服务关联角色
 *
 * @param request InitializeWafOperationRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitializeWafOperationRoleResponse
 */
InitializeWafOperationRoleResponse Client::initializeWafOperationRoleWithOptions(const InitializeWafOperationRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InitializeWafOperationRole"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitializeWafOperationRoleResponse>();
}

/**
 * @summary 创建WAF服务关联角色
 *
 * @param request InitializeWafOperationRoleRequest
 * @return InitializeWafOperationRoleResponse
 */
InitializeWafOperationRoleResponse Client::initializeWafOperationRole(const InitializeWafOperationRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initializeWafOperationRoleWithOptions(request, runtime);
}

/**
 * @summary Queries tag keys.
 *
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagKeys"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagKeysResponse>();
}

/**
 * @summary Queries tag keys.
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to a resource.
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
    {"version" , "2021-10-01"},
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
 * @summary Queries the tags that are added to a resource.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the tag values of a tag key.
 *
 * @param request ListTagValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValuesWithOptions(const ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagValues"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagValuesResponse>();
}

/**
 * @summary Queries the tag values of a tag key.
 *
 * @param request ListTagValuesRequest
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValues(const ListTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagValuesWithOptions(request, runtime);
}

/**
 * @summary Modifies the status of multiple risks detected by the API security module at a time.
 *
 * @param request ModifyApisecAbnormalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApisecAbnormalsResponse
 */
ModifyApisecAbnormalsResponse Client::modifyApisecAbnormalsWithOptions(const ModifyApisecAbnormalsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbnormalIds()) {
    query["AbnormalIds"] = request.abnormalIds();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.note();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasUserStatus()) {
    query["UserStatus"] = request.userStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApisecAbnormals"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApisecAbnormalsResponse>();
}

/**
 * @summary Modifies the status of multiple risks detected by the API security module at a time.
 *
 * @param request ModifyApisecAbnormalsRequest
 * @return ModifyApisecAbnormalsResponse
 */
ModifyApisecAbnormalsResponse Client::modifyApisecAbnormals(const ModifyApisecAbnormalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApisecAbnormalsWithOptions(request, runtime);
}

/**
 * @summary Modifies the annotations of APIs in the API security module.
 *
 * @param request ModifyApisecApiResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApisecApiResourceResponse
 */
ModifyApisecApiResourceResponse Client::modifyApisecApiResourceWithOptions(const ModifyApisecApiResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.apiId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasFollow()) {
    query["Follow"] = request.follow();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.note();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApisecApiResource"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApisecApiResourceResponse>();
}

/**
 * @summary Modifies the annotations of APIs in the API security module.
 *
 * @param request ModifyApisecApiResourceRequest
 * @return ModifyApisecApiResourceResponse
 */
ModifyApisecApiResourceResponse Client::modifyApisecApiResource(const ModifyApisecApiResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApisecApiResourceWithOptions(request, runtime);
}

/**
 * @summary Modifies the status of multiple security events detected by the API security module at a time.
 *
 * @param request ModifyApisecEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApisecEventsResponse
 */
ModifyApisecEventsResponse Client::modifyApisecEventsWithOptions(const ModifyApisecEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEventIds()) {
    query["EventIds"] = request.eventIds();
  }

  if (!!request.hasEventScope()) {
    query["EventScope"] = request.eventScope();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.note();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasUserStatus()) {
    query["UserStatus"] = request.userStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApisecEvents"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApisecEventsResponse>();
}

/**
 * @summary Modifies the status of multiple security events detected by the API security module at a time.
 *
 * @param request ModifyApisecEventsRequest
 * @return ModifyApisecEventsResponse
 */
ModifyApisecEventsResponse Client::modifyApisecEvents(const ModifyApisecEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApisecEventsWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of API security log subscription.
 *
 * @param request ModifyApisecLogDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApisecLogDeliveryResponse
 */
ModifyApisecLogDeliveryResponse Client::modifyApisecLogDeliveryWithOptions(const ModifyApisecLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssertKey()) {
    query["AssertKey"] = request.assertKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLogRegionId()) {
    query["LogRegionId"] = request.logRegionId();
  }

  if (!!request.hasLogStoreName()) {
    query["LogStoreName"] = request.logStoreName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApisecLogDelivery"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApisecLogDeliveryResponse>();
}

/**
 * @summary Modifies the configurations of API security log subscription.
 *
 * @param request ModifyApisecLogDeliveryRequest
 * @return ModifyApisecLogDeliveryResponse
 */
ModifyApisecLogDeliveryResponse Client::modifyApisecLogDelivery(const ModifyApisecLogDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApisecLogDeliveryWithOptions(request, runtime);
}

/**
 * @summary Modifies the status of API security log subscription.
 *
 * @param request ModifyApisecLogDeliveryStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApisecLogDeliveryStatusResponse
 */
ModifyApisecLogDeliveryStatusResponse Client::modifyApisecLogDeliveryStatusWithOptions(const ModifyApisecLogDeliveryStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssertKey()) {
    query["AssertKey"] = request.assertKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApisecLogDeliveryStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApisecLogDeliveryStatusResponse>();
}

/**
 * @summary Modifies the status of API security log subscription.
 *
 * @param request ModifyApisecLogDeliveryStatusRequest
 * @return ModifyApisecLogDeliveryStatusResponse
 */
ModifyApisecLogDeliveryStatusResponse Client::modifyApisecLogDeliveryStatus(const ModifyApisecLogDeliveryStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApisecLogDeliveryStatusWithOptions(request, runtime);
}

/**
 * @summary Changes the status of features in the API security module for protected objects or protected object groups.
 *
 * @param request ModifyApisecModuleStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApisecModuleStatusResponse
 */
ModifyApisecModuleStatusResponse Client::modifyApisecModuleStatusWithOptions(const ModifyApisecModuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReportStatus()) {
    query["ReportStatus"] = request.reportStatus();
  }

  if (!!request.hasResourceGroups()) {
    query["ResourceGroups"] = request.resourceGroups();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.resources();
  }

  if (!!request.hasTraceStatus()) {
    query["TraceStatus"] = request.traceStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApisecModuleStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApisecModuleStatusResponse>();
}

/**
 * @summary Changes the status of features in the API security module for protected objects or protected object groups.
 *
 * @param request ModifyApisecModuleStatusRequest
 * @return ModifyApisecModuleStatusResponse
 */
ModifyApisecModuleStatusResponse Client::modifyApisecModuleStatus(const ModifyApisecModuleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApisecModuleStatusWithOptions(request, runtime);
}

/**
 * @summary Changes the status of the API security module for protected objects or protected object groups.
 *
 * @param request ModifyApisecStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApisecStatusResponse
 */
ModifyApisecStatusResponse Client::modifyApisecStatusWithOptions(const ModifyApisecStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApisecStatus()) {
    query["ApisecStatus"] = request.apisecStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroups()) {
    query["ResourceGroups"] = request.resourceGroups();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.resources();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApisecStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApisecStatusResponse>();
}

/**
 * @summary Changes the status of the API security module for protected objects or protected object groups.
 *
 * @param request ModifyApisecStatusRequest
 * @return ModifyApisecStatusResponse
 */
ModifyApisecStatusResponse Client::modifyApisecStatus(const ModifyApisecStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApisecStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a service that is added to Web Application Firewall (WAF).
 *
 * @param tmpReq ModifyCloudResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCloudResourceResponse
 */
ModifyCloudResourceResponse Client::modifyCloudResourceWithOptions(const ModifyCloudResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyCloudResourceShrinkRequest request = ModifyCloudResourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListen()) {
    request.setListenShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.listen(), "Listen", "json"));
  }

  if (!!tmpReq.hasRedirect()) {
    request.setRedirectShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.redirect(), "Redirect", "json"));
  }

  json query = {};
  if (!!request.hasCloudResourceId()) {
    query["CloudResourceId"] = request.cloudResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasListenShrink()) {
    query["Listen"] = request.listenShrink();
  }

  if (!!request.hasRedirectShrink()) {
    query["Redirect"] = request.redirectShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCloudResource"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCloudResourceResponse>();
}

/**
 * @summary Modifies the configurations of a service that is added to Web Application Firewall (WAF).
 *
 * @param request ModifyCloudResourceRequest
 * @return ModifyCloudResourceResponse
 */
ModifyCloudResourceResponse Client::modifyCloudResource(const ModifyCloudResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCloudResourceWithOptions(request, runtime);
}

/**
 * @summary 修改云产品接入的证书
 *
 * @param request ModifyCloudResourceCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCloudResourceCertResponse
 */
ModifyCloudResourceCertResponse Client::modifyCloudResourceCertWithOptions(const ModifyCloudResourceCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertificates()) {
    query["Certificates"] = request.certificates();
  }

  if (!!request.hasCloudResourceId()) {
    query["CloudResourceId"] = request.cloudResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.resourceInstanceId();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.resourceProduct();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCloudResourceCert"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCloudResourceCertResponse>();
}

/**
 * @summary 修改云产品接入的证书
 *
 * @param request ModifyCloudResourceCertRequest
 * @return ModifyCloudResourceCertResponse
 */
ModifyCloudResourceCertResponse Client::modifyCloudResourceCert(const ModifyCloudResourceCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCloudResourceCertWithOptions(request, runtime);
}

/**
 * @summary Modifies the default Secure Sockets Layer (SSL) and Transport Layer Security (TLS) settings.
 *
 * @param request ModifyDefaultHttpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefaultHttpsResponse
 */
ModifyDefaultHttpsResponse Client::modifyDefaultHttpsWithOptions(const ModifyDefaultHttpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertId()) {
    query["CertId"] = request.certId();
  }

  if (!!request.hasCipherSuite()) {
    query["CipherSuite"] = request.cipherSuite();
  }

  if (!!request.hasCustomCiphers()) {
    query["CustomCiphers"] = request.customCiphers();
  }

  if (!!request.hasEnableTLSv3()) {
    query["EnableTLSv3"] = request.enableTLSv3();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTLSVersion()) {
    query["TLSVersion"] = request.TLSVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDefaultHttps"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDefaultHttpsResponse>();
}

/**
 * @summary Modifies the default Secure Sockets Layer (SSL) and Transport Layer Security (TLS) settings.
 *
 * @param request ModifyDefaultHttpsRequest
 * @return ModifyDefaultHttpsResponse
 */
ModifyDefaultHttpsResponse Client::modifyDefaultHttps(const ModifyDefaultHttpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefaultHttpsWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a protected object group.
 *
 * @param request ModifyDefenseResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefenseResourceGroupResponse
 */
ModifyDefenseResourceGroupResponse Client::modifyDefenseResourceGroupWithOptions(const ModifyDefenseResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddList()) {
    query["AddList"] = request.addList();
  }

  if (!!request.hasDeleteList()) {
    query["DeleteList"] = request.deleteList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDefenseResourceGroup"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDefenseResourceGroupResponse>();
}

/**
 * @summary Modifies the configurations of a protected object group.
 *
 * @param request ModifyDefenseResourceGroupRequest
 * @return ModifyDefenseResourceGroupResponse
 */
ModifyDefenseResourceGroupResponse Client::modifyDefenseResourceGroup(const ModifyDefenseResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefenseResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the cookie settings of a protected object and the method to identify the originating IP addresses of clients.
 *
 * @param request ModifyDefenseResourceXffRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefenseResourceXffResponse
 */
ModifyDefenseResourceXffResponse Client::modifyDefenseResourceXffWithOptions(const ModifyDefenseResourceXffRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcwCookieStatus()) {
    query["AcwCookieStatus"] = request.acwCookieStatus();
  }

  if (!!request.hasAcwSecureStatus()) {
    query["AcwSecureStatus"] = request.acwSecureStatus();
  }

  if (!!request.hasAcwV3SecureStatus()) {
    query["AcwV3SecureStatus"] = request.acwV3SecureStatus();
  }

  if (!!request.hasCustomHeaders()) {
    query["CustomHeaders"] = request.customHeaders();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResponseHeaders()) {
    query["ResponseHeaders"] = request.responseHeaders();
  }

  if (!!request.hasXffStatus()) {
    query["XffStatus"] = request.xffStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDefenseResourceXff"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDefenseResourceXffResponse>();
}

/**
 * @summary Modifies the cookie settings of a protected object and the method to identify the originating IP addresses of clients.
 *
 * @param request ModifyDefenseResourceXffRequest
 * @return ModifyDefenseResourceXffResponse
 */
ModifyDefenseResourceXffResponse Client::modifyDefenseResourceXff(const ModifyDefenseResourceXffRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefenseResourceXffWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a protection rule.
 *
 * @param request ModifyDefenseRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefenseRuleResponse
 */
ModifyDefenseRuleResponse Client::modifyDefenseRuleWithOptions(const ModifyDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.defenseScene();
  }

  if (!!request.hasDefenseType()) {
    query["DefenseType"] = request.defenseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  json body = {};
  if (!!request.hasRules()) {
    body["Rules"] = request.rules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyDefenseRule"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDefenseRuleResponse>();
}

/**
 * @summary Modifies the configurations of a protection rule.
 *
 * @param request ModifyDefenseRuleRequest
 * @return ModifyDefenseRuleResponse
 */
ModifyDefenseRuleResponse Client::modifyDefenseRule(const ModifyDefenseRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefenseRuleWithOptions(request, runtime);
}

/**
 * @summary Updates the cached page of a website that is protected based on a website tamper-proofing rule.
 *
 * @param request ModifyDefenseRuleCacheRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefenseRuleCacheResponse
 */
ModifyDefenseRuleCacheResponse Client::modifyDefenseRuleCacheWithOptions(const ModifyDefenseRuleCacheRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDefenseRuleCache"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDefenseRuleCacheResponse>();
}

/**
 * @summary Updates the cached page of a website that is protected based on a website tamper-proofing rule.
 *
 * @param request ModifyDefenseRuleCacheRequest
 * @return ModifyDefenseRuleCacheResponse
 */
ModifyDefenseRuleCacheResponse Client::modifyDefenseRuleCache(const ModifyDefenseRuleCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefenseRuleCacheWithOptions(request, runtime);
}

/**
 * @summary Changes the status of a protection rule.
 *
 * @param request ModifyDefenseRuleStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefenseRuleStatusResponse
 */
ModifyDefenseRuleStatusResponse Client::modifyDefenseRuleStatusWithOptions(const ModifyDefenseRuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseType()) {
    query["DefenseType"] = request.defenseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleStatus()) {
    query["RuleStatus"] = request.ruleStatus();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDefenseRuleStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDefenseRuleStatusResponse>();
}

/**
 * @summary Changes the status of a protection rule.
 *
 * @param request ModifyDefenseRuleStatusRequest
 * @return ModifyDefenseRuleStatusResponse
 */
ModifyDefenseRuleStatusResponse Client::modifyDefenseRuleStatus(const ModifyDefenseRuleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefenseRuleStatusWithOptions(request, runtime);
}

/**
 * @summary 修改用户防护场景的配置
 *
 * @param request ModifyDefenseSceneConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefenseSceneConfigResponse
 */
ModifyDefenseSceneConfigResponse Client::modifyDefenseSceneConfigWithOptions(const ModifyDefenseSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigKey()) {
    query["ConfigKey"] = request.configKey();
  }

  if (!!request.hasConfigValue()) {
    query["ConfigValue"] = request.configValue();
  }

  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.defenseScene();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDefenseSceneConfig"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDefenseSceneConfigResponse>();
}

/**
 * @summary 修改用户防护场景的配置
 *
 * @param request ModifyDefenseSceneConfigRequest
 * @return ModifyDefenseSceneConfigResponse
 */
ModifyDefenseSceneConfigResponse Client::modifyDefenseSceneConfig(const ModifyDefenseSceneConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefenseSceneConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a protection rule template.
 *
 * @param request ModifyDefenseTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefenseTemplateResponse
 */
ModifyDefenseTemplateResponse Client::modifyDefenseTemplateWithOptions(const ModifyDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDefenseTemplate"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDefenseTemplateResponse>();
}

/**
 * @summary Modifies the configurations of a protection rule template.
 *
 * @param request ModifyDefenseTemplateRequest
 * @return ModifyDefenseTemplateResponse
 */
ModifyDefenseTemplateResponse Client::modifyDefenseTemplate(const ModifyDefenseTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefenseTemplateWithOptions(request, runtime);
}

/**
 * @summary Changes the status of a protection rule template.
 *
 * @param request ModifyDefenseTemplateStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefenseTemplateStatusResponse
 */
ModifyDefenseTemplateStatusResponse Client::modifyDefenseTemplateStatusWithOptions(const ModifyDefenseTemplateStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateStatus()) {
    query["TemplateStatus"] = request.templateStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDefenseTemplateStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDefenseTemplateStatusResponse>();
}

/**
 * @summary Changes the status of a protection rule template.
 *
 * @param request ModifyDefenseTemplateStatusRequest
 * @return ModifyDefenseTemplateStatusResponse
 */
ModifyDefenseTemplateStatusResponse Client::modifyDefenseTemplateStatus(const ModifyDefenseTemplateStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefenseTemplateStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a domain name that is added to Web Application Firewall (WAF) in CNAME record mode.
 *
 * @param tmpReq ModifyDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDomainResponse
 */
ModifyDomainResponse Client::modifyDomainWithOptions(const ModifyDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyDomainShrinkRequest request = ModifyDomainShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListen()) {
    request.setListenShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.listen(), "Listen", "json"));
  }

  if (!!tmpReq.hasRedirect()) {
    request.setRedirectShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.redirect(), "Redirect", "json"));
  }

  json query = {};
  if (!!request.hasAccessType()) {
    query["AccessType"] = request.accessType();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasListenShrink()) {
    query["Listen"] = request.listenShrink();
  }

  if (!!request.hasRedirectShrink()) {
    query["Redirect"] = request.redirectShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDomain"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDomainResponse>();
}

/**
 * @summary Modifies the configurations of a domain name that is added to Web Application Firewall (WAF) in CNAME record mode.
 *
 * @param request ModifyDomainRequest
 * @return ModifyDomainResponse
 */
ModifyDomainResponse Client::modifyDomain(const ModifyDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDomainWithOptions(request, runtime);
}

/**
 * @summary 修改域名的证书
 *
 * @param request ModifyDomainCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDomainCertResponse
 */
ModifyDomainCertResponse Client::modifyDomainCertWithOptions(const ModifyDomainCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertId()) {
    query["CertId"] = request.certId();
  }

  if (!!request.hasCipherSuite()) {
    query["CipherSuite"] = request.cipherSuite();
  }

  if (!!request.hasCustomCiphers()) {
    query["CustomCiphers"] = request.customCiphers();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEnableTLSv3()) {
    query["EnableTLSv3"] = request.enableTLSv3();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTLSVersion()) {
    query["TLSVersion"] = request.TLSVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDomainCert"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDomainCertResponse>();
}

/**
 * @summary 修改域名的证书
 *
 * @param request ModifyDomainCertRequest
 * @return ModifyDomainCertResponse
 */
ModifyDomainCertResponse Client::modifyDomainCert(const ModifyDomainCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDomainCertWithOptions(request, runtime);
}

/**
 * @summary Re-adds a domain name that is penalized for failing to obtain an Internet Content Provider (ICP) filing to Web Application Firewall (WAF).
 *
 * @param request ModifyDomainPunishStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDomainPunishStatusResponse
 */
ModifyDomainPunishStatusResponse Client::modifyDomainPunishStatusWithOptions(const ModifyDomainPunishStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDomainPunishStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDomainPunishStatusResponse>();
}

/**
 * @summary Re-adds a domain name that is penalized for failing to obtain an Internet Content Provider (ICP) filing to Web Application Firewall (WAF).
 *
 * @param request ModifyDomainPunishStatusRequest
 * @return ModifyDomainPunishStatusResponse
 */
ModifyDomainPunishStatusResponse Client::modifyDomainPunishStatus(const ModifyDomainPunishStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDomainPunishStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies information about a hybrid cloud cluster.
 *
 * @param request ModifyHybridCloudClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridCloudClusterResponse
 */
ModifyHybridCloudClusterResponse Client::modifyHybridCloudClusterWithOptions(const ModifyHybridCloudClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessMode()) {
    query["AccessMode"] = request.accessMode();
  }

  if (!!request.hasAccessRegion()) {
    query["AccessRegion"] = request.accessRegion();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasHttpPorts()) {
    query["HttpPorts"] = request.httpPorts();
  }

  if (!!request.hasHttpsPorts()) {
    query["HttpsPorts"] = request.httpsPorts();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLogFieldsNotReturned()) {
    query["LogFieldsNotReturned"] = request.logFieldsNotReturned();
  }

  if (!!request.hasProtectionServerCount()) {
    query["ProtectionServerCount"] = request.protectionServerCount();
  }

  if (!!request.hasProxyStatus()) {
    query["ProxyStatus"] = request.proxyStatus();
  }

  if (!!request.hasProxyType()) {
    query["ProxyType"] = request.proxyType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleConfig()) {
    query["RuleConfig"] = request.ruleConfig();
  }

  if (!!request.hasRuleStatus()) {
    query["RuleStatus"] = request.ruleStatus();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHybridCloudCluster"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHybridCloudClusterResponse>();
}

/**
 * @summary Modifies information about a hybrid cloud cluster.
 *
 * @param request ModifyHybridCloudClusterRequest
 * @return ModifyHybridCloudClusterResponse
 */
ModifyHybridCloudClusterResponse Client::modifyHybridCloudCluster(const ModifyHybridCloudClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridCloudClusterWithOptions(request, runtime);
}

/**
 * @summary Enables or disables manual bypass for a hybrid cloud cluster whose type is set to SDK Integration Mode.
 *
 * @param request ModifyHybridCloudClusterBypassStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridCloudClusterBypassStatusResponse
 */
ModifyHybridCloudClusterBypassStatusResponse Client::modifyHybridCloudClusterBypassStatusWithOptions(const ModifyHybridCloudClusterBypassStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterResourceId()) {
    query["ClusterResourceId"] = request.clusterResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleStatus()) {
    query["RuleStatus"] = request.ruleStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHybridCloudClusterBypassStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHybridCloudClusterBypassStatusResponse>();
}

/**
 * @summary Enables or disables manual bypass for a hybrid cloud cluster whose type is set to SDK Integration Mode.
 *
 * @param request ModifyHybridCloudClusterBypassStatusRequest
 * @return ModifyHybridCloudClusterBypassStatusResponse
 */
ModifyHybridCloudClusterBypassStatusResponse Client::modifyHybridCloudClusterBypassStatus(const ModifyHybridCloudClusterBypassStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridCloudClusterBypassStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the rule of a hybrid cloud cluster.
 *
 * @param request ModifyHybridCloudClusterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridCloudClusterRuleResponse
 */
ModifyHybridCloudClusterRuleResponse Client::modifyHybridCloudClusterRuleWithOptions(const ModifyHybridCloudClusterRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterRuleResourceId()) {
    query["ClusterRuleResourceId"] = request.clusterRuleResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleConfig()) {
    query["RuleConfig"] = request.ruleConfig();
  }

  if (!!request.hasRuleStatus()) {
    query["RuleStatus"] = request.ruleStatus();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHybridCloudClusterRule"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHybridCloudClusterRuleResponse>();
}

/**
 * @summary Modifies the rule of a hybrid cloud cluster.
 *
 * @param request ModifyHybridCloudClusterRuleRequest
 * @return ModifyHybridCloudClusterRuleResponse
 */
ModifyHybridCloudClusterRuleResponse Client::modifyHybridCloudClusterRule(const ModifyHybridCloudClusterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridCloudClusterRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies a node group in a hybrid cloud cluster.
 *
 * @param request ModifyHybridCloudGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridCloudGroupResponse
 */
ModifyHybridCloudGroupResponse Client::modifyHybridCloudGroupWithOptions(const ModifyHybridCloudGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHybridCloudGroup"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHybridCloudGroupResponse>();
}

/**
 * @summary Modifies a node group in a hybrid cloud cluster.
 *
 * @param request ModifyHybridCloudGroupRequest
 * @return ModifyHybridCloudGroupResponse
 */
ModifyHybridCloudGroupResponse Client::modifyHybridCloudGroup(const ModifyHybridCloudGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridCloudGroupWithOptions(request, runtime);
}

/**
 * @summary Adds a node to a node group of a hybrid cloud cluster.
 *
 * @param request ModifyHybridCloudGroupExpansionServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridCloudGroupExpansionServerResponse
 */
ModifyHybridCloudGroupExpansionServerResponse Client::modifyHybridCloudGroupExpansionServerWithOptions(const ModifyHybridCloudGroupExpansionServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMids()) {
    query["Mids"] = request.mids();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHybridCloudGroupExpansionServer"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHybridCloudGroupExpansionServerResponse>();
}

/**
 * @summary Adds a node to a node group of a hybrid cloud cluster.
 *
 * @param request ModifyHybridCloudGroupExpansionServerRequest
 * @return ModifyHybridCloudGroupExpansionServerResponse
 */
ModifyHybridCloudGroupExpansionServerResponse Client::modifyHybridCloudGroupExpansionServer(const ModifyHybridCloudGroupExpansionServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridCloudGroupExpansionServerWithOptions(request, runtime);
}

/**
 * @summary Deletes a node from a node group of a hybrid cloud cluster.
 *
 * @param request ModifyHybridCloudGroupShrinkServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridCloudGroupShrinkServerResponse
 */
ModifyHybridCloudGroupShrinkServerResponse Client::modifyHybridCloudGroupShrinkServerWithOptions(const ModifyHybridCloudGroupShrinkServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMids()) {
    query["Mids"] = request.mids();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHybridCloudGroupShrinkServer"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHybridCloudGroupShrinkServerResponse>();
}

/**
 * @summary Deletes a node from a node group of a hybrid cloud cluster.
 *
 * @param request ModifyHybridCloudGroupShrinkServerRequest
 * @return ModifyHybridCloudGroupShrinkServerResponse
 */
ModifyHybridCloudGroupShrinkServerResponse Client::modifyHybridCloudGroupShrinkServer(const ModifyHybridCloudGroupShrinkServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridCloudGroupShrinkServerWithOptions(request, runtime);
}

/**
 * @summary Modifies the traffic redirection status of a hybrid cloud cluster by using an SDK.
 *
 * @param request ModifyHybridCloudSdkPullinStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridCloudSdkPullinStatusResponse
 */
ModifyHybridCloudSdkPullinStatusResponse Client::modifyHybridCloudSdkPullinStatusWithOptions(const ModifyHybridCloudSdkPullinStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMid()) {
    query["Mid"] = request.mid();
  }

  if (!!request.hasPullinStatus()) {
    query["PullinStatus"] = request.pullinStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHybridCloudSdkPullinStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHybridCloudSdkPullinStatusResponse>();
}

/**
 * @summary Modifies the traffic redirection status of a hybrid cloud cluster by using an SDK.
 *
 * @param request ModifyHybridCloudSdkPullinStatusRequest
 * @return ModifyHybridCloudSdkPullinStatusResponse
 */
ModifyHybridCloudSdkPullinStatusResponse Client::modifyHybridCloudSdkPullinStatus(const ModifyHybridCloudSdkPullinStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridCloudSdkPullinStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a hybrid cloud node.
 *
 * @param request ModifyHybridCloudServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridCloudServerResponse
 */
ModifyHybridCloudServerResponse Client::modifyHybridCloudServerWithOptions(const ModifyHybridCloudServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContinents()) {
    query["Continents"] = request.continents();
  }

  if (!!request.hasCustomName()) {
    query["CustomName"] = request.customName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMid()) {
    query["Mid"] = request.mid();
  }

  if (!!request.hasOperator()) {
    query["Operator"] = request._operator();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.regionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHybridCloudServer"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHybridCloudServerResponse>();
}

/**
 * @summary Modifies the information about a hybrid cloud node.
 *
 * @param request ModifyHybridCloudServerRequest
 * @return ModifyHybridCloudServerResponse
 */
ModifyHybridCloudServerResponse Client::modifyHybridCloudServer(const ModifyHybridCloudServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridCloudServerWithOptions(request, runtime);
}

/**
 * @summary Modifies a hybrid cloud log delivery configuration.
 *
 * @param request ModifyLogDeliveryConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLogDeliveryConfigResponse
 */
ModifyLogDeliveryConfigResponse Client::modifyLogDeliveryConfigWithOptions(const ModifyLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryDetail()) {
    query["DeliveryDetail"] = request.deliveryDetail();
  }

  if (!!request.hasDeliveryName()) {
    query["DeliveryName"] = request.deliveryName();
  }

  if (!!request.hasDeliveryType()) {
    query["DeliveryType"] = request.deliveryType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLogDeliveryConfig"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLogDeliveryConfigResponse>();
}

/**
 * @summary Modifies a hybrid cloud log delivery configuration.
 *
 * @param request ModifyLogDeliveryConfigRequest
 * @return ModifyLogDeliveryConfigResponse
 */
ModifyLogDeliveryConfigResponse Client::modifyLogDeliveryConfig(const ModifyLogDeliveryConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLogDeliveryConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies an IP address blacklist for major event protection.
 *
 * @param request ModifyMajorProtectionBlackIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMajorProtectionBlackIpResponse
 */
ModifyMajorProtectionBlackIpResponse Client::modifyMajorProtectionBlackIpWithOptions(const ModifyMajorProtectionBlackIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasExpiredTime()) {
    query["ExpiredTime"] = request.expiredTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIpList()) {
    query["IpList"] = request.ipList();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMajorProtectionBlackIp"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMajorProtectionBlackIpResponse>();
}

/**
 * @summary Modifies an IP address blacklist for major event protection.
 *
 * @param request ModifyMajorProtectionBlackIpRequest
 * @return ModifyMajorProtectionBlackIpResponse
 */
ModifyMajorProtectionBlackIpResponse Client::modifyMajorProtectionBlackIp(const ModifyMajorProtectionBlackIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMajorProtectionBlackIpWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about members that are added for multi-account management.
 *
 * @param request ModifyMemberAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMemberAccountResponse
 */
ModifyMemberAccountResponse Client::modifyMemberAccountWithOptions(const ModifyMemberAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMemberAccountId()) {
    query["MemberAccountId"] = request.memberAccountId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMemberAccount"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMemberAccountResponse>();
}

/**
 * @summary Modifies the information about members that are added for multi-account management.
 *
 * @param request ModifyMemberAccountRequest
 * @return ModifyMemberAccountResponse
 */
ModifyMemberAccountResponse Client::modifyMemberAccount(const ModifyMemberAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMemberAccountWithOptions(request, runtime);
}

/**
 * @summary Modifies the protection status of Web Application Firewall (WAF).
 *
 * @param request ModifyPauseProtectionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPauseProtectionStatusResponse
 */
ModifyPauseProtectionStatusResponse Client::modifyPauseProtectionStatusWithOptions(const ModifyPauseProtectionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPauseStatus()) {
    query["PauseStatus"] = request.pauseStatus();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPauseProtectionStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPauseProtectionStatusResponse>();
}

/**
 * @summary Modifies the protection status of Web Application Firewall (WAF).
 *
 * @param request ModifyPauseProtectionStatusRequest
 * @return ModifyPauseProtectionStatusResponse
 */
ModifyPauseProtectionStatusResponse Client::modifyPauseProtectionStatus(const ModifyPauseProtectionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPauseProtectionStatusWithOptions(request, runtime);
}

/**
 * @summary 修改防护对象日志外发状态
 *
 * @param request ModifyResourceLogDeliveryStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyResourceLogDeliveryStatusResponse
 */
ModifyResourceLogDeliveryStatusResponse Client::modifyResourceLogDeliveryStatusWithOptions(const ModifyResourceLogDeliveryStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryName()) {
    query["DeliveryName"] = request.deliveryName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyResourceLogDeliveryStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyResourceLogDeliveryStatusResponse>();
}

/**
 * @summary 修改防护对象日志外发状态
 *
 * @param request ModifyResourceLogDeliveryStatusRequest
 * @return ModifyResourceLogDeliveryStatusResponse
 */
ModifyResourceLogDeliveryStatusResponse Client::modifyResourceLogDeliveryStatus(const ModifyResourceLogDeliveryStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyResourceLogDeliveryStatusWithOptions(request, runtime);
}

/**
 * @summary 修改防护对象的日志字段配置
 *
 * @param request ModifyResourceLogFieldConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyResourceLogFieldConfigResponse
 */
ModifyResourceLogFieldConfigResponse Client::modifyResourceLogFieldConfigWithOptions(const ModifyResourceLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryType()) {
    query["DeliveryType"] = request.deliveryType();
  }

  if (!!request.hasExtendConfig()) {
    query["ExtendConfig"] = request.extendConfig();
  }

  if (!!request.hasFieldList()) {
    query["FieldList"] = request.fieldList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLogDeliveryStrategy()) {
    query["LogDeliveryStrategy"] = request.logDeliveryStrategy();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyResourceLogFieldConfig"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyResourceLogFieldConfigResponse>();
}

/**
 * @summary 修改防护对象的日志字段配置
 *
 * @param request ModifyResourceLogFieldConfigRequest
 * @return ModifyResourceLogFieldConfigResponse
 */
ModifyResourceLogFieldConfigResponse Client::modifyResourceLogFieldConfig(const ModifyResourceLogFieldConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyResourceLogFieldConfigWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the log collection feature for a protected object.
 *
 * @param request ModifyResourceLogStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyResourceLogStatusResponse
 */
ModifyResourceLogStatusResponse Client::modifyResourceLogStatusWithOptions(const ModifyResourceLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyResourceLogStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyResourceLogStatusResponse>();
}

/**
 * @summary Enables or disables the log collection feature for a protected object.
 *
 * @param request ModifyResourceLogStatusRequest
 * @return ModifyResourceLogStatusResponse
 */
ModifyResourceLogStatusResponse Client::modifyResourceLogStatus(const ModifyResourceLogStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyResourceLogStatusWithOptions(request, runtime);
}

/**
 * @summary Associates or disassociates a protected object or protected object group with or from a protection rule template.
 *
 * @param request ModifyTemplateResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTemplateResourcesResponse
 */
ModifyTemplateResourcesResponse Client::modifyTemplateResourcesWithOptions(const ModifyTemplateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBindAssets()) {
    query["BindAssets"] = request.bindAssets();
  }

  if (!!request.hasBindResourceGroups()) {
    query["BindResourceGroups"] = request.bindResourceGroups();
  }

  if (!!request.hasBindResources()) {
    query["BindResources"] = request.bindResources();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasUnbindAssets()) {
    query["UnbindAssets"] = request.unbindAssets();
  }

  if (!!request.hasUnbindResourceGroups()) {
    query["UnbindResourceGroups"] = request.unbindResourceGroups();
  }

  if (!!request.hasUnbindResources()) {
    query["UnbindResources"] = request.unbindResources();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTemplateResources"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTemplateResourcesResponse>();
}

/**
 * @summary Associates or disassociates a protected object or protected object group with or from a protection rule template.
 *
 * @param request ModifyTemplateResourcesRequest
 * @return ModifyTemplateResourcesResponse
 */
ModifyTemplateResourcesResponse Client::modifyTemplateResources(const ModifyTemplateResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTemplateResourcesWithOptions(request, runtime);
}

/**
 * @summary  修改用户日志服务的默认字段配置
 *
 * @param request ModifyUserLogFieldConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserLogFieldConfigResponse
 */
ModifyUserLogFieldConfigResponse Client::modifyUserLogFieldConfigWithOptions(const ModifyUserLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryType()) {
    query["DeliveryType"] = request.deliveryType();
  }

  if (!!request.hasExtendConfig()) {
    query["ExtendConfig"] = request.extendConfig();
  }

  if (!!request.hasFieldList()) {
    query["FieldList"] = request.fieldList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLogDeliveryStrategy()) {
    query["LogDeliveryStrategy"] = request.logDeliveryStrategy();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUserLogFieldConfig"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserLogFieldConfigResponse>();
}

/**
 * @summary  修改用户日志服务的默认字段配置
 *
 * @param request ModifyUserLogFieldConfigRequest
 * @return ModifyUserLogFieldConfigResponse
 */
ModifyUserLogFieldConfigResponse Client::modifyUserLogFieldConfig(const ModifyUserLogFieldConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserLogFieldConfigWithOptions(request, runtime);
}

/**
 * @summary 开通或关闭WAF日志服务
 *
 * @param request ModifyUserWafLogStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserWafLogStatusResponse
 */
ModifyUserWafLogStatusResponse Client::modifyUserWafLogStatusWithOptions(const ModifyUserWafLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLogRegionId()) {
    query["LogRegionId"] = request.logRegionId();
  }

  if (!!request.hasLogStatus()) {
    query["LogStatus"] = request.logStatus();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUserWafLogStatus"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserWafLogStatusResponse>();
}

/**
 * @summary 开通或关闭WAF日志服务
 *
 * @param request ModifyUserWafLogStatusRequest
 * @return ModifyUserWafLogStatusResponse
 */
ModifyUserWafLogStatusResponse Client::modifyUserWafLogStatus(const ModifyUserWafLogStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserWafLogStatusWithOptions(request, runtime);
}

/**
 * @summary 重新接入云产品
 *
 * @param request ReCreateCloudResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReCreateCloudResourceResponse
 */
ReCreateCloudResourceResponse Client::reCreateCloudResourceWithOptions(const ReCreateCloudResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudResourceId()) {
    query["CloudResourceId"] = request.cloudResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.resourceInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.resourceProduct();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReCreateCloudResource"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReCreateCloudResourceResponse>();
}

/**
 * @summary 重新接入云产品
 *
 * @param request ReCreateCloudResourceRequest
 * @return ReCreateCloudResourceResponse
 */
ReCreateCloudResourceResponse Client::reCreateCloudResource(const ReCreateCloudResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reCreateCloudResourceWithOptions(request, runtime);
}

/**
 * @summary Releases a Web Application Firewall (WAF) 3.0 instance.
 *
 * @param request ReleaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstanceWithOptions(const ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstance"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseInstanceResponse>();
}

/**
 * @summary Releases a Web Application Firewall (WAF) 3.0 instance.
 *
 * @param request ReleaseInstanceRequest
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstance(const ReleaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstanceWithOptions(request, runtime);
}

/**
 * @summary Synchronizes Elastic Compute Service (ECS), Classic Load Balancer (CLB), and Network Load Balancer (NLB) instances to Web Application Firewall (WAF).
 *
 * @description SyncProductInstance is an asynchronous operation. You can call the [DescribeProductInstances](https://help.aliyun.com/document_detail/2743168.html) operation to query the status of the task.
 *
 * @param request SyncProductInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncProductInstanceResponse
 */
SyncProductInstanceResponse Client::syncProductInstanceWithOptions(const SyncProductInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncProductInstance"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncProductInstanceResponse>();
}

/**
 * @summary Synchronizes Elastic Compute Service (ECS), Classic Load Balancer (CLB), and Network Load Balancer (NLB) instances to Web Application Firewall (WAF).
 *
 * @description SyncProductInstance is an asynchronous operation. You can call the [DescribeProductInstances](https://help.aliyun.com/document_detail/2743168.html) operation to query the status of the task.
 *
 * @param request SyncProductInstanceRequest
 * @return SyncProductInstanceResponse
 */
SyncProductInstanceResponse Client::syncProductInstance(const SyncProductInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncProductInstanceWithOptions(request, runtime);
}

/**
 * @summary Adds tags to resources.
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
    {"version" , "2021-10-01"},
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
 * @summary Adds tags to resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from resources and then deletes the tags.
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
    {"version" , "2021-10-01"},
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
 * @summary Removes tags from resources and then deletes the tags.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Verifies the ownership of a domain name.
 *
 * @param request VerifyDomainOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyDomainOwnerResponse
 */
VerifyDomainOwnerResponse Client::verifyDomainOwnerWithOptions(const VerifyDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.protocol();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.verifyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyDomainOwner"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyDomainOwnerResponse>();
}

/**
 * @summary Verifies the ownership of a domain name.
 *
 * @param request VerifyDomainOwnerRequest
 * @return VerifyDomainOwnerResponse
 */
VerifyDomainOwnerResponse Client::verifyDomainOwner(const VerifyDomainOwnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyDomainOwnerWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001