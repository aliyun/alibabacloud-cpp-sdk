#include <darabonba/Core.hpp>
#include <alibabacloud/Lto20210707.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Lto20210707::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Lto20210707
{

AlibabaCloud::Lto20210707::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("lto", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request AddBaaSAntChainBizChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddBaaSAntChainBizChainResponse
 */
AddBaaSAntChainBizChainResponse Client::addBaaSAntChainBizChainWithOptions(const AddBaaSAntChainBizChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaaSAntChainChainId()) {
    query["BaaSAntChainChainId"] = request.baaSAntChainChainId();
  }

  if (!!request.hasBaaSAntChainConsortiumId()) {
    query["BaaSAntChainConsortiumId"] = request.baaSAntChainConsortiumId();
  }

  if (!!request.hasCaCert()) {
    query["CaCert"] = request.caCert();
  }

  if (!!request.hasCaCertPassword()) {
    query["CaCertPassword"] = request.caCertPassword();
  }

  if (!!request.hasClientCert()) {
    query["ClientCert"] = request.clientCert();
  }

  if (!!request.hasClientKey()) {
    query["ClientKey"] = request.clientKey();
  }

  if (!!request.hasClientKeyPassword()) {
    query["ClientKeyPassword"] = request.clientKeyPassword();
  }

  if (!!request.hasContractTemplateIdList()) {
    query["ContractTemplateIdList"] = request.contractTemplateIdList();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNodeNameList()) {
    query["NodeNameList"] = request.nodeNameList();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasUserKey()) {
    query["UserKey"] = request.userKey();
  }

  if (!!request.hasUserKeyPassword()) {
    query["UserKeyPassword"] = request.userKeyPassword();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddBaaSAntChainBizChain"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddBaaSAntChainBizChainResponse>();
}

/**
 * @param request AddBaaSAntChainBizChainRequest
 * @return AddBaaSAntChainBizChainResponse
 */
AddBaaSAntChainBizChainResponse Client::addBaaSAntChainBizChain(const AddBaaSAntChainBizChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addBaaSAntChainBizChainWithOptions(request, runtime);
}

/**
 * @param request AddBaaSFabricBizChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddBaaSFabricBizChainResponse
 */
AddBaaSFabricBizChainResponse Client::addBaaSFabricBizChainWithOptions(const AddBaaSFabricBizChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaaSFabricChannelId()) {
    query["BaaSFabricChannelId"] = request.baaSFabricChannelId();
  }

  if (!!request.hasBaaSFabricConsortiumId()) {
    query["BaaSFabricConsortiumId"] = request.baaSFabricConsortiumId();
  }

  if (!!request.hasBaaSFabricOrganizationId()) {
    query["BaaSFabricOrganizationId"] = request.baaSFabricOrganizationId();
  }

  if (!!request.hasContractTemplateIdList()) {
    query["ContractTemplateIdList"] = request.contractTemplateIdList();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddBaaSFabricBizChain"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddBaaSFabricBizChainResponse>();
}

/**
 * @param request AddBaaSFabricBizChainRequest
 * @return AddBaaSFabricBizChainResponse
 */
AddBaaSFabricBizChainResponse Client::addBaaSFabricBizChain(const AddBaaSFabricBizChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addBaaSFabricBizChainWithOptions(request, runtime);
}

/**
 * @param request AddBsnFabricBizChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddBsnFabricBizChainResponse
 */
AddBsnFabricBizChainResponse Client::addBsnFabricBizChainWithOptions(const AddBsnFabricBizChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["AppCode"] = request.appCode();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNodeList()) {
    query["NodeList"] = request.nodeList();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasUserCode()) {
    query["UserCode"] = request.userCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddBsnFabricBizChain"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddBsnFabricBizChainResponse>();
}

/**
 * @param request AddBsnFabricBizChainRequest
 * @return AddBsnFabricBizChainResponse
 */
AddBsnFabricBizChainResponse Client::addBsnFabricBizChain(const AddBsnFabricBizChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addBsnFabricBizChainWithOptions(request, runtime);
}

/**
 * @summary 添加设备组
 *
 * @param request AddDeviceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDeviceGroupResponse
 */
AddDeviceGroupResponse Client::addDeviceGroupWithOptions(const AddDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizedCount()) {
    query["AuthorizedCount"] = request.authorizedCount();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.productKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDeviceGroup"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDeviceGroupResponse>();
}

/**
 * @summary 添加设备组
 *
 * @param request AddDeviceGroupRequest
 * @return AddDeviceGroupResponse
 */
AddDeviceGroupResponse Client::addDeviceGroup(const AddDeviceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDeviceGroupWithOptions(request, runtime);
}

/**
 * @summary 添加成员
 *
 * @param request AddMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMemberResponse
 */
AddMemberResponse Client::addMemberWithOptions(const AddMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizedCount()) {
    query["AuthorizedCount"] = request.authorizedCount();
  }

  if (!!request.hasAuthorizedDeviceCount()) {
    query["AuthorizedDeviceCount"] = request.authorizedDeviceCount();
  }

  if (!!request.hasContactor()) {
    query["Contactor"] = request.contactor();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasTelephony()) {
    query["Telephony"] = request.telephony();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddMember"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMemberResponse>();
}

/**
 * @summary 添加成员
 *
 * @param request AddMemberRequest
 * @return AddMemberResponse
 */
AddMemberResponse Client::addMember(const AddMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addMemberWithOptions(request, runtime);
}

/**
 * @param request AddPrivacyRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPrivacyRuleResponse
 */
AddPrivacyRuleResponse Client::addPrivacyRuleWithOptions(const AddPrivacyRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgImpl()) {
    query["AlgImpl"] = request.algImpl();
  }

  if (!!request.hasAlgType()) {
    query["AlgType"] = request.algType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddPrivacyRule"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPrivacyRuleResponse>();
}

/**
 * @param request AddPrivacyRuleRequest
 * @return AddPrivacyRuleResponse
 */
AddPrivacyRuleResponse Client::addPrivacyRule(const AddPrivacyRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPrivacyRuleWithOptions(request, runtime);
}

/**
 * @param request AddRouteRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRouteRuleResponse
 */
AddRouteRuleResponse Client::addRouteRuleWithOptions(const AddRouteRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizChainId()) {
    query["BizChainId"] = request.bizChainId();
  }

  if (!!request.hasChainUpMode()) {
    query["ChainUpMode"] = request.chainUpMode();
  }

  if (!!request.hasContractName()) {
    query["ContractName"] = request.contractName();
  }

  if (!!request.hasContractTemplateId()) {
    query["ContractTemplateId"] = request.contractTemplateId();
  }

  if (!!request.hasDeviceGroupId()) {
    query["DeviceGroupId"] = request.deviceGroupId();
  }

  if (!!request.hasInvokeType()) {
    query["InvokeType"] = request.invokeType();
  }

  if (!!request.hasPrivacyRuleId()) {
    query["PrivacyRuleId"] = request.privacyRuleId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddRouteRule"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRouteRuleResponse>();
}

/**
 * @param request AddRouteRuleRequest
 * @return AddRouteRuleResponse
 */
AddRouteRuleResponse Client::addRouteRule(const AddRouteRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRouteRuleWithOptions(request, runtime);
}

/**
 * @summary 成员同意接入
 *
 * @param request AgreeMemberAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AgreeMemberAccessResponse
 */
AgreeMemberAccessResponse Client::agreeMemberAccessWithOptions(const AgreeMemberAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberAccountId()) {
    query["MemberAccountId"] = request.memberAccountId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AgreeMemberAccess"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AgreeMemberAccessResponse>();
}

/**
 * @summary 成员同意接入
 *
 * @param request AgreeMemberAccessRequest
 * @return AgreeMemberAccessResponse
 */
AgreeMemberAccessResponse Client::agreeMemberAccess(const AgreeMemberAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return agreeMemberAccessWithOptions(request, runtime);
}

/**
 * @param request AuthorizeBaaSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeBaaSResponse
 */
AuthorizeBaaSResponse Client::authorizeBaaSWithOptions(const AuthorizeBaaSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeBaaS"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeBaaSResponse>();
}

/**
 * @param request AuthorizeBaaSRequest
 * @return AuthorizeBaaSResponse
 */
AuthorizeBaaSResponse Client::authorizeBaaS(const AuthorizeBaaSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeBaaSWithOptions(request, runtime);
}

/**
 * @param request AuthorizeDeviceGroupBizChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeDeviceGroupBizChainResponse
 */
AuthorizeDeviceGroupBizChainResponse Client::authorizeDeviceGroupBizChainWithOptions(const AuthorizeDeviceGroupBizChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizChainIdList()) {
    query["BizChainIdList"] = request.bizChainIdList();
  }

  if (!!request.hasDeviceGroupId()) {
    query["DeviceGroupId"] = request.deviceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeDeviceGroupBizChain"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeDeviceGroupBizChainResponse>();
}

/**
 * @param request AuthorizeDeviceGroupBizChainRequest
 * @return AuthorizeDeviceGroupBizChainResponse
 */
AuthorizeDeviceGroupBizChainResponse Client::authorizeDeviceGroupBizChain(const AuthorizeDeviceGroupBizChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeDeviceGroupBizChainWithOptions(request, runtime);
}

/**
 * @param request AuthorizeMemberBizChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeMemberBizChainResponse
 */
AuthorizeMemberBizChainResponse Client::authorizeMemberBizChainWithOptions(const AuthorizeMemberBizChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizChainInfo()) {
    query["BizChainInfo"] = request.bizChainInfo();
  }

  if (!!request.hasMemberId()) {
    query["MemberId"] = request.memberId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeMemberBizChain"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeMemberBizChainResponse>();
}

/**
 * @param request AuthorizeMemberBizChainRequest
 * @return AuthorizeMemberBizChainResponse
 */
AuthorizeMemberBizChainResponse Client::authorizeMemberBizChain(const AuthorizeMemberBizChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeMemberBizChainWithOptions(request, runtime);
}

/**
 * @param request DeletePrivacyRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivacyRuleResponse
 */
DeletePrivacyRuleResponse Client::deletePrivacyRuleWithOptions(const DeletePrivacyRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPrivacyRuleId()) {
    query["PrivacyRuleId"] = request.privacyRuleId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrivacyRule"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrivacyRuleResponse>();
}

/**
 * @param request DeletePrivacyRuleRequest
 * @return DeletePrivacyRuleResponse
 */
DeletePrivacyRuleResponse Client::deletePrivacyRule(const DeletePrivacyRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrivacyRuleWithOptions(request, runtime);
}

/**
 * @param request DeleteRouteRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRouteRuleResponse
 */
DeleteRouteRuleResponse Client::deleteRouteRuleWithOptions(const DeleteRouteRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRouteRuleId()) {
    query["RouteRuleId"] = request.routeRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRouteRule"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRouteRuleResponse>();
}

/**
 * @param request DeleteRouteRuleRequest
 * @return DeleteRouteRuleResponse
 */
DeleteRouteRuleResponse Client::deleteRouteRule(const DeleteRouteRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRouteRuleWithOptions(request, runtime);
}

/**
 * @summary 成员拒绝接入
 *
 * @param request DeniedMemberAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeniedMemberAccessResponse
 */
DeniedMemberAccessResponse Client::deniedMemberAccessWithOptions(const DeniedMemberAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberAccountId()) {
    query["MemberAccountId"] = request.memberAccountId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeniedMemberAccess"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeniedMemberAccessResponse>();
}

/**
 * @summary 成员拒绝接入
 *
 * @param request DeniedMemberAccessRequest
 * @return DeniedMemberAccessResponse
 */
DeniedMemberAccessResponse Client::deniedMemberAccess(const DeniedMemberAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deniedMemberAccessWithOptions(request, runtime);
}

/**
 * @param request DescribeAccountRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountRoleResponse
 */
DescribeAccountRoleResponse Client::describeAccountRoleWithOptions(const DescribeAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccountRole"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccountRoleResponse>();
}

/**
 * @param request DescribeAccountRoleRequest
 * @return DescribeAccountRoleResponse
 */
DescribeAccountRoleResponse Client::describeAccountRole(const DescribeAccountRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountRoleWithOptions(request, runtime);
}

/**
 * @summary 查询管理方信息
 *
 * @param request DescribeAdminInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdminInfoResponse
 */
DescribeAdminInfoResponse Client::describeAdminInfoWithOptions(const DescribeAdminInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdminInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdminInfoResponse>();
}

/**
 * @summary 查询管理方信息
 *
 * @param request DescribeAdminInfoRequest
 * @return DescribeAdminInfoResponse
 */
DescribeAdminInfoResponse Client::describeAdminInfo(const DescribeAdminInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdminInfoWithOptions(request, runtime);
}

/**
 * @param request DescribeBizChainStatInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBizChainStatInfoResponse
 */
DescribeBizChainStatInfoResponse Client::describeBizChainStatInfoWithOptions(const DescribeBizChainStatInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBizChainStatInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBizChainStatInfoResponse>();
}

/**
 * @param request DescribeBizChainStatInfoRequest
 * @return DescribeBizChainStatInfoResponse
 */
DescribeBizChainStatInfoResponse Client::describeBizChainStatInfo(const DescribeBizChainStatInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBizChainStatInfoWithOptions(request, runtime);
}

/**
 * @summary 查询概览API信息
 *
 * @param request DescribeDashboardApiInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDashboardApiInfoResponse
 */
DescribeDashboardApiInfoResponse Client::describeDashboardApiInfoWithOptions(const DescribeDashboardApiInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDashboardApiInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDashboardApiInfoResponse>();
}

/**
 * @summary 查询概览API信息
 *
 * @param request DescribeDashboardApiInfoRequest
 * @return DescribeDashboardApiInfoResponse
 */
DescribeDashboardApiInfoResponse Client::describeDashboardApiInfo(const DescribeDashboardApiInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDashboardApiInfoWithOptions(request, runtime);
}

/**
 * @summary 查询概览信息
 *
 * @param request DescribeDashboardBaseInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDashboardBaseInfoResponse
 */
DescribeDashboardBaseInfoResponse Client::describeDashboardBaseInfoWithOptions(const DescribeDashboardBaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDashboardBaseInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDashboardBaseInfoResponse>();
}

/**
 * @summary 查询概览信息
 *
 * @param request DescribeDashboardBaseInfoRequest
 * @return DescribeDashboardBaseInfoResponse
 */
DescribeDashboardBaseInfoResponse Client::describeDashboardBaseInfo(const DescribeDashboardBaseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDashboardBaseInfoWithOptions(request, runtime);
}

/**
 * @summary 查询概览设备信息
 *
 * @param request DescribeDashboardDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDashboardDeviceInfoResponse
 */
DescribeDashboardDeviceInfoResponse Client::describeDashboardDeviceInfoWithOptions(const DescribeDashboardDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDashboardDeviceInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDashboardDeviceInfoResponse>();
}

/**
 * @summary 查询概览设备信息
 *
 * @param request DescribeDashboardDeviceInfoRequest
 * @return DescribeDashboardDeviceInfoResponse
 */
DescribeDashboardDeviceInfoResponse Client::describeDashboardDeviceInfo(const DescribeDashboardDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDashboardDeviceInfoWithOptions(request, runtime);
}

/**
 * @summary 查询概览成员API信息
 *
 * @param request DescribeDashboardMemberApiInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDashboardMemberApiInfoResponse
 */
DescribeDashboardMemberApiInfoResponse Client::describeDashboardMemberApiInfoWithOptions(const DescribeDashboardMemberApiInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizChainId()) {
    query["BizChainId"] = request.bizChainId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDashboardMemberApiInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDashboardMemberApiInfoResponse>();
}

/**
 * @summary 查询概览成员API信息
 *
 * @param request DescribeDashboardMemberApiInfoRequest
 * @return DescribeDashboardMemberApiInfoResponse
 */
DescribeDashboardMemberApiInfoResponse Client::describeDashboardMemberApiInfo(const DescribeDashboardMemberApiInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDashboardMemberApiInfoWithOptions(request, runtime);
}

/**
 * @summary 查询概览成员设备信息
 *
 * @param request DescribeDashboardMemberDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDashboardMemberDeviceInfoResponse
 */
DescribeDashboardMemberDeviceInfoResponse Client::describeDashboardMemberDeviceInfoWithOptions(const DescribeDashboardMemberDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDashboardMemberDeviceInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDashboardMemberDeviceInfoResponse>();
}

/**
 * @summary 查询概览成员设备信息
 *
 * @param request DescribeDashboardMemberDeviceInfoRequest
 * @return DescribeDashboardMemberDeviceInfoResponse
 */
DescribeDashboardMemberDeviceInfoResponse Client::describeDashboardMemberDeviceInfo(const DescribeDashboardMemberDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDashboardMemberDeviceInfoWithOptions(request, runtime);
}

/**
 * @summary 查询设备信息
 *
 * @param request DescribeDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeviceInfoResponse
 */
DescribeDeviceInfoResponse Client::describeDeviceInfoWithOptions(const DescribeDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDeviceInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeviceInfoResponse>();
}

/**
 * @summary 查询设备信息
 *
 * @param request DescribeDeviceInfoRequest
 * @return DescribeDeviceInfoResponse
 */
DescribeDeviceInfoResponse Client::describeDeviceInfo(const DescribeDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeviceInfoWithOptions(request, runtime);
}

/**
 * @summary 查询边缘一体机统计信息
 *
 * @param request DescribeEdgeStatInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEdgeStatInfoResponse
 */
DescribeEdgeStatInfoResponse Client::describeEdgeStatInfoWithOptions(const DescribeEdgeStatInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdgeDn()) {
    query["EdgeDn"] = request.edgeDn();
  }

  if (!!request.hasEdgePk()) {
    query["EdgePk"] = request.edgePk();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEdgeStatInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEdgeStatInfoResponse>();
}

/**
 * @summary 查询边缘一体机统计信息
 *
 * @param request DescribeEdgeStatInfoRequest
 * @return DescribeEdgeStatInfoResponse
 */
DescribeEdgeStatInfoResponse Client::describeEdgeStatInfo(const DescribeEdgeStatInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEdgeStatInfoWithOptions(request, runtime);
}

/**
 * @param request DescribeMemberBizChainStatInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMemberBizChainStatInfoResponse
 */
DescribeMemberBizChainStatInfoResponse Client::describeMemberBizChainStatInfoWithOptions(const DescribeMemberBizChainStatInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMemberBizChainStatInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMemberBizChainStatInfoResponse>();
}

/**
 * @param request DescribeMemberBizChainStatInfoRequest
 * @return DescribeMemberBizChainStatInfoResponse
 */
DescribeMemberBizChainStatInfoResponse Client::describeMemberBizChainStatInfo(const DescribeMemberBizChainStatInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMemberBizChainStatInfoWithOptions(request, runtime);
}

/**
 * @summary 查询统计成员API信息
 *
 * @param request DescribeMemberStatInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMemberStatInfoResponse
 */
DescribeMemberStatInfoResponse Client::describeMemberStatInfoWithOptions(const DescribeMemberStatInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizChainId()) {
    query["BizChainId"] = request.bizChainId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMemberStatInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMemberStatInfoResponse>();
}

/**
 * @summary 查询统计成员API信息
 *
 * @param request DescribeMemberStatInfoRequest
 * @return DescribeMemberStatInfoResponse
 */
DescribeMemberStatInfoResponse Client::describeMemberStatInfo(const DescribeMemberStatInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMemberStatInfoWithOptions(request, runtime);
}

/**
 * @param request DescribeMemberTotalStatInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMemberTotalStatInfoResponse
 */
DescribeMemberTotalStatInfoResponse Client::describeMemberTotalStatInfoWithOptions(const DescribeMemberTotalStatInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMemberTotalStatInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMemberTotalStatInfoResponse>();
}

/**
 * @param request DescribeMemberTotalStatInfoRequest
 * @return DescribeMemberTotalStatInfoResponse
 */
DescribeMemberTotalStatInfoResponse Client::describeMemberTotalStatInfo(const DescribeMemberTotalStatInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMemberTotalStatInfoWithOptions(request, runtime);
}

/**
 * @param request DescribePackgeInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePackgeInfoResponse
 */
DescribePackgeInfoResponse Client::describePackgeInfoWithOptions(const DescribePackgeInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePackgeInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePackgeInfoResponse>();
}

/**
 * @param request DescribePackgeInfoRequest
 * @return DescribePackgeInfoResponse
 */
DescribePackgeInfoResponse Client::describePackgeInfo(const DescribePackgeInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePackgeInfoWithOptions(request, runtime);
}

/**
 * @summary 查询统计设备信息
 *
 * @param request DescribeStatDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStatDeviceInfoResponse
 */
DescribeStatDeviceInfoResponse Client::describeStatDeviceInfoWithOptions(const DescribeStatDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStatDeviceInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStatDeviceInfoResponse>();
}

/**
 * @summary 查询统计设备信息
 *
 * @param request DescribeStatDeviceInfoRequest
 * @return DescribeStatDeviceInfoResponse
 */
DescribeStatDeviceInfoResponse Client::describeStatDeviceInfo(const DescribeStatDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStatDeviceInfoWithOptions(request, runtime);
}

/**
 * @summary 查询统计成员设备信息
 *
 * @param request DescribeStatMemberDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStatMemberDeviceInfoResponse
 */
DescribeStatMemberDeviceInfoResponse Client::describeStatMemberDeviceInfoWithOptions(const DescribeStatMemberDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStatMemberDeviceInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStatMemberDeviceInfoResponse>();
}

/**
 * @summary 查询统计成员设备信息
 *
 * @param request DescribeStatMemberDeviceInfoRequest
 * @return DescribeStatMemberDeviceInfoResponse
 */
DescribeStatMemberDeviceInfoResponse Client::describeStatMemberDeviceInfo(const DescribeStatMemberDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStatMemberDeviceInfoWithOptions(request, runtime);
}

/**
 * @param request DescribeTotalStatInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTotalStatInfoResponse
 */
DescribeTotalStatInfoResponse Client::describeTotalStatInfoWithOptions(const DescribeTotalStatInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTotalStatInfo"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTotalStatInfoResponse>();
}

/**
 * @param request DescribeTotalStatInfoRequest
 * @return DescribeTotalStatInfoResponse
 */
DescribeTotalStatInfoResponse Client::describeTotalStatInfo(const DescribeTotalStatInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTotalStatInfoWithOptions(request, runtime);
}

/**
 * @param request DisableDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableDeviceResponse
 */
DisableDeviceResponse Client::disableDeviceWithOptions(const DisableDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableDevice"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableDeviceResponse>();
}

/**
 * @param request DisableDeviceRequest
 * @return DisableDeviceResponse
 */
DisableDeviceResponse Client::disableDevice(const DisableDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDeviceWithOptions(request, runtime);
}

/**
 * @param request DisableDeviceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableDeviceGroupResponse
 */
DisableDeviceGroupResponse Client::disableDeviceGroupWithOptions(const DisableDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceGroupId()) {
    query["DeviceGroupId"] = request.deviceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableDeviceGroup"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableDeviceGroupResponse>();
}

/**
 * @param request DisableDeviceGroupRequest
 * @return DisableDeviceGroupResponse
 */
DisableDeviceGroupResponse Client::disableDeviceGroup(const DisableDeviceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDeviceGroupWithOptions(request, runtime);
}

/**
 * @param request DownloadPrivacyKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadPrivacyKeyResponse
 */
DownloadPrivacyKeyResponse Client::downloadPrivacyKeyWithOptions(const DownloadPrivacyKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadPrivacyKey"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadPrivacyKeyResponse>();
}

/**
 * @param request DownloadPrivacyKeyRequest
 * @return DownloadPrivacyKeyResponse
 */
DownloadPrivacyKeyResponse Client::downloadPrivacyKey(const DownloadPrivacyKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadPrivacyKeyWithOptions(request, runtime);
}

/**
 * @param request EnableDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableDeviceResponse
 */
EnableDeviceResponse Client::enableDeviceWithOptions(const EnableDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableDevice"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableDeviceResponse>();
}

/**
 * @param request EnableDeviceRequest
 * @return EnableDeviceResponse
 */
EnableDeviceResponse Client::enableDevice(const EnableDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableDeviceWithOptions(request, runtime);
}

/**
 * @param request EnableDeviceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableDeviceGroupResponse
 */
EnableDeviceGroupResponse Client::enableDeviceGroupWithOptions(const EnableDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceGroupId()) {
    query["DeviceGroupId"] = request.deviceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableDeviceGroup"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableDeviceGroupResponse>();
}

/**
 * @param request EnableDeviceGroupRequest
 * @return EnableDeviceGroupResponse
 */
EnableDeviceGroupResponse Client::enableDeviceGroup(const EnableDeviceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableDeviceGroupWithOptions(request, runtime);
}

/**
 * @param request FreezeMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FreezeMemberResponse
 */
FreezeMemberResponse Client::freezeMemberWithOptions(const FreezeMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberId()) {
    query["MemberId"] = request.memberId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FreezeMember"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FreezeMemberResponse>();
}

/**
 * @param request FreezeMemberRequest
 * @return FreezeMemberResponse
 */
FreezeMemberResponse Client::freezeMember(const FreezeMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return freezeMemberWithOptions(request, runtime);
}

/**
 * @param request GetEdgeTotalDeviceCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeTotalDeviceCountResponse
 */
GetEdgeTotalDeviceCountResponse Client::getEdgeTotalDeviceCountWithOptions(const GetEdgeTotalDeviceCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEdgeTotalDeviceCount"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEdgeTotalDeviceCountResponse>();
}

/**
 * @param request GetEdgeTotalDeviceCountRequest
 * @return GetEdgeTotalDeviceCountResponse
 */
GetEdgeTotalDeviceCountResponse Client::getEdgeTotalDeviceCount(const GetEdgeTotalDeviceCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeTotalDeviceCountWithOptions(request, runtime);
}

/**
 * @param request ListAllAdminRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllAdminResponse
 */
ListAllAdminResponse Client::listAllAdminWithOptions(const ListAllAdminRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllAdmin"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllAdminResponse>();
}

/**
 * @param request ListAllAdminRequest
 * @return ListAllAdminResponse
 */
ListAllAdminResponse Client::listAllAdmin(const ListAllAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllAdminWithOptions(request, runtime);
}

/**
 * @param request ListAllBizChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllBizChainResponse
 */
ListAllBizChainResponse Client::listAllBizChainWithOptions(const ListAllBizChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllBizChain"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllBizChainResponse>();
}

/**
 * @param request ListAllBizChainRequest
 * @return ListAllBizChainResponse
 */
ListAllBizChainResponse Client::listAllBizChain(const ListAllBizChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllBizChainWithOptions(request, runtime);
}

/**
 * @param request ListAllBizChainContractRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllBizChainContractResponse
 */
ListAllBizChainContractResponse Client::listAllBizChainContractWithOptions(const ListAllBizChainContractRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizChainId()) {
    query["BizChainId"] = request.bizChainId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllBizChainContract"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllBizChainContractResponse>();
}

/**
 * @param request ListAllBizChainContractRequest
 * @return ListAllBizChainContractResponse
 */
ListAllBizChainContractResponse Client::listAllBizChainContract(const ListAllBizChainContractRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllBizChainContractWithOptions(request, runtime);
}

/**
 * @param request ListAllDeviceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllDeviceGroupResponse
 */
ListAllDeviceGroupResponse Client::listAllDeviceGroupWithOptions(const ListAllDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllDeviceGroup"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllDeviceGroupResponse>();
}

/**
 * @param request ListAllDeviceGroupRequest
 * @return ListAllDeviceGroupResponse
 */
ListAllDeviceGroupResponse Client::listAllDeviceGroup(const ListAllDeviceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllDeviceGroupWithOptions(request, runtime);
}

/**
 * @param request ListAllMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllMemberResponse
 */
ListAllMemberResponse Client::listAllMemberWithOptions(const ListAllMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllMember"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllMemberResponse>();
}

/**
 * @param request ListAllMemberRequest
 * @return ListAllMemberResponse
 */
ListAllMemberResponse Client::listAllMember(const ListAllMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllMemberWithOptions(request, runtime);
}

/**
 * @param request ListAllPrivacyAlgorithmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllPrivacyAlgorithmResponse
 */
ListAllPrivacyAlgorithmResponse Client::listAllPrivacyAlgorithmWithOptions(const ListAllPrivacyAlgorithmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllPrivacyAlgorithm"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllPrivacyAlgorithmResponse>();
}

/**
 * @param request ListAllPrivacyAlgorithmRequest
 * @return ListAllPrivacyAlgorithmResponse
 */
ListAllPrivacyAlgorithmResponse Client::listAllPrivacyAlgorithm(const ListAllPrivacyAlgorithmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllPrivacyAlgorithmWithOptions(request, runtime);
}

/**
 * @param request ListAllPrivacyRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllPrivacyRuleResponse
 */
ListAllPrivacyRuleResponse Client::listAllPrivacyRuleWithOptions(const ListAllPrivacyRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllPrivacyRule"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllPrivacyRuleResponse>();
}

/**
 * @param request ListAllPrivacyRuleRequest
 * @return ListAllPrivacyRuleResponse
 */
ListAllPrivacyRuleResponse Client::listAllPrivacyRule(const ListAllPrivacyRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllPrivacyRuleWithOptions(request, runtime);
}

/**
 * @param request ListAllProductKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllProductKeyResponse
 */
ListAllProductKeyResponse Client::listAllProductKeyWithOptions(const ListAllProductKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllProductKey"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllProductKeyResponse>();
}

/**
 * @param request ListAllProductKeyRequest
 * @return ListAllProductKeyResponse
 */
ListAllProductKeyResponse Client::listAllProductKey(const ListAllProductKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllProductKeyWithOptions(request, runtime);
}

/**
 * @param request ListAllSystemContractRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllSystemContractResponse
 */
ListAllSystemContractResponse Client::listAllSystemContractWithOptions(const ListAllSystemContractRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBlockChainType()) {
    query["BlockChainType"] = request.blockChainType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllSystemContract"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllSystemContractResponse>();
}

/**
 * @param request ListAllSystemContractRequest
 * @return ListAllSystemContractResponse
 */
ListAllSystemContractResponse Client::listAllSystemContract(const ListAllSystemContractRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllSystemContractWithOptions(request, runtime);
}

/**
 * @param request ListBaaSAntChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBaaSAntChainResponse
 */
ListBaaSAntChainResponse Client::listBaaSAntChainWithOptions(const ListBaaSAntChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaaSAntChainConsortiumId()) {
    query["BaaSAntChainConsortiumId"] = request.baaSAntChainConsortiumId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBaaSAntChain"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBaaSAntChainResponse>();
}

/**
 * @param request ListBaaSAntChainRequest
 * @return ListBaaSAntChainResponse
 */
ListBaaSAntChainResponse Client::listBaaSAntChain(const ListBaaSAntChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBaaSAntChainWithOptions(request, runtime);
}

/**
 * @param request ListBaaSAntChainConsortiumRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBaaSAntChainConsortiumResponse
 */
ListBaaSAntChainConsortiumResponse Client::listBaaSAntChainConsortiumWithOptions(const ListBaaSAntChainConsortiumRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBaaSAntChainConsortium"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBaaSAntChainConsortiumResponse>();
}

/**
 * @param request ListBaaSAntChainConsortiumRequest
 * @return ListBaaSAntChainConsortiumResponse
 */
ListBaaSAntChainConsortiumResponse Client::listBaaSAntChainConsortium(const ListBaaSAntChainConsortiumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBaaSAntChainConsortiumWithOptions(request, runtime);
}

/**
 * @param request ListBaaSAntChainPeerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBaaSAntChainPeerResponse
 */
ListBaaSAntChainPeerResponse Client::listBaaSAntChainPeerWithOptions(const ListBaaSAntChainPeerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaaSAntChainChainId()) {
    query["BaaSAntChainChainId"] = request.baaSAntChainChainId();
  }

  if (!!request.hasBaaSAntChainConsortiumId()) {
    query["BaaSAntChainConsortiumId"] = request.baaSAntChainConsortiumId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBaaSAntChainPeer"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBaaSAntChainPeerResponse>();
}

/**
 * @param request ListBaaSAntChainPeerRequest
 * @return ListBaaSAntChainPeerResponse
 */
ListBaaSAntChainPeerResponse Client::listBaaSAntChainPeer(const ListBaaSAntChainPeerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBaaSAntChainPeerWithOptions(request, runtime);
}

/**
 * @param request ListBaaSFabricChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBaaSFabricChannelResponse
 */
ListBaaSFabricChannelResponse Client::listBaaSFabricChannelWithOptions(const ListBaaSFabricChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaaSFabricConsortiumId()) {
    query["BaaSFabricConsortiumId"] = request.baaSFabricConsortiumId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBaaSFabricChannel"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBaaSFabricChannelResponse>();
}

/**
 * @param request ListBaaSFabricChannelRequest
 * @return ListBaaSFabricChannelResponse
 */
ListBaaSFabricChannelResponse Client::listBaaSFabricChannel(const ListBaaSFabricChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBaaSFabricChannelWithOptions(request, runtime);
}

/**
 * @param request ListBaaSFabricConsortiumRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBaaSFabricConsortiumResponse
 */
ListBaaSFabricConsortiumResponse Client::listBaaSFabricConsortiumWithOptions(const ListBaaSFabricConsortiumRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBaaSFabricConsortium"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBaaSFabricConsortiumResponse>();
}

/**
 * @param request ListBaaSFabricConsortiumRequest
 * @return ListBaaSFabricConsortiumResponse
 */
ListBaaSFabricConsortiumResponse Client::listBaaSFabricConsortium(const ListBaaSFabricConsortiumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBaaSFabricConsortiumWithOptions(request, runtime);
}

/**
 * @param request ListBaaSFabricOrganizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBaaSFabricOrganizationResponse
 */
ListBaaSFabricOrganizationResponse Client::listBaaSFabricOrganizationWithOptions(const ListBaaSFabricOrganizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaaSFabricChannelId()) {
    query["BaaSFabricChannelId"] = request.baaSFabricChannelId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBaaSFabricOrganization"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBaaSFabricOrganizationResponse>();
}

/**
 * @param request ListBaaSFabricOrganizationRequest
 * @return ListBaaSFabricOrganizationResponse
 */
ListBaaSFabricOrganizationResponse Client::listBaaSFabricOrganization(const ListBaaSFabricOrganizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBaaSFabricOrganizationWithOptions(request, runtime);
}

/**
 * @param request ListBizChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBizChainResponse
 */
ListBizChainResponse Client::listBizChainWithOptions(const ListBizChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizChainId()) {
    query["BizChainId"] = request.bizChainId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNum()) {
    query["Num"] = request.num();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBizChain"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBizChainResponse>();
}

/**
 * @param request ListBizChainRequest
 * @return ListBizChainResponse
 */
ListBizChainResponse Client::listBizChain(const ListBizChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBizChainWithOptions(request, runtime);
}

/**
 * @param request ListBizChainDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBizChainDataResponse
 */
ListBizChainDataResponse Client::listBizChainDataWithOptions(const ListBizChainDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizChainId()) {
    query["BizChainId"] = request.bizChainId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIoTDataDID()) {
    query["IoTDataDID"] = request.ioTDataDID();
  }

  if (!!request.hasMemberId()) {
    query["MemberId"] = request.memberId();
  }

  if (!!request.hasNum()) {
    query["Num"] = request.num();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBizChainData"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBizChainDataResponse>();
}

/**
 * @param request ListBizChainDataRequest
 * @return ListBizChainDataResponse
 */
ListBizChainDataResponse Client::listBizChainData(const ListBizChainDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBizChainDataWithOptions(request, runtime);
}

/**
 * @param request ListDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeviceResponse
 */
ListDeviceResponse Client::listDeviceWithOptions(const ListDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceGroupId()) {
    query["DeviceGroupId"] = request.deviceGroupId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNum()) {
    query["Num"] = request.num();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDevice"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeviceResponse>();
}

/**
 * @param request ListDeviceRequest
 * @return ListDeviceResponse
 */
ListDeviceResponse Client::listDevice(const ListDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeviceWithOptions(request, runtime);
}

/**
 * @summary 查询设备组列表
 *
 * @param request ListDeviceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeviceGroupResponse
 */
ListDeviceGroupResponse Client::listDeviceGroupWithOptions(const ListDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberName()) {
    query["MemberName"] = request.memberName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNum()) {
    query["Num"] = request.num();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeviceGroup"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeviceGroupResponse>();
}

/**
 * @summary 查询设备组列表
 *
 * @param request ListDeviceGroupRequest
 * @return ListDeviceGroupResponse
 */
ListDeviceGroupResponse Client::listDeviceGroup(const ListDeviceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeviceGroupWithOptions(request, runtime);
}

/**
 * @param request ListDeviceGroupAuthorizedBizChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeviceGroupAuthorizedBizChainResponse
 */
ListDeviceGroupAuthorizedBizChainResponse Client::listDeviceGroupAuthorizedBizChainWithOptions(const ListDeviceGroupAuthorizedBizChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceGroupId()) {
    query["DeviceGroupId"] = request.deviceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeviceGroupAuthorizedBizChain"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeviceGroupAuthorizedBizChainResponse>();
}

/**
 * @param request ListDeviceGroupAuthorizedBizChainRequest
 * @return ListDeviceGroupAuthorizedBizChainResponse
 */
ListDeviceGroupAuthorizedBizChainResponse Client::listDeviceGroupAuthorizedBizChain(const ListDeviceGroupAuthorizedBizChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeviceGroupAuthorizedBizChainWithOptions(request, runtime);
}

/**
 * @summary 查询边缘设备列表
 *
 * @param request ListEdgeDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEdgeDeviceResponse
 */
ListEdgeDeviceResponse Client::listEdgeDeviceWithOptions(const ListEdgeDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNum()) {
    query["Num"] = request.num();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.productKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEdgeDevice"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEdgeDeviceResponse>();
}

/**
 * @summary 查询边缘设备列表
 *
 * @param request ListEdgeDeviceRequest
 * @return ListEdgeDeviceResponse
 */
ListEdgeDeviceResponse Client::listEdgeDevice(const ListEdgeDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEdgeDeviceWithOptions(request, runtime);
}

/**
 * @summary 查询边缘设备组列表
 *
 * @param request ListEdgeDeviceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEdgeDeviceGroupResponse
 */
ListEdgeDeviceGroupResponse Client::listEdgeDeviceGroupWithOptions(const ListEdgeDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNum()) {
    query["Num"] = request.num();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEdgeDeviceGroup"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEdgeDeviceGroupResponse>();
}

/**
 * @summary 查询边缘设备组列表
 *
 * @param request ListEdgeDeviceGroupRequest
 * @return ListEdgeDeviceGroupResponse
 */
ListEdgeDeviceGroupResponse Client::listEdgeDeviceGroup(const ListEdgeDeviceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEdgeDeviceGroupWithOptions(request, runtime);
}

/**
 * @summary 查询成员列表
 *
 * @param request ListMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMemberResponse
 */
ListMemberResponse Client::listMemberWithOptions(const ListMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactor()) {
    query["Contactor"] = request.contactor();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNum()) {
    query["Num"] = request.num();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMember"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMemberResponse>();
}

/**
 * @summary 查询成员列表
 *
 * @param request ListMemberRequest
 * @return ListMemberResponse
 */
ListMemberResponse Client::listMember(const ListMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMemberWithOptions(request, runtime);
}

/**
 * @summary 查询成员接入记录分页列表
 *
 * @param request ListMemberAccessRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMemberAccessRecordResponse
 */
ListMemberAccessRecordResponse Client::listMemberAccessRecordWithOptions(const ListMemberAccessRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessStatus()) {
    query["AccessStatus"] = request.accessStatus();
  }

  if (!!request.hasContactor()) {
    query["Contactor"] = request.contactor();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNum()) {
    query["Num"] = request.num();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMemberAccessRecord"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMemberAccessRecordResponse>();
}

/**
 * @summary 查询成员接入记录分页列表
 *
 * @param request ListMemberAccessRecordRequest
 * @return ListMemberAccessRecordResponse
 */
ListMemberAccessRecordResponse Client::listMemberAccessRecord(const ListMemberAccessRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMemberAccessRecordWithOptions(request, runtime);
}

/**
 * @param request ListMemberAuthorizedBizChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMemberAuthorizedBizChainResponse
 */
ListMemberAuthorizedBizChainResponse Client::listMemberAuthorizedBizChainWithOptions(const ListMemberAuthorizedBizChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberId()) {
    query["MemberId"] = request.memberId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMemberAuthorizedBizChain"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMemberAuthorizedBizChainResponse>();
}

/**
 * @param request ListMemberAuthorizedBizChainRequest
 * @return ListMemberAuthorizedBizChainResponse
 */
ListMemberAuthorizedBizChainResponse Client::listMemberAuthorizedBizChain(const ListMemberAuthorizedBizChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMemberAuthorizedBizChainWithOptions(request, runtime);
}

/**
 * @param request ListPrivacyRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrivacyRuleResponse
 */
ListPrivacyRuleResponse Client::listPrivacyRuleWithOptions(const ListPrivacyRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNum()) {
    query["Num"] = request.num();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrivacyRule"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrivacyRuleResponse>();
}

/**
 * @param request ListPrivacyRuleRequest
 * @return ListPrivacyRuleResponse
 */
ListPrivacyRuleResponse Client::listPrivacyRule(const ListPrivacyRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrivacyRuleWithOptions(request, runtime);
}

/**
 * @param request ListPrivacyRuleSharedMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrivacyRuleSharedMemberResponse
 */
ListPrivacyRuleSharedMemberResponse Client::listPrivacyRuleSharedMemberWithOptions(const ListPrivacyRuleSharedMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPrivacyRuleId()) {
    query["PrivacyRuleId"] = request.privacyRuleId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrivacyRuleSharedMember"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrivacyRuleSharedMemberResponse>();
}

/**
 * @param request ListPrivacyRuleSharedMemberRequest
 * @return ListPrivacyRuleSharedMemberResponse
 */
ListPrivacyRuleSharedMemberResponse Client::listPrivacyRuleSharedMember(const ListPrivacyRuleSharedMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrivacyRuleSharedMemberWithOptions(request, runtime);
}

/**
 * @param request ListRouteRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRouteRuleResponse
 */
ListRouteRuleResponse Client::listRouteRuleWithOptions(const ListRouteRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizChainName()) {
    query["BizChainName"] = request.bizChainName();
  }

  if (!!request.hasChainUpMode()) {
    query["ChainUpMode"] = request.chainUpMode();
  }

  if (!!request.hasDeviceGroupName()) {
    query["DeviceGroupName"] = request.deviceGroupName();
  }

  if (!!request.hasNum()) {
    query["Num"] = request.num();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRouteRule"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRouteRuleResponse>();
}

/**
 * @param request ListRouteRuleRequest
 * @return ListRouteRuleResponse
 */
ListRouteRuleResponse Client::listRouteRule(const ListRouteRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRouteRuleWithOptions(request, runtime);
}

/**
 * @param request QueryBlockchainDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBlockchainDataResponse
 */
QueryBlockchainDataResponse Client::queryBlockchainDataWithOptions(const QueryBlockchainDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizChainId()) {
    query["BizChainId"] = request.bizChainId();
  }

  if (!!request.hasContractName()) {
    query["ContractName"] = request.contractName();
  }

  if (!!request.hasInvokeType()) {
    query["InvokeType"] = request.invokeType();
  }

  if (!!request.hasIotDataDID()) {
    query["IotDataDID"] = request.iotDataDID();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTransactionId()) {
    query["TransactionId"] = request.transactionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryBlockchainData"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBlockchainDataResponse>();
}

/**
 * @param request QueryBlockchainDataRequest
 * @return QueryBlockchainDataResponse
 */
QueryBlockchainDataResponse Client::queryBlockchainData(const QueryBlockchainDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBlockchainDataWithOptions(request, runtime);
}

/**
 * @param request QueryBlockchainMetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBlockchainMetadataResponse
 */
QueryBlockchainMetadataResponse Client::queryBlockchainMetadataWithOptions(const QueryBlockchainMetadataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizChainId()) {
    query["BizChainId"] = request.bizChainId();
  }

  if (!!request.hasContractName()) {
    query["ContractName"] = request.contractName();
  }

  if (!!request.hasInvokeType()) {
    query["InvokeType"] = request.invokeType();
  }

  if (!!request.hasIotDataDID()) {
    query["IotDataDID"] = request.iotDataDID();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTransactionId()) {
    query["TransactionId"] = request.transactionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryBlockchainMetadata"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBlockchainMetadataResponse>();
}

/**
 * @param request QueryBlockchainMetadataRequest
 * @return QueryBlockchainMetadataResponse
 */
QueryBlockchainMetadataResponse Client::queryBlockchainMetadata(const QueryBlockchainMetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBlockchainMetadataWithOptions(request, runtime);
}

/**
 * @param request SharePrivacyRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SharePrivacyRuleResponse
 */
SharePrivacyRuleResponse Client::sharePrivacyRuleWithOptions(const SharePrivacyRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberIdList()) {
    query["MemberIdList"] = request.memberIdList();
  }

  if (!!request.hasPrivacyRuleId()) {
    query["PrivacyRuleId"] = request.privacyRuleId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SharePrivacyRule"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SharePrivacyRuleResponse>();
}

/**
 * @param request SharePrivacyRuleRequest
 * @return SharePrivacyRuleResponse
 */
SharePrivacyRuleResponse Client::sharePrivacyRule(const SharePrivacyRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sharePrivacyRuleWithOptions(request, runtime);
}

/**
 * @param request UnFreezeMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnFreezeMemberResponse
 */
UnFreezeMemberResponse Client::unFreezeMemberWithOptions(const UnFreezeMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberId()) {
    query["MemberId"] = request.memberId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnFreezeMember"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnFreezeMemberResponse>();
}

/**
 * @param request UnFreezeMemberRequest
 * @return UnFreezeMemberResponse
 */
UnFreezeMemberResponse Client::unFreezeMember(const UnFreezeMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unFreezeMemberWithOptions(request, runtime);
}

/**
 * @param request UpdateBizChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBizChainResponse
 */
UpdateBizChainResponse Client::updateBizChainWithOptions(const UpdateBizChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizChainId()) {
    query["BizChainId"] = request.bizChainId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateBizChain"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBizChainResponse>();
}

/**
 * @param request UpdateBizChainRequest
 * @return UpdateBizChainResponse
 */
UpdateBizChainResponse Client::updateBizChain(const UpdateBizChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBizChainWithOptions(request, runtime);
}

/**
 * @summary 修改成员信息
 *
 * @param request UpdateMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMemberResponse
 */
UpdateMemberResponse Client::updateMemberWithOptions(const UpdateMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizedCount()) {
    query["AuthorizedCount"] = request.authorizedCount();
  }

  if (!!request.hasAuthorizedDeviceCount()) {
    query["AuthorizedDeviceCount"] = request.authorizedDeviceCount();
  }

  if (!!request.hasContactor()) {
    query["Contactor"] = request.contactor();
  }

  if (!!request.hasMemberId()) {
    query["MemberId"] = request.memberId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasTelephony()) {
    query["Telephony"] = request.telephony();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMember"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMemberResponse>();
}

/**
 * @summary 修改成员信息
 *
 * @param request UpdateMemberRequest
 * @return UpdateMemberResponse
 */
UpdateMemberResponse Client::updateMember(const UpdateMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMemberWithOptions(request, runtime);
}

/**
 * @param request UpdatePrivacyRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrivacyRuleResponse
 */
UpdatePrivacyRuleResponse Client::updatePrivacyRuleWithOptions(const UpdatePrivacyRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgImpl()) {
    query["AlgImpl"] = request.algImpl();
  }

  if (!!request.hasAlgType()) {
    query["AlgType"] = request.algType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPrivacyRuleId()) {
    query["PrivacyRuleId"] = request.privacyRuleId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePrivacyRule"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrivacyRuleResponse>();
}

/**
 * @param request UpdatePrivacyRuleRequest
 * @return UpdatePrivacyRuleResponse
 */
UpdatePrivacyRuleResponse Client::updatePrivacyRule(const UpdatePrivacyRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePrivacyRuleWithOptions(request, runtime);
}

/**
 * @param request UpdateRouteRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRouteRuleResponse
 */
UpdateRouteRuleResponse Client::updateRouteRuleWithOptions(const UpdateRouteRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizChainId()) {
    query["BizChainId"] = request.bizChainId();
  }

  if (!!request.hasContractName()) {
    query["ContractName"] = request.contractName();
  }

  if (!!request.hasContractTemplateId()) {
    query["ContractTemplateId"] = request.contractTemplateId();
  }

  if (!!request.hasInvokeType()) {
    query["InvokeType"] = request.invokeType();
  }

  if (!!request.hasPrivacyRuleId()) {
    query["PrivacyRuleId"] = request.privacyRuleId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasRouteRuleId()) {
    query["RouteRuleId"] = request.routeRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRouteRule"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRouteRuleResponse>();
}

/**
 * @param request UpdateRouteRuleRequest
 * @return UpdateRouteRuleResponse
 */
UpdateRouteRuleResponse Client::updateRouteRule(const UpdateRouteRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRouteRuleWithOptions(request, runtime);
}

/**
 * @param request UploadIoTDataToBlockchainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadIoTDataToBlockchainResponse
 */
UploadIoTDataToBlockchainResponse Client::uploadIoTDataToBlockchainWithOptions(const UploadIoTDataToBlockchainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIotAuthType()) {
    query["IotAuthType"] = request.iotAuthType();
  }

  if (!!request.hasIotDataDID()) {
    query["IotDataDID"] = request.iotDataDID();
  }

  if (!!request.hasIotDataDigest()) {
    query["IotDataDigest"] = request.iotDataDigest();
  }

  if (!!request.hasIotDataToken()) {
    query["IotDataToken"] = request.iotDataToken();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.iotId();
  }

  if (!!request.hasIotIdServiceProvider()) {
    query["IotIdServiceProvider"] = request.iotIdServiceProvider();
  }

  if (!!request.hasIotIdSource()) {
    query["IotIdSource"] = request.iotIdSource();
  }

  if (!!request.hasPlainData()) {
    query["PlainData"] = request.plainData();
  }

  if (!!request.hasPrivacyData()) {
    query["PrivacyData"] = request.privacyData();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadIoTDataToBlockchain"},
    {"version" , "2021-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadIoTDataToBlockchainResponse>();
}

/**
 * @param request UploadIoTDataToBlockchainRequest
 * @return UploadIoTDataToBlockchainResponse
 */
UploadIoTDataToBlockchainResponse Client::uploadIoTDataToBlockchain(const UploadIoTDataToBlockchainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadIoTDataToBlockchainWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Lto20210707