#include <darabonba/Core.hpp>
#include <alibabacloud/Pvtz20180101.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Pvtz20180101::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Pvtz20180101
{

AlibabaCloud::Pvtz20180101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "pvtz.aliyuncs.com"},
    {"cn-hangzhou" , "pvtz.aliyuncs.com"},
    {"cn-qingdao" , "pvtz.aliyuncs.com"},
    {"cn-zhangjiakou" , "pvtz.aliyuncs.com"},
    {"eu-west-1" , "pvtz.aliyuncs.com"},
    {"us-east-1" , "pvtz.aliyuncs.com"},
    {"us-west-1" , "pvtz.aliyuncs.com"},
    {"ap-south-1" , "pvtz.aliyuncs.com"},
    {"me-east-1" , "pvtz.aliyuncs.com"},
    {"cn-beijing-finance-1" , "pvtz.aliyuncs.com"},
    {"cn-hangzhou-finance" , "pvtz.aliyuncs.com"},
    {"cn-north-2-gov-1" , "pvtz.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "pvtz.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "pvtz.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("pvtz", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates a custom line.
 *
 * @param request AddCustomLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCustomLineResponse
 */
AddCustomLineResponse Client::addCustomLineWithOptions(const AddCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDnsCategory()) {
    query["DnsCategory"] = request.getDnsCategory();
  }

  if (!!request.hasIpv4s()) {
    query["Ipv4s"] = request.getIpv4s();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasShareScope()) {
    query["ShareScope"] = request.getShareScope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddCustomLine"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCustomLineResponse>();
}

/**
 * @summary Creates a custom line.
 *
 * @param request AddCustomLineRequest
 * @return AddCustomLineResponse
 */
AddCustomLineResponse Client::addCustomLine(const AddCustomLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCustomLineWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to add an endpoint.
 *
 * @param request AddResolverEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddResolverEndpointResponse
 */
AddResolverEndpointResponse Client::addResolverEndpointWithOptions(const AddResolverEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpConfig()) {
    query["IpConfig"] = request.getIpConfig();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVpcRegionId()) {
    query["VpcRegionId"] = request.getVpcRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddResolverEndpoint"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddResolverEndpointResponse>();
}

/**
 * @summary You can call this operation to add an endpoint.
 *
 * @param request AddResolverEndpointRequest
 * @return AddResolverEndpointResponse
 */
AddResolverEndpointResponse Client::addResolverEndpoint(const AddResolverEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addResolverEndpointWithOptions(request, runtime);
}

/**
 * @summary Adds a forwarding rule.
 *
 * @description If the outbound VPC and the inbound VPC are the same, the IP address of the external DNS system in the forwarding rule for the outbound endpoint cannot be the same as the IP address of the inbound endpoint service. This is because if the IP addresses are the same, a request loopback occurs and DNS resolution fails.
 *
 * @param request AddResolverRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddResolverRuleResponse
 */
AddResolverRuleResponse Client::addResolverRuleWithOptions(const AddResolverRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdgeDnsClusters()) {
    query["EdgeDnsClusters"] = request.getEdgeDnsClusters();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasForwardIp()) {
    query["ForwardIp"] = request.getForwardIp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasVpcs()) {
    query["Vpcs"] = request.getVpcs();
  }

  if (!!request.hasZoneName()) {
    query["ZoneName"] = request.getZoneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddResolverRule"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddResolverRuleResponse>();
}

/**
 * @summary Adds a forwarding rule.
 *
 * @description If the outbound VPC and the inbound VPC are the same, the IP address of the external DNS system in the forwarding rule for the outbound endpoint cannot be the same as the IP address of the inbound endpoint service. This is because if the IP addresses are the same, a request loopback occurs and DNS resolution fails.
 *
 * @param request AddResolverRuleRequest
 * @return AddResolverRuleResponse
 */
AddResolverRuleResponse Client::addResolverRule(const AddResolverRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addResolverRuleWithOptions(request, runtime);
}

/**
 * @summary Adds cross-account VPC authorization.
 *
 * @description #### **Limits**
 * - Cross-account settings for the effective scope only support Alibaba Cloud accounts (primary accounts) and do not support RAM users. Only accounts within the same site can be associated, such as between Alibaba Cloud China Website (www.aliyun.com) accounts or between Alibaba Cloud International Website (www.alibabacloud.com) accounts. Cross-site association is not supported, such as between a China Website account and an International Website account.
 * - For scenarios that use authentication code authorization, no API is currently available for sending authentication codes.
 * #### **Precautions**
 * When you configure cross-account settings for the effective scope, billing is settled under the account that manages the built-in authoritative domain name.
 *
 * @param request AddUserVpcAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserVpcAuthorizationResponse
 */
AddUserVpcAuthorizationResponse Client::addUserVpcAuthorizationWithOptions(const AddUserVpcAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthChannel()) {
    query["AuthChannel"] = request.getAuthChannel();
  }

  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasAuthorizedUserId()) {
    query["AuthorizedUserId"] = request.getAuthorizedUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserVpcAuthorization"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserVpcAuthorizationResponse>();
}

/**
 * @summary Adds cross-account VPC authorization.
 *
 * @description #### **Limits**
 * - Cross-account settings for the effective scope only support Alibaba Cloud accounts (primary accounts) and do not support RAM users. Only accounts within the same site can be associated, such as between Alibaba Cloud China Website (www.aliyun.com) accounts or between Alibaba Cloud International Website (www.alibabacloud.com) accounts. Cross-site association is not supported, such as between a China Website account and an International Website account.
 * - For scenarios that use authentication code authorization, no API is currently available for sending authentication codes.
 * #### **Precautions**
 * When you configure cross-account settings for the effective scope, billing is settled under the account that manages the built-in authoritative domain name.
 *
 * @param request AddUserVpcAuthorizationRequest
 * @return AddUserVpcAuthorizationResponse
 */
AddUserVpcAuthorizationResponse Client::addUserVpcAuthorization(const AddUserVpcAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserVpcAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Call the AddZone operation to create a built-in authoritative zone. The built-in authoritative zone can be a standard zone or an accelerated zone.
 *
 * @description Starting from April 30, 2025 (UTC+8), zones added by new users of Alibaba Cloud DNS PrivateZone are set as accelerated zones by default. Starting from <props="china">October 30, 2025 (UTC+8)<props="intl">April 30, 2026 (UTC+8), all built-in authoritative standard zones will be automatically switched to accelerated zones. After the switch, the number of DNS queries may increase, which can increase your costs. To reduce the increase in DNS queries caused by the absence of a local cache, [enable NSCD for your ECS instances](https://help.aliyun.com/document_detail/2592999.html).
 *
 * @param request AddZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddZoneResponse
 */
AddZoneResponse Client::addZoneWithOptions(const AddZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDnsGroup()) {
    query["DnsGroup"] = request.getDnsGroup();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProxyPattern()) {
    query["ProxyPattern"] = request.getProxyPattern();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasZoneName()) {
    query["ZoneName"] = request.getZoneName();
  }

  if (!!request.hasZoneTag()) {
    query["ZoneTag"] = request.getZoneTag();
  }

  if (!!request.hasZoneType()) {
    query["ZoneType"] = request.getZoneType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddZone"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddZoneResponse>();
}

/**
 * @summary Call the AddZone operation to create a built-in authoritative zone. The built-in authoritative zone can be a standard zone or an accelerated zone.
 *
 * @description Starting from April 30, 2025 (UTC+8), zones added by new users of Alibaba Cloud DNS PrivateZone are set as accelerated zones by default. Starting from <props="china">October 30, 2025 (UTC+8)<props="intl">April 30, 2026 (UTC+8), all built-in authoritative standard zones will be automatically switched to accelerated zones. After the switch, the number of DNS queries may increase, which can increase your costs. To reduce the increase in DNS queries caused by the absence of a local cache, [enable NSCD for your ECS instances](https://help.aliyun.com/document_detail/2592999.html).
 *
 * @param request AddZoneRequest
 * @return AddZoneResponse
 */
AddZoneResponse Client::addZone(const AddZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addZoneWithOptions(request, runtime);
}

/**
 * @summary Call the AddZoneRecord operation to add a DNS record to an authoritative zone. Within the effective scope of the zone, the internal DNS record for a domain name overwrites its public DNS record.
 *
 * @param request AddZoneRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddZoneRecordResponse
 */
AddZoneRecordResponse Client::addZoneRecordWithOptions(const AddZoneRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLine()) {
    query["Line"] = request.getLine();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasRr()) {
    query["Rr"] = request.getRr();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  if (!!request.hasWeight()) {
    query["Weight"] = request.getWeight();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddZoneRecord"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddZoneRecordResponse>();
}

/**
 * @summary Call the AddZoneRecord operation to add a DNS record to an authoritative zone. Within the effective scope of the zone, the internal DNS record for a domain name overwrites its public DNS record.
 *
 * @param request AddZoneRecordRequest
 * @return AddZoneRecordResponse
 */
AddZoneRecordResponse Client::addZoneRecord(const AddZoneRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addZoneRecordWithOptions(request, runtime);
}

/**
 * @summary The BindResolverRuleVpc operation associates a forwarding rule with a virtual private cloud (VPC).
 *
 * @description >Notice: 
 * This operation performs a full replacement. Any existing VPC associations not included in your request will be removed. To add a new VPC, you must include the IDs of all VPCs that should remain associated.
 *
 * @param request BindResolverRuleVpcRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindResolverRuleVpcResponse
 */
BindResolverRuleVpcResponse Client::bindResolverRuleVpcWithOptions(const BindResolverRuleVpcRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasVpc()) {
    query["Vpc"] = request.getVpc();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindResolverRuleVpc"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindResolverRuleVpcResponse>();
}

/**
 * @summary The BindResolverRuleVpc operation associates a forwarding rule with a virtual private cloud (VPC).
 *
 * @description >Notice: 
 * This operation performs a full replacement. Any existing VPC associations not included in your request will be removed. To add a new VPC, you must include the IDs of all VPCs that should remain associated.
 *
 * @param request BindResolverRuleVpcRequest
 * @return BindResolverRuleVpcResponse
 */
BindResolverRuleVpcResponse Client::bindResolverRuleVpc(const BindResolverRuleVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindResolverRuleVpcWithOptions(request, runtime);
}

/**
 * @summary Binds a Zone to, or unbinds it from, one or more VPCs to define its effective scope.
 *
 * @description ##### Notes
 * We recommend binding VPCs to a Zone only after you configure all its DNS records. Otherwise, DNS queries for the domain name in the specified VPCs may fail. This issue does not occur if the subdomain recursive resolution proxy feature is enabled.
 * >Notice: This API operation performs a full overwrite. The list of VPCs provided in a request replaces all existing associated VPCs. To add a VPC, you must include the IDs of the new VPC and all existing VPCs that you want to retain.
 *
 * @param request BindZoneVpcRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindZoneVpcResponse
 */
BindZoneVpcResponse Client::bindZoneVpcWithOptions(const BindZoneVpcRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasVpcs()) {
    query["Vpcs"] = request.getVpcs();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindZoneVpc"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindZoneVpcResponse>();
}

/**
 * @summary Binds a Zone to, or unbinds it from, one or more VPCs to define its effective scope.
 *
 * @description ##### Notes
 * We recommend binding VPCs to a Zone only after you configure all its DNS records. Otherwise, DNS queries for the domain name in the specified VPCs may fail. This issue does not occur if the subdomain recursive resolution proxy feature is enabled.
 * >Notice: This API operation performs a full overwrite. The list of VPCs provided in a request replaces all existing associated VPCs. To add a VPC, you must include the IDs of the new VPC and all existing VPCs that you want to retain.
 *
 * @param request BindZoneVpcRequest
 * @return BindZoneVpcResponse
 */
BindZoneVpcResponse Client::bindZoneVpc(const BindZoneVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindZoneVpcWithOptions(request, runtime);
}

/**
 * @summary Modify the location of a ZONE.
 *
 * @description Starting April 30, 2025 (UTC+8), zones added by new Alibaba Cloud DNS PrivateZone users will be set to acceleration zones by default. <props="china">Starting October 30, 2025 (UTC+8)<props="intl">Starting April 30, 2026 (UTC+8), built-in authoritative zones in the standard zone group for all users will be automatically switched to the acceleration zone group. After the switch, the number of DNS requests may increase, which can result in higher usage costs. You can enable [NSCD for ECS](https://help.aliyun.com/document_detail/2592999.html) to reduce the increase in DNS requests caused by the lack of a local cache.
 *
 * @param request ChangeZoneDnsGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeZoneDnsGroupResponse
 */
ChangeZoneDnsGroupResponse Client::changeZoneDnsGroupWithOptions(const ChangeZoneDnsGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDnsGroup()) {
    query["DnsGroup"] = request.getDnsGroup();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeZoneDnsGroup"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeZoneDnsGroupResponse>();
}

/**
 * @summary Modify the location of a ZONE.
 *
 * @description Starting April 30, 2025 (UTC+8), zones added by new Alibaba Cloud DNS PrivateZone users will be set to acceleration zones by default. <props="china">Starting October 30, 2025 (UTC+8)<props="intl">Starting April 30, 2026 (UTC+8), built-in authoritative zones in the standard zone group for all users will be automatically switched to the acceleration zone group. After the switch, the number of DNS requests may increase, which can result in higher usage costs. You can enable [NSCD for ECS](https://help.aliyun.com/document_detail/2592999.html) to reduce the increase in DNS requests caused by the lack of a local cache.
 *
 * @param request ChangeZoneDnsGroupRequest
 * @return ChangeZoneDnsGroupResponse
 */
ChangeZoneDnsGroupResponse Client::changeZoneDnsGroup(const ChangeZoneDnsGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeZoneDnsGroupWithOptions(request, runtime);
}

/**
 * @summary You can call the CheckZoneName operation to check whether a zone name is available.
 *
 * @param request CheckZoneNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckZoneNameResponse
 */
CheckZoneNameResponse Client::checkZoneNameWithOptions(const CheckZoneNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasZoneName()) {
    query["ZoneName"] = request.getZoneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckZoneName"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckZoneNameResponse>();
}

/**
 * @summary You can call the CheckZoneName operation to check whether a zone name is available.
 *
 * @param request CheckZoneNameRequest
 * @return CheckZoneNameResponse
 */
CheckZoneNameResponse Client::checkZoneName(const CheckZoneNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkZoneNameWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom line.
 *
 * @param request DeleteCustomLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomLineResponse
 */
DeleteCustomLineResponse Client::deleteCustomLineWithOptions(const DeleteCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLineId()) {
    query["LineId"] = request.getLineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomLine"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomLineResponse>();
}

/**
 * @summary Deletes a custom line.
 *
 * @param request DeleteCustomLineRequest
 * @return DeleteCustomLineResponse
 */
DeleteCustomLineResponse Client::deleteCustomLine(const DeleteCustomLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomLineWithOptions(request, runtime);
}

/**
 * @summary You can call the DeleteResolverEndpoint operation to delete an endpoint by its ID.
 *
 * @param request DeleteResolverEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResolverEndpointResponse
 */
DeleteResolverEndpointResponse Client::deleteResolverEndpointWithOptions(const DeleteResolverEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResolverEndpoint"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResolverEndpointResponse>();
}

/**
 * @summary You can call the DeleteResolverEndpoint operation to delete an endpoint by its ID.
 *
 * @param request DeleteResolverEndpointRequest
 * @return DeleteResolverEndpointResponse
 */
DeleteResolverEndpointResponse Client::deleteResolverEndpoint(const DeleteResolverEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResolverEndpointWithOptions(request, runtime);
}

/**
 * @summary Deletes a forwarding rule by its ID.
 *
 * @param request DeleteResolverRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResolverRuleResponse
 */
DeleteResolverRuleResponse Client::deleteResolverRuleWithOptions(const DeleteResolverRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResolverRule"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResolverRuleResponse>();
}

/**
 * @summary Deletes a forwarding rule by its ID.
 *
 * @param request DeleteResolverRuleRequest
 * @return DeleteResolverRuleResponse
 */
DeleteResolverRuleResponse Client::deleteResolverRule(const DeleteResolverRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResolverRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a cross-account authorization based on a specified account ID and authorization type.
 *
 * @param request DeleteUserVpcAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserVpcAuthorizationResponse
 */
DeleteUserVpcAuthorizationResponse Client::deleteUserVpcAuthorizationWithOptions(const DeleteUserVpcAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasAuthorizedUserId()) {
    query["AuthorizedUserId"] = request.getAuthorizedUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserVpcAuthorization"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserVpcAuthorizationResponse>();
}

/**
 * @summary Deletes a cross-account authorization based on a specified account ID and authorization type.
 *
 * @param request DeleteUserVpcAuthorizationRequest
 * @return DeleteUserVpcAuthorizationResponse
 */
DeleteUserVpcAuthorizationResponse Client::deleteUserVpcAuthorization(const DeleteUserVpcAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserVpcAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Deletes an idle zone (built-in authoritative domain name).
 *
 * @description #### Notes
 * You must dissociate a zone from its scope before you delete it.
 *
 * @param request DeleteZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteZoneResponse
 */
DeleteZoneResponse Client::deleteZoneWithOptions(const DeleteZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteZone"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteZoneResponse>();
}

/**
 * @summary Deletes an idle zone (built-in authoritative domain name).
 *
 * @description #### Notes
 * You must dissociate a zone from its scope before you delete it.
 *
 * @param request DeleteZoneRequest
 * @return DeleteZoneResponse
 */
DeleteZoneResponse Client::deleteZone(const DeleteZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteZoneWithOptions(request, runtime);
}

/**
 * @summary The DeleteZoneRecord operation deletes a DNS record by its ID.
 *
 * @description #### **Notes**
 * This operation is irreversible. Deleted records cannot be recovered.
 *
 * @param request DeleteZoneRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteZoneRecordResponse
 */
DeleteZoneRecordResponse Client::deleteZoneRecordWithOptions(const DeleteZoneRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteZoneRecord"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteZoneRecordResponse>();
}

/**
 * @summary The DeleteZoneRecord operation deletes a DNS record by its ID.
 *
 * @description #### **Notes**
 * This operation is irreversible. Deleted records cannot be recovered.
 *
 * @param request DeleteZoneRecordRequest
 * @return DeleteZoneRecordResponse
 */
DeleteZoneRecordResponse Client::deleteZoneRecord(const DeleteZoneRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteZoneRecordWithOptions(request, runtime);
}

/**
 * @summary You can call the DescribeChangeLogs operation to retrieve the operation logs for a private zone. The logs record operations related to built-in authoritative zones, cache management, forwarding management, endpoints, and DNS record queries. You can perform a fuzzy search by keywords such as behavior and content.
 *
 * @description #### **Limits**
 * You can query operation logs for a private zone generated within the last six months.
 *
 * @param request DescribeChangeLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChangeLogsResponse
 */
DescribeChangeLogsResponse Client::describeChangeLogsWithOptions(const DescribeChangeLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.getEntityType();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
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

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChangeLogs"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChangeLogsResponse>();
}

/**
 * @summary You can call the DescribeChangeLogs operation to retrieve the operation logs for a private zone. The logs record operations related to built-in authoritative zones, cache management, forwarding management, endpoints, and DNS record queries. You can perform a fuzzy search by keywords such as behavior and content.
 *
 * @description #### **Limits**
 * You can query operation logs for a private zone generated within the last six months.
 *
 * @param request DescribeChangeLogsRequest
 * @return DescribeChangeLogsResponse
 */
DescribeChangeLogsResponse Client::describeChangeLogs(const DescribeChangeLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChangeLogsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a custom line.
 *
 * @param request DescribeCustomLineInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomLineInfoResponse
 */
DescribeCustomLineInfoResponse Client::describeCustomLineInfoWithOptions(const DescribeCustomLineInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLineId()) {
    query["LineId"] = request.getLineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomLineInfo"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomLineInfoResponse>();
}

/**
 * @summary Retrieves the details of a custom line.
 *
 * @param request DescribeCustomLineInfoRequest
 * @return DescribeCustomLineInfoResponse
 */
DescribeCustomLineInfoResponse Client::describeCustomLineInfo(const DescribeCustomLineInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomLineInfoWithOptions(request, runtime);
}

/**
 * @summary Queries a list of custom lines.
 *
 * @param request DescribeCustomLinesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomLinesResponse
 */
DescribeCustomLinesResponse Client::describeCustomLinesWithOptions(const DescribeCustomLinesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomLines"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomLinesResponse>();
}

/**
 * @summary Queries a list of custom lines.
 *
 * @param request DescribeCustomLinesRequest
 * @return DescribeCustomLinesResponse
 */
DescribeCustomLinesResponse Client::describeCustomLines(const DescribeCustomLinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomLinesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of VPCs that a user can analyze.
 *
 * @description This operation is not recommended due to its low performance. To retrieve a list of zones, call the `DescribeZones` operation. To get details about a VPC in a specific zone, call `DescribeZoneInfo` and specify the `zoneId`.
 *
 * @param request DescribeIntranetUserCanAnalysisVpcsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIntranetUserCanAnalysisVpcsResponse
 */
DescribeIntranetUserCanAnalysisVpcsResponse Client::describeIntranetUserCanAnalysisVpcsWithOptions(const DescribeIntranetUserCanAnalysisVpcsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryTreeLevel()) {
    query["QueryTreeLevel"] = request.getQueryTreeLevel();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVpcOwner()) {
    query["VpcOwner"] = request.getVpcOwner();
  }

  if (!!request.hasVpcType()) {
    query["VpcType"] = request.getVpcType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIntranetUserCanAnalysisVpcs"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIntranetUserCanAnalysisVpcsResponse>();
}

/**
 * @summary Retrieves a list of VPCs that a user can analyze.
 *
 * @description This operation is not recommended due to its low performance. To retrieve a list of zones, call the `DescribeZones` operation. To get details about a VPC in a specific zone, call `DescribeZoneInfo` and specify the `zoneId`.
 *
 * @param request DescribeIntranetUserCanAnalysisVpcsRequest
 * @return DescribeIntranetUserCanAnalysisVpcsResponse
 */
DescribeIntranetUserCanAnalysisVpcsResponse Client::describeIntranetUserCanAnalysisVpcs(const DescribeIntranetUserCanAnalysisVpcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIntranetUserCanAnalysisVpcsWithOptions(request, runtime);
}

/**
 * @summary Retrieves global DNS resolution statistics for PrivateZone.
 *
 * @description #### **Usage notes**
 * This operation queries tag information only for zone resources.
 *
 * @param request DescribePvtzStatisticsGlobalOverviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePvtzStatisticsGlobalOverviewResponse
 */
DescribePvtzStatisticsGlobalOverviewResponse Client::describePvtzStatisticsGlobalOverviewWithOptions(const DescribePvtzStatisticsGlobalOverviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkParams()) {
    query["NetworkParams"] = request.getNetworkParams();
  }

  if (!!request.hasOverviewPeriod()) {
    query["OverviewPeriod"] = request.getOverviewPeriod();
  }

  if (!!request.hasServerRegion()) {
    query["ServerRegion"] = request.getServerRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePvtzStatisticsGlobalOverview"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePvtzStatisticsGlobalOverviewResponse>();
}

/**
 * @summary Retrieves global DNS resolution statistics for PrivateZone.
 *
 * @description #### **Usage notes**
 * This operation queries tag information only for zone resources.
 *
 * @param request DescribePvtzStatisticsGlobalOverviewRequest
 * @return DescribePvtzStatisticsGlobalOverviewResponse
 */
DescribePvtzStatisticsGlobalOverviewResponse Client::describePvtzStatisticsGlobalOverview(const DescribePvtzStatisticsGlobalOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePvtzStatisticsGlobalOverviewWithOptions(request, runtime);
}

/**
 * @summary PrivateZone Resolution Trends
 *
 * @description #### **Limits**
 * Currently, you can only query tags for availability zone resources.
 *
 * @param request DescribePvtzStatisticsHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePvtzStatisticsHistoryResponse
 */
DescribePvtzStatisticsHistoryResponse Client::describePvtzStatisticsHistoryWithOptions(const DescribePvtzStatisticsHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasModule()) {
    query["Module"] = request.getModule();
  }

  if (!!request.hasNetworkParams()) {
    query["NetworkParams"] = request.getNetworkParams();
  }

  if (!!request.hasRcode()) {
    query["Rcode"] = request.getRcode();
  }

  if (!!request.hasServerRegion()) {
    query["ServerRegion"] = request.getServerRegion();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
  }

  if (!!request.hasStatisticalType()) {
    query["StatisticalType"] = request.getStatisticalType();
  }

  if (!!request.hasZoneName()) {
    query["ZoneName"] = request.getZoneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePvtzStatisticsHistory"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePvtzStatisticsHistoryResponse>();
}

/**
 * @summary PrivateZone Resolution Trends
 *
 * @description #### **Limits**
 * Currently, you can only query tags for availability zone resources.
 *
 * @param request DescribePvtzStatisticsHistoryRequest
 * @return DescribePvtzStatisticsHistoryResponse
 */
DescribePvtzStatisticsHistoryResponse Client::describePvtzStatisticsHistory(const DescribePvtzStatisticsHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePvtzStatisticsHistoryWithOptions(request, runtime);
}

/**
 * @summary PrivateZone Resolution Statistics Summary
 *
 * @description #### **Limits**
 * You can only query tags for zone resources.
 *
 * @param request DescribePvtzStatisticsSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePvtzStatisticsSummaryResponse
 */
DescribePvtzStatisticsSummaryResponse Client::describePvtzStatisticsSummaryWithOptions(const DescribePvtzStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasGrowType()) {
    query["GrowType"] = request.getGrowType();
  }

  if (!!request.hasModule()) {
    query["Module"] = request.getModule();
  }

  if (!!request.hasNetworkParams()) {
    query["NetworkParams"] = request.getNetworkParams();
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

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRcode()) {
    query["Rcode"] = request.getRcode();
  }

  if (!!request.hasServerRegion()) {
    query["ServerRegion"] = request.getServerRegion();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
  }

  if (!!request.hasStatisticalType()) {
    query["StatisticalType"] = request.getStatisticalType();
  }

  if (!!request.hasZoneName()) {
    query["ZoneName"] = request.getZoneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePvtzStatisticsSummary"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePvtzStatisticsSummaryResponse>();
}

/**
 * @summary PrivateZone Resolution Statistics Summary
 *
 * @description #### **Limits**
 * You can only query tags for zone resources.
 *
 * @param request DescribePvtzStatisticsSummaryRequest
 * @return DescribePvtzStatisticsSummaryResponse
 */
DescribePvtzStatisticsSummaryResponse Client::describePvtzStatisticsSummary(const DescribePvtzStatisticsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePvtzStatisticsSummaryWithOptions(request, runtime);
}

/**
 * @summary Provides an overview of resolution statistics for zones in PrivateZone.
 *
 * @description This is a low-performance operation and is not recommended. To retrieve a list of zones, use the DescribeZones operation. To get details of the VPCs bound to a zone, call the DescribeZoneInfo operation and specify the zone ID.
 *
 * @param request DescribePvtzStatisticsZoneOverviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePvtzStatisticsZoneOverviewResponse
 */
DescribePvtzStatisticsZoneOverviewResponse Client::describePvtzStatisticsZoneOverviewWithOptions(const DescribePvtzStatisticsZoneOverviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasModule()) {
    query["Module"] = request.getModule();
  }

  if (!!request.hasNetworkParams()) {
    query["NetworkParams"] = request.getNetworkParams();
  }

  if (!!request.hasOverviewPeriod()) {
    query["OverviewPeriod"] = request.getOverviewPeriod();
  }

  if (!!request.hasServerRegion()) {
    query["ServerRegion"] = request.getServerRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePvtzStatisticsZoneOverview"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePvtzStatisticsZoneOverviewResponse>();
}

/**
 * @summary Provides an overview of resolution statistics for zones in PrivateZone.
 *
 * @description This is a low-performance operation and is not recommended. To retrieve a list of zones, use the DescribeZones operation. To get details of the VPCs bound to a zone, call the DescribeZoneInfo operation and specify the zone ID.
 *
 * @param request DescribePvtzStatisticsZoneOverviewRequest
 * @return DescribePvtzStatisticsZoneOverviewResponse
 */
DescribePvtzStatisticsZoneOverviewResponse Client::describePvtzStatisticsZoneOverview(const DescribePvtzStatisticsZoneOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePvtzStatisticsZoneOverviewWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeRegions operation to query a list of available regions. You can filter the list by criteria such as the scenario and VPC type.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAuthorizedUserId()) {
    query["AuthorizedUserId"] = request.getAuthorizedUserId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.getScene();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasVpcType()) {
    query["VpcType"] = request.getVpcType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2018-01-01"},
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
 * @summary Call the DescribeRegions operation to query a list of available regions. You can filter the list by criteria such as the scenario and VPC type.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries details about the number of requests based on conditions such as a time range.
 *
 * @param request DescribeRequestGraphRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRequestGraphResponse
 */
DescribeRequestGraphResponse Client::describeRequestGraphWithOptions(const DescribeRequestGraphRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRequestGraph"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRequestGraphResponse>();
}

/**
 * @summary Queries details about the number of requests based on conditions such as a time range.
 *
 * @param request DescribeRequestGraphRequest
 * @return DescribeRequestGraphResponse
 */
DescribeRequestGraphResponse Client::describeRequestGraph(const DescribeRequestGraphRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRequestGraphWithOptions(request, runtime);
}

/**
 * @summary Call DescribeResolverAvailableZones to retrieve a list of available zones.
 *
 * @param request DescribeResolverAvailableZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResolverAvailableZonesResponse
 */
DescribeResolverAvailableZonesResponse Client::describeResolverAvailableZonesWithOptions(const DescribeResolverAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAzId()) {
    query["AzId"] = request.getAzId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResolverRegionId()) {
    query["ResolverRegionId"] = request.getResolverRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResolverAvailableZones"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResolverAvailableZonesResponse>();
}

/**
 * @summary Call DescribeResolverAvailableZones to retrieve a list of available zones.
 *
 * @param request DescribeResolverAvailableZonesRequest
 * @return DescribeResolverAvailableZonesResponse
 */
DescribeResolverAvailableZonesResponse Client::describeResolverAvailableZones(const DescribeResolverAvailableZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResolverAvailableZonesWithOptions(request, runtime);
}

/**
 * @summary You can call DescribeResolverEndpoint to retrieve the details of an endpoint by its ID.
 *
 * @param request DescribeResolverEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResolverEndpointResponse
 */
DescribeResolverEndpointResponse Client::describeResolverEndpointWithOptions(const DescribeResolverEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResolverEndpoint"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResolverEndpointResponse>();
}

/**
 * @summary You can call DescribeResolverEndpoint to retrieve the details of an endpoint by its ID.
 *
 * @param request DescribeResolverEndpointRequest
 * @return DescribeResolverEndpointResponse
 */
DescribeResolverEndpointResponse Client::describeResolverEndpoint(const DescribeResolverEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResolverEndpointWithOptions(request, runtime);
}

/**
 * @summary You can call DescribeResolverEndpoints to retrieve a list of endpoints.
 *
 * @param request DescribeResolverEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResolverEndpointsResponse
 */
DescribeResolverEndpointsResponse Client::describeResolverEndpointsWithOptions(const DescribeResolverEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
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

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasVpcRegionId()) {
    query["VpcRegionId"] = request.getVpcRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResolverEndpoints"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResolverEndpointsResponse>();
}

/**
 * @summary You can call DescribeResolverEndpoints to retrieve a list of endpoints.
 *
 * @param request DescribeResolverEndpointsRequest
 * @return DescribeResolverEndpointsResponse
 */
DescribeResolverEndpointsResponse Client::describeResolverEndpoints(const DescribeResolverEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResolverEndpointsWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeResolverRule operation to retrieve the details of a forwarding rule.
 *
 * @param request DescribeResolverRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResolverRuleResponse
 */
DescribeResolverRuleResponse Client::describeResolverRuleWithOptions(const DescribeResolverRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResolverRule"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResolverRuleResponse>();
}

/**
 * @summary Call the DescribeResolverRule operation to retrieve the details of a forwarding rule.
 *
 * @param request DescribeResolverRuleRequest
 * @return DescribeResolverRuleResponse
 */
DescribeResolverRuleResponse Client::describeResolverRule(const DescribeResolverRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResolverRuleWithOptions(request, runtime);
}

/**
 * @summary Describes one or more forwarding rules.
 *
 * @param request DescribeResolverRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResolverRulesResponse
 */
DescribeResolverRulesResponse Client::describeResolverRulesWithOptions(const DescribeResolverRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNeedDetailAttributes()) {
    query["NeedDetailAttributes"] = request.getNeedDetailAttributes();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResolverRules"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResolverRulesResponse>();
}

/**
 * @summary Describes one or more forwarding rules.
 *
 * @param request DescribeResolverRulesRequest
 * @return DescribeResolverRulesResponse
 */
DescribeResolverRulesResponse Client::describeResolverRules(const DescribeResolverRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResolverRulesWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeStatisticSummary operation to retrieve a summary of yesterday\\"s request volume. This summary includes the top three zones and top three VPCs ranked by request volume.
 *
 * @param request DescribeStatisticSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStatisticSummaryResponse
 */
DescribeStatisticSummaryResponse Client::describeStatisticSummaryWithOptions(const DescribeStatisticSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStatisticSummary"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStatisticSummaryResponse>();
}

/**
 * @summary Call the DescribeStatisticSummary operation to retrieve a summary of yesterday\\"s request volume. This summary includes the top three zones and top three VPCs ranked by request volume.
 *
 * @param request DescribeStatisticSummaryRequest
 * @return DescribeStatisticSummaryResponse
 */
DescribeStatisticSummaryResponse Client::describeStatisticSummary(const DescribeStatisticSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStatisticSummaryWithOptions(request, runtime);
}

/**
 * @summary Call DescribeSyncEcsHostTask to retrieve the details of a hostname sync task based on a zone ID.
 *
 * @param request DescribeSyncEcsHostTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSyncEcsHostTaskResponse
 */
DescribeSyncEcsHostTaskResponse Client::describeSyncEcsHostTaskWithOptions(const DescribeSyncEcsHostTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSyncEcsHostTask"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSyncEcsHostTaskResponse>();
}

/**
 * @summary Call DescribeSyncEcsHostTask to retrieve the details of a hostname sync task based on a zone ID.
 *
 * @param request DescribeSyncEcsHostTaskRequest
 * @return DescribeSyncEcsHostTaskResponse
 */
DescribeSyncEcsHostTaskResponse Client::describeSyncEcsHostTask(const DescribeSyncEcsHostTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSyncEcsHostTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to resources in PrivateZone.
 *
 * @description #### **Limits**
 * You can query tags for zone resources only.
 *
 * @param request DescribeTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTagsWithOptions(const DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTags"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsResponse>();
}

/**
 * @summary Queries the tags that are added to resources in PrivateZone.
 *
 * @description #### **Limits**
 * You can query tags for zone resources only.
 *
 * @param request DescribeTagsRequest
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTags(const DescribeTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsWithOptions(request, runtime);
}

/**
 * @summary Queries the service status of the current user, which indicates whether the service is activated or has overdue payments.
 *
 * @param request DescribeUserServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserServiceStatusResponse
 */
DescribeUserServiceStatusResponse Client::describeUserServiceStatusWithOptions(const DescribeUserServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserServiceStatus"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserServiceStatusResponse>();
}

/**
 * @summary Queries the service status of the current user, which indicates whether the service is activated or has overdue payments.
 *
 * @param request DescribeUserServiceStatusRequest
 * @return DescribeUserServiceStatusResponse
 */
DescribeUserServiceStatusResponse Client::describeUserServiceStatus(const DescribeUserServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeUserVpcAuthorizations operation to retrieve a list of cross-account authorizations.
 *
 * @param request DescribeUserVpcAuthorizationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserVpcAuthorizationsResponse
 */
DescribeUserVpcAuthorizationsResponse Client::describeUserVpcAuthorizationsWithOptions(const DescribeUserVpcAuthorizationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasAuthorizedUserId()) {
    query["AuthorizedUserId"] = request.getAuthorizedUserId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserVpcAuthorizations"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserVpcAuthorizationsResponse>();
}

/**
 * @summary Call the DescribeUserVpcAuthorizations operation to retrieve a list of cross-account authorizations.
 *
 * @param request DescribeUserVpcAuthorizationsRequest
 * @return DescribeUserVpcAuthorizationsResponse
 */
DescribeUserVpcAuthorizationsResponse Client::describeUserVpcAuthorizations(const DescribeUserVpcAuthorizationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserVpcAuthorizationsWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeZoneInfo operation to retrieve the details of a specified built-in authoritative zone. The details include the list of VPCs that are bound to the zone.
 *
 * @param request DescribeZoneInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZoneInfoResponse
 */
DescribeZoneInfoResponse Client::describeZoneInfoWithOptions(const DescribeZoneInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZoneInfo"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeZoneInfoResponse>();
}

/**
 * @summary Call the DescribeZoneInfo operation to retrieve the details of a specified built-in authoritative zone. The details include the list of VPCs that are bound to the zone.
 *
 * @param request DescribeZoneInfoRequest
 * @return DescribeZoneInfoResponse
 */
DescribeZoneInfoResponse Client::describeZoneInfo(const DescribeZoneInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZoneInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a DNS record.
 *
 * @param request DescribeZoneRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZoneRecordResponse
 */
DescribeZoneRecordResponse Client::describeZoneRecordWithOptions(const DescribeZoneRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZoneRecord"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeZoneRecordResponse>();
}

/**
 * @summary Queries the details of a DNS record.
 *
 * @param request DescribeZoneRecordRequest
 * @return DescribeZoneRecordResponse
 */
DescribeZoneRecordResponse Client::describeZoneRecord(const DescribeZoneRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZoneRecordWithOptions(request, runtime);
}

/**
 * @summary You can call DescribeZoneRecords to query DNS records for a zone.
 *
 * @param request DescribeZoneRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZoneRecordsResponse
 */
DescribeZoneRecordsResponse Client::describeZoneRecordsWithOptions(const DescribeZoneRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
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

  if (!!request.hasSearchMode()) {
    query["SearchMode"] = request.getSearchMode();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZoneRecords"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeZoneRecordsResponse>();
}

/**
 * @summary You can call DescribeZoneRecords to query DNS records for a zone.
 *
 * @param request DescribeZoneRecordsRequest
 * @return DescribeZoneRecordsResponse
 */
DescribeZoneRecordsResponse Client::describeZoneRecords(const DescribeZoneRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZoneRecordsWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeZoneVpcTree operation to query the zones and the Virtual Private Clouds (VPCs) attached to them in your account.
 *
 * @description This operation is not recommended due to low performance. To retrieve a list of zones, call DescribeZones. To retrieve the details of attached VPCs, call DescribeZoneInfo with the zone ID.
 *
 * @param request DescribeZoneVpcTreeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZoneVpcTreeResponse
 */
DescribeZoneVpcTreeResponse Client::describeZoneVpcTreeWithOptions(const DescribeZoneVpcTreeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZoneVpcTree"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeZoneVpcTreeResponse>();
}

/**
 * @summary Call the DescribeZoneVpcTree operation to query the zones and the Virtual Private Clouds (VPCs) attached to them in your account.
 *
 * @description This operation is not recommended due to low performance. To retrieve a list of zones, call DescribeZones. To retrieve the details of attached VPCs, call DescribeZoneInfo with the zone ID.
 *
 * @param request DescribeZoneVpcTreeRequest
 * @return DescribeZoneVpcTreeResponse
 */
DescribeZoneVpcTreeResponse Client::describeZoneVpcTree(const DescribeZoneVpcTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZoneVpcTreeWithOptions(request, runtime);
}

/**
 * @summary You can call the DescribeZones operation to query a list of zones available to your account.
 *
 * @param request DescribeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZonesWithOptions(const DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
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

  if (!!request.hasQueryRegionId()) {
    query["QueryRegionId"] = request.getQueryRegionId();
  }

  if (!!request.hasQueryVpcId()) {
    query["QueryVpcId"] = request.getQueryVpcId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceTag()) {
    query["ResourceTag"] = request.getResourceTag();
  }

  if (!!request.hasSearchMode()) {
    query["SearchMode"] = request.getSearchMode();
  }

  if (!!request.hasZoneTag()) {
    query["ZoneTag"] = request.getZoneTag();
  }

  if (!!request.hasZoneType()) {
    query["ZoneType"] = request.getZoneType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZones"},
    {"version" , "2018-01-01"},
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
 * @summary You can call the DescribeZones operation to query a list of zones available to your account.
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to resources in Private Zone.
 *
 * @description #### **Limits**
 * This operation queries tags for zone resources only.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.getSize();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2018-01-01"},
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
 * @summary Queries the tags that are added to resources in Private Zone.
 *
 * @description #### **Limits**
 * This operation queries tags for zone resources only.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary You can call the MoveResourceGroup operation to move a resource to a different resource group.
 *
 * @description #### Conditions
 * This operation can be used to change the resource group of only zone-specific resources.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourceGroupResponse>();
}

/**
 * @summary You can call the MoveResourceGroup operation to move a resource to a different resource group.
 *
 * @description #### Conditions
 * This operation can be used to change the resource group of only zone-specific resources.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Searches for custom access control lists (ACLs).
 *
 * @param request SearchCustomLinesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchCustomLinesResponse
 */
SearchCustomLinesResponse Client::searchCustomLinesWithOptions(const SearchCustomLinesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimestampEnd()) {
    query["CreateTimestampEnd"] = request.getCreateTimestampEnd();
  }

  if (!!request.hasCreateTimestampStart()) {
    query["CreateTimestampStart"] = request.getCreateTimestampStart();
  }

  if (!!request.hasCreator()) {
    query["Creator"] = request.getCreator();
  }

  if (!!request.hasIpv4()) {
    query["Ipv4"] = request.getIpv4();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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

  if (!!request.hasUpdateTimestampEnd()) {
    query["UpdateTimestampEnd"] = request.getUpdateTimestampEnd();
  }

  if (!!request.hasUpdateTimestampStart()) {
    query["UpdateTimestampStart"] = request.getUpdateTimestampStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchCustomLines"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchCustomLinesResponse>();
}

/**
 * @summary Searches for custom access control lists (ACLs).
 *
 * @param request SearchCustomLinesRequest
 * @return SearchCustomLinesResponse
 */
SearchCustomLinesResponse Client::searchCustomLines(const SearchCustomLinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchCustomLinesWithOptions(request, runtime);
}

/**
 * @summary Sets the recursive resolution proxy for subdomains.
 *
 * @param request SetProxyPatternRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetProxyPatternResponse
 */
SetProxyPatternResponse Client::setProxyPatternWithOptions(const SetProxyPatternRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProxyPattern()) {
    query["ProxyPattern"] = request.getProxyPattern();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetProxyPattern"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetProxyPatternResponse>();
}

/**
 * @summary Sets the recursive resolution proxy for subdomains.
 *
 * @param request SetProxyPatternRequest
 * @return SetProxyPatternResponse
 */
SetProxyPatternResponse Client::setProxyPattern(const SetProxyPatternRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setProxyPatternWithOptions(request, runtime);
}

/**
 * @summary Sets the weight enabling status.
 *
 * @description #### Precautions
 * Built-in authoritative domain names that have configured domain name effective scopes must first be dissociated from the domain name effective scope before they can be deleted.
 *
 * @param request SetZoneLbaStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetZoneLbaStatusResponse
 */
SetZoneLbaStatusResponse Client::setZoneLbaStatusWithOptions(const SetZoneLbaStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLine()) {
    query["Line"] = request.getLine();
  }

  if (!!request.hasOpen()) {
    query["Open"] = request.getOpen();
  }

  if (!!request.hasRr()) {
    query["Rr"] = request.getRr();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetZoneLbaStatus"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetZoneLbaStatusResponse>();
}

/**
 * @summary Sets the weight enabling status.
 *
 * @description #### Precautions
 * Built-in authoritative domain names that have configured domain name effective scopes must first be dissociated from the domain name effective scope before they can be deleted.
 *
 * @param request SetZoneLbaStatusRequest
 * @return SetZoneLbaStatusResponse
 */
SetZoneLbaStatusResponse Client::setZoneLbaStatus(const SetZoneLbaStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setZoneLbaStatusWithOptions(request, runtime);
}

/**
 * @summary You can call SetZoneRecordStatus to set the status of a DNS record for a zone. This enables or pauses DNS resolution.
 *
 * @param request SetZoneRecordStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetZoneRecordStatusResponse
 */
SetZoneRecordStatusResponse Client::setZoneRecordStatusWithOptions(const SetZoneRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetZoneRecordStatus"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetZoneRecordStatusResponse>();
}

/**
 * @summary You can call SetZoneRecordStatus to set the status of a DNS record for a zone. This enables or pauses DNS resolution.
 *
 * @param request SetZoneRecordStatusRequest
 * @return SetZoneRecordStatusResponse
 */
SetZoneRecordStatusResponse Client::setZoneRecordStatus(const SetZoneRecordStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setZoneRecordStatusWithOptions(request, runtime);
}

/**
 * @summary You can call the TagResources operation to add or modify tags for one or more zones in a batch.
 *
 * @description ##### Limits
 * You can add tags only to zone resources.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOverWrite()) {
    query["OverWrite"] = request.getOverWrite();
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
    {"version" , "2018-01-01"},
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
 * @summary You can call the TagResources operation to add or modify tags for one or more zones in a batch.
 *
 * @description ##### Limits
 * You can add tags only to zone resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary You can call the UntagResources operation to remove tags from one or more zones in PrivateZone.
 *
 * @description #### **Limits**
 * You can remove tags only from zone resources.
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

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
    {"version" , "2018-01-01"},
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
 * @summary You can call the UntagResources operation to remove tags from one or more zones in PrivateZone.
 *
 * @description #### **Limits**
 * You can remove tags only from zone resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates a custom line.
 *
 * @param request UpdateCustomLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomLineResponse
 */
UpdateCustomLineResponse Client::updateCustomLineWithOptions(const UpdateCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDnsCategory()) {
    query["DnsCategory"] = request.getDnsCategory();
  }

  if (!!request.hasIpv4s()) {
    query["Ipv4s"] = request.getIpv4s();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLineId()) {
    query["LineId"] = request.getLineId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustomLine"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomLineResponse>();
}

/**
 * @summary Updates a custom line.
 *
 * @param request UpdateCustomLineRequest
 * @return UpdateCustomLineResponse
 */
UpdateCustomLineResponse Client::updateCustomLine(const UpdateCustomLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomLineWithOptions(request, runtime);
}

/**
 * @summary You can call the UpdateRecordRemark operation to modify the remarks of a DNS record based on its ID.
 *
 * @param request UpdateRecordRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecordRemarkResponse
 */
UpdateRecordRemarkResponse Client::updateRecordRemarkWithOptions(const UpdateRecordRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRecordRemark"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecordRemarkResponse>();
}

/**
 * @summary You can call the UpdateRecordRemark operation to modify the remarks of a DNS record based on its ID.
 *
 * @param request UpdateRecordRemarkRequest
 * @return UpdateRecordRemarkResponse
 */
UpdateRecordRemarkResponse Client::updateRecordRemark(const UpdateRecordRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecordRemarkWithOptions(request, runtime);
}

/**
 * @summary Updates an endpoint.
 *
 * @param request UpdateResolverEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResolverEndpointResponse
 */
UpdateResolverEndpointResponse Client::updateResolverEndpointWithOptions(const UpdateResolverEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasIpConfig()) {
    query["IpConfig"] = request.getIpConfig();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateResolverEndpoint"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResolverEndpointResponse>();
}

/**
 * @summary Updates an endpoint.
 *
 * @param request UpdateResolverEndpointRequest
 * @return UpdateResolverEndpointResponse
 */
UpdateResolverEndpointResponse Client::updateResolverEndpoint(const UpdateResolverEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateResolverEndpointWithOptions(request, runtime);
}

/**
 * @summary Modifies a forwarding rule.
 *
 * @param request UpdateResolverRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResolverRuleResponse
 */
UpdateResolverRuleResponse Client::updateResolverRuleWithOptions(const UpdateResolverRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasForwardIp()) {
    query["ForwardIp"] = request.getForwardIp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPriorityForwardConfigs()) {
    query["PriorityForwardConfigs"] = request.getPriorityForwardConfigs();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateResolverRule"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResolverRuleResponse>();
}

/**
 * @summary Modifies a forwarding rule.
 *
 * @param request UpdateResolverRuleRequest
 * @return UpdateResolverRuleResponse
 */
UpdateResolverRuleResponse Client::updateResolverRule(const UpdateResolverRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateResolverRuleWithOptions(request, runtime);
}

/**
 * @summary Call the UpdateSyncEcsHostTask operation to add or update a hostname sync task.
 *
 * @param request UpdateSyncEcsHostTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSyncEcsHostTaskResponse
 */
UpdateSyncEcsHostTaskResponse Client::updateSyncEcsHostTaskWithOptions(const UpdateSyncEcsHostTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSyncEcsHostTask"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSyncEcsHostTaskResponse>();
}

/**
 * @summary Call the UpdateSyncEcsHostTask operation to add or update a hostname sync task.
 *
 * @param request UpdateSyncEcsHostTaskRequest
 * @return UpdateSyncEcsHostTaskResponse
 */
UpdateSyncEcsHostTaskResponse Client::updateSyncEcsHostTask(const UpdateSyncEcsHostTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSyncEcsHostTaskWithOptions(request, runtime);
}

/**
 * @summary The UpdateZoneRecord operation modifies a DNS record for a zone. You can change properties such as the host record, record type, and weight.
 *
 * @description #### **Notes**
 * Modifications to DNS records in standard zones take effect after the Time to Live (TTL) expires. Modifications to DNS records in acceleration regions take effect immediately and are not affected by the TTL.
 *
 * @param request UpdateZoneRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateZoneRecordResponse
 */
UpdateZoneRecordResponse Client::updateZoneRecordWithOptions(const UpdateZoneRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLine()) {
    query["Line"] = request.getLine();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasRr()) {
    query["Rr"] = request.getRr();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  if (!!request.hasWeight()) {
    query["Weight"] = request.getWeight();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateZoneRecord"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateZoneRecordResponse>();
}

/**
 * @summary The UpdateZoneRecord operation modifies a DNS record for a zone. You can change properties such as the host record, record type, and weight.
 *
 * @description #### **Notes**
 * Modifications to DNS records in standard zones take effect after the Time to Live (TTL) expires. Modifications to DNS records in acceleration regions take effect immediately and are not affected by the TTL.
 *
 * @param request UpdateZoneRecordRequest
 * @return UpdateZoneRecordResponse
 */
UpdateZoneRecordResponse Client::updateZoneRecord(const UpdateZoneRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateZoneRecordWithOptions(request, runtime);
}

/**
 * @summary Updates the weight value of an authoritative DNS record in Alibaba Cloud DNS PrivateZone.
 *
 * @description Updates the weight value of an authoritative DNS record in Alibaba Cloud DNS PrivateZone.
 *
 * @param request UpdateZoneRecordWeightRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateZoneRecordWeightResponse
 */
UpdateZoneRecordWeightResponse Client::updateZoneRecordWeightWithOptions(const UpdateZoneRecordWeightRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasWeight()) {
    query["Weight"] = request.getWeight();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateZoneRecordWeight"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateZoneRecordWeightResponse>();
}

/**
 * @summary Updates the weight value of an authoritative DNS record in Alibaba Cloud DNS PrivateZone.
 *
 * @description Updates the weight value of an authoritative DNS record in Alibaba Cloud DNS PrivateZone.
 *
 * @param request UpdateZoneRecordWeightRequest
 * @return UpdateZoneRecordWeightResponse
 */
UpdateZoneRecordWeightResponse Client::updateZoneRecordWeight(const UpdateZoneRecordWeightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateZoneRecordWeightWithOptions(request, runtime);
}

/**
 * @summary Modifies the remark for a built-in authoritative domain name (zone).
 *
 * @param request UpdateZoneRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateZoneRemarkResponse
 */
UpdateZoneRemarkResponse Client::updateZoneRemarkWithOptions(const UpdateZoneRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateZoneRemark"},
    {"version" , "2018-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateZoneRemarkResponse>();
}

/**
 * @summary Modifies the remark for a built-in authoritative domain name (zone).
 *
 * @param request UpdateZoneRemarkRequest
 * @return UpdateZoneRemarkResponse
 */
UpdateZoneRemarkResponse Client::updateZoneRemark(const UpdateZoneRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateZoneRemarkWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Pvtz20180101