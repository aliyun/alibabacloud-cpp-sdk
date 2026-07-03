#include <darabonba/Core.hpp>
#include <alibabacloud/Smartag20180313.hpp>
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
using namespace AlibabaCloud::Smartag20180313::Models;
namespace AlibabaCloud
{
namespace Smartag20180313
{

AlibabaCloud::Smartag20180313::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"eu-central-1" , "smartag.eu-central-1.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "smartag.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai" , "smartag.cn-shanghai.aliyuncs.com"},
    {"cn-hongkong" , "smartag.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou" , "smartag.cn-hangzhou.aliyuncs.com"},
    {"ap-southeast-5" , "smartag.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "smartag.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-2" , "smartag.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-1" , "smartag.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-1" , "smartag.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("smartag", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Activates a Smart Access Gateway (SAG) device.
 *
 * @param request ActivateSmartAccessGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateSmartAccessGatewayResponse
 */
ActivateSmartAccessGatewayResponse Client::activateSmartAccessGatewayWithOptions(const ActivateSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ActivateSmartAccessGateway"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActivateSmartAccessGatewayResponse>();
}

/**
 * @summary Activates a Smart Access Gateway (SAG) device.
 *
 * @param request ActivateSmartAccessGatewayRequest
 * @return ActivateSmartAccessGatewayResponse
 */
ActivateSmartAccessGatewayResponse Client::activateSmartAccessGateway(const ActivateSmartAccessGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activateSmartAccessGatewayWithOptions(request, runtime);
}

/**
 * @summary Enables a flow log.
 *
 * @param request ActiveFlowLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActiveFlowLogResponse
 */
ActiveFlowLogResponse Client::activeFlowLogWithOptions(const ActiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
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
    {"action" , "ActiveFlowLog"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActiveFlowLogResponse>();
}

/**
 * @summary Enables a flow log.
 *
 * @param request ActiveFlowLogRequest
 * @return ActiveFlowLogResponse
 */
ActiveFlowLogResponse Client::activeFlowLog(const ActiveFlowLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activeFlowLogWithOptions(request, runtime);
}

/**
 * @summary Adds an access control rule.
 *
 * @param request AddACLRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddACLRuleResponse
 */
AddACLRuleResponse Client::addACLRuleWithOptions(const AddACLRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestCidr()) {
    query["DestCidr"] = request.getDestCidr();
  }

  if (!!request.hasDestPortRange()) {
    query["DestPortRange"] = request.getDestPortRange();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDpiGroupIds()) {
    query["DpiGroupIds"] = request.getDpiGroupIds();
  }

  if (!!request.hasDpiSignatureIds()) {
    query["DpiSignatureIds"] = request.getDpiSignatureIds();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolicy()) {
    query["Policy"] = request.getPolicy();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
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

  if (!!request.hasSourceCidr()) {
    query["SourceCidr"] = request.getSourceCidr();
  }

  if (!!request.hasSourcePortRange()) {
    query["SourcePortRange"] = request.getSourcePortRange();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddACLRule"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddACLRuleResponse>();
}

/**
 * @summary Adds an access control rule.
 *
 * @param request AddACLRuleRequest
 * @return AddACLRuleResponse
 */
AddACLRuleResponse Client::addACLRule(const AddACLRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addACLRuleWithOptions(request, runtime);
}

/**
 * @summary Adds a destination network address translation (DNAT) entry to a Smart Access Gateway (SAG) instance.
 *
 * @param request AddDnatEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDnatEntryResponse
 */
AddDnatEntryResponse Client::addDnatEntryWithOptions(const AddDnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExternalIp()) {
    query["ExternalIp"] = request.getExternalIp();
  }

  if (!!request.hasExternalPort()) {
    query["ExternalPort"] = request.getExternalPort();
  }

  if (!!request.hasInternalIp()) {
    query["InternalIp"] = request.getInternalIp();
  }

  if (!!request.hasInternalPort()) {
    query["InternalPort"] = request.getInternalPort();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
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

  if (!!request.hasSagId()) {
    query["SagId"] = request.getSagId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDnatEntry"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDnatEntryResponse>();
}

/**
 * @summary Adds a destination network address translation (DNAT) entry to a Smart Access Gateway (SAG) instance.
 *
 * @param request AddDnatEntryRequest
 * @return AddDnatEntryResponse
 */
AddDnatEntryResponse Client::addDnatEntry(const AddDnatEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDnatEntryWithOptions(request, runtime);
}

/**
 * @summary Adds DNS forwarding configurations to an SCG5000 or SCG5000-5G instance. The device version must be 3.4.2 or later.
 *
 * @param request AddSmartAccessGatewayDnsForwardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSmartAccessGatewayDnsForwardResponse
 */
AddSmartAccessGatewayDnsForwardResponse Client::addSmartAccessGatewayDnsForwardWithOptions(const AddSmartAccessGatewayDnsForwardRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasMasterIp()) {
    query["MasterIp"] = request.getMasterIp();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasOutboundPortIndex()) {
    query["OutboundPortIndex"] = request.getOutboundPortIndex();
  }

  if (!!request.hasOutboundPortName()) {
    query["OutboundPortName"] = request.getOutboundPortName();
  }

  if (!!request.hasOutboundPortType()) {
    query["OutboundPortType"] = request.getOutboundPortType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  if (!!request.hasSlaveIp()) {
    query["SlaveIp"] = request.getSlaveIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSmartAccessGatewayDnsForward"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSmartAccessGatewayDnsForwardResponse>();
}

/**
 * @summary Adds DNS forwarding configurations to an SCG5000 or SCG5000-5G instance. The device version must be 3.4.2 or later.
 *
 * @param request AddSmartAccessGatewayDnsForwardRequest
 * @return AddSmartAccessGatewayDnsForwardResponse
 */
AddSmartAccessGatewayDnsForwardResponse Client::addSmartAccessGatewayDnsForward(const AddSmartAccessGatewayDnsForwardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSmartAccessGatewayDnsForwardWithOptions(request, runtime);
}

/**
 * @summary Adds a source network address translation (SNAT) entry to a Smart Access Gateway (SAG) instance.
 *
 * @param request AddSnatEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSnatEntryResponse
 */
AddSnatEntryResponse Client::addSnatEntryWithOptions(const AddSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrBlock()) {
    query["CidrBlock"] = request.getCidrBlock();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSnatIp()) {
    query["SnatIp"] = request.getSnatIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSnatEntry"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSnatEntryResponse>();
}

/**
 * @summary Adds a source network address translation (SNAT) entry to a Smart Access Gateway (SAG) instance.
 *
 * @param request AddSnatEntryRequest
 * @return AddSnatEntryResponse
 */
AddSnatEntryResponse Client::addSnatEntry(const AddSnatEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSnatEntryWithOptions(request, runtime);
}

/**
 * @summary Associates an access control list (ACL) with a Smart Access Gateway (SAG) instance.
 *
 * @param request AssociateACLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateACLResponse
 */
AssociateACLResponse Client::associateACLWithOptions(const AssociateACLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateACL"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateACLResponse>();
}

/**
 * @summary Associates an access control list (ACL) with a Smart Access Gateway (SAG) instance.
 *
 * @param request AssociateACLRequest
 * @return AssociateACLResponse
 */
AssociateACLResponse Client::associateACL(const AssociateACLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateACLWithOptions(request, runtime);
}

/**
 * @summary Associates a Smart Access Gateway instance.
 *
 * @param request AssociateFlowLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateFlowLogResponse
 */
AssociateFlowLogResponse Client::associateFlowLogWithOptions(const AssociateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateFlowLog"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateFlowLogResponse>();
}

/**
 * @summary Associates a Smart Access Gateway instance.
 *
 * @param request AssociateFlowLogRequest
 * @return AssociateFlowLogResponse
 */
AssociateFlowLogResponse Client::associateFlowLog(const AssociateFlowLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateFlowLogWithOptions(request, runtime);
}

/**
 * @summary Applies a Quality of Service (QoS) policy to a Smart Access Gateway (SAG) instance.
 *
 * @param request AssociateQosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateQosResponse
 */
AssociateQosResponse Client::associateQosWithOptions(const AssociateQosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQosId()) {
    query["QosId"] = request.getQosId();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateQos"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateQosResponse>();
}

/**
 * @summary Applies a Quality of Service (QoS) policy to a Smart Access Gateway (SAG) instance.
 *
 * @param request AssociateQosRequest
 * @return AssociateQosResponse
 */
AssociateQosResponse Client::associateQos(const AssociateQosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateQosWithOptions(request, runtime);
}

/**
 * @summary Associates a bandwidth plan for application acceleration with a Smart Access Gateway (SAG) instance.
 *
 * @description Before you associate a bandwidth plan for application acceleration with an SAG instance, make sure that the following requirements are met:
 * *   If you want to associate a bandwidth plan for application acceleration with an SAG CPE instance, the version of the SAG device associated with the SAG CPE instance must be 2.4.0 or later.
 *     If the version of the SAG device is earlier than 2.4.0, update it. For more information, see [Update the version of an SAG device](https://help.aliyun.com/document_detail/163948.html).
 * *   If you want to associate a bandwidth plan for application acceleration with an SAG app instance, the version of the SAG app must be 2.4.0 or later.
 *     If the version of the SAG app is earlier than 2.4.0, update it. For more information, see [Install the SAG app](https://help.aliyun.com/document_detail/102544.html).
 * *   The SAG instance to be associated is in the available state.
 *
 * @param request AssociateSmartAGWithApplicationBandwidthPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateSmartAGWithApplicationBandwidthPackageResponse
 */
AssociateSmartAGWithApplicationBandwidthPackageResponse Client::associateSmartAGWithApplicationBandwidthPackageWithOptions(const AssociateSmartAGWithApplicationBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationBandwidthPackageId()) {
    query["ApplicationBandwidthPackageId"] = request.getApplicationBandwidthPackageId();
  }

  if (!!request.hasAssociateConfigs()) {
    query["AssociateConfigs"] = request.getAssociateConfigs();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateSmartAGWithApplicationBandwidthPackage"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateSmartAGWithApplicationBandwidthPackageResponse>();
}

/**
 * @summary Associates a bandwidth plan for application acceleration with a Smart Access Gateway (SAG) instance.
 *
 * @description Before you associate a bandwidth plan for application acceleration with an SAG instance, make sure that the following requirements are met:
 * *   If you want to associate a bandwidth plan for application acceleration with an SAG CPE instance, the version of the SAG device associated with the SAG CPE instance must be 2.4.0 or later.
 *     If the version of the SAG device is earlier than 2.4.0, update it. For more information, see [Update the version of an SAG device](https://help.aliyun.com/document_detail/163948.html).
 * *   If you want to associate a bandwidth plan for application acceleration with an SAG app instance, the version of the SAG app must be 2.4.0 or later.
 *     If the version of the SAG app is earlier than 2.4.0, update it. For more information, see [Install the SAG app](https://help.aliyun.com/document_detail/102544.html).
 * *   The SAG instance to be associated is in the available state.
 *
 * @param request AssociateSmartAGWithApplicationBandwidthPackageRequest
 * @return AssociateSmartAGWithApplicationBandwidthPackageResponse
 */
AssociateSmartAGWithApplicationBandwidthPackageResponse Client::associateSmartAGWithApplicationBandwidthPackage(const AssociateSmartAGWithApplicationBandwidthPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateSmartAGWithApplicationBandwidthPackageWithOptions(request, runtime);
}

/**
 * @summary Binds a Cloud Connect Network (CCN) instance to a Cloud Enterprise Network (CEN) instance.
 *
 * @description Binds a Cloud Connect Network (CCN) instance to a Cloud Enterprise Network (CEN) instance.
 *
 * @param request AttachCcnInstanceToCenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachCcnInstanceToCenResponse
 */
AttachCcnInstanceToCenResponse Client::attachCcnInstanceToCenWithOptions(const AttachCcnInstanceToCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCcnId()) {
    query["CcnId"] = request.getCcnId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSubnet()) {
    query["Subnet"] = request.getSubnet();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachCcnInstanceToCen"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachCcnInstanceToCenResponse>();
}

/**
 * @summary Binds a Cloud Connect Network (CCN) instance to a Cloud Enterprise Network (CEN) instance.
 *
 * @description Binds a Cloud Connect Network (CCN) instance to a Cloud Enterprise Network (CEN) instance.
 *
 * @param request AttachCcnInstanceToCenRequest
 * @return AttachCcnInstanceToCenResponse
 */
AttachCcnInstanceToCenResponse Client::attachCcnInstanceToCen(const AttachCcnInstanceToCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachCcnInstanceToCenWithOptions(request, runtime);
}

/**
 * @summary Binds a Smart Access Gateway device to a Smart Access Gateway instance.
 *
 * @param request BindSerialNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindSerialNumberResponse
 */
BindSerialNumberResponse Client::bindSerialNumberWithOptions(const BindSerialNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindSerialNumber"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindSerialNumberResponse>();
}

/**
 * @summary Binds a Smart Access Gateway device to a Smart Access Gateway instance.
 *
 * @param request BindSerialNumberRequest
 * @return BindSerialNumberResponse
 */
BindSerialNumberResponse Client::bindSerialNumber(const BindSerialNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindSerialNumberWithOptions(request, runtime);
}

/**
 * @summary Associates a Smart Access Gateway (SAG) instance with a Cloud Connect Network (CCN) instance.
 *
 * @param request BindSmartAccessGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindSmartAccessGatewayResponse
 */
BindSmartAccessGatewayResponse Client::bindSmartAccessGatewayWithOptions(const BindSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCcnId()) {
    query["CcnId"] = request.getCcnId();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGUid()) {
    query["SmartAGUid"] = request.getSmartAGUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindSmartAccessGateway"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindSmartAccessGatewayResponse>();
}

/**
 * @summary Associates a Smart Access Gateway (SAG) instance with a Cloud Connect Network (CCN) instance.
 *
 * @param request BindSmartAccessGatewayRequest
 * @return BindSmartAccessGatewayResponse
 */
BindSmartAccessGatewayResponse Client::bindSmartAccessGateway(const BindSmartAccessGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindSmartAccessGatewayWithOptions(request, runtime);
}

/**
 * @summary Binds a virtual border router (VBR) to a Smart Access Gateway instance.
 *
 * @param request BindVbrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindVbrResponse
 */
BindVbrResponse Client::bindVbrWithOptions(const BindVbrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGUid()) {
    query["SmartAGUid"] = request.getSmartAGUid();
  }

  if (!!request.hasVbrId()) {
    query["VbrId"] = request.getVbrId();
  }

  if (!!request.hasVbrRegionId()) {
    query["VbrRegionId"] = request.getVbrRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindVbr"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindVbrResponse>();
}

/**
 * @summary Binds a virtual border router (VBR) to a Smart Access Gateway instance.
 *
 * @param request BindVbrRequest
 * @return BindVbrResponse
 */
BindVbrResponse Client::bindVbr(const BindVbrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindVbrWithOptions(request, runtime);
}

/**
 * @summary Resets the password of a virtual customer-premises equipment (vCPE) device of Smart Access Gateway (SAG).
 *
 * @param request ClearSagCipherRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearSagCipherResponse
 */
ClearSagCipherResponse Client::clearSagCipherWithOptions(const ClearSagCipherRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSagId()) {
    query["SagId"] = request.getSagId();
  }

  if (!!request.hasSnNumber()) {
    query["SnNumber"] = request.getSnNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClearSagCipher"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearSagCipherResponse>();
}

/**
 * @summary Resets the password of a virtual customer-premises equipment (vCPE) device of Smart Access Gateway (SAG).
 *
 * @param request ClearSagCipherRequest
 * @return ClearSagCipherResponse
 */
ClearSagCipherResponse Client::clearSagCipher(const ClearSagCipherRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clearSagCipherWithOptions(request, runtime);
}

/**
 * @summary Purges the routable addresses of a Smart Access Gateway instance.
 *
 * @param request ClearSagRouteableAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearSagRouteableAddressResponse
 */
ClearSagRouteableAddressResponse Client::clearSagRouteableAddressWithOptions(const ClearSagRouteableAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSagId()) {
    query["SagId"] = request.getSagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClearSagRouteableAddress"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearSagRouteableAddressResponse>();
}

/**
 * @summary Purges the routable addresses of a Smart Access Gateway instance.
 *
 * @param request ClearSagRouteableAddressRequest
 * @return ClearSagRouteableAddressResponse
 */
ClearSagRouteableAddressResponse Client::clearSagRouteableAddress(const ClearSagRouteableAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clearSagRouteableAddressWithOptions(request, runtime);
}

/**
 * @summary Creates an access control instance by calling the CreateACL operation.
 *
 * @param request CreateACLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateACLResponse
 */
CreateACLResponse Client::createACLWithOptions(const CreateACLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclType()) {
    query["AclType"] = request.getAclType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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
    {"action" , "CreateACL"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateACLResponse>();
}

/**
 * @summary Creates an access control instance by calling the CreateACL operation.
 *
 * @param request CreateACLRequest
 * @return CreateACLResponse
 */
CreateACLResponse Client::createACL(const CreateACLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createACLWithOptions(request, runtime);
}

/**
 * @summary Calls the CreateCloudConnectNetwork operation to create a Cloud Connect Network (CCN) instance.
 *
 * @description A Cloud Connect Network (CCN) is a device access matrix that consists of Alibaba Cloud distributed access gateways. CCN is another important component of Smart Access Gateway. After you attach Smart Access Gateway to a CCN, Smart Access Gateway can connect your on-premises network to Alibaba Cloud through the CCN via network connectivity. For more information, see [Cloud Connect Network overview](https://help.aliyun.com/document_detail/93667.html).
 *
 * @param request CreateCloudConnectNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudConnectNetworkResponse
 */
CreateCloudConnectNetworkResponse Client::createCloudConnectNetworkWithOptions(const CreateCloudConnectNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrBlock()) {
    query["CidrBlock"] = request.getCidrBlock();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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

  if (!!request.hasSnatCidrBlock()) {
    query["SnatCidrBlock"] = request.getSnatCidrBlock();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudConnectNetwork"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudConnectNetworkResponse>();
}

/**
 * @summary Calls the CreateCloudConnectNetwork operation to create a Cloud Connect Network (CCN) instance.
 *
 * @description A Cloud Connect Network (CCN) is a device access matrix that consists of Alibaba Cloud distributed access gateways. CCN is another important component of Smart Access Gateway. After you attach Smart Access Gateway to a CCN, Smart Access Gateway can connect your on-premises network to Alibaba Cloud through the CCN via network connectivity. For more information, see [Cloud Connect Network overview](https://help.aliyun.com/document_detail/93667.html).
 *
 * @param request CreateCloudConnectNetworkRequest
 * @return CreateCloudConnectNetworkResponse
 */
CreateCloudConnectNetworkResponse Client::createCloudConnectNetwork(const CreateCloudConnectNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudConnectNetworkWithOptions(request, runtime);
}

/**
 * @summary Creates an enterprise code by calling CreateEnterpriseCode.
 *
 * @param request CreateEnterpriseCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnterpriseCodeResponse
 */
CreateEnterpriseCodeResponse Client::createEnterpriseCodeWithOptions(const CreateEnterpriseCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnterpriseCode()) {
    query["EnterpriseCode"] = request.getEnterpriseCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEnterpriseCode"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEnterpriseCodeResponse>();
}

/**
 * @summary Creates an enterprise code by calling CreateEnterpriseCode.
 *
 * @param request CreateEnterpriseCodeRequest
 * @return CreateEnterpriseCodeResponse
 */
CreateEnterpriseCodeResponse Client::createEnterpriseCode(const CreateEnterpriseCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEnterpriseCodeWithOptions(request, runtime);
}

/**
 * @summary Creates a flow log.
 *
 * @param request CreateFlowLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFlowLogResponse
 */
CreateFlowLogResponse Client::createFlowLogWithOptions(const CreateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveAging()) {
    query["ActiveAging"] = request.getActiveAging();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInactiveAging()) {
    query["InactiveAging"] = request.getInactiveAging();
  }

  if (!!request.hasLogstoreName()) {
    query["LogstoreName"] = request.getLogstoreName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNetflowServerIp()) {
    query["NetflowServerIp"] = request.getNetflowServerIp();
  }

  if (!!request.hasNetflowServerPort()) {
    query["NetflowServerPort"] = request.getNetflowServerPort();
  }

  if (!!request.hasNetflowVersion()) {
    query["NetflowVersion"] = request.getNetflowVersion();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.getOutputType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
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

  if (!!request.hasSlsRegionId()) {
    query["SlsRegionId"] = request.getSlsRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFlowLog"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFlowLogResponse>();
}

/**
 * @summary Creates a flow log.
 *
 * @param request CreateFlowLogRequest
 * @return CreateFlowLogResponse
 */
CreateFlowLogResponse Client::createFlowLog(const CreateFlowLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFlowLogWithOptions(request, runtime);
}

/**
 * @summary Calls CreateHealthCheck to create a health check for a Smart Access Gateway instance.
 *
 * @param request CreateHealthCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHealthCheckResponse
 */
CreateHealthCheckResponse Client::createHealthCheckWithOptions(const CreateHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDstIpAddr()) {
    query["DstIpAddr"] = request.getDstIpAddr();
  }

  if (!!request.hasDstPort()) {
    query["DstPort"] = request.getDstPort();
  }

  if (!!request.hasFailCountThreshold()) {
    query["FailCountThreshold"] = request.getFailCountThreshold();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProbeCount()) {
    query["ProbeCount"] = request.getProbeCount();
  }

  if (!!request.hasProbeInterval()) {
    query["ProbeInterval"] = request.getProbeInterval();
  }

  if (!!request.hasProbeTimeout()) {
    query["ProbeTimeout"] = request.getProbeTimeout();
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

  if (!!request.hasRttFailThreshold()) {
    query["RttFailThreshold"] = request.getRttFailThreshold();
  }

  if (!!request.hasRttThreshold()) {
    query["RttThreshold"] = request.getRttThreshold();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSrcIpAddr()) {
    query["SrcIpAddr"] = request.getSrcIpAddr();
  }

  if (!!request.hasSrcPort()) {
    query["SrcPort"] = request.getSrcPort();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHealthCheck"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHealthCheckResponse>();
}

/**
 * @summary Calls CreateHealthCheck to create a health check for a Smart Access Gateway instance.
 *
 * @param request CreateHealthCheckRequest
 * @return CreateHealthCheckResponse
 */
CreateHealthCheckResponse Client::createHealthCheck(const CreateHealthCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHealthCheckWithOptions(request, runtime);
}

/**
 * @summary Creates a probe task for a specified Smart Access Gateway device.
 *
 * @description - Currently, only SAG-1000 devices with software version 2.7.0 or later support the probe monitoring feature.
 * - Before creating a probe task, enable the advanced monitoring feature for the Smart Access Gateway instance. You can call the [SetAdvancedMonitorState](https://help.aliyun.com/document_detail/476404.html) operation to set the advanced monitoring status.
 *
 * @param request CreateProbeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProbeTaskResponse
 */
CreateProbeTaskResponse Client::createProbeTaskWithOptions(const CreateProbeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasPacketNumber()) {
    query["PacketNumber"] = request.getPacketNumber();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasProbeTaskSourceAddress()) {
    query["ProbeTaskSourceAddress"] = request.getProbeTaskSourceAddress();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSagId()) {
    query["SagId"] = request.getSagId();
  }

  if (!!request.hasSn()) {
    query["Sn"] = request.getSn();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProbeTask"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProbeTaskResponse>();
}

/**
 * @summary Creates a probe task for a specified Smart Access Gateway device.
 *
 * @description - Currently, only SAG-1000 devices with software version 2.7.0 or later support the probe monitoring feature.
 * - Before creating a probe task, enable the advanced monitoring feature for the Smart Access Gateway instance. You can call the [SetAdvancedMonitorState](https://help.aliyun.com/document_detail/476404.html) operation to set the advanced monitoring status.
 *
 * @param request CreateProbeTaskRequest
 * @return CreateProbeTaskResponse
 */
CreateProbeTaskResponse Client::createProbeTask(const CreateProbeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProbeTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a quality of service (QoS) policy instance by calling the CreateQos operation.
 *
 * @param request CreateQosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQosResponse
 */
CreateQosResponse Client::createQosWithOptions(const CreateQosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQosDescription()) {
    query["QosDescription"] = request.getQosDescription();
  }

  if (!!request.hasQosName()) {
    query["QosName"] = request.getQosName();
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
    {"action" , "CreateQos"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQosResponse>();
}

/**
 * @summary Creates a quality of service (QoS) policy instance by calling the CreateQos operation.
 *
 * @param request CreateQosRequest
 * @return CreateQosResponse
 */
CreateQosResponse Client::createQos(const CreateQosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQosWithOptions(request, runtime);
}

/**
 * @summary Creates a rate limiting rule for a quality of service (QoS) policy by calling the CreateQosCar operation.
 *
 * @param request CreateQosCarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQosCarResponse
 */
CreateQosCarResponse Client::createQosCarWithOptions(const CreateQosCarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasLimitType()) {
    query["LimitType"] = request.getLimitType();
  }

  if (!!request.hasMaxBandwidthAbs()) {
    query["MaxBandwidthAbs"] = request.getMaxBandwidthAbs();
  }

  if (!!request.hasMaxBandwidthPercent()) {
    query["MaxBandwidthPercent"] = request.getMaxBandwidthPercent();
  }

  if (!!request.hasMinBandwidthAbs()) {
    query["MinBandwidthAbs"] = request.getMinBandwidthAbs();
  }

  if (!!request.hasMinBandwidthPercent()) {
    query["MinBandwidthPercent"] = request.getMinBandwidthPercent();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPercentSourceType()) {
    query["PercentSourceType"] = request.getPercentSourceType();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasQosId()) {
    query["QosId"] = request.getQosId();
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
    {"action" , "CreateQosCar"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQosCarResponse>();
}

/**
 * @summary Creates a rate limiting rule for a quality of service (QoS) policy by calling the CreateQosCar operation.
 *
 * @param request CreateQosCarRequest
 * @return CreateQosCarResponse
 */
CreateQosCarResponse Client::createQosCar(const CreateQosCarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQosCarWithOptions(request, runtime);
}

/**
 * @summary Creates a traffic classification rule for a QoS policy by calling the CreateQosPolicy operation.
 *
 * @description Before you create a 5-tuple rule for a QoS policy, make sure that you have created a rate limiting rule for the QoS policy. For more information, see [CreateQosCar](https://help.aliyun.com/document_detail/131806.html).
 *
 * @param request CreateQosPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQosPolicyResponse
 */
CreateQosPolicyResponse Client::createQosPolicyWithOptions(const CreateQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestCidr()) {
    query["DestCidr"] = request.getDestCidr();
  }

  if (!!request.hasDestPortRange()) {
    query["DestPortRange"] = request.getDestPortRange();
  }

  if (!!request.hasDpiGroupIds()) {
    query["DpiGroupIds"] = request.getDpiGroupIds();
  }

  if (!!request.hasDpiSignatureIds()) {
    query["DpiSignatureIds"] = request.getDpiSignatureIds();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasQosId()) {
    query["QosId"] = request.getQosId();
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

  if (!!request.hasSourceCidr()) {
    query["SourceCidr"] = request.getSourceCidr();
  }

  if (!!request.hasSourcePortRange()) {
    query["SourcePortRange"] = request.getSourcePortRange();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateQosPolicy"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQosPolicyResponse>();
}

/**
 * @summary Creates a traffic classification rule for a QoS policy by calling the CreateQosPolicy operation.
 *
 * @description Before you create a 5-tuple rule for a QoS policy, make sure that you have created a rate limiting rule for the QoS policy. For more information, see [CreateQosCar](https://help.aliyun.com/document_detail/131806.html).
 *
 * @param request CreateQosPolicyRequest
 * @return CreateQosPolicyResponse
 */
CreateQosPolicyResponse Client::createQosPolicy(const CreateQosPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQosPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a subinterface for an Express Connect circuit.
 *
 * @param request CreateSagExpressConnectInterfaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSagExpressConnectInterfaceResponse
 */
CreateSagExpressConnectInterfaceResponse Client::createSagExpressConnectInterfaceWithOptions(const CreateSagExpressConnectInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIP()) {
    query["IP"] = request.getIP();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPortName()) {
    query["PortName"] = request.getPortName();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  if (!!request.hasVlan()) {
    query["Vlan"] = request.getVlan();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSagExpressConnectInterface"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSagExpressConnectInterfaceResponse>();
}

/**
 * @summary Creates a subinterface for an Express Connect circuit.
 *
 * @param request CreateSagExpressConnectInterfaceRequest
 * @return CreateSagExpressConnectInterfaceResponse
 */
CreateSagExpressConnectInterfaceResponse Client::createSagExpressConnectInterface(const CreateSagExpressConnectInterfaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSagExpressConnectInterfaceWithOptions(request, runtime);
}

/**
 * @summary Adds a static route to a Smart Access Gateway (SAG) instance.
 *
 * @param request CreateSagStaticRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSagStaticRouteResponse
 */
CreateSagStaticRouteResponse Client::createSagStaticRouteWithOptions(const CreateSagStaticRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestinationCidr()) {
    query["DestinationCidr"] = request.getDestinationCidr();
  }

  if (!!request.hasNextHop()) {
    query["NextHop"] = request.getNextHop();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPortName()) {
    query["PortName"] = request.getPortName();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  if (!!request.hasVlan()) {
    query["Vlan"] = request.getVlan();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSagStaticRoute"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSagStaticRouteResponse>();
}

/**
 * @summary Adds a static route to a Smart Access Gateway (SAG) instance.
 *
 * @param request CreateSagStaticRouteRequest
 * @return CreateSagStaticRouteResponse
 */
CreateSagStaticRouteResponse Client::createSagStaticRoute(const CreateSagStaticRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSagStaticRouteWithOptions(request, runtime);
}

/**
 * @summary Configures a service address for a specified Smart Access Gateway device.
 *
 * @param request CreateServiceAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceAddressResponse
 */
CreateServiceAddressResponse Client::createServiceAddressWithOptions(const CreateServiceAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasAddressType()) {
    query["AddressType"] = request.getAddressType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSagId()) {
    query["SagId"] = request.getSagId();
  }

  if (!!request.hasSn()) {
    query["Sn"] = request.getSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceAddress"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceAddressResponse>();
}

/**
 * @summary Configures a service address for a specified Smart Access Gateway device.
 *
 * @param request CreateServiceAddressRequest
 * @return CreateServiceAddressResponse
 */
CreateServiceAddressResponse Client::createServiceAddress(const CreateServiceAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceAddressWithOptions(request, runtime);
}

/**
 * @summary Creates a Smart Access Gateway (SAG) CPE or vCPE instance.
 *
 * @param request CreateSmartAccessGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSmartAccessGatewayResponse
 */
CreateSmartAccessGatewayResponse Client::createSmartAccessGatewayWithOptions(const CreateSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlreadyHaveSag()) {
    query["AlreadyHaveSag"] = request.getAlreadyHaveSag();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasBuyerMessage()) {
    query["BuyerMessage"] = request.getBuyerMessage();
  }

  if (!!request.hasCPEVersion()) {
    query["CPEVersion"] = request.getCPEVersion();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasHaType()) {
    query["HaType"] = request.getHaType();
  }

  if (!!request.hasHardWareSpec()) {
    query["HardWareSpec"] = request.getHardWareSpec();
  }

  if (!!request.hasMaxBandWidth()) {
    query["MaxBandWidth"] = request.getMaxBandWidth();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasReceiverAddress()) {
    query["ReceiverAddress"] = request.getReceiverAddress();
  }

  if (!!request.hasReceiverCity()) {
    query["ReceiverCity"] = request.getReceiverCity();
  }

  if (!!request.hasReceiverCountry()) {
    query["ReceiverCountry"] = request.getReceiverCountry();
  }

  if (!!request.hasReceiverDistrict()) {
    query["ReceiverDistrict"] = request.getReceiverDistrict();
  }

  if (!!request.hasReceiverEmail()) {
    query["ReceiverEmail"] = request.getReceiverEmail();
  }

  if (!!request.hasReceiverMobile()) {
    query["ReceiverMobile"] = request.getReceiverMobile();
  }

  if (!!request.hasReceiverName()) {
    query["ReceiverName"] = request.getReceiverName();
  }

  if (!!request.hasReceiverPhone()) {
    query["ReceiverPhone"] = request.getReceiverPhone();
  }

  if (!!request.hasReceiverState()) {
    query["ReceiverState"] = request.getReceiverState();
  }

  if (!!request.hasReceiverTown()) {
    query["ReceiverTown"] = request.getReceiverTown();
  }

  if (!!request.hasReceiverZip()) {
    query["ReceiverZip"] = request.getReceiverZip();
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
    {"action" , "CreateSmartAccessGateway"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSmartAccessGatewayResponse>();
}

/**
 * @summary Creates a Smart Access Gateway (SAG) CPE or vCPE instance.
 *
 * @param request CreateSmartAccessGatewayRequest
 * @return CreateSmartAccessGatewayResponse
 */
CreateSmartAccessGatewayResponse Client::createSmartAccessGateway(const CreateSmartAccessGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmartAccessGatewayWithOptions(request, runtime);
}

/**
 * @summary Creates a client account.
 *
 * @param request CreateSmartAccessGatewayClientUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSmartAccessGatewayClientUserResponse
 */
CreateSmartAccessGatewayClientUserResponse Client::createSmartAccessGatewayClientUserWithOptions(const CreateSmartAccessGatewayClientUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasUserMail()) {
    query["UserMail"] = request.getUserMail();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSmartAccessGatewayClientUser"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSmartAccessGatewayClientUserResponse>();
}

/**
 * @summary Creates a client account.
 *
 * @param request CreateSmartAccessGatewayClientUserRequest
 * @return CreateSmartAccessGatewayClientUserResponse
 */
CreateSmartAccessGatewayClientUserResponse Client::createSmartAccessGatewayClientUser(const CreateSmartAccessGatewayClientUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmartAccessGatewayClientUserWithOptions(request, runtime);
}

/**
 * @summary Creates a Smart Access Gateway (SAG) app instance.
 *
 * @param request CreateSmartAccessGatewaySoftwareRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSmartAccessGatewaySoftwareResponse
 */
CreateSmartAccessGatewaySoftwareResponse Client::createSmartAccessGatewaySoftwareWithOptions(const CreateSmartAccessGatewaySoftwareRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasDataPlan()) {
    query["DataPlan"] = request.getDataPlan();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
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

  if (!!request.hasUserCount()) {
    query["UserCount"] = request.getUserCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSmartAccessGatewaySoftware"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSmartAccessGatewaySoftwareResponse>();
}

/**
 * @summary Creates a Smart Access Gateway (SAG) app instance.
 *
 * @param request CreateSmartAccessGatewaySoftwareRequest
 * @return CreateSmartAccessGatewaySoftwareResponse
 */
CreateSmartAccessGatewaySoftwareResponse Client::createSmartAccessGatewaySoftware(const CreateSmartAccessGatewaySoftwareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmartAccessGatewaySoftwareWithOptions(request, runtime);
}

/**
 * @summary Stops a flow log.
 *
 * @param request DeactiveFlowLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeactiveFlowLogResponse
 */
DeactiveFlowLogResponse Client::deactiveFlowLogWithOptions(const DeactiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
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
    {"action" , "DeactiveFlowLog"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeactiveFlowLogResponse>();
}

/**
 * @summary Stops a flow log.
 *
 * @param request DeactiveFlowLogRequest
 * @return DeactiveFlowLogResponse
 */
DeactiveFlowLogResponse Client::deactiveFlowLog(const DeactiveFlowLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deactiveFlowLogWithOptions(request, runtime);
}

/**
 * @summary Deletes an access control list (ACL).
 *
 * @param request DeleteACLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteACLResponse
 */
DeleteACLResponse Client::deleteACLWithOptions(const DeleteACLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
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
    {"action" , "DeleteACL"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteACLResponse>();
}

/**
 * @summary Deletes an access control list (ACL).
 *
 * @param request DeleteACLRequest
 * @return DeleteACLResponse
 */
DeleteACLResponse Client::deleteACL(const DeleteACLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteACLWithOptions(request, runtime);
}

/**
 * @summary Deletes a rule from an ACL.
 *
 * @param request DeleteACLRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteACLRuleResponse
 */
DeleteACLRuleResponse Client::deleteACLRuleWithOptions(const DeleteACLRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasAcrId()) {
    query["AcrId"] = request.getAcrId();
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
    {"action" , "DeleteACLRule"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteACLRuleResponse>();
}

/**
 * @summary Deletes a rule from an ACL.
 *
 * @param request DeleteACLRuleRequest
 * @return DeleteACLRuleResponse
 */
DeleteACLRuleResponse Client::deleteACLRule(const DeleteACLRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteACLRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a Cloud Connect Network (CCN) instance.
 *
 * @description >  Make sure that the CCN instance you want to delete is not associated with a Smart Access Gateway (SAG) instance or a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DeleteCloudConnectNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudConnectNetworkResponse
 */
DeleteCloudConnectNetworkResponse Client::deleteCloudConnectNetworkWithOptions(const DeleteCloudConnectNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCcnId()) {
    query["CcnId"] = request.getCcnId();
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
    {"action" , "DeleteCloudConnectNetwork"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudConnectNetworkResponse>();
}

/**
 * @summary Deletes a Cloud Connect Network (CCN) instance.
 *
 * @description >  Make sure that the CCN instance you want to delete is not associated with a Smart Access Gateway (SAG) instance or a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DeleteCloudConnectNetworkRequest
 * @return DeleteCloudConnectNetworkResponse
 */
DeleteCloudConnectNetworkResponse Client::deleteCloudConnectNetwork(const DeleteCloudConnectNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudConnectNetworkWithOptions(request, runtime);
}

/**
 * @summary Removes a DNAT entry from a Smart Access Gateway (SAG) instance.
 *
 * @param request DeleteDnatEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDnatEntryResponse
 */
DeleteDnatEntryResponse Client::deleteDnatEntryWithOptions(const DeleteDnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDnatEntryId()) {
    query["DnatEntryId"] = request.getDnatEntryId();
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

  if (!!request.hasSagId()) {
    query["SagId"] = request.getSagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDnatEntry"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDnatEntryResponse>();
}

/**
 * @summary Removes a DNAT entry from a Smart Access Gateway (SAG) instance.
 *
 * @param request DeleteDnatEntryRequest
 * @return DeleteDnatEntryResponse
 */
DeleteDnatEntryResponse Client::deleteDnatEntry(const DeleteDnatEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDnatEntryWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified enterprise code by calling DeleteEnterpriseCode.
 *
 * @description Before you delete an enterprise code, note the following information:
 * - Default enterprise codes cannot be deleted.
 * If the enterprise code that you want to delete is a default enterprise code, change it to a common enterprise code first, and then delete it. For more information, see [UpdateEnterpriseCode](https://help.aliyun.com/document_detail/197700.html).
 * - Enterprise codes that are attached to Smart Access Gateway app instances cannot be deleted.
 * If the enterprise code that you want to delete is attached to Smart Access Gateway app instances, change the enterprise code of the Smart Access Gateway app instances to another enterprise code first, and then delete the current enterprise code. For more information, see [UpdateSmartAGEnterpriseCode](https://help.aliyun.com/document_detail/197701.html).
 *
 * @param request DeleteEnterpriseCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnterpriseCodeResponse
 */
DeleteEnterpriseCodeResponse Client::deleteEnterpriseCodeWithOptions(const DeleteEnterpriseCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnterpriseCode()) {
    query["EnterpriseCode"] = request.getEnterpriseCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEnterpriseCode"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEnterpriseCodeResponse>();
}

/**
 * @summary Deletes a specified enterprise code by calling DeleteEnterpriseCode.
 *
 * @description Before you delete an enterprise code, note the following information:
 * - Default enterprise codes cannot be deleted.
 * If the enterprise code that you want to delete is a default enterprise code, change it to a common enterprise code first, and then delete it. For more information, see [UpdateEnterpriseCode](https://help.aliyun.com/document_detail/197700.html).
 * - Enterprise codes that are attached to Smart Access Gateway app instances cannot be deleted.
 * If the enterprise code that you want to delete is attached to Smart Access Gateway app instances, change the enterprise code of the Smart Access Gateway app instances to another enterprise code first, and then delete the current enterprise code. For more information, see [UpdateSmartAGEnterpriseCode](https://help.aliyun.com/document_detail/197701.html).
 *
 * @param request DeleteEnterpriseCodeRequest
 * @return DeleteEnterpriseCodeResponse
 */
DeleteEnterpriseCodeResponse Client::deleteEnterpriseCode(const DeleteEnterpriseCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEnterpriseCodeWithOptions(request, runtime);
}

/**
 * @summary Deletes a flow log.
 *
 * @param request DeleteFlowLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlowLogResponse
 */
DeleteFlowLogResponse Client::deleteFlowLogWithOptions(const DeleteFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
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
    {"action" , "DeleteFlowLog"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlowLogResponse>();
}

/**
 * @summary Deletes a flow log.
 *
 * @param request DeleteFlowLogRequest
 * @return DeleteFlowLogResponse
 */
DeleteFlowLogResponse Client::deleteFlowLog(const DeleteFlowLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFlowLogWithOptions(request, runtime);
}

/**
 * @summary Deletes a health check instance.
 *
 * @param request DeleteHealthCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHealthCheckResponse
 */
DeleteHealthCheckResponse Client::deleteHealthCheckWithOptions(const DeleteHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHcInstanceId()) {
    query["HcInstanceId"] = request.getHcInstanceId();
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
    {"action" , "DeleteHealthCheck"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHealthCheckResponse>();
}

/**
 * @summary Deletes a health check instance.
 *
 * @param request DeleteHealthCheckRequest
 * @return DeleteHealthCheckResponse
 */
DeleteHealthCheckResponse Client::deleteHealthCheck(const DeleteHealthCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHealthCheckWithOptions(request, runtime);
}

/**
 * @summary Deletes a probe task.
 *
 * @param request DeleteProbeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProbeTaskResponse
 */
DeleteProbeTaskResponse Client::deleteProbeTaskWithOptions(const DeleteProbeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProbeTaskId()) {
    query["ProbeTaskId"] = request.getProbeTaskId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSagId()) {
    query["SagId"] = request.getSagId();
  }

  if (!!request.hasSn()) {
    query["Sn"] = request.getSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProbeTask"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProbeTaskResponse>();
}

/**
 * @summary Deletes a probe task.
 *
 * @param request DeleteProbeTaskRequest
 * @return DeleteProbeTaskResponse
 */
DeleteProbeTaskResponse Client::deleteProbeTask(const DeleteProbeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProbeTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a Quality of Service (QoS) policy.
 *
 * @param request DeleteQosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQosResponse
 */
DeleteQosResponse Client::deleteQosWithOptions(const DeleteQosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQosId()) {
    query["QosId"] = request.getQosId();
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
    {"action" , "DeleteQos"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQosResponse>();
}

/**
 * @summary Deletes a Quality of Service (QoS) policy.
 *
 * @param request DeleteQosRequest
 * @return DeleteQosResponse
 */
DeleteQosResponse Client::deleteQos(const DeleteQosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQosWithOptions(request, runtime);
}

/**
 * @summary Deletes a QoS car (bandwidth throttling rule) by calling the DeleteQosCar operation.
 *
 * @param request DeleteQosCarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQosCarResponse
 */
DeleteQosCarResponse Client::deleteQosCarWithOptions(const DeleteQosCarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQosCarId()) {
    query["QosCarId"] = request.getQosCarId();
  }

  if (!!request.hasQosId()) {
    query["QosId"] = request.getQosId();
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
    {"action" , "DeleteQosCar"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQosCarResponse>();
}

/**
 * @summary Deletes a QoS car (bandwidth throttling rule) by calling the DeleteQosCar operation.
 *
 * @param request DeleteQosCarRequest
 * @return DeleteQosCarResponse
 */
DeleteQosCarResponse Client::deleteQosCar(const DeleteQosCarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQosCarWithOptions(request, runtime);
}

/**
 * @summary Deletes a quintuple rule of a Quality of Service (QoS) policy.
 *
 * @param request DeleteQosPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQosPolicyResponse
 */
DeleteQosPolicyResponse Client::deleteQosPolicyWithOptions(const DeleteQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQosId()) {
    query["QosId"] = request.getQosId();
  }

  if (!!request.hasQosPolicyId()) {
    query["QosPolicyId"] = request.getQosPolicyId();
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
    {"action" , "DeleteQosPolicy"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQosPolicyResponse>();
}

/**
 * @summary Deletes a quintuple rule of a Quality of Service (QoS) policy.
 *
 * @param request DeleteQosPolicyRequest
 * @return DeleteQosPolicyResponse
 */
DeleteQosPolicyResponse Client::deleteQosPolicy(const DeleteQosPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQosPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a route advertisement policy.
 *
 * @param request DeleteRouteDistributionStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRouteDistributionStrategyResponse
 */
DeleteRouteDistributionStrategyResponse Client::deleteRouteDistributionStrategyWithOptions(const DeleteRouteDistributionStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestCidrBlock()) {
    query["DestCidrBlock"] = request.getDestCidrBlock();
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

  if (!!request.hasRouteSource()) {
    query["RouteSource"] = request.getRouteSource();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRouteDistributionStrategy"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRouteDistributionStrategyResponse>();
}

/**
 * @summary Deletes a route advertisement policy.
 *
 * @param request DeleteRouteDistributionStrategyRequest
 * @return DeleteRouteDistributionStrategyResponse
 */
DeleteRouteDistributionStrategyResponse Client::deleteRouteDistributionStrategy(const DeleteRouteDistributionStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRouteDistributionStrategyWithOptions(request, runtime);
}

/**
 * @summary Deletes a subinterface from a leased line port.
 *
 * @param request DeleteSagExpressConnectInterfaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSagExpressConnectInterfaceResponse
 */
DeleteSagExpressConnectInterfaceResponse Client::deleteSagExpressConnectInterfaceWithOptions(const DeleteSagExpressConnectInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPortName()) {
    query["PortName"] = request.getPortName();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  if (!!request.hasVlan()) {
    query["Vlan"] = request.getVlan();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSagExpressConnectInterface"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSagExpressConnectInterfaceResponse>();
}

/**
 * @summary Deletes a subinterface from a leased line port.
 *
 * @param request DeleteSagExpressConnectInterfaceRequest
 * @return DeleteSagExpressConnectInterfaceResponse
 */
DeleteSagExpressConnectInterfaceResponse Client::deleteSagExpressConnectInterface(const DeleteSagExpressConnectInterfaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSagExpressConnectInterfaceWithOptions(request, runtime);
}

/**
 * @summary Deletes a static route.
 *
 * @param request DeleteSagStaticRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSagStaticRouteResponse
 */
DeleteSagStaticRouteResponse Client::deleteSagStaticRouteWithOptions(const DeleteSagStaticRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestinationCidr()) {
    query["DestinationCidr"] = request.getDestinationCidr();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPortName()) {
    query["PortName"] = request.getPortName();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  if (!!request.hasVlan()) {
    query["Vlan"] = request.getVlan();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSagStaticRoute"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSagStaticRouteResponse>();
}

/**
 * @summary Deletes a static route.
 *
 * @param request DeleteSagStaticRouteRequest
 * @return DeleteSagStaticRouteResponse
 */
DeleteSagStaticRouteResponse Client::deleteSagStaticRoute(const DeleteSagStaticRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSagStaticRouteWithOptions(request, runtime);
}

/**
 * @summary Deletes a service address configured on a Smart Access Gateway device.
 *
 * @param request DeleteServiceAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceAddressResponse
 */
DeleteServiceAddressResponse Client::deleteServiceAddressWithOptions(const DeleteServiceAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasAddressType()) {
    query["AddressType"] = request.getAddressType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSagId()) {
    query["SagId"] = request.getSagId();
  }

  if (!!request.hasSn()) {
    query["Sn"] = request.getSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServiceAddress"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceAddressResponse>();
}

/**
 * @summary Deletes a service address configured on a Smart Access Gateway device.
 *
 * @param request DeleteServiceAddressRequest
 * @return DeleteServiceAddressResponse
 */
DeleteServiceAddressResponse Client::deleteServiceAddress(const DeleteServiceAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServiceAddressWithOptions(request, runtime);
}

/**
 * @summary Deletes a Smart Access Gateway (SAG) instance.
 *
 * @description *   The SAG instance that you want to delete is an SAG CPE instance or an SAG vCPE instance.
 * *   The SAG instance that you want to delete is locked due to overdue payments.
 * *   The SAG instance that you want to delete is not associated with a Cloud Connect Network (CCN) instance or a virtual border router (VBR). If the SAG instance is associated with a CCN instance or a VBR, dissociate the SAG instance from the CCN instance or VBR first. For more information, see [Detach a network](https://help.aliyun.com/document_detail/164903.html).
 *
 * @param request DeleteSmartAccessGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSmartAccessGatewayResponse
 */
DeleteSmartAccessGatewayResponse Client::deleteSmartAccessGatewayWithOptions(const DeleteSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSmartAccessGateway"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSmartAccessGatewayResponse>();
}

/**
 * @summary Deletes a Smart Access Gateway (SAG) instance.
 *
 * @description *   The SAG instance that you want to delete is an SAG CPE instance or an SAG vCPE instance.
 * *   The SAG instance that you want to delete is locked due to overdue payments.
 * *   The SAG instance that you want to delete is not associated with a Cloud Connect Network (CCN) instance or a virtual border router (VBR). If the SAG instance is associated with a CCN instance or a VBR, dissociate the SAG instance from the CCN instance or VBR first. For more information, see [Detach a network](https://help.aliyun.com/document_detail/164903.html).
 *
 * @param request DeleteSmartAccessGatewayRequest
 * @return DeleteSmartAccessGatewayResponse
 */
DeleteSmartAccessGatewayResponse Client::deleteSmartAccessGateway(const DeleteSmartAccessGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSmartAccessGatewayWithOptions(request, runtime);
}

/**
 * @summary Deletes a client account from a Smart Access Gateway (SAG) app instance.
 *
 * @param request DeleteSmartAccessGatewayClientUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSmartAccessGatewayClientUserResponse
 */
DeleteSmartAccessGatewayClientUserResponse Client::deleteSmartAccessGatewayClientUserWithOptions(const DeleteSmartAccessGatewayClientUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSmartAccessGatewayClientUser"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSmartAccessGatewayClientUserResponse>();
}

/**
 * @summary Deletes a client account from a Smart Access Gateway (SAG) app instance.
 *
 * @param request DeleteSmartAccessGatewayClientUserRequest
 * @return DeleteSmartAccessGatewayClientUserResponse
 */
DeleteSmartAccessGatewayClientUserResponse Client::deleteSmartAccessGatewayClientUser(const DeleteSmartAccessGatewayClientUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSmartAccessGatewayClientUserWithOptions(request, runtime);
}

/**
 * @summary Deletes a DNS forwarding rule. This operation is applicable only to Smart Access Gateway (SAG) instances that are created using an SCG5000 or SCG5000-5G device with firmware version 3.4.2 or later.
 *
 * @param request DeleteSmartAccessGatewayDnsForwardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSmartAccessGatewayDnsForwardResponse
 */
DeleteSmartAccessGatewayDnsForwardResponse Client::deleteSmartAccessGatewayDnsForwardWithOptions(const DeleteSmartAccessGatewayDnsForwardRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSmartAccessGatewayDnsForward"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSmartAccessGatewayDnsForwardResponse>();
}

/**
 * @summary Deletes a DNS forwarding rule. This operation is applicable only to Smart Access Gateway (SAG) instances that are created using an SCG5000 or SCG5000-5G device with firmware version 3.4.2 or later.
 *
 * @param request DeleteSmartAccessGatewayDnsForwardRequest
 * @return DeleteSmartAccessGatewayDnsForwardResponse
 */
DeleteSmartAccessGatewayDnsForwardResponse Client::deleteSmartAccessGatewayDnsForward(const DeleteSmartAccessGatewayDnsForwardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSmartAccessGatewayDnsForwardWithOptions(request, runtime);
}

/**
 * @summary Removes an SNAT entry from a Smart Access Gateway (SAG) instance.
 *
 * @param request DeleteSnatEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSnatEntryResponse
 */
DeleteSnatEntryResponse Client::deleteSnatEntryWithOptions(const DeleteSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSnatEntry"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSnatEntryResponse>();
}

/**
 * @summary Removes an SNAT entry from a Smart Access Gateway (SAG) instance.
 *
 * @param request DeleteSnatEntryRequest
 * @return DeleteSnatEntryResponse
 */
DeleteSnatEntryResponse Client::deleteSnatEntry(const DeleteSnatEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSnatEntryWithOptions(request, runtime);
}

/**
 * @summary Calls DescribeACLAttribute to query the information about a specified access control list (ACL) instance.
 *
 * @param request DescribeACLAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeACLAttributeResponse
 */
DescribeACLAttributeResponse Client::describeACLAttributeWithOptions(const DescribeACLAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
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
    {"action" , "DescribeACLAttribute"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeACLAttributeResponse>();
}

/**
 * @summary Calls DescribeACLAttribute to query the information about a specified access control list (ACL) instance.
 *
 * @param request DescribeACLAttributeRequest
 * @return DescribeACLAttributeResponse
 */
DescribeACLAttributeResponse Client::describeACLAttribute(const DescribeACLAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeACLAttributeWithOptions(request, runtime);
}

/**
 * @summary Calls DescribeACLs to query the information about access control instances in a specified region.
 *
 * @param request DescribeACLsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeACLsResponse
 */
DescribeACLsResponse Client::describeACLsWithOptions(const DescribeACLsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclIds()) {
    query["AclIds"] = request.getAclIds();
  }

  if (!!request.hasAclType()) {
    query["AclType"] = request.getAclType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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
    {"action" , "DescribeACLs"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeACLsResponse>();
}

/**
 * @summary Calls DescribeACLs to query the information about access control instances in a specified region.
 *
 * @param request DescribeACLsRequest
 * @return DescribeACLsResponse
 */
DescribeACLsResponse Client::describeACLs(const DescribeACLsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeACLsWithOptions(request, runtime);
}

/**
 * @summary Queries the Smart Access Gateway (SAG) instances in a region that can be associated with a Cloud Connect Network (CCN) instance.
 *
 * @param request DescribeBindableSmartAccessGatewaysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBindableSmartAccessGatewaysResponse
 */
DescribeBindableSmartAccessGatewaysResponse Client::describeBindableSmartAccessGatewaysWithOptions(const DescribeBindableSmartAccessGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCcnId()) {
    query["CcnId"] = request.getCcnId();
  }

  if (!!request.hasCrossAccount()) {
    query["CrossAccount"] = request.getCrossAccount();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBindableSmartAccessGateways"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBindableSmartAccessGatewaysResponse>();
}

/**
 * @summary Queries the Smart Access Gateway (SAG) instances in a region that can be associated with a Cloud Connect Network (CCN) instance.
 *
 * @param request DescribeBindableSmartAccessGatewaysRequest
 * @return DescribeBindableSmartAccessGatewaysResponse
 */
DescribeBindableSmartAccessGatewaysResponse Client::describeBindableSmartAccessGateways(const DescribeBindableSmartAccessGatewaysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBindableSmartAccessGatewaysWithOptions(request, runtime);
}

/**
 * @summary Queries the DNS settings of a Smart Access Gateway (SAG) instance associated with SAG app.
 *
 * @param request DescribeClientUserDNSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClientUserDNSResponse
 */
DescribeClientUserDNSResponse Client::describeClientUserDNSWithOptions(const DescribeClientUserDNSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClientUserDNS"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClientUserDNSResponse>();
}

/**
 * @summary Queries the DNS settings of a Smart Access Gateway (SAG) instance associated with SAG app.
 *
 * @param request DescribeClientUserDNSRequest
 * @return DescribeClientUserDNSResponse
 */
DescribeClientUserDNSResponse Client::describeClientUserDNS(const DescribeClientUserDNSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClientUserDNSWithOptions(request, runtime);
}

/**
 * @summary Retrieves Cloud Connect Network (CCN) instances in a specified region.
 *
 * @param request DescribeCloudConnectNetworksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudConnectNetworksResponse
 */
DescribeCloudConnectNetworksResponse Client::describeCloudConnectNetworksWithOptions(const DescribeCloudConnectNetworksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCcnId()) {
    query["CcnId"] = request.getCcnId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudConnectNetworks"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudConnectNetworksResponse>();
}

/**
 * @summary Retrieves Cloud Connect Network (CCN) instances in a specified region.
 *
 * @param request DescribeCloudConnectNetworksRequest
 * @return DescribeCloudConnectNetworksResponse
 */
DescribeCloudConnectNetworksResponse Client::describeCloudConnectNetworks(const DescribeCloudConnectNetworksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudConnectNetworksWithOptions(request, runtime);
}

/**
 * @summary Queries the automatic upgrade policy of a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeDeviceAutoUpgradePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeviceAutoUpgradePolicyResponse
 */
DescribeDeviceAutoUpgradePolicyResponse Client::describeDeviceAutoUpgradePolicyWithOptions(const DescribeDeviceAutoUpgradePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasVersionType()) {
    query["VersionType"] = request.getVersionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDeviceAutoUpgradePolicy"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeviceAutoUpgradePolicyResponse>();
}

/**
 * @summary Queries the automatic upgrade policy of a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeDeviceAutoUpgradePolicyRequest
 * @return DescribeDeviceAutoUpgradePolicyResponse
 */
DescribeDeviceAutoUpgradePolicyResponse Client::describeDeviceAutoUpgradePolicy(const DescribeDeviceAutoUpgradePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeviceAutoUpgradePolicyWithOptions(request, runtime);
}

/**
 * @summary Queries DNAT entries that are associated with a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeDnatEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnatEntriesResponse
 */
DescribeDnatEntriesResponse Client::describeDnatEntriesWithOptions(const DescribeDnatEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSagId()) {
    query["SagId"] = request.getSagId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnatEntries"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnatEntriesResponse>();
}

/**
 * @summary Queries DNAT entries that are associated with a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeDnatEntriesRequest
 * @return DescribeDnatEntriesResponse
 */
DescribeDnatEntriesResponse Client::describeDnatEntries(const DescribeDnatEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnatEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries the Smart Access Gateway instances associated with a flow log by calling DescribeFlowLogSags.
 *
 * @param request DescribeFlowLogSagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFlowLogSagsResponse
 */
DescribeFlowLogSagsResponse Client::describeFlowLogSagsWithOptions(const DescribeFlowLogSagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
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
    {"action" , "DescribeFlowLogSags"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFlowLogSagsResponse>();
}

/**
 * @summary Queries the Smart Access Gateway instances associated with a flow log by calling DescribeFlowLogSags.
 *
 * @param request DescribeFlowLogSagsRequest
 * @return DescribeFlowLogSagsResponse
 */
DescribeFlowLogSagsResponse Client::describeFlowLogSags(const DescribeFlowLogSagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFlowLogSagsWithOptions(request, runtime);
}

/**
 * @summary Queries flow logs in a specified region.
 *
 * @param request DescribeFlowLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFlowLogsResponse
 */
DescribeFlowLogsResponse Client::describeFlowLogsWithOptions(const DescribeFlowLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
  }

  if (!!request.hasFlowLogName()) {
    query["FlowLogName"] = request.getFlowLogName();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.getOutputType();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFlowLogs"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFlowLogsResponse>();
}

/**
 * @summary Queries flow logs in a specified region.
 *
 * @param request DescribeFlowLogsRequest
 * @return DescribeFlowLogsResponse
 */
DescribeFlowLogsResponse Client::describeFlowLogs(const DescribeFlowLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFlowLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the authorization information about a Cloud Connect Network (CCN) instance.
 *
 * @param request DescribeGrantRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGrantRulesResponse
 */
DescribeGrantRulesResponse Client::describeGrantRulesWithOptions(const DescribeGrantRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssociatedCcnId()) {
    query["AssociatedCcnId"] = request.getAssociatedCcnId();
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
    {"action" , "DescribeGrantRules"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGrantRulesResponse>();
}

/**
 * @summary Queries the authorization information about a Cloud Connect Network (CCN) instance.
 *
 * @param request DescribeGrantRulesRequest
 * @return DescribeGrantRulesResponse
 */
DescribeGrantRulesResponse Client::describeGrantRules(const DescribeGrantRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGrantRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the permission information about a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeGrantSagRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGrantSagRulesResponse
 */
DescribeGrantSagRulesResponse Client::describeGrantSagRulesWithOptions(const DescribeGrantSagRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGrantSagRules"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGrantSagRulesResponse>();
}

/**
 * @summary Queries the permission information about a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeGrantSagRulesRequest
 * @return DescribeGrantSagRulesResponse
 */
DescribeGrantSagRulesResponse Client::describeGrantSagRules(const DescribeGrantSagRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGrantSagRulesWithOptions(request, runtime);
}

/**
 * @summary Queries authorization information about Smart Access Gateway (SAG) instances and cross-account virtual border routers (VBRs).
 *
 * @param request DescribeGrantSagVbrRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGrantSagVbrRulesResponse
 */
DescribeGrantSagVbrRulesResponse Client::describeGrantSagVbrRulesWithOptions(const DescribeGrantSagVbrRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasVbrInstanceId()) {
    query["VbrInstanceId"] = request.getVbrInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGrantSagVbrRules"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGrantSagVbrRulesResponse>();
}

/**
 * @summary Queries authorization information about Smart Access Gateway (SAG) instances and cross-account virtual border routers (VBRs).
 *
 * @param request DescribeGrantSagVbrRulesRequest
 * @return DescribeGrantSagVbrRulesResponse
 */
DescribeGrantSagVbrRulesResponse Client::describeGrantSagVbrRules(const DescribeGrantSagVbrRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGrantSagVbrRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about a health check instance.
 *
 * @param request DescribeHealthCheckAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHealthCheckAttributeResponse
 */
DescribeHealthCheckAttributeResponse Client::describeHealthCheckAttributeWithOptions(const DescribeHealthCheckAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHcInstanceId()) {
    query["HcInstanceId"] = request.getHcInstanceId();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHealthCheckAttribute"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHealthCheckAttributeResponse>();
}

/**
 * @summary Queries the detailed information about a health check instance.
 *
 * @param request DescribeHealthCheckAttributeRequest
 * @return DescribeHealthCheckAttributeResponse
 */
DescribeHealthCheckAttributeResponse Client::describeHealthCheckAttribute(const DescribeHealthCheckAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHealthCheckAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries health checks that are associated with a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeHealthChecksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHealthChecksResponse
 */
DescribeHealthChecksResponse Client::describeHealthChecksWithOptions(const DescribeHealthChecksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHcInstanceId()) {
    query["HcInstanceId"] = request.getHcInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHealthChecks"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHealthChecksResponse>();
}

/**
 * @summary Queries health checks that are associated with a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeHealthChecksRequest
 * @return DescribeHealthChecksResponse
 */
DescribeHealthChecksResponse Client::describeHealthChecks(const DescribeHealthChecksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHealthChecksWithOptions(request, runtime);
}

/**
 * @summary Queries traffic throttling rules of a quality of service (QoS) policy.
 *
 * @param request DescribeQosCarsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQosCarsResponse
 */
DescribeQosCarsResponse Client::describeQosCarsWithOptions(const DescribeQosCarsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
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

  if (!!request.hasQosCarId()) {
    query["QosCarId"] = request.getQosCarId();
  }

  if (!!request.hasQosId()) {
    query["QosId"] = request.getQosId();
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
    {"action" , "DescribeQosCars"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQosCarsResponse>();
}

/**
 * @summary Queries traffic throttling rules of a quality of service (QoS) policy.
 *
 * @param request DescribeQosCarsRequest
 * @return DescribeQosCarsResponse
 */
DescribeQosCarsResponse Client::describeQosCars(const DescribeQosCarsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQosCarsWithOptions(request, runtime);
}

/**
 * @summary You can call the DescribeQosPolicies operation to query the quintuple rule configurations for a Quality of Service (QoS) policy.
 *
 * @param request DescribeQosPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQosPoliciesResponse
 */
DescribeQosPoliciesResponse Client::describeQosPoliciesWithOptions(const DescribeQosPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
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

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasQosId()) {
    query["QosId"] = request.getQosId();
  }

  if (!!request.hasQosPolicyId()) {
    query["QosPolicyId"] = request.getQosPolicyId();
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
    {"action" , "DescribeQosPolicies"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQosPoliciesResponse>();
}

/**
 * @summary You can call the DescribeQosPolicies operation to query the quintuple rule configurations for a Quality of Service (QoS) policy.
 *
 * @param request DescribeQosPoliciesRequest
 * @return DescribeQosPoliciesResponse
 */
DescribeQosPoliciesResponse Client::describeQosPolicies(const DescribeQosPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQosPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries quality of service (QoS) policies in a specified region.
 *
 * @param request DescribeQosesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQosesResponse
 */
DescribeQosesResponse Client::describeQosesWithOptions(const DescribeQosesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasQosIds()) {
    query["QosIds"] = request.getQosIds();
  }

  if (!!request.hasQosName()) {
    query["QosName"] = request.getQosName();
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
    {"action" , "DescribeQoses"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQosesResponse>();
}

/**
 * @summary Queries quality of service (QoS) policies in a specified region.
 *
 * @param request DescribeQosesRequest
 * @return DescribeQosesResponse
 */
DescribeQosesResponse Client::describeQoses(const DescribeQosesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQosesWithOptions(request, runtime);
}

/**
 * @summary Queries available regions.
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2018-03-13"},
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
 * @summary Queries available regions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries route advertisement policies.
 *
 * @param request DescribeRouteDistributionStrategiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRouteDistributionStrategiesResponse
 */
DescribeRouteDistributionStrategiesResponse Client::describeRouteDistributionStrategiesWithOptions(const DescribeRouteDistributionStrategiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRouteDistributionStrategies"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRouteDistributionStrategiesResponse>();
}

/**
 * @summary Queries route advertisement policies.
 *
 * @param request DescribeRouteDistributionStrategiesRequest
 * @return DescribeRouteDistributionStrategiesResponse
 */
DescribeRouteDistributionStrategiesResponse Client::describeRouteDistributionStrategies(const DescribeRouteDistributionStrategiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRouteDistributionStrategiesWithOptions(request, runtime);
}

/**
 * @summary Queries information about a Smart Access Gateway device by calling the DescribeSAGDeviceInfo operation.
 *
 * @param request DescribeSAGDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSAGDeviceInfoResponse
 */
DescribeSAGDeviceInfoResponse Client::describeSAGDeviceInfoWithOptions(const DescribeSAGDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSAGDeviceInfo"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSAGDeviceInfoResponse>();
}

/**
 * @summary Queries information about a Smart Access Gateway device by calling the DescribeSAGDeviceInfo operation.
 *
 * @param request DescribeSAGDeviceInfoRequest
 * @return DescribeSAGDeviceInfoResponse
 */
DescribeSAGDeviceInfoResponse Client::describeSAGDeviceInfo(const DescribeSAGDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSAGDeviceInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the DNS settings that are currently in effect on a Smart Access Gateway device.
 *
 * @param request DescribeSagCurrentDnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagCurrentDnsResponse
 */
DescribeSagCurrentDnsResponse Client::describeSagCurrentDnsWithOptions(const DescribeSagCurrentDnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagCurrentDns"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagCurrentDnsResponse>();
}

/**
 * @summary Queries the DNS settings that are currently in effect on a Smart Access Gateway device.
 *
 * @param request DescribeSagCurrentDnsRequest
 * @return DescribeSagCurrentDnsResponse
 */
DescribeSagCurrentDnsResponse Client::describeSagCurrentDns(const DescribeSagCurrentDnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagCurrentDnsWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 Smart Access Gateway instances with the highest packet loss rate in a specified region.
 *
 * @param request DescribeSagDropTopNRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagDropTopNResponse
 */
DescribeSagDropTopNResponse Client::describeSagDropTopNWithOptions(const DescribeSagDropTopNRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSize()) {
    query["Size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagDropTopN"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagDropTopNResponse>();
}

/**
 * @summary Queries the top 10 Smart Access Gateway instances with the highest packet loss rate in a specified region.
 *
 * @param request DescribeSagDropTopNRequest
 * @return DescribeSagDropTopNResponse
 */
DescribeSagDropTopNResponse Client::describeSagDropTopN(const DescribeSagDropTopNRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagDropTopNWithOptions(request, runtime);
}

/**
 * @summary Queries the sub-interfaces of a dedicated connection port by calling DescribeSagExpressConnectInterfaceList.
 *
 * @param request DescribeSagExpressConnectInterfaceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagExpressConnectInterfaceListResponse
 */
DescribeSagExpressConnectInterfaceListResponse Client::describeSagExpressConnectInterfaceListWithOptions(const DescribeSagExpressConnectInterfaceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPortName()) {
    query["PortName"] = request.getPortName();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagExpressConnectInterfaceList"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagExpressConnectInterfaceListResponse>();
}

/**
 * @summary Queries the sub-interfaces of a dedicated connection port by calling DescribeSagExpressConnectInterfaceList.
 *
 * @param request DescribeSagExpressConnectInterfaceListRequest
 * @return DescribeSagExpressConnectInterfaceListResponse
 */
DescribeSagExpressConnectInterfaceListResponse Client::describeSagExpressConnectInterfaceList(const DescribeSagExpressConnectInterfaceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagExpressConnectInterfaceListWithOptions(request, runtime);
}

/**
 * @summary Queries the global routing protocol.
 *
 * @param request DescribeSagGlobalRouteProtocolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagGlobalRouteProtocolResponse
 */
DescribeSagGlobalRouteProtocolResponse Client::describeSagGlobalRouteProtocolWithOptions(const DescribeSagGlobalRouteProtocolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagGlobalRouteProtocol"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagGlobalRouteProtocolResponse>();
}

/**
 * @summary Queries the global routing protocol.
 *
 * @param request DescribeSagGlobalRouteProtocolRequest
 * @return DescribeSagGlobalRouteProtocolResponse
 */
DescribeSagGlobalRouteProtocolResponse Client::describeSagGlobalRouteProtocol(const DescribeSagGlobalRouteProtocolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagGlobalRouteProtocolWithOptions(request, runtime);
}

/**
 * @summary Queries the high-availability configuration of a Smart Access Gateway instance by calling DescribeSagHa.
 *
 * @param request DescribeSagHaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagHaResponse
 */
DescribeSagHaResponse Client::describeSagHaWithOptions(const DescribeSagHaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagHa"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagHaResponse>();
}

/**
 * @summary Queries the high-availability configuration of a Smart Access Gateway instance by calling DescribeSagHa.
 *
 * @param request DescribeSagHaRequest
 * @return DescribeSagHaResponse
 */
DescribeSagHaResponse Client::describeSagHa(const DescribeSagHaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagHaWithOptions(request, runtime);
}

/**
 * @summary Queries the LAN port settings of a Smart Access Gateway (SAG) device.
 *
 * @param request DescribeSagLanListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagLanListResponse
 */
DescribeSagLanListResponse Client::describeSagLanListWithOptions(const DescribeSagLanListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagLanList"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagLanListResponse>();
}

/**
 * @summary Queries the LAN port settings of a Smart Access Gateway (SAG) device.
 *
 * @param request DescribeSagLanListRequest
 * @return DescribeSagLanListResponse
 */
DescribeSagLanListResponse Client::describeSagLanList(const DescribeSagLanListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagLanListWithOptions(request, runtime);
}

/**
 * @summary Queries the management port settings of a Smart Access Gateway (SAG) device.
 *
 * @param request DescribeSagManagementPortRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagManagementPortResponse
 */
DescribeSagManagementPortResponse Client::describeSagManagementPortWithOptions(const DescribeSagManagementPortRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagManagementPort"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagManagementPortResponse>();
}

/**
 * @summary Queries the management port settings of a Smart Access Gateway (SAG) device.
 *
 * @param request DescribeSagManagementPortRequest
 * @return DescribeSagManagementPortResponse
 */
DescribeSagManagementPortResponse Client::describeSagManagementPort(const DescribeSagManagementPortRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagManagementPortWithOptions(request, runtime);
}

/**
 * @summary Queries online client statistics for Smart Access Gateway (SAG) app instances.
 *
 * @param request DescribeSagOnlineClientStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagOnlineClientStatisticsResponse
 */
DescribeSagOnlineClientStatisticsResponse Client::describeSagOnlineClientStatisticsWithOptions(const DescribeSagOnlineClientStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGIds()) {
    query["SmartAGIds"] = request.getSmartAGIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagOnlineClientStatistics"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagOnlineClientStatisticsResponse>();
}

/**
 * @summary Queries online client statistics for Smart Access Gateway (SAG) app instances.
 *
 * @param request DescribeSagOnlineClientStatisticsRequest
 * @return DescribeSagOnlineClientStatisticsResponse
 */
DescribeSagOnlineClientStatisticsResponse Client::describeSagOnlineClientStatistics(const DescribeSagOnlineClientStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagOnlineClientStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a physical port.
 *
 * @param request DescribeSagPortListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagPortListResponse
 */
DescribeSagPortListResponse Client::describeSagPortListWithOptions(const DescribeSagPortListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagPortList"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagPortListResponse>();
}

/**
 * @summary Queries the information about a physical port.
 *
 * @param request DescribeSagPortListRequest
 * @return DescribeSagPortListResponse
 */
DescribeSagPortListResponse Client::describeSagPortList(const DescribeSagPortListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagPortListWithOptions(request, runtime);
}

/**
 * @summary Invokes DescribeSagPortRouteProtocolList to obtain the list of ports on which routing protocols are enabled.
 *
 * @param request DescribeSagPortRouteProtocolListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagPortRouteProtocolListResponse
 */
DescribeSagPortRouteProtocolListResponse Client::describeSagPortRouteProtocolListWithOptions(const DescribeSagPortRouteProtocolListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagPortRouteProtocolList"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagPortRouteProtocolListResponse>();
}

/**
 * @summary Invokes DescribeSagPortRouteProtocolList to obtain the list of ports on which routing protocols are enabled.
 *
 * @param request DescribeSagPortRouteProtocolListRequest
 * @return DescribeSagPortRouteProtocolListResponse
 */
DescribeSagPortRouteProtocolListResponse Client::describeSagPortRouteProtocolList(const DescribeSagPortRouteProtocolListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagPortRouteProtocolListWithOptions(request, runtime);
}

/**
 * @summary Queries remote logon information about a Smart Access Gateway (SAG) device.
 *
 * @param request DescribeSagRemoteAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagRemoteAccessResponse
 */
DescribeSagRemoteAccessResponse Client::describeSagRemoteAccessWithOptions(const DescribeSagRemoteAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagRemoteAccess"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagRemoteAccessResponse>();
}

/**
 * @summary Queries remote logon information about a Smart Access Gateway (SAG) device.
 *
 * @param request DescribeSagRemoteAccessRequest
 * @return DescribeSagRemoteAccessResponse
 */
DescribeSagRemoteAccessResponse Client::describeSagRemoteAccess(const DescribeSagRemoteAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagRemoteAccessWithOptions(request, runtime);
}

/**
 * @summary Queries the routes of a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSagRouteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagRouteListResponse
 */
DescribeSagRouteListResponse Client::describeSagRouteListWithOptions(const DescribeSagRouteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagRouteList"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagRouteListResponse>();
}

/**
 * @summary Queries the routes of a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSagRouteListRequest
 * @return DescribeSagRouteListResponse
 */
DescribeSagRouteListResponse Client::describeSagRouteList(const DescribeSagRouteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagRouteListWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of Border Gateway Protocol (BGP) dynamic routing.
 *
 * @param request DescribeSagRouteProtocolBgpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagRouteProtocolBgpResponse
 */
DescribeSagRouteProtocolBgpResponse Client::describeSagRouteProtocolBgpWithOptions(const DescribeSagRouteProtocolBgpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagRouteProtocolBgp"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagRouteProtocolBgpResponse>();
}

/**
 * @summary Queries the configurations of Border Gateway Protocol (BGP) dynamic routing.
 *
 * @param request DescribeSagRouteProtocolBgpRequest
 * @return DescribeSagRouteProtocolBgpResponse
 */
DescribeSagRouteProtocolBgpResponse Client::describeSagRouteProtocolBgp(const DescribeSagRouteProtocolBgpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagRouteProtocolBgpWithOptions(request, runtime);
}

/**
 * @summary Queries the OSPF settings of a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSagRouteProtocolOspfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagRouteProtocolOspfResponse
 */
DescribeSagRouteProtocolOspfResponse Client::describeSagRouteProtocolOspfWithOptions(const DescribeSagRouteProtocolOspfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagRouteProtocolOspf"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagRouteProtocolOspfResponse>();
}

/**
 * @summary Queries the OSPF settings of a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSagRouteProtocolOspfRequest
 * @return DescribeSagRouteProtocolOspfResponse
 */
DescribeSagRouteProtocolOspfResponse Client::describeSagRouteProtocolOspf(const DescribeSagRouteProtocolOspfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagRouteProtocolOspfWithOptions(request, runtime);
}

/**
 * @summary Queries the static routes of a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSagStaticRouteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagStaticRouteListResponse
 */
DescribeSagStaticRouteListResponse Client::describeSagStaticRouteListWithOptions(const DescribeSagStaticRouteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagStaticRouteList"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagStaticRouteListResponse>();
}

/**
 * @summary Queries the static routes of a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSagStaticRouteListRequest
 * @return DescribeSagStaticRouteListResponse
 */
DescribeSagStaticRouteListResponse Client::describeSagStaticRouteList(const DescribeSagStaticRouteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagStaticRouteListWithOptions(request, runtime);
}

/**
 * @summary Queries the top 10 Smart Access Gateway (SAG) instances that have the highest data transfer rates in a specific region.
 *
 * @param request DescribeSagTrafficTopNRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagTrafficTopNResponse
 */
DescribeSagTrafficTopNResponse Client::describeSagTrafficTopNWithOptions(const DescribeSagTrafficTopNRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSize()) {
    query["Size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagTrafficTopN"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagTrafficTopNResponse>();
}

/**
 * @summary Queries the top 10 Smart Access Gateway (SAG) instances that have the highest data transfer rates in a specific region.
 *
 * @param request DescribeSagTrafficTopNRequest
 * @return DescribeSagTrafficTopNResponse
 */
DescribeSagTrafficTopNResponse Client::describeSagTrafficTopN(const DescribeSagTrafficTopNRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagTrafficTopNWithOptions(request, runtime);
}

/**
 * @summary Queries the DNS servers used by a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSagUserDnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagUserDnsResponse
 */
DescribeSagUserDnsResponse Client::describeSagUserDnsWithOptions(const DescribeSagUserDnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagUserDns"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagUserDnsResponse>();
}

/**
 * @summary Queries the DNS servers used by a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSagUserDnsRequest
 * @return DescribeSagUserDnsResponse
 */
DescribeSagUserDnsResponse Client::describeSagUserDns(const DescribeSagUserDnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagUserDnsWithOptions(request, runtime);
}

/**
 * @summary Queries whether a specified virtual border router (VBR) is associated with a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSagVbrRelationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagVbrRelationsResponse
 */
DescribeSagVbrRelationsResponse Client::describeSagVbrRelationsWithOptions(const DescribeSagVbrRelationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasVbrInstanceIds()) {
    query["VbrInstanceIds"] = request.getVbrInstanceIds();
  }

  if (!!request.hasVbrRegionId()) {
    query["VbrRegionId"] = request.getVbrRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagVbrRelations"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagVbrRelationsResponse>();
}

/**
 * @summary Queries whether a specified virtual border router (VBR) is associated with a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSagVbrRelationsRequest
 * @return DescribeSagVbrRelationsResponse
 */
DescribeSagVbrRelationsResponse Client::describeSagVbrRelations(const DescribeSagVbrRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagVbrRelationsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the 4G subscriber identity module (SIM) card used by the WAN port of a Smart Access Gateway (SAG) device.
 *
 * @param request DescribeSagWan4GRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagWan4GResponse
 */
DescribeSagWan4GResponse Client::describeSagWan4GWithOptions(const DescribeSagWan4GRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagWan4G"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagWan4GResponse>();
}

/**
 * @summary Queries the information about the 4G subscriber identity module (SIM) card used by the WAN port of a Smart Access Gateway (SAG) device.
 *
 * @param request DescribeSagWan4GRequest
 * @return DescribeSagWan4GResponse
 */
DescribeSagWan4GResponse Client::describeSagWan4G(const DescribeSagWan4GRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagWan4GWithOptions(request, runtime);
}

/**
 * @summary Queries the WAN port settings of a Smart Access Gateway (SAG) device.
 *
 * @param request DescribeSagWanListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagWanListResponse
 */
DescribeSagWanListResponse Client::describeSagWanListWithOptions(const DescribeSagWanListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagWanList"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagWanListResponse>();
}

/**
 * @summary Queries the WAN port settings of a Smart Access Gateway (SAG) device.
 *
 * @param request DescribeSagWanListRequest
 * @return DescribeSagWanListResponse
 */
DescribeSagWanListResponse Client::describeSagWanList(const DescribeSagWanListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagWanListWithOptions(request, runtime);
}

/**
 * @summary Queries the SNAT settings of the WAN port of a Smart Access Gateway (SAG) device.
 *
 * @param request DescribeSagWanSnatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagWanSnatResponse
 */
DescribeSagWanSnatResponse Client::describeSagWanSnatWithOptions(const DescribeSagWanSnatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagWanSnat"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagWanSnatResponse>();
}

/**
 * @summary Queries the SNAT settings of the WAN port of a Smart Access Gateway (SAG) device.
 *
 * @param request DescribeSagWanSnatRequest
 * @return DescribeSagWanSnatResponse
 */
DescribeSagWanSnatResponse Client::describeSagWanSnat(const DescribeSagWanSnatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagWanSnatWithOptions(request, runtime);
}

/**
 * @summary Queries the Wi-Fi settings of a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSagWifiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSagWifiResponse
 */
DescribeSagWifiResponse Client::describeSagWifiWithOptions(const DescribeSagWifiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSagWifi"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSagWifiResponse>();
}

/**
 * @summary Queries the Wi-Fi settings of a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSagWifiRequest
 * @return DescribeSagWifiResponse
 */
DescribeSagWifiResponse Client::describeSagWifi(const DescribeSagWifiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSagWifiWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeSmartAccessGatewayAttribute operation to query the information about a specified Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSmartAccessGatewayAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSmartAccessGatewayAttributeResponse
 */
DescribeSmartAccessGatewayAttributeResponse Client::describeSmartAccessGatewayAttributeWithOptions(const DescribeSmartAccessGatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSmartAccessGatewayAttribute"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSmartAccessGatewayAttributeResponse>();
}

/**
 * @summary Calls the DescribeSmartAccessGatewayAttribute operation to query the information about a specified Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSmartAccessGatewayAttributeRequest
 * @return DescribeSmartAccessGatewayAttributeResponse
 */
DescribeSmartAccessGatewayAttributeResponse Client::describeSmartAccessGatewayAttribute(const DescribeSmartAccessGatewayAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSmartAccessGatewayAttributeWithOptions(request, runtime);
}

/**
 * @summary Invokes DescribeSmartAccessGatewayClientUsers to query the client account information of a Smart Access Gateway app instance.
 *
 * @param request DescribeSmartAccessGatewayClientUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSmartAccessGatewayClientUsersResponse
 */
DescribeSmartAccessGatewayClientUsersResponse Client::describeSmartAccessGatewayClientUsersWithOptions(const DescribeSmartAccessGatewayClientUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasUserMail()) {
    query["UserMail"] = request.getUserMail();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSmartAccessGatewayClientUsers"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSmartAccessGatewayClientUsersResponse>();
}

/**
 * @summary Invokes DescribeSmartAccessGatewayClientUsers to query the client account information of a Smart Access Gateway app instance.
 *
 * @param request DescribeSmartAccessGatewayClientUsersRequest
 * @return DescribeSmartAccessGatewayClientUsersResponse
 */
DescribeSmartAccessGatewayClientUsersResponse Client::describeSmartAccessGatewayClientUsers(const DescribeSmartAccessGatewayClientUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSmartAccessGatewayClientUsersWithOptions(request, runtime);
}

/**
 * @summary Queries the high availability (HA) settings of a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSmartAccessGatewayHaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSmartAccessGatewayHaResponse
 */
DescribeSmartAccessGatewayHaResponse Client::describeSmartAccessGatewayHaWithOptions(const DescribeSmartAccessGatewayHaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSmartAccessGatewayHa"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSmartAccessGatewayHaResponse>();
}

/**
 * @summary Queries the high availability (HA) settings of a Smart Access Gateway (SAG) instance.
 *
 * @param request DescribeSmartAccessGatewayHaRequest
 * @return DescribeSmartAccessGatewayHaResponse
 */
DescribeSmartAccessGatewayHaResponse Client::describeSmartAccessGatewayHa(const DescribeSmartAccessGatewayHaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSmartAccessGatewayHaWithOptions(request, runtime);
}

/**
 * @summary Queries the version of a Smart Access Gateway (SAG) device.
 *
 * @param request DescribeSmartAccessGatewayVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSmartAccessGatewayVersionsResponse
 */
DescribeSmartAccessGatewayVersionsResponse Client::describeSmartAccessGatewayVersionsWithOptions(const DescribeSmartAccessGatewayVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  if (!!request.hasVersionType()) {
    query["VersionType"] = request.getVersionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSmartAccessGatewayVersions"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSmartAccessGatewayVersionsResponse>();
}

/**
 * @summary Queries the version of a Smart Access Gateway (SAG) device.
 *
 * @param request DescribeSmartAccessGatewayVersionsRequest
 * @return DescribeSmartAccessGatewayVersionsResponse
 */
DescribeSmartAccessGatewayVersionsResponse Client::describeSmartAccessGatewayVersions(const DescribeSmartAccessGatewayVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSmartAccessGatewayVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries Smart Access Gateway (SAG) instances.
 *
 * @param request DescribeSmartAccessGatewaysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSmartAccessGatewaysResponse
 */
DescribeSmartAccessGatewaysResponse Client::describeSmartAccessGatewaysWithOptions(const DescribeSmartAccessGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclIds()) {
    query["AclIds"] = request.getAclIds();
  }

  if (!!request.hasAssociatedCcnId()) {
    query["AssociatedCcnId"] = request.getAssociatedCcnId();
  }

  if (!!request.hasAssociatedCcnName()) {
    query["AssociatedCcnName"] = request.getAssociatedCcnName();
  }

  if (!!request.hasBusinessState()) {
    query["BusinessState"] = request.getBusinessState();
  }

  if (!!request.hasCanAssociateQos()) {
    query["CanAssociateQos"] = request.getCanAssociateQos();
  }

  if (!!request.hasHardwareType()) {
    query["HardwareType"] = request.getHardwareType();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGIds()) {
    query["SmartAGIds"] = request.getSmartAGIds();
  }

  if (!!request.hasSoftwareVersion()) {
    query["SoftwareVersion"] = request.getSoftwareVersion();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUnboundAclIds()) {
    query["UnboundAclIds"] = request.getUnboundAclIds();
  }

  if (!!request.hasVersionComparator()) {
    query["VersionComparator"] = request.getVersionComparator();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSmartAccessGateways"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSmartAccessGatewaysResponse>();
}

/**
 * @summary Queries Smart Access Gateway (SAG) instances.
 *
 * @param request DescribeSmartAccessGatewaysRequest
 * @return DescribeSmartAccessGatewaysResponse
 */
DescribeSmartAccessGatewaysResponse Client::describeSmartAccessGateways(const DescribeSmartAccessGatewaysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSmartAccessGatewaysWithOptions(request, runtime);
}

/**
 * @summary Queries SNAT entries bound to a Smart Access Gateway instance by calling DescribeSnatEntries.
 *
 * @param request DescribeSnatEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSnatEntriesResponse
 */
DescribeSnatEntriesResponse Client::describeSnatEntriesWithOptions(const DescribeSnatEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSnatEntries"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSnatEntriesResponse>();
}

/**
 * @summary Queries SNAT entries bound to a Smart Access Gateway instance by calling DescribeSnatEntries.
 *
 * @param request DescribeSnatEntriesRequest
 * @return DescribeSnatEntriesResponse
 */
DescribeSnatEntriesResponse Client::describeSnatEntries(const DescribeSnatEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSnatEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries Smart Access Gateway (SAG) instances that are not associated with a flow log in a specific region.
 *
 * @param request DescribeUnbindFlowLogSagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUnbindFlowLogSagsResponse
 */
DescribeUnbindFlowLogSagsResponse Client::describeUnbindFlowLogSagsWithOptions(const DescribeUnbindFlowLogSagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "DescribeUnbindFlowLogSags"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUnbindFlowLogSagsResponse>();
}

/**
 * @summary Queries Smart Access Gateway (SAG) instances that are not associated with a flow log in a specific region.
 *
 * @param request DescribeUnbindFlowLogSagsRequest
 * @return DescribeUnbindFlowLogSagsResponse
 */
DescribeUnbindFlowLogSagsResponse Client::describeUnbindFlowLogSags(const DescribeUnbindFlowLogSagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUnbindFlowLogSagsWithOptions(request, runtime);
}

/**
 * @summary Queries the amount of data transfer generated by each client account of a Smart Access Gateway (SAG) app instance.
 *
 * @param request DescribeUserFlowStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserFlowStatisticsResponse
 */
DescribeUserFlowStatisticsResponse Client::describeUserFlowStatisticsWithOptions(const DescribeUserFlowStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasStatisticsDate()) {
    query["StatisticsDate"] = request.getStatisticsDate();
  }

  if (!!request.hasUserNames()) {
    query["UserNames"] = request.getUserNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserFlowStatistics"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserFlowStatisticsResponse>();
}

/**
 * @summary Queries the amount of data transfer generated by each client account of a Smart Access Gateway (SAG) app instance.
 *
 * @param request DescribeUserFlowStatisticsRequest
 * @return DescribeUserFlowStatisticsResponse
 */
DescribeUserFlowStatisticsResponse Client::describeUserFlowStatistics(const DescribeUserFlowStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserFlowStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries a specified user\\"s online connection statistics from a Smart Access Gateway (SAG) app instance.
 *
 * @param request DescribeUserOnlineClientStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserOnlineClientStatisticsResponse
 */
DescribeUserOnlineClientStatisticsResponse Client::describeUserOnlineClientStatisticsWithOptions(const DescribeUserOnlineClientStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasUserNames()) {
    query["UserNames"] = request.getUserNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserOnlineClientStatistics"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserOnlineClientStatisticsResponse>();
}

/**
 * @summary Queries a specified user\\"s online connection statistics from a Smart Access Gateway (SAG) app instance.
 *
 * @param request DescribeUserOnlineClientStatisticsRequest
 * @return DescribeUserOnlineClientStatisticsResponse
 */
DescribeUserOnlineClientStatisticsResponse Client::describeUserOnlineClientStatistics(const DescribeUserOnlineClientStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserOnlineClientStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the connection information about a client based on the ID of the Smart Access Gateway (SAG) APP instance and username of the client account.
 *
 * @param request DescribeUserOnlineClientsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserOnlineClientsResponse
 */
DescribeUserOnlineClientsResponse Client::describeUserOnlineClientsWithOptions(const DescribeUserOnlineClientsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserOnlineClients"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserOnlineClientsResponse>();
}

/**
 * @summary Queries the connection information about a client based on the ID of the Smart Access Gateway (SAG) APP instance and username of the client account.
 *
 * @param request DescribeUserOnlineClientsRequest
 * @return DescribeUserOnlineClientsResponse
 */
DescribeUserOnlineClientsResponse Client::describeUserOnlineClients(const DescribeUserOnlineClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserOnlineClientsWithOptions(request, runtime);
}

/**
 * @summary Unbinds a Cloud Connect Network (CCN) from a Cloud Enterprise Network (CEN) instance.
 *
 * @description Unbinds a Cloud Connect Network (CCN) from a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DetachCcnInstanceFromCenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachCcnInstanceFromCenResponse
 */
DetachCcnInstanceFromCenResponse Client::detachCcnInstanceFromCenWithOptions(const DetachCcnInstanceFromCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCcnId()) {
    query["CcnId"] = request.getCcnId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachCcnInstanceFromCen"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachCcnInstanceFromCenResponse>();
}

/**
 * @summary Unbinds a Cloud Connect Network (CCN) from a Cloud Enterprise Network (CEN) instance.
 *
 * @description Unbinds a Cloud Connect Network (CCN) from a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DetachCcnInstanceFromCenRequest
 * @return DetachCcnInstanceFromCenResponse
 */
DetachCcnInstanceFromCenResponse Client::detachCcnInstanceFromCen(const DetachCcnInstanceFromCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachCcnInstanceFromCenWithOptions(request, runtime);
}

/**
 * @summary Enables diagnostics for Smart Access Gateway (SAG) devices
 *
 * @param request DiagnoseSmartAccessGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DiagnoseSmartAccessGatewayResponse
 */
DiagnoseSmartAccessGatewayResponse Client::diagnoseSmartAccessGatewayWithOptions(const DiagnoseSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DiagnoseSmartAccessGateway"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DiagnoseSmartAccessGatewayResponse>();
}

/**
 * @summary Enables diagnostics for Smart Access Gateway (SAG) devices
 *
 * @param request DiagnoseSmartAccessGatewayRequest
 * @return DiagnoseSmartAccessGatewayResponse
 */
DiagnoseSmartAccessGatewayResponse Client::diagnoseSmartAccessGateway(const DiagnoseSmartAccessGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return diagnoseSmartAccessGatewayWithOptions(request, runtime);
}

/**
 * @summary Disables the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
 *
 * @param request DisableSmartAGDpiMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSmartAGDpiMonitorResponse
 */
DisableSmartAGDpiMonitorResponse Client::disableSmartAGDpiMonitorWithOptions(const DisableSmartAGDpiMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableSmartAGDpiMonitor"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableSmartAGDpiMonitorResponse>();
}

/**
 * @summary Disables the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
 *
 * @param request DisableSmartAGDpiMonitorRequest
 * @return DisableSmartAGDpiMonitorResponse
 */
DisableSmartAGDpiMonitorResponse Client::disableSmartAGDpiMonitor(const DisableSmartAGDpiMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSmartAGDpiMonitorWithOptions(request, runtime);
}

/**
 * @summary Disables a user of a Smart Access Gateway instance.
 *
 * @param request DisableSmartAccessGatewayUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSmartAccessGatewayUserResponse
 */
DisableSmartAccessGatewayUserResponse Client::disableSmartAccessGatewayUserWithOptions(const DisableSmartAccessGatewayUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableSmartAccessGatewayUser"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableSmartAccessGatewayUserResponse>();
}

/**
 * @summary Disables a user of a Smart Access Gateway instance.
 *
 * @param request DisableSmartAccessGatewayUserRequest
 * @return DisableSmartAccessGatewayUserResponse
 */
DisableSmartAccessGatewayUserResponse Client::disableSmartAccessGatewayUser(const DisableSmartAccessGatewayUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSmartAccessGatewayUserWithOptions(request, runtime);
}

/**
 * @summary Disassociates an access control list (ACL) from a Smart Access Gateway (SAG) instance.
 *
 * @param request DisassociateACLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisassociateACLResponse
 */
DisassociateACLResponse Client::disassociateACLWithOptions(const DisassociateACLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisassociateACL"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisassociateACLResponse>();
}

/**
 * @summary Disassociates an access control list (ACL) from a Smart Access Gateway (SAG) instance.
 *
 * @param request DisassociateACLRequest
 * @return DisassociateACLResponse
 */
DisassociateACLResponse Client::disassociateACL(const DisassociateACLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociateACLWithOptions(request, runtime);
}

/**
 * @summary Disassociates a Smart Access Gateway (SAG) instance from a flow log.
 *
 * @param request DisassociateFlowLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisassociateFlowLogResponse
 */
DisassociateFlowLogResponse Client::disassociateFlowLogWithOptions(const DisassociateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisassociateFlowLog"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisassociateFlowLogResponse>();
}

/**
 * @summary Disassociates a Smart Access Gateway (SAG) instance from a flow log.
 *
 * @param request DisassociateFlowLogRequest
 * @return DisassociateFlowLogResponse
 */
DisassociateFlowLogResponse Client::disassociateFlowLog(const DisassociateFlowLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociateFlowLogWithOptions(request, runtime);
}

/**
 * @summary Disassociates a Smart Access Gateway (SAG) instance from a Quality of Service (QoS) policy.
 *
 * @param request DisassociateQosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisassociateQosResponse
 */
DisassociateQosResponse Client::disassociateQosWithOptions(const DisassociateQosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQosId()) {
    query["QosId"] = request.getQosId();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisassociateQos"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisassociateQosResponse>();
}

/**
 * @summary Disassociates a Smart Access Gateway (SAG) instance from a Quality of Service (QoS) policy.
 *
 * @param request DisassociateQosRequest
 * @return DisassociateQosResponse
 */
DisassociateQosResponse Client::disassociateQos(const DisassociateQosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociateQosWithOptions(request, runtime);
}

/**
 * @summary Queries the diagnosis report of a Smart Access Gateway (SAG) device by calling the DiscribeSmartAccessGatewayDiagnosisReport operation.
 *
 * @param request DiscribeSmartAccessGatewayDiagnosisReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DiscribeSmartAccessGatewayDiagnosisReportResponse
 */
DiscribeSmartAccessGatewayDiagnosisReportResponse Client::discribeSmartAccessGatewayDiagnosisReportWithOptions(const DiscribeSmartAccessGatewayDiagnosisReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DiscribeSmartAccessGatewayDiagnosisReport"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DiscribeSmartAccessGatewayDiagnosisReportResponse>();
}

/**
 * @summary Queries the diagnosis report of a Smart Access Gateway (SAG) device by calling the DiscribeSmartAccessGatewayDiagnosisReport operation.
 *
 * @param request DiscribeSmartAccessGatewayDiagnosisReportRequest
 * @return DiscribeSmartAccessGatewayDiagnosisReportResponse
 */
DiscribeSmartAccessGatewayDiagnosisReportResponse Client::discribeSmartAccessGatewayDiagnosisReport(const DiscribeSmartAccessGatewayDiagnosisReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return discribeSmartAccessGatewayDiagnosisReportWithOptions(request, runtime);
}

/**
 * @summary Disassociates a Smart Access Gateway (SAG) instance from a bandwidth plan for application acceleration.
 *
 * @description When you call **DissociateSmartAGFromApplicationBandwidthPackage**, you can set the **SmartAGId** parameter to specify an SAG instance, or set the **SmartAGIdList** to specify multiple SAG instances.
 *
 * @param request DissociateSmartAGFromApplicationBandwidthPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateSmartAGFromApplicationBandwidthPackageResponse
 */
DissociateSmartAGFromApplicationBandwidthPackageResponse Client::dissociateSmartAGFromApplicationBandwidthPackageWithOptions(const DissociateSmartAGFromApplicationBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationBandwidthPackageId()) {
    query["ApplicationBandwidthPackageId"] = request.getApplicationBandwidthPackageId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGIdList()) {
    query["SmartAGIdList"] = request.getSmartAGIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DissociateSmartAGFromApplicationBandwidthPackage"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DissociateSmartAGFromApplicationBandwidthPackageResponse>();
}

/**
 * @summary Disassociates a Smart Access Gateway (SAG) instance from a bandwidth plan for application acceleration.
 *
 * @description When you call **DissociateSmartAGFromApplicationBandwidthPackage**, you can set the **SmartAGId** parameter to specify an SAG instance, or set the **SmartAGIdList** to specify multiple SAG instances.
 *
 * @param request DissociateSmartAGFromApplicationBandwidthPackageRequest
 * @return DissociateSmartAGFromApplicationBandwidthPackageResponse
 */
DissociateSmartAGFromApplicationBandwidthPackageResponse Client::dissociateSmartAGFromApplicationBandwidthPackage(const DissociateSmartAGFromApplicationBandwidthPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dissociateSmartAGFromApplicationBandwidthPackageWithOptions(request, runtime);
}

/**
 * @summary Downgrades the bandwidth of a Smart Access Gateway (SAG) instance.
 *
 * @param request DowngradeSmartAccessGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DowngradeSmartAccessGatewayResponse
 */
DowngradeSmartAccessGatewayResponse Client::downgradeSmartAccessGatewayWithOptions(const DowngradeSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasBandWidthSpec()) {
    query["BandWidthSpec"] = request.getBandWidthSpec();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DowngradeSmartAccessGateway"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DowngradeSmartAccessGatewayResponse>();
}

/**
 * @summary Downgrades the bandwidth of a Smart Access Gateway (SAG) instance.
 *
 * @param request DowngradeSmartAccessGatewayRequest
 * @return DowngradeSmartAccessGatewayResponse
 */
DowngradeSmartAccessGatewayResponse Client::downgradeSmartAccessGateway(const DowngradeSmartAccessGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downgradeSmartAccessGatewayWithOptions(request, runtime);
}

/**
 * @summary Decreases the quota of client accounts that can be connected to a Smart Access Gateway (SAG) app instance.
 *
 * @param request DowngradeSmartAccessGatewaySoftwareRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DowngradeSmartAccessGatewaySoftwareResponse
 */
DowngradeSmartAccessGatewaySoftwareResponse Client::downgradeSmartAccessGatewaySoftwareWithOptions(const DowngradeSmartAccessGatewaySoftwareRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasDataPlan()) {
    query["DataPlan"] = request.getDataPlan();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasUserCount()) {
    query["UserCount"] = request.getUserCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DowngradeSmartAccessGatewaySoftware"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DowngradeSmartAccessGatewaySoftwareResponse>();
}

/**
 * @summary Decreases the quota of client accounts that can be connected to a Smart Access Gateway (SAG) app instance.
 *
 * @param request DowngradeSmartAccessGatewaySoftwareRequest
 * @return DowngradeSmartAccessGatewaySoftwareResponse
 */
DowngradeSmartAccessGatewaySoftwareResponse Client::downgradeSmartAccessGatewaySoftware(const DowngradeSmartAccessGatewaySoftwareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downgradeSmartAccessGatewaySoftwareWithOptions(request, runtime);
}

/**
 * @summary Enables monitoring based on the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
 *
 * @description *   The DPI feature is enabled for the SAG instance. For more information, see [UpdateSmartAGDpiAttribute](https://help.aliyun.com/document_detail/196146.html).
 * *   Log Service is activated. For more information, see [Quick Start](https://help.aliyun.com/document_detail/54604.html).
 *
 * @param request EnableSmartAGDpiMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSmartAGDpiMonitorResponse
 */
EnableSmartAGDpiMonitorResponse Client::enableSmartAGDpiMonitorWithOptions(const EnableSmartAGDpiMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
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

  if (!!request.hasSlsLogStore()) {
    query["SlsLogStore"] = request.getSlsLogStore();
  }

  if (!!request.hasSlsProjectName()) {
    query["SlsProjectName"] = request.getSlsProjectName();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableSmartAGDpiMonitor"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableSmartAGDpiMonitorResponse>();
}

/**
 * @summary Enables monitoring based on the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
 *
 * @description *   The DPI feature is enabled for the SAG instance. For more information, see [UpdateSmartAGDpiAttribute](https://help.aliyun.com/document_detail/196146.html).
 * *   Log Service is activated. For more information, see [Quick Start](https://help.aliyun.com/document_detail/54604.html).
 *
 * @param request EnableSmartAGDpiMonitorRequest
 * @return EnableSmartAGDpiMonitorResponse
 */
EnableSmartAGDpiMonitorResponse Client::enableSmartAGDpiMonitor(const EnableSmartAGDpiMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSmartAGDpiMonitorWithOptions(request, runtime);
}

/**
 * @summary Activates a client account of a Smart Access Gateway (SAG) app instance.
 *
 * @param request EnableSmartAccessGatewayUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSmartAccessGatewayUserResponse
 */
EnableSmartAccessGatewayUserResponse Client::enableSmartAccessGatewayUserWithOptions(const EnableSmartAccessGatewayUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableSmartAccessGatewayUser"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableSmartAccessGatewayUserResponse>();
}

/**
 * @summary Activates a client account of a Smart Access Gateway (SAG) app instance.
 *
 * @param request EnableSmartAccessGatewayUserRequest
 * @return EnableSmartAccessGatewayUserResponse
 */
EnableSmartAccessGatewayUserResponse Client::enableSmartAccessGatewayUser(const EnableSmartAccessGatewayUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSmartAccessGatewayUserWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration errors of the deep packet inspection (DPI) feature in an access control list (ACL).
 *
 * @description *   An application-aware ACL is created. For more information, see [AddACLRule](https://help.aliyun.com/document_detail/114012.html).
 * *   The application-aware ACL is applied to a Smart Access Gateway (SAG) instance. For more information, see [AssociateACL](https://help.aliyun.com/document_detail/114009.html).
 *
 * @param request GetAclAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAclAttributeResponse
 */
GetAclAttributeResponse Client::getAclAttributeWithOptions(const GetAclAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAclAttribute"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAclAttributeResponse>();
}

/**
 * @summary Queries the configuration errors of the deep packet inspection (DPI) feature in an access control list (ACL).
 *
 * @description *   An application-aware ACL is created. For more information, see [AddACLRule](https://help.aliyun.com/document_detail/114012.html).
 * *   The application-aware ACL is applied to a Smart Access Gateway (SAG) instance. For more information, see [AssociateACL](https://help.aliyun.com/document_detail/114009.html).
 *
 * @param request GetAclAttributeRequest
 * @return GetAclAttributeResponse
 */
GetAclAttributeResponse Client::getAclAttribute(const GetAclAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAclAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the advanced monitoring feature for a specified Smart Access Gateway instance.
 *
 * @param request GetAdvancedMonitorStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAdvancedMonitorStateResponse
 */
GetAdvancedMonitorStateResponse Client::getAdvancedMonitorStateWithOptions(const GetAdvancedMonitorStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSagId()) {
    query["SagId"] = request.getSagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAdvancedMonitorState"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAdvancedMonitorStateResponse>();
}

/**
 * @summary Queries the status of the advanced monitoring feature for a specified Smart Access Gateway instance.
 *
 * @param request GetAdvancedMonitorStateRequest
 * @return GetAdvancedMonitorStateResponse
 */
GetAdvancedMonitorStateResponse Client::getAdvancedMonitorState(const GetAdvancedMonitorStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAdvancedMonitorStateWithOptions(request, runtime);
}

/**
 * @summary Queries the number of Cloud Connect Network (CCN) instances that can be created within the current account in a region.
 *
 * @param request GetCloudConnectNetworkUseLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCloudConnectNetworkUseLimitResponse
 */
GetCloudConnectNetworkUseLimitResponse Client::getCloudConnectNetworkUseLimitWithOptions(const GetCloudConnectNetworkUseLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "GetCloudConnectNetworkUseLimit"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCloudConnectNetworkUseLimitResponse>();
}

/**
 * @summary Queries the number of Cloud Connect Network (CCN) instances that can be created within the current account in a region.
 *
 * @param request GetCloudConnectNetworkUseLimitRequest
 * @return GetCloudConnectNetworkUseLimitResponse
 */
GetCloudConnectNetworkUseLimitResponse Client::getCloudConnectNetworkUseLimit(const GetCloudConnectNetworkUseLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCloudConnectNetworkUseLimitWithOptions(request, runtime);
}

/**
 * @summary Queries the attributes of a quality of service (QoS) policy.
 *
 * @param request GetQosAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQosAttributeResponse
 */
GetQosAttributeResponse Client::getQosAttributeWithOptions(const GetQosAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQosId()) {
    query["QosId"] = request.getQosId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQosAttribute"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQosAttributeResponse>();
}

/**
 * @summary Queries the attributes of a quality of service (QoS) policy.
 *
 * @param request GetQosAttributeRequest
 * @return GetQosAttributeResponse
 */
GetQosAttributeResponse Client::getQosAttribute(const GetQosAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQosAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the settings of the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
 *
 * @param request GetSmartAGDpiAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSmartAGDpiAttributeResponse
 */
GetSmartAGDpiAttributeResponse Client::getSmartAGDpiAttributeWithOptions(const GetSmartAGDpiAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSmartAGDpiAttribute"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSmartAGDpiAttributeResponse>();
}

/**
 * @summary Queries the settings of the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
 *
 * @param request GetSmartAGDpiAttributeRequest
 * @return GetSmartAGDpiAttributeResponse
 */
GetSmartAGDpiAttributeResponse Client::getSmartAGDpiAttribute(const GetSmartAGDpiAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmartAGDpiAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the number of Smart Access Gateway (SAG) instances that you can purchase.
 *
 * @param request GetSmartAccessGatewayUseLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSmartAccessGatewayUseLimitResponse
 */
GetSmartAccessGatewayUseLimitResponse Client::getSmartAccessGatewayUseLimitWithOptions(const GetSmartAccessGatewayUseLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "GetSmartAccessGatewayUseLimit"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSmartAccessGatewayUseLimitResponse>();
}

/**
 * @summary Queries the number of Smart Access Gateway (SAG) instances that you can purchase.
 *
 * @param request GetSmartAccessGatewayUseLimitRequest
 * @return GetSmartAccessGatewayUseLimitResponse
 */
GetSmartAccessGatewayUseLimitResponse Client::getSmartAccessGatewayUseLimit(const GetSmartAccessGatewayUseLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmartAccessGatewayUseLimitWithOptions(request, runtime);
}

/**
 * @summary Authorizes a Cloud Enterprise Network (CEN) instance to communicate with a Cloud Connect Network (CCN) instance that belongs to another Alibaba Cloud account.
 *
 * @param request GrantInstanceToCbnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantInstanceToCbnResponse
 */
GrantInstanceToCbnResponse Client::grantInstanceToCbnWithOptions(const GrantInstanceToCbnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCcnInstanceId()) {
    query["CcnInstanceId"] = request.getCcnInstanceId();
  }

  if (!!request.hasCenInstanceId()) {
    query["CenInstanceId"] = request.getCenInstanceId();
  }

  if (!!request.hasCenUid()) {
    query["CenUid"] = request.getCenUid();
  }

  if (!!request.hasGrantTrafficService()) {
    query["GrantTrafficService"] = request.getGrantTrafficService();
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
    {"action" , "GrantInstanceToCbn"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantInstanceToCbnResponse>();
}

/**
 * @summary Authorizes a Cloud Enterprise Network (CEN) instance to communicate with a Cloud Connect Network (CCN) instance that belongs to another Alibaba Cloud account.
 *
 * @param request GrantInstanceToCbnRequest
 * @return GrantInstanceToCbnResponse
 */
GrantInstanceToCbnResponse Client::grantInstanceToCbn(const GrantInstanceToCbnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantInstanceToCbnWithOptions(request, runtime);
}

/**
 * @summary Authorizes a Smart Access Gateway (SAG) instance to communicate with a Cloud Connect Network (CCN) instance that belongs to another Alibaba Cloud account.
 *
 * @param request GrantSagInstanceToCcnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantSagInstanceToCcnResponse
 */
GrantSagInstanceToCcnResponse Client::grantSagInstanceToCcnWithOptions(const GrantSagInstanceToCcnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCcnInstanceId()) {
    query["CcnInstanceId"] = request.getCcnInstanceId();
  }

  if (!!request.hasCcnUid()) {
    query["CcnUid"] = request.getCcnUid();
  }

  if (!!request.hasGrantTrafficService()) {
    query["GrantTrafficService"] = request.getGrantTrafficService();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GrantSagInstanceToCcn"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantSagInstanceToCcnResponse>();
}

/**
 * @summary Authorizes a Smart Access Gateway (SAG) instance to communicate with a Cloud Connect Network (CCN) instance that belongs to another Alibaba Cloud account.
 *
 * @param request GrantSagInstanceToCcnRequest
 * @return GrantSagInstanceToCcnResponse
 */
GrantSagInstanceToCcnResponse Client::grantSagInstanceToCcn(const GrantSagInstanceToCcnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantSagInstanceToCcnWithOptions(request, runtime);
}

/**
 * @summary Acquires permissions from a virtual border router (VBR) under another account.
 *
 * @param request GrantSagInstanceToVbrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantSagInstanceToVbrResponse
 */
GrantSagInstanceToVbrResponse Client::grantSagInstanceToVbrWithOptions(const GrantSagInstanceToVbrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasVbrInstanceId()) {
    query["VbrInstanceId"] = request.getVbrInstanceId();
  }

  if (!!request.hasVbrRegionId()) {
    query["VbrRegionId"] = request.getVbrRegionId();
  }

  if (!!request.hasVbrUid()) {
    query["VbrUid"] = request.getVbrUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GrantSagInstanceToVbr"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantSagInstanceToVbrResponse>();
}

/**
 * @summary Acquires permissions from a virtual border router (VBR) under another account.
 *
 * @param request GrantSagInstanceToVbrRequest
 * @return GrantSagInstanceToVbrResponse
 */
GrantSagInstanceToVbrResponse Client::grantSagInstanceToVbr(const GrantSagInstanceToVbrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantSagInstanceToVbrWithOptions(request, runtime);
}

/**
 * @summary Closes a connection based on the Smart Access Gateway (SAG) app instance ID and username.
 *
 * @param request KickOutClientsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KickOutClientsResponse
 */
KickOutClientsResponse Client::kickOutClientsWithOptions(const KickOutClientsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "KickOutClients"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KickOutClientsResponse>();
}

/**
 * @summary Closes a connection based on the Smart Access Gateway (SAG) app instance ID and username.
 *
 * @param request KickOutClientsRequest
 * @return KickOutClientsResponse
 */
KickOutClientsResponse Client::kickOutClients(const KickOutClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return kickOutClientsWithOptions(request, runtime);
}

/**
 * @summary Queries network qualities of endpoints for Smart Access Gateway (SAG) instances.
 *
 * @param request ListAccessPointNetworkQualitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccessPointNetworkQualitiesResponse
 */
ListAccessPointNetworkQualitiesResponse Client::listAccessPointNetworkQualitiesWithOptions(const ListAccessPointNetworkQualitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccessPointNetworkQualities"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccessPointNetworkQualitiesResponse>();
}

/**
 * @summary Queries network qualities of endpoints for Smart Access Gateway (SAG) instances.
 *
 * @param request ListAccessPointNetworkQualitiesRequest
 * @return ListAccessPointNetworkQualitiesResponse
 */
ListAccessPointNetworkQualitiesResponse Client::listAccessPointNetworkQualities(const ListAccessPointNetworkQualitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccessPointNetworkQualitiesWithOptions(request, runtime);
}

/**
 * @summary Queries access points in a region.
 *
 * @description An access point connects Smart Access Gateway (SAG) instances to Cloud Connect Network (CCN). Some regions may contain more than one access point. After an SAG instance is associated with a CCN instance, the system selects the nearest access point to establish connections to Alibaba Cloud. This topic describes how to query access points in a specific region. For more information about the areas that support CCN, see [Introduction to CCN](https://help.aliyun.com/document_detail/93667.html).
 *
 * @param request ListAccessPointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccessPointsResponse
 */
ListAccessPointsResponse Client::listAccessPointsWithOptions(const ListAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccessPoints"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccessPointsResponse>();
}

/**
 * @summary Queries access points in a region.
 *
 * @description An access point connects Smart Access Gateway (SAG) instances to Cloud Connect Network (CCN). Some regions may contain more than one access point. After an SAG instance is associated with a CCN instance, the system selects the nearest access point to establish connections to Alibaba Cloud. This topic describes how to query access points in a specific region. For more information about the areas that support CCN, see [Introduction to CCN](https://help.aliyun.com/document_detail/93667.html).
 *
 * @param request ListAccessPointsRequest
 * @return ListAccessPointsResponse
 */
ListAccessPointsResponse Client::listAccessPoints(const ListAccessPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccessPointsWithOptions(request, runtime);
}

/**
 * @summary Lists the configured service addresses for a specified Smart Access Gateway device.
 *
 * @param request ListAvailableServiceAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAvailableServiceAddressResponse
 */
ListAvailableServiceAddressResponse Client::listAvailableServiceAddressWithOptions(const ListAvailableServiceAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressType()) {
    query["AddressType"] = request.getAddressType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSagId()) {
    query["SagId"] = request.getSagId();
  }

  if (!!request.hasSn()) {
    query["Sn"] = request.getSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAvailableServiceAddress"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAvailableServiceAddressResponse>();
}

/**
 * @summary Lists the configured service addresses for a specified Smart Access Gateway device.
 *
 * @param request ListAvailableServiceAddressRequest
 * @return ListAvailableServiceAddressResponse
 */
ListAvailableServiceAddressResponse Client::listAvailableServiceAddress(const ListAvailableServiceAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAvailableServiceAddressWithOptions(request, runtime);
}

/**
 * @summary Queries for deep packet inspection (DPI) configuration errors.
 *
 * @description If you configure an application-based Resource Access Management instance or a Quality of Service (QoS) policy instance and associate it with a Smart Access Gateway instance, you can call this operation to check whether the access control rules or QoS quintuple rules are successfully applied to the target Smart Access Gateway instance. If a configuration fails to apply, this operation returns information about the error.
 *
 * @param request ListDpiConfigErrorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDpiConfigErrorResponse
 */
ListDpiConfigErrorResponse Client::listDpiConfigErrorWithOptions(const ListDpiConfigErrorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDpiConfigType()) {
    query["DpiConfigType"] = request.getDpiConfigType();
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

  if (!!request.hasRuleInstanceId()) {
    query["RuleInstanceId"] = request.getRuleInstanceId();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDpiConfigError"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDpiConfigErrorResponse>();
}

/**
 * @summary Queries for deep packet inspection (DPI) configuration errors.
 *
 * @description If you configure an application-based Resource Access Management instance or a Quality of Service (QoS) policy instance and associate it with a Smart Access Gateway instance, you can call this operation to check whether the access control rules or QoS quintuple rules are successfully applied to the target Smart Access Gateway instance. If a configuration fails to apply, this operation returns information about the error.
 *
 * @param request ListDpiConfigErrorRequest
 * @return ListDpiConfigErrorResponse
 */
ListDpiConfigErrorResponse Client::listDpiConfigError(const ListDpiConfigErrorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDpiConfigErrorWithOptions(request, runtime);
}

/**
 * @summary Lists the application groups that Smart Access Gateway supports in a specified region.
 *
 * @param request ListDpiGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDpiGroupsResponse
 */
ListDpiGroupsResponse Client::listDpiGroupsWithOptions(const ListDpiGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDpiGroupIds()) {
    query["DpiGroupIds"] = request.getDpiGroupIds();
  }

  if (!!request.hasDpiGroupNames()) {
    query["DpiGroupNames"] = request.getDpiGroupNames();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
    {"action" , "ListDpiGroups"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDpiGroupsResponse>();
}

/**
 * @summary Lists the application groups that Smart Access Gateway supports in a specified region.
 *
 * @param request ListDpiGroupsRequest
 * @return ListDpiGroupsResponse
 */
ListDpiGroupsResponse Client::listDpiGroups(const ListDpiGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDpiGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries all applications, specific applications, or specific application groups supported by Smart Access Gateway (SAG) in a specified region.
 *
 * @description This operation lets you:
 * - Query all applications supported by SAG in a specified region.
 * - Query a specific application by its ID in a specified region.
 * - Query a specific application by its name in a specified region.
 * - Query all applications in a specific application group by the group ID in a specified region.
 * If this is the first time you call this operation, we recommend that you query all applications supported by SAG in a region. This helps you obtain the information required for subsequent queries of specific applications.
 *
 * @param request ListDpiSignaturesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDpiSignaturesResponse
 */
ListDpiSignaturesResponse Client::listDpiSignaturesWithOptions(const ListDpiSignaturesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDpiGroupId()) {
    query["DpiGroupId"] = request.getDpiGroupId();
  }

  if (!!request.hasDpiSignatureIds()) {
    query["DpiSignatureIds"] = request.getDpiSignatureIds();
  }

  if (!!request.hasDpiSignatureNames()) {
    query["DpiSignatureNames"] = request.getDpiSignatureNames();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
    {"action" , "ListDpiSignatures"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDpiSignaturesResponse>();
}

/**
 * @summary Queries all applications, specific applications, or specific application groups supported by Smart Access Gateway (SAG) in a specified region.
 *
 * @description This operation lets you:
 * - Query all applications supported by SAG in a specified region.
 * - Query a specific application by its ID in a specified region.
 * - Query a specific application by its name in a specified region.
 * - Query all applications in a specific application group by the group ID in a specified region.
 * If this is the first time you call this operation, we recommend that you query all applications supported by SAG in a region. This helps you obtain the information required for subsequent queries of specific applications.
 *
 * @param request ListDpiSignaturesRequest
 * @return ListDpiSignaturesResponse
 */
ListDpiSignaturesResponse Client::listDpiSignatures(const ListDpiSignaturesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDpiSignaturesWithOptions(request, runtime);
}

/**
 * @summary Queries enterprise codes.
 *
 * @param request ListEnterpriseCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnterpriseCodeResponse
 */
ListEnterpriseCodeResponse Client::listEnterpriseCodeWithOptions(const ListEnterpriseCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseCode()) {
    query["EnterpriseCode"] = request.getEnterpriseCode();
  }

  if (!!request.hasIsDefault()) {
    query["IsDefault"] = request.getIsDefault();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnterpriseCode"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnterpriseCodeResponse>();
}

/**
 * @summary Queries enterprise codes.
 *
 * @param request ListEnterpriseCodeRequest
 * @return ListEnterpriseCodeResponse
 */
ListEnterpriseCodeResponse Client::listEnterpriseCode(const ListEnterpriseCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnterpriseCodeWithOptions(request, runtime);
}

/**
 * @summary Queries a probe task.
 *
 * @param request ListProbeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProbeTaskResponse
 */
ListProbeTaskResponse Client::listProbeTaskWithOptions(const ListProbeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProbeTaskId()) {
    query["ProbeTaskId"] = request.getProbeTaskId();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSagId()) {
    query["SagId"] = request.getSagId();
  }

  if (!!request.hasSagName()) {
    query["SagName"] = request.getSagName();
  }

  if (!!request.hasSn()) {
    query["Sn"] = request.getSn();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProbeTask"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProbeTaskResponse>();
}

/**
 * @summary Queries a probe task.
 *
 * @param request ListProbeTaskRequest
 * @return ListProbeTaskResponse
 */
ListProbeTaskResponse Client::listProbeTask(const ListProbeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProbeTaskWithOptions(request, runtime);
}

/**
 * @summary Queries features that are not supported by a specified Smart Access Gateway (SAG) device.
 *
 * @param request ListSmartAGApiUnsupportedFeatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSmartAGApiUnsupportedFeatureResponse
 */
ListSmartAGApiUnsupportedFeatureResponse Client::listSmartAGApiUnsupportedFeatureWithOptions(const ListSmartAGApiUnsupportedFeatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpenApiName()) {
    query["OpenApiName"] = request.getOpenApiName();
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

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSmartAGApiUnsupportedFeature"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSmartAGApiUnsupportedFeatureResponse>();
}

/**
 * @summary Queries features that are not supported by a specified Smart Access Gateway (SAG) device.
 *
 * @param request ListSmartAGApiUnsupportedFeatureRequest
 * @return ListSmartAGApiUnsupportedFeatureResponse
 */
ListSmartAGApiUnsupportedFeatureResponse Client::listSmartAGApiUnsupportedFeature(const ListSmartAGApiUnsupportedFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSmartAGApiUnsupportedFeatureWithOptions(request, runtime);
}

/**
 * @summary Queries Smart Access Gateway (SAG) instances associated with specific access points in a region.
 *
 * @param request ListSmartAGByAccessPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSmartAGByAccessPointResponse
 */
ListSmartAGByAccessPointResponse Client::listSmartAGByAccessPointWithOptions(const ListSmartAGByAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessPointId()) {
    query["AccessPointId"] = request.getAccessPointId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSmartAGStatus()) {
    query["SmartAGStatus"] = request.getSmartAGStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSmartAGByAccessPoint"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSmartAGByAccessPointResponse>();
}

/**
 * @summary Queries Smart Access Gateway (SAG) instances associated with specific access points in a region.
 *
 * @param request ListSmartAGByAccessPointRequest
 * @return ListSmartAGByAccessPointResponse
 */
ListSmartAGByAccessPointResponse Client::listSmartAGByAccessPoint(const ListSmartAGByAccessPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSmartAGByAccessPointWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of an access control list (ACL).
 *
 * @param request ModifyACLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyACLResponse
 */
ModifyACLResponse Client::modifyACLWithOptions(const ModifyACLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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
    {"action" , "ModifyACL"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyACLResponse>();
}

/**
 * @summary Modifies the name of an access control list (ACL).
 *
 * @param request ModifyACLRequest
 * @return ModifyACLResponse
 */
ModifyACLResponse Client::modifyACL(const ModifyACLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyACLWithOptions(request, runtime);
}

/**
 * @summary The ModifyACLRule operation modifies an access control rule.
 *
 * @param request ModifyACLRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyACLRuleResponse
 */
ModifyACLRuleResponse Client::modifyACLRuleWithOptions(const ModifyACLRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasAcrId()) {
    query["AcrId"] = request.getAcrId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestCidr()) {
    query["DestCidr"] = request.getDestCidr();
  }

  if (!!request.hasDestPortRange()) {
    query["DestPortRange"] = request.getDestPortRange();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDpiGroupIds()) {
    query["DpiGroupIds"] = request.getDpiGroupIds();
  }

  if (!!request.hasDpiSignatureIds()) {
    query["DpiSignatureIds"] = request.getDpiSignatureIds();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolicy()) {
    query["Policy"] = request.getPolicy();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
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

  if (!!request.hasSourceCidr()) {
    query["SourceCidr"] = request.getSourceCidr();
  }

  if (!!request.hasSourcePortRange()) {
    query["SourcePortRange"] = request.getSourcePortRange();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyACLRule"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyACLRuleResponse>();
}

/**
 * @summary The ModifyACLRule operation modifies an access control rule.
 *
 * @param request ModifyACLRuleRequest
 * @return ModifyACLRuleResponse
 */
ModifyACLRuleResponse Client::modifyACLRule(const ModifyACLRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyACLRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the DNS configuration of a Smart Access Gateway (SAG) application instance.
 *
 * @param request ModifyClientUserDNSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClientUserDNSResponse
 */
ModifyClientUserDNSResponse Client::modifyClientUserDNSWithOptions(const ModifyClientUserDNSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppDNS()) {
    query["AppDNS"] = request.getAppDNS();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRecoveredDNS()) {
    query["RecoveredDNS"] = request.getRecoveredDNS();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyClientUserDNS"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClientUserDNSResponse>();
}

/**
 * @summary Modifies the DNS configuration of a Smart Access Gateway (SAG) application instance.
 *
 * @param request ModifyClientUserDNSRequest
 * @return ModifyClientUserDNSResponse
 */
ModifyClientUserDNSResponse Client::modifyClientUserDNS(const ModifyClientUserDNSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyClientUserDNSWithOptions(request, runtime);
}

/**
 * @summary Updates the configurations of a Cloud Connect Network (CCN) instance.
 *
 * @param request ModifyCloudConnectNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCloudConnectNetworkResponse
 */
ModifyCloudConnectNetworkResponse Client::modifyCloudConnectNetworkWithOptions(const ModifyCloudConnectNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCcnId()) {
    query["CcnId"] = request.getCcnId();
  }

  if (!!request.hasCidrBlock()) {
    query["CidrBlock"] = request.getCidrBlock();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInterworkingStatus()) {
    query["InterworkingStatus"] = request.getInterworkingStatus();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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
    {"action" , "ModifyCloudConnectNetwork"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCloudConnectNetworkResponse>();
}

/**
 * @summary Updates the configurations of a Cloud Connect Network (CCN) instance.
 *
 * @param request ModifyCloudConnectNetworkRequest
 * @return ModifyCloudConnectNetworkResponse
 */
ModifyCloudConnectNetworkResponse Client::modifyCloudConnectNetwork(const ModifyCloudConnectNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCloudConnectNetworkWithOptions(request, runtime);
}

/**
 * @summary Modifies the automatic upgrade policy of a Smart Access Gateway (SAG) device.
 *
 * @param request ModifyDeviceAutoUpgradePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDeviceAutoUpgradePolicyResponse
 */
ModifyDeviceAutoUpgradePolicyResponse Client::modifyDeviceAutoUpgradePolicyWithOptions(const ModifyDeviceAutoUpgradePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCronExpression()) {
    query["CronExpression"] = request.getCronExpression();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
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

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasTimeZone()) {
    query["TimeZone"] = request.getTimeZone();
  }

  if (!!request.hasUpgradeType()) {
    query["UpgradeType"] = request.getUpgradeType();
  }

  if (!!request.hasVersionType()) {
    query["VersionType"] = request.getVersionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDeviceAutoUpgradePolicy"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDeviceAutoUpgradePolicyResponse>();
}

/**
 * @summary Modifies the automatic upgrade policy of a Smart Access Gateway (SAG) device.
 *
 * @param request ModifyDeviceAutoUpgradePolicyRequest
 * @return ModifyDeviceAutoUpgradePolicyResponse
 */
ModifyDeviceAutoUpgradePolicyResponse Client::modifyDeviceAutoUpgradePolicy(const ModifyDeviceAutoUpgradePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDeviceAutoUpgradePolicyWithOptions(request, runtime);
}

/**
 * @summary Updates the settings of a flow log.
 *
 * @param request ModifyFlowLogAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFlowLogAttributeResponse
 */
ModifyFlowLogAttributeResponse Client::modifyFlowLogAttributeWithOptions(const ModifyFlowLogAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveAging()) {
    query["ActiveAging"] = request.getActiveAging();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
  }

  if (!!request.hasInactiveAging()) {
    query["InactiveAging"] = request.getInactiveAging();
  }

  if (!!request.hasLogstoreName()) {
    query["LogstoreName"] = request.getLogstoreName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNetflowServerIp()) {
    query["NetflowServerIp"] = request.getNetflowServerIp();
  }

  if (!!request.hasNetflowServerPort()) {
    query["NetflowServerPort"] = request.getNetflowServerPort();
  }

  if (!!request.hasNetflowVersion()) {
    query["NetflowVersion"] = request.getNetflowVersion();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.getOutputType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
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

  if (!!request.hasSlsRegionId()) {
    query["SlsRegionId"] = request.getSlsRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyFlowLogAttribute"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFlowLogAttributeResponse>();
}

/**
 * @summary Updates the settings of a flow log.
 *
 * @param request ModifyFlowLogAttributeRequest
 * @return ModifyFlowLogAttributeResponse
 */
ModifyFlowLogAttributeResponse Client::modifyFlowLogAttribute(const ModifyFlowLogAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFlowLogAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies a health check.
 *
 * @param request ModifyHealthCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHealthCheckResponse
 */
ModifyHealthCheckResponse Client::modifyHealthCheckWithOptions(const ModifyHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDstIpAddr()) {
    query["DstIpAddr"] = request.getDstIpAddr();
  }

  if (!!request.hasDstPort()) {
    query["DstPort"] = request.getDstPort();
  }

  if (!!request.hasFailCountThreshold()) {
    query["FailCountThreshold"] = request.getFailCountThreshold();
  }

  if (!!request.hasHcInstanceId()) {
    query["HcInstanceId"] = request.getHcInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProbeCount()) {
    query["ProbeCount"] = request.getProbeCount();
  }

  if (!!request.hasProbeInterval()) {
    query["ProbeInterval"] = request.getProbeInterval();
  }

  if (!!request.hasProbeTimeout()) {
    query["ProbeTimeout"] = request.getProbeTimeout();
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

  if (!!request.hasRttFailThreshold()) {
    query["RttFailThreshold"] = request.getRttFailThreshold();
  }

  if (!!request.hasRttThreshold()) {
    query["RttThreshold"] = request.getRttThreshold();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSrcIpAddr()) {
    query["SrcIpAddr"] = request.getSrcIpAddr();
  }

  if (!!request.hasSrcPort()) {
    query["SrcPort"] = request.getSrcPort();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHealthCheck"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHealthCheckResponse>();
}

/**
 * @summary Modifies a health check.
 *
 * @param request ModifyHealthCheckRequest
 * @return ModifyHealthCheckResponse
 */
ModifyHealthCheckResponse Client::modifyHealthCheck(const ModifyHealthCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHealthCheckWithOptions(request, runtime);
}

/**
 * @summary Modifies a quality of service (QoS) policy, such as its name.
 *
 * @param request ModifyQosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyQosResponse
 */
ModifyQosResponse Client::modifyQosWithOptions(const ModifyQosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQosDescription()) {
    query["QosDescription"] = request.getQosDescription();
  }

  if (!!request.hasQosId()) {
    query["QosId"] = request.getQosId();
  }

  if (!!request.hasQosName()) {
    query["QosName"] = request.getQosName();
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
    {"action" , "ModifyQos"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyQosResponse>();
}

/**
 * @summary Modifies a quality of service (QoS) policy, such as its name.
 *
 * @param request ModifyQosRequest
 * @return ModifyQosResponse
 */
ModifyQosResponse Client::modifyQos(const ModifyQosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyQosWithOptions(request, runtime);
}

/**
 * @summary Modifies a traffic throttling rule in a quality of service (QoS) policy.
 *
 * @param request ModifyQosCarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyQosCarResponse
 */
ModifyQosCarResponse Client::modifyQosCarWithOptions(const ModifyQosCarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasLimitType()) {
    query["LimitType"] = request.getLimitType();
  }

  if (!!request.hasMaxBandwidthAbs()) {
    query["MaxBandwidthAbs"] = request.getMaxBandwidthAbs();
  }

  if (!!request.hasMaxBandwidthPercent()) {
    query["MaxBandwidthPercent"] = request.getMaxBandwidthPercent();
  }

  if (!!request.hasMinBandwidthAbs()) {
    query["MinBandwidthAbs"] = request.getMinBandwidthAbs();
  }

  if (!!request.hasMinBandwidthPercent()) {
    query["MinBandwidthPercent"] = request.getMinBandwidthPercent();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPercentSourceType()) {
    query["PercentSourceType"] = request.getPercentSourceType();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasQosCarId()) {
    query["QosCarId"] = request.getQosCarId();
  }

  if (!!request.hasQosId()) {
    query["QosId"] = request.getQosId();
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
    {"action" , "ModifyQosCar"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyQosCarResponse>();
}

/**
 * @summary Modifies a traffic throttling rule in a quality of service (QoS) policy.
 *
 * @param request ModifyQosCarRequest
 * @return ModifyQosCarResponse
 */
ModifyQosCarResponse Client::modifyQosCar(const ModifyQosCarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyQosCarWithOptions(request, runtime);
}

/**
 * @summary You can call the ModifyQosPolicy operation to modify the stream classification rules in a Quality of Service (QoS) policy.
 *
 * @param request ModifyQosPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyQosPolicyResponse
 */
ModifyQosPolicyResponse Client::modifyQosPolicyWithOptions(const ModifyQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestCidr()) {
    query["DestCidr"] = request.getDestCidr();
  }

  if (!!request.hasDestPortRange()) {
    query["DestPortRange"] = request.getDestPortRange();
  }

  if (!!request.hasDpiGroupIds()) {
    query["DpiGroupIds"] = request.getDpiGroupIds();
  }

  if (!!request.hasDpiSignatureIds()) {
    query["DpiSignatureIds"] = request.getDpiSignatureIds();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasQosId()) {
    query["QosId"] = request.getQosId();
  }

  if (!!request.hasQosPolicyId()) {
    query["QosPolicyId"] = request.getQosPolicyId();
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

  if (!!request.hasSourceCidr()) {
    query["SourceCidr"] = request.getSourceCidr();
  }

  if (!!request.hasSourcePortRange()) {
    query["SourcePortRange"] = request.getSourcePortRange();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyQosPolicy"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyQosPolicyResponse>();
}

/**
 * @summary You can call the ModifyQosPolicy operation to modify the stream classification rules in a Quality of Service (QoS) policy.
 *
 * @param request ModifyQosPolicyRequest
 * @return ModifyQosPolicyResponse
 */
ModifyQosPolicyResponse Client::modifyQosPolicy(const ModifyQosPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyQosPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the route advertisement policy for a CIDR block.
 *
 * @param request ModifyRouteDistributionStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRouteDistributionStrategyResponse
 */
ModifyRouteDistributionStrategyResponse Client::modifyRouteDistributionStrategyWithOptions(const ModifyRouteDistributionStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestCidrBlock()) {
    query["DestCidrBlock"] = request.getDestCidrBlock();
  }

  if (!!request.hasHcInstanceId()) {
    query["HcInstanceId"] = request.getHcInstanceId();
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

  if (!!request.hasRouteDistribution()) {
    query["RouteDistribution"] = request.getRouteDistribution();
  }

  if (!!request.hasRouteSource()) {
    query["RouteSource"] = request.getRouteSource();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRouteDistributionStrategy"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRouteDistributionStrategyResponse>();
}

/**
 * @summary Modifies the route advertisement policy for a CIDR block.
 *
 * @param request ModifyRouteDistributionStrategyRequest
 * @return ModifyRouteDistributionStrategyResponse
 */
ModifyRouteDistributionStrategyResponse Client::modifyRouteDistributionStrategy(const ModifyRouteDistributionStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRouteDistributionStrategyWithOptions(request, runtime);
}

/**
 * @summary Modifies the password that is used to log on to a smart access gateway (SAG) device.
 *
 * @param request ModifySAGAdminPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySAGAdminPasswordResponse
 */
ModifySAGAdminPasswordResponse Client::modifySAGAdminPasswordWithOptions(const ModifySAGAdminPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySAGAdminPassword"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySAGAdminPasswordResponse>();
}

/**
 * @summary Modifies the password that is used to log on to a smart access gateway (SAG) device.
 *
 * @param request ModifySAGAdminPasswordRequest
 * @return ModifySAGAdminPasswordResponse
 */
ModifySAGAdminPasswordResponse Client::modifySAGAdminPassword(const ModifySAGAdminPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySAGAdminPasswordWithOptions(request, runtime);
}

/**
 * @summary Modifies the sub-interface information of an Express Connect circuit port.
 *
 * @param request ModifySagExpressConnectInterfaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySagExpressConnectInterfaceResponse
 */
ModifySagExpressConnectInterfaceResponse Client::modifySagExpressConnectInterfaceWithOptions(const ModifySagExpressConnectInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIP()) {
    query["IP"] = request.getIP();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPortName()) {
    query["PortName"] = request.getPortName();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  if (!!request.hasVlan()) {
    query["Vlan"] = request.getVlan();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySagExpressConnectInterface"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySagExpressConnectInterfaceResponse>();
}

/**
 * @summary Modifies the sub-interface information of an Express Connect circuit port.
 *
 * @param request ModifySagExpressConnectInterfaceRequest
 * @return ModifySagExpressConnectInterfaceResponse
 */
ModifySagExpressConnectInterfaceResponse Client::modifySagExpressConnectInterface(const ModifySagExpressConnectInterfaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySagExpressConnectInterfaceWithOptions(request, runtime);
}

/**
 * @summary Changes the routing protocol of a Smart Access Gateway (SAG) instance.
 *
 * @param request ModifySagGlobalRouteProtocolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySagGlobalRouteProtocolResponse
 */
ModifySagGlobalRouteProtocolResponse Client::modifySagGlobalRouteProtocolWithOptions(const ModifySagGlobalRouteProtocolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasRouteProtocol()) {
    query["RouteProtocol"] = request.getRouteProtocol();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySagGlobalRouteProtocol"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySagGlobalRouteProtocolResponse>();
}

/**
 * @summary Changes the routing protocol of a Smart Access Gateway (SAG) instance.
 *
 * @param request ModifySagGlobalRouteProtocolRequest
 * @return ModifySagGlobalRouteProtocolResponse
 */
ModifySagGlobalRouteProtocolResponse Client::modifySagGlobalRouteProtocol(const ModifySagGlobalRouteProtocolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySagGlobalRouteProtocolWithOptions(request, runtime);
}

/**
 * @summary Modifies the high availability (HA) settings of a Smart Access Gateway (SAG) device.
 *
 * @param request ModifySagHaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySagHaResponse
 */
ModifySagHaResponse Client::modifySagHaWithOptions(const ModifySagHaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPortName()) {
    query["PortName"] = request.getPortName();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  if (!!request.hasVirtualIp()) {
    query["VirtualIp"] = request.getVirtualIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySagHa"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySagHaResponse>();
}

/**
 * @summary Modifies the high availability (HA) settings of a Smart Access Gateway (SAG) device.
 *
 * @param request ModifySagHaRequest
 * @return ModifySagHaResponse
 */
ModifySagHaResponse Client::modifySagHa(const ModifySagHaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySagHaWithOptions(request, runtime);
}

/**
 * @summary Modifies the LAN port configurations of a Smart Access Gateway (SAG) device.
 *
 * @param request ModifySagLanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySagLanResponse
 */
ModifySagLanResponse Client::modifySagLanWithOptions(const ModifySagLanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndIp()) {
    query["EndIp"] = request.getEndIp();
  }

  if (!!request.hasIP()) {
    query["IP"] = request.getIP();
  }

  if (!!request.hasIPType()) {
    query["IPType"] = request.getIPType();
  }

  if (!!request.hasLease()) {
    query["Lease"] = request.getLease();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPortName()) {
    query["PortName"] = request.getPortName();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  if (!!request.hasStartIp()) {
    query["StartIp"] = request.getStartIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySagLan"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySagLanResponse>();
}

/**
 * @summary Modifies the LAN port configurations of a Smart Access Gateway (SAG) device.
 *
 * @param request ModifySagLanRequest
 * @return ModifySagLanResponse
 */
ModifySagLanResponse Client::modifySagLan(const ModifySagLanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySagLanWithOptions(request, runtime);
}

/**
 * @summary Updates the settings of a Smart Access Gateway (SAG) device port.
 *
 * @param request ModifySagManagementPortRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySagManagementPortResponse
 */
ModifySagManagementPortResponse Client::modifySagManagementPortWithOptions(const ModifySagManagementPortRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGateway()) {
    query["Gateway"] = request.getGateway();
  }

  if (!!request.hasIP()) {
    query["IP"] = request.getIP();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySagManagementPort"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySagManagementPortResponse>();
}

/**
 * @summary Updates the settings of a Smart Access Gateway (SAG) device port.
 *
 * @param request ModifySagManagementPortRequest
 * @return ModifySagManagementPortResponse
 */
ModifySagManagementPortResponse Client::modifySagManagementPort(const ModifySagManagementPortRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySagManagementPortWithOptions(request, runtime);
}

/**
 * @summary Modifies the role of a port.
 *
 * @description >  If you modify the role of a port, the current role configurations of the port are deleted.
 *
 * @param request ModifySagPortRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySagPortRoleResponse
 */
ModifySagPortRoleResponse Client::modifySagPortRoleWithOptions(const ModifySagPortRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPortName()) {
    query["PortName"] = request.getPortName();
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

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySagPortRole"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySagPortRoleResponse>();
}

/**
 * @summary Modifies the role of a port.
 *
 * @description >  If you modify the role of a port, the current role configurations of the port are deleted.
 *
 * @param request ModifySagPortRoleRequest
 * @return ModifySagPortRoleResponse
 */
ModifySagPortRoleResponse Client::modifySagPortRole(const ModifySagPortRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySagPortRoleWithOptions(request, runtime);
}

/**
 * @summary Modifies the routing protocol of a port.
 *
 * @param request ModifySagPortRouteProtocolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySagPortRouteProtocolResponse
 */
ModifySagPortRouteProtocolResponse Client::modifySagPortRouteProtocolWithOptions(const ModifySagPortRouteProtocolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPortName()) {
    query["PortName"] = request.getPortName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemoteAs()) {
    query["RemoteAs"] = request.getRemoteAs();
  }

  if (!!request.hasRemoteIp()) {
    query["RemoteIp"] = request.getRemoteIp();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteProtocol()) {
    query["RouteProtocol"] = request.getRouteProtocol();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  if (!!request.hasVlan()) {
    query["Vlan"] = request.getVlan();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySagPortRouteProtocol"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySagPortRouteProtocolResponse>();
}

/**
 * @summary Modifies the routing protocol of a port.
 *
 * @param request ModifySagPortRouteProtocolRequest
 * @return ModifySagPortRouteProtocolResponse
 */
ModifySagPortRouteProtocolResponse Client::modifySagPortRouteProtocol(const ModifySagPortRouteProtocolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySagPortRouteProtocolWithOptions(request, runtime);
}

/**
 * @summary Modifies the remote access IP address of a Smart Access Gateway (SAG) device.
 *
 * @param request ModifySagRemoteAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySagRemoteAccessResponse
 */
ModifySagRemoteAccessResponse Client::modifySagRemoteAccessWithOptions(const ModifySagRemoteAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemoteAccessIp()) {
    query["RemoteAccessIp"] = request.getRemoteAccessIp();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySagRemoteAccess"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySagRemoteAccessResponse>();
}

/**
 * @summary Modifies the remote access IP address of a Smart Access Gateway (SAG) device.
 *
 * @param request ModifySagRemoteAccessRequest
 * @return ModifySagRemoteAccessResponse
 */
ModifySagRemoteAccessResponse Client::modifySagRemoteAccess(const ModifySagRemoteAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySagRemoteAccessWithOptions(request, runtime);
}

/**
 * @summary Modifies the Border Gateway Protocol (BGP) settings of a Smart Access Gateway (SAG) device.
 *
 * @param request ModifySagRouteProtocolBgpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySagRouteProtocolBgpResponse
 */
ModifySagRouteProtocolBgpResponse Client::modifySagRouteProtocolBgpWithOptions(const ModifySagRouteProtocolBgpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHoldTime()) {
    query["HoldTime"] = request.getHoldTime();
  }

  if (!!request.hasKeepAlive()) {
    query["KeepAlive"] = request.getKeepAlive();
  }

  if (!!request.hasLocalAs()) {
    query["LocalAs"] = request.getLocalAs();
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

  if (!!request.hasRouterId()) {
    query["RouterId"] = request.getRouterId();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySagRouteProtocolBgp"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySagRouteProtocolBgpResponse>();
}

/**
 * @summary Modifies the Border Gateway Protocol (BGP) settings of a Smart Access Gateway (SAG) device.
 *
 * @param request ModifySagRouteProtocolBgpRequest
 * @return ModifySagRouteProtocolBgpResponse
 */
ModifySagRouteProtocolBgpResponse Client::modifySagRouteProtocolBgp(const ModifySagRouteProtocolBgpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySagRouteProtocolBgpWithOptions(request, runtime);
}

/**
 * @summary Modifies the Open Shortest Path First (OSPF) settings of a Smart Access Gateway (SAG) instance.
 *
 * @param request ModifySagRouteProtocolOspfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySagRouteProtocolOspfResponse
 */
ModifySagRouteProtocolOspfResponse Client::modifySagRouteProtocolOspfWithOptions(const ModifySagRouteProtocolOspfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAreaId()) {
    query["AreaId"] = request.getAreaId();
  }

  if (!!request.hasAuthenticationType()) {
    query["AuthenticationType"] = request.getAuthenticationType();
  }

  if (!!request.hasDeadTime()) {
    query["DeadTime"] = request.getDeadTime();
  }

  if (!!request.hasHelloTime()) {
    query["HelloTime"] = request.getHelloTime();
  }

  if (!!request.hasMd5Key()) {
    query["Md5Key"] = request.getMd5Key();
  }

  if (!!request.hasMd5KeyId()) {
    query["Md5KeyId"] = request.getMd5KeyId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
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

  if (!!request.hasRouterId()) {
    query["RouterId"] = request.getRouterId();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySagRouteProtocolOspf"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySagRouteProtocolOspfResponse>();
}

/**
 * @summary Modifies the Open Shortest Path First (OSPF) settings of a Smart Access Gateway (SAG) instance.
 *
 * @param request ModifySagRouteProtocolOspfRequest
 * @return ModifySagRouteProtocolOspfResponse
 */
ModifySagRouteProtocolOspfResponse Client::modifySagRouteProtocolOspf(const ModifySagRouteProtocolOspfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySagRouteProtocolOspfWithOptions(request, runtime);
}

/**
 * @summary Modifies a static route.
 *
 * @param request ModifySagStaticRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySagStaticRouteResponse
 */
ModifySagStaticRouteResponse Client::modifySagStaticRouteWithOptions(const ModifySagStaticRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestinationCidr()) {
    query["DestinationCidr"] = request.getDestinationCidr();
  }

  if (!!request.hasNextHop()) {
    query["NextHop"] = request.getNextHop();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPortName()) {
    query["PortName"] = request.getPortName();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  if (!!request.hasVlan()) {
    query["Vlan"] = request.getVlan();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySagStaticRoute"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySagStaticRouteResponse>();
}

/**
 * @summary Modifies a static route.
 *
 * @param request ModifySagStaticRouteRequest
 * @return ModifySagStaticRouteResponse
 */
ModifySagStaticRouteResponse Client::modifySagStaticRoute(const ModifySagStaticRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySagStaticRouteWithOptions(request, runtime);
}

/**
 * @summary Modifies the DNS servers used by a Smart Access Gateway (SAG) instance.
 *
 * @param request ModifySagUserDnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySagUserDnsResponse
 */
ModifySagUserDnsResponse Client::modifySagUserDnsWithOptions(const ModifySagUserDnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMasterDns()) {
    query["MasterDns"] = request.getMasterDns();
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

  if (!!request.hasSlaveDns()) {
    query["SlaveDns"] = request.getSlaveDns();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySagUserDns"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySagUserDnsResponse>();
}

/**
 * @summary Modifies the DNS servers used by a Smart Access Gateway (SAG) instance.
 *
 * @param request ModifySagUserDnsRequest
 * @return ModifySagUserDnsResponse
 */
ModifySagUserDnsResponse Client::modifySagUserDns(const ModifySagUserDnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySagUserDnsWithOptions(request, runtime);
}

/**
 * @summary Modifies the WAN port configurations of a Smart Access Gateway (SAG) device.
 *
 * @description We recommend that you understand the functionality of a WAN port before you modify its settings. For more information, see [Configure a WAN port](https://help.aliyun.com/document_detail/163955.html).
 *
 * @param request ModifySagWanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySagWanResponse
 */
ModifySagWanResponse Client::modifySagWanWithOptions(const ModifySagWanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasGateway()) {
    query["Gateway"] = request.getGateway();
  }

  if (!!request.hasIP()) {
    query["IP"] = request.getIP();
  }

  if (!!request.hasIPType()) {
    query["IPType"] = request.getIPType();
  }

  if (!!request.hasISP()) {
    query["ISP"] = request.getISP();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPortName()) {
    query["PortName"] = request.getPortName();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  if (!!request.hasWeight()) {
    query["Weight"] = request.getWeight();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySagWan"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySagWanResponse>();
}

/**
 * @summary Modifies the WAN port configurations of a Smart Access Gateway (SAG) device.
 *
 * @description We recommend that you understand the functionality of a WAN port before you modify its settings. For more information, see [Configure a WAN port](https://help.aliyun.com/document_detail/163955.html).
 *
 * @param request ModifySagWanRequest
 * @return ModifySagWanResponse
 */
ModifySagWanResponse Client::modifySagWan(const ModifySagWanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySagWanWithOptions(request, runtime);
}

/**
 * @summary Modifies the SNAT configurations of a WAN port of a Smart Access Gateway (SAG) device.
 *
 * @param request ModifySagWanSnatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySagWanSnatResponse
 */
ModifySagWanSnatResponse Client::modifySagWanSnatWithOptions(const ModifySagWanSnatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  if (!!request.hasSnat()) {
    query["Snat"] = request.getSnat();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySagWanSnat"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySagWanSnatResponse>();
}

/**
 * @summary Modifies the SNAT configurations of a WAN port of a Smart Access Gateway (SAG) device.
 *
 * @param request ModifySagWanSnatRequest
 * @return ModifySagWanSnatResponse
 */
ModifySagWanSnatResponse Client::modifySagWanSnat(const ModifySagWanSnatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySagWanSnatWithOptions(request, runtime);
}

/**
 * @summary Modifies the Wi-Fi settings of a Smart Access Gateway (SAG) device.
 *
 * @param request ModifySagWifiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySagWifiResponse
 */
ModifySagWifiResponse Client::modifySagWifiWithOptions(const ModifySagWifiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthenticationType()) {
    query["AuthenticationType"] = request.getAuthenticationType();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasChannel()) {
    query["Channel"] = request.getChannel();
  }

  if (!!request.hasEncryptAlgorithm()) {
    query["EncryptAlgorithm"] = request.getEncryptAlgorithm();
  }

  if (!!request.hasIsAuth()) {
    query["IsAuth"] = request.getIsAuth();
  }

  if (!!request.hasIsBroadcast()) {
    query["IsBroadcast"] = request.getIsBroadcast();
  }

  if (!!request.hasIsEnable()) {
    query["IsEnable"] = request.getIsEnable();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
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

  if (!!request.hasSSID()) {
    query["SSID"] = request.getSSID();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySagWifi"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySagWifiResponse>();
}

/**
 * @summary Modifies the Wi-Fi settings of a Smart Access Gateway (SAG) device.
 *
 * @param request ModifySagWifiRequest
 * @return ModifySagWifiResponse
 */
ModifySagWifiResponse Client::modifySagWifi(const ModifySagWifiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySagWifiWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a Smart Access Gateway (SAG) instance.
 *
 * @param request ModifySmartAccessGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySmartAccessGatewayResponse
 */
ModifySmartAccessGatewayResponse Client::modifySmartAccessGatewayWithOptions(const ModifySmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrBlock()) {
    query["CidrBlock"] = request.getCidrBlock();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnableSoftwareConnectionAudit()) {
    query["EnableSoftwareConnectionAudit"] = request.getEnableSoftwareConnectionAudit();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPosition()) {
    query["Position"] = request.getPosition();
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

  if (!!request.hasRoutingStrategy()) {
    query["RoutingStrategy"] = request.getRoutingStrategy();
  }

  if (!!request.hasSecurityLockThreshold()) {
    query["SecurityLockThreshold"] = request.getSecurityLockThreshold();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySmartAccessGateway"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySmartAccessGatewayResponse>();
}

/**
 * @summary Modifies the configuration of a Smart Access Gateway (SAG) instance.
 *
 * @param request ModifySmartAccessGatewayRequest
 * @return ModifySmartAccessGatewayResponse
 */
ModifySmartAccessGatewayResponse Client::modifySmartAccessGateway(const ModifySmartAccessGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySmartAccessGatewayWithOptions(request, runtime);
}

/**
 * @summary Modifies the maximum bandwidth and email address of a client account on a Smart Access Gateway (SAG) app instance.
 *
 * @param request ModifySmartAccessGatewayClientUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySmartAccessGatewayClientUserResponse
 */
ModifySmartAccessGatewayClientUserResponse Client::modifySmartAccessGatewayClientUserWithOptions(const ModifySmartAccessGatewayClientUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySmartAccessGatewayClientUser"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySmartAccessGatewayClientUserResponse>();
}

/**
 * @summary Modifies the maximum bandwidth and email address of a client account on a Smart Access Gateway (SAG) app instance.
 *
 * @param request ModifySmartAccessGatewayClientUserRequest
 * @return ModifySmartAccessGatewayClientUserResponse
 */
ModifySmartAccessGatewayClientUserResponse Client::modifySmartAccessGatewayClientUser(const ModifySmartAccessGatewayClientUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySmartAccessGatewayClientUserWithOptions(request, runtime);
}

/**
 * @summary Modifies the parameters of a Smart Access Gateway (SAG) instance.
 *
 * @param request ModifySmartAccessGatewayUpBandwidthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySmartAccessGatewayUpBandwidthResponse
 */
ModifySmartAccessGatewayUpBandwidthResponse Client::modifySmartAccessGatewayUpBandwidthWithOptions(const ModifySmartAccessGatewayUpBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasUpBandwidth4G()) {
    query["UpBandwidth4G"] = request.getUpBandwidth4G();
  }

  if (!!request.hasUpBandwidthWan()) {
    query["UpBandwidthWan"] = request.getUpBandwidthWan();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySmartAccessGatewayUpBandwidth"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySmartAccessGatewayUpBandwidthResponse>();
}

/**
 * @summary Modifies the parameters of a Smart Access Gateway (SAG) instance.
 *
 * @param request ModifySmartAccessGatewayUpBandwidthRequest
 * @return ModifySmartAccessGatewayUpBandwidthResponse
 */
ModifySmartAccessGatewayUpBandwidthResponse Client::modifySmartAccessGatewayUpBandwidth(const ModifySmartAccessGatewayUpBandwidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySmartAccessGatewayUpBandwidthWithOptions(request, runtime);
}

/**
 * @summary Moves Smart Access Gateway (SAG) resources from one resource group to another.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
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

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2018-03-13"},
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
 * @summary Moves Smart Access Gateway (SAG) resources from one resource group to another.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Probes the network connectivity between a Smart Access Gateway (SAG) instance and an access point.
 *
 * @description You can call this operation to test the connectivity between an SAG instance and a specified access point.
 * *   If the SAG instance can connect to the access point, the ID of the request is returned in this operation.
 * *   If the SAG instance cannot connect to the access point, the ID of the request and corresponding error messages are returned in this operation.
 *
 * @param request ProbeAccessPointNetworkQualityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProbeAccessPointNetworkQualityResponse
 */
ProbeAccessPointNetworkQualityResponse Client::probeAccessPointNetworkQualityWithOptions(const ProbeAccessPointNetworkQualityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessPointIds()) {
    query["AccessPointIds"] = request.getAccessPointIds();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ProbeAccessPointNetworkQuality"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ProbeAccessPointNetworkQualityResponse>();
}

/**
 * @summary Probes the network connectivity between a Smart Access Gateway (SAG) instance and an access point.
 *
 * @description You can call this operation to test the connectivity between an SAG instance and a specified access point.
 * *   If the SAG instance can connect to the access point, the ID of the request is returned in this operation.
 * *   If the SAG instance cannot connect to the access point, the ID of the request and corresponding error messages are returned in this operation.
 *
 * @param request ProbeAccessPointNetworkQualityRequest
 * @return ProbeAccessPointNetworkQualityResponse
 */
ProbeAccessPointNetworkQualityResponse Client::probeAccessPointNetworkQuality(const ProbeAccessPointNetworkQualityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return probeAccessPointNetworkQualityWithOptions(request, runtime);
}

/**
 * @summary Restarts a Smart Access Gateway (SAG) instance.
 *
 * @param request RebootSmartAccessGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootSmartAccessGatewayResponse
 */
RebootSmartAccessGatewayResponse Client::rebootSmartAccessGatewayWithOptions(const RebootSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebootSmartAccessGateway"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootSmartAccessGatewayResponse>();
}

/**
 * @summary Restarts a Smart Access Gateway (SAG) instance.
 *
 * @param request RebootSmartAccessGatewayRequest
 * @return RebootSmartAccessGatewayResponse
 */
RebootSmartAccessGatewayResponse Client::rebootSmartAccessGateway(const RebootSmartAccessGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootSmartAccessGatewayWithOptions(request, runtime);
}

/**
 * @summary Resets the password that a client account uses to log on to the Smart Access Gateway (SAG) app.
 *
 * @param request ResetSmartAccessGatewayClientUserPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetSmartAccessGatewayClientUserPasswordResponse
 */
ResetSmartAccessGatewayClientUserPasswordResponse Client::resetSmartAccessGatewayClientUserPasswordWithOptions(const ResetSmartAccessGatewayClientUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetSmartAccessGatewayClientUserPassword"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetSmartAccessGatewayClientUserPasswordResponse>();
}

/**
 * @summary Resets the password that a client account uses to log on to the Smart Access Gateway (SAG) app.
 *
 * @param request ResetSmartAccessGatewayClientUserPasswordRequest
 * @return ResetSmartAccessGatewayClientUserPasswordResponse
 */
ResetSmartAccessGatewayClientUserPasswordResponse Client::resetSmartAccessGatewayClientUserPassword(const ResetSmartAccessGatewayClientUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetSmartAccessGatewayClientUserPasswordWithOptions(request, runtime);
}

/**
 * @summary Disallows a Cloud Enterprise Network (CEN) instance to communicate with a Cloud Connect Network (CCN) instance.
 *
 * @param request RevokeInstanceFromCbnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeInstanceFromCbnResponse
 */
RevokeInstanceFromCbnResponse Client::revokeInstanceFromCbnWithOptions(const RevokeInstanceFromCbnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCcnInstanceId()) {
    query["CcnInstanceId"] = request.getCcnInstanceId();
  }

  if (!!request.hasCenInstanceId()) {
    query["CenInstanceId"] = request.getCenInstanceId();
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
    {"action" , "RevokeInstanceFromCbn"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeInstanceFromCbnResponse>();
}

/**
 * @summary Disallows a Cloud Enterprise Network (CEN) instance to communicate with a Cloud Connect Network (CCN) instance.
 *
 * @param request RevokeInstanceFromCbnRequest
 * @return RevokeInstanceFromCbnResponse
 */
RevokeInstanceFromCbnResponse Client::revokeInstanceFromCbn(const RevokeInstanceFromCbnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeInstanceFromCbnWithOptions(request, runtime);
}

/**
 * @summary Revokes the permissions that a Smart Access Gateway (SAG) instance has on virtual border routers (VBRs) in a different Alibaba Cloud account.
 *
 * @param request RevokeInstanceFromVbrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeInstanceFromVbrResponse
 */
RevokeInstanceFromVbrResponse Client::revokeInstanceFromVbrWithOptions(const RevokeInstanceFromVbrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasVbrInstanceId()) {
    query["VbrInstanceId"] = request.getVbrInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeInstanceFromVbr"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeInstanceFromVbrResponse>();
}

/**
 * @summary Revokes the permissions that a Smart Access Gateway (SAG) instance has on virtual border routers (VBRs) in a different Alibaba Cloud account.
 *
 * @param request RevokeInstanceFromVbrRequest
 * @return RevokeInstanceFromVbrResponse
 */
RevokeInstanceFromVbrResponse Client::revokeInstanceFromVbr(const RevokeInstanceFromVbrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeInstanceFromVbrWithOptions(request, runtime);
}

/**
 * @summary Disallows a Smart Access Gateway (SAG) instance to communicate with a Cloud Connect Network (CCN) instance.
 *
 * @param request RevokeSagInstanceFromCcnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeSagInstanceFromCcnResponse
 */
RevokeSagInstanceFromCcnResponse Client::revokeSagInstanceFromCcnWithOptions(const RevokeSagInstanceFromCcnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCcnInstanceId()) {
    query["CcnInstanceId"] = request.getCcnInstanceId();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeSagInstanceFromCcn"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeSagInstanceFromCcnResponse>();
}

/**
 * @summary Disallows a Smart Access Gateway (SAG) instance to communicate with a Cloud Connect Network (CCN) instance.
 *
 * @param request RevokeSagInstanceFromCcnRequest
 * @return RevokeSagInstanceFromCcnResponse
 */
RevokeSagInstanceFromCcnResponse Client::revokeSagInstanceFromCcn(const RevokeSagInstanceFromCcnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeSagInstanceFromCcnWithOptions(request, runtime);
}

/**
 * @summary Enables roaming for the SAG app to allow clients to access Alibaba Cloud across regions.
 *
 * @description Before you call `RoamClientUser`, we recommend that you read and understand the features and usage notes of roaming. For more information, see [Configure roaming on clients](https://help.aliyun.com/document_detail/177220.html).
 *
 * @param request RoamClientUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RoamClientUserResponse
 */
RoamClientUserResponse Client::roamClientUserWithOptions(const RoamClientUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOriginRegionId()) {
    query["OriginRegionId"] = request.getOriginRegionId();
  }

  if (!!request.hasOriginSmartAGId()) {
    query["OriginSmartAGId"] = request.getOriginSmartAGId();
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

  if (!!request.hasTargetSmartAGId()) {
    query["TargetSmartAGId"] = request.getTargetSmartAGId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RoamClientUser"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RoamClientUserResponse>();
}

/**
 * @summary Enables roaming for the SAG app to allow clients to access Alibaba Cloud across regions.
 *
 * @description Before you call `RoamClientUser`, we recommend that you read and understand the features and usage notes of roaming. For more information, see [Configure roaming on clients](https://help.aliyun.com/document_detail/177220.html).
 *
 * @param request RoamClientUserRequest
 * @return RoamClientUserResponse
 */
RoamClientUserResponse Client::roamClientUser(const RoamClientUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return roamClientUserWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
 *
 * @param request SetAdvancedMonitorStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAdvancedMonitorStateResponse
 */
SetAdvancedMonitorStateResponse Client::setAdvancedMonitorStateWithOptions(const SetAdvancedMonitorStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSagId()) {
    query["SagId"] = request.getSagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAdvancedMonitorState"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAdvancedMonitorStateResponse>();
}

/**
 * @summary Enables or disables the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
 *
 * @param request SetAdvancedMonitorStateRequest
 * @return SetAdvancedMonitorStateResponse
 */
SetAdvancedMonitorStateResponse Client::setAdvancedMonitorState(const SetAdvancedMonitorStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAdvancedMonitorStateWithOptions(request, runtime);
}

/**
 * @summary Synchronizes the settings of a Smart Access Gateway (SAG) device to the associated SAG instance.
 *
 * @description **SynchronizeSmartAGWebConfig** is an asynchronous operation. After you send a request, the request ID is returned but the operation is still being performed in the system background. You can call the [DescribeSAGDeviceInfo](https://help.aliyun.com/document_detail/164279.html) operation to query the status of an SAG device.
 * *   If an SAG device is in the **Synchronizing** state, the settings of the SAG device are being synchronized to the associated SAG instance.
 * *   If an SAG device is in the **Synchronized** state, the settings of the SAG device are synchronized to the associated SAG instance.
 *
 * @param request SynchronizeSmartAGWebConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SynchronizeSmartAGWebConfigResponse
 */
SynchronizeSmartAGWebConfigResponse Client::synchronizeSmartAGWebConfigWithOptions(const SynchronizeSmartAGWebConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGSn()) {
    query["SmartAGSn"] = request.getSmartAGSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SynchronizeSmartAGWebConfig"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SynchronizeSmartAGWebConfigResponse>();
}

/**
 * @summary Synchronizes the settings of a Smart Access Gateway (SAG) device to the associated SAG instance.
 *
 * @description **SynchronizeSmartAGWebConfig** is an asynchronous operation. After you send a request, the request ID is returned but the operation is still being performed in the system background. You can call the [DescribeSAGDeviceInfo](https://help.aliyun.com/document_detail/164279.html) operation to query the status of an SAG device.
 * *   If an SAG device is in the **Synchronizing** state, the settings of the SAG device are being synchronized to the associated SAG instance.
 * *   If an SAG device is in the **Synchronized** state, the settings of the SAG device are synchronized to the associated SAG instance.
 *
 * @param request SynchronizeSmartAGWebConfigRequest
 * @return SynchronizeSmartAGWebConfigResponse
 */
SynchronizeSmartAGWebConfigResponse Client::synchronizeSmartAGWebConfig(const SynchronizeSmartAGWebConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return synchronizeSmartAGWebConfigWithOptions(request, runtime);
}

/**
 * @summary Disassociates a Smart Access Gateway (SAG) device from the associated SAG instance.
 *
 * @param request UnbindSerialNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindSerialNumberResponse
 */
UnbindSerialNumberResponse Client::unbindSerialNumberWithOptions(const UnbindSerialNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindSerialNumber"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindSerialNumberResponse>();
}

/**
 * @summary Disassociates a Smart Access Gateway (SAG) device from the associated SAG instance.
 *
 * @param request UnbindSerialNumberRequest
 * @return UnbindSerialNumberResponse
 */
UnbindSerialNumberResponse Client::unbindSerialNumber(const UnbindSerialNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindSerialNumberWithOptions(request, runtime);
}

/**
 * @summary Disassociates a Smart Access Gateway (SAG) instance from the associated Cloud Connect Network (CCN) instance.
 *
 * @param request UnbindSmartAccessGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindSmartAccessGatewayResponse
 */
UnbindSmartAccessGatewayResponse Client::unbindSmartAccessGatewayWithOptions(const UnbindSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCcnId()) {
    query["CcnId"] = request.getCcnId();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGUid()) {
    query["SmartAGUid"] = request.getSmartAGUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindSmartAccessGateway"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindSmartAccessGatewayResponse>();
}

/**
 * @summary Disassociates a Smart Access Gateway (SAG) instance from the associated Cloud Connect Network (CCN) instance.
 *
 * @param request UnbindSmartAccessGatewayRequest
 * @return UnbindSmartAccessGatewayResponse
 */
UnbindSmartAccessGatewayResponse Client::unbindSmartAccessGateway(const UnbindSmartAccessGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindSmartAccessGatewayWithOptions(request, runtime);
}

/**
 * @summary Disassociates a Smart Access Gateway (SAG) instance from a virtual border router (VBR).
 *
 * @param request UnbindVbrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindVbrResponse
 */
UnbindVbrResponse Client::unbindVbrWithOptions(const UnbindVbrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasSmartAGUid()) {
    query["SmartAGUid"] = request.getSmartAGUid();
  }

  if (!!request.hasVbrId()) {
    query["VbrId"] = request.getVbrId();
  }

  if (!!request.hasVbrRegionId()) {
    query["VbrRegionId"] = request.getVbrRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindVbr"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindVbrResponse>();
}

/**
 * @summary Disassociates a Smart Access Gateway (SAG) instance from a virtual border router (VBR).
 *
 * @param request UnbindVbrRequest
 * @return UnbindVbrResponse
 */
UnbindVbrResponse Client::unbindVbr(const UnbindVbrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindVbrWithOptions(request, runtime);
}

/**
 * @summary Unlocks a Smart Access Gateway (SAG) instance.
 *
 * @param request UnlockSmartAccessGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnlockSmartAccessGatewayResponse
 */
UnlockSmartAccessGatewayResponse Client::unlockSmartAccessGatewayWithOptions(const UnlockSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnlockSmartAccessGateway"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnlockSmartAccessGatewayResponse>();
}

/**
 * @summary Unlocks a Smart Access Gateway (SAG) instance.
 *
 * @param request UnlockSmartAccessGatewayRequest
 * @return UnlockSmartAccessGatewayResponse
 */
UnlockSmartAccessGatewayResponse Client::unlockSmartAccessGateway(const UnlockSmartAccessGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unlockSmartAccessGatewayWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of a specified enterprise code.
 *
 * @param request UpdateEnterpriseCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEnterpriseCodeResponse
 */
UpdateEnterpriseCodeResponse Client::updateEnterpriseCodeWithOptions(const UpdateEnterpriseCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnterpriseCode()) {
    query["EnterpriseCode"] = request.getEnterpriseCode();
  }

  if (!!request.hasIsDefault()) {
    query["IsDefault"] = request.getIsDefault();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateEnterpriseCode"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEnterpriseCodeResponse>();
}

/**
 * @summary Modifies the attributes of a specified enterprise code.
 *
 * @param request UpdateEnterpriseCodeRequest
 * @return UpdateEnterpriseCodeResponse
 */
UpdateEnterpriseCodeResponse Client::updateEnterpriseCode(const UpdateEnterpriseCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEnterpriseCodeWithOptions(request, runtime);
}

/**
 * @summary Modifies a probe task.
 *
 * @param request UpdateProbeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProbeTaskResponse
 */
UpdateProbeTaskResponse Client::updateProbeTaskWithOptions(const UpdateProbeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasPacketNumber()) {
    query["PacketNumber"] = request.getPacketNumber();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasProbeTaskId()) {
    query["ProbeTaskId"] = request.getProbeTaskId();
  }

  if (!!request.hasProbeTaskSourceAddress()) {
    query["ProbeTaskSourceAddress"] = request.getProbeTaskSourceAddress();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSagId()) {
    query["SagId"] = request.getSagId();
  }

  if (!!request.hasSn()) {
    query["Sn"] = request.getSn();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateProbeTask"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProbeTaskResponse>();
}

/**
 * @summary Modifies a probe task.
 *
 * @param request UpdateProbeTaskRequest
 * @return UpdateProbeTaskResponse
 */
UpdateProbeTaskResponse Client::updateProbeTask(const UpdateProbeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProbeTaskWithOptions(request, runtime);
}

/**
 * @summary Switches the access point of a Smart Access Gateway (SAG) instance.
 *
 * @description ## Prerequisites
 * Before you call this operation, you can call the [ListAccessPoints](https://help.aliyun.com/document_detail/183876.html) operation to view the switchable access points of the SAG instance.
 *
 * @param request UpdateSmartAGAccessPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmartAGAccessPointResponse
 */
UpdateSmartAGAccessPointResponse Client::updateSmartAGAccessPointWithOptions(const UpdateSmartAGAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessPointId()) {
    query["AccessPointId"] = request.getAccessPointId();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmartAGAccessPoint"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmartAGAccessPointResponse>();
}

/**
 * @summary Switches the access point of a Smart Access Gateway (SAG) instance.
 *
 * @description ## Prerequisites
 * Before you call this operation, you can call the [ListAccessPoints](https://help.aliyun.com/document_detail/183876.html) operation to view the switchable access points of the SAG instance.
 *
 * @param request UpdateSmartAGAccessPointRequest
 * @return UpdateSmartAGAccessPointResponse
 */
UpdateSmartAGAccessPointResponse Client::updateSmartAGAccessPoint(const UpdateSmartAGAccessPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmartAGAccessPointWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
 *
 * @param request UpdateSmartAGDpiAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmartAGDpiAttributeResponse
 */
UpdateSmartAGDpiAttributeResponse Client::updateSmartAGDpiAttributeWithOptions(const UpdateSmartAGDpiAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDpiEnabled()) {
    query["DpiEnabled"] = request.getDpiEnabled();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmartAGDpiAttribute"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmartAGDpiAttributeResponse>();
}

/**
 * @summary Enables or disables the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
 *
 * @param request UpdateSmartAGDpiAttributeRequest
 * @return UpdateSmartAGDpiAttributeResponse
 */
UpdateSmartAGDpiAttributeResponse Client::updateSmartAGDpiAttribute(const UpdateSmartAGDpiAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmartAGDpiAttributeWithOptions(request, runtime);
}

/**
 * @summary Associates a Smart Access Gateway (SAG) APP instance with another enterprise code.
 *
 * @param request UpdateSmartAGEnterpriseCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmartAGEnterpriseCodeResponse
 */
UpdateSmartAGEnterpriseCodeResponse Client::updateSmartAGEnterpriseCodeWithOptions(const UpdateSmartAGEnterpriseCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnterpriseCode()) {
    query["EnterpriseCode"] = request.getEnterpriseCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmartAGEnterpriseCode"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmartAGEnterpriseCodeResponse>();
}

/**
 * @summary Associates a Smart Access Gateway (SAG) APP instance with another enterprise code.
 *
 * @param request UpdateSmartAGEnterpriseCodeRequest
 * @return UpdateSmartAGEnterpriseCodeResponse
 */
UpdateSmartAGEnterpriseCodeResponse Client::updateSmartAGEnterpriseCode(const UpdateSmartAGEnterpriseCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmartAGEnterpriseCodeWithOptions(request, runtime);
}

/**
 * @summary Modifies the maximum bandwidth for application acceleration of client accounts on Smart Access Gateway (SAG) app.
 *
 * @description Before you set a maximum bandwidth value for a client, take note of the following rules:
 * *   The maximum bandwidth value of a client cannot exceed that of the SAG app instance to which the client belongs.
 * *   If you have not set maximum bandwidth values for clients that belong to an SAG app instance, and the maximum bandwidth value of the instance is less than 5 Mbit/s, for example, 4 Mbit/s, the maximum bandwidth value of each client that belongs to the SAG app instance is 4 Mbit/s by default.
 * *   If you have not set maximum bandwidth values for clients that belong to an SAG app instance, and the maximum bandwidth value of the instance is 5 Mbit/s or higher, the maximum bandwidth value of each client that belongs to the SAG app instance is 5 Mbit/s by default.
 *
 * @param request UpdateSmartAGUserAccelerateConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmartAGUserAccelerateConfigResponse
 */
UpdateSmartAGUserAccelerateConfigResponse Client::updateSmartAGUserAccelerateConfigWithOptions(const UpdateSmartAGUserAccelerateConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmartAGUserAccelerateConfig"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmartAGUserAccelerateConfigResponse>();
}

/**
 * @summary Modifies the maximum bandwidth for application acceleration of client accounts on Smart Access Gateway (SAG) app.
 *
 * @description Before you set a maximum bandwidth value for a client, take note of the following rules:
 * *   The maximum bandwidth value of a client cannot exceed that of the SAG app instance to which the client belongs.
 * *   If you have not set maximum bandwidth values for clients that belong to an SAG app instance, and the maximum bandwidth value of the instance is less than 5 Mbit/s, for example, 4 Mbit/s, the maximum bandwidth value of each client that belongs to the SAG app instance is 4 Mbit/s by default.
 * *   If you have not set maximum bandwidth values for clients that belong to an SAG app instance, and the maximum bandwidth value of the instance is 5 Mbit/s or higher, the maximum bandwidth value of each client that belongs to the SAG app instance is 5 Mbit/s by default.
 *
 * @param request UpdateSmartAGUserAccelerateConfigRequest
 * @return UpdateSmartAGUserAccelerateConfigResponse
 */
UpdateSmartAGUserAccelerateConfigResponse Client::updateSmartAGUserAccelerateConfig(const UpdateSmartAGUserAccelerateConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmartAGUserAccelerateConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the password that is used to log on to an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can modify passwords that are used to log on to only SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayAdminPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmartAccessGatewayAdminPasswordResponse
 */
UpdateSmartAccessGatewayAdminPasswordResponse Client::updateSmartAccessGatewayAdminPasswordWithOptions(const UpdateSmartAccessGatewayAdminPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossAccount()) {
    query["CrossAccount"] = request.getCrossAccount();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceUid()) {
    query["ResourceUid"] = request.getResourceUid();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmartAccessGatewayAdminPassword"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmartAccessGatewayAdminPasswordResponse>();
}

/**
 * @summary Modifies the password that is used to log on to an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can modify passwords that are used to log on to only SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayAdminPasswordRequest
 * @return UpdateSmartAccessGatewayAdminPasswordResponse
 */
UpdateSmartAccessGatewayAdminPasswordResponse Client::updateSmartAccessGatewayAdminPassword(const UpdateSmartAccessGatewayAdminPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmartAccessGatewayAdminPasswordWithOptions(request, runtime);
}

/**
 * @summary Modifies the BGP configurations of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can modify the BGP configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayBgpRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmartAccessGatewayBgpRouteResponse
 */
UpdateSmartAccessGatewayBgpRouteResponse Client::updateSmartAccessGatewayBgpRouteWithOptions(const UpdateSmartAccessGatewayBgpRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossAccount()) {
    query["CrossAccount"] = request.getCrossAccount();
  }

  if (!!request.hasHoldTime()) {
    query["HoldTime"] = request.getHoldTime();
  }

  if (!!request.hasKeepAlive()) {
    query["KeepAlive"] = request.getKeepAlive();
  }

  if (!!request.hasLocalAs()) {
    query["LocalAs"] = request.getLocalAs();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceUid()) {
    query["ResourceUid"] = request.getResourceUid();
  }

  if (!!request.hasRouterId()) {
    query["RouterId"] = request.getRouterId();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmartAccessGatewayBgpRoute"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmartAccessGatewayBgpRouteResponse>();
}

/**
 * @summary Modifies the BGP configurations of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can modify the BGP configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayBgpRouteRequest
 * @return UpdateSmartAccessGatewayBgpRouteResponse
 */
UpdateSmartAccessGatewayBgpRouteResponse Client::updateSmartAccessGatewayBgpRoute(const UpdateSmartAccessGatewayBgpRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmartAccessGatewayBgpRouteWithOptions(request, runtime);
}

/**
 * @summary Modifies the DNS configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can modify the DNS configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayDnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmartAccessGatewayDnsResponse
 */
UpdateSmartAccessGatewayDnsResponse Client::updateSmartAccessGatewayDnsWithOptions(const UpdateSmartAccessGatewayDnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossAccount()) {
    query["CrossAccount"] = request.getCrossAccount();
  }

  if (!!request.hasMasterDns()) {
    query["MasterDns"] = request.getMasterDns();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceUid()) {
    query["ResourceUid"] = request.getResourceUid();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  if (!!request.hasSlaveDns()) {
    query["SlaveDns"] = request.getSlaveDns();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmartAccessGatewayDns"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmartAccessGatewayDnsResponse>();
}

/**
 * @summary Modifies the DNS configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can modify the DNS configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayDnsRequest
 * @return UpdateSmartAccessGatewayDnsResponse
 */
UpdateSmartAccessGatewayDnsResponse Client::updateSmartAccessGatewayDns(const UpdateSmartAccessGatewayDnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmartAccessGatewayDnsWithOptions(request, runtime);
}

/**
 * @summary Modifies the DNS forwarding configurations for a Smart Access Gateway (SAG) SCG5000 or SCG5000-5G instance. The version of the device must be 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayDnsForwardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmartAccessGatewayDnsForwardResponse
 */
UpdateSmartAccessGatewayDnsForwardResponse Client::updateSmartAccessGatewayDnsForwardWithOptions(const UpdateSmartAccessGatewayDnsForwardRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMasterIp()) {
    query["MasterIp"] = request.getMasterIp();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasOutboundPortIndex()) {
    query["OutboundPortIndex"] = request.getOutboundPortIndex();
  }

  if (!!request.hasOutboundPortName()) {
    query["OutboundPortName"] = request.getOutboundPortName();
  }

  if (!!request.hasOutboundPortType()) {
    query["OutboundPortType"] = request.getOutboundPortType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  if (!!request.hasSlaveIp()) {
    query["SlaveIp"] = request.getSlaveIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmartAccessGatewayDnsForward"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmartAccessGatewayDnsForwardResponse>();
}

/**
 * @summary Modifies the DNS forwarding configurations for a Smart Access Gateway (SAG) SCG5000 or SCG5000-5G instance. The version of the device must be 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayDnsForwardRequest
 * @return UpdateSmartAccessGatewayDnsForwardResponse
 */
UpdateSmartAccessGatewayDnsForwardResponse Client::updateSmartAccessGatewayDnsForward(const UpdateSmartAccessGatewayDnsForwardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmartAccessGatewayDnsForwardWithOptions(request, runtime);
}

/**
 * @summary Modifies the global routing protocol of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can modify the global routing protocol only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayGlobalRouteProtocolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmartAccessGatewayGlobalRouteProtocolResponse
 */
UpdateSmartAccessGatewayGlobalRouteProtocolResponse Client::updateSmartAccessGatewayGlobalRouteProtocolWithOptions(const UpdateSmartAccessGatewayGlobalRouteProtocolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossAccount()) {
    query["CrossAccount"] = request.getCrossAccount();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceUid()) {
    query["ResourceUid"] = request.getResourceUid();
  }

  if (!!request.hasRouteProtocol()) {
    query["RouteProtocol"] = request.getRouteProtocol();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmartAccessGatewayGlobalRouteProtocol"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmartAccessGatewayGlobalRouteProtocolResponse>();
}

/**
 * @summary Modifies the global routing protocol of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can modify the global routing protocol only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayGlobalRouteProtocolRequest
 * @return UpdateSmartAccessGatewayGlobalRouteProtocolResponse
 */
UpdateSmartAccessGatewayGlobalRouteProtocolResponse Client::updateSmartAccessGatewayGlobalRouteProtocol(const UpdateSmartAccessGatewayGlobalRouteProtocolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmartAccessGatewayGlobalRouteProtocolWithOptions(request, runtime);
}

/**
 * @summary Modifies the Open Shortest Path First (OSPF) dynamic routing protocol configuration of a Smart Access Gateway (SAG) device. This operation is supported only for SAG instances that use the SCG5000 or SCG5000-5G device model and run device version 3.4.2 or later.
 *
 * @description You can modify the OSPF dynamic routing protocol configuration only for SCG5000 and SCG5000-5G devices that run device version 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayOspfRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmartAccessGatewayOspfRouteResponse
 */
UpdateSmartAccessGatewayOspfRouteResponse Client::updateSmartAccessGatewayOspfRouteWithOptions(const UpdateSmartAccessGatewayOspfRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAreaId()) {
    query["AreaId"] = request.getAreaId();
  }

  if (!!request.hasAuthenticationType()) {
    query["AuthenticationType"] = request.getAuthenticationType();
  }

  if (!!request.hasCrossAccount()) {
    query["CrossAccount"] = request.getCrossAccount();
  }

  if (!!request.hasDeadTime()) {
    query["DeadTime"] = request.getDeadTime();
  }

  if (!!request.hasHelloTime()) {
    query["HelloTime"] = request.getHelloTime();
  }

  if (!!request.hasInterfaceName()) {
    query["InterfaceName"] = request.getInterfaceName();
  }

  if (!!request.hasMd5Key()) {
    query["Md5Key"] = request.getMd5Key();
  }

  if (!!request.hasMd5KeyId()) {
    query["Md5KeyId"] = request.getMd5KeyId();
  }

  if (!!request.hasNetworks()) {
    query["Networks"] = request.getNetworks();
  }

  if (!!request.hasOspfCost()) {
    query["OspfCost"] = request.getOspfCost();
  }

  if (!!request.hasOspfNetworkType()) {
    query["OspfNetworkType"] = request.getOspfNetworkType();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRedistributeProtocol()) {
    query["RedistributeProtocol"] = request.getRedistributeProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceUid()) {
    query["ResourceUid"] = request.getResourceUid();
  }

  if (!!request.hasRouterId()) {
    query["RouterId"] = request.getRouterId();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmartAccessGatewayOspfRoute"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmartAccessGatewayOspfRouteResponse>();
}

/**
 * @summary Modifies the Open Shortest Path First (OSPF) dynamic routing protocol configuration of a Smart Access Gateway (SAG) device. This operation is supported only for SAG instances that use the SCG5000 or SCG5000-5G device model and run device version 3.4.2 or later.
 *
 * @description You can modify the OSPF dynamic routing protocol configuration only for SCG5000 and SCG5000-5G devices that run device version 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayOspfRouteRequest
 * @return UpdateSmartAccessGatewayOspfRouteResponse
 */
UpdateSmartAccessGatewayOspfRouteResponse Client::updateSmartAccessGatewayOspfRoute(const UpdateSmartAccessGatewayOspfRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmartAccessGatewayOspfRouteWithOptions(request, runtime);
}

/**
 * @summary Modifies the port protocol of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can modify the port protocol only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayPortRouteProtocolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmartAccessGatewayPortRouteProtocolResponse
 */
UpdateSmartAccessGatewayPortRouteProtocolResponse Client::updateSmartAccessGatewayPortRouteProtocolWithOptions(const UpdateSmartAccessGatewayPortRouteProtocolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossAccount()) {
    query["CrossAccount"] = request.getCrossAccount();
  }

  if (!!request.hasPortName()) {
    query["PortName"] = request.getPortName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemoteAs()) {
    query["RemoteAs"] = request.getRemoteAs();
  }

  if (!!request.hasRemoteIp()) {
    query["RemoteIp"] = request.getRemoteIp();
  }

  if (!!request.hasResourceUid()) {
    query["ResourceUid"] = request.getResourceUid();
  }

  if (!!request.hasRouteProtocol()) {
    query["RouteProtocol"] = request.getRouteProtocol();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  if (!!request.hasVlan()) {
    query["Vlan"] = request.getVlan();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmartAccessGatewayPortRouteProtocol"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmartAccessGatewayPortRouteProtocolResponse>();
}

/**
 * @summary Modifies the port protocol of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can modify the port protocol only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayPortRouteProtocolRequest
 * @return UpdateSmartAccessGatewayPortRouteProtocolResponse
 */
UpdateSmartAccessGatewayPortRouteProtocolResponse Client::updateSmartAccessGatewayPortRouteProtocol(const UpdateSmartAccessGatewayPortRouteProtocolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmartAccessGatewayPortRouteProtocolWithOptions(request, runtime);
}

/**
 * @summary Upgrades a SAG device to a later version.
 *
 * @param request UpdateSmartAccessGatewayVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmartAccessGatewayVersionResponse
 */
UpdateSmartAccessGatewayVersionResponse Client::updateSmartAccessGatewayVersionWithOptions(const UpdateSmartAccessGatewayVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasVersionCode()) {
    query["VersionCode"] = request.getVersionCode();
  }

  if (!!request.hasVersionType()) {
    query["VersionType"] = request.getVersionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmartAccessGatewayVersion"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmartAccessGatewayVersionResponse>();
}

/**
 * @summary Upgrades a SAG device to a later version.
 *
 * @param request UpdateSmartAccessGatewayVersionRequest
 * @return UpdateSmartAccessGatewayVersionResponse
 */
UpdateSmartAccessGatewayVersionResponse Client::updateSmartAccessGatewayVersion(const UpdateSmartAccessGatewayVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmartAccessGatewayVersionWithOptions(request, runtime);
}

/**
 * @summary Modifies the Source Network Address Translation (SNAT) configuration of the WAN port on an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can modify the SNAT configuration of the WAN port only on SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayWanSnatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmartAccessGatewayWanSnatResponse
 */
UpdateSmartAccessGatewayWanSnatResponse Client::updateSmartAccessGatewayWanSnatWithOptions(const UpdateSmartAccessGatewayWanSnatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossAccount()) {
    query["CrossAccount"] = request.getCrossAccount();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceUid()) {
    query["ResourceUid"] = request.getResourceUid();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  if (!!request.hasSnat()) {
    query["Snat"] = request.getSnat();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmartAccessGatewayWanSnat"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmartAccessGatewayWanSnatResponse>();
}

/**
 * @summary Modifies the Source Network Address Translation (SNAT) configuration of the WAN port on an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can modify the SNAT configuration of the WAN port only on SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request UpdateSmartAccessGatewayWanSnatRequest
 * @return UpdateSmartAccessGatewayWanSnatResponse
 */
UpdateSmartAccessGatewayWanSnatResponse Client::updateSmartAccessGatewayWanSnat(const UpdateSmartAccessGatewayWanSnatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmartAccessGatewayWanSnatWithOptions(request, runtime);
}

/**
 * @summary Increases the bandwidth of a Smart Access Gateway (SAG) instance.
 *
 * @param request UpgradeSmartAccessGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeSmartAccessGatewayResponse
 */
UpgradeSmartAccessGatewayResponse Client::upgradeSmartAccessGatewayWithOptions(const UpgradeSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasBandWidthSpec()) {
    query["BandWidthSpec"] = request.getBandWidthSpec();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeSmartAccessGateway"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeSmartAccessGatewayResponse>();
}

/**
 * @summary Increases the bandwidth of a Smart Access Gateway (SAG) instance.
 *
 * @param request UpgradeSmartAccessGatewayRequest
 * @return UpgradeSmartAccessGatewayResponse
 */
UpgradeSmartAccessGatewayResponse Client::upgradeSmartAccessGateway(const UpgradeSmartAccessGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeSmartAccessGatewayWithOptions(request, runtime);
}

/**
 * @summary Increases the maximum number of client accounts supported by a Smart Access Gateway (SAG) app instance.
 *
 * @param request UpgradeSmartAccessGatewaySoftwareRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeSmartAccessGatewaySoftwareResponse
 */
UpgradeSmartAccessGatewaySoftwareResponse Client::upgradeSmartAccessGatewaySoftwareWithOptions(const UpgradeSmartAccessGatewaySoftwareRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasDataPlan()) {
    query["DataPlan"] = request.getDataPlan();
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

  if (!!request.hasSmartAGId()) {
    query["SmartAGId"] = request.getSmartAGId();
  }

  if (!!request.hasUserCount()) {
    query["UserCount"] = request.getUserCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeSmartAccessGatewaySoftware"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeSmartAccessGatewaySoftwareResponse>();
}

/**
 * @summary Increases the maximum number of client accounts supported by a Smart Access Gateway (SAG) app instance.
 *
 * @param request UpgradeSmartAccessGatewaySoftwareRequest
 * @return UpgradeSmartAccessGatewaySoftwareResponse
 */
UpgradeSmartAccessGatewaySoftwareResponse Client::upgradeSmartAccessGatewaySoftware(const UpgradeSmartAccessGatewaySoftwareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeSmartAccessGatewaySoftwareWithOptions(request, runtime);
}

/**
 * @summary Queries the BGP configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can query the BGP configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request ViewSmartAccessGatewayBgpRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ViewSmartAccessGatewayBgpRouteResponse
 */
ViewSmartAccessGatewayBgpRouteResponse Client::viewSmartAccessGatewayBgpRouteWithOptions(const ViewSmartAccessGatewayBgpRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossAccount()) {
    query["CrossAccount"] = request.getCrossAccount();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceUid()) {
    query["ResourceUid"] = request.getResourceUid();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ViewSmartAccessGatewayBgpRoute"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ViewSmartAccessGatewayBgpRouteResponse>();
}

/**
 * @summary Queries the BGP configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can query the BGP configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request ViewSmartAccessGatewayBgpRouteRequest
 * @return ViewSmartAccessGatewayBgpRouteResponse
 */
ViewSmartAccessGatewayBgpRouteResponse Client::viewSmartAccessGatewayBgpRoute(const ViewSmartAccessGatewayBgpRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return viewSmartAccessGatewayBgpRouteWithOptions(request, runtime);
}

/**
 * @summary Queries the DNS configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can query the DNS configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request ViewSmartAccessGatewayDnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ViewSmartAccessGatewayDnsResponse
 */
ViewSmartAccessGatewayDnsResponse Client::viewSmartAccessGatewayDnsWithOptions(const ViewSmartAccessGatewayDnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossAccount()) {
    query["CrossAccount"] = request.getCrossAccount();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceUid()) {
    query["ResourceUid"] = request.getResourceUid();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ViewSmartAccessGatewayDns"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ViewSmartAccessGatewayDnsResponse>();
}

/**
 * @summary Queries the DNS configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can query the DNS configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request ViewSmartAccessGatewayDnsRequest
 * @return ViewSmartAccessGatewayDnsResponse
 */
ViewSmartAccessGatewayDnsResponse Client::viewSmartAccessGatewayDns(const ViewSmartAccessGatewayDnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return viewSmartAccessGatewayDnsWithOptions(request, runtime);
}

/**
 * @summary Queries the DNS forwarding list of a Smart Access Gateway (SAG) SCG5000 or SCG5000-5G instance. The version of the device must be 3.4.2 or later.
 *
 * @param request ViewSmartAccessGatewayDnsForwardsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ViewSmartAccessGatewayDnsForwardsResponse
 */
ViewSmartAccessGatewayDnsForwardsResponse Client::viewSmartAccessGatewayDnsForwardsWithOptions(const ViewSmartAccessGatewayDnsForwardsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ViewSmartAccessGatewayDnsForwards"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ViewSmartAccessGatewayDnsForwardsResponse>();
}

/**
 * @summary Queries the DNS forwarding list of a Smart Access Gateway (SAG) SCG5000 or SCG5000-5G instance. The version of the device must be 3.4.2 or later.
 *
 * @param request ViewSmartAccessGatewayDnsForwardsRequest
 * @return ViewSmartAccessGatewayDnsForwardsResponse
 */
ViewSmartAccessGatewayDnsForwardsResponse Client::viewSmartAccessGatewayDnsForwards(const ViewSmartAccessGatewayDnsForwardsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return viewSmartAccessGatewayDnsForwardsWithOptions(request, runtime);
}

/**
 * @summary Queries the global routing protocol of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can query the global protocol only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request ViewSmartAccessGatewayGlobalRouteProtocolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ViewSmartAccessGatewayGlobalRouteProtocolResponse
 */
ViewSmartAccessGatewayGlobalRouteProtocolResponse Client::viewSmartAccessGatewayGlobalRouteProtocolWithOptions(const ViewSmartAccessGatewayGlobalRouteProtocolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossAccount()) {
    query["CrossAccount"] = request.getCrossAccount();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceUid()) {
    query["ResourceUid"] = request.getResourceUid();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ViewSmartAccessGatewayGlobalRouteProtocol"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ViewSmartAccessGatewayGlobalRouteProtocolResponse>();
}

/**
 * @summary Queries the global routing protocol of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can query the global protocol only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request ViewSmartAccessGatewayGlobalRouteProtocolRequest
 * @return ViewSmartAccessGatewayGlobalRouteProtocolResponse
 */
ViewSmartAccessGatewayGlobalRouteProtocolResponse Client::viewSmartAccessGatewayGlobalRouteProtocol(const ViewSmartAccessGatewayGlobalRouteProtocolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return viewSmartAccessGatewayGlobalRouteProtocolWithOptions(request, runtime);
}

/**
 * @summary Queries the BGP configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later and has OSPF enabled.
 *
 * @description You can query the BGP configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later and have OSPF enabled.
 *
 * @param request ViewSmartAccessGatewayOspfRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ViewSmartAccessGatewayOspfRouteResponse
 */
ViewSmartAccessGatewayOspfRouteResponse Client::viewSmartAccessGatewayOspfRouteWithOptions(const ViewSmartAccessGatewayOspfRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossAccount()) {
    query["CrossAccount"] = request.getCrossAccount();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceUid()) {
    query["ResourceUid"] = request.getResourceUid();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ViewSmartAccessGatewayOspfRoute"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ViewSmartAccessGatewayOspfRouteResponse>();
}

/**
 * @summary Queries the BGP configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later and has OSPF enabled.
 *
 * @description You can query the BGP configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later and have OSPF enabled.
 *
 * @param request ViewSmartAccessGatewayOspfRouteRequest
 * @return ViewSmartAccessGatewayOspfRouteResponse
 */
ViewSmartAccessGatewayOspfRouteResponse Client::viewSmartAccessGatewayOspfRoute(const ViewSmartAccessGatewayOspfRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return viewSmartAccessGatewayOspfRouteWithOptions(request, runtime);
}

/**
 * @summary Queries the list of ports on a Smart Access Gateway (SAG) device that have a routable protocol enabled. This operation is applicable to SAG instances that are associated with an SCG5000 or SCG5000-5G device of version 3.4.2 or later.
 *
 * @description You can query the list of ports that have a routable protocol enabled only on SCG5000 and SCG5000-5G devices of version 3.4.2 or later.
 *
 * @param request ViewSmartAccessGatewayPortRouteProtocolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ViewSmartAccessGatewayPortRouteProtocolResponse
 */
ViewSmartAccessGatewayPortRouteProtocolResponse Client::viewSmartAccessGatewayPortRouteProtocolWithOptions(const ViewSmartAccessGatewayPortRouteProtocolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossAccount()) {
    query["CrossAccount"] = request.getCrossAccount();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceUid()) {
    query["ResourceUid"] = request.getResourceUid();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ViewSmartAccessGatewayPortRouteProtocol"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ViewSmartAccessGatewayPortRouteProtocolResponse>();
}

/**
 * @summary Queries the list of ports on a Smart Access Gateway (SAG) device that have a routable protocol enabled. This operation is applicable to SAG instances that are associated with an SCG5000 or SCG5000-5G device of version 3.4.2 or later.
 *
 * @description You can query the list of ports that have a routable protocol enabled only on SCG5000 and SCG5000-5G devices of version 3.4.2 or later.
 *
 * @param request ViewSmartAccessGatewayPortRouteProtocolRequest
 * @return ViewSmartAccessGatewayPortRouteProtocolResponse
 */
ViewSmartAccessGatewayPortRouteProtocolResponse Client::viewSmartAccessGatewayPortRouteProtocol(const ViewSmartAccessGatewayPortRouteProtocolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return viewSmartAccessGatewayPortRouteProtocolWithOptions(request, runtime);
}

/**
 * @summary Queries the route details about an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can query the route details only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request ViewSmartAccessGatewayRoutesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ViewSmartAccessGatewayRoutesResponse
 */
ViewSmartAccessGatewayRoutesResponse Client::viewSmartAccessGatewayRoutesWithOptions(const ViewSmartAccessGatewayRoutesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossAccount()) {
    query["CrossAccount"] = request.getCrossAccount();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceUid()) {
    query["ResourceUid"] = request.getResourceUid();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ViewSmartAccessGatewayRoutes"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ViewSmartAccessGatewayRoutesResponse>();
}

/**
 * @summary Queries the route details about an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can query the route details only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request ViewSmartAccessGatewayRoutesRequest
 * @return ViewSmartAccessGatewayRoutesResponse
 */
ViewSmartAccessGatewayRoutesResponse Client::viewSmartAccessGatewayRoutes(const ViewSmartAccessGatewayRoutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return viewSmartAccessGatewayRoutesWithOptions(request, runtime);
}

/**
 * @summary Queries the Source Network Address Translation (SNAT) configuration of the WAN port on an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can query the SNAT configuration of the WAN port only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request ViewSmartAccessGatewayWanSnatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ViewSmartAccessGatewayWanSnatResponse
 */
ViewSmartAccessGatewayWanSnatResponse Client::viewSmartAccessGatewayWanSnatWithOptions(const ViewSmartAccessGatewayWanSnatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossAccount()) {
    query["CrossAccount"] = request.getCrossAccount();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceUid()) {
    query["ResourceUid"] = request.getResourceUid();
  }

  if (!!request.hasSagInsId()) {
    query["SagInsId"] = request.getSagInsId();
  }

  if (!!request.hasSagSn()) {
    query["SagSn"] = request.getSagSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ViewSmartAccessGatewayWanSnat"},
    {"version" , "2018-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ViewSmartAccessGatewayWanSnatResponse>();
}

/**
 * @summary Queries the Source Network Address Translation (SNAT) configuration of the WAN port on an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
 *
 * @description You can query the SNAT configuration of the WAN port only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
 *
 * @param request ViewSmartAccessGatewayWanSnatRequest
 * @return ViewSmartAccessGatewayWanSnatResponse
 */
ViewSmartAccessGatewayWanSnatResponse Client::viewSmartAccessGatewayWanSnat(const ViewSmartAccessGatewayWanSnatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return viewSmartAccessGatewayWanSnatWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Smartag20180313