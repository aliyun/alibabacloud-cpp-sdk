#include <darabonba/Core.hpp>
#include <alibabacloud/Config20200907.hpp>
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
using namespace AlibabaCloud::Config20200907::Models;
namespace AlibabaCloud
{
namespace Config20200907
{

AlibabaCloud::Config20200907::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  this->_endpointMap = json({
    {"cn-shanghai" , "config.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-1" , "config.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("config", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Enables one or more rules in an account group. After a rule is enabled, the rule continues to automatically evaluate resources based on the trigger mechanism.
 *
 * @description Enables one or more rules in an account group. After a rule is enabled, the rule continues to automatically evaluate resources based on the trigger mechanism.
 *
 * @param request ActiveAggregateConfigRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActiveAggregateConfigRulesResponse
 */
ActiveAggregateConfigRulesResponse Client::activeAggregateConfigRulesWithOptions(const ActiveAggregateConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasCompliancePackId()) {
    query["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ActiveAggregateConfigRules"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActiveAggregateConfigRulesResponse>();
}

/**
 * @summary Enables one or more rules in an account group. After a rule is enabled, the rule continues to automatically evaluate resources based on the trigger mechanism.
 *
 * @description Enables one or more rules in an account group. After a rule is enabled, the rule continues to automatically evaluate resources based on the trigger mechanism.
 *
 * @param request ActiveAggregateConfigRulesRequest
 * @return ActiveAggregateConfigRulesResponse
 */
ActiveAggregateConfigRulesResponse Client::activeAggregateConfigRules(const ActiveAggregateConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activeAggregateConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Enables a rule in Cloud Config. After a rule is enabled, Cloud Config automatically evaluates the compliance of a resource based on the trigger mechanism of the rule.
 *
 * @description ### [](#)Prerequisites
 * The rule is in the `INACTIVE` state.
 *
 * @param request ActiveConfigRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActiveConfigRulesResponse
 */
ActiveConfigRulesResponse Client::activeConfigRulesWithOptions(const ActiveConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompliancePackId()) {
    query["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ActiveConfigRules"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActiveConfigRulesResponse>();
}

/**
 * @summary Enables a rule in Cloud Config. After a rule is enabled, Cloud Config automatically evaluates the compliance of a resource based on the trigger mechanism of the rule.
 *
 * @description ### [](#)Prerequisites
 * The rule is in the `INACTIVE` state.
 *
 * @param request ActiveConfigRulesRequest
 * @return ActiveConfigRulesResponse
 */
ActiveConfigRulesResponse Client::activeConfigRules(const ActiveConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activeConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Adds one or more rules in an account group to a compliance package.
 *
 * @description The sample request in this topic shows you how to add the `cr-6cc4626622af00e7****` rule in the `ca-75b4626622af00c3****` account group to the `cp-5bb1626622af00bd****` compliance package.
 *
 * @param request AttachAggregateConfigRuleToCompliancePackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachAggregateConfigRuleToCompliancePackResponse
 */
AttachAggregateConfigRuleToCompliancePackResponse Client::attachAggregateConfigRuleToCompliancePackWithOptions(const AttachAggregateConfigRuleToCompliancePackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasCompliancePackId()) {
    query["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachAggregateConfigRuleToCompliancePack"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachAggregateConfigRuleToCompliancePackResponse>();
}

/**
 * @summary Adds one or more rules in an account group to a compliance package.
 *
 * @description The sample request in this topic shows you how to add the `cr-6cc4626622af00e7****` rule in the `ca-75b4626622af00c3****` account group to the `cp-5bb1626622af00bd****` compliance package.
 *
 * @param request AttachAggregateConfigRuleToCompliancePackRequest
 * @return AttachAggregateConfigRuleToCompliancePackResponse
 */
AttachAggregateConfigRuleToCompliancePackResponse Client::attachAggregateConfigRuleToCompliancePack(const AttachAggregateConfigRuleToCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachAggregateConfigRuleToCompliancePackWithOptions(request, runtime);
}

/**
 * @summary Adds one or more rules to a compliance package.
 *
 * @description This topic provides an example on how to add the `cr-6cc4626622af00e7****` rule to the `cp-5bb1626622af00bd****` compliance package.
 *
 * @param request AttachConfigRuleToCompliancePackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachConfigRuleToCompliancePackResponse
 */
AttachConfigRuleToCompliancePackResponse Client::attachConfigRuleToCompliancePackWithOptions(const AttachConfigRuleToCompliancePackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompliancePackId()) {
    query["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachConfigRuleToCompliancePack"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachConfigRuleToCompliancePackResponse>();
}

/**
 * @summary Adds one or more rules to a compliance package.
 *
 * @description This topic provides an example on how to add the `cr-6cc4626622af00e7****` rule to the `cp-5bb1626622af00bd****` compliance package.
 *
 * @param request AttachConfigRuleToCompliancePackRequest
 * @return AttachConfigRuleToCompliancePackResponse
 */
AttachConfigRuleToCompliancePackResponse Client::attachConfigRuleToCompliancePack(const AttachConfigRuleToCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachConfigRuleToCompliancePackWithOptions(request, runtime);
}

/**
 * @summary Replicates compliance packages.
 *
 * @param request CopyCompliancePacksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyCompliancePacksResponse
 */
CopyCompliancePacksResponse Client::copyCompliancePacksWithOptions(const CopyCompliancePacksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesAggregatorIds()) {
    query["DesAggregatorIds"] = request.getDesAggregatorIds();
  }

  if (!!request.hasSrcAggregatorId()) {
    query["SrcAggregatorId"] = request.getSrcAggregatorId();
  }

  if (!!request.hasSrcCompliancePackIds()) {
    query["SrcCompliancePackIds"] = request.getSrcCompliancePackIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CopyCompliancePacks"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyCompliancePacksResponse>();
}

/**
 * @summary Replicates compliance packages.
 *
 * @param request CopyCompliancePacksRequest
 * @return CopyCompliancePacksResponse
 */
CopyCompliancePacksResponse Client::copyCompliancePacks(const CopyCompliancePacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyCompliancePacksWithOptions(request, runtime);
}

/**
 * @summary Replicates rules.
 *
 * @param request CopyConfigRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyConfigRulesResponse
 */
CopyConfigRulesResponse Client::copyConfigRulesWithOptions(const CopyConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesAggregatorIds()) {
    query["DesAggregatorIds"] = request.getDesAggregatorIds();
  }

  if (!!request.hasSrcAggregatorId()) {
    query["SrcAggregatorId"] = request.getSrcAggregatorId();
  }

  if (!!request.hasSrcConfigRuleIds()) {
    query["SrcConfigRuleIds"] = request.getSrcConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CopyConfigRules"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyConfigRulesResponse>();
}

/**
 * @summary Replicates rules.
 *
 * @param request CopyConfigRulesRequest
 * @return CopyConfigRulesResponse
 */
CopyConfigRulesResponse Client::copyConfigRules(const CopyConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Creates a downloadable resource file for the current Alibaba Cloud account.
 *
 * @param request CreateAdvancedSearchFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAdvancedSearchFileResponse
 */
CreateAdvancedSearchFileResponse Client::createAdvancedSearchFileWithOptions(const CreateAdvancedSearchFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSql()) {
    query["Sql"] = request.getSql();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAdvancedSearchFile"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAdvancedSearchFileResponse>();
}

/**
 * @summary Creates a downloadable resource file for the current Alibaba Cloud account.
 *
 * @param request CreateAdvancedSearchFileRequest
 * @return CreateAdvancedSearchFileResponse
 */
CreateAdvancedSearchFileResponse Client::createAdvancedSearchFile(const CreateAdvancedSearchFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAdvancedSearchFileWithOptions(request, runtime);
}

/**
 * @summary Creates a downloadable resource file for an account group.
 *
 * @description This topic provides an example on how to create a downloadable resource file for an account group whose ID is `ca-edd3626622af00b3****`. The resource file includes all the ECS instances in the account group.
 *
 * @param request CreateAggregateAdvancedSearchFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAggregateAdvancedSearchFileResponse
 */
CreateAggregateAdvancedSearchFileResponse Client::createAggregateAdvancedSearchFileWithOptions(const CreateAggregateAdvancedSearchFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasSql()) {
    query["Sql"] = request.getSql();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAggregateAdvancedSearchFile"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAggregateAdvancedSearchFileResponse>();
}

/**
 * @summary Creates a downloadable resource file for an account group.
 *
 * @description This topic provides an example on how to create a downloadable resource file for an account group whose ID is `ca-edd3626622af00b3****`. The resource file includes all the ECS instances in the account group.
 *
 * @param request CreateAggregateAdvancedSearchFileRequest
 * @return CreateAggregateAdvancedSearchFileResponse
 */
CreateAggregateAdvancedSearchFileResponse Client::createAggregateAdvancedSearchFile(const CreateAggregateAdvancedSearchFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAggregateAdvancedSearchFileWithOptions(request, runtime);
}

/**
 * @summary Creates a compliance package for an account group.
 *
 * @description This topic provides an example on how to create a compliance package for the account group `ca-f632626622af0079****` by using the compliance package template `ClassifiedProtectionPreCheck`.
 *
 * @param tmpReq CreateAggregateCompliancePackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAggregateCompliancePackResponse
 */
CreateAggregateCompliancePackResponse Client::createAggregateCompliancePackWithOptions(const CreateAggregateCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAggregateCompliancePackShrinkRequest request = CreateAggregateCompliancePackShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfigRules()) {
    request.setConfigRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfigRules(), "ConfigRules", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  json body = {};
  if (!!request.hasAggregatorId()) {
    body["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCompliancePackName()) {
    body["CompliancePackName"] = request.getCompliancePackName();
  }

  if (!!request.hasCompliancePackTemplateId()) {
    body["CompliancePackTemplateId"] = request.getCompliancePackTemplateId();
  }

  if (!!request.hasConfigRulesShrink()) {
    body["ConfigRules"] = request.getConfigRulesShrink();
  }

  if (!!request.hasDefaultEnable()) {
    body["DefaultEnable"] = request.getDefaultEnable();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExcludeRegionIdsScope()) {
    body["ExcludeRegionIdsScope"] = request.getExcludeRegionIdsScope();
  }

  if (!!request.hasExcludeResourceGroupIdsScope()) {
    body["ExcludeResourceGroupIdsScope"] = request.getExcludeResourceGroupIdsScope();
  }

  if (!!request.hasExcludeResourceIdsScope()) {
    body["ExcludeResourceIdsScope"] = request.getExcludeResourceIdsScope();
  }

  json bodyFlat = {};
  if (!!request.hasExcludeTagsScope()) {
    bodyFlat["ExcludeTagsScope"] = request.getExcludeTagsScope();
  }

  if (!!request.hasRegionIdsScope()) {
    body["RegionIdsScope"] = request.getRegionIdsScope();
  }

  if (!!request.hasResourceGroupIdsScope()) {
    body["ResourceGroupIdsScope"] = request.getResourceGroupIdsScope();
  }

  if (!!request.hasResourceIdsScope()) {
    body["ResourceIdsScope"] = request.getResourceIdsScope();
  }

  if (!!request.hasRiskLevel()) {
    body["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasTagKeyScope()) {
    body["TagKeyScope"] = request.getTagKeyScope();
  }

  if (!!request.hasTagValueScope()) {
    body["TagValueScope"] = request.getTagValueScope();
  }

  if (!!request.hasTagsScope()) {
    bodyFlat["TagsScope"] = request.getTagsScope();
  }

  if (!!request.hasTemplateContent()) {
    body["TemplateContent"] = request.getTemplateContent();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAggregateCompliancePack"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAggregateCompliancePackResponse>();
}

/**
 * @summary Creates a compliance package for an account group.
 *
 * @description This topic provides an example on how to create a compliance package for the account group `ca-f632626622af0079****` by using the compliance package template `ClassifiedProtectionPreCheck`.
 *
 * @param request CreateAggregateCompliancePackRequest
 * @return CreateAggregateCompliancePackResponse
 */
CreateAggregateCompliancePackResponse Client::createAggregateCompliancePack(const CreateAggregateCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAggregateCompliancePackWithOptions(request, runtime);
}

/**
 * @summary Creates a delivery channel for an account group.
 *
 * @description In this example, a delivery channel is created for an account group. The ID of the account group is `ca-a4e5626622af0079****`. The type of the delivery channel is `OSS` and the Alibaba Cloud Resource Name (ARN) of the delivery destination is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The result indicates that the delivery channel is created. The ID of the delivery channel is `cdc-8e45ff4e06a3a8****`.
 *
 * @param request CreateAggregateConfigDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAggregateConfigDeliveryChannelResponse
 */
CreateAggregateConfigDeliveryChannelResponse Client::createAggregateConfigDeliveryChannelWithOptions(const CreateAggregateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCompliantSnapshot()) {
    query["CompliantSnapshot"] = request.getCompliantSnapshot();
  }

  if (!!request.hasConfigurationItemChangeNotification()) {
    query["ConfigurationItemChangeNotification"] = request.getConfigurationItemChangeNotification();
  }

  if (!!request.hasConfigurationSnapshot()) {
    query["ConfigurationSnapshot"] = request.getConfigurationSnapshot();
  }

  if (!!request.hasDeliveryChannelCondition()) {
    query["DeliveryChannelCondition"] = request.getDeliveryChannelCondition();
  }

  if (!!request.hasDeliveryChannelName()) {
    query["DeliveryChannelName"] = request.getDeliveryChannelName();
  }

  if (!!request.hasDeliveryChannelTargetArn()) {
    query["DeliveryChannelTargetArn"] = request.getDeliveryChannelTargetArn();
  }

  if (!!request.hasDeliveryChannelType()) {
    query["DeliveryChannelType"] = request.getDeliveryChannelType();
  }

  if (!!request.hasDeliverySnapshotTime()) {
    query["DeliverySnapshotTime"] = request.getDeliverySnapshotTime();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasNonCompliantNotification()) {
    query["NonCompliantNotification"] = request.getNonCompliantNotification();
  }

  if (!!request.hasOversizedDataOSSTargetArn()) {
    query["OversizedDataOSSTargetArn"] = request.getOversizedDataOSSTargetArn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAggregateConfigDeliveryChannel"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAggregateConfigDeliveryChannelResponse>();
}

/**
 * @summary Creates a delivery channel for an account group.
 *
 * @description In this example, a delivery channel is created for an account group. The ID of the account group is `ca-a4e5626622af0079****`. The type of the delivery channel is `OSS` and the Alibaba Cloud Resource Name (ARN) of the delivery destination is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The result indicates that the delivery channel is created. The ID of the delivery channel is `cdc-8e45ff4e06a3a8****`.
 *
 * @param request CreateAggregateConfigDeliveryChannelRequest
 * @return CreateAggregateConfigDeliveryChannelResponse
 */
CreateAggregateConfigDeliveryChannelResponse Client::createAggregateConfigDeliveryChannel(const CreateAggregateConfigDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAggregateConfigDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Creates a rule for an account group.
 *
 * @description ### Limits
 * You can create up to 200 rules for each management account.
 * ### Usage notes
 * This topic provides an example on how to create a rule based on the required-tags managed rule in the `ca-a4e5626622af0079****` account group. The returned result shows that the rule is created and its ID is `cr-4e3d626622af0080****`.
 *
 * @param tmpReq CreateAggregateConfigRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAggregateConfigRuleResponse
 */
CreateAggregateConfigRuleResponse Client::createAggregateConfigRuleWithOptions(const CreateAggregateConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAggregateConfigRuleShrinkRequest request = CreateAggregateConfigRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInputParameters()) {
    request.setInputParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputParameters(), "InputParameters", "json"));
  }

  if (!!tmpReq.hasResourceTypesScope()) {
    request.setResourceTypesScopeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceTypesScope(), "ResourceTypesScope", "simple"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasResourceNameScope()) {
    query["ResourceNameScope"] = request.getResourceNameScope();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  json body = {};
  if (!!request.hasAccountIdsScope()) {
    body["AccountIdsScope"] = request.getAccountIdsScope();
  }

  if (!!request.hasAggregatorId()) {
    body["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigRuleName()) {
    body["ConfigRuleName"] = request.getConfigRuleName();
  }

  if (!!request.hasConfigRuleTriggerTypes()) {
    body["ConfigRuleTriggerTypes"] = request.getConfigRuleTriggerTypes();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExcludeAccountIdsScope()) {
    body["ExcludeAccountIdsScope"] = request.getExcludeAccountIdsScope();
  }

  if (!!request.hasExcludeFolderIdsScope()) {
    body["ExcludeFolderIdsScope"] = request.getExcludeFolderIdsScope();
  }

  if (!!request.hasExcludeRegionIdsScope()) {
    body["ExcludeRegionIdsScope"] = request.getExcludeRegionIdsScope();
  }

  if (!!request.hasExcludeResourceGroupIdsScope()) {
    body["ExcludeResourceGroupIdsScope"] = request.getExcludeResourceGroupIdsScope();
  }

  if (!!request.hasExcludeResourceIdsScope()) {
    body["ExcludeResourceIdsScope"] = request.getExcludeResourceIdsScope();
  }

  json bodyFlat = {};
  if (!!request.hasExcludeTagsScope()) {
    bodyFlat["ExcludeTagsScope"] = request.getExcludeTagsScope();
  }

  if (!!request.hasExtendContent()) {
    body["ExtendContent"] = request.getExtendContent();
  }

  if (!!request.hasFolderIdsScope()) {
    body["FolderIdsScope"] = request.getFolderIdsScope();
  }

  if (!!request.hasInputParametersShrink()) {
    body["InputParameters"] = request.getInputParametersShrink();
  }

  if (!!request.hasMaximumExecutionFrequency()) {
    body["MaximumExecutionFrequency"] = request.getMaximumExecutionFrequency();
  }

  if (!!request.hasRegionIdsScope()) {
    body["RegionIdsScope"] = request.getRegionIdsScope();
  }

  if (!!request.hasResourceGroupIdsScope()) {
    body["ResourceGroupIdsScope"] = request.getResourceGroupIdsScope();
  }

  if (!!request.hasResourceIdsScope()) {
    body["ResourceIdsScope"] = request.getResourceIdsScope();
  }

  if (!!request.hasResourceTypesScopeShrink()) {
    body["ResourceTypesScope"] = request.getResourceTypesScopeShrink();
  }

  if (!!request.hasRiskLevel()) {
    body["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasSourceIdentifier()) {
    body["SourceIdentifier"] = request.getSourceIdentifier();
  }

  if (!!request.hasSourceOwner()) {
    body["SourceOwner"] = request.getSourceOwner();
  }

  if (!!request.hasTagKeyLogicScope()) {
    body["TagKeyLogicScope"] = request.getTagKeyLogicScope();
  }

  if (!!request.hasTagKeyScope()) {
    body["TagKeyScope"] = request.getTagKeyScope();
  }

  if (!!request.hasTagValueScope()) {
    body["TagValueScope"] = request.getTagValueScope();
  }

  if (!!request.hasTagsScope()) {
    bodyFlat["TagsScope"] = request.getTagsScope();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAggregateConfigRule"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAggregateConfigRuleResponse>();
}

/**
 * @summary Creates a rule for an account group.
 *
 * @description ### Limits
 * You can create up to 200 rules for each management account.
 * ### Usage notes
 * This topic provides an example on how to create a rule based on the required-tags managed rule in the `ca-a4e5626622af0079****` account group. The returned result shows that the rule is created and its ID is `cr-4e3d626622af0080****`.
 *
 * @param request CreateAggregateConfigRuleRequest
 * @return CreateAggregateConfigRuleResponse
 */
CreateAggregateConfigRuleResponse Client::createAggregateConfigRule(const CreateAggregateConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAggregateConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a remediation template for a rule in an account group.
 *
 * @description This topic provides an example on how to create a remediation template for the rule whose ID is `cr-6b7c626622af00b4****` in the account group whose ID is `ca-6b4a626622af0012****`. The returned result shows that a remediation template is created and the ID of the remediation template is `crr-909ba2d4716700eb****`.
 *
 * @param request CreateAggregateRemediationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAggregateRemediationResponse
 */
CreateAggregateRemediationResponse Client::createAggregateRemediationWithOptions(const CreateAggregateRemediationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAggregatorId()) {
    body["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigRuleId()) {
    body["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasInvokeType()) {
    body["InvokeType"] = request.getInvokeType();
  }

  if (!!request.hasParams()) {
    body["Params"] = request.getParams();
  }

  if (!!request.hasRemediationTemplateId()) {
    body["RemediationTemplateId"] = request.getRemediationTemplateId();
  }

  if (!!request.hasRemediationType()) {
    body["RemediationType"] = request.getRemediationType();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAggregateRemediation"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAggregateRemediationResponse>();
}

/**
 * @summary Creates a remediation template for a rule in an account group.
 *
 * @description This topic provides an example on how to create a remediation template for the rule whose ID is `cr-6b7c626622af00b4****` in the account group whose ID is `ca-6b4a626622af0012****`. The returned result shows that a remediation template is created and the ID of the remediation template is `crr-909ba2d4716700eb****`.
 *
 * @param request CreateAggregateRemediationRequest
 * @return CreateAggregateRemediationResponse
 */
CreateAggregateRemediationResponse Client::createAggregateRemediation(const CreateAggregateRemediationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAggregateRemediationWithOptions(request, runtime);
}

/**
 * @summary Creates an account group.
 *
 * @description Each management account can create a maximum of five account groups. Each account group can contain a maximum of 200 member accounts.
 * Cloud Config supports the following types of account groups:
 * *   Global account group: The global account group contains all the member accounts that are added to the resource directory. A management account can create only one global account group.
 * *   Custom account group: If you create a custom account group, you must manually add all or specific member accounts from the resource directory to the custom account group.
 * This topic provides an example on how to create an account group of the `CUSTOM` type. The custom account group is named `Test_Group`, and its description is `Test account group`. The custom account group contains the following two member accounts:
 * *   Member account ID: `171322098523****`. Member account name: `Alice`.
 * *   Member account ID: `100532098349****`. Member account name: `Tom`.
 *
 * @param tmpReq CreateAggregatorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAggregatorResponse
 */
CreateAggregatorResponse Client::createAggregatorWithOptions(const CreateAggregatorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAggregatorShrinkRequest request = CreateAggregatorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAggregatorAccounts()) {
    request.setAggregatorAccountsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAggregatorAccounts(), "AggregatorAccounts", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  json body = {};
  if (!!request.hasAggregatorAccountsShrink()) {
    body["AggregatorAccounts"] = request.getAggregatorAccountsShrink();
  }

  if (!!request.hasAggregatorName()) {
    body["AggregatorName"] = request.getAggregatorName();
  }

  if (!!request.hasAggregatorType()) {
    body["AggregatorType"] = request.getAggregatorType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFolderId()) {
    body["FolderId"] = request.getFolderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAggregator"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAggregatorResponse>();
}

/**
 * @summary Creates an account group.
 *
 * @description Each management account can create a maximum of five account groups. Each account group can contain a maximum of 200 member accounts.
 * Cloud Config supports the following types of account groups:
 * *   Global account group: The global account group contains all the member accounts that are added to the resource directory. A management account can create only one global account group.
 * *   Custom account group: If you create a custom account group, you must manually add all or specific member accounts from the resource directory to the custom account group.
 * This topic provides an example on how to create an account group of the `CUSTOM` type. The custom account group is named `Test_Group`, and its description is `Test account group`. The custom account group contains the following two member accounts:
 * *   Member account ID: `171322098523****`. Member account name: `Alice`.
 * *   Member account ID: `100532098349****`. Member account name: `Tom`.
 *
 * @param request CreateAggregatorRequest
 * @return CreateAggregatorResponse
 */
CreateAggregatorResponse Client::createAggregator(const CreateAggregatorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAggregatorWithOptions(request, runtime);
}

/**
 * @summary Creates a compliance package for the current account.
 *
 * @description Each ordinary account can create up to five compliance packages.
 * This topic provides an example on how to create a compliance package named ClassifiedProtectionPreCheck. The compliance package contains a managed rule named `eip-bandwidth-limit`.
 *
 * @param tmpReq CreateCompliancePackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCompliancePackResponse
 */
CreateCompliancePackResponse Client::createCompliancePackWithOptions(const CreateCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCompliancePackShrinkRequest request = CreateCompliancePackShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfigRules()) {
    request.setConfigRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfigRules(), "ConfigRules", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCompliancePackName()) {
    body["CompliancePackName"] = request.getCompliancePackName();
  }

  if (!!request.hasCompliancePackTemplateId()) {
    body["CompliancePackTemplateId"] = request.getCompliancePackTemplateId();
  }

  if (!!request.hasConfigRulesShrink()) {
    body["ConfigRules"] = request.getConfigRulesShrink();
  }

  if (!!request.hasDefaultEnable()) {
    body["DefaultEnable"] = request.getDefaultEnable();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExcludeRegionIdsScope()) {
    body["ExcludeRegionIdsScope"] = request.getExcludeRegionIdsScope();
  }

  if (!!request.hasExcludeResourceGroupIdsScope()) {
    body["ExcludeResourceGroupIdsScope"] = request.getExcludeResourceGroupIdsScope();
  }

  if (!!request.hasExcludeResourceIdsScope()) {
    body["ExcludeResourceIdsScope"] = request.getExcludeResourceIdsScope();
  }

  json bodyFlat = {};
  if (!!request.hasExcludeTagsScope()) {
    bodyFlat["ExcludeTagsScope"] = request.getExcludeTagsScope();
  }

  if (!!request.hasRegionIdsScope()) {
    body["RegionIdsScope"] = request.getRegionIdsScope();
  }

  if (!!request.hasResourceGroupIdsScope()) {
    body["ResourceGroupIdsScope"] = request.getResourceGroupIdsScope();
  }

  if (!!request.hasResourceIdsScope()) {
    body["ResourceIdsScope"] = request.getResourceIdsScope();
  }

  if (!!request.hasRiskLevel()) {
    body["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasTagKeyScope()) {
    body["TagKeyScope"] = request.getTagKeyScope();
  }

  if (!!request.hasTagValueScope()) {
    body["TagValueScope"] = request.getTagValueScope();
  }

  if (!!request.hasTagsScope()) {
    bodyFlat["TagsScope"] = request.getTagsScope();
  }

  if (!!request.hasTemplateContent()) {
    body["TemplateContent"] = request.getTemplateContent();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCompliancePack"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCompliancePackResponse>();
}

/**
 * @summary Creates a compliance package for the current account.
 *
 * @description Each ordinary account can create up to five compliance packages.
 * This topic provides an example on how to create a compliance package named ClassifiedProtectionPreCheck. The compliance package contains a managed rule named `eip-bandwidth-limit`.
 *
 * @param request CreateCompliancePackRequest
 * @return CreateCompliancePackResponse
 */
CreateCompliancePackResponse Client::createCompliancePack(const CreateCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCompliancePackWithOptions(request, runtime);
}

/**
 * @summary Creates a delivery channel.
 *
 * @description In this example, a delivery channel is created. The type of the delivery channel is `OSS` and the Alibaba Cloud Resource Name (ARN) of the delivery destination is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The result indicates that the delivery channel is created, and the ID of the delivery channel is `cdc-8e45ff4e06a3a8****`.
 *
 * @param request CreateConfigDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConfigDeliveryChannelResponse
 */
CreateConfigDeliveryChannelResponse Client::createConfigDeliveryChannelWithOptions(const CreateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCompliantSnapshot()) {
    query["CompliantSnapshot"] = request.getCompliantSnapshot();
  }

  if (!!request.hasConfigurationItemChangeNotification()) {
    query["ConfigurationItemChangeNotification"] = request.getConfigurationItemChangeNotification();
  }

  if (!!request.hasConfigurationSnapshot()) {
    query["ConfigurationSnapshot"] = request.getConfigurationSnapshot();
  }

  if (!!request.hasDeliveryChannelCondition()) {
    query["DeliveryChannelCondition"] = request.getDeliveryChannelCondition();
  }

  if (!!request.hasDeliveryChannelName()) {
    query["DeliveryChannelName"] = request.getDeliveryChannelName();
  }

  if (!!request.hasDeliveryChannelTargetArn()) {
    query["DeliveryChannelTargetArn"] = request.getDeliveryChannelTargetArn();
  }

  if (!!request.hasDeliveryChannelType()) {
    query["DeliveryChannelType"] = request.getDeliveryChannelType();
  }

  if (!!request.hasDeliverySnapshotTime()) {
    query["DeliverySnapshotTime"] = request.getDeliverySnapshotTime();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasNonCompliantNotification()) {
    query["NonCompliantNotification"] = request.getNonCompliantNotification();
  }

  if (!!request.hasOversizedDataOSSTargetArn()) {
    query["OversizedDataOSSTargetArn"] = request.getOversizedDataOSSTargetArn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateConfigDeliveryChannel"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConfigDeliveryChannelResponse>();
}

/**
 * @summary Creates a delivery channel.
 *
 * @description In this example, a delivery channel is created. The type of the delivery channel is `OSS` and the Alibaba Cloud Resource Name (ARN) of the delivery destination is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The result indicates that the delivery channel is created, and the ID of the delivery channel is `cdc-8e45ff4e06a3a8****`.
 *
 * @param request CreateConfigDeliveryChannelRequest
 * @return CreateConfigDeliveryChannelResponse
 */
CreateConfigDeliveryChannelResponse Client::createConfigDeliveryChannel(const CreateConfigDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConfigDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Creates a rule for the current account.
 *
 * @description ## Limits
 * You can use a common account to create up to 200 rules.
 *
 * @param tmpReq CreateConfigRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConfigRuleResponse
 */
CreateConfigRuleResponse Client::createConfigRuleWithOptions(const CreateConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateConfigRuleShrinkRequest request = CreateConfigRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInputParameters()) {
    request.setInputParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputParameters(), "InputParameters", "json"));
  }

  if (!!tmpReq.hasResourceTypesScope()) {
    request.setResourceTypesScopeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceTypesScope(), "ResourceTypesScope", "simple"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigRuleName()) {
    body["ConfigRuleName"] = request.getConfigRuleName();
  }

  if (!!request.hasConfigRuleTriggerTypes()) {
    body["ConfigRuleTriggerTypes"] = request.getConfigRuleTriggerTypes();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExcludeRegionIdsScope()) {
    body["ExcludeRegionIdsScope"] = request.getExcludeRegionIdsScope();
  }

  if (!!request.hasExcludeResourceGroupIdsScope()) {
    body["ExcludeResourceGroupIdsScope"] = request.getExcludeResourceGroupIdsScope();
  }

  if (!!request.hasExcludeResourceIdsScope()) {
    body["ExcludeResourceIdsScope"] = request.getExcludeResourceIdsScope();
  }

  json bodyFlat = {};
  if (!!request.hasExcludeTagsScope()) {
    bodyFlat["ExcludeTagsScope"] = request.getExcludeTagsScope();
  }

  if (!!request.hasExtendContent()) {
    body["ExtendContent"] = request.getExtendContent();
  }

  if (!!request.hasInputParametersShrink()) {
    body["InputParameters"] = request.getInputParametersShrink();
  }

  if (!!request.hasMaximumExecutionFrequency()) {
    body["MaximumExecutionFrequency"] = request.getMaximumExecutionFrequency();
  }

  if (!!request.hasRegionIdsScope()) {
    body["RegionIdsScope"] = request.getRegionIdsScope();
  }

  if (!!request.hasResourceGroupIdsScope()) {
    body["ResourceGroupIdsScope"] = request.getResourceGroupIdsScope();
  }

  if (!!request.hasResourceIdsScope()) {
    body["ResourceIdsScope"] = request.getResourceIdsScope();
  }

  if (!!request.hasResourceNameScope()) {
    body["ResourceNameScope"] = request.getResourceNameScope();
  }

  if (!!request.hasResourceTypesScopeShrink()) {
    body["ResourceTypesScope"] = request.getResourceTypesScopeShrink();
  }

  if (!!request.hasRiskLevel()) {
    body["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasSourceIdentifier()) {
    body["SourceIdentifier"] = request.getSourceIdentifier();
  }

  if (!!request.hasSourceOwner()) {
    body["SourceOwner"] = request.getSourceOwner();
  }

  if (!!request.hasTagKeyLogicScope()) {
    body["TagKeyLogicScope"] = request.getTagKeyLogicScope();
  }

  if (!!request.hasTagKeyScope()) {
    body["TagKeyScope"] = request.getTagKeyScope();
  }

  if (!!request.hasTagValueScope()) {
    body["TagValueScope"] = request.getTagValueScope();
  }

  if (!!request.hasTagsScope()) {
    bodyFlat["TagsScope"] = request.getTagsScope();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateConfigRule"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConfigRuleResponse>();
}

/**
 * @summary Creates a rule for the current account.
 *
 * @description ## Limits
 * You can use a common account to create up to 200 rules.
 *
 * @param request CreateConfigRuleRequest
 * @return CreateConfigRuleResponse
 */
CreateConfigRuleResponse Client::createConfigRule(const CreateConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a remediation template for a rule.
 *
 * @description This topic provides an example on how to create a remediation template for the rule `cr-8a973ac2e2be00a2****`. The returned result shows that a remediation template is created and the ID of the remediation template is `crr-909ba2d4716700eb****`.
 *
 * @param request CreateRemediationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRemediationResponse
 */
CreateRemediationResponse Client::createRemediationWithOptions(const CreateRemediationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigRuleId()) {
    body["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasInvokeType()) {
    body["InvokeType"] = request.getInvokeType();
  }

  if (!!request.hasParams()) {
    body["Params"] = request.getParams();
  }

  if (!!request.hasRemediationTemplateId()) {
    body["RemediationTemplateId"] = request.getRemediationTemplateId();
  }

  if (!!request.hasRemediationType()) {
    body["RemediationType"] = request.getRemediationType();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateRemediation"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRemediationResponse>();
}

/**
 * @summary Creates a remediation template for a rule.
 *
 * @description This topic provides an example on how to create a remediation template for the rule `cr-8a973ac2e2be00a2****`. The returned result shows that a remediation template is created and the ID of the remediation template is `crr-909ba2d4716700eb****`.
 *
 * @param request CreateRemediationRequest
 * @return CreateRemediationResponse
 */
CreateRemediationResponse Client::createRemediation(const CreateRemediationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRemediationWithOptions(request, runtime);
}

/**
 * @summary Disables one or more rules in an account group. After a rule is disabled, the resource in the rule is no longer evaluated. The compliance evaluation results before the rule is disabled are still displayed.
 *
 * @description ### [](#)Prerequisites
 * The status of the rule is `ACTIVE`.
 * ### [](#)Description
 * This topic provides an example on how to disable the `cr-5772ba41209e007b****` rule in the `ca-04b3fd170e340007****` account group.
 *
 * @param request DeactiveAggregateConfigRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeactiveAggregateConfigRulesResponse
 */
DeactiveAggregateConfigRulesResponse Client::deactiveAggregateConfigRulesWithOptions(const DeactiveAggregateConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasCompliancePackId()) {
    query["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeactiveAggregateConfigRules"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeactiveAggregateConfigRulesResponse>();
}

/**
 * @summary Disables one or more rules in an account group. After a rule is disabled, the resource in the rule is no longer evaluated. The compliance evaluation results before the rule is disabled are still displayed.
 *
 * @description ### [](#)Prerequisites
 * The status of the rule is `ACTIVE`.
 * ### [](#)Description
 * This topic provides an example on how to disable the `cr-5772ba41209e007b****` rule in the `ca-04b3fd170e340007****` account group.
 *
 * @param request DeactiveAggregateConfigRulesRequest
 * @return DeactiveAggregateConfigRulesResponse
 */
DeactiveAggregateConfigRulesResponse Client::deactiveAggregateConfigRules(const DeactiveAggregateConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deactiveAggregateConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Disables a rule. After a rule is disabled, the resource in the rule is no longer evaluated. The compliance evaluation results before the rule is disabled are still displayed.
 *
 * @description ### [](#)Prerequisites
 * The status of the rule is `ACTIVE`.
 * ### [](#)Description
 * This topic provides an example on how to disable the `cr-19a56457e0d90058****` rule.
 *
 * @param request DeactiveConfigRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeactiveConfigRulesResponse
 */
DeactiveConfigRulesResponse Client::deactiveConfigRulesWithOptions(const DeactiveConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompliancePackId()) {
    query["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeactiveConfigRules"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeactiveConfigRulesResponse>();
}

/**
 * @summary Disables a rule. After a rule is disabled, the resource in the rule is no longer evaluated. The compliance evaluation results before the rule is disabled are still displayed.
 *
 * @description ### [](#)Prerequisites
 * The status of the rule is `ACTIVE`.
 * ### [](#)Description
 * This topic provides an example on how to disable the `cr-19a56457e0d90058****` rule.
 *
 * @param request DeactiveConfigRulesRequest
 * @return DeactiveConfigRulesResponse
 */
DeactiveConfigRulesResponse Client::deactiveConfigRules(const DeactiveConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deactiveConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes the compliance packages of an account group.
 *
 * @description This topic provides an example on how to delete the `cp-541e626622af0087****` compliance package from the `ca-04b3fd170e340007****` account group.
 *
 * @param request DeleteAggregateCompliancePacksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAggregateCompliancePacksResponse
 */
DeleteAggregateCompliancePacksResponse Client::deleteAggregateCompliancePacksWithOptions(const DeleteAggregateCompliancePacksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAggregatorId()) {
    body["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCompliancePackIds()) {
    body["CompliancePackIds"] = request.getCompliancePackIds();
  }

  if (!!request.hasDeleteRule()) {
    body["DeleteRule"] = request.getDeleteRule();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAggregateCompliancePacks"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAggregateCompliancePacksResponse>();
}

/**
 * @summary Deletes the compliance packages of an account group.
 *
 * @description This topic provides an example on how to delete the `cp-541e626622af0087****` compliance package from the `ca-04b3fd170e340007****` account group.
 *
 * @param request DeleteAggregateCompliancePacksRequest
 * @return DeleteAggregateCompliancePacksResponse
 */
DeleteAggregateCompliancePacksResponse Client::deleteAggregateCompliancePacks(const DeleteAggregateCompliancePacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAggregateCompliancePacksWithOptions(request, runtime);
}

/**
 * @summary Deletes a delivery channel from an account group.
 *
 * @description This topic provides an example on how to delete the `cdc-38c3013b46c9002c****` delivery channel from the `ca-23c6626622af0041****` account group. The returned result shows that the `cdc-38c3013b46c9002c****` delivery channel is deleted.
 *
 * @param request DeleteAggregateConfigDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAggregateConfigDeliveryChannelResponse
 */
DeleteAggregateConfigDeliveryChannelResponse Client::deleteAggregateConfigDeliveryChannelWithOptions(const DeleteAggregateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasDeliveryChannelId()) {
    query["DeliveryChannelId"] = request.getDeliveryChannelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAggregateConfigDeliveryChannel"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAggregateConfigDeliveryChannelResponse>();
}

/**
 * @summary Deletes a delivery channel from an account group.
 *
 * @description This topic provides an example on how to delete the `cdc-38c3013b46c9002c****` delivery channel from the `ca-23c6626622af0041****` account group. The returned result shows that the `cdc-38c3013b46c9002c****` delivery channel is deleted.
 *
 * @param request DeleteAggregateConfigDeliveryChannelRequest
 * @return DeleteAggregateConfigDeliveryChannelResponse
 */
DeleteAggregateConfigDeliveryChannelResponse Client::deleteAggregateConfigDeliveryChannel(const DeleteAggregateConfigDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAggregateConfigDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more rules from an account group. You can delete a rule in the Cloud Config console. After you delete the rule, the configurations of the rule are deleted.
 *
 * @description This topic provides an example on how to delete the `cr-4e3d626622af0080****` rule from the `ca-a4e5626622af0079****` account group.
 *
 * @param request DeleteAggregateConfigRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAggregateConfigRulesResponse
 */
DeleteAggregateConfigRulesResponse Client::deleteAggregateConfigRulesWithOptions(const DeleteAggregateConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAggregateConfigRules"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAggregateConfigRulesResponse>();
}

/**
 * @summary Deletes one or more rules from an account group. You can delete a rule in the Cloud Config console. After you delete the rule, the configurations of the rule are deleted.
 *
 * @description This topic provides an example on how to delete the `cr-4e3d626622af0080****` rule from the `ca-a4e5626622af0079****` account group.
 *
 * @param request DeleteAggregateConfigRulesRequest
 * @return DeleteAggregateConfigRulesResponse
 */
DeleteAggregateConfigRulesResponse Client::deleteAggregateConfigRules(const DeleteAggregateConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAggregateConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more remediation templates from a rule in an account group.
 *
 * @description This topic provides an example on how to delete the remediation template whose ID is `crr-909ba2d4716700eb****` from the account group whose ID is `ca-6b4a626622af0012****`. The returned result shows that the remediation template whose ID is `crr-909ba2d4716700eb****` is deleted.
 *
 * @param request DeleteAggregateRemediationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAggregateRemediationsResponse
 */
DeleteAggregateRemediationsResponse Client::deleteAggregateRemediationsWithOptions(const DeleteAggregateRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAggregatorId()) {
    body["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasRemediationIds()) {
    body["RemediationIds"] = request.getRemediationIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAggregateRemediations"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAggregateRemediationsResponse>();
}

/**
 * @summary Deletes one or more remediation templates from a rule in an account group.
 *
 * @description This topic provides an example on how to delete the remediation template whose ID is `crr-909ba2d4716700eb****` from the account group whose ID is `ca-6b4a626622af0012****`. The returned result shows that the remediation template whose ID is `crr-909ba2d4716700eb****` is deleted.
 *
 * @param request DeleteAggregateRemediationsRequest
 * @return DeleteAggregateRemediationsResponse
 */
DeleteAggregateRemediationsResponse Client::deleteAggregateRemediations(const DeleteAggregateRemediationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAggregateRemediationsWithOptions(request, runtime);
}

/**
 * @summary The management account or delegated administrator account of a resource directory can delete an account group.
 *
 * @description ### [](#)Background information
 * After you delete an account group, the following changes occur to Cloud Config:
 * *   The rules and compliance packages of the account group are deleted and cannot be recovered.
 * *   All compliance results generated in the account group are automatically deleted and cannot be recovered.
 * *   Service-linked roles for Cloud Config of member accounts in the account group are retained.
 * *   If the account groups to which a member belongs are all deleted, the member account uses Cloud Config as an independent Alibaba Cloud account.
 * ### [](#)Description
 * This topic provides an example on how to delete the account group whose ID is `ca-9190626622af00a9****`.
 *
 * @param request DeleteAggregatorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAggregatorsResponse
 */
DeleteAggregatorsResponse Client::deleteAggregatorsWithOptions(const DeleteAggregatorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAggregatorIds()) {
    body["AggregatorIds"] = request.getAggregatorIds();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAggregators"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAggregatorsResponse>();
}

/**
 * @summary The management account or delegated administrator account of a resource directory can delete an account group.
 *
 * @description ### [](#)Background information
 * After you delete an account group, the following changes occur to Cloud Config:
 * *   The rules and compliance packages of the account group are deleted and cannot be recovered.
 * *   All compliance results generated in the account group are automatically deleted and cannot be recovered.
 * *   Service-linked roles for Cloud Config of member accounts in the account group are retained.
 * *   If the account groups to which a member belongs are all deleted, the member account uses Cloud Config as an independent Alibaba Cloud account.
 * ### [](#)Description
 * This topic provides an example on how to delete the account group whose ID is `ca-9190626622af00a9****`.
 *
 * @param request DeleteAggregatorsRequest
 * @return DeleteAggregatorsResponse
 */
DeleteAggregatorsResponse Client::deleteAggregators(const DeleteAggregatorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAggregatorsWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more compliance packages.
 *
 * @description This topic provides an example on how to delete the `cp-541e626622af0087****` compliance package.
 *
 * @param request DeleteCompliancePacksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCompliancePacksResponse
 */
DeleteCompliancePacksResponse Client::deleteCompliancePacksWithOptions(const DeleteCompliancePacksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCompliancePackIds()) {
    body["CompliancePackIds"] = request.getCompliancePackIds();
  }

  if (!!request.hasDeleteRule()) {
    body["DeleteRule"] = request.getDeleteRule();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCompliancePacks"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCompliancePacksResponse>();
}

/**
 * @summary Deletes one or more compliance packages.
 *
 * @description This topic provides an example on how to delete the `cp-541e626622af0087****` compliance package.
 *
 * @param request DeleteCompliancePacksRequest
 * @return DeleteCompliancePacksResponse
 */
DeleteCompliancePacksResponse Client::deleteCompliancePacks(const DeleteCompliancePacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCompliancePacksWithOptions(request, runtime);
}

/**
 * @summary Deletes a delivery channel.
 *
 * @description This topic provides an example on how to delete the `cdc-38c3013b46c9002c****` delivery channel. The returned result shows that the `cdc-38c3013b46c9002c****` delivery channel is deleted.
 *
 * @param request DeleteConfigDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConfigDeliveryChannelResponse
 */
DeleteConfigDeliveryChannelResponse Client::deleteConfigDeliveryChannelWithOptions(const DeleteConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryChannelId()) {
    query["DeliveryChannelId"] = request.getDeliveryChannelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConfigDeliveryChannel"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConfigDeliveryChannelResponse>();
}

/**
 * @summary Deletes a delivery channel.
 *
 * @description This topic provides an example on how to delete the `cdc-38c3013b46c9002c****` delivery channel. The returned result shows that the `cdc-38c3013b46c9002c****` delivery channel is deleted.
 *
 * @param request DeleteConfigDeliveryChannelRequest
 * @return DeleteConfigDeliveryChannelResponse
 */
DeleteConfigDeliveryChannelResponse Client::deleteConfigDeliveryChannel(const DeleteConfigDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConfigDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Deletes rules.
 *
 * @description In this example, the rule whose ID is cr-9908626622af0035\\*\\*\\*\\* is deleted.
 *
 * @param request DeleteConfigRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConfigRulesResponse
 */
DeleteConfigRulesResponse Client::deleteConfigRulesWithOptions(const DeleteConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConfigRules"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConfigRulesResponse>();
}

/**
 * @summary Deletes rules.
 *
 * @description In this example, the rule whose ID is cr-9908626622af0035\\*\\*\\*\\* is deleted.
 *
 * @param request DeleteConfigRulesRequest
 * @return DeleteConfigRulesResponse
 */
DeleteConfigRulesResponse Client::deleteConfigRules(const DeleteConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more configured remediation templates that are associated with a rule.
 *
 * @description This topic provides an example on how to delete the remediation template `crr-909ba2d4716700eb****`. The returned result shows that the remediation template whose ID is `crr-909ba2d4716700eb****` is deleted.
 *
 * @param request DeleteRemediationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRemediationsResponse
 */
DeleteRemediationsResponse Client::deleteRemediationsWithOptions(const DeleteRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRemediationIds()) {
    body["RemediationIds"] = request.getRemediationIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteRemediations"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRemediationsResponse>();
}

/**
 * @summary Deletes one or more configured remediation templates that are associated with a rule.
 *
 * @description This topic provides an example on how to delete the remediation template `crr-909ba2d4716700eb****`. The returned result shows that the remediation template whose ID is `crr-909ba2d4716700eb****` is deleted.
 *
 * @param request DeleteRemediationsRequest
 * @return DeleteRemediationsResponse
 */
DeleteRemediationsResponse Client::deleteRemediations(const DeleteRemediationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRemediationsWithOptions(request, runtime);
}

/**
 * @summary 删除合规报告模版
 *
 * @param request DeleteReportTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteReportTemplateResponse
 */
DeleteReportTemplateResponse Client::deleteReportTemplateWithOptions(const DeleteReportTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasReportTemplateId()) {
    body["ReportTemplateId"] = request.getReportTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteReportTemplate"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteReportTemplateResponse>();
}

/**
 * @summary 删除合规报告模版
 *
 * @param request DeleteReportTemplateRequest
 * @return DeleteReportTemplateResponse
 */
DeleteReportTemplateResponse Client::deleteReportTemplate(const DeleteReportTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteReportTemplateWithOptions(request, runtime);
}

/**
 * @summary 批量获取资源详情
 *
 * @param request DescribeDiscoveredResourceBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiscoveredResourceBatchResponse
 */
DescribeDiscoveredResourceBatchResponse Client::describeDiscoveredResourceBatchWithOptions(const DescribeDiscoveredResourceBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegions()) {
    query["Regions"] = request.getRegions();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiscoveredResourceBatch"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiscoveredResourceBatchResponse>();
}

/**
 * @summary 批量获取资源详情
 *
 * @param request DescribeDiscoveredResourceBatchRequest
 * @return DescribeDiscoveredResourceBatchResponse
 */
DescribeDiscoveredResourceBatchResponse Client::describeDiscoveredResourceBatch(const DescribeDiscoveredResourceBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiscoveredResourceBatchWithOptions(request, runtime);
}

/**
 * @summary 查询用户集成云产品的授权状态
 *
 * @param request DescribeIntegratedServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIntegratedServiceStatusResponse
 */
DescribeIntegratedServiceStatusResponse Client::describeIntegratedServiceStatusWithOptions(const DescribeIntegratedServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasServiceCode()) {
    body["ServiceCode"] = request.getServiceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeIntegratedServiceStatus"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIntegratedServiceStatusResponse>();
}

/**
 * @summary 查询用户集成云产品的授权状态
 *
 * @param request DescribeIntegratedServiceStatusRequest
 * @return DescribeIntegratedServiceStatusResponse
 */
DescribeIntegratedServiceStatusResponse Client::describeIntegratedServiceStatus(const DescribeIntegratedServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIntegratedServiceStatusWithOptions(request, runtime);
}

/**
 * @summary This topic provides an example on how to query the details of a remediation configuration whose ID is crr-f381cf0c1c2f004e\\*\\*\\*\\*.
 *
 * @param request DescribeRemediationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRemediationResponse
 */
DescribeRemediationResponse Client::describeRemediationWithOptions(const DescribeRemediationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRemediation"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRemediationResponse>();
}

/**
 * @summary This topic provides an example on how to query the details of a remediation configuration whose ID is crr-f381cf0c1c2f004e\\*\\*\\*\\*.
 *
 * @param request DescribeRemediationRequest
 * @return DescribeRemediationResponse
 */
DescribeRemediationResponse Client::describeRemediation(const DescribeRemediationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRemediationWithOptions(request, runtime);
}

/**
 * @summary Removes one or more rules in an account group from a compliance package.
 *
 * @description ### Prerequisites
 * One or more rules are added to a compliance package.
 * ### Usage notes
 * The sample request in this topic shows you how to remove the `cr-6cc4626622af00e7****` rule in the `ca-75b4626622af00c3****` account group from the `cp-5bb1626622af00bd****` compliance package.
 *
 * @param request DetachAggregateConfigRuleToCompliancePackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachAggregateConfigRuleToCompliancePackResponse
 */
DetachAggregateConfigRuleToCompliancePackResponse Client::detachAggregateConfigRuleToCompliancePackWithOptions(const DetachAggregateConfigRuleToCompliancePackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasCompliancePackId()) {
    query["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachAggregateConfigRuleToCompliancePack"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachAggregateConfigRuleToCompliancePackResponse>();
}

/**
 * @summary Removes one or more rules in an account group from a compliance package.
 *
 * @description ### Prerequisites
 * One or more rules are added to a compliance package.
 * ### Usage notes
 * The sample request in this topic shows you how to remove the `cr-6cc4626622af00e7****` rule in the `ca-75b4626622af00c3****` account group from the `cp-5bb1626622af00bd****` compliance package.
 *
 * @param request DetachAggregateConfigRuleToCompliancePackRequest
 * @return DetachAggregateConfigRuleToCompliancePackResponse
 */
DetachAggregateConfigRuleToCompliancePackResponse Client::detachAggregateConfigRuleToCompliancePack(const DetachAggregateConfigRuleToCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachAggregateConfigRuleToCompliancePackWithOptions(request, runtime);
}

/**
 * @summary Removes one or more rules from a compliance package.
 *
 * @description ### Prerequisites
 * One or more rules are added to a compliance package.
 * ### Usage notes
 * This topic provides an example on how to remove the `cr-6cc4626622af00e7****` rule from the `cp-5bb1626622af00bd****` compliance package.
 *
 * @param request DetachConfigRuleToCompliancePackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachConfigRuleToCompliancePackResponse
 */
DetachConfigRuleToCompliancePackResponse Client::detachConfigRuleToCompliancePackWithOptions(const DetachConfigRuleToCompliancePackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompliancePackId()) {
    query["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachConfigRuleToCompliancePack"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachConfigRuleToCompliancePackResponse>();
}

/**
 * @summary Removes one or more rules from a compliance package.
 *
 * @description ### Prerequisites
 * One or more rules are added to a compliance package.
 * ### Usage notes
 * This topic provides an example on how to remove the `cr-6cc4626622af00e7****` rule from the `cp-5bb1626622af00bd****` compliance package.
 *
 * @param request DetachConfigRuleToCompliancePackRequest
 * @return DetachConfigRuleToCompliancePackResponse
 */
DetachConfigRuleToCompliancePackResponse Client::detachConfigRuleToCompliancePack(const DetachConfigRuleToCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachConfigRuleToCompliancePackWithOptions(request, runtime);
}

/**
 * @summary 试运行事前合规预检的规则
 *
 * @param request DryRunConfigRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DryRunConfigRuleResponse
 */
DryRunConfigRuleResponse Client::dryRunConfigRuleWithOptions(const DryRunConfigRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigurationItem()) {
    body["ConfigurationItem"] = request.getConfigurationItem();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DryRunConfigRule"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DryRunConfigRuleResponse>();
}

/**
 * @summary 试运行事前合规预检的规则
 *
 * @param request DryRunConfigRuleRequest
 * @return DryRunConfigRuleResponse
 */
DryRunConfigRuleResponse Client::dryRunConfigRule(const DryRunConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dryRunConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Executes evaluation rules to evaluate resources.
 *
 * @param tmpReq EvaluatePreConfigRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EvaluatePreConfigRulesResponse
 */
EvaluatePreConfigRulesResponse Client::evaluatePreConfigRulesWithOptions(const EvaluatePreConfigRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EvaluatePreConfigRulesShrinkRequest request = EvaluatePreConfigRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceEvaluateItems()) {
    request.setResourceEvaluateItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceEvaluateItems(), "ResourceEvaluateItems", "json"));
  }

  json body = {};
  if (!!request.hasEnableManagedRules()) {
    body["EnableManagedRules"] = request.getEnableManagedRules();
  }

  if (!!request.hasResourceEvaluateItemsShrink()) {
    body["ResourceEvaluateItems"] = request.getResourceEvaluateItemsShrink();
  }

  if (!!request.hasResourceTypeFormat()) {
    body["ResourceTypeFormat"] = request.getResourceTypeFormat();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EvaluatePreConfigRules"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EvaluatePreConfigRulesResponse>();
}

/**
 * @summary Executes evaluation rules to evaluate resources.
 *
 * @param request EvaluatePreConfigRulesRequest
 * @return EvaluatePreConfigRulesResponse
 */
EvaluatePreConfigRulesResponse Client::evaluatePreConfigRules(const EvaluatePreConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return evaluatePreConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Generates a compliance evaluation report based on a compliance package in an account group.
 *
 * @description > You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetAggregateConfigRulesReport operation. For more information, see [GetAggregateCompliancePackReport](https://help.aliyun.com/document_detail/262699.html).
 * This topic provides an example on how to generate a compliance evaluation report based on the `cp-fdc8626622af00f9****` compliance package in the `ca-f632626622af0079****` account group.
 *
 * @param request GenerateAggregateCompliancePackReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateAggregateCompliancePackReportResponse
 */
GenerateAggregateCompliancePackReportResponse Client::generateAggregateCompliancePackReportWithOptions(const GenerateAggregateCompliancePackReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAggregatorId()) {
    body["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCompliancePackId()) {
    body["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasMultiFiles()) {
    body["MultiFiles"] = request.getMultiFiles();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GenerateAggregateCompliancePackReport"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateAggregateCompliancePackReportResponse>();
}

/**
 * @summary Generates a compliance evaluation report based on a compliance package in an account group.
 *
 * @description > You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetAggregateConfigRulesReport operation. For more information, see [GetAggregateCompliancePackReport](https://help.aliyun.com/document_detail/262699.html).
 * This topic provides an example on how to generate a compliance evaluation report based on the `cp-fdc8626622af00f9****` compliance package in the `ca-f632626622af0079****` account group.
 *
 * @param request GenerateAggregateCompliancePackReportRequest
 * @return GenerateAggregateCompliancePackReportResponse
 */
GenerateAggregateCompliancePackReportResponse Client::generateAggregateCompliancePackReport(const GenerateAggregateCompliancePackReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateAggregateCompliancePackReportWithOptions(request, runtime);
}

/**
 * @summary Generates a compliance evaluation report for the rules in a specified account group.
 *
 * @description > You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetAggregateConfigRulesReport operation. For more information, see [GetAggregateConfigRulesReport](https://help.aliyun.com/document_detail/262706.html).
 * The topic provides an example on how to generate a compliance evaluation report based on all rules in the `ca-f632626622af0079****` account group.
 *
 * @param request GenerateAggregateConfigRulesReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateAggregateConfigRulesReportResponse
 */
GenerateAggregateConfigRulesReportResponse Client::generateAggregateConfigRulesReportWithOptions(const GenerateAggregateConfigRulesReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAggregatorId()) {
    body["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigRuleIds()) {
    body["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GenerateAggregateConfigRulesReport"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateAggregateConfigRulesReportResponse>();
}

/**
 * @summary Generates a compliance evaluation report for the rules in a specified account group.
 *
 * @description > You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetAggregateConfigRulesReport operation. For more information, see [GetAggregateConfigRulesReport](https://help.aliyun.com/document_detail/262706.html).
 * The topic provides an example on how to generate a compliance evaluation report based on all rules in the `ca-f632626622af0079****` account group.
 *
 * @param request GenerateAggregateConfigRulesReportRequest
 * @return GenerateAggregateConfigRulesReportResponse
 */
GenerateAggregateConfigRulesReportResponse Client::generateAggregateConfigRulesReport(const GenerateAggregateConfigRulesReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateAggregateConfigRulesReportWithOptions(request, runtime);
}

/**
 * @summary Generates a downloadable inventory for global resources in an account group.
 *
 * @description This topic provides an example to show how to generate a downloadable inventory for global resources in the account group ca-a91d626622af0035\\*\\*\\*\\*.
 *
 * @param request GenerateAggregateResourceInventoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateAggregateResourceInventoryResponse
 */
GenerateAggregateResourceInventoryResponse Client::generateAggregateResourceInventoryWithOptions(const GenerateAggregateResourceInventoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountIds()) {
    query["AccountIds"] = request.getAccountIds();
  }

  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasRegions()) {
    query["Regions"] = request.getRegions();
  }

  if (!!request.hasResourceDeleted()) {
    query["ResourceDeleted"] = request.getResourceDeleted();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateAggregateResourceInventory"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateAggregateResourceInventoryResponse>();
}

/**
 * @summary Generates a downloadable inventory for global resources in an account group.
 *
 * @description This topic provides an example to show how to generate a downloadable inventory for global resources in the account group ca-a91d626622af0035\\*\\*\\*\\*.
 *
 * @param request GenerateAggregateResourceInventoryRequest
 * @return GenerateAggregateResourceInventoryResponse
 */
GenerateAggregateResourceInventoryResponse Client::generateAggregateResourceInventory(const GenerateAggregateResourceInventoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateAggregateResourceInventoryWithOptions(request, runtime);
}

/**
 * @summary Generates a compliance evaluation report based on a compliance package.
 *
 * @description > You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetCompliancePackReport operation. For more information, see [GetCompliancePackReport](https://help.aliyun.com/document_detail/263347.html).
 * This topic provides an example on how to generate a compliance evaluation report based on the `cp-a8a8626622af0082****` compliance package.
 *
 * @param request GenerateCompliancePackReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateCompliancePackReportResponse
 */
GenerateCompliancePackReportResponse Client::generateCompliancePackReportWithOptions(const GenerateCompliancePackReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCompliancePackId()) {
    body["CompliancePackId"] = request.getCompliancePackId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GenerateCompliancePackReport"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateCompliancePackReportResponse>();
}

/**
 * @summary Generates a compliance evaluation report based on a compliance package.
 *
 * @description > You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetCompliancePackReport operation. For more information, see [GetCompliancePackReport](https://help.aliyun.com/document_detail/263347.html).
 * This topic provides an example on how to generate a compliance evaluation report based on the `cp-a8a8626622af0082****` compliance package.
 *
 * @param request GenerateCompliancePackReportRequest
 * @return GenerateCompliancePackReportResponse
 */
GenerateCompliancePackReportResponse Client::generateCompliancePackReport(const GenerateCompliancePackReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateCompliancePackReportWithOptions(request, runtime);
}

/**
 * @summary Generates a compliance evaluation report for a rule.
 *
 * @description >  You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetConfigRulesReport operation. For more information, see [GetConfigRulesReport](https://help.aliyun.com/document_detail/263608.html).
 * This topic provides an example of how to generate a compliance evaluation report based on all existing rules.
 *
 * @param request GenerateConfigRulesReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateConfigRulesReportResponse
 */
GenerateConfigRulesReportResponse Client::generateConfigRulesReportWithOptions(const GenerateConfigRulesReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigRuleIds()) {
    body["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GenerateConfigRulesReport"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateConfigRulesReportResponse>();
}

/**
 * @summary Generates a compliance evaluation report for a rule.
 *
 * @description >  You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetConfigRulesReport operation. For more information, see [GetConfigRulesReport](https://help.aliyun.com/document_detail/263608.html).
 * This topic provides an example of how to generate a compliance evaluation report based on all existing rules.
 *
 * @param request GenerateConfigRulesReportRequest
 * @return GenerateConfigRulesReportResponse
 */
GenerateConfigRulesReportResponse Client::generateConfigRulesReport(const GenerateConfigRulesReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateConfigRulesReportWithOptions(request, runtime);
}

/**
 * @summary 基于报告模版生成报告Id
 *
 * @param request GenerateReportFromTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateReportFromTemplateResponse
 */
GenerateReportFromTemplateResponse Client::generateReportFromTemplateWithOptions(const GenerateReportFromTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasReportTemplateId()) {
    body["ReportTemplateId"] = request.getReportTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GenerateReportFromTemplate"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateReportFromTemplateResponse>();
}

/**
 * @summary 基于报告模版生成报告Id
 *
 * @param request GenerateReportFromTemplateRequest
 * @return GenerateReportFromTemplateResponse
 */
GenerateReportFromTemplateResponse Client::generateReportFromTemplate(const GenerateReportFromTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateReportFromTemplateWithOptions(request, runtime);
}

/**
 * @summary Generates a resource inventory for global resources.
 *
 * @description This topic provides an example on how to generate a resource inventory for global resources of the current account.
 *
 * @param request GenerateResourceInventoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateResourceInventoryResponse
 */
GenerateResourceInventoryResponse Client::generateResourceInventoryWithOptions(const GenerateResourceInventoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegions()) {
    query["Regions"] = request.getRegions();
  }

  if (!!request.hasResourceDeleted()) {
    query["ResourceDeleted"] = request.getResourceDeleted();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateResourceInventory"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateResourceInventoryResponse>();
}

/**
 * @summary Generates a resource inventory for global resources.
 *
 * @description This topic provides an example on how to generate a resource inventory for global resources of the current account.
 *
 * @param request GenerateResourceInventoryRequest
 * @return GenerateResourceInventoryResponse
 */
GenerateResourceInventoryResponse Client::generateResourceInventory(const GenerateResourceInventoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateResourceInventoryWithOptions(request, runtime);
}

/**
 * @summary Obtains the last resource advanced search file that is generated within the current account. You can call this operation to obtain the URL of the resource advanced search file.
 *
 * @description ### [](#)Prerequisites
 * You must call the [CreateAdvancedSearchFile](https://help.aliyun.com/document_detail/2511967.html) operation to create a resource advanced search file. Then, you can call this operation to obtain the URL of the resource advanced search file.
 *
 * @param request GetAdvancedSearchFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAdvancedSearchFileResponse
 */
GetAdvancedSearchFileResponse Client::getAdvancedSearchFileWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetAdvancedSearchFile"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAdvancedSearchFileResponse>();
}

/**
 * @summary Obtains the last resource advanced search file that is generated within the current account. You can call this operation to obtain the URL of the resource advanced search file.
 *
 * @description ### [](#)Prerequisites
 * You must call the [CreateAdvancedSearchFile](https://help.aliyun.com/document_detail/2511967.html) operation to create a resource advanced search file. Then, you can call this operation to obtain the URL of the resource advanced search file.
 *
 * @return GetAdvancedSearchFileResponse
 */
GetAdvancedSearchFileResponse Client::getAdvancedSearchFile() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAdvancedSearchFileWithOptions(runtime);
}

/**
 * @summary Queries the compliance evaluation results of member accounts for which a compliance package takes effect in an account group.
 *
 * @description This topic provides an example on how to query the compliance evaluation results of member accounts for which the `cp-541e626622af0087****` compliance package takes effect in the `ca-04b3fd170e340007****` account group. The returned result shows that two member accounts are monitored by the compliance package and they are both evaluated as compliant.
 *
 * @param request GetAggregateAccountComplianceByPackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateAccountComplianceByPackResponse
 */
GetAggregateAccountComplianceByPackResponse Client::getAggregateAccountComplianceByPackWithOptions(const GetAggregateAccountComplianceByPackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateAccountComplianceByPack"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateAccountComplianceByPackResponse>();
}

/**
 * @summary Queries the compliance evaluation results of member accounts for which a compliance package takes effect in an account group.
 *
 * @description This topic provides an example on how to query the compliance evaluation results of member accounts for which the `cp-541e626622af0087****` compliance package takes effect in the `ca-04b3fd170e340007****` account group. The returned result shows that two member accounts are monitored by the compliance package and they are both evaluated as compliant.
 *
 * @param request GetAggregateAccountComplianceByPackRequest
 * @return GetAggregateAccountComplianceByPackResponse
 */
GetAggregateAccountComplianceByPackResponse Client::getAggregateAccountComplianceByPack(const GetAggregateAccountComplianceByPackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateAccountComplianceByPackWithOptions(request, runtime);
}

/**
 * @summary Queries the most recently generated resource file of an account group.
 *
 * @param request GetAggregateAdvancedSearchFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateAdvancedSearchFileResponse
 */
GetAggregateAdvancedSearchFileResponse Client::getAggregateAdvancedSearchFileWithOptions(const GetAggregateAdvancedSearchFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateAdvancedSearchFile"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateAdvancedSearchFileResponse>();
}

/**
 * @summary Queries the most recently generated resource file of an account group.
 *
 * @param request GetAggregateAdvancedSearchFileRequest
 * @return GetAggregateAdvancedSearchFileResponse
 */
GetAggregateAdvancedSearchFileResponse Client::getAggregateAdvancedSearchFile(const GetAggregateAdvancedSearchFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateAdvancedSearchFileWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a compliance package in an account group.
 *
 * @description The topic provides an example on how to query the details of a compliance package whose ID is `cp-fdc8626622af00f9****` in an account group whose ID is `ca-f632626622af0079****`.
 *
 * @param tmpReq GetAggregateCompliancePackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateCompliancePackResponse
 */
GetAggregateCompliancePackResponse Client::getAggregateCompliancePackWithOptions(const GetAggregateCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAggregateCompliancePackShrinkRequest request = GetAggregateCompliancePackShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateCompliancePack"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateCompliancePackResponse>();
}

/**
 * @summary Queries the details of a compliance package in an account group.
 *
 * @description The topic provides an example on how to query the details of a compliance package whose ID is `cp-fdc8626622af00f9****` in an account group whose ID is `ca-f632626622af0079****`.
 *
 * @param request GetAggregateCompliancePackRequest
 * @return GetAggregateCompliancePackResponse
 */
GetAggregateCompliancePackResponse Client::getAggregateCompliancePack(const GetAggregateCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateCompliancePackWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance evaluation report that is generated based on a compliance package of an account group.
 *
 * @description > Before you call this operation, you must call the GenerateAggregateCompliancePackReport operation to generate the latest compliance evaluation report based on a compliance package. For more information, see [GenerateAggregateCompliancePackReport](https://help.aliyun.com/document_detail/262687.html).
 * This topic provides an example on how to query the compliance evaluation report that is generated based on the `cp-fdc8626622af00f9****` compliance package in the `ca-f632626622af0079****` account group.
 *
 * @param request GetAggregateCompliancePackReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateCompliancePackReportResponse
 */
GetAggregateCompliancePackReportResponse Client::getAggregateCompliancePackReportWithOptions(const GetAggregateCompliancePackReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateCompliancePackReport"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateCompliancePackReportResponse>();
}

/**
 * @summary Queries the compliance evaluation report that is generated based on a compliance package of an account group.
 *
 * @description > Before you call this operation, you must call the GenerateAggregateCompliancePackReport operation to generate the latest compliance evaluation report based on a compliance package. For more information, see [GenerateAggregateCompliancePackReport](https://help.aliyun.com/document_detail/262687.html).
 * This topic provides an example on how to query the compliance evaluation report that is generated based on the `cp-fdc8626622af00f9****` compliance package in the `ca-f632626622af0079****` account group.
 *
 * @param request GetAggregateCompliancePackReportRequest
 * @return GetAggregateCompliancePackReportResponse
 */
GetAggregateCompliancePackReportResponse Client::getAggregateCompliancePackReport(const GetAggregateCompliancePackReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateCompliancePackReportWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance statistics of an account group.
 *
 * @description This topic provides an example on how to query the compliance statistics of resources and rules in the account group ca-a91d626622af0035\\*\\*\\*\\*.
 *
 * @param request GetAggregateComplianceSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateComplianceSummaryResponse
 */
GetAggregateComplianceSummaryResponse Client::getAggregateComplianceSummaryWithOptions(const GetAggregateComplianceSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateComplianceSummary"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateComplianceSummaryResponse>();
}

/**
 * @summary Queries the compliance statistics of an account group.
 *
 * @description This topic provides an example on how to query the compliance statistics of resources and rules in the account group ca-a91d626622af0035\\*\\*\\*\\*.
 *
 * @param request GetAggregateComplianceSummaryRequest
 * @return GetAggregateComplianceSummaryResponse
 */
GetAggregateComplianceSummaryResponse Client::getAggregateComplianceSummary(const GetAggregateComplianceSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateComplianceSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a delivery channel in an account group.
 *
 * @param request GetAggregateConfigDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateConfigDeliveryChannelResponse
 */
GetAggregateConfigDeliveryChannelResponse Client::getAggregateConfigDeliveryChannelWithOptions(const GetAggregateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasDeliveryChannelId()) {
    query["DeliveryChannelId"] = request.getDeliveryChannelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateConfigDeliveryChannel"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateConfigDeliveryChannelResponse>();
}

/**
 * @summary Queries the information about a delivery channel in an account group.
 *
 * @param request GetAggregateConfigDeliveryChannelRequest
 * @return GetAggregateConfigDeliveryChannelResponse
 */
GetAggregateConfigDeliveryChannelResponse Client::getAggregateConfigDeliveryChannel(const GetAggregateConfigDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateConfigDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a rule in an account group.
 *
 * @description This example shows how to query the details of the `cr-7f7d626622af0041****` rule in the `ca-7f00626622af0041****` account group.
 *
 * @param tmpReq GetAggregateConfigRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateConfigRuleResponse
 */
GetAggregateConfigRuleResponse Client::getAggregateConfigRuleWithOptions(const GetAggregateConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAggregateConfigRuleShrinkRequest request = GetAggregateConfigRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasConfigRuleId()) {
    query["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateConfigRule"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateConfigRuleResponse>();
}

/**
 * @summary Queries the details of a rule in an account group.
 *
 * @description This example shows how to query the details of the `cr-7f7d626622af0041****` rule in the `ca-7f00626622af0041****` account group.
 *
 * @param request GetAggregateConfigRuleRequest
 * @return GetAggregateConfigRuleResponse
 */
GetAggregateConfigRuleResponse Client::getAggregateConfigRule(const GetAggregateConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Queries compliance evaluation results based on the rules in a compliance package in an account group.
 *
 * @description The sample request in this topic shows you how to query the compliance evaluation results based on rules in the `cp-541e626622af0087****` compliance package that is created for the `ca-04b3fd170e340007****` account group. The return result shows a total of `one` rule. `No resources` are evaluated as non-compliant based on the rule.
 *
 * @param request GetAggregateConfigRuleComplianceByPackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateConfigRuleComplianceByPackResponse
 */
GetAggregateConfigRuleComplianceByPackResponse Client::getAggregateConfigRuleComplianceByPackWithOptions(const GetAggregateConfigRuleComplianceByPackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateConfigRuleComplianceByPack"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateConfigRuleComplianceByPackResponse>();
}

/**
 * @summary Queries compliance evaluation results based on the rules in a compliance package in an account group.
 *
 * @description The sample request in this topic shows you how to query the compliance evaluation results based on rules in the `cp-541e626622af0087****` compliance package that is created for the `ca-04b3fd170e340007****` account group. The return result shows a total of `one` rule. `No resources` are evaluated as non-compliant based on the rule.
 *
 * @param request GetAggregateConfigRuleComplianceByPackRequest
 * @return GetAggregateConfigRuleComplianceByPackResponse
 */
GetAggregateConfigRuleComplianceByPackResponse Client::getAggregateConfigRuleComplianceByPack(const GetAggregateConfigRuleComplianceByPackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateConfigRuleComplianceByPackWithOptions(request, runtime);
}

/**
 * @summary Queries the summary of compliance evaluation results by rule risk level in an account group.
 *
 * @description This topic provides an example on how to query the summary of compliance evaluation results by rule risk level in the `ca-3a58626622af0005****` account group. The returned result shows four rules that are specified with the high risk level. One of the rules detects non-compliant resources, and the resources evaluated by the remaining three are compliant.
 *
 * @param request GetAggregateConfigRuleSummaryByRiskLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateConfigRuleSummaryByRiskLevelResponse
 */
GetAggregateConfigRuleSummaryByRiskLevelResponse Client::getAggregateConfigRuleSummaryByRiskLevelWithOptions(const GetAggregateConfigRuleSummaryByRiskLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateConfigRuleSummaryByRiskLevel"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateConfigRuleSummaryByRiskLevelResponse>();
}

/**
 * @summary Queries the summary of compliance evaluation results by rule risk level in an account group.
 *
 * @description This topic provides an example on how to query the summary of compliance evaluation results by rule risk level in the `ca-3a58626622af0005****` account group. The returned result shows four rules that are specified with the high risk level. One of the rules detects non-compliant resources, and the resources evaluated by the remaining three are compliant.
 *
 * @param request GetAggregateConfigRuleSummaryByRiskLevelRequest
 * @return GetAggregateConfigRuleSummaryByRiskLevelResponse
 */
GetAggregateConfigRuleSummaryByRiskLevelResponse Client::getAggregateConfigRuleSummaryByRiskLevel(const GetAggregateConfigRuleSummaryByRiskLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateConfigRuleSummaryByRiskLevelWithOptions(request, runtime);
}

/**
 * @summary Downloads the compliance evaluation report in the Excel format to your on-premises machine. This allows you to assign tasks and modify incompliant resource configurations.
 *
 * @description > Before you call this operation, you must call the GenerateAggregateConfigRulesReport operation to generate the latest compliance evaluation report based on all rules in an account group. For more information, see [GenerateAggregateConfigRulesReport](https://help.aliyun.com/document_detail/262701.html).
 * This topic provides an example on how to query the compliance evaluation report that is generated based on all rules in the `ca-f632626622af0079****` account group.
 *
 * @param request GetAggregateConfigRulesReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateConfigRulesReportResponse
 */
GetAggregateConfigRulesReportResponse Client::getAggregateConfigRulesReportWithOptions(const GetAggregateConfigRulesReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasReportId()) {
    query["ReportId"] = request.getReportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateConfigRulesReport"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateConfigRulesReportResponse>();
}

/**
 * @summary Downloads the compliance evaluation report in the Excel format to your on-premises machine. This allows you to assign tasks and modify incompliant resource configurations.
 *
 * @description > Before you call this operation, you must call the GenerateAggregateConfigRulesReport operation to generate the latest compliance evaluation report based on all rules in an account group. For more information, see [GenerateAggregateConfigRulesReport](https://help.aliyun.com/document_detail/262701.html).
 * This topic provides an example on how to query the compliance evaluation report that is generated based on all rules in the `ca-f632626622af0079****` account group.
 *
 * @param request GetAggregateConfigRulesReportRequest
 * @return GetAggregateConfigRulesReportResponse
 */
GetAggregateConfigRulesReportResponse Client::getAggregateConfigRulesReport(const GetAggregateConfigRulesReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateConfigRulesReportWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specific resource in an account group.
 *
 * @description This topic provides an example on how to query the details of an Elastic Compute Service (ECS) instance `i-bp12g4xbl4i0brkn****` that resides in the China (Hangzhou) region in the account group `ca-5885626622af0008****`.
 *
 * @param request GetAggregateDiscoveredResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateDiscoveredResourceResponse
 */
GetAggregateDiscoveredResourceResponse Client::getAggregateDiscoveredResourceWithOptions(const GetAggregateDiscoveredResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasComplianceOption()) {
    query["ComplianceOption"] = request.getComplianceOption();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasResourceAccountId()) {
    query["ResourceAccountId"] = request.getResourceAccountId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
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
    {"action" , "GetAggregateDiscoveredResource"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateDiscoveredResourceResponse>();
}

/**
 * @summary Queries the details of a specific resource in an account group.
 *
 * @description This topic provides an example on how to query the details of an Elastic Compute Service (ECS) instance `i-bp12g4xbl4i0brkn****` that resides in the China (Hangzhou) region in the account group `ca-5885626622af0008****`.
 *
 * @param request GetAggregateDiscoveredResourceRequest
 * @return GetAggregateDiscoveredResourceResponse
 */
GetAggregateDiscoveredResourceResponse Client::getAggregateDiscoveredResource(const GetAggregateDiscoveredResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateDiscoveredResourceWithOptions(request, runtime);
}

/**
 * @summary Queries compliance evaluation results based on the rules in a compliance package in an account group.
 *
 * @description This topic provides an example on how to query the compliance evaluation results based on the `cr-d369626622af008e****` rule in the `ca-a4e5626622af0079****` account group. The returned result shows that a total of 10 resources are evaluated by the rule and five of them are evaluated as compliant.
 *
 * @param request GetAggregateResourceComplianceByConfigRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateResourceComplianceByConfigRuleResponse
 */
GetAggregateResourceComplianceByConfigRuleResponse Client::getAggregateResourceComplianceByConfigRuleWithOptions(const GetAggregateResourceComplianceByConfigRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasComplianceType()) {
    query["ComplianceType"] = request.getComplianceType();
  }

  if (!!request.hasConfigRuleId()) {
    query["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasResourceAccountId()) {
    query["ResourceAccountId"] = request.getResourceAccountId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateResourceComplianceByConfigRule"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateResourceComplianceByConfigRuleResponse>();
}

/**
 * @summary Queries compliance evaluation results based on the rules in a compliance package in an account group.
 *
 * @description This topic provides an example on how to query the compliance evaluation results based on the `cr-d369626622af008e****` rule in the `ca-a4e5626622af0079****` account group. The returned result shows that a total of 10 resources are evaluated by the rule and five of them are evaluated as compliant.
 *
 * @param request GetAggregateResourceComplianceByConfigRuleRequest
 * @return GetAggregateResourceComplianceByConfigRuleResponse
 */
GetAggregateResourceComplianceByConfigRuleResponse Client::getAggregateResourceComplianceByConfigRule(const GetAggregateResourceComplianceByConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceComplianceByConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance evaluation results of resources evaluated based on a compliance package of an account group.
 *
 * @description This topic provides an example on how to query the compliance evaluation results of resources monitored based on the `cp-fdc8626622af00f9****` compliance package in the `ca-f632626622af0079****`account group. The returned result shows that the total number of monitored resources is `10` and the number of non-compliant resources is `7`.
 *
 * @param request GetAggregateResourceComplianceByPackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateResourceComplianceByPackResponse
 */
GetAggregateResourceComplianceByPackResponse Client::getAggregateResourceComplianceByPackWithOptions(const GetAggregateResourceComplianceByPackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateResourceComplianceByPack"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateResourceComplianceByPackResponse>();
}

/**
 * @summary Queries the compliance evaluation results of resources evaluated based on a compliance package of an account group.
 *
 * @description This topic provides an example on how to query the compliance evaluation results of resources monitored based on the `cp-fdc8626622af00f9****` compliance package in the `ca-f632626622af0079****`account group. The returned result shows that the total number of monitored resources is `10` and the number of non-compliant resources is `7`.
 *
 * @param request GetAggregateResourceComplianceByPackRequest
 * @return GetAggregateResourceComplianceByPackResponse
 */
GetAggregateResourceComplianceByPackResponse Client::getAggregateResourceComplianceByPack(const GetAggregateResourceComplianceByPackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceComplianceByPackWithOptions(request, runtime);
}

/**
 * @summary Queries the evaluation results grouped by resource type for an account group rule.
 *
 * @param request GetAggregateResourceComplianceGroupByRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateResourceComplianceGroupByRegionResponse
 */
GetAggregateResourceComplianceGroupByRegionResponse Client::getAggregateResourceComplianceGroupByRegionWithOptions(const GetAggregateResourceComplianceGroupByRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateResourceComplianceGroupByRegion"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateResourceComplianceGroupByRegionResponse>();
}

/**
 * @summary Queries the evaluation results grouped by resource type for an account group rule.
 *
 * @param request GetAggregateResourceComplianceGroupByRegionRequest
 * @return GetAggregateResourceComplianceGroupByRegionResponse
 */
GetAggregateResourceComplianceGroupByRegionResponse Client::getAggregateResourceComplianceGroupByRegion(const GetAggregateResourceComplianceGroupByRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceComplianceGroupByRegionWithOptions(request, runtime);
}

/**
 * @summary Queries the evaluation results grouped by resource type for an account group rule.
 *
 * @param request GetAggregateResourceComplianceGroupByResourceTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateResourceComplianceGroupByResourceTypeResponse
 */
GetAggregateResourceComplianceGroupByResourceTypeResponse Client::getAggregateResourceComplianceGroupByResourceTypeWithOptions(const GetAggregateResourceComplianceGroupByResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateResourceComplianceGroupByResourceType"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateResourceComplianceGroupByResourceTypeResponse>();
}

/**
 * @summary Queries the evaluation results grouped by resource type for an account group rule.
 *
 * @param request GetAggregateResourceComplianceGroupByResourceTypeRequest
 * @return GetAggregateResourceComplianceGroupByResourceTypeResponse
 */
GetAggregateResourceComplianceGroupByResourceTypeResponse Client::getAggregateResourceComplianceGroupByResourceType(const GetAggregateResourceComplianceGroupByResourceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceComplianceGroupByResourceTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance timeline of a resource in an account group.
 *
 * @description The sample request in this topic shows you how to query the compliance timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region within the `100931896542****` member account of the `ca-5885626622af0008****` account group. The new-bucket resource is an Object Storage Service (OSS) bucket. The return result shows the following two timestamps on the compliance timeline: `1625200295276` and `1625200228510`. The first timestamp indicates 12:31:35 on July 2, 2021 (UTC+8), and the second timestamp indicates 12:30:28 on July 2, 2021 (UTC+8).
 *
 * @param request GetAggregateResourceComplianceTimelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateResourceComplianceTimelineResponse
 */
GetAggregateResourceComplianceTimelineResponse Client::getAggregateResourceComplianceTimelineWithOptions(const GetAggregateResourceComplianceTimelineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateResourceComplianceTimeline"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateResourceComplianceTimelineResponse>();
}

/**
 * @summary Queries the compliance timeline of a resource in an account group.
 *
 * @description The sample request in this topic shows you how to query the compliance timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region within the `100931896542****` member account of the `ca-5885626622af0008****` account group. The new-bucket resource is an Object Storage Service (OSS) bucket. The return result shows the following two timestamps on the compliance timeline: `1625200295276` and `1625200228510`. The first timestamp indicates 12:31:35 on July 2, 2021 (UTC+8), and the second timestamp indicates 12:30:28 on July 2, 2021 (UTC+8).
 *
 * @param request GetAggregateResourceComplianceTimelineRequest
 * @return GetAggregateResourceComplianceTimelineResponse
 */
GetAggregateResourceComplianceTimelineResponse Client::getAggregateResourceComplianceTimeline(const GetAggregateResourceComplianceTimelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceComplianceTimelineWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration timeline of a resource in an account group.
 *
 * @description The sample request in this topic shows you how to query the configuration timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region within the `100931896542****` member account of the `ca-5885626622af0008****` account group. The new-bucket resource is an Object Storage Service (OSS) bucket. The return result shows that the timestamp when the resource configuration changes is `1624961112000`. The timestamp indicates 18:05:12 on June 29, 2021 (UTC+8).
 *
 * @param request GetAggregateResourceConfigurationTimelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateResourceConfigurationTimelineResponse
 */
GetAggregateResourceConfigurationTimelineResponse Client::getAggregateResourceConfigurationTimelineWithOptions(const GetAggregateResourceConfigurationTimelineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateResourceConfigurationTimeline"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateResourceConfigurationTimelineResponse>();
}

/**
 * @summary Queries the configuration timeline of a resource in an account group.
 *
 * @description The sample request in this topic shows you how to query the configuration timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region within the `100931896542****` member account of the `ca-5885626622af0008****` account group. The new-bucket resource is an Object Storage Service (OSS) bucket. The return result shows that the timestamp when the resource configuration changes is `1624961112000`. The timestamp indicates 18:05:12 on June 29, 2021 (UTC+8).
 *
 * @param request GetAggregateResourceConfigurationTimelineRequest
 * @return GetAggregateResourceConfigurationTimelineResponse
 */
GetAggregateResourceConfigurationTimelineResponse Client::getAggregateResourceConfigurationTimeline(const GetAggregateResourceConfigurationTimelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceConfigurationTimelineWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on the resources in an account group by region.
 *
 * @description This topic provides an example on how to query the statistics on the resources in an account group named `ca-a260626622af0005****` by region. The returned result shows that a total of `10` resources exist in the `cn-hangzhou` region.
 *
 * @param request GetAggregateResourceCountsGroupByRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateResourceCountsGroupByRegionResponse
 */
GetAggregateResourceCountsGroupByRegionResponse Client::getAggregateResourceCountsGroupByRegionWithOptions(const GetAggregateResourceCountsGroupByRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasFolderId()) {
    query["FolderId"] = request.getFolderId();
  }

  if (!!request.hasResourceAccountId()) {
    query["ResourceAccountId"] = request.getResourceAccountId();
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
    {"action" , "GetAggregateResourceCountsGroupByRegion"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateResourceCountsGroupByRegionResponse>();
}

/**
 * @summary Queries the statistics on the resources in an account group by region.
 *
 * @description This topic provides an example on how to query the statistics on the resources in an account group named `ca-a260626622af0005****` by region. The returned result shows that a total of `10` resources exist in the `cn-hangzhou` region.
 *
 * @param request GetAggregateResourceCountsGroupByRegionRequest
 * @return GetAggregateResourceCountsGroupByRegionResponse
 */
GetAggregateResourceCountsGroupByRegionResponse Client::getAggregateResourceCountsGroupByRegion(const GetAggregateResourceCountsGroupByRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceCountsGroupByRegionWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on the resources in an account group by resource type.
 *
 * @description This topic provides an example on how to query the statistics on the resources in an account group whose ID is `ca-a260626622af0005****` by resource type. The returned result shows that the account group has a total of `seven` resources of the `ACS::RAM::Role` resource type.
 *
 * @param request GetAggregateResourceCountsGroupByResourceTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateResourceCountsGroupByResourceTypeResponse
 */
GetAggregateResourceCountsGroupByResourceTypeResponse Client::getAggregateResourceCountsGroupByResourceTypeWithOptions(const GetAggregateResourceCountsGroupByResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasFolderId()) {
    query["FolderId"] = request.getFolderId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasResourceAccountId()) {
    query["ResourceAccountId"] = request.getResourceAccountId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateResourceCountsGroupByResourceType"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateResourceCountsGroupByResourceTypeResponse>();
}

/**
 * @summary Queries the statistics on the resources in an account group by resource type.
 *
 * @description This topic provides an example on how to query the statistics on the resources in an account group whose ID is `ca-a260626622af0005****` by resource type. The returned result shows that the account group has a total of `seven` resources of the `ACS::RAM::Role` resource type.
 *
 * @param request GetAggregateResourceCountsGroupByResourceTypeRequest
 * @return GetAggregateResourceCountsGroupByResourceTypeResponse
 */
GetAggregateResourceCountsGroupByResourceTypeResponse Client::getAggregateResourceCountsGroupByResourceType(const GetAggregateResourceCountsGroupByResourceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceCountsGroupByResourceTypeWithOptions(request, runtime);
}

/**
 * @summary Obtains the last resource inventory that is generated on the Global Resources page within the current account group.
 *
 * @description ### [](#)Prerequisites
 * The [GenerateAggregateResourceInventory](https://help.aliyun.com/document_detail/2398353.html) operation is called to generate a resource inventory. Then, this operation is called to obtain the URL of the resource inventory.
 * ### [](#)Description
 * This topic provides an example on how to obtain the last resource inventory that is generated within the account group ca-a91d626622af0035\\*\\*\\*\\*.
 *
 * @param request GetAggregateResourceInventoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregateResourceInventoryResponse
 */
GetAggregateResourceInventoryResponse Client::getAggregateResourceInventoryWithOptions(const GetAggregateResourceInventoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregateResourceInventory"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregateResourceInventoryResponse>();
}

/**
 * @summary Obtains the last resource inventory that is generated on the Global Resources page within the current account group.
 *
 * @description ### [](#)Prerequisites
 * The [GenerateAggregateResourceInventory](https://help.aliyun.com/document_detail/2398353.html) operation is called to generate a resource inventory. Then, this operation is called to obtain the URL of the resource inventory.
 * ### [](#)Description
 * This topic provides an example on how to obtain the last resource inventory that is generated within the account group ca-a91d626622af0035\\*\\*\\*\\*.
 *
 * @param request GetAggregateResourceInventoryRequest
 * @return GetAggregateResourceInventoryResponse
 */
GetAggregateResourceInventoryResponse Client::getAggregateResourceInventory(const GetAggregateResourceInventoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceInventoryWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an account group. You can query the name, creation time, member, and type of an account group.
 *
 * @description The sample request in this topic shows you how to query the details of the `ca-88ea626622af0055****` account group. The return result shows that the account group is named `Test_Group`, its description is `Test account group`, and it is of the `CUSTOM` type. The account group is in the `1` state, which indicates that it is created.
 *
 * @param tmpReq GetAggregatorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggregatorResponse
 */
GetAggregatorResponse Client::getAggregatorWithOptions(const GetAggregatorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAggregatorShrinkRequest request = GetAggregatorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggregator"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggregatorResponse>();
}

/**
 * @summary Queries the details of an account group. You can query the name, creation time, member, and type of an account group.
 *
 * @description The sample request in this topic shows you how to query the details of the `ca-88ea626622af0055****` account group. The return result shows that the account group is named `Test_Group`, its description is `Test account group`, and it is of the `CUSTOM` type. The account group is in the `1` state, which indicates that it is created.
 *
 * @param request GetAggregatorRequest
 * @return GetAggregatorResponse
 */
GetAggregatorResponse Client::getAggregator(const GetAggregatorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregatorWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a compliance package.
 *
 * @description This topic provides an example on how to query the details of a compliance package whose ID is `cp-fdc8626622af00f9****`. The returned result shows that the name of the compliance package is `ClassifiedProtectionPreCheck`, the compliance package is in the `ACTIVE` state, and the risk level of the rules in the compliance package is `1`, which indicates high risk level.
 *
 * @param tmpReq GetCompliancePackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCompliancePackResponse
 */
GetCompliancePackResponse Client::getCompliancePackWithOptions(const GetCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetCompliancePackShrinkRequest request = GetCompliancePackShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCompliancePack"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCompliancePackResponse>();
}

/**
 * @summary Queries the details of a compliance package.
 *
 * @description This topic provides an example on how to query the details of a compliance package whose ID is `cp-fdc8626622af00f9****`. The returned result shows that the name of the compliance package is `ClassifiedProtectionPreCheck`, the compliance package is in the `ACTIVE` state, and the risk level of the rules in the compliance package is `1`, which indicates high risk level.
 *
 * @param request GetCompliancePackRequest
 * @return GetCompliancePackResponse
 */
GetCompliancePackResponse Client::getCompliancePack(const GetCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCompliancePackWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance evaluation report that is generated based on a compliance package.
 *
 * @description > Before you call this operation, you must call the GenerateCompliancePackReport operation to generate the latest compliance evaluation report based on a compliance package. For more information, see [GenerateCompliancePackReport](https://help.aliyun.com/document_detail/263525.html).
 * This topic provides an example on how to query the compliance evaluation report that is generated based on the `cp-fdc8626622af00f9****` compliance package.
 *
 * @param request GetCompliancePackReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCompliancePackReportResponse
 */
GetCompliancePackReportResponse Client::getCompliancePackReportWithOptions(const GetCompliancePackReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCompliancePackReport"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCompliancePackReportResponse>();
}

/**
 * @summary Queries the compliance evaluation report that is generated based on a compliance package.
 *
 * @description > Before you call this operation, you must call the GenerateCompliancePackReport operation to generate the latest compliance evaluation report based on a compliance package. For more information, see [GenerateCompliancePackReport](https://help.aliyun.com/document_detail/263525.html).
 * This topic provides an example on how to query the compliance evaluation report that is generated based on the `cp-fdc8626622af00f9****` compliance package.
 *
 * @param request GetCompliancePackReportRequest
 * @return GetCompliancePackReportResponse
 */
GetCompliancePackReportResponse Client::getCompliancePackReport(const GetCompliancePackReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCompliancePackReportWithOptions(request, runtime);
}

/**
 * @summary Queries the summary of compliance statistics within the current account.
 *
 * @description This topic provides an example on how to query the compliance statistics of resources and rules in the current account group.
 *
 * @param request GetComplianceSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetComplianceSummaryResponse
 */
GetComplianceSummaryResponse Client::getComplianceSummaryWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetComplianceSummary"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetComplianceSummaryResponse>();
}

/**
 * @summary Queries the summary of compliance statistics within the current account.
 *
 * @description This topic provides an example on how to query the compliance statistics of resources and rules in the current account group.
 *
 * @return GetComplianceSummaryResponse
 */
GetComplianceSummaryResponse Client::getComplianceSummary() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getComplianceSummaryWithOptions(runtime);
}

/**
 * @summary Queries the information about a delivery channel.
 *
 * @param request GetConfigDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConfigDeliveryChannelResponse
 */
GetConfigDeliveryChannelResponse Client::getConfigDeliveryChannelWithOptions(const GetConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryChannelId()) {
    query["DeliveryChannelId"] = request.getDeliveryChannelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConfigDeliveryChannel"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConfigDeliveryChannelResponse>();
}

/**
 * @summary Queries the information about a delivery channel.
 *
 * @param request GetConfigDeliveryChannelRequest
 * @return GetConfigDeliveryChannelResponse
 */
GetConfigDeliveryChannelResponse Client::getConfigDeliveryChannel(const GetConfigDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConfigDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a rule.
 *
 * @description This topic provides an example on how to query the details of the `cr-7f7d626622af0041****` rule.
 *
 * @param tmpReq GetConfigRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConfigRuleResponse
 */
GetConfigRuleResponse Client::getConfigRuleWithOptions(const GetConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetConfigRuleShrinkRequest request = GetConfigRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasConfigRuleId()) {
    query["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConfigRule"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConfigRuleResponse>();
}

/**
 * @summary Queries the details of a rule.
 *
 * @description This topic provides an example on how to query the details of the `cr-7f7d626622af0041****` rule.
 *
 * @param request GetConfigRuleRequest
 * @return GetConfigRuleResponse
 */
GetConfigRuleResponse Client::getConfigRule(const GetConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Queries compliance evaluation results based on the rules in a compliance package.
 *
 * @description In this topic, the `cp-541e626622af0087****` compliance package is used as an example. The return result shows a total of one rule against which specific resources are evaluated as compliant.
 *
 * @param request GetConfigRuleComplianceByPackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConfigRuleComplianceByPackResponse
 */
GetConfigRuleComplianceByPackResponse Client::getConfigRuleComplianceByPackWithOptions(const GetConfigRuleComplianceByPackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConfigRuleComplianceByPack"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConfigRuleComplianceByPackResponse>();
}

/**
 * @summary Queries compliance evaluation results based on the rules in a compliance package.
 *
 * @description In this topic, the `cp-541e626622af0087****` compliance package is used as an example. The return result shows a total of one rule against which specific resources are evaluated as compliant.
 *
 * @param request GetConfigRuleComplianceByPackRequest
 * @return GetConfigRuleComplianceByPackResponse
 */
GetConfigRuleComplianceByPackResponse Client::getConfigRuleComplianceByPack(const GetConfigRuleComplianceByPackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConfigRuleComplianceByPackWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance summary based on the risk level of a rule.
 *
 * @description This topic provides an example of how to query the summary of compliance evaluation results by rule risk level. The return result shows four rules that are specified with the high risk level. One of them detects non-compliant resources, and the resources evaluated by the remaining three are all compliant.
 *
 * @param request GetConfigRuleSummaryByRiskLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConfigRuleSummaryByRiskLevelResponse
 */
GetConfigRuleSummaryByRiskLevelResponse Client::getConfigRuleSummaryByRiskLevelWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetConfigRuleSummaryByRiskLevel"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConfigRuleSummaryByRiskLevelResponse>();
}

/**
 * @summary Queries the compliance summary based on the risk level of a rule.
 *
 * @description This topic provides an example of how to query the summary of compliance evaluation results by rule risk level. The return result shows four rules that are specified with the high risk level. One of them detects non-compliant resources, and the resources evaluated by the remaining three are all compliant.
 *
 * @return GetConfigRuleSummaryByRiskLevelResponse
 */
GetConfigRuleSummaryByRiskLevelResponse Client::getConfigRuleSummaryByRiskLevel() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConfigRuleSummaryByRiskLevelWithOptions(runtime);
}

/**
 * @summary Downloads the compliance evaluation report in the Excel format to your on-premises machine. This allows you to assign tasks and modify incompliant resource configurations.
 *
 * @description >  Before you call this operation, you must call the GenerateConfigRulesReport operation to generate the latest compliance evaluation report based on all existing rules. For more information, see [GenerateConfigRulesReport](https://help.aliyun.com/document_detail/263601.html).
 * This topic provides an example of how to query the compliance evaluation report that is generated based on all existing rules.
 *
 * @param request GetConfigRulesReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConfigRulesReportResponse
 */
GetConfigRulesReportResponse Client::getConfigRulesReportWithOptions(const GetConfigRulesReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReportId()) {
    query["ReportId"] = request.getReportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConfigRulesReport"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConfigRulesReportResponse>();
}

/**
 * @summary Downloads the compliance evaluation report in the Excel format to your on-premises machine. This allows you to assign tasks and modify incompliant resource configurations.
 *
 * @description >  Before you call this operation, you must call the GenerateConfigRulesReport operation to generate the latest compliance evaluation report based on all existing rules. For more information, see [GenerateConfigRulesReport](https://help.aliyun.com/document_detail/263601.html).
 * This topic provides an example of how to query the compliance evaluation report that is generated based on all existing rules.
 *
 * @param request GetConfigRulesReportRequest
 * @return GetConfigRulesReportResponse
 */
GetConfigRulesReportResponse Client::getConfigRulesReport(const GetConfigRulesReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConfigRulesReportWithOptions(request, runtime);
}

/**
 * @summary Queries the activation status and resource monitoring scope of Cloud Config for the current account.
 *
 * @description This topic provides an example on how to query the activation status and resource monitoring scope of Cloud Config for the current account.
 *
 * @param request GetConfigurationRecorderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConfigurationRecorderResponse
 */
GetConfigurationRecorderResponse Client::getConfigurationRecorderWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetConfigurationRecorder"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConfigurationRecorderResponse>();
}

/**
 * @summary Queries the activation status and resource monitoring scope of Cloud Config for the current account.
 *
 * @description This topic provides an example on how to query the activation status and resource monitoring scope of Cloud Config for the current account.
 *
 * @return GetConfigurationRecorderResponse
 */
GetConfigurationRecorderResponse Client::getConfigurationRecorder() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConfigurationRecorderWithOptions(runtime);
}

/**
 * @summary Queries the details of a specific resource.
 *
 * @description This topic provides an example on how to query the details of the Elastic Compute Service (ECS) instance `i-bp12g4xbl4i0brkn****` that resides in the China (Hangzhou) region.
 *
 * @param request GetDiscoveredResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDiscoveredResourceResponse
 */
GetDiscoveredResourceResponse Client::getDiscoveredResourceWithOptions(const GetDiscoveredResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComplianceOption()) {
    query["ComplianceOption"] = request.getComplianceOption();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDiscoveredResource"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDiscoveredResourceResponse>();
}

/**
 * @summary Queries the details of a specific resource.
 *
 * @description This topic provides an example on how to query the details of the Elastic Compute Service (ECS) instance `i-bp12g4xbl4i0brkn****` that resides in the China (Hangzhou) region.
 *
 * @param request GetDiscoveredResourceRequest
 * @return GetDiscoveredResourceResponse
 */
GetDiscoveredResourceResponse Client::getDiscoveredResource(const GetDiscoveredResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDiscoveredResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on resources by region.
 *
 * @description This topic provides an example to demonstrate how to query the statistics on resources by region. The returned result shows that a total of 10 resources exist in the `cn-hangzhou` region.
 *
 * @param request GetDiscoveredResourceCountsGroupByRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDiscoveredResourceCountsGroupByRegionResponse
 */
GetDiscoveredResourceCountsGroupByRegionResponse Client::getDiscoveredResourceCountsGroupByRegionWithOptions(const GetDiscoveredResourceCountsGroupByRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDiscoveredResourceCountsGroupByRegion"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDiscoveredResourceCountsGroupByRegionResponse>();
}

/**
 * @summary Queries the statistics on resources by region.
 *
 * @description This topic provides an example to demonstrate how to query the statistics on resources by region. The returned result shows that a total of 10 resources exist in the `cn-hangzhou` region.
 *
 * @param request GetDiscoveredResourceCountsGroupByRegionRequest
 * @return GetDiscoveredResourceCountsGroupByRegionResponse
 */
GetDiscoveredResourceCountsGroupByRegionResponse Client::getDiscoveredResourceCountsGroupByRegion(const GetDiscoveredResourceCountsGroupByRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDiscoveredResourceCountsGroupByRegionWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on resources by resource type.
 *
 * @description This topic describes how to query the statistics on resources by resource type. The returned result shows that a total of 10 resources of the `ACS::ECS::Instance` resource type exist.
 *
 * @param request GetDiscoveredResourceCountsGroupByResourceTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDiscoveredResourceCountsGroupByResourceTypeResponse
 */
GetDiscoveredResourceCountsGroupByResourceTypeResponse Client::getDiscoveredResourceCountsGroupByResourceTypeWithOptions(const GetDiscoveredResourceCountsGroupByResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDiscoveredResourceCountsGroupByResourceType"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDiscoveredResourceCountsGroupByResourceTypeResponse>();
}

/**
 * @summary Queries the statistics on resources by resource type.
 *
 * @description This topic describes how to query the statistics on resources by resource type. The returned result shows that a total of 10 resources of the `ACS::ECS::Instance` resource type exist.
 *
 * @param request GetDiscoveredResourceCountsGroupByResourceTypeRequest
 * @return GetDiscoveredResourceCountsGroupByResourceTypeResponse
 */
GetDiscoveredResourceCountsGroupByResourceTypeResponse Client::getDiscoveredResourceCountsGroupByResourceType(const GetDiscoveredResourceCountsGroupByResourceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDiscoveredResourceCountsGroupByResourceTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the integration status of a specific cloud service.
 *
 * @param request GetIntegratedServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIntegratedServiceStatusResponse
 */
GetIntegratedServiceStatusResponse Client::getIntegratedServiceStatusWithOptions(const GetIntegratedServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasServiceCode()) {
    body["ServiceCode"] = request.getServiceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetIntegratedServiceStatus"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIntegratedServiceStatusResponse>();
}

/**
 * @summary Queries the integration status of a specific cloud service.
 *
 * @param request GetIntegratedServiceStatusRequest
 * @return GetIntegratedServiceStatusResponse
 */
GetIntegratedServiceStatusResponse Client::getIntegratedServiceStatus(const GetIntegratedServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIntegratedServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specific managed rule.
 *
 * @description This topic provides an example on how to query the details of the managed rule `cdn-domain-https-enabled`.
 *
 * @param request GetManagedRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetManagedRuleResponse
 */
GetManagedRuleResponse Client::getManagedRuleWithOptions(const GetManagedRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.getIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetManagedRule"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetManagedRuleResponse>();
}

/**
 * @summary Queries the details of a specific managed rule.
 *
 * @description This topic provides an example on how to query the details of the managed rule `cdn-domain-https-enabled`.
 *
 * @param request GetManagedRuleRequest
 * @return GetManagedRuleResponse
 */
GetManagedRuleResponse Client::getManagedRule(const GetManagedRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getManagedRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an automatic remediation template.
 *
 * @description This topic provides an example on how to query the details of the automatic remediation template ACS-ALB-BulkyEnableDeletionProtection.
 *
 * @param request GetRemediationTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRemediationTemplateResponse
 */
GetRemediationTemplateResponse Client::getRemediationTemplateWithOptions(const GetRemediationTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateIdentifier()) {
    query["TemplateIdentifier"] = request.getTemplateIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRemediationTemplate"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRemediationTemplateResponse>();
}

/**
 * @summary Queries the details of an automatic remediation template.
 *
 * @description This topic provides an example on how to query the details of the automatic remediation template ACS-ALB-BulkyEnableDeletionProtection.
 *
 * @param request GetRemediationTemplateRequest
 * @return GetRemediationTemplateResponse
 */
GetRemediationTemplateResponse Client::getRemediationTemplate(const GetRemediationTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRemediationTemplateWithOptions(request, runtime);
}

/**
 * @summary 获取基于报告模版生成的报告
 *
 * @param request GetReportFromTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetReportFromTemplateResponse
 */
GetReportFromTemplateResponse Client::getReportFromTemplateWithOptions(const GetReportFromTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReportTemplateId()) {
    query["ReportTemplateId"] = request.getReportTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetReportFromTemplate"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetReportFromTemplateResponse>();
}

/**
 * @summary 获取基于报告模版生成的报告
 *
 * @param request GetReportFromTemplateRequest
 * @return GetReportFromTemplateResponse
 */
GetReportFromTemplateResponse Client::getReportFromTemplate(const GetReportFromTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getReportFromTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance summary based on the compliance evaluation result of a rule.
 *
 * @description In this topic, the `cr-d369626622af008e****` rule is used as an example. The return result shows that a total of 10 resources are evaluated by the rule and `five` of them are evaluated as compliant.
 *
 * @param request GetResourceComplianceByConfigRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceComplianceByConfigRuleResponse
 */
GetResourceComplianceByConfigRuleResponse Client::getResourceComplianceByConfigRuleWithOptions(const GetResourceComplianceByConfigRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceComplianceByConfigRule"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceComplianceByConfigRuleResponse>();
}

/**
 * @summary Queries the compliance summary based on the compliance evaluation result of a rule.
 *
 * @description In this topic, the `cr-d369626622af008e****` rule is used as an example. The return result shows that a total of 10 resources are evaluated by the rule and `five` of them are evaluated as compliant.
 *
 * @param request GetResourceComplianceByConfigRuleRequest
 * @return GetResourceComplianceByConfigRuleResponse
 */
GetResourceComplianceByConfigRuleResponse Client::getResourceComplianceByConfigRule(const GetResourceComplianceByConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceComplianceByConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance evaluation results of resources evaluated based on a compliance package.
 *
 * @description This topic provides an example on how to query the compliance evaluation results of resources monitored by using the `cp-541e626622af0087****` compliance package. The returned result shows a total of 10 resources and seven of them are evaluated as non-compliant.
 *
 * @param request GetResourceComplianceByPackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceComplianceByPackResponse
 */
GetResourceComplianceByPackResponse Client::getResourceComplianceByPackWithOptions(const GetResourceComplianceByPackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceComplianceByPack"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceComplianceByPackResponse>();
}

/**
 * @summary Queries the compliance evaluation results of resources evaluated based on a compliance package.
 *
 * @description This topic provides an example on how to query the compliance evaluation results of resources monitored by using the `cp-541e626622af0087****` compliance package. The returned result shows a total of 10 resources and seven of them are evaluated as non-compliant.
 *
 * @param request GetResourceComplianceByPackRequest
 * @return GetResourceComplianceByPackResponse
 */
GetResourceComplianceByPackResponse Client::getResourceComplianceByPack(const GetResourceComplianceByPackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceComplianceByPackWithOptions(request, runtime);
}

/**
 * @summary Queries the evaluation results grouped by region for a rule.
 *
 * @param request GetResourceComplianceGroupByRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceComplianceGroupByRegionResponse
 */
GetResourceComplianceGroupByRegionResponse Client::getResourceComplianceGroupByRegionWithOptions(const GetResourceComplianceGroupByRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceComplianceGroupByRegion"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceComplianceGroupByRegionResponse>();
}

/**
 * @summary Queries the evaluation results grouped by region for a rule.
 *
 * @param request GetResourceComplianceGroupByRegionRequest
 * @return GetResourceComplianceGroupByRegionResponse
 */
GetResourceComplianceGroupByRegionResponse Client::getResourceComplianceGroupByRegion(const GetResourceComplianceGroupByRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceComplianceGroupByRegionWithOptions(request, runtime);
}

/**
 * @summary Queries the evaluation results grouped by resource type for a rule.
 *
 * @param request GetResourceComplianceGroupByResourceTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceComplianceGroupByResourceTypeResponse
 */
GetResourceComplianceGroupByResourceTypeResponse Client::getResourceComplianceGroupByResourceTypeWithOptions(const GetResourceComplianceGroupByResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceComplianceGroupByResourceType"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceComplianceGroupByResourceTypeResponse>();
}

/**
 * @summary Queries the evaluation results grouped by resource type for a rule.
 *
 * @param request GetResourceComplianceGroupByResourceTypeRequest
 * @return GetResourceComplianceGroupByResourceTypeResponse
 */
GetResourceComplianceGroupByResourceTypeResponse Client::getResourceComplianceGroupByResourceType(const GetResourceComplianceGroupByResourceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceComplianceGroupByResourceTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance timeline of a resource. The compliance timeline of a resource indicates the compliance evaluation record of the resource. A compliance timeline includes points and the content on the compliance timeline.
 *
 * @description In Cloud Config, each resource has a compliance timeline. Cloud Config generates a compliance evaluation record for a resource each time the resource is evaluated based on a rule. The compliance evaluation records of a resource are displayed in a compliance timeline. You can configure Cloud Config to execute a rule to evaluate a resource on a regular basis or each time you change the resource configuration. You can also manually execute a rule to evaluate a resource.
 * This topic provides an example on how to query the compliance timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region. The resource is an Object Storage Service (OSS) bucket. The returned result shows the following two timestamps on the compliance timeline: `1625200295276` and `1625200228510`. The first timestamp indicates 12:31:35 on July 2, 2021 (UTC+8) and the second timestamp indicates 12:30:28 on July 2, 2021 (UTC+8).
 *
 * @param request GetResourceComplianceTimelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceComplianceTimelineResponse
 */
GetResourceComplianceTimelineResponse Client::getResourceComplianceTimelineWithOptions(const GetResourceComplianceTimelineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceComplianceTimeline"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceComplianceTimelineResponse>();
}

/**
 * @summary Queries the compliance timeline of a resource. The compliance timeline of a resource indicates the compliance evaluation record of the resource. A compliance timeline includes points and the content on the compliance timeline.
 *
 * @description In Cloud Config, each resource has a compliance timeline. Cloud Config generates a compliance evaluation record for a resource each time the resource is evaluated based on a rule. The compliance evaluation records of a resource are displayed in a compliance timeline. You can configure Cloud Config to execute a rule to evaluate a resource on a regular basis or each time you change the resource configuration. You can also manually execute a rule to evaluate a resource.
 * This topic provides an example on how to query the compliance timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region. The resource is an Object Storage Service (OSS) bucket. The returned result shows the following two timestamps on the compliance timeline: `1625200295276` and `1625200228510`. The first timestamp indicates 12:31:35 on July 2, 2021 (UTC+8) and the second timestamp indicates 12:30:28 on July 2, 2021 (UTC+8).
 *
 * @param request GetResourceComplianceTimelineRequest
 * @return GetResourceComplianceTimelineResponse
 */
GetResourceComplianceTimelineResponse Client::getResourceComplianceTimeline(const GetResourceComplianceTimelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceComplianceTimelineWithOptions(request, runtime);
}

/**
 * @summary 获取资源配置样例
 *
 * @param request GetResourceConfigurationSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceConfigurationSampleResponse
 */
GetResourceConfigurationSampleResponse Client::getResourceConfigurationSampleWithOptions(const GetResourceConfigurationSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMockOnly()) {
    query["MockOnly"] = request.getMockOnly();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceConfigurationSample"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceConfigurationSampleResponse>();
}

/**
 * @summary 获取资源配置样例
 *
 * @param request GetResourceConfigurationSampleRequest
 * @return GetResourceConfigurationSampleResponse
 */
GetResourceConfigurationSampleResponse Client::getResourceConfigurationSample(const GetResourceConfigurationSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceConfigurationSampleWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration timeline of a resource.
 *
 * @description The sample request in this topic shows you how to query the configuration timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region. The new-bucket resource is an Object Storage Service (OSS) bucket. The return result shows that the timestamp when the resource configuration changes is `1624961112000`. The timestamp indicates 18:05:12 on June 29, 2021 (UTC+8).
 *
 * @param request GetResourceConfigurationTimelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceConfigurationTimelineResponse
 */
GetResourceConfigurationTimelineResponse Client::getResourceConfigurationTimelineWithOptions(const GetResourceConfigurationTimelineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceConfigurationTimeline"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceConfigurationTimelineResponse>();
}

/**
 * @summary Queries the configuration timeline of a resource.
 *
 * @description The sample request in this topic shows you how to query the configuration timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region. The new-bucket resource is an Object Storage Service (OSS) bucket. The return result shows that the timestamp when the resource configuration changes is `1624961112000`. The timestamp indicates 18:05:12 on June 29, 2021 (UTC+8).
 *
 * @param request GetResourceConfigurationTimelineRequest
 * @return GetResourceConfigurationTimelineResponse
 */
GetResourceConfigurationTimelineResponse Client::getResourceConfigurationTimeline(const GetResourceConfigurationTimelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceConfigurationTimelineWithOptions(request, runtime);
}

/**
 * @summary Obtains the last resource inventory that is generated within the current Alibaba Cloud account.
 *
 * @description ### [](#)Prerequisites
 * You can call the [GenerateResourceInventory](https://help.aliyun.com/document_detail/2398354.html) operation to generate a resource inventory. Then, you can call the GetResourceInventory operation to obtain the URL of the resource inventory.
 * ### [](#)Description
 * This topic provides an example on how to obtain the last resource inventory that is generated within the current Alibaba Cloud account.
 *
 * @param request GetResourceInventoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceInventoryResponse
 */
GetResourceInventoryResponse Client::getResourceInventoryWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetResourceInventory"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceInventoryResponse>();
}

/**
 * @summary Obtains the last resource inventory that is generated within the current Alibaba Cloud account.
 *
 * @description ### [](#)Prerequisites
 * You can call the [GenerateResourceInventory](https://help.aliyun.com/document_detail/2398354.html) operation to generate a resource inventory. Then, you can call the GetResourceInventory operation to obtain the URL of the resource inventory.
 * ### [](#)Description
 * This topic provides an example on how to obtain the last resource inventory that is generated within the current Alibaba Cloud account.
 *
 * @return GetResourceInventoryResponse
 */
GetResourceInventoryResponse Client::getResourceInventory() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceInventoryWithOptions(runtime);
}

/**
 * @summary 获取资源类型的属性配置
 *
 * @param request GetResourceTypePropertiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceTypePropertiesResponse
 */
GetResourceTypePropertiesResponse Client::getResourceTypePropertiesWithOptions(const GetResourceTypePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceTypeProperties"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceTypePropertiesResponse>();
}

/**
 * @summary 获取资源类型的属性配置
 *
 * @param request GetResourceTypePropertiesRequest
 * @return GetResourceTypePropertiesResponse
 */
GetResourceTypePropertiesResponse Client::getResourceTypeProperties(const GetResourceTypePropertiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceTypePropertiesWithOptions(request, runtime);
}

/**
 * @summary Queries the resource relationships supported by a resource type.
 *
 * @description This topic provides an example to show how to query the resource relationships that are supported by the ACS::ECS::Instance resource type.
 *
 * @param request GetSupportedResourceRelationConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSupportedResourceRelationConfigResponse
 */
GetSupportedResourceRelationConfigResponse Client::getSupportedResourceRelationConfigWithOptions(const GetSupportedResourceRelationConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSupportedResourceRelationConfig"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSupportedResourceRelationConfigResponse>();
}

/**
 * @summary Queries the resource relationships supported by a resource type.
 *
 * @description This topic provides an example to show how to query the resource relationships that are supported by the ACS::ECS::Instance resource type.
 *
 * @param request GetSupportedResourceRelationConfigRequest
 * @return GetSupportedResourceRelationConfigResponse
 */
GetSupportedResourceRelationConfigResponse Client::getSupportedResourceRelationConfig(const GetSupportedResourceRelationConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSupportedResourceRelationConfigWithOptions(request, runtime);
}

/**
 * @summary Ignores the evaluation results of some resources in an account group based on a specific rule. You can also specify a time period for ignoring the evaluation results. After the period elapses, the evaluation results of the resources based on the rule are automatically displayed.
 *
 * @description After you ignore a resource that is evaluated as incompliant by using a rule, the resource is still evaluated by using the rule, but the compliance result is Ignored.
 * This example shows how to ignore the `lb-hp3a3b4ztyfm2plgm****` incompliant resource that is evaluated by using the `cr-7e72626622af0051***` rule in the `120886317861****` member account of the `ca-5b6c626622af008f****` account group. The ID of the region where the resource resides is `cn-beijing`, and the type of the resource is `ACS::SLB::LoadBalancer`.
 *
 * @param tmpReq IgnoreAggregateEvaluationResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IgnoreAggregateEvaluationResultsResponse
 */
IgnoreAggregateEvaluationResultsResponse Client::ignoreAggregateEvaluationResultsWithOptions(const IgnoreAggregateEvaluationResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  IgnoreAggregateEvaluationResultsShrinkRequest request = IgnoreAggregateEvaluationResultsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResources()) {
    request.setResourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResources(), "Resources", "json"));
  }

  json body = {};
  if (!!request.hasAggregatorId()) {
    body["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasConfigRuleId()) {
    body["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasIgnoreDate()) {
    body["IgnoreDate"] = request.getIgnoreDate();
  }

  if (!!request.hasReason()) {
    body["Reason"] = request.getReason();
  }

  if (!!request.hasResourcesShrink()) {
    body["Resources"] = request.getResourcesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "IgnoreAggregateEvaluationResults"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IgnoreAggregateEvaluationResultsResponse>();
}

/**
 * @summary Ignores the evaluation results of some resources in an account group based on a specific rule. You can also specify a time period for ignoring the evaluation results. After the period elapses, the evaluation results of the resources based on the rule are automatically displayed.
 *
 * @description After you ignore a resource that is evaluated as incompliant by using a rule, the resource is still evaluated by using the rule, but the compliance result is Ignored.
 * This example shows how to ignore the `lb-hp3a3b4ztyfm2plgm****` incompliant resource that is evaluated by using the `cr-7e72626622af0051***` rule in the `120886317861****` member account of the `ca-5b6c626622af008f****` account group. The ID of the region where the resource resides is `cn-beijing`, and the type of the resource is `ACS::SLB::LoadBalancer`.
 *
 * @param request IgnoreAggregateEvaluationResultsRequest
 * @return IgnoreAggregateEvaluationResultsResponse
 */
IgnoreAggregateEvaluationResultsResponse Client::ignoreAggregateEvaluationResults(const IgnoreAggregateEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return ignoreAggregateEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary Ignores the evaluation results of some resources based on a specific rule. You can also specify a time period for ignoring the evaluation results. After the period elapses, the evaluation results of the resources based on the rule are automatically displayed.
 *
 * @description After you ignore a resource that is evaluated as incompliant by using a rule, the resource is still evaluated by using the rule, but the compliance result is Ignored.
 * This example shows how to ignore the `lb-hp3a3b4ztyfm2plgm****` resource that is evaluated as incompliant by using the `cr-7e72626622af0051****` rule in the `100931896542****` account. The ID of the region in which the resource resides is `cn-beijing`, and the type of the resource is `ACS::SLB::LoadBalancer`.
 *
 * @param tmpReq IgnoreEvaluationResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IgnoreEvaluationResultsResponse
 */
IgnoreEvaluationResultsResponse Client::ignoreEvaluationResultsWithOptions(const IgnoreEvaluationResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  IgnoreEvaluationResultsShrinkRequest request = IgnoreEvaluationResultsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResources()) {
    request.setResourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResources(), "Resources", "json"));
  }

  json body = {};
  if (!!request.hasConfigRuleId()) {
    body["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasIgnoreDate()) {
    body["IgnoreDate"] = request.getIgnoreDate();
  }

  if (!!request.hasReason()) {
    body["Reason"] = request.getReason();
  }

  if (!!request.hasResourcesShrink()) {
    body["Resources"] = request.getResourcesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "IgnoreEvaluationResults"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IgnoreEvaluationResultsResponse>();
}

/**
 * @summary Ignores the evaluation results of some resources based on a specific rule. You can also specify a time period for ignoring the evaluation results. After the period elapses, the evaluation results of the resources based on the rule are automatically displayed.
 *
 * @description After you ignore a resource that is evaluated as incompliant by using a rule, the resource is still evaluated by using the rule, but the compliance result is Ignored.
 * This example shows how to ignore the `lb-hp3a3b4ztyfm2plgm****` resource that is evaluated as incompliant by using the `cr-7e72626622af0051****` rule in the `100931896542****` account. The ID of the region in which the resource resides is `cn-beijing`, and the type of the resource is `ACS::SLB::LoadBalancer`.
 *
 * @param request IgnoreEvaluationResultsRequest
 * @return IgnoreEvaluationResultsResponse
 */
IgnoreEvaluationResultsResponse Client::ignoreEvaluationResults(const IgnoreEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return ignoreEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of compliance packages in an account group.
 *
 * @description In this topic, the `ca-f632626622af0079****` account group is used as an example. The return result shows one compliance package whose ID is `cp-fdc8626622af00f9****`.
 *
 * @param tmpReq ListAggregateCompliancePacksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAggregateCompliancePacksResponse
 */
ListAggregateCompliancePacksResponse Client::listAggregateCompliancePacksWithOptions(const ListAggregateCompliancePacksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAggregateCompliancePacksShrinkRequest request = ListAggregateCompliancePacksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAggregateCompliancePacks"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAggregateCompliancePacksResponse>();
}

/**
 * @summary Queries a list of compliance packages in an account group.
 *
 * @description In this topic, the `ca-f632626622af0079****` account group is used as an example. The return result shows one compliance package whose ID is `cp-fdc8626622af00f9****`.
 *
 * @param request ListAggregateCompliancePacksRequest
 * @return ListAggregateCompliancePacksResponse
 */
ListAggregateCompliancePacksResponse Client::listAggregateCompliancePacks(const ListAggregateCompliancePacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateCompliancePacksWithOptions(request, runtime);
}

/**
 * @summary Queries the information about all delivery channels in an account group.
 *
 * @param request ListAggregateConfigDeliveryChannelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAggregateConfigDeliveryChannelsResponse
 */
ListAggregateConfigDeliveryChannelsResponse Client::listAggregateConfigDeliveryChannelsWithOptions(const ListAggregateConfigDeliveryChannelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasDeliveryChannelIds()) {
    query["DeliveryChannelIds"] = request.getDeliveryChannelIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAggregateConfigDeliveryChannels"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAggregateConfigDeliveryChannelsResponse>();
}

/**
 * @summary Queries the information about all delivery channels in an account group.
 *
 * @param request ListAggregateConfigDeliveryChannelsRequest
 * @return ListAggregateConfigDeliveryChannelsResponse
 */
ListAggregateConfigDeliveryChannelsResponse Client::listAggregateConfigDeliveryChannels(const ListAggregateConfigDeliveryChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateConfigDeliveryChannelsWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance evaluation results of resources based on a rule in an account group.
 *
 * @description This topic provides an example on how to query the compliance evaluation results of resources based on the `cr-888f626622af00ae****` rule in the `ca-d1e3326622af00cb****` account group. The returned result indicates that the `Bucket-test` resource is evaluated as `NON_COMPLIANT` by using the rule. The resource is an Object Storage Service (OSS) bucket.
 *
 * @param request ListAggregateConfigRuleEvaluationResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAggregateConfigRuleEvaluationResultsResponse
 */
ListAggregateConfigRuleEvaluationResultsResponse Client::listAggregateConfigRuleEvaluationResultsWithOptions(const ListAggregateConfigRuleEvaluationResultsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasCompliancePackId()) {
    query["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasComplianceType()) {
    query["ComplianceType"] = request.getComplianceType();
  }

  if (!!request.hasConfigRuleId()) {
    query["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegions()) {
    query["Regions"] = request.getRegions();
  }

  if (!!request.hasResourceAccountId()) {
    query["ResourceAccountId"] = request.getResourceAccountId();
  }

  if (!!request.hasResourceGroupIds()) {
    query["ResourceGroupIds"] = request.getResourceGroupIds();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAggregateConfigRuleEvaluationResults"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAggregateConfigRuleEvaluationResultsResponse>();
}

/**
 * @summary Queries the compliance evaluation results of resources based on a rule in an account group.
 *
 * @description This topic provides an example on how to query the compliance evaluation results of resources based on the `cr-888f626622af00ae****` rule in the `ca-d1e3326622af00cb****` account group. The returned result indicates that the `Bucket-test` resource is evaluated as `NON_COMPLIANT` by using the rule. The resource is an Object Storage Service (OSS) bucket.
 *
 * @param request ListAggregateConfigRuleEvaluationResultsRequest
 * @return ListAggregateConfigRuleEvaluationResultsResponse
 */
ListAggregateConfigRuleEvaluationResultsResponse Client::listAggregateConfigRuleEvaluationResults(const ListAggregateConfigRuleEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateConfigRuleEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics of compliance evaluation results of an account group.
 *
 * @description This topic provides an example on how to query the statistics of compliance evaluation results of an account group whose ID is ca-edd3626622af00b3\\*\\*\\*\\*.
 *
 * @param request ListAggregateConfigRuleEvaluationStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAggregateConfigRuleEvaluationStatisticsResponse
 */
ListAggregateConfigRuleEvaluationStatisticsResponse Client::listAggregateConfigRuleEvaluationStatisticsWithOptions(const ListAggregateConfigRuleEvaluationStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAggregateConfigRuleEvaluationStatistics"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAggregateConfigRuleEvaluationStatisticsResponse>();
}

/**
 * @summary Queries the statistics of compliance evaluation results of an account group.
 *
 * @description This topic provides an example on how to query the statistics of compliance evaluation results of an account group whose ID is ca-edd3626622af00b3\\*\\*\\*\\*.
 *
 * @param request ListAggregateConfigRuleEvaluationStatisticsRequest
 * @return ListAggregateConfigRuleEvaluationStatisticsResponse
 */
ListAggregateConfigRuleEvaluationStatisticsResponse Client::listAggregateConfigRuleEvaluationStatistics(const ListAggregateConfigRuleEvaluationStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateConfigRuleEvaluationStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of rules in an account group.
 *
 * @description This topic provides an example on how to query the rules in an account group whose ID is `ca-f632626622af0079****`. The returned result shows a total of one rule and two evaluated resources. The resources are both evaluated as `COMPLIANT`.
 *
 * @param tmpReq ListAggregateConfigRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAggregateConfigRulesResponse
 */
ListAggregateConfigRulesResponse Client::listAggregateConfigRulesWithOptions(const ListAggregateConfigRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAggregateConfigRulesShrinkRequest request = ListAggregateConfigRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasCompliancePackId()) {
    query["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasComplianceType()) {
    query["ComplianceType"] = request.getComplianceType();
  }

  if (!!request.hasConfigRuleName()) {
    query["ConfigRuleName"] = request.getConfigRuleName();
  }

  if (!!request.hasConfigRuleState()) {
    query["ConfigRuleState"] = request.getConfigRuleState();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAggregateConfigRules"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAggregateConfigRulesResponse>();
}

/**
 * @summary Queries a list of rules in an account group.
 *
 * @description This topic provides an example on how to query the rules in an account group whose ID is `ca-f632626622af0079****`. The returned result shows a total of one rule and two evaluated resources. The resources are both evaluated as `COMPLIANT`.
 *
 * @param request ListAggregateConfigRulesRequest
 * @return ListAggregateConfigRulesResponse
 */
ListAggregateConfigRulesResponse Client::listAggregateConfigRules(const ListAggregateConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Obtains a list of resources aggregated across regions within all member accounts of a specific account group.
 *
 * @description This topic provides an example on how to query the resources within the member account `100931896542****` of the account group `ca-c560626622af0005****`. The result indicates that eight resources are queried.
 *
 * @param request ListAggregateDiscoveredResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAggregateDiscoveredResourcesResponse
 */
ListAggregateDiscoveredResourcesResponse Client::listAggregateDiscoveredResourcesWithOptions(const ListAggregateDiscoveredResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasEndUpdateTimestamp()) {
    query["EndUpdateTimestamp"] = request.getEndUpdateTimestamp();
  }

  if (!!request.hasExcludeResourceTypes()) {
    query["ExcludeResourceTypes"] = request.getExcludeResourceTypes();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegions()) {
    query["Regions"] = request.getRegions();
  }

  if (!!request.hasResourceAccountId()) {
    query["ResourceAccountId"] = request.getResourceAccountId();
  }

  if (!!request.hasResourceDeleted()) {
    query["ResourceDeleted"] = request.getResourceDeleted();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.getResourceName();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  if (!!request.hasStartUpdateTimestamp()) {
    query["StartUpdateTimestamp"] = request.getStartUpdateTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAggregateDiscoveredResources"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAggregateDiscoveredResourcesResponse>();
}

/**
 * @summary Obtains a list of resources aggregated across regions within all member accounts of a specific account group.
 *
 * @description This topic provides an example on how to query the resources within the member account `100931896542****` of the account group `ca-c560626622af0005****`. The result indicates that eight resources are queried.
 *
 * @param request ListAggregateDiscoveredResourcesRequest
 * @return ListAggregateDiscoveredResourcesResponse
 */
ListAggregateDiscoveredResourcesResponse Client::listAggregateDiscoveredResources(const ListAggregateDiscoveredResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateDiscoveredResourcesWithOptions(request, runtime);
}

/**
 * @summary 获取推荐的托管规则列表-多账号
 *
 * @param request ListAggregateRecommendManagedRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAggregateRecommendManagedRulesResponse
 */
ListAggregateRecommendManagedRulesResponse Client::listAggregateRecommendManagedRulesWithOptions(const ListAggregateRecommendManagedRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasExcludeRegionIdsScope()) {
    query["ExcludeRegionIdsScope"] = request.getExcludeRegionIdsScope();
  }

  if (!!request.hasExcludeResourceGroupIdsScope()) {
    query["ExcludeResourceGroupIdsScope"] = request.getExcludeResourceGroupIdsScope();
  }

  if (!!request.hasExcludeResourceIdsScope()) {
    query["ExcludeResourceIdsScope"] = request.getExcludeResourceIdsScope();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionIdsScope()) {
    query["RegionIdsScope"] = request.getRegionIdsScope();
  }

  if (!!request.hasResourceGroupIdsScope()) {
    query["ResourceGroupIdsScope"] = request.getResourceGroupIdsScope();
  }

  if (!!request.hasResourceIdsScope()) {
    query["ResourceIdsScope"] = request.getResourceIdsScope();
  }

  if (!!request.hasSelectedManagedRuleIdentifiers()) {
    query["SelectedManagedRuleIdentifiers"] = request.getSelectedManagedRuleIdentifiers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAggregateRecommendManagedRules"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAggregateRecommendManagedRulesResponse>();
}

/**
 * @summary 获取推荐的托管规则列表-多账号
 *
 * @param request ListAggregateRecommendManagedRulesRequest
 * @return ListAggregateRecommendManagedRulesResponse
 */
ListAggregateRecommendManagedRulesResponse Client::listAggregateRecommendManagedRules(const ListAggregateRecommendManagedRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateRecommendManagedRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the remediation records of a rule in an account group.
 *
 * @description This topic provides an example on how to query the remediation records of the `cr-d04a626622af00af****` rule in the `ca-edd3626622af00b3****` account group.
 *
 * @param request ListAggregateRemediationExecutionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAggregateRemediationExecutionsResponse
 */
ListAggregateRemediationExecutionsResponse Client::listAggregateRemediationExecutionsWithOptions(const ListAggregateRemediationExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasConfigRuleId()) {
    query["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasExecutionStatus()) {
    query["ExecutionStatus"] = request.getExecutionStatus();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceAccountId()) {
    query["ResourceAccountId"] = request.getResourceAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAggregateRemediationExecutions"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAggregateRemediationExecutionsResponse>();
}

/**
 * @summary Queries the remediation records of a rule in an account group.
 *
 * @description This topic provides an example on how to query the remediation records of the `cr-d04a626622af00af****` rule in the `ca-edd3626622af00b3****` account group.
 *
 * @param request ListAggregateRemediationExecutionsRequest
 * @return ListAggregateRemediationExecutionsResponse
 */
ListAggregateRemediationExecutionsResponse Client::listAggregateRemediationExecutions(const ListAggregateRemediationExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateRemediationExecutionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of remediation templates for a rule in an account group.
 *
 * @description This topic provides an example on how to query the remediation templates of the rule whose ID is `cr-6b7c626622af00b4****` in the account group whose ID is `ca-6b4a626622af0012****`.
 *
 * @param request ListAggregateRemediationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAggregateRemediationsResponse
 */
ListAggregateRemediationsResponse Client::listAggregateRemediationsWithOptions(const ListAggregateRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAggregateRemediations"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAggregateRemediationsResponse>();
}

/**
 * @summary Queries a list of remediation templates for a rule in an account group.
 *
 * @description This topic provides an example on how to query the remediation templates of the rule whose ID is `cr-6b7c626622af00b4****` in the account group whose ID is `ca-6b4a626622af0012****`.
 *
 * @param request ListAggregateRemediationsRequest
 * @return ListAggregateRemediationsResponse
 */
ListAggregateRemediationsResponse Client::listAggregateRemediations(const ListAggregateRemediationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateRemediationsWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance evaluation results of resources in an account group.
 *
 * @description This example shows how to query the compliance evaluation result of the `23642660635396****` resource in the `ca-7f00626622af0041****` account group. The resource is a RAM user. The returned result indicates that the resource is evaluated as `NON_COMPLIANT` by using the `cr-7f7d626622af0041****` rule.
 *
 * @param request ListAggregateResourceEvaluationResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAggregateResourceEvaluationResultsResponse
 */
ListAggregateResourceEvaluationResultsResponse Client::listAggregateResourceEvaluationResultsWithOptions(const ListAggregateResourceEvaluationResultsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasComplianceType()) {
    query["ComplianceType"] = request.getComplianceType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAggregateResourceEvaluationResults"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAggregateResourceEvaluationResultsResponse>();
}

/**
 * @summary Queries the compliance evaluation results of resources in an account group.
 *
 * @description This example shows how to query the compliance evaluation result of the `23642660635396****` resource in the `ca-7f00626622af0041****` account group. The resource is a RAM user. The returned result indicates that the resource is evaluated as `NON_COMPLIANT` by using the `cr-7f7d626622af0041****` rule.
 *
 * @param request ListAggregateResourceEvaluationResultsRequest
 * @return ListAggregateResourceEvaluationResultsResponse
 */
ListAggregateResourceEvaluationResultsResponse Client::listAggregateResourceEvaluationResults(const ListAggregateResourceEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateResourceEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of the resources of a specific resource in an account group.
 *
 * @description This topic provides an example on how to query the disks that are associated with an Elastic Compute Service (ECS) instance in an account group.
 *
 * @param request ListAggregateResourceRelationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAggregateResourceRelationsResponse
 */
ListAggregateResourceRelationsResponse Client::listAggregateResourceRelationsWithOptions(const ListAggregateResourceRelationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRelationType()) {
    query["RelationType"] = request.getRelationType();
  }

  if (!!request.hasResourceAccountId()) {
    query["ResourceAccountId"] = request.getResourceAccountId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTargetResourceId()) {
    query["TargetResourceId"] = request.getTargetResourceId();
  }

  if (!!request.hasTargetResourceType()) {
    query["TargetResourceType"] = request.getTargetResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAggregateResourceRelations"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAggregateResourceRelationsResponse>();
}

/**
 * @summary Queries a list of the resources of a specific resource in an account group.
 *
 * @description This topic provides an example on how to query the disks that are associated with an Elastic Compute Service (ECS) instance in an account group.
 *
 * @param request ListAggregateResourceRelationsRequest
 * @return ListAggregateResourceRelationsResponse
 */
ListAggregateResourceRelationsResponse Client::listAggregateResourceRelations(const ListAggregateResourceRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateResourceRelationsWithOptions(request, runtime);
}

/**
 * @summary Obtains resources in a specific account group based on the fields in the resource properties by using a SELECT statement.
 *
 * @description When you write a `SELECT` statement, you must obtain the fields and the data types of the fields from the property file of the resource type. For more information about property files, see[ Alibaba Cloud Config Resource Schema](https://github.com/aliyun/alibabacloud-config-resource-schema)
 * > 
 * *   Each resource type supported by Cloud Config has a property file. Property files are named based on the related resource types. For example, the property file of the `ACS::ECS::Instance` resource type is named `ACS_ECS_Instance.properties.json`. Property files of different resource types are placed under the `config/properties/resource-types` path.
 * *   For more information about the examples and limits on SQL query statements, see [Examples of SQL query statements](https://help.aliyun.com/document_detail/398718.html) and [Limits on SQL query statements](https://help.aliyun.com/document_detail/398750.html).
 * This topic provides an example on how to obtain all resources whose tag key is `business` and whose tag value is `online` in the account group `ca-4b05626622af000c****` by using the advanced search feature.
 *
 * @param request ListAggregateResourcesByAdvancedSearchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAggregateResourcesByAdvancedSearchResponse
 */
ListAggregateResourcesByAdvancedSearchResponse Client::listAggregateResourcesByAdvancedSearchWithOptions(const ListAggregateResourcesByAdvancedSearchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasSql()) {
    query["Sql"] = request.getSql();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAggregateResourcesByAdvancedSearch"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAggregateResourcesByAdvancedSearchResponse>();
}

/**
 * @summary Obtains resources in a specific account group based on the fields in the resource properties by using a SELECT statement.
 *
 * @description When you write a `SELECT` statement, you must obtain the fields and the data types of the fields from the property file of the resource type. For more information about property files, see[ Alibaba Cloud Config Resource Schema](https://github.com/aliyun/alibabacloud-config-resource-schema)
 * > 
 * *   Each resource type supported by Cloud Config has a property file. Property files are named based on the related resource types. For example, the property file of the `ACS::ECS::Instance` resource type is named `ACS_ECS_Instance.properties.json`. Property files of different resource types are placed under the `config/properties/resource-types` path.
 * *   For more information about the examples and limits on SQL query statements, see [Examples of SQL query statements](https://help.aliyun.com/document_detail/398718.html) and [Limits on SQL query statements](https://help.aliyun.com/document_detail/398750.html).
 * This topic provides an example on how to obtain all resources whose tag key is `business` and whose tag value is `online` in the account group `ca-4b05626622af000c****` by using the advanced search feature.
 *
 * @param request ListAggregateResourcesByAdvancedSearchRequest
 * @return ListAggregateResourcesByAdvancedSearchResponse
 */
ListAggregateResourcesByAdvancedSearchResponse Client::listAggregateResourcesByAdvancedSearch(const ListAggregateResourcesByAdvancedSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateResourcesByAdvancedSearchWithOptions(request, runtime);
}

/**
 * @summary Queries all account groups within the current management account or delegated administrator account.
 *
 * @description The sample request in this topic shows you how to query account groups. A maximum of 10 entries can be returned for the request. As shown in the responses, the account group returned is named as `Test_Group`, its description is `Test account group`, and it is of the `CUSTOM` type, which indicates a custom account group. The account group contains two member accounts.
 *
 * @param tmpReq ListAggregatorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAggregatorsResponse
 */
ListAggregatorsResponse Client::listAggregatorsWithOptions(const ListAggregatorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAggregatorsShrinkRequest request = ListAggregatorsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAggregators"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAggregatorsResponse>();
}

/**
 * @summary Queries all account groups within the current management account or delegated administrator account.
 *
 * @description The sample request in this topic shows you how to query account groups. A maximum of 10 entries can be returned for the request. As shown in the responses, the account group returned is named as `Test_Group`, its description is `Test account group`, and it is of the `CUSTOM` type, which indicates a custom account group. The account group contains two member accounts.
 *
 * @param request ListAggregatorsRequest
 * @return ListAggregatorsResponse
 */
ListAggregatorsResponse Client::listAggregators(const ListAggregatorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregatorsWithOptions(request, runtime);
}

/**
 * @summary Queries all compliance package templates provided by Cloud Config and the details of the compliance package templates.
 *
 * @description A compliance package template is a collection of rules that Cloud Config can create based on compliance scenarios.
 *
 * @param request ListCompliancePackTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCompliancePackTemplatesResponse
 */
ListCompliancePackTemplatesResponse Client::listCompliancePackTemplatesWithOptions(const ListCompliancePackTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompliancePackTemplateId()) {
    query["CompliancePackTemplateId"] = request.getCompliancePackTemplateId();
  }

  if (!!request.hasFilterType()) {
    query["FilterType"] = request.getFilterType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  if (!!request.hasRuleRiskLevel()) {
    query["RuleRiskLevel"] = request.getRuleRiskLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCompliancePackTemplates"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCompliancePackTemplatesResponse>();
}

/**
 * @summary Queries all compliance package templates provided by Cloud Config and the details of the compliance package templates.
 *
 * @description A compliance package template is a collection of rules that Cloud Config can create based on compliance scenarios.
 *
 * @param request ListCompliancePackTemplatesRequest
 * @return ListCompliancePackTemplatesResponse
 */
ListCompliancePackTemplatesResponse Client::listCompliancePackTemplates(const ListCompliancePackTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCompliancePackTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of compliance packages.
 *
 * @description This topic provides an example of how to query compliance packages. The return result shows the details of the `cp-fdc8626622af00f9****` compliance package.
 *
 * @param tmpReq ListCompliancePacksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCompliancePacksResponse
 */
ListCompliancePacksResponse Client::listCompliancePacksWithOptions(const ListCompliancePacksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCompliancePacksShrinkRequest request = ListCompliancePacksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCompliancePacks"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCompliancePacksResponse>();
}

/**
 * @summary Queries a list of compliance packages.
 *
 * @description This topic provides an example of how to query compliance packages. The return result shows the details of the `cp-fdc8626622af00f9****` compliance package.
 *
 * @param request ListCompliancePacksRequest
 * @return ListCompliancePacksResponse
 */
ListCompliancePacksResponse Client::listCompliancePacks(const ListCompliancePacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCompliancePacksWithOptions(request, runtime);
}

/**
 * @summary Queries a list of delivery channels.
 *
 * @param request ListConfigDeliveryChannelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConfigDeliveryChannelsResponse
 */
ListConfigDeliveryChannelsResponse Client::listConfigDeliveryChannelsWithOptions(const ListConfigDeliveryChannelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryChannelIds()) {
    query["DeliveryChannelIds"] = request.getDeliveryChannelIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConfigDeliveryChannels"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConfigDeliveryChannelsResponse>();
}

/**
 * @summary Queries a list of delivery channels.
 *
 * @param request ListConfigDeliveryChannelsRequest
 * @return ListConfigDeliveryChannelsResponse
 */
ListConfigDeliveryChannelsResponse Client::listConfigDeliveryChannels(const ListConfigDeliveryChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConfigDeliveryChannelsWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance evaluation results of resources based on a rule.
 *
 * @description This topic provides an example on how to query the compliance evaluation result of resources based on a rule whose ID is `cr-cac56457e0d900d3****`. The returned result indicates that the `i-hp3e4kvhzqn2s11t****` resource is evaluated as `NON_COMPLIANT` by using the rule. The resource is an Elastic Compute Service (ECS) instance.
 *
 * @param request ListConfigRuleEvaluationResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConfigRuleEvaluationResultsResponse
 */
ListConfigRuleEvaluationResultsResponse Client::listConfigRuleEvaluationResultsWithOptions(const ListConfigRuleEvaluationResultsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompliancePackId()) {
    query["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasComplianceType()) {
    query["ComplianceType"] = request.getComplianceType();
  }

  if (!!request.hasConfigRuleId()) {
    query["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegions()) {
    query["Regions"] = request.getRegions();
  }

  if (!!request.hasResourceGroupIds()) {
    query["ResourceGroupIds"] = request.getResourceGroupIds();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConfigRuleEvaluationResults"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConfigRuleEvaluationResultsResponse>();
}

/**
 * @summary Queries the compliance evaluation results of resources based on a rule.
 *
 * @description This topic provides an example on how to query the compliance evaluation result of resources based on a rule whose ID is `cr-cac56457e0d900d3****`. The returned result indicates that the `i-hp3e4kvhzqn2s11t****` resource is evaluated as `NON_COMPLIANT` by using the rule. The resource is an Elastic Compute Service (ECS) instance.
 *
 * @param request ListConfigRuleEvaluationResultsRequest
 * @return ListConfigRuleEvaluationResultsResponse
 */
ListConfigRuleEvaluationResultsResponse Client::listConfigRuleEvaluationResults(const ListConfigRuleEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConfigRuleEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics of compliance evaluation results of the current Alibaba Cloud account.
 *
 * @param request ListConfigRuleEvaluationStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConfigRuleEvaluationStatisticsResponse
 */
ListConfigRuleEvaluationStatisticsResponse Client::listConfigRuleEvaluationStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListConfigRuleEvaluationStatistics"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConfigRuleEvaluationStatisticsResponse>();
}

/**
 * @summary Queries the statistics of compliance evaluation results of the current Alibaba Cloud account.
 *
 * @return ListConfigRuleEvaluationStatisticsResponse
 */
ListConfigRuleEvaluationStatisticsResponse Client::listConfigRuleEvaluationStatistics() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConfigRuleEvaluationStatisticsWithOptions(runtime);
}

/**
 * @summary 规则支持的操作符列表
 *
 * @param request ListConfigRuleOperatorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConfigRuleOperatorsResponse
 */
ListConfigRuleOperatorsResponse Client::listConfigRuleOperatorsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListConfigRuleOperators"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConfigRuleOperatorsResponse>();
}

/**
 * @summary 规则支持的操作符列表
 *
 * @return ListConfigRuleOperatorsResponse
 */
ListConfigRuleOperatorsResponse Client::listConfigRuleOperators() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConfigRuleOperatorsWithOptions(runtime);
}

/**
 * @summary Queries the rules of the current account.
 *
 * @description This topic provides an example on how to query the rules of the current account. The response shows that the current account has a total of one rule and three evaluated resources. The resources are evaluated as compliant.
 *
 * @param tmpReq ListConfigRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConfigRulesResponse
 */
ListConfigRulesResponse Client::listConfigRulesWithOptions(const ListConfigRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListConfigRulesShrinkRequest request = ListConfigRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasCompliancePackId()) {
    query["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasComplianceType()) {
    query["ComplianceType"] = request.getComplianceType();
  }

  if (!!request.hasConfigRuleName()) {
    query["ConfigRuleName"] = request.getConfigRuleName();
  }

  if (!!request.hasConfigRuleState()) {
    query["ConfigRuleState"] = request.getConfigRuleState();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConfigRules"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConfigRulesResponse>();
}

/**
 * @summary Queries the rules of the current account.
 *
 * @description This topic provides an example on how to query the rules of the current account. The response shows that the current account has a total of one rule and three evaluated resources. The resources are evaluated as compliant.
 *
 * @param request ListConfigRulesRequest
 * @return ListConfigRulesResponse
 */
ListConfigRulesResponse Client::listConfigRules(const ListConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Obtains a list of resources aggregated across regions within an Alibaba Cloud account.
 *
 * @description This topic provides an example on how to call the ListDiscoveredResources operation to query the resources in the current Alibaba Cloud account. The returned result indicates that a total of eight resources exist in the account.
 *
 * @param request ListDiscoveredResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDiscoveredResourcesResponse
 */
ListDiscoveredResourcesResponse Client::listDiscoveredResourcesWithOptions(const ListDiscoveredResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndUpdateTimestamp()) {
    query["EndUpdateTimestamp"] = request.getEndUpdateTimestamp();
  }

  if (!!request.hasExcludeResourceTypes()) {
    query["ExcludeResourceTypes"] = request.getExcludeResourceTypes();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegions()) {
    query["Regions"] = request.getRegions();
  }

  if (!!request.hasResourceDeleted()) {
    query["ResourceDeleted"] = request.getResourceDeleted();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.getResourceName();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  if (!!request.hasStartUpdateTimestamp()) {
    query["StartUpdateTimestamp"] = request.getStartUpdateTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDiscoveredResources"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDiscoveredResourcesResponse>();
}

/**
 * @summary Obtains a list of resources aggregated across regions within an Alibaba Cloud account.
 *
 * @description This topic provides an example on how to call the ListDiscoveredResources operation to query the resources in the current Alibaba Cloud account. The returned result indicates that a total of eight resources exist in the account.
 *
 * @param request ListDiscoveredResourcesRequest
 * @return ListDiscoveredResourcesResponse
 */
ListDiscoveredResourcesResponse Client::listDiscoveredResources(const ListDiscoveredResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDiscoveredResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of cloud services that are integrated with Cloud Config and the status of each cloud service.
 *
 * @description This topic provides an example on how to query the cloud services that can be integrated by the current Alibaba Cloud account.
 *
 * @param request ListIntegratedServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntegratedServiceResponse
 */
ListIntegratedServiceResponse Client::listIntegratedServiceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListIntegratedService"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntegratedServiceResponse>();
}

/**
 * @summary Queries a list of cloud services that are integrated with Cloud Config and the status of each cloud service.
 *
 * @description This topic provides an example on how to query the cloud services that can be integrated by the current Alibaba Cloud account.
 *
 * @return ListIntegratedServiceResponse
 */
ListIntegratedServiceResponse Client::listIntegratedService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntegratedServiceWithOptions(runtime);
}

/**
 * @summary Queries a list of managed rules supported by Cloud Config.
 *
 * @description ### [](#)Background information
 * For more information about how to define, execute, and integrate a managed rule, see [Definition and execution of rules](https://help.aliyun.com/document_detail/128273.html).
 * ### [](#)Description
 * This topic provides an example on how to query all managed rules whose keyword is `CDN`. The response shows that 21 managed rules exist.
 *
 * @param request ListManagedRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListManagedRulesResponse
 */
ListManagedRulesResponse Client::listManagedRulesWithOptions(const ListManagedRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilterType()) {
    query["FilterType"] = request.getFilterType();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListManagedRules"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListManagedRulesResponse>();
}

/**
 * @summary Queries a list of managed rules supported by Cloud Config.
 *
 * @description ### [](#)Background information
 * For more information about how to define, execute, and integrate a managed rule, see [Definition and execution of rules](https://help.aliyun.com/document_detail/128273.html).
 * ### [](#)Description
 * This topic provides an example on how to query all managed rules whose keyword is `CDN`. The response shows that 21 managed rules exist.
 *
 * @param request ListManagedRulesRequest
 * @return ListManagedRulesResponse
 */
ListManagedRulesResponse Client::listManagedRules(const ListManagedRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listManagedRulesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of evaluation rules supported by Cloud Config.
 *
 * @description For more information about how to define, execute, and integrate an evaluation rule, see [Definition and execution of evaluation rules](https://help.aliyun.com/document_detail/470802.html).
 * After you create an evaluation rule, a managed rule that has the same settings as the evaluation rule is created. After you create a resource, the managed rule can be used to continuously check the compliance of the resource.
 *
 * @param tmpReq ListPreManagedRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPreManagedRulesResponse
 */
ListPreManagedRulesResponse Client::listPreManagedRulesWithOptions(const ListPreManagedRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPreManagedRulesShrinkRequest request = ListPreManagedRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceTypes()) {
    request.setResourceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceTypes(), "ResourceTypes", "json"));
  }

  json body = {};
  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceTypesShrink()) {
    body["ResourceTypes"] = request.getResourceTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListPreManagedRules"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPreManagedRulesResponse>();
}

/**
 * @summary Queries a list of evaluation rules supported by Cloud Config.
 *
 * @description For more information about how to define, execute, and integrate an evaluation rule, see [Definition and execution of evaluation rules](https://help.aliyun.com/document_detail/470802.html).
 * After you create an evaluation rule, a managed rule that has the same settings as the evaluation rule is created. After you create a resource, the managed rule can be used to continuously check the compliance of the resource.
 *
 * @param request ListPreManagedRulesRequest
 * @return ListPreManagedRulesResponse
 */
ListPreManagedRulesResponse Client::listPreManagedRules(const ListPreManagedRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPreManagedRulesWithOptions(request, runtime);
}

/**
 * @summary 获取推荐的托管规则列表
 *
 * @param request ListRecommendManagedRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecommendManagedRulesResponse
 */
ListRecommendManagedRulesResponse Client::listRecommendManagedRulesWithOptions(const ListRecommendManagedRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExcludeRegionIdsScope()) {
    query["ExcludeRegionIdsScope"] = request.getExcludeRegionIdsScope();
  }

  if (!!request.hasExcludeResourceGroupIdsScope()) {
    query["ExcludeResourceGroupIdsScope"] = request.getExcludeResourceGroupIdsScope();
  }

  if (!!request.hasExcludeResourceIdsScope()) {
    query["ExcludeResourceIdsScope"] = request.getExcludeResourceIdsScope();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionIdsScope()) {
    query["RegionIdsScope"] = request.getRegionIdsScope();
  }

  if (!!request.hasResourceGroupIdsScope()) {
    query["ResourceGroupIdsScope"] = request.getResourceGroupIdsScope();
  }

  if (!!request.hasResourceIdsScope()) {
    query["ResourceIdsScope"] = request.getResourceIdsScope();
  }

  if (!!request.hasSelectedManagedRuleIdentifiers()) {
    query["SelectedManagedRuleIdentifiers"] = request.getSelectedManagedRuleIdentifiers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecommendManagedRules"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecommendManagedRulesResponse>();
}

/**
 * @summary 获取推荐的托管规则列表
 *
 * @param request ListRecommendManagedRulesRequest
 * @return ListRecommendManagedRulesResponse
 */
ListRecommendManagedRulesResponse Client::listRecommendManagedRules(const ListRecommendManagedRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecommendManagedRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the remediation records of a rule.
 *
 * @description This topic provides an example on how to query the remediation records of the rule cr-5392626622af0000\\*\\*\\*\\*.
 *
 * @param request ListRemediationExecutionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRemediationExecutionsResponse
 */
ListRemediationExecutionsResponse Client::listRemediationExecutionsWithOptions(const ListRemediationExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigRuleId()) {
    query["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasExecutionStatus()) {
    query["ExecutionStatus"] = request.getExecutionStatus();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRemediationExecutions"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRemediationExecutionsResponse>();
}

/**
 * @summary Queries the remediation records of a rule.
 *
 * @description This topic provides an example on how to query the remediation records of the rule cr-5392626622af0000\\*\\*\\*\\*.
 *
 * @param request ListRemediationExecutionsRequest
 * @return ListRemediationExecutionsResponse
 */
ListRemediationExecutionsResponse Client::listRemediationExecutions(const ListRemediationExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRemediationExecutionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of remediation templates for a managed rule.
 *
 * @description In this topic, the `oss-bucket-public-write-prohibited` managed rule is used as an example. The return result shows the details of the remediation template of the `OOS` type for the managed rule. OOS represents Operation Orchestration Service.
 *
 * @param request ListRemediationTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRemediationTemplatesResponse
 */
ListRemediationTemplatesResponse Client::listRemediationTemplatesWithOptions(const ListRemediationTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasManagedRuleIdentifier()) {
    query["ManagedRuleIdentifier"] = request.getManagedRuleIdentifier();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRemediationType()) {
    query["RemediationType"] = request.getRemediationType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRemediationTemplates"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRemediationTemplatesResponse>();
}

/**
 * @summary Queries a list of remediation templates for a managed rule.
 *
 * @description In this topic, the `oss-bucket-public-write-prohibited` managed rule is used as an example. The return result shows the details of the remediation template of the `OOS` type for the managed rule. OOS represents Operation Orchestration Service.
 *
 * @param request ListRemediationTemplatesRequest
 * @return ListRemediationTemplatesResponse
 */
ListRemediationTemplatesResponse Client::listRemediationTemplates(const ListRemediationTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRemediationTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the execution of remediation templates.
 *
 * @description This topic provides an example on how to query the remediation templates for the rule whose ID is `cr-6b7c626622af00b4****`.
 *
 * @param request ListRemediationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRemediationsResponse
 */
ListRemediationsResponse Client::listRemediationsWithOptions(const ListRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigRuleIds()) {
    query["ConfigRuleIds"] = request.getConfigRuleIds();
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
    {"action" , "ListRemediations"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRemediationsResponse>();
}

/**
 * @summary Queries the information about the execution of remediation templates.
 *
 * @description This topic provides an example on how to query the remediation templates for the rule whose ID is `cr-6b7c626622af00b4****`.
 *
 * @param request ListRemediationsRequest
 * @return ListRemediationsResponse
 */
ListRemediationsResponse Client::listRemediations(const ListRemediationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRemediationsWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance evaluation results of resources.
 *
 * @description In this example, the compliance evaluation result of the `23642660635396****` resource is queried and the resource is a RAM user. The returned result indicates that the resource is evaluated as `NON_COMPLIANT` by using the `cr-7f7d626622af0041****` rule.
 *
 * @param request ListResourceEvaluationResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceEvaluationResultsResponse
 */
ListResourceEvaluationResultsResponse Client::listResourceEvaluationResultsWithOptions(const ListResourceEvaluationResultsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComplianceType()) {
    query["ComplianceType"] = request.getComplianceType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceEvaluationResults"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceEvaluationResultsResponse>();
}

/**
 * @summary Queries the compliance evaluation results of resources.
 *
 * @description In this example, the compliance evaluation result of the `23642660635396****` resource is queried and the resource is a RAM user. The returned result indicates that the resource is evaluated as `NON_COMPLIANT` by using the `cr-7f7d626622af0041****` rule.
 *
 * @param request ListResourceEvaluationResultsRequest
 * @return ListResourceEvaluationResultsResponse
 */
ListResourceEvaluationResultsResponse Client::listResourceEvaluationResults(const ListResourceEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of resources that associate with a specific resource.
 *
 * @description For information about the Alibaba Cloud services and resource types supported by Cloud Config, see [Alibaba Cloud services and resource types supported by Cloud Config](https://help.aliyun.com/document_detail/127411.html).
 * This topic provides an example on how to query the information about the disks that are attached to an Elastic Compute Service (ECS) instance named `i-j6cajg9yrfoh4sas****` that is created by the current Alibaba Cloud account in the China (Shanghai) region.
 *
 * @param request ListResourceRelationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceRelationsResponse
 */
ListResourceRelationsResponse Client::listResourceRelationsWithOptions(const ListResourceRelationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRelationType()) {
    query["RelationType"] = request.getRelationType();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTargetResourceId()) {
    query["TargetResourceId"] = request.getTargetResourceId();
  }

  if (!!request.hasTargetResourceType()) {
    query["TargetResourceType"] = request.getTargetResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceRelations"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceRelationsResponse>();
}

/**
 * @summary Queries a list of resources that associate with a specific resource.
 *
 * @description For information about the Alibaba Cloud services and resource types supported by Cloud Config, see [Alibaba Cloud services and resource types supported by Cloud Config](https://help.aliyun.com/document_detail/127411.html).
 * This topic provides an example on how to query the information about the disks that are attached to an Elastic Compute Service (ECS) instance named `i-j6cajg9yrfoh4sas****` that is created by the current Alibaba Cloud account in the China (Shanghai) region.
 *
 * @param request ListResourceRelationsRequest
 * @return ListResourceRelationsResponse
 */
ListResourceRelationsResponse Client::listResourceRelations(const ListResourceRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceRelationsWithOptions(request, runtime);
}

/**
 * @summary Obtains resources based on the fields in the resource properties by using a SELECT statement.
 *
 * @description When you write a `SELECT` statement, you must obtain the fields and the data types of the fields from the property file of the resource type. For more information about property files, see [Alibaba Cloud Config Resource Schema](https://github.com/aliyun/alibabacloud-config-resource-schema).
 * > 
 * *   Each resource type supported by Cloud Config has a property file. Property files are named based on the related resource types. For example, the property file of the `ACS::ECS::Instance` resource type is named `ACS_ECS_Instance.properties.json`. Property files of different resource types are placed under the `config/properties/resource-types` path.
 * *   For more information about the examples and limits on SQL query statements, see [Examples of SQL query statements](https://help.aliyun.com/document_detail/398718.html) and [Limits on SQL query statements](https://help.aliyun.com/document_detail/398750.html).
 * This topic provides an example on how to obtain all resources whose tag key is `business` and whose tag value is `online` within the current account by using the advanced search feature.
 *
 * @param request ListResourcesByAdvancedSearchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourcesByAdvancedSearchResponse
 */
ListResourcesByAdvancedSearchResponse Client::listResourcesByAdvancedSearchWithOptions(const ListResourcesByAdvancedSearchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSql()) {
    query["Sql"] = request.getSql();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourcesByAdvancedSearch"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourcesByAdvancedSearchResponse>();
}

/**
 * @summary Obtains resources based on the fields in the resource properties by using a SELECT statement.
 *
 * @description When you write a `SELECT` statement, you must obtain the fields and the data types of the fields from the property file of the resource type. For more information about property files, see [Alibaba Cloud Config Resource Schema](https://github.com/aliyun/alibabacloud-config-resource-schema).
 * > 
 * *   Each resource type supported by Cloud Config has a property file. Property files are named based on the related resource types. For example, the property file of the `ACS::ECS::Instance` resource type is named `ACS_ECS_Instance.properties.json`. Property files of different resource types are placed under the `config/properties/resource-types` path.
 * *   For more information about the examples and limits on SQL query statements, see [Examples of SQL query statements](https://help.aliyun.com/document_detail/398718.html) and [Limits on SQL query statements](https://help.aliyun.com/document_detail/398750.html).
 * This topic provides an example on how to obtain all resources whose tag key is `business` and whose tag value is `online` within the current account by using the advanced search feature.
 *
 * @param request ListResourcesByAdvancedSearchRequest
 * @return ListResourcesByAdvancedSearchResponse
 */
ListResourcesByAdvancedSearchResponse Client::listResourcesByAdvancedSearch(const ListResourcesByAdvancedSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourcesByAdvancedSearchWithOptions(request, runtime);
}

/**
 * @summary Queries the cloud services and resource types that are supported by Cloud Config.
 *
 * @description This topic provides an example on how to query the Alibaba Cloud services and resource types supported by a Cloud Config.
 *
 * @param request ListSupportedProductsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSupportedProductsResponse
 */
ListSupportedProductsResponse Client::listSupportedProductsWithOptions(const ListSupportedProductsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSupportedProducts"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSupportedProductsResponse>();
}

/**
 * @summary Queries the cloud services and resource types that are supported by Cloud Config.
 *
 * @description This topic provides an example on how to query the Alibaba Cloud services and resource types supported by a Cloud Config.
 *
 * @param request ListSupportedProductsRequest
 * @return ListSupportedProductsResponse
 */
ListSupportedProductsResponse Client::listSupportedProducts(const ListSupportedProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSupportedProductsWithOptions(request, runtime);
}

/**
 * @summary Queries tags that are added to specified resources.
 *
 * @param tmpReq ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTagResourcesShrinkRequest request = ListTagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json body = {};
  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagShrink()) {
    body["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2020-09-07"},
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
 * @summary Queries tags that are added to specified resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Submits the evaluation results of a rule from Function Compute.
 *
 * @description For more information about the definition, use scenarios, and execution of custom function rules, see [Definition and execution of custom function rules](https://help.aliyun.com/document_detail/127405.html).
 *
 * @param request PutEvaluationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutEvaluationsResponse
 */
PutEvaluationsResponse Client::putEvaluationsWithOptions(const PutEvaluationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeleteMode()) {
    body["DeleteMode"] = request.getDeleteMode();
  }

  if (!!request.hasEvaluations()) {
    body["Evaluations"] = request.getEvaluations();
  }

  if (!!request.hasResultToken()) {
    body["ResultToken"] = request.getResultToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PutEvaluations"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutEvaluationsResponse>();
}

/**
 * @summary Submits the evaluation results of a rule from Function Compute.
 *
 * @description For more information about the definition, use scenarios, and execution of custom function rules, see [Definition and execution of custom function rules](https://help.aliyun.com/document_detail/127405.html).
 *
 * @param request PutEvaluationsRequest
 * @return PutEvaluationsResponse
 */
PutEvaluationsResponse Client::putEvaluations(const PutEvaluationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putEvaluationsWithOptions(request, runtime);
}

/**
 * @summary Re-evaluates resources that are evaluated based on a rule after the evaluation results on some resources of an ignored rule in an account group are resumed.
 *
 * @description ### [](#)Prerequisites
 * One or more non-compliant resources that are evaluated by a rule are ignored. For more information, see [IgnoreAggregateEvaluationResults](https://help.aliyun.com/document_detail/607054.html).
 * ### [](#)Description
 * This topic provides an example on how to re-evaluate the non-compliant resource that is evaluated by the `cr-7e72626622af0051****` rule of the `120886317861****` member in the `ca-5b6c626622af008f****` group account. The ID of the region in which the resource resides is `cn-beijing`, the type of the resource is `ACS::SLB::LoadBalancer`, and the ID of the resource is `lb-hp3a3b4ztyfm2plgm****`.
 *
 * @param tmpReq RevertAggregateEvaluationResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevertAggregateEvaluationResultsResponse
 */
RevertAggregateEvaluationResultsResponse Client::revertAggregateEvaluationResultsWithOptions(const RevertAggregateEvaluationResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RevertAggregateEvaluationResultsShrinkRequest request = RevertAggregateEvaluationResultsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResources()) {
    request.setResourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResources(), "Resources", "json"));
  }

  json body = {};
  if (!!request.hasAggregatorId()) {
    body["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasConfigRuleId()) {
    body["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasResourcesShrink()) {
    body["Resources"] = request.getResourcesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RevertAggregateEvaluationResults"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevertAggregateEvaluationResultsResponse>();
}

/**
 * @summary Re-evaluates resources that are evaluated based on a rule after the evaluation results on some resources of an ignored rule in an account group are resumed.
 *
 * @description ### [](#)Prerequisites
 * One or more non-compliant resources that are evaluated by a rule are ignored. For more information, see [IgnoreAggregateEvaluationResults](https://help.aliyun.com/document_detail/607054.html).
 * ### [](#)Description
 * This topic provides an example on how to re-evaluate the non-compliant resource that is evaluated by the `cr-7e72626622af0051****` rule of the `120886317861****` member in the `ca-5b6c626622af008f****` group account. The ID of the region in which the resource resides is `cn-beijing`, the type of the resource is `ACS::SLB::LoadBalancer`, and the ID of the resource is `lb-hp3a3b4ztyfm2plgm****`.
 *
 * @param request RevertAggregateEvaluationResultsRequest
 * @return RevertAggregateEvaluationResultsResponse
 */
RevertAggregateEvaluationResultsResponse Client::revertAggregateEvaluationResults(const RevertAggregateEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revertAggregateEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary Re-evaluates resources that are evaluated based on a rule after the evaluation results on some resources of an ignored rule are resumed.
 *
 * @description ### [](#)Prerequisites
 * One or more non-compliant resources that are evaluated by a rule are ignored. For more information, see [IgnoreEvaluationResults](https://help.aliyun.com/document_detail/606990.html).
 * ### [](#)Description
 * This topic provides an example on how to re-evaluate the `lb-hp3a3b4ztyfm2plgm****` non-compliant resource that is evaluated by the `cr-7e72626622af0051****` rule. The ID of the region in which the resource resides is`cn-beijing`, the type of the resource is `ACS::SLB::LoadBalancer`, and the ID of the resource is `lb-hp3a3b4ztyfm2plgm****`.
 *
 * @param tmpReq RevertEvaluationResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevertEvaluationResultsResponse
 */
RevertEvaluationResultsResponse Client::revertEvaluationResultsWithOptions(const RevertEvaluationResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RevertEvaluationResultsShrinkRequest request = RevertEvaluationResultsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResources()) {
    request.setResourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResources(), "Resources", "json"));
  }

  json body = {};
  if (!!request.hasConfigRuleId()) {
    body["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasResourcesShrink()) {
    body["Resources"] = request.getResourcesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RevertEvaluationResults"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevertEvaluationResultsResponse>();
}

/**
 * @summary Re-evaluates resources that are evaluated based on a rule after the evaluation results on some resources of an ignored rule are resumed.
 *
 * @description ### [](#)Prerequisites
 * One or more non-compliant resources that are evaluated by a rule are ignored. For more information, see [IgnoreEvaluationResults](https://help.aliyun.com/document_detail/606990.html).
 * ### [](#)Description
 * This topic provides an example on how to re-evaluate the `lb-hp3a3b4ztyfm2plgm****` non-compliant resource that is evaluated by the `cr-7e72626622af0051****` rule. The ID of the region in which the resource resides is`cn-beijing`, the type of the resource is `ACS::SLB::LoadBalancer`, and the ID of the resource is `lb-hp3a3b4ztyfm2plgm****`.
 *
 * @param request RevertEvaluationResultsRequest
 * @return RevertEvaluationResultsResponse
 */
RevertEvaluationResultsResponse Client::revertEvaluationResults(const RevertEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revertEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary Re-evaluates the compliance of resources based on a rule or based on all rules in a compliance package in a specific account group.
 *
 * @description > After you call this operation, the compliance evaluation is performed only once. To query the compliance evaluation results returned by the rule, call the ListAggregateConfigRuleEvaluationResults operation. For more information, see [ListAggregateConfigRuleEvaluationResults](https://help.aliyun.com/document_detail/265979.html).
 * The sample request in this topic shows how to use the `cr-c169626622af009f****` rule in the `ca-3a58626622af0005****` account group to evaluate resources.
 *
 * @param request StartAggregateConfigRuleEvaluationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAggregateConfigRuleEvaluationResponse
 */
StartAggregateConfigRuleEvaluationResponse Client::startAggregateConfigRuleEvaluationWithOptions(const StartAggregateConfigRuleEvaluationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasCompliancePackId()) {
    query["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasConfigRuleId()) {
    query["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasRevertEvaluation()) {
    query["RevertEvaluation"] = request.getRevertEvaluation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartAggregateConfigRuleEvaluation"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartAggregateConfigRuleEvaluationResponse>();
}

/**
 * @summary Re-evaluates the compliance of resources based on a rule or based on all rules in a compliance package in a specific account group.
 *
 * @description > After you call this operation, the compliance evaluation is performed only once. To query the compliance evaluation results returned by the rule, call the ListAggregateConfigRuleEvaluationResults operation. For more information, see [ListAggregateConfigRuleEvaluationResults](https://help.aliyun.com/document_detail/265979.html).
 * The sample request in this topic shows how to use the `cr-c169626622af009f****` rule in the `ca-3a58626622af0005****` account group to evaluate resources.
 *
 * @param request StartAggregateConfigRuleEvaluationRequest
 * @return StartAggregateConfigRuleEvaluationResponse
 */
StartAggregateConfigRuleEvaluationResponse Client::startAggregateConfigRuleEvaluation(const StartAggregateConfigRuleEvaluationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAggregateConfigRuleEvaluationWithOptions(request, runtime);
}

/**
 * @summary Performs a remediation operation by using a rule in an account group.
 *
 * @description This topic provides an example on how to manually perform a remediation operation by using the rule whose ID is `cr-6b7c626622af00b4****` in the account group whose ID is `ca-6b4a626622af0012****`. The return result shows that the manual execution is successful.
 *
 * @param request StartAggregateRemediationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAggregateRemediationResponse
 */
StartAggregateRemediationResponse Client::startAggregateRemediationWithOptions(const StartAggregateRemediationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasConfigRuleId()) {
    query["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasResourceAccountId()) {
    query["ResourceAccountId"] = request.getResourceAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartAggregateRemediation"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartAggregateRemediationResponse>();
}

/**
 * @summary Performs a remediation operation by using a rule in an account group.
 *
 * @description This topic provides an example on how to manually perform a remediation operation by using the rule whose ID is `cr-6b7c626622af00b4****` in the account group whose ID is `ca-6b4a626622af0012****`. The return result shows that the manual execution is successful.
 *
 * @param request StartAggregateRemediationRequest
 * @return StartAggregateRemediationResponse
 */
StartAggregateRemediationResponse Client::startAggregateRemediation(const StartAggregateRemediationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAggregateRemediationWithOptions(request, runtime);
}

/**
 * @summary Re-evaluates the compliance of resources based on a rule or based on all rules in a compliance package.
 *
 * @description In this example, the cr-9920626622af0035\\*\\*\\*\\* rule is used to re-evaluate the compliance of resources.
 *
 * @param request StartConfigRuleEvaluationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartConfigRuleEvaluationResponse
 */
StartConfigRuleEvaluationResponse Client::startConfigRuleEvaluationWithOptions(const StartConfigRuleEvaluationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompliancePackId()) {
    query["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasConfigRuleId()) {
    query["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasRevertEvaluation()) {
    query["RevertEvaluation"] = request.getRevertEvaluation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartConfigRuleEvaluation"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartConfigRuleEvaluationResponse>();
}

/**
 * @summary Re-evaluates the compliance of resources based on a rule or based on all rules in a compliance package.
 *
 * @description In this example, the cr-9920626622af0035\\*\\*\\*\\* rule is used to re-evaluate the compliance of resources.
 *
 * @param request StartConfigRuleEvaluationRequest
 * @return StartConfigRuleEvaluationResponse
 */
StartConfigRuleEvaluationResponse Client::startConfigRuleEvaluation(const StartConfigRuleEvaluationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startConfigRuleEvaluationWithOptions(request, runtime);
}

/**
 * @summary 触发单资源重新评估
 *
 * @param request StartConfigRuleEvaluationByResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartConfigRuleEvaluationByResourceResponse
 */
StartConfigRuleEvaluationByResourceResponse Client::startConfigRuleEvaluationByResourceWithOptions(const StartConfigRuleEvaluationByResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartConfigRuleEvaluationByResource"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartConfigRuleEvaluationByResourceResponse>();
}

/**
 * @summary 触发单资源重新评估
 *
 * @param request StartConfigRuleEvaluationByResourceRequest
 * @return StartConfigRuleEvaluationByResourceResponse
 */
StartConfigRuleEvaluationByResourceResponse Client::startConfigRuleEvaluationByResource(const StartConfigRuleEvaluationByResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startConfigRuleEvaluationByResourceWithOptions(request, runtime);
}

/**
 * @summary Enables Cloud Config to monitor the resources of your Alibaba Cloud account.
 *
 * @description This topic provides an example on how to enable Cloud Config to monitor the resources of your Alibaba Cloud account.
 *
 * @param request StartConfigurationRecorderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartConfigurationRecorderResponse
 */
StartConfigurationRecorderResponse Client::startConfigurationRecorderWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "StartConfigurationRecorder"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartConfigurationRecorderResponse>();
}

/**
 * @summary Enables Cloud Config to monitor the resources of your Alibaba Cloud account.
 *
 * @description This topic provides an example on how to enable Cloud Config to monitor the resources of your Alibaba Cloud account.
 *
 * @return StartConfigurationRecorderResponse
 */
StartConfigurationRecorderResponse Client::startConfigurationRecorder() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startConfigurationRecorderWithOptions(runtime);
}

/**
 * @summary Performs a remediation operation by using a rule.
 *
 * @description This topic provides an example on how to perform a remediation operation by using the rule whose ID is `cr-8a973ac2e2be00a2****`. The returned result shows that the manual execution is successful.
 *
 * @param request StartRemediationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartRemediationResponse
 */
StartRemediationResponse Client::startRemediationWithOptions(const StartRemediationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigRuleId()) {
    query["ConfigRuleId"] = request.getConfigRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartRemediation"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartRemediationResponse>();
}

/**
 * @summary Performs a remediation operation by using a rule.
 *
 * @description This topic provides an example on how to perform a remediation operation by using the rule whose ID is `cr-8a973ac2e2be00a2****`. The returned result shows that the manual execution is successful.
 *
 * @param request StartRemediationRequest
 * @return StartRemediationResponse
 */
StartRemediationResponse Client::startRemediation(const StartRemediationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRemediationWithOptions(request, runtime);
}

/**
 * @summary Deactivates Cloud Config.
 *
 * @description >  After you deactivate Cloud Config, the resource configurations, created rules, and compliance evaluation results that are stored in Cloud Config are automatically cleared and cannot be restored. Proceed with caution.
 *
 * @param request StopConfigurationRecorderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopConfigurationRecorderResponse
 */
StopConfigurationRecorderResponse Client::stopConfigurationRecorderWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "StopConfigurationRecorder"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopConfigurationRecorderResponse>();
}

/**
 * @summary Deactivates Cloud Config.
 *
 * @description >  After you deactivate Cloud Config, the resource configurations, created rules, and compliance evaluation results that are stored in Cloud Config are automatically cleared and cannot be restored. Proceed with caution.
 *
 * @return StopConfigurationRecorderResponse
 */
StopConfigurationRecorderResponse Client::stopConfigurationRecorder() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopConfigurationRecorderWithOptions(runtime);
}

/**
 * @summary Adds tags to resources.
 *
 * @param tmpReq TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TagResourcesShrinkRequest request = TagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagShrink()) {
    body["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2020-09-07"},
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
 * @summary 实时测试通知
 *
 * @param request TriggerReportSendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TriggerReportSendResponse
 */
TriggerReportSendResponse Client::triggerReportSendWithOptions(const TriggerReportSendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasReportTemplateId()) {
    body["ReportTemplateId"] = request.getReportTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TriggerReportSend"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TriggerReportSendResponse>();
}

/**
 * @summary 实时测试通知
 *
 * @param request TriggerReportSendRequest
 * @return TriggerReportSendResponse
 */
TriggerReportSendResponse Client::triggerReportSend(const TriggerReportSendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return triggerReportSendWithOptions(request, runtime);
}

/**
 * @summary Removes tags from specified resources.
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

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    body["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2020-09-07"},
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
 * @summary Removes tags from specified resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a compliance package in an account group.
 *
 * @description This topic provides an example on how to change the value of the `eip-bandwidth-limit` parameter in the rule template of the compliance package `cp-fdc8626622af00f9****` in the account group `ca-f632626622af0079****` to `20`.
 *
 * @param tmpReq UpdateAggregateCompliancePackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAggregateCompliancePackResponse
 */
UpdateAggregateCompliancePackResponse Client::updateAggregateCompliancePackWithOptions(const UpdateAggregateCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAggregateCompliancePackShrinkRequest request = UpdateAggregateCompliancePackShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfigRules()) {
    request.setConfigRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfigRules(), "ConfigRules", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  json body = {};
  if (!!request.hasAggregatorId()) {
    body["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCompliancePackId()) {
    body["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasCompliancePackName()) {
    body["CompliancePackName"] = request.getCompliancePackName();
  }

  if (!!request.hasConfigRulesShrink()) {
    body["ConfigRules"] = request.getConfigRulesShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExcludeRegionIdsScope()) {
    body["ExcludeRegionIdsScope"] = request.getExcludeRegionIdsScope();
  }

  if (!!request.hasExcludeResourceGroupIdsScope()) {
    body["ExcludeResourceGroupIdsScope"] = request.getExcludeResourceGroupIdsScope();
  }

  if (!!request.hasExcludeResourceIdsScope()) {
    body["ExcludeResourceIdsScope"] = request.getExcludeResourceIdsScope();
  }

  json bodyFlat = {};
  if (!!request.hasExcludeTagsScope()) {
    bodyFlat["ExcludeTagsScope"] = request.getExcludeTagsScope();
  }

  if (!!request.hasRegionIdsScope()) {
    body["RegionIdsScope"] = request.getRegionIdsScope();
  }

  if (!!request.hasResourceGroupIdsScope()) {
    body["ResourceGroupIdsScope"] = request.getResourceGroupIdsScope();
  }

  if (!!request.hasResourceIdsScope()) {
    body["ResourceIdsScope"] = request.getResourceIdsScope();
  }

  if (!!request.hasRiskLevel()) {
    body["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasTagKeyScope()) {
    body["TagKeyScope"] = request.getTagKeyScope();
  }

  if (!!request.hasTagValueScope()) {
    body["TagValueScope"] = request.getTagValueScope();
  }

  if (!!request.hasTagsScope()) {
    bodyFlat["TagsScope"] = request.getTagsScope();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAggregateCompliancePack"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAggregateCompliancePackResponse>();
}

/**
 * @summary Modifies the configurations of a compliance package in an account group.
 *
 * @description This topic provides an example on how to change the value of the `eip-bandwidth-limit` parameter in the rule template of the compliance package `cp-fdc8626622af00f9****` in the account group `ca-f632626622af0079****` to `20`.
 *
 * @param request UpdateAggregateCompliancePackRequest
 * @return UpdateAggregateCompliancePackResponse
 */
UpdateAggregateCompliancePackResponse Client::updateAggregateCompliancePack(const UpdateAggregateCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAggregateCompliancePackWithOptions(request, runtime);
}

/**
 * @summary Modifies a delivery channel in an account group.
 *
 * @description This topic provides an example on how to disable a delivery channel in an account group. The ID of the account group is `ca-a4e5626622af0079****`, and the ID of the delivery channel is `cdc-8e45ff4e06a3a8****`. The Status parameter is set to `0`. After the delivery channel is disabled, Cloud Config retains the most recent delivery configuration and stops resource data delivery.
 *
 * @param request UpdateAggregateConfigDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAggregateConfigDeliveryChannelResponse
 */
UpdateAggregateConfigDeliveryChannelResponse Client::updateAggregateConfigDeliveryChannelWithOptions(const UpdateAggregateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregatorId()) {
    query["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCompliantSnapshot()) {
    query["CompliantSnapshot"] = request.getCompliantSnapshot();
  }

  if (!!request.hasConfigurationItemChangeNotification()) {
    query["ConfigurationItemChangeNotification"] = request.getConfigurationItemChangeNotification();
  }

  if (!!request.hasConfigurationSnapshot()) {
    query["ConfigurationSnapshot"] = request.getConfigurationSnapshot();
  }

  if (!!request.hasDeliveryChannelCondition()) {
    query["DeliveryChannelCondition"] = request.getDeliveryChannelCondition();
  }

  if (!!request.hasDeliveryChannelId()) {
    query["DeliveryChannelId"] = request.getDeliveryChannelId();
  }

  if (!!request.hasDeliveryChannelName()) {
    query["DeliveryChannelName"] = request.getDeliveryChannelName();
  }

  if (!!request.hasDeliveryChannelTargetArn()) {
    query["DeliveryChannelTargetArn"] = request.getDeliveryChannelTargetArn();
  }

  if (!!request.hasDeliverySnapshotTime()) {
    query["DeliverySnapshotTime"] = request.getDeliverySnapshotTime();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasNonCompliantNotification()) {
    query["NonCompliantNotification"] = request.getNonCompliantNotification();
  }

  if (!!request.hasOversizedDataOSSTargetArn()) {
    query["OversizedDataOSSTargetArn"] = request.getOversizedDataOSSTargetArn();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAggregateConfigDeliveryChannel"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAggregateConfigDeliveryChannelResponse>();
}

/**
 * @summary Modifies a delivery channel in an account group.
 *
 * @description This topic provides an example on how to disable a delivery channel in an account group. The ID of the account group is `ca-a4e5626622af0079****`, and the ID of the delivery channel is `cdc-8e45ff4e06a3a8****`. The Status parameter is set to `0`. After the delivery channel is disabled, Cloud Config retains the most recent delivery configuration and stops resource data delivery.
 *
 * @param request UpdateAggregateConfigDeliveryChannelRequest
 * @return UpdateAggregateConfigDeliveryChannelResponse
 */
UpdateAggregateConfigDeliveryChannelResponse Client::updateAggregateConfigDeliveryChannel(const UpdateAggregateConfigDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAggregateConfigDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Modifies the description, input parameters, and risk level of a rule in a specific account group.
 *
 * @description This topic provides an example on how to change the risk level of the rule `cr-4e3d626622af0080****` in an account group `ca-a4e5626622af0079****` to `3`, which indicates low risk level.
 *
 * @param tmpReq UpdateAggregateConfigRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAggregateConfigRuleResponse
 */
UpdateAggregateConfigRuleResponse Client::updateAggregateConfigRuleWithOptions(const UpdateAggregateConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAggregateConfigRuleShrinkRequest request = UpdateAggregateConfigRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInputParameters()) {
    request.setInputParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputParameters(), "InputParameters", "json"));
  }

  if (!!tmpReq.hasResourceTypesScope()) {
    request.setResourceTypesScopeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceTypesScope(), "ResourceTypesScope", "simple"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  json body = {};
  if (!!request.hasAccountIdsScope()) {
    body["AccountIdsScope"] = request.getAccountIdsScope();
  }

  if (!!request.hasAggregatorId()) {
    body["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigRuleId()) {
    body["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasConfigRuleName()) {
    body["ConfigRuleName"] = request.getConfigRuleName();
  }

  if (!!request.hasConfigRuleTriggerTypes()) {
    body["ConfigRuleTriggerTypes"] = request.getConfigRuleTriggerTypes();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExcludeAccountIdsScope()) {
    body["ExcludeAccountIdsScope"] = request.getExcludeAccountIdsScope();
  }

  if (!!request.hasExcludeFolderIdsScope()) {
    body["ExcludeFolderIdsScope"] = request.getExcludeFolderIdsScope();
  }

  if (!!request.hasExcludeRegionIdsScope()) {
    body["ExcludeRegionIdsScope"] = request.getExcludeRegionIdsScope();
  }

  if (!!request.hasExcludeResourceGroupIdsScope()) {
    body["ExcludeResourceGroupIdsScope"] = request.getExcludeResourceGroupIdsScope();
  }

  if (!!request.hasExcludeResourceIdsScope()) {
    body["ExcludeResourceIdsScope"] = request.getExcludeResourceIdsScope();
  }

  json bodyFlat = {};
  if (!!request.hasExcludeTagsScope()) {
    bodyFlat["ExcludeTagsScope"] = request.getExcludeTagsScope();
  }

  if (!!request.hasFolderIdsScope()) {
    body["FolderIdsScope"] = request.getFolderIdsScope();
  }

  if (!!request.hasInputParametersShrink()) {
    body["InputParameters"] = request.getInputParametersShrink();
  }

  if (!!request.hasMaximumExecutionFrequency()) {
    body["MaximumExecutionFrequency"] = request.getMaximumExecutionFrequency();
  }

  if (!!request.hasRegionIdsScope()) {
    body["RegionIdsScope"] = request.getRegionIdsScope();
  }

  if (!!request.hasResourceGroupIdsScope()) {
    body["ResourceGroupIdsScope"] = request.getResourceGroupIdsScope();
  }

  if (!!request.hasResourceIdsScope()) {
    body["ResourceIdsScope"] = request.getResourceIdsScope();
  }

  if (!!request.hasResourceNameScope()) {
    body["ResourceNameScope"] = request.getResourceNameScope();
  }

  if (!!request.hasResourceTypesScopeShrink()) {
    body["ResourceTypesScope"] = request.getResourceTypesScopeShrink();
  }

  if (!!request.hasRiskLevel()) {
    body["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasTagKeyLogicScope()) {
    body["TagKeyLogicScope"] = request.getTagKeyLogicScope();
  }

  if (!!request.hasTagKeyScope()) {
    body["TagKeyScope"] = request.getTagKeyScope();
  }

  if (!!request.hasTagValueScope()) {
    body["TagValueScope"] = request.getTagValueScope();
  }

  if (!!request.hasTagsScope()) {
    bodyFlat["TagsScope"] = request.getTagsScope();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAggregateConfigRule"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAggregateConfigRuleResponse>();
}

/**
 * @summary Modifies the description, input parameters, and risk level of a rule in a specific account group.
 *
 * @description This topic provides an example on how to change the risk level of the rule `cr-4e3d626622af0080****` in an account group `ca-a4e5626622af0079****` to `3`, which indicates low risk level.
 *
 * @param request UpdateAggregateConfigRuleRequest
 * @return UpdateAggregateConfigRuleResponse
 */
UpdateAggregateConfigRuleResponse Client::updateAggregateConfigRule(const UpdateAggregateConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAggregateConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies a remediation template for a rule in an account group.
 *
 * @description This topic describes how to change the execution mode of the `crr-909ba2d4716700eb****` remediation setting for a rule in the `ca-6b4a626622af0012****` account group to `AUTO_EXECUTION`, which specifies automatic remediation. This topic also provides a sample request.
 *
 * @param request UpdateAggregateRemediationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAggregateRemediationResponse
 */
UpdateAggregateRemediationResponse Client::updateAggregateRemediationWithOptions(const UpdateAggregateRemediationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAggregatorId()) {
    body["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasInvokeType()) {
    body["InvokeType"] = request.getInvokeType();
  }

  if (!!request.hasParams()) {
    body["Params"] = request.getParams();
  }

  if (!!request.hasRemediationId()) {
    body["RemediationId"] = request.getRemediationId();
  }

  if (!!request.hasRemediationTemplateId()) {
    body["RemediationTemplateId"] = request.getRemediationTemplateId();
  }

  if (!!request.hasRemediationType()) {
    body["RemediationType"] = request.getRemediationType();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateAggregateRemediation"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAggregateRemediationResponse>();
}

/**
 * @summary Modifies a remediation template for a rule in an account group.
 *
 * @description This topic describes how to change the execution mode of the `crr-909ba2d4716700eb****` remediation setting for a rule in the `ca-6b4a626622af0012****` account group to `AUTO_EXECUTION`, which specifies automatic remediation. This topic also provides a sample request.
 *
 * @param request UpdateAggregateRemediationRequest
 * @return UpdateAggregateRemediationResponse
 */
UpdateAggregateRemediationResponse Client::updateAggregateRemediation(const UpdateAggregateRemediationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAggregateRemediationWithOptions(request, runtime);
}

/**
 * @summary The management account or delegated administrator account of a resource directory can be used to modify the name and description of an account group. The management account or delegated administrator account can also be used to add or remove members from the account group.
 *
 * @description This topic provides an example on how to add a member to the account group `ca-dacf86d8314e00eb****`. The member ID is `173808452267****`, the member name is `Tony`, and the member belongs to the resource directory `ResourceDirectory`.
 *
 * @param tmpReq UpdateAggregatorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAggregatorResponse
 */
UpdateAggregatorResponse Client::updateAggregatorWithOptions(const UpdateAggregatorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAggregatorShrinkRequest request = UpdateAggregatorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAggregatorAccounts()) {
    request.setAggregatorAccountsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAggregatorAccounts(), "AggregatorAccounts", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  json body = {};
  if (!!request.hasAggregatorAccountsShrink()) {
    body["AggregatorAccounts"] = request.getAggregatorAccountsShrink();
  }

  if (!!request.hasAggregatorId()) {
    body["AggregatorId"] = request.getAggregatorId();
  }

  if (!!request.hasAggregatorName()) {
    body["AggregatorName"] = request.getAggregatorName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFolderId()) {
    body["FolderId"] = request.getFolderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAggregator"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAggregatorResponse>();
}

/**
 * @summary The management account or delegated administrator account of a resource directory can be used to modify the name and description of an account group. The management account or delegated administrator account can also be used to add or remove members from the account group.
 *
 * @description This topic provides an example on how to add a member to the account group `ca-dacf86d8314e00eb****`. The member ID is `173808452267****`, the member name is `Tony`, and the member belongs to the resource directory `ResourceDirectory`.
 *
 * @param request UpdateAggregatorRequest
 * @return UpdateAggregatorResponse
 */
UpdateAggregatorResponse Client::updateAggregator(const UpdateAggregatorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAggregatorWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a specific compliance package in the current account.
 *
 * @description This topic provides an example on how to change the value of the `eip-bandwidth-limit` parameter of a rule in the compliance package `cp-a8a8626622af0082****` to `20`.
 *
 * @param tmpReq UpdateCompliancePackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCompliancePackResponse
 */
UpdateCompliancePackResponse Client::updateCompliancePackWithOptions(const UpdateCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateCompliancePackShrinkRequest request = UpdateCompliancePackShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfigRules()) {
    request.setConfigRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfigRules(), "ConfigRules", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCompliancePackId()) {
    body["CompliancePackId"] = request.getCompliancePackId();
  }

  if (!!request.hasCompliancePackName()) {
    body["CompliancePackName"] = request.getCompliancePackName();
  }

  if (!!request.hasConfigRulesShrink()) {
    body["ConfigRules"] = request.getConfigRulesShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExcludeRegionIdsScope()) {
    body["ExcludeRegionIdsScope"] = request.getExcludeRegionIdsScope();
  }

  if (!!request.hasExcludeResourceGroupIdsScope()) {
    body["ExcludeResourceGroupIdsScope"] = request.getExcludeResourceGroupIdsScope();
  }

  if (!!request.hasExcludeResourceIdsScope()) {
    body["ExcludeResourceIdsScope"] = request.getExcludeResourceIdsScope();
  }

  json bodyFlat = {};
  if (!!request.hasExcludeTagsScope()) {
    bodyFlat["ExcludeTagsScope"] = request.getExcludeTagsScope();
  }

  if (!!request.hasRegionIdsScope()) {
    body["RegionIdsScope"] = request.getRegionIdsScope();
  }

  if (!!request.hasResourceGroupIdsScope()) {
    body["ResourceGroupIdsScope"] = request.getResourceGroupIdsScope();
  }

  if (!!request.hasResourceIdsScope()) {
    body["ResourceIdsScope"] = request.getResourceIdsScope();
  }

  if (!!request.hasRiskLevel()) {
    body["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasTagKeyScope()) {
    body["TagKeyScope"] = request.getTagKeyScope();
  }

  if (!!request.hasTagValueScope()) {
    body["TagValueScope"] = request.getTagValueScope();
  }

  if (!!request.hasTagsScope()) {
    bodyFlat["TagsScope"] = request.getTagsScope();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCompliancePack"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCompliancePackResponse>();
}

/**
 * @summary Modifies the configurations of a specific compliance package in the current account.
 *
 * @description This topic provides an example on how to change the value of the `eip-bandwidth-limit` parameter of a rule in the compliance package `cp-a8a8626622af0082****` to `20`.
 *
 * @param request UpdateCompliancePackRequest
 * @return UpdateCompliancePackResponse
 */
UpdateCompliancePackResponse Client::updateCompliancePack(const UpdateCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCompliancePackWithOptions(request, runtime);
}

/**
 * @summary Modifies a delivery channel by using the current account.
 *
 * @description In this example, a delivery channel is disabled. The ID of the delivery channel is `cdc-8e45ff4e06a3a8****```. The Status parameter is set to 0. After the delivery channel is disabled, Cloud Config retains the most recent delivery configuration and stops the delivery of resource data.
 *
 * @param request UpdateConfigDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConfigDeliveryChannelResponse
 */
UpdateConfigDeliveryChannelResponse Client::updateConfigDeliveryChannelWithOptions(const UpdateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCompliantSnapshot()) {
    query["CompliantSnapshot"] = request.getCompliantSnapshot();
  }

  if (!!request.hasConfigurationItemChangeNotification()) {
    query["ConfigurationItemChangeNotification"] = request.getConfigurationItemChangeNotification();
  }

  if (!!request.hasConfigurationSnapshot()) {
    query["ConfigurationSnapshot"] = request.getConfigurationSnapshot();
  }

  if (!!request.hasDeliveryChannelCondition()) {
    query["DeliveryChannelCondition"] = request.getDeliveryChannelCondition();
  }

  if (!!request.hasDeliveryChannelId()) {
    query["DeliveryChannelId"] = request.getDeliveryChannelId();
  }

  if (!!request.hasDeliveryChannelName()) {
    query["DeliveryChannelName"] = request.getDeliveryChannelName();
  }

  if (!!request.hasDeliveryChannelTargetArn()) {
    query["DeliveryChannelTargetArn"] = request.getDeliveryChannelTargetArn();
  }

  if (!!request.hasDeliverySnapshotTime()) {
    query["DeliverySnapshotTime"] = request.getDeliverySnapshotTime();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasNonCompliantNotification()) {
    query["NonCompliantNotification"] = request.getNonCompliantNotification();
  }

  if (!!request.hasOversizedDataOSSTargetArn()) {
    query["OversizedDataOSSTargetArn"] = request.getOversizedDataOSSTargetArn();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateConfigDeliveryChannel"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConfigDeliveryChannelResponse>();
}

/**
 * @summary Modifies a delivery channel by using the current account.
 *
 * @description In this example, a delivery channel is disabled. The ID of the delivery channel is `cdc-8e45ff4e06a3a8****```. The Status parameter is set to 0. After the delivery channel is disabled, Cloud Config retains the most recent delivery configuration and stops the delivery of resource data.
 *
 * @param request UpdateConfigDeliveryChannelRequest
 * @return UpdateConfigDeliveryChannelResponse
 */
UpdateConfigDeliveryChannelResponse Client::updateConfigDeliveryChannel(const UpdateConfigDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConfigDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Modifies the description, input parameters, and risk level of a rule.
 *
 * @description This topic provides an example on how to change the risk level of the rule `cr-a260626622af0005****` to `3`, which indicates low risk level.
 *
 * @param tmpReq UpdateConfigRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConfigRuleResponse
 */
UpdateConfigRuleResponse Client::updateConfigRuleWithOptions(const UpdateConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateConfigRuleShrinkRequest request = UpdateConfigRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInputParameters()) {
    request.setInputParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputParameters(), "InputParameters", "json"));
  }

  if (!!tmpReq.hasResourceTypesScope()) {
    request.setResourceTypesScopeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceTypesScope(), "ResourceTypesScope", "simple"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigRuleId()) {
    body["ConfigRuleId"] = request.getConfigRuleId();
  }

  if (!!request.hasConfigRuleName()) {
    body["ConfigRuleName"] = request.getConfigRuleName();
  }

  if (!!request.hasConfigRuleTriggerTypes()) {
    body["ConfigRuleTriggerTypes"] = request.getConfigRuleTriggerTypes();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExcludeRegionIdsScope()) {
    body["ExcludeRegionIdsScope"] = request.getExcludeRegionIdsScope();
  }

  if (!!request.hasExcludeResourceGroupIdsScope()) {
    body["ExcludeResourceGroupIdsScope"] = request.getExcludeResourceGroupIdsScope();
  }

  if (!!request.hasExcludeResourceIdsScope()) {
    body["ExcludeResourceIdsScope"] = request.getExcludeResourceIdsScope();
  }

  json bodyFlat = {};
  if (!!request.hasExcludeTagsScope()) {
    bodyFlat["ExcludeTagsScope"] = request.getExcludeTagsScope();
  }

  if (!!request.hasExtendContent()) {
    body["ExtendContent"] = request.getExtendContent();
  }

  if (!!request.hasInputParametersShrink()) {
    body["InputParameters"] = request.getInputParametersShrink();
  }

  if (!!request.hasMaximumExecutionFrequency()) {
    body["MaximumExecutionFrequency"] = request.getMaximumExecutionFrequency();
  }

  if (!!request.hasRegionIdsScope()) {
    body["RegionIdsScope"] = request.getRegionIdsScope();
  }

  if (!!request.hasResourceGroupIdsScope()) {
    body["ResourceGroupIdsScope"] = request.getResourceGroupIdsScope();
  }

  if (!!request.hasResourceIdsScope()) {
    body["ResourceIdsScope"] = request.getResourceIdsScope();
  }

  if (!!request.hasResourceNameScope()) {
    body["ResourceNameScope"] = request.getResourceNameScope();
  }

  if (!!request.hasResourceTypesScopeShrink()) {
    body["ResourceTypesScope"] = request.getResourceTypesScopeShrink();
  }

  if (!!request.hasRiskLevel()) {
    body["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasTagKeyLogicScope()) {
    body["TagKeyLogicScope"] = request.getTagKeyLogicScope();
  }

  if (!!request.hasTagKeyScope()) {
    body["TagKeyScope"] = request.getTagKeyScope();
  }

  if (!!request.hasTagValueScope()) {
    body["TagValueScope"] = request.getTagValueScope();
  }

  if (!!request.hasTagsScope()) {
    bodyFlat["TagsScope"] = request.getTagsScope();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConfigRule"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConfigRuleResponse>();
}

/**
 * @summary Modifies the description, input parameters, and risk level of a rule.
 *
 * @description This topic provides an example on how to change the risk level of the rule `cr-a260626622af0005****` to `3`, which indicates low risk level.
 *
 * @param request UpdateConfigRuleRequest
 * @return UpdateConfigRuleResponse
 */
UpdateConfigRuleResponse Client::updateConfigRule(const UpdateConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource monitoring scope of the current account.
 *
 * @description This topic provides an example on how to change the resource monitoring scope of the current account to ACS::ECS::Instance.
 *
 * @param request UpdateConfigurationRecorderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConfigurationRecorderResponse
 */
UpdateConfigurationRecorderResponse Client::updateConfigurationRecorderWithOptions(const UpdateConfigurationRecorderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceTypes()) {
    body["ResourceTypes"] = request.getResourceTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateConfigurationRecorder"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConfigurationRecorderResponse>();
}

/**
 * @summary Modifies the resource monitoring scope of the current account.
 *
 * @description This topic provides an example on how to change the resource monitoring scope of the current account to ACS::ECS::Instance.
 *
 * @param request UpdateConfigurationRecorderRequest
 * @return UpdateConfigurationRecorderResponse
 */
UpdateConfigurationRecorderResponse Client::updateConfigurationRecorder(const UpdateConfigurationRecorderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConfigurationRecorderWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the integration of a cloud service.
 *
 * @param request UpdateIntegratedServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIntegratedServiceStatusResponse
 */
UpdateIntegratedServiceStatusResponse Client::updateIntegratedServiceStatusWithOptions(const UpdateIntegratedServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAggregatorDeliveryDataType()) {
    body["AggregatorDeliveryDataType"] = request.getAggregatorDeliveryDataType();
  }

  if (!!request.hasIntegratedTypes()) {
    body["IntegratedTypes"] = request.getIntegratedTypes();
  }

  if (!!request.hasServiceCode()) {
    body["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateIntegratedServiceStatus"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIntegratedServiceStatusResponse>();
}

/**
 * @summary Enables or disables the integration of a cloud service.
 *
 * @param request UpdateIntegratedServiceStatusRequest
 * @return UpdateIntegratedServiceStatusResponse
 */
UpdateIntegratedServiceStatusResponse Client::updateIntegratedServiceStatus(const UpdateIntegratedServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIntegratedServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Updates a remediation template for a rule.
 *
 * @description This topic describes how to change the execution mode of the `crr-909ba2d4716700eb****` remediation setting to `AUTO_EXECUTION`, which specifies automatic remediation. This topic also provides a sample request.
 *
 * @param request UpdateRemediationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRemediationResponse
 */
UpdateRemediationResponse Client::updateRemediationWithOptions(const UpdateRemediationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInvokeType()) {
    body["InvokeType"] = request.getInvokeType();
  }

  if (!!request.hasParams()) {
    body["Params"] = request.getParams();
  }

  if (!!request.hasRemediationId()) {
    body["RemediationId"] = request.getRemediationId();
  }

  if (!!request.hasRemediationTemplateId()) {
    body["RemediationTemplateId"] = request.getRemediationTemplateId();
  }

  if (!!request.hasRemediationType()) {
    body["RemediationType"] = request.getRemediationType();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateRemediation"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRemediationResponse>();
}

/**
 * @summary Updates a remediation template for a rule.
 *
 * @description This topic describes how to change the execution mode of the `crr-909ba2d4716700eb****` remediation setting to `AUTO_EXECUTION`, which specifies automatic remediation. This topic also provides a sample request.
 *
 * @param request UpdateRemediationRequest
 * @return UpdateRemediationResponse
 */
UpdateRemediationResponse Client::updateRemediation(const UpdateRemediationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRemediationWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Config20200907