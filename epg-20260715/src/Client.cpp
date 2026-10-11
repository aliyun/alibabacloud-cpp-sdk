#include <darabonba/Core.hpp>
#include <alibabacloud/EPG20260715.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::EPG20260715::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace EPG20260715
{

AlibabaCloud::EPG20260715::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("epg", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 向出口代理地址池添加IP地址
 *
 * @param request AddIpAddressesToEgressProxyIpPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddIpAddressesToEgressProxyIpPoolResponse
 */
AddIpAddressesToEgressProxyIpPoolResponse Client::addIpAddressesToEgressProxyIpPoolWithOptions(const AddIpAddressesToEgressProxyIpPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyIpPoolId()) {
    body["EgressProxyIpPoolId"] = request.getEgressProxyIpPoolId();
  }

  json bodyFlat = {};
  if (!!request.hasZoneMappings()) {
    bodyFlat["ZoneMappings"] = request.getZoneMappings();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddIpAddressesToEgressProxyIpPool"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddIpAddressesToEgressProxyIpPoolResponse>();
}

/**
 * @summary 向出口代理地址池添加IP地址
 *
 * @param request AddIpAddressesToEgressProxyIpPoolRequest
 * @return AddIpAddressesToEgressProxyIpPoolResponse
 */
AddIpAddressesToEgressProxyIpPoolResponse Client::addIpAddressesToEgressProxyIpPool(const AddIpAddressesToEgressProxyIpPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addIpAddressesToEgressProxyIpPoolWithOptions(request, runtime);
}

/**
 * @summary Attaches egress proxy rule groups to an egress proxy configuration.
 *
 * @description When you call this operation to attach egress proxy rule groups to an egress proxy configuration, take note of the following items:
 * - This operation attaches one or more egress proxy rule groups to a specified egress proxy configuration and specifies the priority of each egress proxy rule group in the egress proxy configuration.
 * - The **AttachEgressProxyRuleGroupsToConfiguration** operation is asynchronous. After you send the request, the system returns a response, but the egress proxy rule groups are not yet attached. The attachment task is still running in the background. You can call GetEgressProxyConfigurationAttribute to query the status of the egress proxy configuration:
 *     - If the egress proxy configuration is in the **Configuring** state, the configuration is being updated.
 *     - If the egress proxy configuration is in the **Available** state, the attachment is successful.
 *
 * @param request AttachEgressProxyRuleGroupsToConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachEgressProxyRuleGroupsToConfigurationResponse
 */
AttachEgressProxyRuleGroupsToConfigurationResponse Client::attachEgressProxyRuleGroupsToConfigurationWithOptions(const AttachEgressProxyRuleGroupsToConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyConfigurationId()) {
    body["EgressProxyConfigurationId"] = request.getEgressProxyConfigurationId();
  }

  json bodyFlat = {};
  if (!!request.hasEgressProxyRuleGroups()) {
    bodyFlat["EgressProxyRuleGroups"] = request.getEgressProxyRuleGroups();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AttachEgressProxyRuleGroupsToConfiguration"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachEgressProxyRuleGroupsToConfigurationResponse>();
}

/**
 * @summary Attaches egress proxy rule groups to an egress proxy configuration.
 *
 * @description When you call this operation to attach egress proxy rule groups to an egress proxy configuration, take note of the following items:
 * - This operation attaches one or more egress proxy rule groups to a specified egress proxy configuration and specifies the priority of each egress proxy rule group in the egress proxy configuration.
 * - The **AttachEgressProxyRuleGroupsToConfiguration** operation is asynchronous. After you send the request, the system returns a response, but the egress proxy rule groups are not yet attached. The attachment task is still running in the background. You can call GetEgressProxyConfigurationAttribute to query the status of the egress proxy configuration:
 *     - If the egress proxy configuration is in the **Configuring** state, the configuration is being updated.
 *     - If the egress proxy configuration is in the **Available** state, the attachment is successful.
 *
 * @param request AttachEgressProxyRuleGroupsToConfigurationRequest
 * @return AttachEgressProxyRuleGroupsToConfigurationResponse
 */
AttachEgressProxyRuleGroupsToConfigurationResponse Client::attachEgressProxyRuleGroupsToConfiguration(const AttachEgressProxyRuleGroupsToConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachEgressProxyRuleGroupsToConfigurationWithOptions(request, runtime);
}

/**
 * @summary Creates an egress proxy configuration.
 *
 * @description When you call this operation to create an egress proxy configuration, take note of the following items:
 * - The **CreateEgressProxyConfiguration** operation is asynchronous. After you call this operation, the system returns the ID of the egress proxy configuration, but the configuration is not yet created. The creation task is still running in the background. You can call GetEgressProxyConfigurationAttribute to query the status of the egress proxy configuration:
 *     - If the egress proxy configuration is in the **Provisioning** state, the configuration is being created.
 *     - If the egress proxy configuration is in the **Available** state, the configuration is created.
 *
 * @param request CreateEgressProxyConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEgressProxyConfigurationResponse
 */
CreateEgressProxyConfigurationResponse Client::createEgressProxyConfigurationWithOptions(const CreateEgressProxyConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  json bodyFlat = {};
  if (!!request.hasDefaultRulePhaseActions()) {
    bodyFlat["DefaultRulePhaseActions"] = request.getDefaultRulePhaseActions();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyConfigurationName()) {
    body["EgressProxyConfigurationName"] = request.getEgressProxyConfigurationName();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateEgressProxyConfiguration"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEgressProxyConfigurationResponse>();
}

/**
 * @summary Creates an egress proxy configuration.
 *
 * @description When you call this operation to create an egress proxy configuration, take note of the following items:
 * - The **CreateEgressProxyConfiguration** operation is asynchronous. After you call this operation, the system returns the ID of the egress proxy configuration, but the configuration is not yet created. The creation task is still running in the background. You can call GetEgressProxyConfigurationAttribute to query the status of the egress proxy configuration:
 *     - If the egress proxy configuration is in the **Provisioning** state, the configuration is being created.
 *     - If the egress proxy configuration is in the **Available** state, the configuration is created.
 *
 * @param request CreateEgressProxyConfigurationRequest
 * @return CreateEgressProxyConfigurationResponse
 */
CreateEgressProxyConfigurationResponse Client::createEgressProxyConfiguration(const CreateEgressProxyConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEgressProxyConfigurationWithOptions(request, runtime);
}

/**
 * @summary Creates an egress proxy gateway instance.
 *
 * @description The **CreateEgressProxyGateway** operation is asynchronous. After you call this operation, the system returns an instance ID, but the egress proxy gateway instance is not yet created and the creation task is still running in the background. You can call GetEgressProxyGatewayAttribute to query the creation status of the egress proxy gateway instance:
 * - When the egress proxy gateway instance is in the **Provisioning** state, the instance is being created.
 * - When the egress proxy gateway instance is in the **Active** state, the instance is created.
 *
 * @param request CreateEgressProxyGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEgressProxyGatewayResponse
 */
CreateEgressProxyGatewayResponse Client::createEgressProxyGatewayWithOptions(const CreateEgressProxyGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyConfigurationId()) {
    body["EgressProxyConfigurationId"] = request.getEgressProxyConfigurationId();
  }

  if (!!request.hasEgressProxyGatewayName()) {
    body["EgressProxyGatewayName"] = request.getEgressProxyGatewayName();
  }

  json bodyFlat = {};
  if (!!request.hasListenerProperties()) {
    bodyFlat["ListenerProperties"] = request.getListenerProperties();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  if (!!request.hasTlsInterceptProperties()) {
    bodyFlat["TlsInterceptProperties"] = request.getTlsInterceptProperties();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneMappings()) {
    bodyFlat["ZoneMappings"] = request.getZoneMappings();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateEgressProxyGateway"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEgressProxyGatewayResponse>();
}

/**
 * @summary Creates an egress proxy gateway instance.
 *
 * @description The **CreateEgressProxyGateway** operation is asynchronous. After you call this operation, the system returns an instance ID, but the egress proxy gateway instance is not yet created and the creation task is still running in the background. You can call GetEgressProxyGatewayAttribute to query the creation status of the egress proxy gateway instance:
 * - When the egress proxy gateway instance is in the **Provisioning** state, the instance is being created.
 * - When the egress proxy gateway instance is in the **Active** state, the instance is created.
 *
 * @param request CreateEgressProxyGatewayRequest
 * @return CreateEgressProxyGatewayResponse
 */
CreateEgressProxyGatewayResponse Client::createEgressProxyGateway(const CreateEgressProxyGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEgressProxyGatewayWithOptions(request, runtime);
}

/**
 * @summary 创建出口代理地址池
 *
 * @param request CreateEgressProxyIpPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEgressProxyIpPoolResponse
 */
CreateEgressProxyIpPoolResponse Client::createEgressProxyIpPoolWithOptions(const CreateEgressProxyIpPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddressType()) {
    body["AddressType"] = request.getAddressType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyGatewayId()) {
    body["EgressProxyGatewayId"] = request.getEgressProxyGatewayId();
  }

  if (!!request.hasEgressProxyIpPoolName()) {
    body["EgressProxyIpPoolName"] = request.getEgressProxyIpPoolName();
  }

  if (!!request.hasHashFactor()) {
    body["HashFactor"] = request.getHashFactor();
  }

  if (!!request.hasHashHeaderName()) {
    body["HashHeaderName"] = request.getHashHeaderName();
  }

  if (!!request.hasScheduler()) {
    body["Scheduler"] = request.getScheduler();
  }

  json bodyFlat = {};
  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  if (!!request.hasZoneMappings()) {
    bodyFlat["ZoneMappings"] = request.getZoneMappings();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateEgressProxyIpPool"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEgressProxyIpPoolResponse>();
}

/**
 * @summary 创建出口代理地址池
 *
 * @param request CreateEgressProxyIpPoolRequest
 * @return CreateEgressProxyIpPoolResponse
 */
CreateEgressProxyIpPoolResponse Client::createEgressProxyIpPool(const CreateEgressProxyIpPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEgressProxyIpPoolWithOptions(request, runtime);
}

/**
 * @summary Creates an egress rule group.
 *
 * @description When you call this operation to create an egress rule group, take note of the following items:
 * - You can create egress rules in batches by phase (PreDns, PreRequest, and PostResponse) when you create the rule group.
 * - Within the same phase of a rule group, rule priorities (Priority) must be unique. Valid values: 1 to 1000. A smaller value indicates a higher priority.
 * - This operation is asynchronous. After you call this operation, the system returns the ID of the egress rule group, but the rule group is not yet created. The creation task is still running in the background. You can call GetEgressProxyRuleGroupAttribute to query the status of the egress rule group:
 *     - If the egress rule group is in the **Provisioning** state, the rule group is being created.
 *     - If the egress rule group is in the **Available** state, the rule group is created.
 *
 * @param request CreateEgressProxyRuleGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEgressProxyRuleGroupResponse
 */
CreateEgressProxyRuleGroupResponse Client::createEgressProxyRuleGroupWithOptions(const CreateEgressProxyRuleGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyIpPoolId()) {
    body["EgressProxyIpPoolId"] = request.getEgressProxyIpPoolId();
  }

  if (!!request.hasEgressProxyRuleGroupName()) {
    body["EgressProxyRuleGroupName"] = request.getEgressProxyRuleGroupName();
  }

  json bodyFlat = {};
  if (!!request.hasEgressProxyRules()) {
    bodyFlat["EgressProxyRules"] = request.getEgressProxyRules();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateEgressProxyRuleGroup"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEgressProxyRuleGroupResponse>();
}

/**
 * @summary Creates an egress rule group.
 *
 * @description When you call this operation to create an egress rule group, take note of the following items:
 * - You can create egress rules in batches by phase (PreDns, PreRequest, and PostResponse) when you create the rule group.
 * - Within the same phase of a rule group, rule priorities (Priority) must be unique. Valid values: 1 to 1000. A smaller value indicates a higher priority.
 * - This operation is asynchronous. After you call this operation, the system returns the ID of the egress rule group, but the rule group is not yet created. The creation task is still running in the background. You can call GetEgressProxyRuleGroupAttribute to query the status of the egress rule group:
 *     - If the egress rule group is in the **Provisioning** state, the rule group is being created.
 *     - If the egress rule group is in the **Available** state, the rule group is created.
 *
 * @param request CreateEgressProxyRuleGroupRequest
 * @return CreateEgressProxyRuleGroupResponse
 */
CreateEgressProxyRuleGroupResponse Client::createEgressProxyRuleGroup(const CreateEgressProxyRuleGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEgressProxyRuleGroupWithOptions(request, runtime);
}

/**
 * @summary Creates multiple egress proxy rules.
 *
 * @description When you call this operation to create multiple egress proxy rules in a specified egress rule group, note the following items:
 * - Egress rules are created in groups based on the effective phase (PreDns, PreRequest, or PostResponse).
 * - Within the same effective phase of an egress rule group, the priority of rules must be unique.
 * - Valid values for the priority: 1 to 1000. A smaller value indicates a higher priority.
 * - This operation is asynchronous. After you call this operation, the system returns the IDs of the created egress rules, but the rules are not yet created. The creation task is still running in the background. You can call the GetEgressProxyRuleGroupAttribute operation to query the status of the egress rule group:
 *     - If the egress rule group is in the **Provisioning** state, the rules are being created.
 *     - If the egress rule group is in the **Available** state, the rules are created.
 *
 * @param request CreateEgressProxyRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEgressProxyRulesResponse
 */
CreateEgressProxyRulesResponse Client::createEgressProxyRulesWithOptions(const CreateEgressProxyRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyRuleGroupId()) {
    body["EgressProxyRuleGroupId"] = request.getEgressProxyRuleGroupId();
  }

  json bodyFlat = {};
  if (!!request.hasEgressProxyRules()) {
    bodyFlat["EgressProxyRules"] = request.getEgressProxyRules();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateEgressProxyRules"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEgressProxyRulesResponse>();
}

/**
 * @summary Creates multiple egress proxy rules.
 *
 * @description When you call this operation to create multiple egress proxy rules in a specified egress rule group, note the following items:
 * - Egress rules are created in groups based on the effective phase (PreDns, PreRequest, or PostResponse).
 * - Within the same effective phase of an egress rule group, the priority of rules must be unique.
 * - Valid values for the priority: 1 to 1000. A smaller value indicates a higher priority.
 * - This operation is asynchronous. After you call this operation, the system returns the IDs of the created egress rules, but the rules are not yet created. The creation task is still running in the background. You can call the GetEgressProxyRuleGroupAttribute operation to query the status of the egress rule group:
 *     - If the egress rule group is in the **Provisioning** state, the rules are being created.
 *     - If the egress rule group is in the **Available** state, the rules are created.
 *
 * @param request CreateEgressProxyRulesRequest
 * @return CreateEgressProxyRulesResponse
 */
CreateEgressProxyRulesResponse Client::createEgressProxyRules(const CreateEgressProxyRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEgressProxyRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes an egress proxy configuration.
 *
 * @param request DeleteEgressProxyConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEgressProxyConfigurationResponse
 */
DeleteEgressProxyConfigurationResponse Client::deleteEgressProxyConfigurationWithOptions(const DeleteEgressProxyConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyConfigurationId()) {
    body["EgressProxyConfigurationId"] = request.getEgressProxyConfigurationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteEgressProxyConfiguration"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEgressProxyConfigurationResponse>();
}

/**
 * @summary Deletes an egress proxy configuration.
 *
 * @param request DeleteEgressProxyConfigurationRequest
 * @return DeleteEgressProxyConfigurationResponse
 */
DeleteEgressProxyConfigurationResponse Client::deleteEgressProxyConfiguration(const DeleteEgressProxyConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEgressProxyConfigurationWithOptions(request, runtime);
}

/**
 * @summary Deletes an egress proxy gateway instance.
 *
 * @description ## Request description
 * - `EgressProxyGatewayId` is a required parameter that specifies the egress proxy gateway instance ID to delete.
 * - `ClientToken` is an optional parameter used to ensure the idempotence of the request.
 *
 * @param request DeleteEgressProxyGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEgressProxyGatewayResponse
 */
DeleteEgressProxyGatewayResponse Client::deleteEgressProxyGatewayWithOptions(const DeleteEgressProxyGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyGatewayId()) {
    body["EgressProxyGatewayId"] = request.getEgressProxyGatewayId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteEgressProxyGateway"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEgressProxyGatewayResponse>();
}

/**
 * @summary Deletes an egress proxy gateway instance.
 *
 * @description ## Request description
 * - `EgressProxyGatewayId` is a required parameter that specifies the egress proxy gateway instance ID to delete.
 * - `ClientToken` is an optional parameter used to ensure the idempotence of the request.
 *
 * @param request DeleteEgressProxyGatewayRequest
 * @return DeleteEgressProxyGatewayResponse
 */
DeleteEgressProxyGatewayResponse Client::deleteEgressProxyGateway(const DeleteEgressProxyGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEgressProxyGatewayWithOptions(request, runtime);
}

/**
 * @summary Deletes an egress proxy IP address pool.
 *
 * @description ## Request description
 * - **EgressProxyIpPoolId** is a required parameter that specifies the ID of the egress proxy IP address pool to delete.
 * - **ClientToken** is an optional parameter used to ensure the idempotence of the request.
 * - **DryRun** is an optional parameter. Default value: `false`. If you set this parameter to `true`, the system only prechecks the request and does not perform the delete operation.
 *
 * @param request DeleteEgressProxyIpPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEgressProxyIpPoolResponse
 */
DeleteEgressProxyIpPoolResponse Client::deleteEgressProxyIpPoolWithOptions(const DeleteEgressProxyIpPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyIpPoolId()) {
    body["EgressProxyIpPoolId"] = request.getEgressProxyIpPoolId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteEgressProxyIpPool"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEgressProxyIpPoolResponse>();
}

/**
 * @summary Deletes an egress proxy IP address pool.
 *
 * @description ## Request description
 * - **EgressProxyIpPoolId** is a required parameter that specifies the ID of the egress proxy IP address pool to delete.
 * - **ClientToken** is an optional parameter used to ensure the idempotence of the request.
 * - **DryRun** is an optional parameter. Default value: `false`. If you set this parameter to `true`, the system only prechecks the request and does not perform the delete operation.
 *
 * @param request DeleteEgressProxyIpPoolRequest
 * @return DeleteEgressProxyIpPoolResponse
 */
DeleteEgressProxyIpPoolResponse Client::deleteEgressProxyIpPool(const DeleteEgressProxyIpPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEgressProxyIpPoolWithOptions(request, runtime);
}

/**
 * @summary Deletes an egress proxy rule group.
 *
 * @param request DeleteEgressProxyRuleGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEgressProxyRuleGroupResponse
 */
DeleteEgressProxyRuleGroupResponse Client::deleteEgressProxyRuleGroupWithOptions(const DeleteEgressProxyRuleGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyRuleGroupId()) {
    body["EgressProxyRuleGroupId"] = request.getEgressProxyRuleGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteEgressProxyRuleGroup"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEgressProxyRuleGroupResponse>();
}

/**
 * @summary Deletes an egress proxy rule group.
 *
 * @param request DeleteEgressProxyRuleGroupRequest
 * @return DeleteEgressProxyRuleGroupResponse
 */
DeleteEgressProxyRuleGroupResponse Client::deleteEgressProxyRuleGroup(const DeleteEgressProxyRuleGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEgressProxyRuleGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple egress proxy rules.
 *
 * @param request DeleteEgressProxyRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEgressProxyRulesResponse
 */
DeleteEgressProxyRulesResponse Client::deleteEgressProxyRulesWithOptions(const DeleteEgressProxyRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyRuleGroupId()) {
    body["EgressProxyRuleGroupId"] = request.getEgressProxyRuleGroupId();
  }

  json bodyFlat = {};
  if (!!request.hasEgressProxyRuleIds()) {
    bodyFlat["EgressProxyRuleIds"] = request.getEgressProxyRuleIds();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteEgressProxyRules"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEgressProxyRulesResponse>();
}

/**
 * @summary Deletes multiple egress proxy rules.
 *
 * @param request DeleteEgressProxyRulesRequest
 * @return DeleteEgressProxyRulesResponse
 */
DeleteEgressProxyRulesResponse Client::deleteEgressProxyRules(const DeleteEgressProxyRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEgressProxyRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the available regions.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2026-07-15"},
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
 * @summary Queries the available regions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries zones.
 *
 * @param request DescribeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZonesWithOptions(const DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeZones"},
    {"version" , "2026-07-15"},
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
 * @summary Queries zones.
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Disassociates egress proxy rule groups from an egress proxy configuration.
 *
 * @description When you call this operation to disassociate egress proxy rule groups from an egress proxy configuration, take note of the following items:
 * - This operation disassociates one or more egress proxy rule groups from a specified egress proxy configuration. After the disassociation, these egress proxy rule groups no longer take effect in the egress proxy configuration.
 * - The **DetachEgressProxyRuleGroupsFromConfiguration** operation is asynchronous. After you send a request, the system returns a response, but the egress proxy rule groups are not yet disassociated. The disassociation task is still running in the background. You can call the GetEgressProxyConfigurationAttribute operation to query the status of the egress proxy configuration:
 *     - If the egress proxy configuration is in the **Configuring** state, the configuration is being updated.
 *     - If the egress proxy configuration is in the **Available** state, the disassociation is successful.
 *
 * @param request DetachEgressProxyRuleGroupsFromConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachEgressProxyRuleGroupsFromConfigurationResponse
 */
DetachEgressProxyRuleGroupsFromConfigurationResponse Client::detachEgressProxyRuleGroupsFromConfigurationWithOptions(const DetachEgressProxyRuleGroupsFromConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyConfigurationId()) {
    body["EgressProxyConfigurationId"] = request.getEgressProxyConfigurationId();
  }

  json bodyFlat = {};
  if (!!request.hasEgressProxyRuleGroupIds()) {
    bodyFlat["EgressProxyRuleGroupIds"] = request.getEgressProxyRuleGroupIds();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DetachEgressProxyRuleGroupsFromConfiguration"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachEgressProxyRuleGroupsFromConfigurationResponse>();
}

/**
 * @summary Disassociates egress proxy rule groups from an egress proxy configuration.
 *
 * @description When you call this operation to disassociate egress proxy rule groups from an egress proxy configuration, take note of the following items:
 * - This operation disassociates one or more egress proxy rule groups from a specified egress proxy configuration. After the disassociation, these egress proxy rule groups no longer take effect in the egress proxy configuration.
 * - The **DetachEgressProxyRuleGroupsFromConfiguration** operation is asynchronous. After you send a request, the system returns a response, but the egress proxy rule groups are not yet disassociated. The disassociation task is still running in the background. You can call the GetEgressProxyConfigurationAttribute operation to query the status of the egress proxy configuration:
 *     - If the egress proxy configuration is in the **Configuring** state, the configuration is being updated.
 *     - If the egress proxy configuration is in the **Available** state, the disassociation is successful.
 *
 * @param request DetachEgressProxyRuleGroupsFromConfigurationRequest
 * @return DetachEgressProxyRuleGroupsFromConfigurationResponse
 */
DetachEgressProxyRuleGroupsFromConfigurationResponse Client::detachEgressProxyRuleGroupsFromConfiguration(const DetachEgressProxyRuleGroupsFromConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachEgressProxyRuleGroupsFromConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an egress proxy configuration.
 *
 * @description **GetEgressProxyConfigurationAttribute** is a synchronous API operation that returns the details of a specified egress proxy configuration in real time after the call. You can determine the current status of the egress proxy configuration based on the returned **Status**. For example, **Provisioning** indicates that the configuration is being created, and **Available** indicates that the configuration is created and available.
 *
 * @param request GetEgressProxyConfigurationAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEgressProxyConfigurationAttributeResponse
 */
GetEgressProxyConfigurationAttributeResponse Client::getEgressProxyConfigurationAttributeWithOptions(const GetEgressProxyConfigurationAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEgressProxyConfigurationId()) {
    body["EgressProxyConfigurationId"] = request.getEgressProxyConfigurationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetEgressProxyConfigurationAttribute"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEgressProxyConfigurationAttributeResponse>();
}

/**
 * @summary Queries the details of an egress proxy configuration.
 *
 * @description **GetEgressProxyConfigurationAttribute** is a synchronous API operation that returns the details of a specified egress proxy configuration in real time after the call. You can determine the current status of the egress proxy configuration based on the returned **Status**. For example, **Provisioning** indicates that the configuration is being created, and **Available** indicates that the configuration is created and available.
 *
 * @param request GetEgressProxyConfigurationAttributeRequest
 * @return GetEgressProxyConfigurationAttributeResponse
 */
GetEgressProxyConfigurationAttributeResponse Client::getEgressProxyConfigurationAttribute(const GetEgressProxyConfigurationAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEgressProxyConfigurationAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an egress proxy gateway instance.
 *
 * @description **GetEgressProxyGatewayAttribute** is a synchronous operation that returns the current attribute information of the egress proxy gateway in real time after it is called.
 * You can determine the current status of the egress proxy gateway based on the returned **Status**. For example, **Provisioning** indicates that the instance is being created, **Active** indicates that the instance is running, **Configuring** indicates that the instance is being reconfigured, and **Inactive** indicates that the instance is stopped.
 *
 * @param request GetEgressProxyGatewayAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEgressProxyGatewayAttributeResponse
 */
GetEgressProxyGatewayAttributeResponse Client::getEgressProxyGatewayAttributeWithOptions(const GetEgressProxyGatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEgressProxyGatewayId()) {
    body["EgressProxyGatewayId"] = request.getEgressProxyGatewayId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetEgressProxyGatewayAttribute"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEgressProxyGatewayAttributeResponse>();
}

/**
 * @summary Queries the details of an egress proxy gateway instance.
 *
 * @description **GetEgressProxyGatewayAttribute** is a synchronous operation that returns the current attribute information of the egress proxy gateway in real time after it is called.
 * You can determine the current status of the egress proxy gateway based on the returned **Status**. For example, **Provisioning** indicates that the instance is being created, **Active** indicates that the instance is running, **Configuring** indicates that the instance is being reconfigured, and **Inactive** indicates that the instance is stopped.
 *
 * @param request GetEgressProxyGatewayAttributeRequest
 * @return GetEgressProxyGatewayAttributeResponse
 */
GetEgressProxyGatewayAttributeResponse Client::getEgressProxyGatewayAttribute(const GetEgressProxyGatewayAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEgressProxyGatewayAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询出口代理地址池详细信息
 *
 * @description ## 请求说明
 * 通过提供`EgressProxyIpPoolId`，可以获取到与该ID关联的出口代理IP池的所有相关信息，包括但不限于名称、描述、网络类型等。请确保提供的`EgressProxyIpPoolId`是有效的且属于您的账户。
 *
 * @param request GetEgressProxyIpPoolAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEgressProxyIpPoolAttributeResponse
 */
GetEgressProxyIpPoolAttributeResponse Client::getEgressProxyIpPoolAttributeWithOptions(const GetEgressProxyIpPoolAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEgressProxyIpPoolId()) {
    body["EgressProxyIpPoolId"] = request.getEgressProxyIpPoolId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetEgressProxyIpPoolAttribute"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEgressProxyIpPoolAttributeResponse>();
}

/**
 * @summary 查询出口代理地址池详细信息
 *
 * @description ## 请求说明
 * 通过提供`EgressProxyIpPoolId`，可以获取到与该ID关联的出口代理IP池的所有相关信息，包括但不限于名称、描述、网络类型等。请确保提供的`EgressProxyIpPoolId`是有效的且属于您的账户。
 *
 * @param request GetEgressProxyIpPoolAttributeRequest
 * @return GetEgressProxyIpPoolAttributeResponse
 */
GetEgressProxyIpPoolAttributeResponse Client::getEgressProxyIpPoolAttribute(const GetEgressProxyIpPoolAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEgressProxyIpPoolAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询出口代理规则组详细信息
 *
 * @param request GetEgressProxyRuleGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEgressProxyRuleGroupAttributeResponse
 */
GetEgressProxyRuleGroupAttributeResponse Client::getEgressProxyRuleGroupAttributeWithOptions(const GetEgressProxyRuleGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEgressProxyRuleGroupId()) {
    body["EgressProxyRuleGroupId"] = request.getEgressProxyRuleGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetEgressProxyRuleGroupAttribute"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEgressProxyRuleGroupAttributeResponse>();
}

/**
 * @summary 查询出口代理规则组详细信息
 *
 * @param request GetEgressProxyRuleGroupAttributeRequest
 * @return GetEgressProxyRuleGroupAttributeResponse
 */
GetEgressProxyRuleGroupAttributeResponse Client::getEgressProxyRuleGroupAttribute(const GetEgressProxyRuleGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEgressProxyRuleGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the list of egress proxy configurations.
 *
 * @description **ListEgressProxyConfigurations** is a synchronous API operation that returns a list of egress proxy configurations that meet the specified conditions in real time after the call. The returned results are paginated by using **MaxResults** and **NextToken**:
 * - If **NextToken** is empty, all data has been returned.
 * - If **NextToken** has a value, you can use it as the **NextToken** for the next call to continue the query.
 *
 * @param request ListEgressProxyConfigurationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEgressProxyConfigurationsResponse
 */
ListEgressProxyConfigurationsResponse Client::listEgressProxyConfigurationsWithOptions(const ListEgressProxyConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasEgressProxyConfigurationIds()) {
    bodyFlat["EgressProxyConfigurationIds"] = request.getEgressProxyConfigurationIds();
  }

  if (!!request.hasEgressProxyConfigurationNames()) {
    bodyFlat["EgressProxyConfigurationNames"] = request.getEgressProxyConfigurationNames();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.getSkip();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListEgressProxyConfigurations"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEgressProxyConfigurationsResponse>();
}

/**
 * @summary Queries the list of egress proxy configurations.
 *
 * @description **ListEgressProxyConfigurations** is a synchronous API operation that returns a list of egress proxy configurations that meet the specified conditions in real time after the call. The returned results are paginated by using **MaxResults** and **NextToken**:
 * - If **NextToken** is empty, all data has been returned.
 * - If **NextToken** has a value, you can use it as the **NextToken** for the next call to continue the query.
 *
 * @param request ListEgressProxyConfigurationsRequest
 * @return ListEgressProxyConfigurationsResponse
 */
ListEgressProxyConfigurationsResponse Client::listEgressProxyConfigurations(const ListEgressProxyConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEgressProxyConfigurationsWithOptions(request, runtime);
}

/**
 * @summary 查询出口代理网关列表
 *
 * @description ## 请求说明
 * - `MaxResults` 参数用于指定每页返回的最大结果数量，默认值为20，最大可设置为1000。
 * - `NextToken` 参数用于分页查询时获取下一页的数据。
 * - `Skip` 参数用于跳过指定数量的结果，默认值为0。
 * - `VpcIds` 参数允许通过指定一个或多个VPC ID来过滤查询结果，一次最多支持20个ID。
 * - `EgressProxyGatewayIds` 和 `EgressProxyGatewayNames` 分别允许通过实例ID和实例名称来过滤查询结果，每次请求中每个参数最多支持20个值。
 * - `Status` 参数可用于根据实例状态（如Active, Inactive等）进行过滤。
 * - `ResourceGroupId` 参数允许按资源组ID过滤查询结果。
 * - `Tags` 参数支持基于标签键值对的过滤条件，可以用来更精确地定位特定资源。
 * 请注意，所有数组类型的参数在实际使用时需要按照API的具体要求格式化输入数据。
 *
 * @param request ListEgressProxyGatewaysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEgressProxyGatewaysResponse
 */
ListEgressProxyGatewaysResponse Client::listEgressProxyGatewaysWithOptions(const ListEgressProxyGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasEgressProxyConfigurationIds()) {
    bodyFlat["EgressProxyConfigurationIds"] = request.getEgressProxyConfigurationIds();
  }

  if (!!request.hasEgressProxyGatewayIds()) {
    bodyFlat["EgressProxyGatewayIds"] = request.getEgressProxyGatewayIds();
  }

  if (!!request.hasEgressProxyGatewayNames()) {
    bodyFlat["EgressProxyGatewayNames"] = request.getEgressProxyGatewayNames();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.getSkip();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  if (!!request.hasVpcIds()) {
    bodyFlat["VpcIds"] = request.getVpcIds();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListEgressProxyGateways"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEgressProxyGatewaysResponse>();
}

/**
 * @summary 查询出口代理网关列表
 *
 * @description ## 请求说明
 * - `MaxResults` 参数用于指定每页返回的最大结果数量，默认值为20，最大可设置为1000。
 * - `NextToken` 参数用于分页查询时获取下一页的数据。
 * - `Skip` 参数用于跳过指定数量的结果，默认值为0。
 * - `VpcIds` 参数允许通过指定一个或多个VPC ID来过滤查询结果，一次最多支持20个ID。
 * - `EgressProxyGatewayIds` 和 `EgressProxyGatewayNames` 分别允许通过实例ID和实例名称来过滤查询结果，每次请求中每个参数最多支持20个值。
 * - `Status` 参数可用于根据实例状态（如Active, Inactive等）进行过滤。
 * - `ResourceGroupId` 参数允许按资源组ID过滤查询结果。
 * - `Tags` 参数支持基于标签键值对的过滤条件，可以用来更精确地定位特定资源。
 * 请注意，所有数组类型的参数在实际使用时需要按照API的具体要求格式化输入数据。
 *
 * @param request ListEgressProxyGatewaysRequest
 * @return ListEgressProxyGatewaysResponse
 */
ListEgressProxyGatewaysResponse Client::listEgressProxyGateways(const ListEgressProxyGatewaysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEgressProxyGatewaysWithOptions(request, runtime);
}

/**
 * @summary 查询出口代理地址池列表
 *
 * @description ## 请求说明
 * - `MaxResults` 参数用于控制每页返回的结果数量，默认为20，最大值为1000。
 * - `NextToken` 用于分页查询时获取下一页的数据。
 * - `Skip` 参数用于跳过指定数量的记录，默认值为0。
 * - 可以通过 `EgressProxyGatewayIds`, `EgressProxyIpPoolIds`, `EgressProxyIpPoolNames` 等参数进行过滤查询。
 * - `Status` 参数支持按状态过滤结果。
 * - `Tags` 参数可用于更细粒度的资源筛选。
 * - 返回结果中包含 `NextToken` 以便于继续请求后续页面的数据。
 * - `CreateTime` 字段表示的是UTC时间格式。
 *
 * @param request ListEgressProxyIpPoolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEgressProxyIpPoolsResponse
 */
ListEgressProxyIpPoolsResponse Client::listEgressProxyIpPoolsWithOptions(const ListEgressProxyIpPoolsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasEgressProxyGatewayIds()) {
    bodyFlat["EgressProxyGatewayIds"] = request.getEgressProxyGatewayIds();
  }

  if (!!request.hasEgressProxyIpPoolIds()) {
    bodyFlat["EgressProxyIpPoolIds"] = request.getEgressProxyIpPoolIds();
  }

  if (!!request.hasEgressProxyIpPoolNames()) {
    bodyFlat["EgressProxyIpPoolNames"] = request.getEgressProxyIpPoolNames();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.getSkip();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListEgressProxyIpPools"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEgressProxyIpPoolsResponse>();
}

/**
 * @summary 查询出口代理地址池列表
 *
 * @description ## 请求说明
 * - `MaxResults` 参数用于控制每页返回的结果数量，默认为20，最大值为1000。
 * - `NextToken` 用于分页查询时获取下一页的数据。
 * - `Skip` 参数用于跳过指定数量的记录，默认值为0。
 * - 可以通过 `EgressProxyGatewayIds`, `EgressProxyIpPoolIds`, `EgressProxyIpPoolNames` 等参数进行过滤查询。
 * - `Status` 参数支持按状态过滤结果。
 * - `Tags` 参数可用于更细粒度的资源筛选。
 * - 返回结果中包含 `NextToken` 以便于继续请求后续页面的数据。
 * - `CreateTime` 字段表示的是UTC时间格式。
 *
 * @param request ListEgressProxyIpPoolsRequest
 * @return ListEgressProxyIpPoolsResponse
 */
ListEgressProxyIpPoolsResponse Client::listEgressProxyIpPools(const ListEgressProxyIpPoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEgressProxyIpPoolsWithOptions(request, runtime);
}

/**
 * @summary 查询出口代理规则组列表
 *
 * @param request ListEgressProxyRuleGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEgressProxyRuleGroupsResponse
 */
ListEgressProxyRuleGroupsResponse Client::listEgressProxyRuleGroupsWithOptions(const ListEgressProxyRuleGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasEgressProxyRuleGroupIds()) {
    bodyFlat["EgressProxyRuleGroupIds"] = request.getEgressProxyRuleGroupIds();
  }

  if (!!request.hasEgressProxyRuleGroupNames()) {
    bodyFlat["EgressProxyRuleGroupNames"] = request.getEgressProxyRuleGroupNames();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.getSkip();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListEgressProxyRuleGroups"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEgressProxyRuleGroupsResponse>();
}

/**
 * @summary 查询出口代理规则组列表
 *
 * @param request ListEgressProxyRuleGroupsRequest
 * @return ListEgressProxyRuleGroupsResponse
 */
ListEgressProxyRuleGroupsResponse Client::listEgressProxyRuleGroups(const ListEgressProxyRuleGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEgressProxyRuleGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the tags bound to the specified resources.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  json bodyFlat = {};
  if (!!request.hasResourceId()) {
    bodyFlat["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2026-07-15"},
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
 * @summary Queries the tags bound to the specified resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource group to which a resource belongs.
 *
 * @description Shifts a resource to another resource group. After the shift, the resource belongs to the new resource group. For valid values of the ResourceType parameter, see the metric description.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasNewResourceGroupId()) {
    body["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2026-07-15"},
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
 * @summary Modifies the resource group to which a resource belongs.
 *
 * @description Shifts a resource to another resource group. After the shift, the resource belongs to the new resource group. For valid values of the ResourceType parameter, see the metric description.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary 从出口代理地址池移除IP地址
 *
 * @param request RemoveIpAddressesFromEgressProxyIpPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveIpAddressesFromEgressProxyIpPoolResponse
 */
RemoveIpAddressesFromEgressProxyIpPoolResponse Client::removeIpAddressesFromEgressProxyIpPoolWithOptions(const RemoveIpAddressesFromEgressProxyIpPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyIpPoolId()) {
    body["EgressProxyIpPoolId"] = request.getEgressProxyIpPoolId();
  }

  json bodyFlat = {};
  if (!!request.hasZoneMappings()) {
    bodyFlat["ZoneMappings"] = request.getZoneMappings();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RemoveIpAddressesFromEgressProxyIpPool"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveIpAddressesFromEgressProxyIpPoolResponse>();
}

/**
 * @summary 从出口代理地址池移除IP地址
 *
 * @param request RemoveIpAddressesFromEgressProxyIpPoolRequest
 * @return RemoveIpAddressesFromEgressProxyIpPoolResponse
 */
RemoveIpAddressesFromEgressProxyIpPoolResponse Client::removeIpAddressesFromEgressProxyIpPool(const RemoveIpAddressesFromEgressProxyIpPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeIpAddressesFromEgressProxyIpPoolWithOptions(request, runtime);
}

/**
 * @summary Creates and attaches tags to a specified list of resources.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  json bodyFlat = {};
  if (!!request.hasResourceId()) {
    bodyFlat["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2026-07-15"},
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
 * @summary Creates and attaches tags to a specified list of resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from the specified resources.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAll()) {
    body["All"] = request.getAll();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  json bodyFlat = {};
  if (!!request.hasResourceId()) {
    bodyFlat["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    bodyFlat["TagKey"] = request.getTagKey();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2026-07-15"},
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
 * @summary Removes tags from the specified resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary 更新出口代理配置属性
 *
 * @param request UpdateEgressProxyConfigurationAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEgressProxyConfigurationAttributeResponse
 */
UpdateEgressProxyConfigurationAttributeResponse Client::updateEgressProxyConfigurationAttributeWithOptions(const UpdateEgressProxyConfigurationAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  json bodyFlat = {};
  if (!!request.hasDefaultRulePhaseActions()) {
    bodyFlat["DefaultRulePhaseActions"] = request.getDefaultRulePhaseActions();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyConfigurationId()) {
    body["EgressProxyConfigurationId"] = request.getEgressProxyConfigurationId();
  }

  if (!!request.hasEgressProxyConfigurationName()) {
    body["EgressProxyConfigurationName"] = request.getEgressProxyConfigurationName();
  }

  if (!!request.hasEgressProxyRuleGroups()) {
    bodyFlat["EgressProxyRuleGroups"] = request.getEgressProxyRuleGroups();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateEgressProxyConfigurationAttribute"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEgressProxyConfigurationAttributeResponse>();
}

/**
 * @summary 更新出口代理配置属性
 *
 * @param request UpdateEgressProxyConfigurationAttributeRequest
 * @return UpdateEgressProxyConfigurationAttributeResponse
 */
UpdateEgressProxyConfigurationAttributeResponse Client::updateEgressProxyConfigurationAttribute(const UpdateEgressProxyConfigurationAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEgressProxyConfigurationAttributeWithOptions(request, runtime);
}

/**
 * @summary 修改出口代理网关属性
 *
 * @param request UpdateEgressProxyGatewayAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEgressProxyGatewayAttributeResponse
 */
UpdateEgressProxyGatewayAttributeResponse Client::updateEgressProxyGatewayAttributeWithOptions(const UpdateEgressProxyGatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasAddListenerProperties()) {
    bodyFlat["AddListenerProperties"] = request.getAddListenerProperties();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDefaultEgressProxyIpPoolId()) {
    body["DefaultEgressProxyIpPoolId"] = request.getDefaultEgressProxyIpPoolId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyGatewayId()) {
    body["EgressProxyGatewayId"] = request.getEgressProxyGatewayId();
  }

  if (!!request.hasEgressProxyGatewayName()) {
    body["EgressProxyGatewayName"] = request.getEgressProxyGatewayName();
  }

  if (!!request.hasRemoveListenerProperties()) {
    bodyFlat["RemoveListenerProperties"] = request.getRemoveListenerProperties();
  }

  if (!!request.hasTlsInterceptProperties()) {
    bodyFlat["TlsInterceptProperties"] = request.getTlsInterceptProperties();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateEgressProxyGatewayAttribute"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEgressProxyGatewayAttributeResponse>();
}

/**
 * @summary 修改出口代理网关属性
 *
 * @param request UpdateEgressProxyGatewayAttributeRequest
 * @return UpdateEgressProxyGatewayAttributeResponse
 */
UpdateEgressProxyGatewayAttributeResponse Client::updateEgressProxyGatewayAttribute(const UpdateEgressProxyGatewayAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEgressProxyGatewayAttributeWithOptions(request, runtime);
}

/**
 * @summary 更新出口代理地址池属性
 *
 * @description ## 请求说明
 * - `EgressProxyIpPoolId` 是必填参数，用来指定要更新的出口地址池ID。
 * - `DryRun` 参数可以设置为 `true` 来预检此次请求而不实际执行更改，默认值为 `false`。
 * - `Scheduler` 和 `HashFactor` 参数用于定义出口IP的选择逻辑及相关的哈希因子，可根据具体需求进行设置。
 * - 其他参数如 `EgressProxyIpPoolName`, `Description` 等均为可选项，提供给用户根据需要自定义出口地址池的名字和描述等信息。
 *
 * @param request UpdateEgressProxyIpPoolAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEgressProxyIpPoolAttributeResponse
 */
UpdateEgressProxyIpPoolAttributeResponse Client::updateEgressProxyIpPoolAttributeWithOptions(const UpdateEgressProxyIpPoolAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyIpPoolId()) {
    body["EgressProxyIpPoolId"] = request.getEgressProxyIpPoolId();
  }

  if (!!request.hasEgressProxyIpPoolName()) {
    body["EgressProxyIpPoolName"] = request.getEgressProxyIpPoolName();
  }

  if (!!request.hasHashFactor()) {
    body["HashFactor"] = request.getHashFactor();
  }

  if (!!request.hasHashHeaderName()) {
    body["HashHeaderName"] = request.getHashHeaderName();
  }

  if (!!request.hasScheduler()) {
    body["Scheduler"] = request.getScheduler();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateEgressProxyIpPoolAttribute"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEgressProxyIpPoolAttributeResponse>();
}

/**
 * @summary 更新出口代理地址池属性
 *
 * @description ## 请求说明
 * - `EgressProxyIpPoolId` 是必填参数，用来指定要更新的出口地址池ID。
 * - `DryRun` 参数可以设置为 `true` 来预检此次请求而不实际执行更改，默认值为 `false`。
 * - `Scheduler` 和 `HashFactor` 参数用于定义出口IP的选择逻辑及相关的哈希因子，可根据具体需求进行设置。
 * - 其他参数如 `EgressProxyIpPoolName`, `Description` 等均为可选项，提供给用户根据需要自定义出口地址池的名字和描述等信息。
 *
 * @param request UpdateEgressProxyIpPoolAttributeRequest
 * @return UpdateEgressProxyIpPoolAttributeResponse
 */
UpdateEgressProxyIpPoolAttributeResponse Client::updateEgressProxyIpPoolAttribute(const UpdateEgressProxyIpPoolAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEgressProxyIpPoolAttributeWithOptions(request, runtime);
}

/**
 * @summary 更新出口代理规则组属性
 *
 * @param request UpdateEgressProxyRuleGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEgressProxyRuleGroupAttributeResponse
 */
UpdateEgressProxyRuleGroupAttributeResponse Client::updateEgressProxyRuleGroupAttributeWithOptions(const UpdateEgressProxyRuleGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyIpPoolId()) {
    body["EgressProxyIpPoolId"] = request.getEgressProxyIpPoolId();
  }

  if (!!request.hasEgressProxyRuleGroupId()) {
    body["EgressProxyRuleGroupId"] = request.getEgressProxyRuleGroupId();
  }

  if (!!request.hasEgressProxyRuleGroupName()) {
    body["EgressProxyRuleGroupName"] = request.getEgressProxyRuleGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateEgressProxyRuleGroupAttribute"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEgressProxyRuleGroupAttributeResponse>();
}

/**
 * @summary 更新出口代理规则组属性
 *
 * @param request UpdateEgressProxyRuleGroupAttributeRequest
 * @return UpdateEgressProxyRuleGroupAttributeResponse
 */
UpdateEgressProxyRuleGroupAttributeResponse Client::updateEgressProxyRuleGroupAttribute(const UpdateEgressProxyRuleGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEgressProxyRuleGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary 批量更新出口代理规则属性
 *
 * @param request UpdateEgressProxyRulesAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEgressProxyRulesAttributeResponse
 */
UpdateEgressProxyRulesAttributeResponse Client::updateEgressProxyRulesAttributeWithOptions(const UpdateEgressProxyRulesAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEgressProxyRuleGroupId()) {
    body["EgressProxyRuleGroupId"] = request.getEgressProxyRuleGroupId();
  }

  json bodyFlat = {};
  if (!!request.hasEgressProxyRules()) {
    bodyFlat["EgressProxyRules"] = request.getEgressProxyRules();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateEgressProxyRulesAttribute"},
    {"version" , "2026-07-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEgressProxyRulesAttributeResponse>();
}

/**
 * @summary 批量更新出口代理规则属性
 *
 * @param request UpdateEgressProxyRulesAttributeRequest
 * @return UpdateEgressProxyRulesAttributeResponse
 */
UpdateEgressProxyRulesAttributeResponse Client::updateEgressProxyRulesAttribute(const UpdateEgressProxyRulesAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEgressProxyRulesAttributeWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace EPG20260715