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
 * @summary Adds one or more IP addresses or CIDR blocks to an address book in a Web Application Firewall (WAF) instance. Address books can be referenced in protection rules for centralized IP address management.
 *
 * @param request AddAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAddressResponse
 */
AddAddressResponse Client::addAddressWithOptions(const AddAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressList()) {
    query["AddressList"] = request.getAddressList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAddress"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAddressResponse>();
}

/**
 * @summary Adds one or more IP addresses or CIDR blocks to an address book in a Web Application Firewall (WAF) instance. Address books can be referenced in protection rules for centralized IP address management.
 *
 * @param request AddAddressRequest
 * @return AddAddressResponse
 */
AddAddressResponse Client::addAddress(const AddAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAddressWithOptions(request, runtime);
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
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
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
 * @summary Clears all addresses from a Web Application Firewall (WAF) address book.
 *
 * @param request ClearAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearAddressResponse
 */
ClearAddressResponse Client::clearAddressWithOptions(const ClearAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClearAddress"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearAddressResponse>();
}

/**
 * @summary Clears all addresses from a Web Application Firewall (WAF) address book.
 *
 * @param request ClearAddressRequest
 * @return ClearAddressResponse
 */
ClearAddressResponse Client::clearAddress(const ClearAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clearAddressWithOptions(request, runtime);
}

/**
 * @summary Clears the IP blacklist for a critical event protection rule.
 *
 * @param request ClearMajorProtectionBlackIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearMajorProtectionBlackIpResponse
 */
ClearMajorProtectionBlackIpResponse Client::clearMajorProtectionBlackIpWithOptions(const ClearMajorProtectionBlackIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Clears the IP blacklist for a critical event protection rule.
 *
 * @param request ClearMajorProtectionBlackIpRequest
 * @return ClearMajorProtectionBlackIpResponse
 */
ClearMajorProtectionBlackIpResponse Client::clearMajorProtectionBlackIp(const ClearMajorProtectionBlackIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clearMajorProtectionBlackIpWithOptions(request, runtime);
}

/**
 * @summary Copies a protection template.
 *
 * @param request CopyDefenseTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyDefenseTemplateResponse
 */
CopyDefenseTemplateResponse Client::copyDefenseTemplateWithOptions(const CopyDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Copies a protection template.
 *
 * @param request CopyDefenseTemplateRequest
 * @return CopyDefenseTemplateResponse
 */
CopyDefenseTemplateResponse Client::copyDefenseTemplate(const CopyDefenseTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyDefenseTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a task to export API security data.
 *
 * @param request CreateApiExportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApiExportResponse
 */
CreateApiExportResponse Client::createApiExportWithOptions(const CreateApiExportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasParam()) {
    query["Param"] = request.getParam();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
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
 * @summary Creates a task to export API security data.
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
    query["CertContent"] = request.getCertContent();
  }

  if (!!request.hasCertKey()) {
    query["CertKey"] = request.getCertKey();
  }

  if (!!request.hasCertName()) {
    query["CertName"] = request.getCertName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Integrates cloud products with Web Application Firewall (WAF). Currently, only Elastic Compute Service (ECS) and Classic Load Balancer (CLB) are supported.
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
    request.setListenShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListen(), "Listen", "json"));
  }

  if (!!tmpReq.hasRedirect()) {
    request.setRedirectShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRedirect(), "Redirect", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasListenShrink()) {
    query["Listen"] = request.getListenShrink();
  }

  if (!!request.hasOwnerUserId()) {
    query["OwnerUserId"] = request.getOwnerUserId();
  }

  if (!!request.hasRedirectShrink()) {
    query["Redirect"] = request.getRedirectShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Integrates cloud products with Web Application Firewall (WAF). Currently, only Elastic Compute Service (ECS) and Classic Load Balancer (CLB) are supported.
 *
 * @param request CreateCloudResourceRequest
 * @return CreateCloudResourceResponse
 */
CreateCloudResourceResponse Client::createCloudResource(const CreateCloudResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudResourceWithOptions(request, runtime);
}

/**
 * @summary Adds an extension certificate for cloud native mode.
 *
 * @param request CreateCloudResourceExtensionCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudResourceExtensionCertResponse
 */
CreateCloudResourceExtensionCertResponse Client::createCloudResourceExtensionCertWithOptions(const CreateCloudResourceExtensionCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertId()) {
    query["CertId"] = request.getCertId();
  }

  if (!!request.hasCloudResourceId()) {
    query["CloudResourceId"] = request.getCloudResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudResourceExtensionCert"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudResourceExtensionCertResponse>();
}

/**
 * @summary Adds an extension certificate for cloud native mode.
 *
 * @param request CreateCloudResourceExtensionCertRequest
 * @return CreateCloudResourceExtensionCertResponse
 */
CreateCloudResourceExtensionCertResponse Client::createCloudResourceExtensionCert(const CreateCloudResourceExtensionCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudResourceExtensionCertWithOptions(request, runtime);
}

/**
 * @summary Creates a protected object.
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
    request.setCustomHeadersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomHeaders(), "CustomHeaders", "json"));
  }

  json query = {};
  if (!!request.hasCustomHeadersShrink()) {
    query["CustomHeaders"] = request.getCustomHeadersShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDetail()) {
    query["Detail"] = request.getDetail();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerUserId()) {
    query["OwnerUserId"] = request.getOwnerUserId();
  }

  if (!!request.hasPattern()) {
    query["Pattern"] = request.getPattern();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceGroup()) {
    query["ResourceGroup"] = request.getResourceGroup();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResourceOrigin()) {
    query["ResourceOrigin"] = request.getResourceOrigin();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasXffStatus()) {
    query["XffStatus"] = request.getXffStatus();
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
 * @summary Creates a protected object.
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
    query["AddList"] = request.getAddList();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
    query["DefenseScene"] = request.getDefenseScene();
  }

  if (!!request.hasDefenseType()) {
    query["DefenseType"] = request.getDefenseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  json body = {};
  if (!!request.hasRules()) {
    body["Rules"] = request.getRules();
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
 * @summary Creates a protection template in Web Application Firewall (WAF).
 *
 * @param request CreateDefenseTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDefenseTemplateResponse
 */
CreateDefenseTemplateResponse Client::createDefenseTemplateWithOptions(const CreateDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.getDefenseScene();
  }

  if (!!request.hasDefenseSubScene()) {
    query["DefenseSubScene"] = request.getDefenseSubScene();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateOrigin()) {
    query["TemplateOrigin"] = request.getTemplateOrigin();
  }

  if (!!request.hasTemplateStatus()) {
    query["TemplateStatus"] = request.getTemplateStatus();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  if (!!request.hasUnbindResourceGroups()) {
    query["UnbindResourceGroups"] = request.getUnbindResourceGroups();
  }

  if (!!request.hasUnbindResources()) {
    query["UnbindResources"] = request.getUnbindResources();
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
 * @summary Creates a protection template in Web Application Firewall (WAF).
 *
 * @param request CreateDefenseTemplateRequest
 * @return CreateDefenseTemplateResponse
 */
CreateDefenseTemplateResponse Client::createDefenseTemplate(const CreateDefenseTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDefenseTemplateWithOptions(request, runtime);
}

/**
 * @summary Adds a domain name to a Web Application Firewall (WAF) instance for protection.
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
    request.setListenShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListen(), "Listen", "json"));
  }

  if (!!tmpReq.hasRedirect()) {
    request.setRedirectShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRedirect(), "Redirect", "json"));
  }

  json query = {};
  if (!!request.hasAccessType()) {
    query["AccessType"] = request.getAccessType();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasListenShrink()) {
    query["Listen"] = request.getListenShrink();
  }

  if (!!request.hasRedirectShrink()) {
    query["Redirect"] = request.getRedirectShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Adds a domain name to a Web Application Firewall (WAF) instance for protection.
 *
 * @param request CreateDomainRequest
 * @return CreateDomainResponse
 */
CreateDomainResponse Client::createDomain(const CreateDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDomainWithOptions(request, runtime);
}

/**
 * @summary Creates a hybrid cloud Web Application Firewall (WAF) cluster.
 *
 * @param request CreateHybridCloudClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHybridCloudClusterResponse
 */
CreateHybridCloudClusterResponse Client::createHybridCloudClusterWithOptions(const CreateHybridCloudClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessMode()) {
    query["AccessMode"] = request.getAccessMode();
  }

  if (!!request.hasAccessRegion()) {
    query["AccessRegion"] = request.getAccessRegion();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasHttpPorts()) {
    query["HttpPorts"] = request.getHttpPorts();
  }

  if (!!request.hasHttpsPorts()) {
    query["HttpsPorts"] = request.getHttpsPorts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogFieldsNotReturned()) {
    query["LogFieldsNotReturned"] = request.getLogFieldsNotReturned();
  }

  if (!!request.hasProtectionServerCount()) {
    query["ProtectionServerCount"] = request.getProtectionServerCount();
  }

  if (!!request.hasProxyStatus()) {
    query["ProxyStatus"] = request.getProxyStatus();
  }

  if (!!request.hasProxyType()) {
    query["ProxyType"] = request.getProxyType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleConfig()) {
    query["RuleConfig"] = request.getRuleConfig();
  }

  if (!!request.hasRuleStatus()) {
    query["RuleStatus"] = request.getRuleStatus();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
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
 * @summary Creates a hybrid cloud Web Application Firewall (WAF) cluster.
 *
 * @param request CreateHybridCloudClusterRequest
 * @return CreateHybridCloudClusterResponse
 */
CreateHybridCloudClusterResponse Client::createHybridCloudCluster(const CreateHybridCloudClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHybridCloudClusterWithOptions(request, runtime);
}

/**
 * @summary Creates a Hybrid Cloud Web Application Firewall (WAF) cluster rule.
 *
 * @param request CreateHybridCloudClusterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHybridCloudClusterRuleResponse
 */
CreateHybridCloudClusterRuleResponse Client::createHybridCloudClusterRuleWithOptions(const CreateHybridCloudClusterRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleConfig()) {
    query["RuleConfig"] = request.getRuleConfig();
  }

  if (!!request.hasRuleStatus()) {
    query["RuleStatus"] = request.getRuleStatus();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
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
 * @summary Creates a Hybrid Cloud Web Application Firewall (WAF) cluster rule.
 *
 * @param request CreateHybridCloudClusterRuleRequest
 * @return CreateHybridCloudClusterRuleResponse
 */
CreateHybridCloudClusterRuleResponse Client::createHybridCloudClusterRule(const CreateHybridCloudClusterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHybridCloudClusterRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a node group in a Hybrid Cloud Web Application Firewall (WAF) cluster.
 *
 * @param request CreateHybridCloudGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHybridCloudGroupResponse
 */
CreateHybridCloudGroupResponse Client::createHybridCloudGroupWithOptions(const CreateHybridCloudGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackSourceMark()) {
    query["BackSourceMark"] = request.getBackSourceMark();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.getGroupType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLoadBalanceIp()) {
    query["LoadBalanceIp"] = request.getLoadBalanceIp();
  }

  if (!!request.hasLocationCode()) {
    query["LocationCode"] = request.getLocationCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Creates a node group in a Hybrid Cloud Web Application Firewall (WAF) cluster.
 *
 * @param request CreateHybridCloudGroupRequest
 * @return CreateHybridCloudGroupResponse
 */
CreateHybridCloudGroupResponse Client::createHybridCloudGroup(const CreateHybridCloudGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHybridCloudGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a log delivery configuration for a Web Application Firewall (WAF) instance in a hybrid cloud.
 *
 * @param request CreateLogDeliveryConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLogDeliveryConfigResponse
 */
CreateLogDeliveryConfigResponse Client::createLogDeliveryConfigWithOptions(const CreateLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryDetail()) {
    query["DeliveryDetail"] = request.getDeliveryDetail();
  }

  if (!!request.hasDeliveryName()) {
    query["DeliveryName"] = request.getDeliveryName();
  }

  if (!!request.hasDeliveryType()) {
    query["DeliveryType"] = request.getDeliveryType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Creates a log delivery configuration for a Web Application Firewall (WAF) instance in a hybrid cloud.
 *
 * @param request CreateLogDeliveryConfigRequest
 * @return CreateLogDeliveryConfigResponse
 */
CreateLogDeliveryConfigResponse Client::createLogDeliveryConfig(const CreateLogDeliveryConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLogDeliveryConfigWithOptions(request, runtime);
}

/**
 * @summary Creates an IP address blacklist for critical event protection.
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
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExpiredTime()) {
    query["ExpiredTime"] = request.getExpiredTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIpList()) {
    query["IpList"] = request.getIpList();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Creates an IP address blacklist for critical event protection.
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
 * @summary Adds member accounts to use the multi-account management feature of Web Application Firewall (WAF).
 *
 * @param request CreateMemberAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMemberAccountsResponse
 */
CreateMemberAccountsResponse Client::createMemberAccountsWithOptions(const CreateMemberAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemberAccountIds()) {
    query["MemberAccountIds"] = request.getMemberAccountIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Adds member accounts to use the multi-account management feature of Web Application Firewall (WAF).
 *
 * @param request CreateMemberAccountsRequest
 * @return CreateMemberAccountsResponse
 */
CreateMemberAccountsResponse Client::createMemberAccounts(const CreateMemberAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMemberAccountsWithOptions(request, runtime);
}

/**
 * @summary Starts a trial for a proof of concept (POC) feature.
 *
 * @param request CreatePocFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePocFunctionResponse
 */
CreatePocFunctionResponse Client::createPocFunctionWithOptions(const CreatePocFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Starts a trial for a proof of concept (POC) feature.
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
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Uploads an SM certificate for CNAME record access to Web Application Firewall (WAF).
 *
 * @param request CreateSM2CertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSM2CertResponse
 */
CreateSM2CertResponse Client::createSM2CertWithOptions(const CreateSM2CertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertName()) {
    query["CertName"] = request.getCertName();
  }

  if (!!request.hasEncryptCertificate()) {
    query["EncryptCertificate"] = request.getEncryptCertificate();
  }

  if (!!request.hasEncryptPrivateKey()) {
    query["EncryptPrivateKey"] = request.getEncryptPrivateKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasSignCertificate()) {
    query["SignCertificate"] = request.getSignCertificate();
  }

  if (!!request.hasSignPrivateKey()) {
    query["SignPrivateKey"] = request.getSignPrivateKey();
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
 * @summary Uploads an SM certificate for CNAME record access to Web Application Firewall (WAF).
 *
 * @param request CreateSM2CertRequest
 * @return CreateSM2CertResponse
 */
CreateSM2CertResponse Client::createSM2Cert(const CreateSM2CertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSM2CertWithOptions(request, runtime);
}

/**
 * @summary Deletes addresses from an address book.
 *
 * @param request DeleteAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAddressResponse
 */
DeleteAddressResponse Client::deleteAddressWithOptions(const DeleteAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressList()) {
    query["AddressList"] = request.getAddressList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAddress"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAddressResponse>();
}

/**
 * @summary Deletes addresses from an address book.
 *
 * @param request DeleteAddressRequest
 * @return DeleteAddressResponse
 */
DeleteAddressResponse Client::deleteAddress(const DeleteAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAddressWithOptions(request, runtime);
}

/**
 * @summary Deletes API security risks in a batch.
 *
 * @param request DeleteApisecAbnormalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApisecAbnormalsResponse
 */
DeleteApisecAbnormalsResponse Client::deleteApisecAbnormalsWithOptions(const DeleteApisecAbnormalsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbnormalIds()) {
    query["AbnormalIds"] = request.getAbnormalIds();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Deletes API security risks in a batch.
 *
 * @param request DeleteApisecAbnormalsRequest
 * @return DeleteApisecAbnormalsResponse
 */
DeleteApisecAbnormalsResponse Client::deleteApisecAbnormals(const DeleteApisecAbnormalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApisecAbnormalsWithOptions(request, runtime);
}

/**
 * @summary Deletes API security events in batches.
 *
 * @param request DeleteApisecEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApisecEventsResponse
 */
DeleteApisecEventsResponse Client::deleteApisecEventsWithOptions(const DeleteApisecEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEventIds()) {
    query["EventIds"] = request.getEventIds();
  }

  if (!!request.hasEventScope()) {
    query["EventScope"] = request.getEventScope();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Deletes API security events in batches.
 *
 * @param request DeleteApisecEventsRequest
 * @return DeleteApisecEventsResponse
 */
DeleteApisecEventsResponse Client::deleteApisecEvents(const DeleteApisecEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApisecEventsWithOptions(request, runtime);
}

/**
 * @summary Removes a cloud service from Web Application Firewall (WAF). This operation currently supports only Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
 *
 * @param request DeleteCloudResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudResourceResponse
 */
DeleteCloudResourceResponse Client::deleteCloudResourceWithOptions(const DeleteCloudResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudResourceId()) {
    query["CloudResourceId"] = request.getCloudResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.getResourceInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.getResourceProduct();
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
 * @summary Removes a cloud service from Web Application Firewall (WAF). This operation currently supports only Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
 *
 * @param request DeleteCloudResourceRequest
 * @return DeleteCloudResourceResponse
 */
DeleteCloudResourceResponse Client::deleteCloudResource(const DeleteCloudResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudResourceWithOptions(request, runtime);
}

/**
 * @summary Deletes an extension certificate for cloud native mode.
 *
 * @param request DeleteCloudResourceExtensionCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudResourceExtensionCertResponse
 */
DeleteCloudResourceExtensionCertResponse Client::deleteCloudResourceExtensionCertWithOptions(const DeleteCloudResourceExtensionCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertId()) {
    query["CertId"] = request.getCertId();
  }

  if (!!request.hasCloudResourceId()) {
    query["CloudResourceId"] = request.getCloudResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCloudResourceExtensionCert"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudResourceExtensionCertResponse>();
}

/**
 * @summary Deletes an extension certificate for cloud native mode.
 *
 * @param request DeleteCloudResourceExtensionCertRequest
 * @return DeleteCloudResourceExtensionCertResponse
 */
DeleteCloudResourceExtensionCertResponse Client::deleteCloudResourceExtensionCert(const DeleteCloudResourceExtensionCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudResourceExtensionCertWithOptions(request, runtime);
}

/**
 * @summary Deletes a protected object.
 *
 * @param request DeleteDefenseResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDefenseResourceResponse
 */
DeleteDefenseResourceResponse Client::deleteDefenseResourceWithOptions(const DeleteDefenseResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Deletes a protected object.
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
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Deletes the specified protection rules.
 *
 * @param request DeleteDefenseRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDefenseRuleResponse
 */
DeleteDefenseRuleResponse Client::deleteDefenseRuleWithOptions(const DeleteDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseType()) {
    query["DefenseType"] = request.getDefenseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleIds()) {
    query["RuleIds"] = request.getRuleIds();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Deletes the specified protection rules.
 *
 * @param request DeleteDefenseRuleRequest
 * @return DeleteDefenseRuleResponse
 */
DeleteDefenseRuleResponse Client::deleteDefenseRule(const DeleteDefenseRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDefenseRuleWithOptions(request, runtime);
}

/**
 * @summary Unblocks an IP address that is blocked by the scan protection module.
 *
 * @param request DeleteDefenseRuleBlockIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDefenseRuleBlockIpResponse
 */
DeleteDefenseRuleBlockIpResponse Client::deleteDefenseRuleBlockIpWithOptions(const DeleteDefenseRuleBlockIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Unblocks an IP address that is blocked by the scan protection module.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Deletes a domain name that has been added to Web Application Firewall (WAF) in CNAME record mode.
 *
 * @param request DeleteDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomainWithOptions(const DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessType()) {
    query["AccessType"] = request.getAccessType();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Deletes a domain name that has been added to Web Application Firewall (WAF) in CNAME record mode.
 *
 * @param request DeleteDomainRequest
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomain(const DeleteDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainWithOptions(request, runtime);
}

/**
 * @summary Deletes a hybrid cloud cluster rule from a Web Application Firewall (WAF) instance.
 *
 * @param request DeleteHybridCloudClusterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHybridCloudClusterRuleResponse
 */
DeleteHybridCloudClusterRuleResponse Client::deleteHybridCloudClusterRuleWithOptions(const DeleteHybridCloudClusterRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterRuleResourceId()) {
    query["ClusterRuleResourceId"] = request.getClusterRuleResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Deletes a hybrid cloud cluster rule from a Web Application Firewall (WAF) instance.
 *
 * @param request DeleteHybridCloudClusterRuleRequest
 * @return DeleteHybridCloudClusterRuleResponse
 */
DeleteHybridCloudClusterRuleResponse Client::deleteHybridCloudClusterRule(const DeleteHybridCloudClusterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHybridCloudClusterRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a group.
 *
 * @param request DeleteHybridCloudGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHybridCloudGroupResponse
 */
DeleteHybridCloudGroupResponse Client::deleteHybridCloudGroupWithOptions(const DeleteHybridCloudGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Deletes a group.
 *
 * @param request DeleteHybridCloudGroupRequest
 * @return DeleteHybridCloudGroupResponse
 */
DeleteHybridCloudGroupResponse Client::deleteHybridCloudGroup(const DeleteHybridCloudGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHybridCloudGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a log delivery configuration.
 *
 * @param request DeleteLogDeliveryConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLogDeliveryConfigResponse
 */
DeleteLogDeliveryConfigResponse Client::deleteLogDeliveryConfigWithOptions(const DeleteLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryName()) {
    query["DeliveryName"] = request.getDeliveryName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Deletes a log delivery configuration.
 *
 * @param request DeleteLogDeliveryConfigRequest
 * @return DeleteLogDeliveryConfigResponse
 */
DeleteLogDeliveryConfigResponse Client::deleteLogDeliveryConfig(const DeleteLogDeliveryConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLogDeliveryConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes an IP address from the blacklist for critical event protection.
 *
 * @param request DeleteMajorProtectionBlackIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMajorProtectionBlackIpResponse
 */
DeleteMajorProtectionBlackIpResponse Client::deleteMajorProtectionBlackIpWithOptions(const DeleteMajorProtectionBlackIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIpList()) {
    query["IpList"] = request.getIpList();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Deletes an IP address from the blacklist for critical event protection.
 *
 * @param request DeleteMajorProtectionBlackIpRequest
 * @return DeleteMajorProtectionBlackIpResponse
 */
DeleteMajorProtectionBlackIpResponse Client::deleteMajorProtectionBlackIp(const DeleteMajorProtectionBlackIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMajorProtectionBlackIpWithOptions(request, runtime);
}

/**
 * @summary Deletes a Web Application Firewall (WAF) member account.
 *
 * @param request DeleteMemberAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMemberAccountResponse
 */
DeleteMemberAccountResponse Client::deleteMemberAccountWithOptions(const DeleteMemberAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemberAccountId()) {
    query["MemberAccountId"] = request.getMemberAccountId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Deletes a Web Application Firewall (WAF) member account.
 *
 * @param request DeleteMemberAccountRequest
 * @return DeleteMemberAccountResponse
 */
DeleteMemberAccountResponse Client::deleteMemberAccount(const DeleteMemberAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMemberAccountWithOptions(request, runtime);
}

/**
 * @summary Queries abnormal cloud resources added in cloud native mode.
 *
 * @param request DescribeAbnormalCloudResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAbnormalCloudResourcesResponse
 */
DescribeAbnormalCloudResourcesResponse Client::describeAbnormalCloudResourcesWithOptions(const DescribeAbnormalCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries abnormal cloud resources added in cloud native mode.
 *
 * @param request DescribeAbnormalCloudResourcesRequest
 * @return DescribeAbnormalCloudResourcesResponse
 */
DescribeAbnormalCloudResourcesResponse Client::describeAbnormalCloudResources(const DescribeAbnormalCloudResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAbnormalCloudResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries whether an account is a delegated administrator for Web Application Firewall (WAF) using the multi-account management feature.
 *
 * @param request DescribeAccountDelegatedStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountDelegatedStatusResponse
 */
DescribeAccountDelegatedStatusResponse Client::describeAccountDelegatedStatusWithOptions(const DescribeAccountDelegatedStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries whether an account is a delegated administrator for Web Application Firewall (WAF) using the multi-account management feature.
 *
 * @param request DescribeAccountDelegatedStatusRequest
 * @return DescribeAccountDelegatedStatusResponse
 */
DescribeAccountDelegatedStatusResponse Client::describeAccountDelegatedStatus(const DescribeAccountDelegatedStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountDelegatedStatusWithOptions(request, runtime);
}

/**
 * @summary Queries a paginated list of addresses in an address book.
 *
 * @param request DescribeAddressesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAddressesResponse
 */
DescribeAddressesResponse Client::describeAddressesWithOptions(const DescribeAddressesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressLike()) {
    query["AddressLike"] = request.getAddressLike();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAddresses"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAddressesResponse>();
}

/**
 * @summary Queries a paginated list of addresses in an address book.
 *
 * @param request DescribeAddressesRequest
 * @return DescribeAddressesResponse
 */
DescribeAddressesResponse Client::describeAddresses(const DescribeAddressesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAddressesWithOptions(request, runtime);
}

/**
 * @summary Queries the alert banner information of a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeAlarmBannerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlarmBannerResponse
 */
DescribeAlarmBannerResponse Client::describeAlarmBannerWithOptions(const DescribeAlarmBannerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAlarmBanner"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlarmBannerResponse>();
}

/**
 * @summary Queries the alert banner information of a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeAlarmBannerRequest
 * @return DescribeAlarmBannerResponse
 */
DescribeAlarmBannerResponse Client::describeAlarmBanner(const DescribeAlarmBannerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlarmBannerWithOptions(request, runtime);
}

/**
 * @summary Queries a list of alerts.
 *
 * @param request DescribeAlarmListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlarmListResponse
 */
DescribeAlarmListResponse Client::describeAlarmListWithOptions(const DescribeAlarmListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAlarmList"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlarmListResponse>();
}

/**
 * @summary Queries a list of alerts.
 *
 * @param request DescribeAlarmListRequest
 * @return DescribeAlarmListResponse
 */
DescribeAlarmListResponse Client::describeAlarmList(const DescribeAlarmListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlarmListWithOptions(request, runtime);
}

/**
 * @summary Queries a list of API security export tasks.
 *
 * @param request DescribeApiExportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiExportsResponse
 */
DescribeApiExportsResponse Client::describeApiExportsWithOptions(const DescribeApiExportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries a list of API security export tasks.
 *
 * @param request DescribeApiExportsRequest
 * @return DescribeApiExportsResponse
 */
DescribeApiExportsResponse Client::describeApiExports(const DescribeApiExportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiExportsWithOptions(request, runtime);
}

/**
 * @summary Queries the API security risk statistics for domain names that are protected by Web Application Firewall (WAF).
 *
 * @param request DescribeApisecAbnormalDomainStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecAbnormalDomainStatisticResponse
 */
DescribeApisecAbnormalDomainStatisticResponse Client::describeApisecAbnormalDomainStatisticWithOptions(const DescribeApisecAbnormalDomainStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderWay()) {
    query["OrderWay"] = request.getOrderWay();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the API security risk statistics for domain names that are protected by Web Application Firewall (WAF).
 *
 * @param request DescribeApisecAbnormalDomainStatisticRequest
 * @return DescribeApisecAbnormalDomainStatisticResponse
 */
DescribeApisecAbnormalDomainStatisticResponse Client::describeApisecAbnormalDomainStatistic(const DescribeApisecAbnormalDomainStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecAbnormalDomainStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the API security risks that are detected by Web Application Firewall (WAF).
 *
 * @param request DescribeApisecAbnormalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecAbnormalsResponse
 */
DescribeApisecAbnormalsResponse Client::describeApisecAbnormalsWithOptions(const DescribeApisecAbnormalsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbnormalId()) {
    query["AbnormalId"] = request.getAbnormalId();
  }

  if (!!request.hasAbnormalLevel()) {
    query["AbnormalLevel"] = request.getAbnormalLevel();
  }

  if (!!request.hasAbnormalTag()) {
    query["AbnormalTag"] = request.getAbnormalTag();
  }

  if (!!request.hasApiFormat()) {
    query["ApiFormat"] = request.getApiFormat();
  }

  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasApiTag()) {
    query["ApiTag"] = request.getApiTag();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMatchedHost()) {
    query["MatchedHost"] = request.getMatchedHost();
  }

  if (!!request.hasOrderKey()) {
    query["OrderKey"] = request.getOrderKey();
  }

  if (!!request.hasOrderWay()) {
    query["OrderWay"] = request.getOrderWay();
  }

  if (!!request.hasOrigin()) {
    query["Origin"] = request.getOrigin();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUserStatus()) {
    query["UserStatus"] = request.getUserStatus();
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
 * @summary Queries the API security risks that are detected by Web Application Firewall (WAF).
 *
 * @param request DescribeApisecAbnormalsRequest
 * @return DescribeApisecAbnormalsResponse
 */
DescribeApisecAbnormalsResponse Client::describeApisecAbnormals(const DescribeApisecAbnormalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecAbnormalsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of API security assets that are protected by Web Application Firewall (WAF).
 *
 * @param request DescribeApisecApiResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecApiResourcesResponse
 */
DescribeApisecApiResourcesResponse Client::describeApisecApiResourcesWithOptions(const DescribeApisecApiResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiFormat()) {
    query["ApiFormat"] = request.getApiFormat();
  }

  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasApiMethod()) {
    query["ApiMethod"] = request.getApiMethod();
  }

  if (!!request.hasApiStatus()) {
    query["ApiStatus"] = request.getApiStatus();
  }

  if (!!request.hasApiTag()) {
    query["ApiTag"] = request.getApiTag();
  }

  if (!!request.hasApiType()) {
    query["ApiType"] = request.getApiType();
  }

  if (!!request.hasAuthFlag()) {
    query["AuthFlag"] = request.getAuthFlag();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFollow()) {
    query["Follow"] = request.getFollow();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMatchedHost()) {
    query["MatchedHost"] = request.getMatchedHost();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.getNote();
  }

  if (!!request.hasOrderKey()) {
    query["OrderKey"] = request.getOrderKey();
  }

  if (!!request.hasOrderWay()) {
    query["OrderWay"] = request.getOrderWay();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestSensitiveType()) {
    query["RequestSensitiveType"] = request.getRequestSensitiveType();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasSensitiveLevel()) {
    query["SensitiveLevel"] = request.getSensitiveLevel();
  }

  if (!!request.hasSensitiveType()) {
    query["SensitiveType"] = request.getSensitiveType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries a list of API security assets that are protected by Web Application Firewall (WAF).
 *
 * @param request DescribeApisecApiResourcesRequest
 * @return DescribeApisecApiResourcesResponse
 */
DescribeApisecApiResourcesResponse Client::describeApisecApiResources(const DescribeApisecApiResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecApiResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the trend of API assets detected by the API security module of Web Application Firewall (WAF).
 *
 * @param request DescribeApisecAssetTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecAssetTrendResponse
 */
DescribeApisecAssetTrendResponse Client::describeApisecAssetTrendWithOptions(const DescribeApisecAssetTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the trend of API assets detected by the API security module of Web Application Firewall (WAF).
 *
 * @param request DescribeApisecAssetTrendRequest
 * @return DescribeApisecAssetTrendResponse
 */
DescribeApisecAssetTrendResponse Client::describeApisecAssetTrend(const DescribeApisecAssetTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecAssetTrendWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an API security event.
 *
 * @param request DescribeApisecEventDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecEventDetailResponse
 */
DescribeApisecEventDetailResponse Client::describeApisecEventDetailWithOptions(const DescribeApisecEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDetailType()) {
    query["DetailType"] = request.getDetailType();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasEventScope()) {
    query["EventScope"] = request.getEventScope();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Retrieves the details of an API security event.
 *
 * @param request DescribeApisecEventDetailRequest
 * @return DescribeApisecEventDetailResponse
 */
DescribeApisecEventDetailResponse Client::describeApisecEventDetail(const DescribeApisecEventDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecEventDetailWithOptions(request, runtime);
}

/**
 * @summary Queries API security event statistics grouped by domain name for a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeApisecEventDomainStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecEventDomainStatisticResponse
 */
DescribeApisecEventDomainStatisticResponse Client::describeApisecEventDomainStatisticWithOptions(const DescribeApisecEventDomainStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderWay()) {
    query["OrderWay"] = request.getOrderWay();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries API security event statistics grouped by domain name for a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeApisecEventDomainStatisticRequest
 * @return DescribeApisecEventDomainStatisticResponse
 */
DescribeApisecEventDomainStatisticResponse Client::describeApisecEventDomainStatistic(const DescribeApisecEventDomainStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecEventDomainStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries a list of API security events.
 *
 * @param request DescribeApisecEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecEventsResponse
 */
DescribeApisecEventsResponse Client::describeApisecEventsWithOptions(const DescribeApisecEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasApiFormat()) {
    query["ApiFormat"] = request.getApiFormat();
  }

  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasApiTag()) {
    query["ApiTag"] = request.getApiTag();
  }

  if (!!request.hasAttackIp()) {
    query["AttackIp"] = request.getAttackIp();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTs()) {
    query["EndTs"] = request.getEndTs();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasEventLevel()) {
    query["EventLevel"] = request.getEventLevel();
  }

  if (!!request.hasEventScope()) {
    query["EventScope"] = request.getEventScope();
  }

  if (!!request.hasEventTag()) {
    query["EventTag"] = request.getEventTag();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMatchedHost()) {
    query["MatchedHost"] = request.getMatchedHost();
  }

  if (!!request.hasOrderKey()) {
    query["OrderKey"] = request.getOrderKey();
  }

  if (!!request.hasOrderWay()) {
    query["OrderWay"] = request.getOrderWay();
  }

  if (!!request.hasOrigin()) {
    query["Origin"] = request.getOrigin();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.getStartTs();
  }

  if (!!request.hasUserStatus()) {
    query["UserStatus"] = request.getUserStatus();
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
 * @summary Queries a list of API security events.
 *
 * @param request DescribeApisecEventsRequest
 * @return DescribeApisecEventsResponse
 */
DescribeApisecEventsResponse Client::describeApisecEvents(const DescribeApisecEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the API security examples that are detected by Web Application Firewall (WAF).
 *
 * @param request DescribeApisecExamplesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecExamplesResponse
 */
DescribeApisecExamplesResponse Client::describeApisecExamplesWithOptions(const DescribeApisecExamplesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbnormalTag()) {
    query["AbnormalTag"] = request.getAbnormalTag();
  }

  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasExampleType()) {
    query["ExampleType"] = request.getExampleType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestSensitiveTypeList()) {
    query["RequestSensitiveTypeList"] = request.getRequestSensitiveTypeList();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResponseSensitiveTypeList()) {
    query["ResponseSensitiveTypeList"] = request.getResponseSensitiveTypeList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApisecExamples"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisecExamplesResponse>();
}

/**
 * @summary Queries the API security examples that are detected by Web Application Firewall (WAF).
 *
 * @param request DescribeApisecExamplesRequest
 * @return DescribeApisecExamplesResponse
 */
DescribeApisecExamplesResponse Client::describeApisecExamples(const DescribeApisecExamplesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecExamplesWithOptions(request, runtime);
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the list of domain names that are protected by API security.
 *
 * @param request DescribeApisecMatchedHostsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecMatchedHostsResponse
 */
DescribeApisecMatchedHostsResponse Client::describeApisecMatchedHostsWithOptions(const DescribeApisecMatchedHostsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMatchedHost()) {
    query["MatchedHost"] = request.getMatchedHost();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Queries the list of domain names that are protected by API security.
 *
 * @param request DescribeApisecMatchedHostsRequest
 * @return DescribeApisecMatchedHostsResponse
 */
DescribeApisecMatchedHostsResponse Client::describeApisecMatchedHosts(const DescribeApisecMatchedHostsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecMatchedHostsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of active API security protection object groups.
 *
 * @param request DescribeApisecProtectionGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecProtectionGroupsResponse
 */
DescribeApisecProtectionGroupsResponse Client::describeApisecProtectionGroupsWithOptions(const DescribeApisecProtectionGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApisecStatus()) {
    query["ApisecStatus"] = request.getApisecStatus();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroup()) {
    query["ResourceGroup"] = request.getResourceGroup();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Retrieves a list of active API security protection object groups.
 *
 * @param request DescribeApisecProtectionGroupsRequest
 * @return DescribeApisecProtectionGroupsResponse
 */
DescribeApisecProtectionGroupsResponse Client::describeApisecProtectionGroups(const DescribeApisecProtectionGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecProtectionGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the protected objects of a Web Application Firewall (WAF) instance for which API security is enabled.
 *
 * @param request DescribeApisecProtectionResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecProtectionResourcesResponse
 */
DescribeApisecProtectionResourcesResponse Client::describeApisecProtectionResourcesWithOptions(const DescribeApisecProtectionResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApisecStatus()) {
    query["ApisecStatus"] = request.getApisecStatus();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the protected objects of a Web Application Firewall (WAF) instance for which API security is enabled.
 *
 * @param request DescribeApisecProtectionResourcesRequest
 * @return DescribeApisecProtectionResourcesResponse
 */
DescribeApisecProtectionResourcesResponse Client::describeApisecProtectionResources(const DescribeApisecProtectionResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecProtectionResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the rules of an API security policy.
 *
 * @param request DescribeApisecRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecRulesResponse
 */
DescribeApisecRulesResponse Client::describeApisecRulesWithOptions(const DescribeApisecRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrigin()) {
    query["Origin"] = request.getOrigin();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Queries the rules of an API security policy.
 *
 * @param request DescribeApisecRulesRequest
 * @return DescribeApisecRulesResponse
 */
DescribeApisecRulesResponse Client::describeApisecRules(const DescribeApisecRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecRulesWithOptions(request, runtime);
}

/**
 * @summary Queries statistics on domain names where sensitive data is detected by the API security module.
 *
 * @param request DescribeApisecSensitiveDomainStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecSensitiveDomainStatisticResponse
 */
DescribeApisecSensitiveDomainStatisticResponse Client::describeApisecSensitiveDomainStatisticWithOptions(const DescribeApisecSensitiveDomainStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderWay()) {
    query["OrderWay"] = request.getOrderWay();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Queries statistics on domain names where sensitive data is detected by the API security module.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogRegionId()) {
    query["LogRegionId"] = request.getLogRegionId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogRegionId()) {
    query["LogRegionId"] = request.getLogRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries statistics for API security risks or security events.
 *
 * @param request DescribeApisecStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecStatisticsResponse
 */
DescribeApisecStatisticsResponse Client::describeApisecStatisticsWithOptions(const DescribeApisecStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserStatusList()) {
    query["UserStatusList"] = request.getUserStatusList();
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
 * @summary Queries statistics for API security risks or security events.
 *
 * @param request DescribeApisecStatisticsRequest
 * @return DescribeApisecStatisticsResponse
 */
DescribeApisecStatisticsResponse Client::describeApisecStatistics(const DescribeApisecStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries security suggestions for API assets.
 *
 * @param request DescribeApisecSuggestionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecSuggestionsResponse
 */
DescribeApisecSuggestionsResponse Client::describeApisecSuggestionsWithOptions(const DescribeApisecSuggestionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries security suggestions for API assets.
 *
 * @param request DescribeApisecSuggestionsRequest
 * @return DescribeApisecSuggestionsResponse
 */
DescribeApisecSuggestionsResponse Client::describeApisecSuggestions(const DescribeApisecSuggestionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecSuggestionsWithOptions(request, runtime);
}

/**
 * @summary Queries user operation records for API security of Web Application Firewall (WAF).
 *
 * @param request DescribeApisecUserOperationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisecUserOperationsResponse
 */
DescribeApisecUserOperationsResponse Client::describeApisecUserOperationsWithOptions(const DescribeApisecUserOperationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Queries user operation records for API security of Web Application Firewall (WAF).
 *
 * @param request DescribeApisecUserOperationsRequest
 * @return DescribeApisecUserOperationsResponse
 */
DescribeApisecUserOperationsResponse Client::describeApisecUserOperations(const DescribeApisecUserOperationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisecUserOperationsWithOptions(request, runtime);
}

/**
 * @summary Queries paged records of ruleset changes.
 *
 * @param request DescribeBaseRuleChangeLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBaseRuleChangeLogResponse
 */
DescribeBaseRuleChangeLogResponse Client::describeBaseRuleChangeLogWithOptions(const DescribeBaseRuleChangeLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBaseRuleChangeLog"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBaseRuleChangeLogResponse>();
}

/**
 * @summary Queries paged records of ruleset changes.
 *
 * @param request DescribeBaseRuleChangeLogRequest
 * @return DescribeBaseRuleChangeLogResponse
 */
DescribeBaseRuleChangeLogResponse Client::describeBaseRuleChangeLog(const DescribeBaseRuleChangeLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBaseRuleChangeLogWithOptions(request, runtime);
}

/**
 * @summary Queries the system rules for Web Application Firewall (WAF) protection.
 *
 * @param request DescribeBaseSystemRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBaseSystemRulesResponse
 */
DescribeBaseSystemRulesResponse Client::describeBaseSystemRulesWithOptions(const DescribeBaseSystemRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDetectType()) {
    query["DetectType"] = request.getDetectType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasRuleAction()) {
    query["RuleAction"] = request.getRuleAction();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleStatus()) {
    query["RuleStatus"] = request.getRuleStatus();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Queries the system rules for Web Application Firewall (WAF) protection.
 *
 * @param request DescribeBaseSystemRulesRequest
 * @return DescribeBaseSystemRulesResponse
 */
DescribeBaseSystemRulesResponse Client::describeBaseSystemRules(const DescribeBaseSystemRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBaseSystemRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the AppKey for bot management.
 *
 * @param request DescribeBotAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBotAppKeyResponse
 */
DescribeBotAppKeyResponse Client::describeBotAppKeyWithOptions(const DescribeBotAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyVersion()) {
    query["KeyVersion"] = request.getKeyVersion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBotAppKey"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBotAppKeyResponse>();
}

/**
 * @summary Queries the AppKey for bot management.
 *
 * @param request DescribeBotAppKeyRequest
 * @return DescribeBotAppKeyResponse
 */
DescribeBotAppKeyResponse Client::describeBotAppKey(const DescribeBotAppKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBotAppKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the labels of bot management rules.
 *
 * @param request DescribeBotRuleLabelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBotRuleLabelsResponse
 */
DescribeBotRuleLabelsResponse Client::describeBotRuleLabelsWithOptions(const DescribeBotRuleLabelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLabelType()) {
    query["LabelType"] = request.getLabelType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasSubScene()) {
    query["SubScene"] = request.getSubScene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBotRuleLabels"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBotRuleLabelsResponse>();
}

/**
 * @summary Queries the labels of bot management rules.
 *
 * @param request DescribeBotRuleLabelsRequest
 * @return DescribeBotRuleLabelsResponse
 */
DescribeBotRuleLabelsResponse Client::describeBotRuleLabels(const DescribeBotRuleLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBotRuleLabelsWithOptions(request, runtime);
}

/**
 * @summary Retrieves certificate details, including the certificate name, expiration time, issuance time, and associated domain name.
 *
 * @param request DescribeCertDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCertDetailResponse
 */
DescribeCertDetailResponse Client::describeCertDetailWithOptions(const DescribeCertDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.getCertIdentifier();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Retrieves certificate details, including the certificate name, expiration time, issuance time, and associated domain name.
 *
 * @param request DescribeCertDetailRequest
 * @return DescribeCertDetailResponse
 */
DescribeCertDetailResponse Client::describeCertDetail(const DescribeCertDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCertDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of certificates for a user.
 *
 * @param request DescribeCertsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCertsResponse
 */
DescribeCertsResponse Client::describeCertsWithOptions(const DescribeCertsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Retrieves the list of certificates for a user.
 *
 * @param request DescribeCertsRequest
 * @return DescribeCertsResponse
 */
DescribeCertsResponse Client::describeCerts(const DescribeCertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCertsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the billing module information of Web Application Firewall (WAF).
 *
 * @param request DescribeChargeModuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChargeModuleResponse
 */
DescribeChargeModuleResponse Client::describeChargeModuleWithOptions(const DescribeChargeModuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Retrieves the billing module information of Web Application Firewall (WAF).
 *
 * @param request DescribeChargeModuleRequest
 * @return DescribeChargeModuleResponse
 */
DescribeChargeModuleResponse Client::describeChargeModule(const DescribeChargeModuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChargeModuleWithOptions(request, runtime);
}

/**
 * @summary Queries the billing results for Web Application Firewall (WAF).
 *
 * @param request DescribeChargeResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChargeResultResponse
 */
DescribeChargeResultResponse Client::describeChargeResultWithOptions(const DescribeChargeResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChargeCycle()) {
    query["ChargeCycle"] = request.getChargeCycle();
  }

  if (!!request.hasChargeModules()) {
    query["ChargeModules"] = request.getChargeModules();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the billing results for Web Application Firewall (WAF).
 *
 * @param request DescribeChargeResultRequest
 * @return DescribeChargeResultResponse
 */
DescribeChargeResultResponse Client::describeChargeResult(const DescribeChargeResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChargeResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves port details of cloud service instances onboarded to Web Application Firewall (WAF).
 *
 * @param request DescribeCloudResourceAccessPortDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudResourceAccessPortDetailsResponse
 */
DescribeCloudResourceAccessPortDetailsResponse Client::describeCloudResourceAccessPortDetailsWithOptions(const DescribeCloudResourceAccessPortDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.getResourceInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.getResourceProduct();
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
 * @summary Retrieves port details of cloud service instances onboarded to Web Application Firewall (WAF).
 *
 * @param request DescribeCloudResourceAccessPortDetailsRequest
 * @return DescribeCloudResourceAccessPortDetailsResponse
 */
DescribeCloudResourceAccessPortDetailsResponse Client::describeCloudResourceAccessPortDetails(const DescribeCloudResourceAccessPortDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudResourceAccessPortDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries the ports of cloud services added to Web Application Firewall (WAF). This operation is supported only for Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
 *
 * @param request DescribeCloudResourceAccessedPortsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudResourceAccessedPortsResponse
 */
DescribeCloudResourceAccessedPortsResponse Client::describeCloudResourceAccessedPortsWithOptions(const DescribeCloudResourceAccessedPortsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.getResourceInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the ports of cloud services added to Web Application Firewall (WAF). This operation is supported only for Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
 *
 * @param request DescribeCloudResourceAccessedPortsRequest
 * @return DescribeCloudResourceAccessedPortsResponse
 */
DescribeCloudResourceAccessedPortsResponse Client::describeCloudResourceAccessedPorts(const DescribeCloudResourceAccessedPortsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudResourceAccessedPortsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of resources added to Web Application Firewall (WAF) in cloud native mode.
 *
 * @param request DescribeCloudResourceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudResourceListResponse
 */
DescribeCloudResourceListResponse Client::describeCloudResourceListWithOptions(const DescribeCloudResourceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudResourceId()) {
    query["CloudResourceId"] = request.getCloudResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerUserId()) {
    query["OwnerUserId"] = request.getOwnerUserId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.getResourceInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.getResourceProduct();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudResourceList"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudResourceListResponse>();
}

/**
 * @summary Queries a list of resources added to Web Application Firewall (WAF) in cloud native mode.
 *
 * @param request DescribeCloudResourceListRequest
 * @return DescribeCloudResourceListResponse
 */
DescribeCloudResourceListResponse Client::describeCloudResourceList(const DescribeCloudResourceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudResourceListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of cloud services added to Web Application Firewall (WAF).
 *
 * @param request DescribeCloudResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudResourcesResponse
 */
DescribeCloudResourcesResponse Client::describeCloudResourcesWithOptions(const DescribeCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerUserId()) {
    query["OwnerUserId"] = request.getOwnerUserId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceDomain()) {
    query["ResourceDomain"] = request.getResourceDomain();
  }

  if (!!request.hasResourceFunction()) {
    query["ResourceFunction"] = request.getResourceFunction();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.getResourceInstanceId();
  }

  if (!!request.hasResourceInstanceName()) {
    query["ResourceInstanceName"] = request.getResourceInstanceName();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.getResourceName();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.getResourceProduct();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceRouteName()) {
    query["ResourceRouteName"] = request.getResourceRouteName();
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
 * @summary Queries the list of cloud services added to Web Application Firewall (WAF).
 *
 * @param request DescribeCloudResourcesRequest
 * @return DescribeCloudResourcesResponse
 */
DescribeCloudResourcesResponse Client::describeCloudResources(const DescribeCloudResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the total number of domain names added to WAF, including those in canonical name (CNAME) mode and hybrid cloud mode.
 *
 * @param request DescribeCnameCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCnameCountResponse
 */
DescribeCnameCountResponse Client::describeCnameCountWithOptions(const DescribeCnameCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the total number of domain names added to WAF, including those in canonical name (CNAME) mode and hybrid cloud mode.
 *
 * @param request DescribeCnameCountRequest
 * @return DescribeCnameCountResponse
 */
DescribeCnameCountResponse Client::describeCnameCount(const DescribeCnameCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCnameCountWithOptions(request, runtime);
}

/**
 * @summary Queries all log fields supported by Simple Log Service for Web Application Firewall (WAF).
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
    request.setLogKeyListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLogKeyList(), "LogKeyList", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsDefault()) {
    query["IsDefault"] = request.getIsDefault();
  }

  if (!!request.hasIsRequired()) {
    query["IsRequired"] = request.getIsRequired();
  }

  if (!!request.hasLogKeyListShrink()) {
    query["LogKeyList"] = request.getLogKeyListShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries all log fields supported by Simple Log Service for Web Application Firewall (WAF).
 *
 * @param request DescribeCommonLogFieldsRequest
 * @return DescribeCommonLogFieldsResponse
 */
DescribeCommonLogFieldsResponse Client::describeCommonLogFields(const DescribeCommonLogFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCommonLogFieldsWithOptions(request, runtime);
}

/**
 * @summary Describes the compilation result of a custom regular expression rule.
 *
 * @param request DescribeCustomBaseRuleCompileResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomBaseRuleCompileResultResponse
 */
DescribeCustomBaseRuleCompileResultResponse Client::describeCustomBaseRuleCompileResultWithOptions(const DescribeCustomBaseRuleCompileResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Describes the compilation result of a custom regular expression rule.
 *
 * @param request DescribeCustomBaseRuleCompileResultRequest
 * @return DescribeCustomBaseRuleCompileResultResponse
 */
DescribeCustomBaseRuleCompileResultResponse Client::describeCustomBaseRuleCompileResult(const DescribeCustomBaseRuleCompileResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomBaseRuleCompileResultWithOptions(request, runtime);
}

/**
 * @summary Checks whether the current WAF instance is under a Distributed Denial of Service (DDoS) attack.
 *
 * @param request DescribeDDoSStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDoSStatusResponse
 */
DescribeDDoSStatusResponse Client::describeDDoSStatusWithOptions(const DescribeDDoSStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Checks whether the current WAF instance is under a Distributed Denial of Service (DDoS) attack.
 *
 * @param request DescribeDDoSStatusRequest
 * @return DescribeDDoSStatusResponse
 */
DescribeDDoSStatusResponse Client::describeDDoSStatus(const DescribeDDoSStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDoSStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the default SSL/TLS settings of a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeDefaultHttpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefaultHttpsResponse
 */
DescribeDefaultHttpsResponse Client::describeDefaultHttpsWithOptions(const DescribeDefaultHttpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the default SSL/TLS settings of a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeDefaultHttpsRequest
 * @return DescribeDefaultHttpsResponse
 */
DescribeDefaultHttpsResponse Client::describeDefaultHttps(const DescribeDefaultHttpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefaultHttpsWithOptions(request, runtime);
}

/**
 * @summary Queries a paginated list of protected objects that can be associated with a defense group.
 *
 * @param request DescribeDefenseGroupValidResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseGroupValidResourcesResponse
 */
DescribeDefenseGroupValidResourcesResponse Client::describeDefenseGroupValidResourcesWithOptions(const DescribeDefenseGroupValidResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries a paginated list of protected objects that can be associated with a defense group.
 *
 * @param request DescribeDefenseGroupValidResourcesRequest
 * @return DescribeDefenseGroupValidResourcesResponse
 */
DescribeDefenseGroupValidResourcesResponse Client::describeDefenseGroupValidResources(const DescribeDefenseGroupValidResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseGroupValidResourcesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a protected object.
 *
 * @param request DescribeDefenseResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseResourceResponse
 */
DescribeDefenseResourceResponse Client::describeDefenseResourceWithOptions(const DescribeDefenseResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Retrieves the details of a protected object.
 *
 * @param request DescribeDefenseResourceRequest
 * @return DescribeDefenseResourceResponse
 */
DescribeDefenseResourceResponse Client::describeDefenseResource(const DescribeDefenseResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseResourceWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a protected object group.
 *
 * @param request DescribeDefenseResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseResourceGroupResponse
 */
DescribeDefenseResourceGroupResponse Client::describeDefenseResourceGroupWithOptions(const DescribeDefenseResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Retrieves the details of a protected object group.
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
    query["GroupNameLike"] = request.getGroupNameLike();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Retrieves information about protected object groups using pagination.
 *
 * @param request DescribeDefenseResourceGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseResourceGroupsResponse
 */
DescribeDefenseResourceGroupsResponse Client::describeDefenseResourceGroupsWithOptions(const DescribeDefenseResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupNameLike()) {
    query["GroupNameLike"] = request.getGroupNameLike();
  }

  if (!!request.hasGroupNames()) {
    query["GroupNames"] = request.getGroupNames();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Retrieves information about protected object groups using pagination.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the asset owner account of protected objects in multi-account management scenarios.
 *
 * @param request DescribeDefenseResourceOwnerUidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseResourceOwnerUidResponse
 */
DescribeDefenseResourceOwnerUidResponse Client::describeDefenseResourceOwnerUidWithOptions(const DescribeDefenseResourceOwnerUidRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResourceNames()) {
    query["ResourceNames"] = request.getResourceNames();
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
 * @summary Queries the asset owner account of protected objects in multi-account management scenarios.
 *
 * @param request DescribeDefenseResourceOwnerUidRequest
 * @return DescribeDefenseResourceOwnerUidResponse
 */
DescribeDefenseResourceOwnerUidResponse Client::describeDefenseResourceOwnerUid(const DescribeDefenseResourceOwnerUidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseResourceOwnerUidWithOptions(request, runtime);
}

/**
 * @summary Queries the protection templates associated with a protected object or protected object group.
 *
 * @param request DescribeDefenseResourceTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseResourceTemplatesResponse
 */
DescribeDefenseResourceTemplatesResponse Client::describeDefenseResourceTemplatesWithOptions(const DescribeDefenseResourceTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
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
 * @summary Queries the protection templates associated with a protected object or protected object group.
 *
 * @param request DescribeDefenseResourceTemplatesRequest
 * @return DescribeDefenseResourceTemplatesResponse
 */
DescribeDefenseResourceTemplatesResponse Client::describeDefenseResourceTemplates(const DescribeDefenseResourceTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseResourceTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of protected objects.
 *
 * @param request DescribeDefenseResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseResourcesResponse
 */
DescribeDefenseResourcesResponse Client::describeDefenseResourcesWithOptions(const DescribeDefenseResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Queries a list of protected objects.
 *
 * @param request DescribeDefenseResourcesRequest
 * @return DescribeDefenseResourcesResponse
 */
DescribeDefenseResourcesResponse Client::describeDefenseResources(const DescribeDefenseResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseResourcesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified protection rule.
 *
 * @param request DescribeDefenseRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseRuleResponse
 */
DescribeDefenseRuleResponse Client::describeDefenseRuleWithOptions(const DescribeDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseType()) {
    query["DefenseType"] = request.getDefenseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Retrieves the details of a specified protection rule.
 *
 * @param request DescribeDefenseRuleRequest
 * @return DescribeDefenseRuleResponse
 */
DescribeDefenseRuleResponse Client::describeDefenseRule(const DescribeDefenseRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics of rules in a specified Web Application Firewall (WAF) protection module.
 *
 * @param request DescribeDefenseRuleStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseRuleStatisticsResponse
 */
DescribeDefenseRuleStatisticsResponse Client::describeDefenseRuleStatisticsWithOptions(const DescribeDefenseRuleStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFourthKey()) {
    query["FourthKey"] = request.getFourthKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPrimaryKey()) {
    query["PrimaryKey"] = request.getPrimaryKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasSecondaryKey()) {
    query["SecondaryKey"] = request.getSecondaryKey();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasThirdKey()) {
    query["ThirdKey"] = request.getThirdKey();
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
 * @summary Queries the statistics of rules in a specified Web Application Firewall (WAF) protection module.
 *
 * @param request DescribeDefenseRuleStatisticsRequest
 * @return DescribeDefenseRuleStatisticsResponse
 */
DescribeDefenseRuleStatisticsResponse Client::describeDefenseRuleStatistics(const DescribeDefenseRuleStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseRuleStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries a paginated list of protection rules.
 *
 * @param request DescribeDefenseRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseRulesResponse
 */
DescribeDefenseRulesResponse Client::describeDefenseRulesWithOptions(const DescribeDefenseRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseType()) {
    query["DefenseType"] = request.getDefenseType();
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

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
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
 * @summary Queries a paginated list of protection rules.
 *
 * @param request DescribeDefenseRulesRequest
 * @return DescribeDefenseRulesResponse
 */
DescribeDefenseRulesResponse Client::describeDefenseRules(const DescribeDefenseRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the protection configurations for a specific defense scenario.
 *
 * @param request DescribeDefenseSceneConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseSceneConfigResponse
 */
DescribeDefenseSceneConfigResponse Client::describeDefenseSceneConfigWithOptions(const DescribeDefenseSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigKey()) {
    query["ConfigKey"] = request.getConfigKey();
  }

  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.getDefenseScene();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the protection configurations for a specific defense scenario.
 *
 * @param request DescribeDefenseSceneConfigRequest
 * @return DescribeDefenseSceneConfigResponse
 */
DescribeDefenseSceneConfigResponse Client::describeDefenseSceneConfig(const DescribeDefenseSceneConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseSceneConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specific protection template.
 *
 * @param request DescribeDefenseTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseTemplateResponse
 */
DescribeDefenseTemplateResponse Client::describeDefenseTemplateWithOptions(const DescribeDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Retrieves the details of a specific protection template.
 *
 * @param request DescribeDefenseTemplateRequest
 * @return DescribeDefenseTemplateResponse
 */
DescribeDefenseTemplateResponse Client::describeDefenseTemplate(const DescribeDefenseTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the names of protected object groups that can be associated with a specific protection template.
 *
 * @param request DescribeDefenseTemplateValidGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseTemplateValidGroupsResponse
 */
DescribeDefenseTemplateValidGroupsResponse Client::describeDefenseTemplateValidGroupsWithOptions(const DescribeDefenseTemplateValidGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.getDefenseScene();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Queries the names of protected object groups that can be associated with a specific protection template.
 *
 * @param request DescribeDefenseTemplateValidGroupsRequest
 * @return DescribeDefenseTemplateValidGroupsResponse
 */
DescribeDefenseTemplateValidGroupsResponse Client::describeDefenseTemplateValidGroups(const DescribeDefenseTemplateValidGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseTemplateValidGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries a paginated list of protected objects that are valid for a specified protection template.
 *
 * @param request DescribeDefenseTemplateValidResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseTemplateValidResourcesResponse
 */
DescribeDefenseTemplateValidResourcesResponse Client::describeDefenseTemplateValidResourcesWithOptions(const DescribeDefenseTemplateValidResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.getDefenseScene();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Queries a paginated list of protected objects that are valid for a specified protection template.
 *
 * @param request DescribeDefenseTemplateValidResourcesRequest
 * @return DescribeDefenseTemplateValidResourcesResponse
 */
DescribeDefenseTemplateValidResourcesResponse Client::describeDefenseTemplateValidResources(const DescribeDefenseTemplateValidResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseTemplateValidResourcesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of protection templates.
 *
 * @param request DescribeDefenseTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseTemplatesResponse
 */
DescribeDefenseTemplatesResponse Client::describeDefenseTemplatesWithOptions(const DescribeDefenseTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.getDefenseScene();
  }

  if (!!request.hasDefenseSubScene()) {
    query["DefenseSubScene"] = request.getDefenseSubScene();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateIds()) {
    query["TemplateIds"] = request.getTemplateIds();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
 * @summary Retrieves a paginated list of protection templates.
 *
 * @param request DescribeDefenseTemplatesRequest
 * @return DescribeDefenseTemplatesResponse
 */
DescribeDefenseTemplatesResponse Client::describeDefenseTemplates(const DescribeDefenseTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseTemplatesWithOptions(request, runtime);
}

/**
 * @summary Verifies that the DNS record of a domain name is correct.
 *
 * @param request DescribeDomainDNSRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainDNSRecordResponse
 */
DescribeDomainDNSRecordResponse Client::describeDomainDNSRecordWithOptions(const DescribeDomainDNSRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Verifies that the DNS record of a domain name is correct.
 *
 * @param request DescribeDomainDNSRecordRequest
 * @return DescribeDomainDNSRecordResponse
 */
DescribeDomainDNSRecordResponse Client::describeDomainDNSRecord(const DescribeDomainDNSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainDNSRecordWithOptions(request, runtime);
}

/**
 * @summary Retrieves the access configuration details of a domain name onboarded to Web Application Firewall (WAF).
 *
 * @param request DescribeDomainDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainDetailResponse
 */
DescribeDomainDetailResponse Client::describeDomainDetailWithOptions(const DescribeDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Retrieves the access configuration details of a domain name onboarded to Web Application Firewall (WAF).
 *
 * @param request DescribeDomainDetailRequest
 * @return DescribeDomainDetailResponse
 */
DescribeDomainDetailResponse Client::describeDomainDetail(const DescribeDomainDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the ports used by all domain names that are added in CNAME record mode and hybrid cloud mode with public network disaster recovery enabled.
 *
 * @param request DescribeDomainUsedPortsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainUsedPortsResponse
 */
DescribeDomainUsedPortsResponse Client::describeDomainUsedPortsWithOptions(const DescribeDomainUsedPortsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the ports used by all domain names that are added in CNAME record mode and hybrid cloud mode with public network disaster recovery enabled.
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
    query["Backend"] = request.getBackend();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Queries the daily bills for WAF on-demand instances for the last 7 days.
 *
 * @param request DescribeElasticBillsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticBillsResponse
 */
DescribeElasticBillsResponse Client::describeElasticBillsWithOptions(const DescribeElasticBillsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeElasticBills"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElasticBillsResponse>();
}

/**
 * @summary Queries the daily bills for WAF on-demand instances for the last 7 days.
 *
 * @param request DescribeElasticBillsRequest
 * @return DescribeElasticBillsResponse
 */
DescribeElasticBillsResponse Client::describeElasticBills(const DescribeElasticBillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElasticBillsWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic statistics.
 *
 * @param request DescribeFlowChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFlowChartResponse
 */
DescribeFlowChartResponse Client::describeFlowChartWithOptions(const DescribeFlowChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
 * @summary Queries the traffic statistics.
 *
 * @param request DescribeFlowChartRequest
 * @return DescribeFlowChartResponse
 */
DescribeFlowChartResponse Client::describeFlowChart(const DescribeFlowChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFlowChartWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 protected objects by request count.
 *
 * @param request DescribeFlowTopResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFlowTopResourceResponse
 */
DescribeFlowTopResourceResponse Client::describeFlowTopResourceWithOptions(const DescribeFlowTopResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
 * @summary Queries the top 10 protected objects by request count.
 *
 * @param request DescribeFlowTopResourceRequest
 * @return DescribeFlowTopResourceResponse
 */
DescribeFlowTopResourceResponse Client::describeFlowTopResource(const DescribeFlowTopResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFlowTopResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 most requested URLs.
 *
 * @param request DescribeFlowTopUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFlowTopUrlResponse
 */
DescribeFlowTopUrlResponse Client::describeFlowTopUrlWithOptions(const DescribeFlowTopUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
 * @summary Queries the top 10 most requested URLs.
 *
 * @param request DescribeFlowTopUrlRequest
 * @return DescribeFlowTopUrlResponse
 */
DescribeFlowTopUrlResponse Client::describeFlowTopUrl(const DescribeFlowTopUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFlowTopUrlWithOptions(request, runtime);
}

/**
 * @summary Queries statistics information about assets detected by the basic API security feature.
 *
 * @param request DescribeFreeUserAssetCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFreeUserAssetCountResponse
 */
DescribeFreeUserAssetCountResponse Client::describeFreeUserAssetCountWithOptions(const DescribeFreeUserAssetCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries statistics information about assets detected by the basic API security feature.
 *
 * @param request DescribeFreeUserAssetCountRequest
 * @return DescribeFreeUserAssetCountResponse
 */
DescribeFreeUserAssetCountResponse Client::describeFreeUserAssetCount(const DescribeFreeUserAssetCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFreeUserAssetCountWithOptions(request, runtime);
}

/**
 * @summary Queries statistics about security events detected by basic API security checks.
 *
 * @param request DescribeFreeUserEventCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFreeUserEventCountResponse
 */
DescribeFreeUserEventCountResponse Client::describeFreeUserEventCountWithOptions(const DescribeFreeUserEventCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries statistics about security events detected by basic API security checks.
 *
 * @param request DescribeFreeUserEventCountRequest
 * @return DescribeFreeUserEventCountResponse
 */
DescribeFreeUserEventCountResponse Client::describeFreeUserEventCount(const DescribeFreeUserEventCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFreeUserEventCountWithOptions(request, runtime);
}

/**
 * @summary Queries the types of security events for basic API security detection.
 *
 * @param request DescribeFreeUserEventTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFreeUserEventTypesResponse
 */
DescribeFreeUserEventTypesResponse Client::describeFreeUserEventTypesWithOptions(const DescribeFreeUserEventTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the types of security events for basic API security detection.
 *
 * @param request DescribeFreeUserEventTypesRequest
 * @return DescribeFreeUserEventTypesResponse
 */
DescribeFreeUserEventTypesResponse Client::describeFreeUserEventTypes(const DescribeFreeUserEventTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFreeUserEventTypesWithOptions(request, runtime);
}

/**
 * @summary Queries security events detected by the basic API security scan.
 *
 * @param request DescribeFreeUserEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFreeUserEventsResponse
 */
DescribeFreeUserEventsResponse Client::describeFreeUserEventsWithOptions(const DescribeFreeUserEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries security events detected by the basic API security scan.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMid()) {
    query["Mid"] = request.getMid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Retrieves a hybrid cloud cluster rule.
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
 * @summary Retrieves a hybrid cloud cluster rule.
 *
 * @param request DescribeHybridCloudClusterRuleRequest
 * @return DescribeHybridCloudClusterRuleResponse
 */
DescribeHybridCloudClusterRuleResponse Client::describeHybridCloudClusterRule(const DescribeHybridCloudClusterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudClusterRuleWithOptions(request, runtime);
}

/**
 * @summary Cluster rules
 *
 * @param request DescribeHybridCloudClusterRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudClusterRulesResponse
 */
DescribeHybridCloudClusterRulesResponse Client::describeHybridCloudClusterRulesWithOptions(const DescribeHybridCloudClusterRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleContent()) {
    query["RuleContent"] = request.getRuleContent();
  }

  if (!!request.hasRuleMatchType()) {
    query["RuleMatchType"] = request.getRuleMatchType();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
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
 * @summary Cluster rules
 *
 * @param request DescribeHybridCloudClusterRulesRequest
 * @return DescribeHybridCloudClusterRulesResponse
 */
DescribeHybridCloudClusterRulesResponse Client::describeHybridCloudClusterRules(const DescribeHybridCloudClusterRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudClusterRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the servers in a hybrid cloud Web Application Firewall (WAF) cluster.
 *
 * @param request DescribeHybridCloudClusterServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudClusterServersResponse
 */
DescribeHybridCloudClusterServersResponse Client::describeHybridCloudClusterServersWithOptions(const DescribeHybridCloudClusterServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.getGroupType();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the servers in a hybrid cloud Web Application Firewall (WAF) cluster.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the Hybrid Cloud WAF node groups that are added to Web Application Firewall (WAF).
 *
 * @param request DescribeHybridCloudGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudGroupsResponse
 */
DescribeHybridCloudGroupsResponse Client::describeHybridCloudGroupsWithOptions(const DescribeHybridCloudGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterProxyType()) {
    query["ClusterProxyType"] = request.getClusterProxyType();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.getGroupType();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the Hybrid Cloud WAF node groups that are added to Web Application Firewall (WAF).
 *
 * @param request DescribeHybridCloudGroupsRequest
 * @return DescribeHybridCloudGroupsResponse
 */
DescribeHybridCloudGroupsResponse Client::describeHybridCloudGroups(const DescribeHybridCloudGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the status of applications on nodes in a hybrid cloud Web Application Firewall (WAF) cluster.
 *
 * @param request DescribeHybridCloudProcessMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudProcessMonitorResponse
 */
DescribeHybridCloudProcessMonitorResponse Client::describeHybridCloudProcessMonitorWithOptions(const DescribeHybridCloudProcessMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMid()) {
    query["Mid"] = request.getMid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the status of applications on nodes in a hybrid cloud Web Application Firewall (WAF) cluster.
 *
 * @param request DescribeHybridCloudProcessMonitorRequest
 * @return DescribeHybridCloudProcessMonitorResponse
 */
DescribeHybridCloudProcessMonitorResponse Client::describeHybridCloudProcessMonitor(const DescribeHybridCloudProcessMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudProcessMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries the count of protectable nodes that can be added to a hybrid cloud cluster.
 *
 * @param request DescribeHybridCloudProtectableCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudProtectableCountResponse
 */
DescribeHybridCloudProtectableCountResponse Client::describeHybridCloudProtectableCountWithOptions(const DescribeHybridCloudProtectableCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the count of protectable nodes that can be added to a hybrid cloud cluster.
 *
 * @param request DescribeHybridCloudProtectableCountRequest
 * @return DescribeHybridCloudProtectableCountResponse
 */
DescribeHybridCloudProtectableCountResponse Client::describeHybridCloudProtectableCount(const DescribeHybridCloudProtectableCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudProtectableCountWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a hybrid cloud domain name.
 *
 * @param request DescribeHybridCloudResourceDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudResourceDetailResponse
 */
DescribeHybridCloudResourceDetailResponse Client::describeHybridCloudResourceDetailWithOptions(const DescribeHybridCloudResourceDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackend()) {
    query["Backend"] = request.getBackend();
  }

  if (!!request.hasCnameEnabled()) {
    query["CnameEnabled"] = request.getCnameEnabled();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the details of a hybrid cloud domain name.
 *
 * @param request DescribeHybridCloudResourceDetailRequest
 * @return DescribeHybridCloudResourceDetailResponse
 */
DescribeHybridCloudResourceDetailResponse Client::describeHybridCloudResourceDetail(const DescribeHybridCloudResourceDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudResourceDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the domain names that are added to Web Application Firewall (WAF) in hybrid cloud mode.
 *
 * @param request DescribeHybridCloudResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudResourcesResponse
 */
DescribeHybridCloudResourcesResponse Client::describeHybridCloudResourcesWithOptions(const DescribeHybridCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackend()) {
    query["Backend"] = request.getBackend();
  }

  if (!!request.hasCnameEnabled()) {
    query["CnameEnabled"] = request.getCnameEnabled();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the domain names that are added to Web Application Firewall (WAF) in hybrid cloud mode.
 *
 * @param request DescribeHybridCloudResourcesRequest
 * @return DescribeHybridCloudResourcesResponse
 */
DescribeHybridCloudResourcesResponse Client::describeHybridCloudResources(const DescribeHybridCloudResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the hybrid cloud SDK servers that are managed by a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeHybridCloudSdkServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudSdkServersResponse
 */
DescribeHybridCloudSdkServersResponse Client::describeHybridCloudSdkServersWithOptions(const DescribeHybridCloudSdkServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the hybrid cloud SDK servers that are managed by a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeHybridCloudSdkServersRequest
 * @return DescribeHybridCloudSdkServersResponse
 */
DescribeHybridCloudSdkServersResponse Client::describeHybridCloudSdkServers(const DescribeHybridCloudSdkServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudSdkServersWithOptions(request, runtime);
}

/**
 * @summary Queries hybrid cloud server regions, including carriers, continents, and cities.
 *
 * @param request DescribeHybridCloudServerRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudServerRegionsResponse
 */
DescribeHybridCloudServerRegionsResponse Client::describeHybridCloudServerRegionsWithOptions(const DescribeHybridCloudServerRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRegionType()) {
    query["RegionType"] = request.getRegionType();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries hybrid cloud server regions, including carriers, continents, and cities.
 *
 * @param request DescribeHybridCloudServerRegionsRequest
 * @return DescribeHybridCloudServerRegionsResponse
 */
DescribeHybridCloudServerRegionsResponse Client::describeHybridCloudServerRegions(const DescribeHybridCloudServerRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudServerRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the regions that are supported for hybrid cloud access in Web Application Firewall (WAF).
 *
 * @param request DescribeHybridCloudSupportRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudSupportRegionsResponse
 */
DescribeHybridCloudSupportRegionsResponse Client::describeHybridCloudSupportRegionsWithOptions(const DescribeHybridCloudSupportRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the regions that are supported for hybrid cloud access in Web Application Firewall (WAF).
 *
 * @param request DescribeHybridCloudSupportRegionsRequest
 * @return DescribeHybridCloudSupportRegionsResponse
 */
DescribeHybridCloudSupportRegionsResponse Client::describeHybridCloudSupportRegions(const DescribeHybridCloudSupportRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudSupportRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of unassigned servers in a hybrid cloud cluster.
 *
 * @param request DescribeHybridCloudUnassignedMachinesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudUnassignedMachinesResponse
 */
DescribeHybridCloudUnassignedMachinesResponse Client::describeHybridCloudUnassignedMachinesWithOptions(const DescribeHybridCloudUnassignedMachinesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the list of unassigned servers in a hybrid cloud cluster.
 *
 * @param request DescribeHybridCloudUnassignedMachinesRequest
 * @return DescribeHybridCloudUnassignedMachinesResponse
 */
DescribeHybridCloudUnassignedMachinesResponse Client::describeHybridCloudUnassignedMachines(const DescribeHybridCloudUnassignedMachinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudUnassignedMachinesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of unsupported ports for a hybrid cloud.
 *
 * @param request DescribeHybridCloudUnsupportPortsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudUnsupportPortsResponse
 */
DescribeHybridCloudUnsupportPortsResponse Client::describeHybridCloudUnsupportPortsWithOptions(const DescribeHybridCloudUnsupportPortsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the list of unsupported ports for a hybrid cloud.
 *
 * @param request DescribeHybridCloudUnsupportPortsRequest
 * @return DescribeHybridCloudUnsupportPortsResponse
 */
DescribeHybridCloudUnsupportPortsResponse Client::describeHybridCloudUnsupportPorts(const DescribeHybridCloudUnsupportPortsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudUnsupportPortsWithOptions(request, runtime);
}

/**
 * @summary Queries the available HTTP and HTTPS port ranges for hybrid cloud access.
 *
 * @param request DescribeHybridCloudUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridCloudUserResponse
 */
DescribeHybridCloudUserResponse Client::describeHybridCloudUserWithOptions(const DescribeHybridCloudUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the available HTTP and HTTPS port ranges for hybrid cloud access.
 *
 * @param request DescribeHybridCloudUserRequest
 * @return DescribeHybridCloudUserResponse
 */
DescribeHybridCloudUserResponse Client::describeHybridCloudUser(const DescribeHybridCloudUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridCloudUserWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of the Web Application Firewall (WAF) instance in your Alibaba Cloud account.
 *
 * @param request DescribeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstanceWithOptions(const DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Retrieves the details of the Web Application Firewall (WAF) instance in your Alibaba Cloud account.
 *
 * @param request DescribeInstanceRequest
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstance(const DescribeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceWithOptions(request, runtime);
}

/**
 * @summary Retrieves supported countries and regions outside China for IP-based region blacklist.
 *
 * @param request DescribeIpAbroadCountryInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIpAbroadCountryInfosResponse
 */
DescribeIpAbroadCountryInfosResponse Client::describeIpAbroadCountryInfosWithOptions(const DescribeIpAbroadCountryInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbroadRegion()) {
    query["AbroadRegion"] = request.getAbroadRegion();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Retrieves supported countries and regions outside China for IP-based region blacklist.
 *
 * @param request DescribeIpAbroadCountryInfosRequest
 * @return DescribeIpAbroadCountryInfosResponse
 */
DescribeIpAbroadCountryInfosResponse Client::describeIpAbroadCountryInfos(const DescribeIpAbroadCountryInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIpAbroadCountryInfosWithOptions(request, runtime);
}

/**
 * @summary Queries a single log delivery configuration for a hybrid cloud.
 *
 * @param request DescribeLogDeliveryConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogDeliveryConfigResponse
 */
DescribeLogDeliveryConfigResponse Client::describeLogDeliveryConfigWithOptions(const DescribeLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryName()) {
    query["DeliveryName"] = request.getDeliveryName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries a single log delivery configuration for a hybrid cloud.
 *
 * @param request DescribeLogDeliveryConfigRequest
 * @return DescribeLogDeliveryConfigResponse
 */
DescribeLogDeliveryConfigResponse Client::describeLogDeliveryConfig(const DescribeLogDeliveryConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogDeliveryConfigWithOptions(request, runtime);
}

/**
 * @summary Queries all log delivery configurations of a Web Application Firewall (WAF) instance for hybrid cloud.
 *
 * @param request DescribeLogDeliveryConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogDeliveryConfigsResponse
 */
DescribeLogDeliveryConfigsResponse Client::describeLogDeliveryConfigsWithOptions(const DescribeLogDeliveryConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryNameLike()) {
    query["DeliveryNameLike"] = request.getDeliveryNameLike();
  }

  if (!!request.hasDeliveryType()) {
    query["DeliveryType"] = request.getDeliveryType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries all log delivery configurations of a Web Application Firewall (WAF) instance for hybrid cloud.
 *
 * @param request DescribeLogDeliveryConfigsRequest
 * @return DescribeLogDeliveryConfigsResponse
 */
DescribeLogDeliveryConfigsResponse Client::describeLogDeliveryConfigs(const DescribeLogDeliveryConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogDeliveryConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries the IP address blacklist for critical event protection in a paginated format.
 *
 * @param request DescribeMajorProtectionBlackIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMajorProtectionBlackIpsResponse
 */
DescribeMajorProtectionBlackIpsResponse Client::describeMajorProtectionBlackIpsWithOptions(const DescribeMajorProtectionBlackIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIpLike()) {
    query["IpLike"] = request.getIpLike();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Queries the IP address blacklist for critical event protection in a paginated format.
 *
 * @param request DescribeMajorProtectionBlackIpsRequest
 * @return DescribeMajorProtectionBlackIpsResponse
 */
DescribeMajorProtectionBlackIpsResponse Client::describeMajorProtectionBlackIps(const DescribeMajorProtectionBlackIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMajorProtectionBlackIpsWithOptions(request, runtime);
}

/**
 * @summary Retrieves all member accounts managed by the WAF multi-account management feature.
 *
 * @param request DescribeMemberAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMemberAccountsResponse
 */
DescribeMemberAccountsResponse Client::describeMemberAccountsWithOptions(const DescribeMemberAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountStatus()) {
    query["AccountStatus"] = request.getAccountStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Retrieves all member accounts managed by the WAF multi-account management feature.
 *
 * @param request DescribeMemberAccountsRequest
 * @return DescribeMemberAccountsResponse
 */
DescribeMemberAccountsResponse Client::describeMemberAccounts(const DescribeMemberAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMemberAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries the time series statistics for all traffic. This includes malicious and normal business requests.
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
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.getFilterShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.getMetric();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the time series statistics for all traffic. This includes malicious and normal business requests.
 *
 * @param request DescribeNetworkFlowTimeSeriesMetricRequest
 * @return DescribeNetworkFlowTimeSeriesMetricResponse
 */
DescribeNetworkFlowTimeSeriesMetricResponse Client::describeNetworkFlowTimeSeriesMetric(const DescribeNetworkFlowTimeSeriesMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkFlowTimeSeriesMetricWithOptions(request, runtime);
}

/**
 * @summary Queries the top N statistics for all traffic that passes through Web Application Firewall (WAF), including malicious and normal service requests. The results are aggregated by different dimensions and sorted in descending order.
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
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.getFilterShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.getMetric();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the top N statistics for all traffic that passes through Web Application Firewall (WAF), including malicious and normal service requests. The results are aggregated by different dimensions and sorted in descending order.
 *
 * @param request DescribeNetworkFlowTopNMetricRequest
 * @return DescribeNetworkFlowTopNMetricResponse
 */
DescribeNetworkFlowTopNMetricResponse Client::describeNetworkFlowTopNMetric(const DescribeNetworkFlowTopNMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkFlowTopNMetricWithOptions(request, runtime);
}

/**
 * @summary Queries the protection pause status of a Web Application Firewall (WAF) instance.
 *
 * @param request DescribePauseProtectionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePauseProtectionStatusResponse
 */
DescribePauseProtectionStatusResponse Client::describePauseProtectionStatusWithOptions(const DescribePauseProtectionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the protection pause status of a Web Application Firewall (WAF) instance.
 *
 * @param request DescribePauseProtectionStatusRequest
 * @return DescribePauseProtectionStatusResponse
 */
DescribePauseProtectionStatusResponse Client::describePauseProtectionStatus(const DescribePauseProtectionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePauseProtectionStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the trend of queries per second (QPS).
 *
 * @param request DescribePeakTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePeakTrendResponse
 */
DescribePeakTrendResponse Client::describePeakTrendWithOptions(const DescribePeakTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
 * @summary Queries the trend of queries per second (QPS).
 *
 * @param request DescribePeakTrendRequest
 * @return DescribePeakTrendResponse
 */
DescribePeakTrendResponse Client::describePeakTrend(const DescribePeakTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePeakTrendWithOptions(request, runtime);
}

/**
 * @summary Retrieves the enabled proof of concept (POC) feature trials.
 *
 * @param request DescribePocFunctionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePocFunctionsResponse
 */
DescribePocFunctionsResponse Client::describePocFunctionsWithOptions(const DescribePocFunctionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Retrieves the enabled proof of concept (POC) feature trials.
 *
 * @param request DescribePocFunctionsRequest
 * @return DescribePocFunctionsResponse
 */
DescribePocFunctionsResponse Client::describePocFunctions(const DescribePocFunctionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePocFunctionsWithOptions(request, runtime);
}

/**
 * @summary Queries burstable pay-as-you-go charges for a WAF subscription instance, such as burstable QPS.
 *
 * @param request DescribePrepayDailyBillsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePrepayDailyBillsResponse
 */
DescribePrepayDailyBillsResponse Client::describePrepayDailyBillsWithOptions(const DescribePrepayDailyBillsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrepayDailyBills"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePrepayDailyBillsResponse>();
}

/**
 * @summary Queries burstable pay-as-you-go charges for a WAF subscription instance, such as burstable QPS.
 *
 * @param request DescribePrepayDailyBillsRequest
 * @return DescribePrepayDailyBillsResponse
 */
DescribePrepayDailyBillsResponse Client::describePrepayDailyBills(const DescribePrepayDailyBillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrepayDailyBillsWithOptions(request, runtime);
}

/**
 * @summary Queries synchronized cloud service instances.
 *
 * @param request DescribeProductInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductInstancesResponse
 */
DescribeProductInstancesResponse Client::describeProductInstancesWithOptions(const DescribeProductInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerUserId()) {
    query["OwnerUserId"] = request.getOwnerUserId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceInstanceAccessStatus()) {
    query["ResourceInstanceAccessStatus"] = request.getResourceInstanceAccessStatus();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.getResourceInstanceId();
  }

  if (!!request.hasResourceInstanceIp()) {
    query["ResourceInstanceIp"] = request.getResourceInstanceIp();
  }

  if (!!request.hasResourceInstanceName()) {
    query["ResourceInstanceName"] = request.getResourceInstanceName();
  }

  if (!!request.hasResourceIp()) {
    query["ResourceIp"] = request.getResourceIp();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.getResourceName();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.getResourceProduct();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
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
 * @summary Queries synchronized cloud service instances.
 *
 * @param request DescribeProductInstancesRequest
 * @return DescribeProductInstancesResponse
 */
DescribeProductInstancesResponse Client::describeProductInstances(const DescribeProductInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProductInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries penalties for domain names added to Web Application Firewall (WAF) without an Internet Content Provider (ICP) filing.
 *
 * @param request DescribePunishedDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePunishedDomainsResponse
 */
DescribePunishedDomainsResponse Client::describePunishedDomainsWithOptions(const DescribePunishedDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.getDomains();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPunishType()) {
    query["PunishType"] = request.getPunishType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries penalties for domain names added to Web Application Firewall (WAF) without an Internet Content Provider (ICP) filing.
 *
 * @param request DescribePunishedDomainsRequest
 * @return DescribePunishedDomainsResponse
 */
DescribePunishedDomainsResponse Client::describePunishedDomains(const DescribePunishedDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePunishedDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries a paginated list of associated protection rules.
 *
 * @param request DescribeRelatedDefenseRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRelatedDefenseRulesResponse
 */
DescribeRelatedDefenseRulesResponse Client::describeRelatedDefenseRulesWithOptions(const DescribeRelatedDefenseRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.getDefenseScene();
  }

  if (!!request.hasDefenseType()) {
    query["DefenseType"] = request.getDefenseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRelatedDefenseRules"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRelatedDefenseRulesResponse>();
}

/**
 * @summary Queries a paginated list of associated protection rules.
 *
 * @param request DescribeRelatedDefenseRulesRequest
 * @return DescribeRelatedDefenseRulesResponse
 */
DescribeRelatedDefenseRulesResponse Client::describeRelatedDefenseRules(const DescribeRelatedDefenseRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRelatedDefenseRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the certificates of a cloud product instance. This operation is available only in multi-account scenarios and returns the certificates of both the delegated administrator and the member that owns the instance. For example, if user A is a delegated administrator with cert1 and the instance lb-xx-1 belongs to member B who has cert2, a query for the instance lb-xx-1 returns both cert1 and cert2.
 *
 * @param request DescribeResourceInstanceCertsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceInstanceCertsResponse
 */
DescribeResourceInstanceCertsResponse Client::describeResourceInstanceCertsWithOptions(const DescribeResourceInstanceCertsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.getResourceInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the certificates of a cloud product instance. This operation is available only in multi-account scenarios and returns the certificates of both the delegated administrator and the member that owns the instance. For example, if user A is a delegated administrator with cert1 and the instance lb-xx-1 belongs to member B who has cert2, a query for the instance lb-xx-1 returns both cert1 and cert2.
 *
 * @param request DescribeResourceInstanceCertsRequest
 * @return DescribeResourceInstanceCertsResponse
 */
DescribeResourceInstanceCertsResponse Client::describeResourceInstanceCerts(const DescribeResourceInstanceCertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceInstanceCertsWithOptions(request, runtime);
}

/**
 * @summary Queries the log delivery status for protected objects.
 *
 * @param request DescribeResourceLogDeliveryStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceLogDeliveryStatusResponse
 */
DescribeResourceLogDeliveryStatusResponse Client::describeResourceLogDeliveryStatusWithOptions(const DescribeResourceLogDeliveryStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.getResources();
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
 * @summary Queries the log delivery status for protected objects.
 *
 * @param request DescribeResourceLogDeliveryStatusRequest
 * @return DescribeResourceLogDeliveryStatusResponse
 */
DescribeResourceLogDeliveryStatusResponse Client::describeResourceLogDeliveryStatus(const DescribeResourceLogDeliveryStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceLogDeliveryStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the log field configuration for a protected object.
 *
 * @param request DescribeResourceLogFieldConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceLogFieldConfigResponse
 */
DescribeResourceLogFieldConfigResponse Client::describeResourceLogFieldConfigWithOptions(const DescribeResourceLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryType()) {
    query["DeliveryType"] = request.getDeliveryType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the log field configuration for a protected object.
 *
 * @param request DescribeResourceLogFieldConfigRequest
 * @return DescribeResourceLogFieldConfigResponse
 */
DescribeResourceLogFieldConfigResponse Client::describeResourceLogFieldConfig(const DescribeResourceLogFieldConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceLogFieldConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the log collection status of protected objects in a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeResourceLogStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceLogStatusResponse
 */
DescribeResourceLogStatusResponse Client::describeResourceLogStatusWithOptions(const DescribeResourceLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.getResources();
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
 * @summary Queries the log collection status of protected objects in a Web Application Firewall (WAF) instance.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.getResourceInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the region IDs of cloud service resources that can be added to Web Application Firewall (WAF) by using the SDK.
 *
 * @param request DescribeResourceRegionIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceRegionIdResponse
 */
DescribeResourceRegionIdResponse Client::describeResourceRegionIdWithOptions(const DescribeResourceRegionIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the region IDs of cloud service resources that can be added to Web Application Firewall (WAF) by using the SDK.
 *
 * @param request DescribeResourceRegionIdRequest
 * @return DescribeResourceRegionIdResponse
 */
DescribeResourceRegionIdResponse Client::describeResourceRegionId(const DescribeResourceRegionIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceRegionIdWithOptions(request, runtime);
}

/**
 * @summary Queries the list of regions supported by cloud native mode, primarily for CLB and ECS products.
 *
 * @param request DescribeResourceSupportRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceSupportRegionsResponse
 */
DescribeResourceSupportRegionsResponse Client::describeResourceSupportRegionsWithOptions(const DescribeResourceSupportRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.getResourceProduct();
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
 * @summary Queries the list of regions supported by cloud native mode, primarily for CLB and ECS products.
 *
 * @param request DescribeResourceSupportRegionsRequest
 * @return DescribeResourceSupportRegionsResponse
 */
DescribeResourceSupportRegionsResponse Client::describeResourceSupportRegions(const DescribeResourceSupportRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceSupportRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the trend of abnormal response codes, such as 5xx, 405, 499, 302, and 444, that are returned by Web Application Firewall (WAF) to clients or by origin servers to WAF.
 *
 * @param request DescribeResponseCodeTrendGraphRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResponseCodeTrendGraphResponse
 */
DescribeResponseCodeTrendGraphResponse Client::describeResponseCodeTrendGraphWithOptions(const DescribeResponseCodeTrendGraphRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Queries the trend of abnormal response codes, such as 5xx, 405, 499, 302, and 444, that are returned by Web Application Firewall (WAF) to clients or by origin servers to WAF.
 *
 * @param request DescribeResponseCodeTrendGraphRequest
 * @return DescribeResponseCodeTrendGraphResponse
 */
DescribeResponseCodeTrendGraphResponse Client::describeResponseCodeTrendGraph(const DescribeResponseCodeTrendGraphRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResponseCodeTrendGraphWithOptions(request, runtime);
}

/**
 * @summary Queries the authorization status of the service-linked role for Web Application Firewall (WAF).
 *
 * @param request DescribeRoleAuthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRoleAuthStatusResponse
 */
DescribeRoleAuthStatusResponse Client::describeRoleAuthStatusWithOptions(const DescribeRoleAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the authorization status of the service-linked role for Web Application Firewall (WAF).
 *
 * @param request DescribeRoleAuthStatusRequest
 * @return DescribeRoleAuthStatusResponse
 */
DescribeRoleAuthStatusResponse Client::describeRoleAuthStatus(const DescribeRoleAuthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRoleAuthStatusWithOptions(request, runtime);
}

/**
 * @summary Queries a paginated list of regular expression rule groups.
 *
 * @param request DescribeRuleGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleGroupsResponse
 */
DescribeRuleGroupsResponse Client::describeRuleGroupsWithOptions(const DescribeRuleGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasSearchType()) {
    query["SearchType"] = request.getSearchType();
  }

  if (!!request.hasSearchValue()) {
    query["SearchValue"] = request.getSearchValue();
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
 * @summary Queries a paginated list of regular expression rule groups.
 *
 * @param request DescribeRuleGroupsRequest
 * @return DescribeRuleGroupsResponse
 */
DescribeRuleGroupsResponse Client::describeRuleGroups(const DescribeRuleGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 source IP addresses from which the most attacks originated.
 *
 * @param request DescribeRuleHitsTopClientIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleHitsTopClientIpResponse
 */
DescribeRuleHitsTopClientIpResponse Client::describeRuleHitsTopClientIpWithOptions(const DescribeRuleHitsTopClientIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
 * @summary Queries the top 10 source IP addresses from which the most attacks originated.
 *
 * @param request DescribeRuleHitsTopClientIpRequest
 * @return DescribeRuleHitsTopClientIpResponse
 */
DescribeRuleHitsTopClientIpResponse Client::describeRuleHitsTopClientIp(const DescribeRuleHitsTopClientIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleHitsTopClientIpWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 protected objects that triggered protection rules most frequently.
 *
 * @param request DescribeRuleHitsTopResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleHitsTopResourceResponse
 */
DescribeRuleHitsTopResourceResponse Client::describeRuleHitsTopResourceWithOptions(const DescribeRuleHitsTopResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
 * @summary Queries the top 10 protected objects that triggered protection rules most frequently.
 *
 * @param request DescribeRuleHitsTopResourceRequest
 * @return DescribeRuleHitsTopResourceResponse
 */
DescribeRuleHitsTopResourceResponse Client::describeRuleHitsTopResource(const DescribeRuleHitsTopResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleHitsTopResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 rule IDs that are triggered most frequently.
 *
 * @param request DescribeRuleHitsTopRuleIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleHitsTopRuleIdResponse
 */
DescribeRuleHitsTopRuleIdResponse Client::describeRuleHitsTopRuleIdWithOptions(const DescribeRuleHitsTopRuleIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsGroupResource()) {
    query["IsGroupResource"] = request.getIsGroupResource();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
 * @summary Queries the top 10 rule IDs that are triggered most frequently.
 *
 * @param request DescribeRuleHitsTopRuleIdRequest
 * @return DescribeRuleHitsTopRuleIdResponse
 */
DescribeRuleHitsTopRuleIdResponse Client::describeRuleHitsTopRuleId(const DescribeRuleHitsTopRuleIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleHitsTopRuleIdWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 most frequently triggered protection rule types.
 *
 * @param request DescribeRuleHitsTopTuleTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleHitsTopTuleTypeResponse
 */
DescribeRuleHitsTopTuleTypeResponse Client::describeRuleHitsTopTuleTypeWithOptions(const DescribeRuleHitsTopTuleTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
 * @summary Queries the top 10 most frequently triggered protection rule types.
 *
 * @param request DescribeRuleHitsTopTuleTypeRequest
 * @return DescribeRuleHitsTopTuleTypeResponse
 */
DescribeRuleHitsTopTuleTypeResponse Client::describeRuleHitsTopTuleType(const DescribeRuleHitsTopTuleTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleHitsTopTuleTypeWithOptions(request, runtime);
}

/**
 * @summary Displays the top 10 User-Agents by number of attacks.
 *
 * @param request DescribeRuleHitsTopUaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleHitsTopUaResponse
 */
DescribeRuleHitsTopUaResponse Client::describeRuleHitsTopUaWithOptions(const DescribeRuleHitsTopUaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
 * @summary Displays the top 10 User-Agents by number of attacks.
 *
 * @param request DescribeRuleHitsTopUaRequest
 * @return DescribeRuleHitsTopUaResponse
 */
DescribeRuleHitsTopUaResponse Client::describeRuleHitsTopUa(const DescribeRuleHitsTopUaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleHitsTopUaWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 URLs that trigger protection rules most frequently.
 *
 * @param request DescribeRuleHitsTopUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleHitsTopUrlResponse
 */
DescribeRuleHitsTopUrlResponse Client::describeRuleHitsTopUrlWithOptions(const DescribeRuleHitsTopUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
 * @summary Queries the top 10 URLs that trigger protection rules most frequently.
 *
 * @param request DescribeRuleHitsTopUrlRequest
 * @return DescribeRuleHitsTopUrlResponse
 */
DescribeRuleHitsTopUrlResponse Client::describeRuleHitsTopUrl(const DescribeRuleHitsTopUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleHitsTopUrlWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed logs of attack traffic. Each log entry contains the details of a request that matched a protection rule.
 *
 * @description Attack traffic refers to requests that hit a rule and are identified as threats. The following three types of requests are not included:
 * - Requests that hit a whitelist rule.
 * - Requests that hit a bot rule whose action is set to Mark for Origin Fetch.
 * - Requests that hit a rule whose action is set to Dynamic Token, Slider, Strict Slider, or JS Challenge, but are allowed because the user passed the verification.
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
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.getFilterShrink();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the detailed logs of attack traffic. Each log entry contains the details of a request that matched a protection rule.
 *
 * @description Attack traffic refers to requests that hit a rule and are identified as threats. The following three types of requests are not included:
 * - Requests that hit a whitelist rule.
 * - Requests that hit a bot rule whose action is set to Mark for Origin Fetch.
 * - Requests that hit a rule whose action is set to Dynamic Token, Slider, Strict Slider, or JS Challenge, but are allowed because the user passed the verification.
 *
 * @param request DescribeSecurityEventLogsRequest
 * @return DescribeSecurityEventLogsResponse
 */
DescribeSecurityEventLogsResponse Client::describeSecurityEventLogs(const DescribeSecurityEventLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityEventLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the time series data of attack traffic. Attack requests are requests that hit a rule and are identified as a threat.
 *
 * @description Attack traffic refers to requests that hit a rule and are identified as a threat. The following data is excluded:
 * - Requests that hit a whitelist rule.
 * - Requests that hit a bot rule where the rule action is "Mark for origin fetch".
 * - Requests that hit a rule with the action "Dynamic Token", "Slider", "Strict Slider", or "JS Challenge", but are allowed because the user passed the verification.
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
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.getFilterShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.getMetric();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the time series data of attack traffic. Attack requests are requests that hit a rule and are identified as a threat.
 *
 * @description Attack traffic refers to requests that hit a rule and are identified as a threat. The following data is excluded:
 * - Requests that hit a whitelist rule.
 * - Requests that hit a bot rule where the rule action is "Mark for origin fetch".
 * - Requests that hit a rule with the action "Dynamic Token", "Slider", "Strict Slider", or "JS Challenge", but are allowed because the user passed the verification.
 *
 * @param request DescribeSecurityEventTimeSeriesMetricRequest
 * @return DescribeSecurityEventTimeSeriesMetricResponse
 */
DescribeSecurityEventTimeSeriesMetricResponse Client::describeSecurityEventTimeSeriesMetric(const DescribeSecurityEventTimeSeriesMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityEventTimeSeriesMetricWithOptions(request, runtime);
}

/**
 * @summary Queries the top N statistics for attack traffic. Attack traffic is aggregated by a specified dimension, sorted, and the top N results are returned.
 *
 * @description Attack traffic refers to requests that hit a rule and are identified as a threat. The following types of requests are not included in the statistics:
 * - Requests that hit a whitelist rule.
 * - Requests that hit a bot rule with the action set to Tag.
 * - Requests that hit a rule with the action set to Dynamic Token, Slider, Strict Slider, or JS Challenge, and are allowed after the user passes verification.
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
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.getFilterShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.getMetric();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the top N statistics for attack traffic. Attack traffic is aggregated by a specified dimension, sorted, and the top N results are returned.
 *
 * @description Attack traffic refers to requests that hit a rule and are identified as a threat. The following types of requests are not included in the statistics:
 * - Requests that hit a whitelist rule.
 * - Requests that hit a bot rule with the action set to Tag.
 * - Requests that hit a rule with the action set to Dynamic Token, Slider, Strict Slider, or JS Challenge, and are allowed after the user passes verification.
 *
 * @param request DescribeSecurityEventTopNMetricRequest
 * @return DescribeSecurityEventTopNMetricResponse
 */
DescribeSecurityEventTopNMetricResponse Client::describeSecurityEventTopNMetric(const DescribeSecurityEventTopNMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityEventTopNMetricWithOptions(request, runtime);
}

/**
 * @summary Queries statistics for domain names and APIs that handle personal information.
 *
 * @param request DescribeSensitiveApiStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveApiStatisticResponse
 */
DescribeSensitiveApiStatisticResponse Client::describeSensitiveApiStatisticWithOptions(const DescribeSensitiveApiStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMatchedHost()) {
    query["MatchedHost"] = request.getMatchedHost();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Queries statistics for domain names and APIs that handle personal information.
 *
 * @param request DescribeSensitiveApiStatisticRequest
 * @return DescribeSensitiveApiStatisticResponse
 */
DescribeSensitiveApiStatisticResponse Client::describeSensitiveApiStatistic(const DescribeSensitiveApiStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveApiStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance detection results for API security.
 *
 * @param request DescribeSensitiveDetectionResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveDetectionResultResponse
 */
DescribeSensitiveDetectionResultResponse Client::describeSensitiveDetectionResultWithOptions(const DescribeSensitiveDetectionResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the compliance detection results for API security.
 *
 * @param request DescribeSensitiveDetectionResultRequest
 * @return DescribeSensitiveDetectionResultResponse
 */
DescribeSensitiveDetectionResultResponse Client::describeSensitiveDetectionResult(const DescribeSensitiveDetectionResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveDetectionResultWithOptions(request, runtime);
}

/**
 * @summary Queries the distribution of outbound traffic that contains personal information.
 *
 * @param request DescribeSensitiveOutboundDistributionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveOutboundDistributionResponse
 */
DescribeSensitiveOutboundDistributionResponse Client::describeSensitiveOutboundDistributionWithOptions(const DescribeSensitiveOutboundDistributionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the distribution of outbound traffic that contains personal information.
 *
 * @param request DescribeSensitiveOutboundDistributionRequest
 * @return DescribeSensitiveOutboundDistributionResponse
 */
DescribeSensitiveOutboundDistributionResponse Client::describeSensitiveOutboundDistribution(const DescribeSensitiveOutboundDistributionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveOutboundDistributionWithOptions(request, runtime);
}

/**
 * @summary Queries statistics about outbound transfers of personal information.
 *
 * @param request DescribeSensitiveOutboundStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveOutboundStatisticResponse
 */
DescribeSensitiveOutboundStatisticResponse Client::describeSensitiveOutboundStatisticWithOptions(const DescribeSensitiveOutboundStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDetectionResult()) {
    query["DetectionResult"] = request.getDetectionResult();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderKey()) {
    query["OrderKey"] = request.getOrderKey();
  }

  if (!!request.hasOrderWay()) {
    query["OrderWay"] = request.getOrderWay();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasSensitiveCode()) {
    query["SensitiveCode"] = request.getSensitiveCode();
  }

  if (!!request.hasSensitiveLevel()) {
    query["SensitiveLevel"] = request.getSensitiveLevel();
  }

  if (!!request.hasSensitiveType()) {
    query["SensitiveType"] = request.getSensitiveType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries statistics about outbound transfers of personal information.
 *
 * @param request DescribeSensitiveOutboundStatisticRequest
 * @return DescribeSensitiveOutboundStatisticResponse
 */
DescribeSensitiveOutboundStatisticResponse Client::describeSensitiveOutboundStatistic(const DescribeSensitiveOutboundStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveOutboundStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the trend of sensitive outbound data detected by Web Application Firewall (WAF).
 *
 * @param request DescribeSensitiveOutboundTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveOutboundTrendResponse
 */
DescribeSensitiveOutboundTrendResponse Client::describeSensitiveOutboundTrendWithOptions(const DescribeSensitiveOutboundTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the trend of sensitive outbound data detected by Web Application Firewall (WAF).
 *
 * @param request DescribeSensitiveOutboundTrendRequest
 * @return DescribeSensitiveOutboundTrendResponse
 */
DescribeSensitiveOutboundTrendResponse Client::describeSensitiveOutboundTrend(const DescribeSensitiveOutboundTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveOutboundTrendWithOptions(request, runtime);
}

/**
 * @summary Queries access logs for sensitive data.
 *
 * @param request DescribeSensitiveRequestLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveRequestLogResponse
 */
DescribeSensitiveRequestLogResponse Client::describeSensitiveRequestLogWithOptions(const DescribeSensitiveRequestLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasApiFormat()) {
    query["ApiFormat"] = request.getApiFormat();
  }

  if (!!request.hasClientIP()) {
    query["ClientIP"] = request.getClientIP();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMatchedHost()) {
    query["MatchedHost"] = request.getMatchedHost();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasSensitiveCode()) {
    query["SensitiveCode"] = request.getSensitiveCode();
  }

  if (!!request.hasSensitiveData()) {
    query["SensitiveData"] = request.getSensitiveData();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries access logs for sensitive data.
 *
 * @param request DescribeSensitiveRequestLogRequest
 * @return DescribeSensitiveRequestLogResponse
 */
DescribeSensitiveRequestLogResponse Client::describeSensitiveRequestLog(const DescribeSensitiveRequestLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveRequestLogWithOptions(request, runtime);
}

/**
 * @summary Queries the results of sensitive data tracing.
 *
 * @param request DescribeSensitiveRequestsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveRequestsResponse
 */
DescribeSensitiveRequestsResponse Client::describeSensitiveRequestsWithOptions(const DescribeSensitiveRequestsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasSensitiveCode()) {
    query["SensitiveCode"] = request.getSensitiveCode();
  }

  if (!!request.hasSensitiveData()) {
    query["SensitiveData"] = request.getSensitiveData();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the results of sensitive data tracing.
 *
 * @param request DescribeSensitiveRequestsRequest
 * @return DescribeSensitiveRequestsResponse
 */
DescribeSensitiveRequestsResponse Client::describeSensitiveRequests(const DescribeSensitiveRequestsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveRequestsWithOptions(request, runtime);
}

/**
 * @summary Queries statistics on sensitive data for data leakage prevention.
 *
 * @param request DescribeSensitiveStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveStatisticResponse
 */
DescribeSensitiveStatisticResponse Client::describeSensitiveStatisticWithOptions(const DescribeSensitiveStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatisticType()) {
    query["StatisticType"] = request.getStatisticType();
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
 * @summary Queries statistics on sensitive data for data leakage prevention.
 *
 * @param request DescribeSensitiveStatisticRequest
 * @return DescribeSensitiveStatisticResponse
 */
DescribeSensitiveStatisticResponse Client::describeSensitiveStatistic(const DescribeSensitiveStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the Logstore authorization status.
 *
 * @param request DescribeSlsAuthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsAuthStatusResponse
 */
DescribeSlsAuthStatusResponse Client::describeSlsAuthStatusWithOptions(const DescribeSlsAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the Logstore authorization status.
 *
 * @param request DescribeSlsAuthStatusRequest
 * @return DescribeSlsAuthStatusResponse
 */
DescribeSlsAuthStatusResponse Client::describeSlsAuthStatus(const DescribeSlsAuthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsAuthStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves Logstore information, including total capacity, storage duration, and used capacity.
 *
 * @param request DescribeSlsLogStoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsLogStoreResponse
 */
DescribeSlsLogStoreResponse Client::describeSlsLogStoreWithOptions(const DescribeSlsLogStoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Retrieves Logstore information, including total capacity, storage duration, and used capacity.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the number of protected resources that are associated with one or more protection templates.
 *
 * @param request DescribeTemplateResourceCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplateResourceCountResponse
 */
DescribeTemplateResourceCountResponse Client::describeTemplateResourceCountWithOptions(const DescribeTemplateResourceCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateIds()) {
    query["TemplateIds"] = request.getTemplateIds();
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
 * @summary Queries the number of protected resources that are associated with one or more protection templates.
 *
 * @param request DescribeTemplateResourceCountRequest
 * @return DescribeTemplateResourceCountResponse
 */
DescribeTemplateResourceCountResponse Client::describeTemplateResourceCount(const DescribeTemplateResourceCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplateResourceCountWithOptions(request, runtime);
}

/**
 * @summary Queries the resources attached to a protection template.
 *
 * @param request DescribeTemplateResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplateResourcesResponse
 */
DescribeTemplateResourcesResponse Client::describeTemplateResourcesWithOptions(const DescribeTemplateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetApi()) {
    query["AssetApi"] = request.getAssetApi();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Queries the resources attached to a protection template.
 *
 * @param request DescribeTemplateResourcesRequest
 * @return DescribeTemplateResourcesResponse
 */
DescribeTemplateResourcesResponse Client::describeTemplateResources(const DescribeTemplateResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplateResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a paginated list of notable security events.
 *
 * @param request DescribeThreatEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeThreatEventResponse
 */
DescribeThreatEventResponse Client::describeThreatEventWithOptions(const DescribeThreatEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeThreatEvent"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeThreatEventResponse>();
}

/**
 * @summary Queries a paginated list of notable security events.
 *
 * @param request DescribeThreatEventRequest
 * @return DescribeThreatEventResponse
 */
DescribeThreatEventResponse Client::describeThreatEvent(const DescribeThreatEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeThreatEventWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a security event that requires attention.
 *
 * @param request DescribeThreatEventDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeThreatEventDetailResponse
 */
DescribeThreatEventDetailResponse Client::describeThreatEventDetailWithOptions(const DescribeThreatEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeThreatEventDetail"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeThreatEventDetailResponse>();
}

/**
 * @summary Retrieves the details of a security event that requires attention.
 *
 * @param request DescribeThreatEventDetailRequest
 * @return DescribeThreatEventDetailResponse
 */
DescribeThreatEventDetailResponse Client::describeThreatEventDetail(const DescribeThreatEventDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeThreatEventDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the top five security event metrics, which are aggregated by different objects and sorted in descending order.
 *
 * @param request DescribeThreatEventTopMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeThreatEventTopMetricResponse
 */
DescribeThreatEventTopMetricResponse Client::describeThreatEventTopMetricWithOptions(const DescribeThreatEventTopMetricRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.getMetric();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeThreatEventTopMetric"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeThreatEventTopMetricResponse>();
}

/**
 * @summary Queries the top five security event metrics, which are aggregated by different objects and sorted in descending order.
 *
 * @param request DescribeThreatEventTopMetricRequest
 * @return DescribeThreatEventTopMetricResponse
 */
DescribeThreatEventTopMetricResponse Client::describeThreatEventTopMetric(const DescribeThreatEventTopMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeThreatEventTopMetricWithOptions(request, runtime);
}

/**
 * @summary Queries the trend of API security risks for a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeUserAbnormalTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserAbnormalTrendResponse
 */
DescribeUserAbnormalTrendResponse Client::describeUserAbnormalTrendWithOptions(const DescribeUserAbnormalTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the trend of API security risks for a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeUserAbnormalTrendRequest
 * @return DescribeUserAbnormalTrendResponse
 */
DescribeUserAbnormalTrendResponse Client::describeUserAbnormalTrend(const DescribeUserAbnormalTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserAbnormalTrendWithOptions(request, runtime);
}

/**
 * @summary Queries user risk types and statistics related to API security in Web Application Firewall (WAF).
 *
 * @param request DescribeUserAbnormalTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserAbnormalTypeResponse
 */
DescribeUserAbnormalTypeResponse Client::describeUserAbnormalTypeWithOptions(const DescribeUserAbnormalTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUserStatusList()) {
    query["UserStatusList"] = request.getUserStatusList();
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
 * @summary Queries user risk types and statistics related to API security in Web Application Firewall (WAF).
 *
 * @param request DescribeUserAbnormalTypeRequest
 * @return DescribeUserAbnormalTypeResponse
 */
DescribeUserAbnormalTypeResponse Client::describeUserAbnormalType(const DescribeUserAbnormalTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserAbnormalTypeWithOptions(request, runtime);
}

/**
 * @summary Queries traffic statistics for an API operation.
 *
 * @param request DescribeUserApiRequestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserApiRequestResponse
 */
DescribeUserApiRequestResponse Client::describeUserApiRequestWithOptions(const DescribeUserApiRequestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiFormat()) {
    query["ApiFormat"] = request.getApiFormat();
  }

  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Queries traffic statistics for an API operation.
 *
 * @param request DescribeUserApiRequestRequest
 * @return DescribeUserApiRequestResponse
 */
DescribeUserApiRequestResponse Client::describeUserApiRequest(const DescribeUserApiRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserApiRequestWithOptions(request, runtime);
}

/**
 * @summary Queries user asset statistics for API Security.
 *
 * @param request DescribeUserAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserAssetResponse
 */
DescribeUserAssetResponse Client::describeUserAssetWithOptions(const DescribeUserAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDataType()) {
    query["DataType"] = request.getDataType();
  }

  if (!!request.hasDays()) {
    query["Days"] = request.getDays();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries user asset statistics for API Security.
 *
 * @param request DescribeUserAssetRequest
 * @return DescribeUserAssetResponse
 */
DescribeUserAssetResponse Client::describeUserAsset(const DescribeUserAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserAssetWithOptions(request, runtime);
}

/**
 * @summary Describes the trend of API security attacks.
 *
 * @param request DescribeUserEventTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserEventTrendResponse
 */
DescribeUserEventTrendResponse Client::describeUserEventTrendWithOptions(const DescribeUserEventTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEventScope()) {
    query["EventScope"] = request.getEventScope();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Describes the trend of API security attacks.
 *
 * @param request DescribeUserEventTrendRequest
 * @return DescribeUserEventTrendResponse
 */
DescribeUserEventTrendResponse Client::describeUserEventTrend(const DescribeUserEventTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserEventTrendWithOptions(request, runtime);
}

/**
 * @summary Queries the types and statistics of user security events.
 *
 * @param request DescribeUserEventTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserEventTypeResponse
 */
DescribeUserEventTypeResponse Client::describeUserEventTypeWithOptions(const DescribeUserEventTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventScope()) {
    query["EventScope"] = request.getEventScope();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUserStatusList()) {
    query["UserStatusList"] = request.getUserStatusList();
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
 * @summary Queries the types and statistics of user security events.
 *
 * @param request DescribeUserEventTypeRequest
 * @return DescribeUserEventTypeResponse
 */
DescribeUserEventTypeResponse Client::describeUserEventType(const DescribeUserEventTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserEventTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the log field configuration of a Web Application Firewall (WAF) instance, including additional fields, removed fields, delivery strategies, and extended settings.
 *
 * @param request DescribeUserLogFieldConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserLogFieldConfigResponse
 */
DescribeUserLogFieldConfigResponse Client::describeUserLogFieldConfigWithOptions(const DescribeUserLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryType()) {
    query["DeliveryType"] = request.getDeliveryType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the log field configuration of a Web Application Firewall (WAF) instance, including additional fields, removed fields, delivery strategies, and extended settings.
 *
 * @param request DescribeUserLogFieldConfigRequest
 * @return DescribeUserLogFieldConfigResponse
 */
DescribeUserLogFieldConfigResponse Client::describeUserLogFieldConfig(const DescribeUserLogFieldConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserLogFieldConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the available log storage regions.
 *
 * @param request DescribeUserSlsLogRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserSlsLogRegionsResponse
 */
DescribeUserSlsLogRegionsResponse Client::describeUserSlsLogRegionsWithOptions(const DescribeUserSlsLogRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the available log storage regions.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Queries the domain ownership verification content of a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeVerifyContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyContentResponse
 */
DescribeVerifyContentResponse Client::describeVerifyContentWithOptions(const DescribeVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessOrigin()) {
    query["AccessOrigin"] = request.getAccessOrigin();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Queries the domain ownership verification content of a Web Application Firewall (WAF) instance.
 *
 * @param request DescribeVerifyContentRequest
 * @return DescribeVerifyContentResponse
 */
DescribeVerifyContentResponse Client::describeVerifyContent(const DescribeVerifyContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyContentWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 IP addresses that have the highest number of requests.
 *
 * @param request DescribeVisitTopIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVisitTopIpResponse
 */
DescribeVisitTopIpResponse Client::describeVisitTopIpWithOptions(const DescribeVisitTopIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
 * @summary Queries the top 10 IP addresses that have the highest number of requests.
 *
 * @param request DescribeVisitTopIpRequest
 * @return DescribeVisitTopIpResponse
 */
DescribeVisitTopIpResponse Client::describeVisitTopIp(const DescribeVisitTopIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVisitTopIpWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 User-Agents that sent the most requests.
 *
 * @param request DescribeVisitUasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVisitUasResponse
 */
DescribeVisitUasResponse Client::describeVisitUasWithOptions(const DescribeVisitUasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
 * @summary Queries the top 10 User-Agents that sent the most requests.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Initializes a service-linked role for WAF.
 *
 * @param request InitializeWafOperationRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitializeWafOperationRoleResponse
 */
InitializeWafOperationRoleResponse Client::initializeWafOperationRoleWithOptions(const InitializeWafOperationRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Initializes a service-linked role for WAF.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
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
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Lists the tag values of a specified tag key.
 *
 * @param request ListTagValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValuesWithOptions(const ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
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
 * @summary Lists the tag values of a specified tag key.
 *
 * @param request ListTagValuesRequest
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValues(const ListTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagValuesWithOptions(request, runtime);
}

/**
 * @summary Modifies the status of API security risks in batches.
 *
 * @param request ModifyApisecAbnormalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApisecAbnormalsResponse
 */
ModifyApisecAbnormalsResponse Client::modifyApisecAbnormalsWithOptions(const ModifyApisecAbnormalsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbnormalIds()) {
    query["AbnormalIds"] = request.getAbnormalIds();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.getNote();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasUserStatus()) {
    query["UserStatus"] = request.getUserStatus();
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
 * @summary Modifies the status of API security risks in batches.
 *
 * @param request ModifyApisecAbnormalsRequest
 * @return ModifyApisecAbnormalsResponse
 */
ModifyApisecAbnormalsResponse Client::modifyApisecAbnormals(const ModifyApisecAbnormalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApisecAbnormalsWithOptions(request, runtime);
}

/**
 * @summary Modifies the annotation of an API asset in the API security module of Web Application Firewall (WAF).
 *
 * @param request ModifyApisecApiResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApisecApiResourceResponse
 */
ModifyApisecApiResourceResponse Client::modifyApisecApiResourceWithOptions(const ModifyApisecApiResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasFollow()) {
    query["Follow"] = request.getFollow();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.getNote();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Modifies the annotation of an API asset in the API security module of Web Application Firewall (WAF).
 *
 * @param request ModifyApisecApiResourceRequest
 * @return ModifyApisecApiResourceResponse
 */
ModifyApisecApiResourceResponse Client::modifyApisecApiResource(const ModifyApisecApiResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApisecApiResourceWithOptions(request, runtime);
}

/**
 * @summary Modifies the status of a batch of API security events.
 *
 * @param request ModifyApisecEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApisecEventsResponse
 */
ModifyApisecEventsResponse Client::modifyApisecEventsWithOptions(const ModifyApisecEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEventIds()) {
    query["EventIds"] = request.getEventIds();
  }

  if (!!request.hasEventScope()) {
    query["EventScope"] = request.getEventScope();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.getNote();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasUserStatus()) {
    query["UserStatus"] = request.getUserStatus();
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
 * @summary Modifies the status of a batch of API security events.
 *
 * @param request ModifyApisecEventsRequest
 * @return ModifyApisecEventsResponse
 */
ModifyApisecEventsResponse Client::modifyApisecEvents(const ModifyApisecEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApisecEventsWithOptions(request, runtime);
}

/**
 * @summary Updates the API security log subscription settings.
 *
 * @param request ModifyApisecLogDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApisecLogDeliveryResponse
 */
ModifyApisecLogDeliveryResponse Client::modifyApisecLogDeliveryWithOptions(const ModifyApisecLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssertKey()) {
    query["AssertKey"] = request.getAssertKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogRegionId()) {
    query["LogRegionId"] = request.getLogRegionId();
  }

  if (!!request.hasLogStoreName()) {
    query["LogStoreName"] = request.getLogStoreName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Updates the API security log subscription settings.
 *
 * @param request ModifyApisecLogDeliveryRequest
 * @return ModifyApisecLogDeliveryResponse
 */
ModifyApisecLogDeliveryResponse Client::modifyApisecLogDelivery(const ModifyApisecLogDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApisecLogDeliveryWithOptions(request, runtime);
}

/**
 * @summary Modifies the log delivery status of an API security module in a Web Application Firewall (WAF) instance.
 *
 * @param request ModifyApisecLogDeliveryStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApisecLogDeliveryStatusResponse
 */
ModifyApisecLogDeliveryStatusResponse Client::modifyApisecLogDeliveryStatusWithOptions(const ModifyApisecLogDeliveryStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssertKey()) {
    query["AssertKey"] = request.getAssertKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Modifies the log delivery status of an API security module in a Web Application Firewall (WAF) instance.
 *
 * @param request ModifyApisecLogDeliveryStatusRequest
 * @return ModifyApisecLogDeliveryStatusResponse
 */
ModifyApisecLogDeliveryStatusResponse Client::modifyApisecLogDeliveryStatus(const ModifyApisecLogDeliveryStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApisecLogDeliveryStatusWithOptions(request, runtime);
}

/**
 * @summary Enables or disables API security features for a protected object or protected object group in the Web Application Firewall (WAF) API security module.
 *
 * @param request ModifyApisecModuleStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApisecModuleStatusResponse
 */
ModifyApisecModuleStatusResponse Client::modifyApisecModuleStatusWithOptions(const ModifyApisecModuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReportStatus()) {
    query["ReportStatus"] = request.getReportStatus();
  }

  if (!!request.hasResourceGroups()) {
    query["ResourceGroups"] = request.getResourceGroups();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.getResources();
  }

  if (!!request.hasTraceStatus()) {
    query["TraceStatus"] = request.getTraceStatus();
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
 * @summary Enables or disables API security features for a protected object or protected object group in the Web Application Firewall (WAF) API security module.
 *
 * @param request ModifyApisecModuleStatusRequest
 * @return ModifyApisecModuleStatusResponse
 */
ModifyApisecModuleStatusResponse Client::modifyApisecModuleStatus(const ModifyApisecModuleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApisecModuleStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the API security status for a protected object or a protected object group.
 *
 * @param request ModifyApisecStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApisecStatusResponse
 */
ModifyApisecStatusResponse Client::modifyApisecStatusWithOptions(const ModifyApisecStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApisecStatus()) {
    query["ApisecStatus"] = request.getApisecStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroups()) {
    query["ResourceGroups"] = request.getResourceGroups();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.getResources();
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
 * @summary Modifies the API security status for a protected object or a protected object group.
 *
 * @param request ModifyApisecStatusRequest
 * @return ModifyApisecStatusResponse
 */
ModifyApisecStatusResponse Client::modifyApisecStatus(const ModifyApisecStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApisecStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a cloud resource connected to WAF.
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
    request.setListenShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListen(), "Listen", "json"));
  }

  if (!!tmpReq.hasRedirect()) {
    request.setRedirectShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRedirect(), "Redirect", "json"));
  }

  json query = {};
  if (!!request.hasCloudResourceId()) {
    query["CloudResourceId"] = request.getCloudResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasListenShrink()) {
    query["Listen"] = request.getListenShrink();
  }

  if (!!request.hasRedirectShrink()) {
    query["Redirect"] = request.getRedirectShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Modifies the configuration of a cloud resource connected to WAF.
 *
 * @param request ModifyCloudResourceRequest
 * @return ModifyCloudResourceResponse
 */
ModifyCloudResourceResponse Client::modifyCloudResource(const ModifyCloudResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCloudResourceWithOptions(request, runtime);
}

/**
 * @summary Modifies the certificate for a resource managed by WAF in cloud native mode.
 *
 * @param request ModifyCloudResourceCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCloudResourceCertResponse
 */
ModifyCloudResourceCertResponse Client::modifyCloudResourceCertWithOptions(const ModifyCloudResourceCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertificates()) {
    query["Certificates"] = request.getCertificates();
  }

  if (!!request.hasCloudResourceId()) {
    query["CloudResourceId"] = request.getCloudResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.getResourceInstanceId();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.getResourceProduct();
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
 * @summary Modifies the certificate for a resource managed by WAF in cloud native mode.
 *
 * @param request ModifyCloudResourceCertRequest
 * @return ModifyCloudResourceCertResponse
 */
ModifyCloudResourceCertResponse Client::modifyCloudResourceCert(const ModifyCloudResourceCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCloudResourceCertWithOptions(request, runtime);
}

/**
 * @summary Modifies the default certificate for cloud native mode.
 *
 * @param request ModifyCloudResourceDefaultCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCloudResourceDefaultCertResponse
 */
ModifyCloudResourceDefaultCertResponse Client::modifyCloudResourceDefaultCertWithOptions(const ModifyCloudResourceDefaultCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertId()) {
    query["CertId"] = request.getCertId();
  }

  if (!!request.hasCloudResourceId()) {
    query["CloudResourceId"] = request.getCloudResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCloudResourceDefaultCert"},
    {"version" , "2021-10-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCloudResourceDefaultCertResponse>();
}

/**
 * @summary Modifies the default certificate for cloud native mode.
 *
 * @param request ModifyCloudResourceDefaultCertRequest
 * @return ModifyCloudResourceDefaultCertResponse
 */
ModifyCloudResourceDefaultCertResponse Client::modifyCloudResourceDefaultCert(const ModifyCloudResourceDefaultCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCloudResourceDefaultCertWithOptions(request, runtime);
}

/**
 * @summary Modifies the default SSL/TLS settings.
 *
 * @param request ModifyDefaultHttpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefaultHttpsResponse
 */
ModifyDefaultHttpsResponse Client::modifyDefaultHttpsWithOptions(const ModifyDefaultHttpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertId()) {
    query["CertId"] = request.getCertId();
  }

  if (!!request.hasCipherSuite()) {
    query["CipherSuite"] = request.getCipherSuite();
  }

  if (!!request.hasCustomCiphers()) {
    query["CustomCiphers"] = request.getCustomCiphers();
  }

  if (!!request.hasEnableTLSv3()) {
    query["EnableTLSv3"] = request.getEnableTLSv3();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTLSVersion()) {
    query["TLSVersion"] = request.getTLSVersion();
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
 * @summary Modifies the default SSL/TLS settings.
 *
 * @param request ModifyDefaultHttpsRequest
 * @return ModifyDefaultHttpsResponse
 */
ModifyDefaultHttpsResponse Client::modifyDefaultHttps(const ModifyDefaultHttpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefaultHttpsWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a protected object group.
 *
 * @param request ModifyDefenseResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefenseResourceGroupResponse
 */
ModifyDefenseResourceGroupResponse Client::modifyDefenseResourceGroupWithOptions(const ModifyDefenseResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddList()) {
    query["AddList"] = request.getAddList();
  }

  if (!!request.hasDeleteList()) {
    query["DeleteList"] = request.getDeleteList();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Modifies the configuration of a protected object group.
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
    query["AcwCookieStatus"] = request.getAcwCookieStatus();
  }

  if (!!request.hasAcwSecureStatus()) {
    query["AcwSecureStatus"] = request.getAcwSecureStatus();
  }

  if (!!request.hasAcwV3SecureStatus()) {
    query["AcwV3SecureStatus"] = request.getAcwV3SecureStatus();
  }

  if (!!request.hasCustomHeaders()) {
    query["CustomHeaders"] = request.getCustomHeaders();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResponseHeaders()) {
    query["ResponseHeaders"] = request.getResponseHeaders();
  }

  if (!!request.hasXffStatus()) {
    query["XffStatus"] = request.getXffStatus();
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
 * @summary Modifies the configuration of a protection rule.
 *
 * @param request ModifyDefenseRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefenseRuleResponse
 */
ModifyDefenseRuleResponse Client::modifyDefenseRuleWithOptions(const ModifyDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.getDefenseScene();
  }

  if (!!request.hasDefenseType()) {
    query["DefenseType"] = request.getDefenseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  json body = {};
  if (!!request.hasRules()) {
    body["Rules"] = request.getRules();
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
 * @summary Modifies the configuration of a protection rule.
 *
 * @param request ModifyDefenseRuleRequest
 * @return ModifyDefenseRuleResponse
 */
ModifyDefenseRuleResponse Client::modifyDefenseRule(const ModifyDefenseRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefenseRuleWithOptions(request, runtime);
}

/**
 * @summary Updates the cache for a web tamper-proofing rule.
 *
 * @param request ModifyDefenseRuleCacheRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefenseRuleCacheResponse
 */
ModifyDefenseRuleCacheResponse Client::modifyDefenseRuleCacheWithOptions(const ModifyDefenseRuleCacheRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Updates the cache for a web tamper-proofing rule.
 *
 * @param request ModifyDefenseRuleCacheRequest
 * @return ModifyDefenseRuleCacheResponse
 */
ModifyDefenseRuleCacheResponse Client::modifyDefenseRuleCache(const ModifyDefenseRuleCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefenseRuleCacheWithOptions(request, runtime);
}

/**
 * @summary Enables or disables a protection rule.
 *
 * @param request ModifyDefenseRuleStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefenseRuleStatusResponse
 */
ModifyDefenseRuleStatusResponse Client::modifyDefenseRuleStatusWithOptions(const ModifyDefenseRuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseType()) {
    query["DefenseType"] = request.getDefenseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleStatus()) {
    query["RuleStatus"] = request.getRuleStatus();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Enables or disables a protection rule.
 *
 * @param request ModifyDefenseRuleStatusRequest
 * @return ModifyDefenseRuleStatusResponse
 */
ModifyDefenseRuleStatusResponse Client::modifyDefenseRuleStatus(const ModifyDefenseRuleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefenseRuleStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the mitigation settings for a protection scenario.
 *
 * @param request ModifyDefenseSceneConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefenseSceneConfigResponse
 */
ModifyDefenseSceneConfigResponse Client::modifyDefenseSceneConfigWithOptions(const ModifyDefenseSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigKey()) {
    query["ConfigKey"] = request.getConfigKey();
  }

  if (!!request.hasConfigValue()) {
    query["ConfigValue"] = request.getConfigValue();
  }

  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.getDefenseScene();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Modifies the mitigation settings for a protection scenario.
 *
 * @param request ModifyDefenseSceneConfigRequest
 * @return ModifyDefenseSceneConfigResponse
 */
ModifyDefenseSceneConfigResponse Client::modifyDefenseSceneConfig(const ModifyDefenseSceneConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefenseSceneConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies a defense template.
 *
 * @param request ModifyDefenseTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefenseTemplateResponse
 */
ModifyDefenseTemplateResponse Client::modifyDefenseTemplateWithOptions(const ModifyDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
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
 * @summary Modifies a defense template.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateStatus()) {
    query["TemplateStatus"] = request.getTemplateStatus();
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
 * @summary Updates a CNAME-based domain name onboarded to Web Application Firewall (WAF).
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
    request.setListenShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListen(), "Listen", "json"));
  }

  if (!!tmpReq.hasRedirect()) {
    request.setRedirectShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRedirect(), "Redirect", "json"));
  }

  json query = {};
  if (!!request.hasAccessType()) {
    query["AccessType"] = request.getAccessType();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasListenShrink()) {
    query["Listen"] = request.getListenShrink();
  }

  if (!!request.hasRedirectShrink()) {
    query["Redirect"] = request.getRedirectShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Updates a CNAME-based domain name onboarded to Web Application Firewall (WAF).
 *
 * @param request ModifyDomainRequest
 * @return ModifyDomainResponse
 */
ModifyDomainResponse Client::modifyDomain(const ModifyDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDomainWithOptions(request, runtime);
}

/**
 * @summary Modifies the certificate that is associated with a domain name added to a Web Application Firewall (WAF) instance in CNAME record mode.
 *
 * @param request ModifyDomainCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDomainCertResponse
 */
ModifyDomainCertResponse Client::modifyDomainCertWithOptions(const ModifyDomainCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertId()) {
    query["CertId"] = request.getCertId();
  }

  if (!!request.hasCipherSuite()) {
    query["CipherSuite"] = request.getCipherSuite();
  }

  if (!!request.hasCustomCiphers()) {
    query["CustomCiphers"] = request.getCustomCiphers();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEnableTLSv3()) {
    query["EnableTLSv3"] = request.getEnableTLSv3();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTLSVersion()) {
    query["TLSVersion"] = request.getTLSVersion();
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
 * @summary Modifies the certificate that is associated with a domain name added to a Web Application Firewall (WAF) instance in CNAME record mode.
 *
 * @param request ModifyDomainCertRequest
 * @return ModifyDomainCertResponse
 */
ModifyDomainCertResponse Client::modifyDomainCert(const ModifyDomainCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDomainCertWithOptions(request, runtime);
}

/**
 * @summary Re-add a domain name that was penalized for not having an ICP filing to Web Application Firewall (WAF).
 *
 * @param request ModifyDomainPunishStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDomainPunishStatusResponse
 */
ModifyDomainPunishStatusResponse Client::modifyDomainPunishStatusWithOptions(const ModifyDomainPunishStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Re-add a domain name that was penalized for not having an ICP filing to Web Application Firewall (WAF).
 *
 * @param request ModifyDomainPunishStatusRequest
 * @return ModifyDomainPunishStatusResponse
 */
ModifyDomainPunishStatusResponse Client::modifyDomainPunishStatus(const ModifyDomainPunishStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDomainPunishStatusWithOptions(request, runtime);
}

/**
 * @summary Updates hybrid cloud cluster settings, such as the cluster name, ports, and access mode.
 *
 * @param request ModifyHybridCloudClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridCloudClusterResponse
 */
ModifyHybridCloudClusterResponse Client::modifyHybridCloudClusterWithOptions(const ModifyHybridCloudClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessMode()) {
    query["AccessMode"] = request.getAccessMode();
  }

  if (!!request.hasAccessRegion()) {
    query["AccessRegion"] = request.getAccessRegion();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasHttpPorts()) {
    query["HttpPorts"] = request.getHttpPorts();
  }

  if (!!request.hasHttpsPorts()) {
    query["HttpsPorts"] = request.getHttpsPorts();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogFieldsNotReturned()) {
    query["LogFieldsNotReturned"] = request.getLogFieldsNotReturned();
  }

  if (!!request.hasProtectionServerCount()) {
    query["ProtectionServerCount"] = request.getProtectionServerCount();
  }

  if (!!request.hasProxyStatus()) {
    query["ProxyStatus"] = request.getProxyStatus();
  }

  if (!!request.hasProxyType()) {
    query["ProxyType"] = request.getProxyType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleConfig()) {
    query["RuleConfig"] = request.getRuleConfig();
  }

  if (!!request.hasRuleStatus()) {
    query["RuleStatus"] = request.getRuleStatus();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
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
 * @summary Updates hybrid cloud cluster settings, such as the cluster name, ports, and access mode.
 *
 * @param request ModifyHybridCloudClusterRequest
 * @return ModifyHybridCloudClusterResponse
 */
ModifyHybridCloudClusterResponse Client::modifyHybridCloudCluster(const ModifyHybridCloudClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridCloudClusterWithOptions(request, runtime);
}

/**
 * @summary Modifies the manual bypass status for a hybrid cloud cluster that is integrated with an SDK.
 *
 * @param request ModifyHybridCloudClusterBypassStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridCloudClusterBypassStatusResponse
 */
ModifyHybridCloudClusterBypassStatusResponse Client::modifyHybridCloudClusterBypassStatusWithOptions(const ModifyHybridCloudClusterBypassStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterResourceId()) {
    query["ClusterResourceId"] = request.getClusterResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleStatus()) {
    query["RuleStatus"] = request.getRuleStatus();
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
 * @summary Modifies the manual bypass status for a hybrid cloud cluster that is integrated with an SDK.
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterRuleResourceId()) {
    query["ClusterRuleResourceId"] = request.getClusterRuleResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleConfig()) {
    query["RuleConfig"] = request.getRuleConfig();
  }

  if (!!request.hasRuleStatus()) {
    query["RuleStatus"] = request.getRuleStatus();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
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
 * @summary Modifies the information of a cluster group.
 *
 * @param request ModifyHybridCloudGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridCloudGroupResponse
 */
ModifyHybridCloudGroupResponse Client::modifyHybridCloudGroupWithOptions(const ModifyHybridCloudGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Modifies the information of a cluster group.
 *
 * @param request ModifyHybridCloudGroupRequest
 * @return ModifyHybridCloudGroupResponse
 */
ModifyHybridCloudGroupResponse Client::modifyHybridCloudGroup(const ModifyHybridCloudGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridCloudGroupWithOptions(request, runtime);
}

/**
 * @summary Adds a node to a node group in a hybrid cloud cluster of a Web Application Firewall (WAF) instance.
 *
 * @param request ModifyHybridCloudGroupExpansionServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridCloudGroupExpansionServerResponse
 */
ModifyHybridCloudGroupExpansionServerResponse Client::modifyHybridCloudGroupExpansionServerWithOptions(const ModifyHybridCloudGroupExpansionServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMids()) {
    query["Mids"] = request.getMids();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Adds a node to a node group in a hybrid cloud cluster of a Web Application Firewall (WAF) instance.
 *
 * @param request ModifyHybridCloudGroupExpansionServerRequest
 * @return ModifyHybridCloudGroupExpansionServerResponse
 */
ModifyHybridCloudGroupExpansionServerResponse Client::modifyHybridCloudGroupExpansionServer(const ModifyHybridCloudGroupExpansionServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridCloudGroupExpansionServerWithOptions(request, runtime);
}

/**
 * @summary Removes a node from a group in a hybrid cloud cluster.
 *
 * @param request ModifyHybridCloudGroupShrinkServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridCloudGroupShrinkServerResponse
 */
ModifyHybridCloudGroupShrinkServerResponse Client::modifyHybridCloudGroupShrinkServerWithOptions(const ModifyHybridCloudGroupShrinkServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMids()) {
    query["Mids"] = request.getMids();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Removes a node from a group in a hybrid cloud cluster.
 *
 * @param request ModifyHybridCloudGroupShrinkServerRequest
 * @return ModifyHybridCloudGroupShrinkServerResponse
 */
ModifyHybridCloudGroupShrinkServerResponse Client::modifyHybridCloudGroupShrinkServer(const ModifyHybridCloudGroupShrinkServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridCloudGroupShrinkServerWithOptions(request, runtime);
}

/**
 * @summary Modifies the traffic redirection status of a hybrid cloud SDK.
 *
 * @param request ModifyHybridCloudSdkPullinStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridCloudSdkPullinStatusResponse
 */
ModifyHybridCloudSdkPullinStatusResponse Client::modifyHybridCloudSdkPullinStatusWithOptions(const ModifyHybridCloudSdkPullinStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMid()) {
    query["Mid"] = request.getMid();
  }

  if (!!request.hasPullinStatus()) {
    query["PullinStatus"] = request.getPullinStatus();
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
 * @summary Modifies the traffic redirection status of a hybrid cloud SDK.
 *
 * @param request ModifyHybridCloudSdkPullinStatusRequest
 * @return ModifyHybridCloudSdkPullinStatusResponse
 */
ModifyHybridCloudSdkPullinStatusResponse Client::modifyHybridCloudSdkPullinStatus(const ModifyHybridCloudSdkPullinStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridCloudSdkPullinStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a hybrid cloud node in a Web Application Firewall (WAF) instance.
 *
 * @param request ModifyHybridCloudServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridCloudServerResponse
 */
ModifyHybridCloudServerResponse Client::modifyHybridCloudServerWithOptions(const ModifyHybridCloudServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContinents()) {
    query["Continents"] = request.getContinents();
  }

  if (!!request.hasCustomName()) {
    query["CustomName"] = request.getCustomName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMid()) {
    query["Mid"] = request.getMid();
  }

  if (!!request.hasOperator()) {
    query["Operator"] = request.getOperator();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Modifies the configuration of a hybrid cloud node in a Web Application Firewall (WAF) instance.
 *
 * @param request ModifyHybridCloudServerRequest
 * @return ModifyHybridCloudServerResponse
 */
ModifyHybridCloudServerResponse Client::modifyHybridCloudServer(const ModifyHybridCloudServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridCloudServerWithOptions(request, runtime);
}

/**
 * @summary Modifies a log delivery configuration for a hybrid cloud cluster.
 *
 * @param request ModifyLogDeliveryConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLogDeliveryConfigResponse
 */
ModifyLogDeliveryConfigResponse Client::modifyLogDeliveryConfigWithOptions(const ModifyLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryDetail()) {
    query["DeliveryDetail"] = request.getDeliveryDetail();
  }

  if (!!request.hasDeliveryName()) {
    query["DeliveryName"] = request.getDeliveryName();
  }

  if (!!request.hasDeliveryType()) {
    query["DeliveryType"] = request.getDeliveryType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Modifies a log delivery configuration for a hybrid cloud cluster.
 *
 * @param request ModifyLogDeliveryConfigRequest
 * @return ModifyLogDeliveryConfigResponse
 */
ModifyLogDeliveryConfigResponse Client::modifyLogDeliveryConfig(const ModifyLogDeliveryConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLogDeliveryConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies an IP address blacklist for critical event protection.
 *
 * @param request ModifyMajorProtectionBlackIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMajorProtectionBlackIpResponse
 */
ModifyMajorProtectionBlackIpResponse Client::modifyMajorProtectionBlackIpWithOptions(const ModifyMajorProtectionBlackIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExpiredTime()) {
    query["ExpiredTime"] = request.getExpiredTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIpList()) {
    query["IpList"] = request.getIpList();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Modifies an IP address blacklist for critical event protection.
 *
 * @param request ModifyMajorProtectionBlackIpRequest
 * @return ModifyMajorProtectionBlackIpResponse
 */
ModifyMajorProtectionBlackIpResponse Client::modifyMajorProtectionBlackIp(const ModifyMajorProtectionBlackIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMajorProtectionBlackIpWithOptions(request, runtime);
}

/**
 * @summary Modifies the information of a member account that is managed by the multi-account management feature of Web Application Firewall (WAF).
 *
 * @param request ModifyMemberAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMemberAccountResponse
 */
ModifyMemberAccountResponse Client::modifyMemberAccountWithOptions(const ModifyMemberAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemberAccountId()) {
    query["MemberAccountId"] = request.getMemberAccountId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Modifies the information of a member account that is managed by the multi-account management feature of Web Application Firewall (WAF).
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPauseStatus()) {
    query["PauseStatus"] = request.getPauseStatus();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Modifies the log delivery status of a protected object in Web Application Firewall (WAF).
 *
 * @param request ModifyResourceLogDeliveryStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyResourceLogDeliveryStatusResponse
 */
ModifyResourceLogDeliveryStatusResponse Client::modifyResourceLogDeliveryStatusWithOptions(const ModifyResourceLogDeliveryStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryName()) {
    query["DeliveryName"] = request.getDeliveryName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Modifies the log delivery status of a protected object in Web Application Firewall (WAF).
 *
 * @param request ModifyResourceLogDeliveryStatusRequest
 * @return ModifyResourceLogDeliveryStatusResponse
 */
ModifyResourceLogDeliveryStatusResponse Client::modifyResourceLogDeliveryStatus(const ModifyResourceLogDeliveryStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyResourceLogDeliveryStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the log field configuration of a protected object.
 *
 * @param request ModifyResourceLogFieldConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyResourceLogFieldConfigResponse
 */
ModifyResourceLogFieldConfigResponse Client::modifyResourceLogFieldConfigWithOptions(const ModifyResourceLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryType()) {
    query["DeliveryType"] = request.getDeliveryType();
  }

  if (!!request.hasExtendConfig()) {
    query["ExtendConfig"] = request.getExtendConfig();
  }

  if (!!request.hasFieldList()) {
    query["FieldList"] = request.getFieldList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogDeliveryStrategy()) {
    query["LogDeliveryStrategy"] = request.getLogDeliveryStrategy();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Modifies the log field configuration of a protected object.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Attaches protected objects to or detaches protected objects from a protection template.
 *
 * @param request ModifyTemplateResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTemplateResourcesResponse
 */
ModifyTemplateResourcesResponse Client::modifyTemplateResourcesWithOptions(const ModifyTemplateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBindAssets()) {
    query["BindAssets"] = request.getBindAssets();
  }

  if (!!request.hasBindResourceGroups()) {
    query["BindResourceGroups"] = request.getBindResourceGroups();
  }

  if (!!request.hasBindResources()) {
    query["BindResources"] = request.getBindResources();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasUnbindAssets()) {
    query["UnbindAssets"] = request.getUnbindAssets();
  }

  if (!!request.hasUnbindResourceGroups()) {
    query["UnbindResourceGroups"] = request.getUnbindResourceGroups();
  }

  if (!!request.hasUnbindResources()) {
    query["UnbindResources"] = request.getUnbindResources();
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
 * @summary Attaches protected objects to or detaches protected objects from a protection template.
 *
 * @param request ModifyTemplateResourcesRequest
 * @return ModifyTemplateResourcesResponse
 */
ModifyTemplateResourcesResponse Client::modifyTemplateResources(const ModifyTemplateResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTemplateResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the default log field configuration of a Web Application Firewall (WAF) instance for log delivery to Simple Log Service.
 *
 * @param request ModifyUserLogFieldConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserLogFieldConfigResponse
 */
ModifyUserLogFieldConfigResponse Client::modifyUserLogFieldConfigWithOptions(const ModifyUserLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryType()) {
    query["DeliveryType"] = request.getDeliveryType();
  }

  if (!!request.hasExtendConfig()) {
    query["ExtendConfig"] = request.getExtendConfig();
  }

  if (!!request.hasFieldList()) {
    query["FieldList"] = request.getFieldList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogDeliveryStrategy()) {
    query["LogDeliveryStrategy"] = request.getLogDeliveryStrategy();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Modifies the default log field configuration of a Web Application Firewall (WAF) instance for log delivery to Simple Log Service.
 *
 * @param request ModifyUserLogFieldConfigRequest
 * @return ModifyUserLogFieldConfigResponse
 */
ModifyUserLogFieldConfigResponse Client::modifyUserLogFieldConfig(const ModifyUserLogFieldConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserLogFieldConfigWithOptions(request, runtime);
}

/**
 * @summary Enables or disables Simple Log Service for Web Application Firewall (WAF).
 *
 * @param request ModifyUserWafLogStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserWafLogStatusResponse
 */
ModifyUserWafLogStatusResponse Client::modifyUserWafLogStatusWithOptions(const ModifyUserWafLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogRegionId()) {
    query["LogRegionId"] = request.getLogRegionId();
  }

  if (!!request.hasLogStatus()) {
    query["LogStatus"] = request.getLogStatus();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @summary Enables or disables Simple Log Service for Web Application Firewall (WAF).
 *
 * @param request ModifyUserWafLogStatusRequest
 * @return ModifyUserWafLogStatusResponse
 */
ModifyUserWafLogStatusResponse Client::modifyUserWafLogStatus(const ModifyUserWafLogStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserWafLogStatusWithOptions(request, runtime);
}

/**
 * @summary Re-adds a cloud product to Web Application Firewall (WAF) to restore protection after a cloud product access failure.
 *
 * @param request ReCreateCloudResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReCreateCloudResourceResponse
 */
ReCreateCloudResourceResponse Client::reCreateCloudResourceWithOptions(const ReCreateCloudResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudResourceId()) {
    query["CloudResourceId"] = request.getCloudResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceInstanceId()) {
    query["ResourceInstanceId"] = request.getResourceInstanceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.getResourceProduct();
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
 * @summary Re-adds a cloud product to Web Application Firewall (WAF) to restore protection after a cloud product access failure.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @description After you call this operation, the system performs the synchronization asynchronously. You can call the [DescribeProductInstances](https://help.aliyun.com/document_detail/2743168.html) operation to query the synchronization result.
 *
 * @param request SyncProductInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncProductInstanceResponse
 */
SyncProductInstanceResponse Client::syncProductInstanceWithOptions(const SyncProductInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.getResourceManagerResourceGroupId();
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
 * @description After you call this operation, the system performs the synchronization asynchronously. You can call the [DescribeProductInstances](https://help.aliyun.com/document_detail/2743168.html) operation to query the synchronization result.
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
    query["RegionId"] = request.getRegionId();
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
    query["All"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
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
 * @summary Verifies that you own the specified domain name. Domain ownership must be verified before you can add a domain name to Web Application Firewall (WAF) by using CNAME access.
 *
 * @param request VerifyDomainOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyDomainOwnerResponse
 */
VerifyDomainOwnerResponse Client::verifyDomainOwnerWithOptions(const VerifyDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.getVerifyType();
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
 * @summary Verifies that you own the specified domain name. Domain ownership must be verified before you can add a domain name to Web Application Firewall (WAF) by using CNAME access.
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