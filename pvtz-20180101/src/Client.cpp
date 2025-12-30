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
  this->_endpointRule = "central";
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
 * @summary Creates an endpoint.
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
 * @summary Creates an endpoint.
 *
 * @param request AddResolverEndpointRequest
 * @return AddResolverEndpointResponse
 */
AddResolverEndpointResponse Client::addResolverEndpoint(const AddResolverEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addResolverEndpointWithOptions(request, runtime);
}

/**
 * @summary Creates a forwarding rule.
 *
 * @description #### [](#)**Precautions**
 * If a virtual private cloud (VPC) serves as both an inbound VPC and an outbound VPC, the IP addresses of external Domain Name System (DNS) servers cannot be the same as the IP addresses of the inbound endpoint in the VPC. The IP addresses of the external DNS servers are specified in the forwarding rule associated with the outbound endpoint in the same VPC. If the IP addresses are the same, the DNS requests sent from the IP addresses of the inbound endpoint are returned to the VPC. This results in resolution failures.
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
 * @summary Creates a forwarding rule.
 *
 * @description #### [](#)**Precautions**
 * If a virtual private cloud (VPC) serves as both an inbound VPC and an outbound VPC, the IP addresses of external Domain Name System (DNS) servers cannot be the same as the IP addresses of the inbound endpoint in the VPC. The IP addresses of the external DNS servers are specified in the forwarding rule associated with the outbound endpoint in the same VPC. If the IP addresses are the same, the DNS requests sent from the IP addresses of the inbound endpoint are returned to the VPC. This results in resolution failures.
 *
 * @param request AddResolverRuleRequest
 * @return AddResolverRuleResponse
 */
AddResolverRuleResponse Client::addResolverRule(const AddResolverRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addResolverRuleWithOptions(request, runtime);
}

/**
 * @summary Adds another account to associate one or more virtual private clouds (VPCs) of the current account with a private zone.
 *
 * @description #### **Limits**
 * *   You can set an effective scope across accounts only by using an Alibaba Cloud account instead of a RAM user. You can set an effective scope across accounts registered on the same site. For example, you can perform the operation across accounts that are both registered on the Alibaba Cloud China site or Alibaba Cloud international site. You cannot set an effective scope across accounts registered on different sites. For example, you cannot perform the operation across accounts that are separately registered on the Alibaba Cloud China site and Alibaba Cloud international site.
 * *   No API operation is provided for sending the verification codes that are required for authorization.
 * #### **Precautions**
 * If you set an effective scope across accounts, bills are settled within the account that is used to perform routine management on built-in authoritative zones.
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
 * @summary Adds another account to associate one or more virtual private clouds (VPCs) of the current account with a private zone.
 *
 * @description #### **Limits**
 * *   You can set an effective scope across accounts only by using an Alibaba Cloud account instead of a RAM user. You can set an effective scope across accounts registered on the same site. For example, you can perform the operation across accounts that are both registered on the Alibaba Cloud China site or Alibaba Cloud international site. You cannot set an effective scope across accounts registered on different sites. For example, you cannot perform the operation across accounts that are separately registered on the Alibaba Cloud China site and Alibaba Cloud international site.
 * *   No API operation is provided for sending the verification codes that are required for authorization.
 * #### **Precautions**
 * If you set an effective scope across accounts, bills are settled within the account that is used to perform routine management on built-in authoritative zones.
 *
 * @param request AddUserVpcAuthorizationRequest
 * @return AddUserVpcAuthorizationResponse
 */
AddUserVpcAuthorizationResponse Client::addUserVpcAuthorization(const AddUserVpcAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserVpcAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Creates a built-in authoritative zone in the regular module or acceleration module.
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
 * @summary Creates a built-in authoritative zone in the regular module or acceleration module.
 *
 * @param request AddZoneRequest
 * @return AddZoneResponse
 */
AddZoneResponse Client::addZone(const AddZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addZoneWithOptions(request, runtime);
}

/**
 * @summary Adds a Domain Name System (DNS) record for a built-in authoritative zone. Within the effective scope, the intranet DNS records rather than the Internet DNS records take effect for the zone.
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
 * @summary Adds a Domain Name System (DNS) record for a built-in authoritative zone. Within the effective scope, the intranet DNS records rather than the Internet DNS records take effect for the zone.
 *
 * @param request AddZoneRecordRequest
 * @return AddZoneRecordResponse
 */
AddZoneRecordResponse Client::addZoneRecord(const AddZoneRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addZoneRecordWithOptions(request, runtime);
}

/**
 * @summary Associates a forwarding rule with virtual private clouds (VPCs).
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
 * @summary Associates a forwarding rule with virtual private clouds (VPCs).
 *
 * @param request BindResolverRuleVpcRequest
 * @return BindResolverRuleVpcResponse
 */
BindResolverRuleVpcResponse Client::bindResolverRuleVpc(const BindResolverRuleVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindResolverRuleVpcWithOptions(request, runtime);
}

/**
 * @summary Associates or dissociates virtual private clouds (VPCs) from a zone to set the effective scope of the zone.
 *
 * @description ##### [](#)Precautions:
 * We recommend that you set the effective scope of a zone after you configure all Domain Name System (DNS) records. If you set an effective scope before you configure DNS records, the DNS resolution for the zone within the effective scope will fail unless you enable the recursive resolution proxy for subdomain names.
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
 * @summary Associates or dissociates virtual private clouds (VPCs) from a zone to set the effective scope of the zone.
 *
 * @description ##### [](#)Precautions:
 * We recommend that you set the effective scope of a zone after you configure all Domain Name System (DNS) records. If you set an effective scope before you configure DNS records, the DNS resolution for the zone within the effective scope will fail unless you enable the recursive resolution proxy for subdomain names.
 *
 * @param request BindZoneVpcRequest
 * @return BindZoneVpcResponse
 */
BindZoneVpcResponse Client::bindZoneVpc(const BindZoneVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindZoneVpcWithOptions(request, runtime);
}

/**
 * @summary Changes the logical location of a zone.
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
 * @summary Changes the logical location of a zone.
 *
 * @param request ChangeZoneDnsGroupRequest
 * @return ChangeZoneDnsGroupResponse
 */
ChangeZoneDnsGroupResponse Client::changeZoneDnsGroup(const ChangeZoneDnsGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeZoneDnsGroupWithOptions(request, runtime);
}

/**
 * @summary Checks whether a zone name can be added based on a rule.
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
 * @summary Checks whether a zone name can be added based on a rule.
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
 * @summary Deletes an endpoint based on the endpoint ID.
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
 * @summary Deletes an endpoint based on the endpoint ID.
 *
 * @param request DeleteResolverEndpointRequest
 * @return DeleteResolverEndpointResponse
 */
DeleteResolverEndpointResponse Client::deleteResolverEndpoint(const DeleteResolverEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResolverEndpointWithOptions(request, runtime);
}

/**
 * @summary Deletes a forwarding rule based on the rule ID.
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
 * @summary Deletes a forwarding rule based on the rule ID.
 *
 * @param request DeleteResolverRuleRequest
 * @return DeleteResolverRuleResponse
 */
DeleteResolverRuleResponse Client::deleteResolverRule(const DeleteResolverRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResolverRuleWithOptions(request, runtime);
}

/**
 * @summary Removes an account from the central management of private Domain Name System (DNS) resolution based on the account ID and authorization type.
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
 * @summary Removes an account from the central management of private Domain Name System (DNS) resolution based on the account ID and authorization type.
 *
 * @param request DeleteUserVpcAuthorizationRequest
 * @return DeleteUserVpcAuthorizationResponse
 */
DeleteUserVpcAuthorizationResponse Client::deleteUserVpcAuthorization(const DeleteUserVpcAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserVpcAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Deletes an idle built-in authoritative zone.
 *
 * @description #### [](#)Precautions
 * If you want to delete a built-in authoritative zone whose effective scope is configured, you must disassociate the zone from the effective scope first.
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
 * @summary Deletes an idle built-in authoritative zone.
 *
 * @description #### [](#)Precautions
 * If you want to delete a built-in authoritative zone whose effective scope is configured, you must disassociate the zone from the effective scope first.
 *
 * @param request DeleteZoneRequest
 * @return DeleteZoneResponse
 */
DeleteZoneResponse Client::deleteZone(const DeleteZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteZoneWithOptions(request, runtime);
}

/**
 * @summary Deletes a Domain Name System (DNS) record based on the ID of the DNS record.
 *
 * @description #### **Precautions**
 * Deleted DNS records cannot be restored. Exercise caution when you perform this operation.
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
 * @summary Deletes a Domain Name System (DNS) record based on the ID of the DNS record.
 *
 * @description #### **Precautions**
 * Deleted DNS records cannot be restored. Exercise caution when you perform this operation.
 *
 * @param request DeleteZoneRecordRequest
 * @return DeleteZoneRecordResponse
 */
DeleteZoneRecordResponse Client::deleteZoneRecord(const DeleteZoneRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteZoneRecordWithOptions(request, runtime);
}

/**
 * @summary Queries the operation logs of Private DNS. Operation logs record operations in modules such as the built-in authoritative module, cache module, forward module, and service address module and record the queries for Domain Name System (DNS) records. You can query operation logs by operation or operation content.
 *
 * @description #### **Precautions**
 * You can query the operation logs of Private DNS that are generated within the last six months.
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
 * @summary Queries the operation logs of Private DNS. Operation logs record operations in modules such as the built-in authoritative module, cache module, forward module, and service address module and record the queries for Domain Name System (DNS) records. You can query operation logs by operation or operation content.
 *
 * @description #### **Precautions**
 * You can query the operation logs of Private DNS that are generated within the last six months.
 *
 * @param request DescribeChangeLogsRequest
 * @return DescribeChangeLogsResponse
 */
DescribeChangeLogsResponse Client::describeChangeLogs(const DescribeChangeLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChangeLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a custom line.
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
 * @summary Queries the information about a custom line.
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
 * @summary Queries a list of regions for selection based on the scenario and virtual private cloud (VPC) type.
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
 * @summary Queries a list of regions for selection based on the scenario and virtual private cloud (VPC) type.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about Domain Name System (DNS) requests based on conditions such as the time range.
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
 * @summary Queries the information about Domain Name System (DNS) requests based on conditions such as the time range.
 *
 * @param request DescribeRequestGraphRequest
 * @return DescribeRequestGraphResponse
 */
DescribeRequestGraphResponse Client::describeRequestGraph(const DescribeRequestGraphRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRequestGraphWithOptions(request, runtime);
}

/**
 * @summary Queries a list of available zones.
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
 * @summary Queries a list of available zones.
 *
 * @param request DescribeResolverAvailableZonesRequest
 * @return DescribeResolverAvailableZonesResponse
 */
DescribeResolverAvailableZonesResponse Client::describeResolverAvailableZones(const DescribeResolverAvailableZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResolverAvailableZonesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an endpoint based on the endpoint ID.
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
 * @summary Queries the information about an endpoint based on the endpoint ID.
 *
 * @param request DescribeResolverEndpointRequest
 * @return DescribeResolverEndpointResponse
 */
DescribeResolverEndpointResponse Client::describeResolverEndpoint(const DescribeResolverEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResolverEndpointWithOptions(request, runtime);
}

/**
 * @summary Queries a list of endpoints.
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
 * @summary Queries a list of endpoints.
 *
 * @param request DescribeResolverEndpointsRequest
 * @return DescribeResolverEndpointsResponse
 */
DescribeResolverEndpointsResponse Client::describeResolverEndpoints(const DescribeResolverEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResolverEndpointsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a forwarding rule based on the ID of the forwarding rule.
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
 * @summary Queries the information about a forwarding rule based on the ID of the forwarding rule.
 *
 * @param request DescribeResolverRuleRequest
 * @return DescribeResolverRuleResponse
 */
DescribeResolverRuleResponse Client::describeResolverRule(const DescribeResolverRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResolverRuleWithOptions(request, runtime);
}

/**
 * @summary Queries a list of forwarding rules.
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
 * @summary Queries a list of forwarding rules.
 *
 * @param request DescribeResolverRulesRequest
 * @return DescribeResolverRulesResponse
 */
DescribeResolverRulesResponse Client::describeResolverRules(const DescribeResolverRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResolverRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on Domain Name System (DNS) requests received on the previous day, including the top three zones and virtual private clouds (VPCs) with the largest number of DNS requests.
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
 * @summary Queries the statistics on Domain Name System (DNS) requests received on the previous day, including the top three zones and virtual private clouds (VPCs) with the largest number of DNS requests.
 *
 * @param request DescribeStatisticSummaryRequest
 * @return DescribeStatisticSummaryResponse
 */
DescribeStatisticSummaryResponse Client::describeStatisticSummary(const DescribeStatisticSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStatisticSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a hostname synchronization task based on a zone ID.
 *
 * @description You can call the DescribeSyncEcsHostTask operation to query the information about a hostname synchronization task based on a zone ID.
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
 * @summary Queries the information about a hostname synchronization task based on a zone ID.
 *
 * @description You can call the DescribeSyncEcsHostTask operation to query the information about a hostname synchronization task based on a zone ID.
 *
 * @param request DescribeSyncEcsHostTaskRequest
 * @return DescribeSyncEcsHostTaskResponse
 */
DescribeSyncEcsHostTaskResponse Client::describeSyncEcsHostTask(const DescribeSyncEcsHostTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSyncEcsHostTaskWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tags added to zones.
 *
 * @description #### **Precautions**
 * You can call this API operation to query the information about tags added only to zones.
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
 * @summary Queries a list of tags added to zones.
 *
 * @description #### **Precautions**
 * You can call this API operation to query the information about tags added only to zones.
 *
 * @param request DescribeTagsRequest
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTags(const DescribeTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsWithOptions(request, runtime);
}

/**
 * @summary Query the current user\\"s service status, such as whether the service is activated, whether there are any unpaid fees, etc.
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
 * @summary Query the current user\\"s service status, such as whether the service is activated, whether there are any unpaid fees, etc.
 *
 * @param request DescribeUserServiceStatusRequest
 * @return DescribeUserServiceStatusResponse
 */
DescribeUserServiceStatusResponse Client::describeUserServiceStatus(const DescribeUserServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Queries a list of accounts whose virtual private clouds (VPCs) are associated with a private zone.
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
 * @summary Queries a list of accounts whose virtual private clouds (VPCs) are associated with a private zone.
 *
 * @param request DescribeUserVpcAuthorizationsRequest
 * @return DescribeUserVpcAuthorizationsResponse
 */
DescribeUserVpcAuthorizationsResponse Client::describeUserVpcAuthorizations(const DescribeUserVpcAuthorizationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserVpcAuthorizationsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a built-in authoritative zone, such as the virtual private clouds (VPCs) that are associated with the zone.
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
 * @summary Queries the information about a built-in authoritative zone, such as the virtual private clouds (VPCs) that are associated with the zone.
 *
 * @param request DescribeZoneInfoRequest
 * @return DescribeZoneInfoResponse
 */
DescribeZoneInfoResponse Client::describeZoneInfo(const DescribeZoneInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZoneInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a Domain Name System (DNS) record.
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
 * @summary Queries the information about a Domain Name System (DNS) record.
 *
 * @param request DescribeZoneRecordRequest
 * @return DescribeZoneRecordResponse
 */
DescribeZoneRecordResponse Client::describeZoneRecord(const DescribeZoneRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZoneRecordWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Domain Name System (DNS) records.
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
 * @summary Queries a list of Domain Name System (DNS) records.
 *
 * @param request DescribeZoneRecordsRequest
 * @return DescribeZoneRecordsResponse
 */
DescribeZoneRecordsResponse Client::describeZoneRecords(const DescribeZoneRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZoneRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of zones within the current account and a list of virtual private clouds (VPCs) associated with the zones.
 *
 * @description We recommend that you do not call this API operation due to its poor performance. Instead, you can call the DescribeZones operation to query a list of zones. If you want to query the information about VPCs with which a zone is associated, you can call the DescribeZoneInfo operation based on the zone ID.
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
 * @summary Queries a list of zones within the current account and a list of virtual private clouds (VPCs) associated with the zones.
 *
 * @description We recommend that you do not call this API operation due to its poor performance. Instead, you can call the DescribeZones operation to query a list of zones. If you want to query the information about VPCs with which a zone is associated, you can call the DescribeZoneInfo operation based on the zone ID.
 *
 * @param request DescribeZoneVpcTreeRequest
 * @return DescribeZoneVpcTreeResponse
 */
DescribeZoneVpcTreeResponse Client::describeZoneVpcTree(const DescribeZoneVpcTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZoneVpcTreeWithOptions(request, runtime);
}

/**
 * @summary Queries a list of zones within the current account.
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
 * @summary Queries a list of zones within the current account.
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tags added to zones.
 *
 * @description #### [](#)**Precautions**
 * You can call this API operation to query tags added only to zones.
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
 * @summary Queries a list of tags added to zones.
 *
 * @description #### [](#)**Precautions**
 * You can call this API operation to query tags added only to zones.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Changes a resource group.
 *
 * @description #### [](#)Precautions
 * You can call this API operation to change a resource group only for a zone.
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
 * @summary Changes a resource group.
 *
 * @description #### [](#)Precautions
 * You can call this API operation to change a resource group only for a zone.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Queries a list of custom lines.
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
 * @summary Queries a list of custom lines.
 *
 * @param request SearchCustomLinesRequest
 * @return SearchCustomLinesResponse
 */
SearchCustomLinesResponse Client::searchCustomLines(const SearchCustomLinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchCustomLinesWithOptions(request, runtime);
}

/**
 * @summary Enables the recursive resolution proxy for subdomain names.
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
 * @summary Enables the recursive resolution proxy for subdomain names.
 *
 * @param request SetProxyPatternRequest
 * @return SetProxyPatternResponse
 */
SetProxyPatternResponse Client::setProxyPattern(const SetProxyPatternRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setProxyPatternWithOptions(request, runtime);
}

/**
 * @summary Enables or disables a Domain Name System (DNS) record.
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
 * @summary Enables or disables a Domain Name System (DNS) record.
 *
 * @param request SetZoneRecordStatusRequest
 * @return SetZoneRecordStatusResponse
 */
SetZoneRecordStatusResponse Client::setZoneRecordStatus(const SetZoneRecordStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setZoneRecordStatusWithOptions(request, runtime);
}

/**
 * @summary Adds or modifies tags for zones.
 *
 * @description ##### [](#)Precautions
 * You can configure tags only for zones.
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
 * @summary Adds or modifies tags for zones.
 *
 * @description ##### [](#)Precautions
 * You can configure tags only for zones.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes the tags of multiple zones at a time.
 *
 * @description #### [](#)**Precautions**
 * You can call this API operation to remove tags added only to zones.
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
 * @summary Removes the tags of multiple zones at a time.
 *
 * @description #### [](#)**Precautions**
 * You can call this API operation to remove tags added only to zones.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies a custom line.
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
 * @summary Modifies a custom line.
 *
 * @param request UpdateCustomLineRequest
 * @return UpdateCustomLineResponse
 */
UpdateCustomLineResponse Client::updateCustomLine(const UpdateCustomLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomLineWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a Domain Name System (DNS) record based on the record ID.
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
 * @summary Modifies the description of a Domain Name System (DNS) record based on the record ID.
 *
 * @param request UpdateRecordRemarkRequest
 * @return UpdateRecordRemarkResponse
 */
UpdateRecordRemarkResponse Client::updateRecordRemark(const UpdateRecordRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecordRemarkWithOptions(request, runtime);
}

/**
 * @summary Modifies an endpoint.
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
 * @summary Modifies an endpoint.
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
 * @summary Adds or updates a hostname synchronization task.
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
 * @summary Adds or updates a hostname synchronization task.
 *
 * @param request UpdateSyncEcsHostTaskRequest
 * @return UpdateSyncEcsHostTaskResponse
 */
UpdateSyncEcsHostTaskResponse Client::updateSyncEcsHostTask(const UpdateSyncEcsHostTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSyncEcsHostTaskWithOptions(request, runtime);
}

/**
 * @summary Modifies a Domain Name System (DNS) record of a zone, including the hostname, record value, and weight value of the DNS record.
 *
 * @description #### **Precautions**
 * The DNS record modification for a zone in the regular module takes effect only after the time to live (TTL) expires. The DNS record modification for a zone in the acceleration module takes effect immediately.
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
 * @summary Modifies a Domain Name System (DNS) record of a zone, including the hostname, record value, and weight value of the DNS record.
 *
 * @description #### **Precautions**
 * The DNS record modification for a zone in the regular module takes effect only after the time to live (TTL) expires. The DNS record modification for a zone in the acceleration module takes effect immediately.
 *
 * @param request UpdateZoneRecordRequest
 * @return UpdateZoneRecordResponse
 */
UpdateZoneRecordResponse Client::updateZoneRecord(const UpdateZoneRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateZoneRecordWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a built-in authoritative zone.
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
 * @summary Modifies the description of a built-in authoritative zone.
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